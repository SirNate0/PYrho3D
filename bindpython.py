
from cppobjects import *

default_preamble = '''
/*********************************************************
 * AUTO GENERATED BINDING CODE - bind.py                 *
 * Please Run bind.py on the source again with different *
 * overrides rather than modfying this file directly.    *
 * Called as:                                            *
 * {callstring:50} *
 *********************************************************/
'''

def varsafe(s):
    return s.replace('::','_').replace('<','_').replace('>','').replace(' ','_').replace(',','_')


def construct(t):
    t = type(t)
    #TODO: must not use stripped type for the pointer version, as const char* != char*
    return ('((%s)0)' % t )if t[-1] == '*' else (t + '()')


# These are needed to prevent the compiler disliking the spaces, so we make it a single word
operator_typedefs = [
    'unsigned long long',
    'unsigned int',
    'unsigned short',
    'unsigned long',
    'long long',
]

# dictionary of classes to override
override_dict = {}

# add the operator typedefs to the dictionary
for td in operator_typedefs:
    override_dict[td] = td.replace(' ','')

# function to get the typename with overrides applied
def typename(t):
    return override_dict[t] if override_dict.has_key(t) else t



## Processing the canon
def add_namespaces(ns, namespaces):
    if ns.name.startswith('__') or ns.name == 'std':
        return
    namespaces.append(ns)
    for n in ns.namespaces:
        add_namespaces(n, namespaces)

force_global = [
    '',
    'Urho3D'
]



# classes = []
# def add_classes_generic(ns):
#     if ns.name.startswith('__') or ns.name == 'std':
#         return
#     if type(ns) is Class:
#         classes.append(ns)
#         for cls in ns.classes:
#             add_classes(cls)
#     elif type(ns) is Namespace:
#         for cls in ns.classes:
#             add_classes(cls)
#         for cls in ns.namespaces:
#             add_classes(cls)
#     else:
#         raise Exception("Failed to add class of type {} != [{},{}]".format(type(ns),Class,Namespace) )
#


exclude_incomplete = ['Urho3D::SArrayCache',
                    'Urho3D::AudioImpl',
                    'Urho3D::VertexDeclaration',
                    'Urho3D::Gradients',
                    'Urho3D::AsyncExecRequest',
                    'Urho3D::FindPathData',
                    'Urho3D::TriangleMeshInterface',
                    'Urho3D::RaycastVehicleData',
                    'Urho3D::FreeTypeLibrary',
                    'Urho3D::SArrayBuffer',
                    'Urho3D::PixelShader',
                    'Urho3D::WorkerThread',
                    'Urho3D::Edge',
                      #Access Specifiers broken:
                    'Urho3D::PhysicsWorld2D::ContactInfo',
                    'Urho3D::AttributeTrait',
                      #Broken From Unique Ptr. TODO: Fix that
                    'Urho3D::TriangleMeshData',
                      # Protected Destructor:
                    'Urho3D::CScriptDictionary',
                    'Urho3D::CScriptArray',

                      ]

abstract = [
     #Abstract classes #TODO: These should actually just ahve their CTORs (py::init) disabled
    'Urho3D::Deserializer',
    'Urho3D::Serializer',
    'Urho3D::OctreeQuery',
    'Urho3D::AbstractFile',
    'Urho3D::Spriter::SpatialTimelineKey',
    'Urho3D::Object',
    'Urho3D::ResourceRouter',
    'Urho3D::SoundStream',
    'Urho3D::Thread',
    'Urho3D::Spriter::TimelineKey',
    'Urho3D::ObjectFactory',
    'Urho3D::Animatable',
    'Urho3D::FontFace',
    'Urho3D::Drawable',
    'Urho3D::Drawable2D',
    'Urho3D::EventHandler',
    'Urho3D::CollisionShape2D',
    'kNet::SharedPtr<kNet::MessageConnection>>'

]

incomplete_types = [
    'pugi::xml_node',
    'pugi::xml_node_struct',
    'pugi::xml_node_set',
    'dtQueryFilter',
    'dtTileCacheAlloc',
    'lua_State',
    'btCollisionShape',
    'btDiscreteDynamicsWorld',
    'kNet::MessageConnection',
    'kNet::SharedPtr<kNet::MessageConnection>',
]

trampoline_types = {
    'Urho3D::Application' : 'PyApplication',
#   'Urho3D::LogicComponent' : 'PyComponent',
}


has_override = [
'Urho3D::String::NPOS',
'Urho3D::String::MIN_CAPACITY',
'Urho3D::String::EMPTY',
'Urho3D::HashBase::MIN_BUCKETS',
'Urho3D::HashBase::MAX_LOAD_FACTOR',
'Urho3D::Audio::SAMPLE_SIZE_MUL'
]



# Better Urho specific version
def add_classes(ns, classes):
    if ns.name.startswith('__') or ns.name == 'std' or ns.canonical in exclude_incomplete:
        return
    if type(ns) is Class:
        if 'Urho3D' in ns.canonical and ns.access in [Access.PUBLIC, Access.NONE] and ns.visibility in [Visibility.EXPORTED, Visibility.DEFAULT]:
            classes.append(ns)
            for cls in ns.classes:
                add_classes(cls, classes)
    elif type(ns) is Namespace:
        for cls in ns.classes:
            add_classes(cls, classes)
        for cls in ns.namespaces:
            add_classes(cls, classes)
    else:
        raise Exception("Failed to add class of type {} != [{},{}]".format(type(ns),Class,Namespace) )


def sort_classes(unsorted, namespaces):
    sorted = []
    lastlen = len(unsorted) + 1
    while lastlen != len(unsorted) > 0:
        lastlen = len(unsorted)
        for c in unsorted:
            #TODO: check for just unsorted classes instead of looking in sorted for unexposed base classes
            if (c.scope is None or (type(c.scope) is Namespace and c.scope in namespaces) or c.scope in sorted) and all(cls not in unsorted for cls in c.required):
                sorted.append(c)
                unsorted.remove(c)
    if len(unsorted) != 0:
        # print '----Sorted----'
        # for c in sorted:
        #     print c.canonical
        # print '---Unsorted---'
        # for c in unsorted:
        #     print c.canonical + ' {} | {}'.format(c.required, c.scope.canonical)
        raise Exception("Could not sort classes. %d remaining. %s" % (len(unsorted),str([c.canonical for c in unsorted])))
    return sorted

def patch_canon(canon):
    try:
        #canon['Urho3D::Application'].vars.append[Variable(None,)]
        canon['Urho3D::Application::engineParameters_'].access = Access.PUBLIC
        canon['Urho3D::Application::engineParameters_'].canonical = 'ApplicationPublicist::engineParameters_'

        # Fix some defaults:
        fix = canon['Urho3D::Spriter::SpriterInstance']
        for m in fix.methods:
            for a in m.params:
                if a.default == 'Default':
                    a.default = 'Urho3D::Spriter::LoopMode::Default'
        for fixkey in canon:
            fix = canon[fixkey]
            if isinstance(fix, Class):
                for m in fix.methods:
                    for a in m.params:
                        if a.default == 'Vector':
                            # a.default = 'Urho3D::Vector'
                            a.default = None # Because we can't get the type
                        elif a.default == 'VariantMap':
                            a.default = 'Urho3D::VariantMap()'

    except KeyError as e:
        print("KEY ERROR")
        print(e)
        print(canon)


def bind(canon, default_namespace, includeThese=[], outputFile=None, preamble=None):
    if isinstance(outputFile,str):
        outputFile = open(outputFile,'w')
    patch_canon(canon)

    print('Adding namespaces')
    namespaces = []
    add_namespaces(default_namespace, namespaces)

    print('Adding classes')
    classes = []
    add_classes(default_namespace, classes)

    print('Sorting classes')
    classes = sort_classes(classes, namespaces)

    class_names = [cls.canonical for cls in classes]
    complete_names = class_names[:] + Type._primitive_types
    complete_names.append('Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>')

    if 'Urho3D::String' in canon:
        classes.remove(canon['Urho3D::String']) #Because we handle it in String_binding.h with a type caster


    #module scope means certain different behaviours for variables and things
    module_scope = [canon[s] for s in force_global if s in canon]

    if preamble is None:
        preamble = default_preamble
    includes = '\n'.join('#include <{}>'.format(i) for i in includeThese)
    typedefs = '\n'.join('typedef {t} {override};'.format(t = td, override=override_dict[td]) for td in override_dict)
    namespaceVars = []
    for ns in namespaces:
        if ns.name: # find the default namsepace
            comment = f'// Export {ns.canonical} namespace as a class'
        else:
            comment = f'// Export global namespace'

        pyns = 'pyclass_Var_' + varsafe(ns.canonical)

        if ns.canonical not in force_global:
            name = ns.name
            fakemodule = 'PythonBindingsFakeModule_' + varsafe(ns.canonical)
            scope = ns.scope.canonical
            parent = 'm'
            if scope not in force_global:
                parent = 'pyclass_Var_' + varsafe(scope)

            binding = f'class {fakemodule} {{}};\nauto {pyns} = py::class_<{fakemodule}>({parent}, "{name}");'
        else:
            binding = f'auto {pyns} = m;'
        namespaceVars.append(comment + '\n' + binding)
    namespaceVars = '\n\n'.join(namespaceVars)


    classVars = []
    classImpls = []
    classImplFuns = []
    for cls in classes:
        classname = cls.name
        fullclass = cls.canonical
        fakemodule = 'PythonBindingsFakeModule' + varsafe(cls.canonical)
        pyclass = 'pyclass_Var_' + varsafe(fullclass)
        baseclass = 'pyclass_Var_' + varsafe(cls.scope.canonical)
        trampolineClass = (', %s' % trampoline_types[cls.canonical]) if cls.canonical in trampoline_types else ''
        ptrclass = (', Urho3D::SharedPtr<%s>' % fullclass) if cls.ref_counted else ''
        inherits = ''.join([', ' + c for c in cls.bases if c in classes])
        # inherits = ''.join([', ' + x['base'] for x in cls['inherits'] ]) TODO: Fix
    #    print (fullclass, ptrclass, inherits)
    #    print fullclass + ptrclass + inherits
        comment = f'// Type {fullclass} Registrations'
        binding = f'auto {pyclass} = py::class_<{fullclass + trampolineClass + ptrclass + inherits}>({baseclass}, "{classname}", "test doc");'
        classVars.append(comment + '\n' + binding)

        impl = f'// Class {classname} Implementation\n{pyclass}\n'

        for f in cls.all_methods:
            assert isinstance(f,Function)
            if f.access is Access.PUBLIC:
                args = ''
                for arg in f.params:
                    if arg.default is not None:
                        args += ', py::arg("%s")=%s' % (arg.name, arg.default)
                    else:
                        args += ', py::arg("%s")' % arg.name
                # incomplete_params =  any([bad in [a.type.stripped for a in f.params] for bad in incomplete_types])
                # return_incomplete = f.return_type.stripped in incomplete_types
                incomplete_params = any([a.type.stripped not in complete_names for a in f.params])
                max_ptr = max(max(a.type.pointer for a in f.params) if len(f.params) else 0,f.return_type.pointer)
                return_incomplete = f.return_type.stripped not in complete_names
                static_state = '_static' if f.static else ''
                #if True or incomplete_ or return_incomplete:
                #    print([(a.type.stripped not in complete_names,a.type.stripped) for a in f.params])
                #    print(f.return_type.stripped not in complete_names,f.return_type.stripped)
                if not any([f.operator, f.destructor, f.variadic, f.deleted,  return_incomplete, incomplete_params, max_ptr > 1]):
                    bad = ''
                else:
                    bad = f'    //{str([a.type.stripped for a in f.params])}; op {f.operator}, ctor {f.constructor}, dtor {f.destructor}, variadic {f.variadic}, deleted {f.deleted}, ret bad {return_incomplete}, param bad {incomplete_params}, max ptr {max_ptr}\n'


                if f.constructor:
                    comment = '//' if bad or (cls.canonical in abstract) else ''
                    impl += f'  {comment}.def(py::init<{f.arg_types_string}>(), "todo: constructor docstring")\n{bad}'
                    if cls.canonical in abstract:
                        impl += f'    // Abstract class {cls.name} -> no init\n'

                elif f.operator:
                    op = f.operator
                    pyfn = '__%s__' % op.name
                    impl += f'  //.def("{pyfn}", ({f.fnptr_type}) &{f.canonical}, py::operator, "todo: operator docstring. Switch to py::self ops.")\n{bad}'

                else:
                    comment = '//' if bad else ''
                    impl += f'  {comment}.def{static_state}("{f.name}", ({f.fnptr_type}) &{f.canonical}, "todo: docstring"{args})\n{bad}'

        for v in cls.vars:
            if v.access is Access.PUBLIC and v.canonical not in has_override:
                write_state = 'only' if v.const else 'write'
                static_state = '_static' if v.static else ''
                name = v.name
                if name.startswith('_'):
                    name = name[1:]
                if name.endswith('_'):
                    name = name[:-1]
                var_bad = v.name in [
                    'NPOS',
                    'MIN_CAPACITY',
                    'EMPTY',
                    'MIN_BUCKETS',
                    'MAX_LOAD_FACTOR',
                    'SAMPLE_SIZE_MUL'
                ]
                if not any([var_bad, v.type.pointer, v.type.array, v.type.reference]):
                    impl += f'  .def_read{write_state}{static_state}("{name}",&{v.canonical}, "todo: var docstring")//{v.type}\n'

        impl += ';'

        fn_impl = f'''void Implement_{varsafe(fullclass)}(py::class_<{fullclass + trampolineClass + ptrclass + inherits}>& {pyclass})
{{
    {impl}
}}'''
        classImplFuns.append(fn_impl)
        classImpls.append(f'Implement_{varsafe(fullclass)}({pyclass});')

    classVars = '\n'.join(classVars)
    classImpls = '\n'.join(classImpls)
    classImplFuns = '\n\n'.join(classImplFuns)
    out = f'''{preamble}



#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/operators.h>
#include <memory>
namespace py = pybind11;


// Urho local
#include "String_binding.h"
#include "PtrBinding.h"
#include "PyTrampolines.h"
#include "ContainerBinding.h"

// From the bind call
{includes}

// Patch Urho things (esp. function default values)
typedef Urho3D::String::Iterator Iterator;


#include <Urho3D/Urho3DAll.h>

typedef Urho3D::Renderer::ShadowMapFilter ShadowMapFilter;
const auto& RIGHT_FORWARD_UP = Urho3D::RaycastVehicle::RIGHT_FORWARD_UP;


//================================================
//Operator typedefs
//================================================
// These are needed to prevent the compiler disliking the spaces, so we make it a single word
{typedefs}


//================================================
// Declare the holder types shared and weak ptr
//================================================
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::SharedPtr<T>, true);
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::WeakPtr<T>, true);

{classImplFuns}

// can do sub-modules, just need to py::import... the other module if it has any required classes first (see Advanced Topics in pybind11 docs)
PYBIND11_MODULE(urho, m) {{
    m.doc() = "Urho3D Python bindings"; // optional module docstring


    //================================================
    // Declare Namespaces
    //================================================
    {namespaceVars}


    //================================================
    // MANUAL:
    //================================================
    // Bind Container classes
    auto pyclass_Var_Urho3D_Vector__int_ = py::bind_Vector<Urho3D::Vector<int>>(pyclass_Var_Urho3D,"Vector_int");

    auto pyclass_Var_Urho3D_VariantMap = py::bind_Map<Urho3D::VariantMap>(pyclass_Var_Urho3D,"VariantMap");


    //================================================
    // Declare Classes
    //================================================
    {classVars}

    //================================================
    // Implement Classes
    //================================================
    {classImpls}


    //================================================
    // MANUAL:
    //================================================
    // Turn on implicit conversions
    py::implicitly_convertible<bool, Urho3D::Variant>();
    py::implicitly_convertible<int, Urho3D::Variant>();
    py::implicitly_convertible<float, Urho3D::Variant>();
    py::implicitly_convertible<Urho3D::String, Urho3D::Variant>();
    py::implicitly_convertible<Urho3D::String, Urho3D::StringHash>();


}}

'''#.format(includes=includes, preamble=preamble)
    print('~~~~~~~~~~~~~~~~~')
    print(out)
    if outputFile is not None:
        outputFile.write(out)
        outputFile.close()
    return out






import sys
from mako.template import Template

def render_bindings(filename,**dict):
    template = ''
    # with open('binding.moustache') as f:
    with open('bind-template.mako') as f:
        for line in f:
            template += line
    # print(json.dumps(dict,indent=1))
    # print_bools(dict)
    # s = mustache.render(template,dict)
    from mako import exceptions
    try:
        s = Template(template).render(**dict)
        # print(s)
        with open(filename,'w') as f:
            f.write(s)
        with open(filename + '.failed.html','w') as f:
            f.write('<h1>SUCCESS</h1><br><br>')
            f.write(s.replace('\n','<br>'))
            f.write("""
<html>
<head>
    <script src='http://alexgorbatchev.com/pub/sh/current/scripts/shBrushCpp.js' type='text/javascript'/>
</head>
<body>
<pre class="brush:cpp;">
{}
</pre>
</body>
</html>
            """.format(s))
        print("SUCCESS!!!")
    except Exception as e:
        s = exceptions.html_error_template().render().decode("utf-8")
        # s = exceptions.text_error_template().render()
        with open(filename + '.failed.html','w') as f:
            f.write(s)
        print("FAILED!!!")
        print(e)
        print(e.__traceback__)
        print("AILED!!!")
        print("ILED!!!")
        print("LED!!!")
        print("ED!!!")
        print("D!!!")



# exit()

# namespaces = []
# def add_namespaces(ns):
#     if ns.name.startswith('__') or ns.name == 'std':
#         return
#     namespaces.append(ns)
#     for n in ns.namespaces:
#         add_namespaces(n)
#
# force_global = [
#     '::Urho3D'
# ]
#
# add_namespaces(default_namespace)
#
# classes = []
# def add_classes(ns):
#     if ns.name.startswith('__') or ns.name == 'std':
#         return
#     if type(ns) is Class:
#         classes.append(ns)
#         for cls in ns.classes:
#             add_classes(cls)
#     elif type(ns) is Namespace:
#         for cls in ns.classes:
#             add_classes(cls)
#         for cls in ns.namespaces:
#             add_classes(cls)
#
# add_classes(default_namespace)
#
# def sort_classes(unsorted):
#     sorted = []
#     lastlen = len(unsorted) + 1
#     i = 0
#     while lastlen != len(unsorted) > 0:
#         i+=1
#         print(i)
#         lastlen = len(unsorted)
#         for c in unsorted:
#             if (c.scope is None or (type(c.scope) is Namespace and c.scope in namespaces) or c.scope in sorted) and all(cls in sorted for cls in c.required):
#                 sorted.append(c)
#                 unsorted.remove(c)
#     if len(unsorted) != 0:
#         print('----Sorted----')
#         for c in sorted:
#             print(c.canonical)
#         print('---Unsorted---')
#         for c in unsorted:
#             print(c.canonical + ' {} | {}'.format(c.required, c.scope.canonical))
#         raise Exception("Could not sort classes. %d remaining." % len(unsorted))
#     return sorted
#
# classes = sort_classes(classes)
# # print(classes)
# print(len(classes))
#
#
# # pprint(canon)
#
# # if len(sys.argv) > 2 and sys.argv[2] == 'all':
# #     find_all(tu.cursor, '', 11)
# #     print('finding all')
# #     exit()
# # else:
# #     # find_classes(tu.cursor,'')
# #     ns_list = []
# #     get_namespace(tu.cursor,ns_list)
# #     list = merge_namespaces(ns_list)
# #     dict = {'namespaces' : list,
# #             'file' : sys.argv[1]}
# #     #get_class(tu.cursor,class_list)
# #     #dict = {'ref-classes' : class_list}
# #     render_bindings(dict)