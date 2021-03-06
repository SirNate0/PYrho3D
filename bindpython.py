
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
    return override_dict.get(t,t)#override_dict[t] if override_dict.has_key(t) else t



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
                      # not SharedPtr
                    # 'Urho3D::GPUObject'
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


# Better Urho specific version
def add_enums(ns, enums):
    if ns.name.startswith('__') or ns.name == 'std' or ns.canonical in exclude_incomplete:
        return
    if type(ns) is Enumeration:
        print('Found enum')
        if 'Urho3D' in ns.canonical and ns.access in [Access.PUBLIC, Access.NONE] and ns.visibility in [Visibility.EXPORTED, Visibility.DEFAULT]:
            enums.append(ns)
    elif type(ns) is Class:
        if 'Urho3D' in ns.canonical and ns.access in [Access.PUBLIC, Access.NONE] and ns.visibility in [Visibility.EXPORTED, Visibility.DEFAULT]:
            for cls in ns.classes + ns.enums:
                add_enums(cls, enums)
    elif type(ns) is Namespace:
        for cls in ns.namespaces + ns.classes + ns.enums:
            add_enums(cls, enums)
    else:
        raise Exception("Failed to add enum of type {} != [{},{}]".format(type(ns),Enumeration,Class,Namespace) )


def scopeFromM(scope):
    if scope in force_global:
        return 'm'
    else:
        return scopeFromM(canon[scope].scope.canonical) + '.attr("{}")'.format(canon[scope].name)

def scopeSetToVars(canonical_set):
    vars = []
    for s in canonical_set:
        parent = scopeFromM(s)
        type = 'py::module&' if parent == 'm' else 'py::object'
        vars.append(f'{type} pyclass_Var_{varsafe(s)} = {parent};')
    return vars

def patch_canon(canon):
    try:
        #canon['Urho3D::Application'].vars.append[Variable(None,)]
        canon['Urho3D::Application::engineParameters_'].access = Access.PUBLIC
        canon['Urho3D::Application::engineParameters_'].canonical = 'ApplicationPublicist::engineParameters_'

        # Fix some defaults:
        fix = canon.get('Urho3D::Spriter::SpriterInstance')
        if fix is not None:
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

        # TODO: Support template functions. For now, we'll just
        # del canon['Urho3D::GetVariantType'] <- doesn't exclude function as it is based on the namespace functions
        scope = canon['Urho3D']
        scope.functions = [f for f in scope.functions if f.name != 'GetVariantType']
    except KeyError as e:
        print("KEY ERROR")
        print(e)
        #print(canon)
        exit()


def bind(canon, default_namespace, includeThese=[], outputFile=None, outputCount=1, splitMain=2, preamble=None):

    if not outputCount:
        import multiprocessing
        outputCount = multiprocessing.cpu_count()
    print('Using {} output files'.format(outputCount))

    if isinstance(outputFile,str):
        outputFile = open(outputFile,'w')

    of_name = outputFile.name
    extraOfNames = of_name.replace('.c','{}.c')
    extraFiles = []
    for i in range(1,int(outputCount)):
        extraName = extraOfNames.format(i)
        extraFiles.append(open(extraName,'w'))

    splitMain = min(splitMain,1+len(extraFiles))

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

    if 'Urho3D::String' in canon:
        classes.remove(canon['Urho3D::String']) #Because we handle it in String_binding.h with a type caster

    print('Adding enums')
    enums = []
    add_enums(default_namespace, enums)

    enum_names = [e.canonical for e in enums]


    complete_names = class_names[:] + enum_names[:] + Type._primitive_types
    complete_names.append('Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>')
    complete_names.append('Urho3D::VariantMap')
    complete_names.append('Urho3D::HashMap<Urho3D::StringHash, Urho3D::String>')
    complete_names.append('Urho3D::StringMap')
    complete_names.append('Urho3D::Vector<Urho3D::Variant>')
    complete_names.append('Urho3D::VariantVector')
    complete_names.append('Urho3D::Vector<Urho3D::String>')
    complete_names.append('Urho3D::StringVector')
    complete_names.append('Urho3D::PODVector<unsigned char>')

    #module scope means certain different behaviours for variables and things
    module_scope = [canon[s] for s in force_global if s in canon]

    if preamble is None:
        preamble = default_preamble
    includes = '\n'.join('#include <{}>'.format(i) for i in includeThese)
    typedefs = '\n'.join('typedef {t} {override};'.format(t = td, override=override_dict[td]) for td in override_dict)
    namespaceVars = []
    namespaceImpls = []
    globalClassOperators = {}
    for ns in namespaces:
        impl = ''
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

        for f in ns.functions:
            assert isinstance(f,Function)
            if f.access is Access.PUBLIC or f.inline:
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
                    impl += f'// ERROR: CANNOT HAVE NAMESPACE CONSTRUCTOR {f.canonical}\n'

                elif f.operator:
                    # Identify operators we that are right-operators (like float*Vector3)
                    useSecond = f.operator.binary and (f.params[0].type.primitive or not f.params[0].type.in_canon)
                    owner = f.params[1 if useSecond else 0].type.get_canonical()

                    if owner is not None:
                        globalClassOperators.setdefault(owner.canonical,[]).append((f,useSecond))
                    impl += f'  // Operator {f} implemented in {owner if owner is None else owner.canonical}\n'
                else:
                    comment = '//' if bad else ''
                    impl += f'  {comment}.def{static_state}("{f.name}", ({f.fnptr_type}) &{f.canonical}, "todo: docstring"{args})\n{bad}'
        for v in ns.vars:
            if v.access is Access.PUBLIC and v.canonical not in has_override:
                write_state = 'only' if v.const else 'write'
                static_state = '_static' #CLASSES: if v.static else ''
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
                else:
                    impl += f'  //.def_read{write_state}{static_state}("{name}",&{v.canonical}, "todo: var docstring")//{v.type}\n'
        if impl and ns.name: # exclude the global namespace
            namespaceImpls.append(f'{pyns}\n{impl};')


    namespaceVars = '\n\n'.join(namespaceVars)
    namespaceImpls = '\n\n'.join(namespaceImpls)

    classesMixedHolder = {}


    classVars = []
    classImpls = []
    classImplFunDecls = []
    classImplFunDefs = []
    classImplFunBodies = []
    for cls in classes:
        classname = cls.name
        fullclass = cls.canonical
        fakemodule = 'PythonBindingsFakeModule' + varsafe(cls.canonical)
        pyclass = 'pyclass_Var_' + varsafe(fullclass)
        baseclass = 'pyclass_Var_' + varsafe(cls.scope.canonical)
        trampolineClass = (', %s' % trampoline_types[cls.canonical]) if cls.canonical in trampoline_types else ''
        #ptrclass = (', Urho3D::SharedPtr<%s>' % fullclass) if cls.ref_counted else (', std::shared_ptr<%s>' % fullclass)#''
        #ptrclass = ', Urho3D::ExternalPtr<%s>' % fullclass
        ptrclass = (', Urho3D::SharedPtr<%s>' % fullclass) if cls.ref_counted else (', Urho3D::ExternalPtr<%s>' % fullclass)#''
        inherits = ''.join([', ' + c for c in cls.bases if c in class_names])
        # TODO: Multiple inheritance flag if we don't have all the base classes
        xx = [ ('@'+c if c in class_names else c) for c in cls.bases if canon[c].ref_counted != cls.ref_counted  ]
        if xx:
            classesMixedHolder[fullclass] = xx

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
                    assert isinstance(op,Operator)
                    good = True
                    if op.post_unary:
                        pyselfOP = 'py::self'+str(op).replace('@',0)
                    elif op.unary:
                        pyselfOP = str(op).replace('@','')+'py::self'
                    elif op.binary:
                        otherType = f.params[0].type
                        other = otherType.get_canonical()
                        if other == cls.canonical:
                            pyselfOP = f'py::self {op} py::self'
                        else:
                            makeOther = typename(otherType.stripped_const_ref)
                            if '*' in makeOther:
                                makeOther = f'({makeOther})(0)'
                            else:
                                makeOther += '()'
                            # makeOther = 'std::declval<{otherType}>()'
                            pyselfOP = f'py::self {op} {makeOther}'
                    else:
                        pyselfOP = str(f)
                        bad = f'//Unhandled call style {op} {bad}'
                        good = False

                    if op.op == '=':
                        good = False #TODO: add an __assign__ function

                    opimpl = f'  .def({pyselfOP}, "todo: docstring")'
                    if not good:
                        pyfn = '__%s__' % op.name
                        impl += f'  //{opimpl}.def("{pyfn}", ({f.fnptr_type}) &{f.canonical}, py::operator, "todo: operator docstring. Switch to py: :self ops.")\n{bad}'
                    else:
                        impl += f'{opimpl}\n{bad}'
                    # op = f.operator
                    # pyfn = '__%s__' % op.name
                    # impl += f'  //.def("{pyfn}", ({f.fnptr_type}) &{f.canonical}, py::operator, "todo: operator docstring. Switch to py: :self ops.")\n{bad}'

                else:
                    comment = '//' if bad else ''
                    impl += f'  {comment}.def{static_state}("{f.name}", ({f.fnptr_type}) &{f.canonical}, "todo: docstring"{args})\n{bad}'
        if cls.canonical in globalClassOperators:
            impl += '// External Operators:\n'
            for f,useSecond in globalClassOperators[cls.canonical]:
                op = f.operator
                assert isinstance(op,Operator)
                good = True
                if op.post_unary:
                    pyselfOP = 'py::self'+str(op).replace('@',0)
                elif op.unary:
                    pyselfOP = str(op).replace('@','')+'py::self'
                elif op.binary:
                    other = f.params[0 if useSecond else 1].type.get_canonical()
                    otherType = f.params[0 if useSecond else 1].type
                    if other == cls.canonical:
                        pyselfOP = f'py::self {op} py::self'
                    elif useSecond:
                        pyselfOP = f'{typename(otherType)}() {op} py::self'
                    else:
                        pyselfOP = f'py::self {op} {otherType.stripped}()'
                else:
                    pyselfOP = str(f)
                    bad = f'//Unhandled call style {op} {bad}'
                    good = False

                opimpl = f'  .def({pyselfOP}, "todo: docstring")'
                if not good:
                    pyfn = '__%s__' % op.name
                    impl += f'  //{opimpl}.def("{pyfn}", ({f.fnptr_type}) &{f.canonical}, py::operator, "todo: operator docstring. Switch to py: :self ops.")\n{bad}'
                else:
                    impl += f'{opimpl}\n{bad}'


        impl += '// Class Variables:\n'
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
                else:
                    impl += f'  //.def_read{write_state}{static_state}("{name}",&{v.canonical}, "todo: var docstring")//{v.type}\n'

        impl += ';'
        fn_impl = f'void Implement_{varsafe(fullclass)}(py::class_<{fullclass + trampolineClass + ptrclass + inherits}>& {pyclass})'
        fn_impl_def = f'''{fn_impl}
{{
    {impl}
}}'''
        classImplFunDecls.append(fn_impl+';')
        classImplFunDefs.append(fn_impl_def)
        classImplFunBodies.append(impl)
        classImpls.append(f'Implement_{varsafe(fullclass)}({pyclass});')




    def divideListInto(list,c, joinStr=None):
        list = list + ['']*((c-len(list)) % c)
        assert(len(list)%c == 0)
        sz = len(list) // c
        cd = []
        for i in range(1,c+1):
            if joinStr is not None:
                cd.append(joinStr.join(list[:sz]))
            else:
                cd.append(list[:sz])
            list = list[sz:]
        return cd

    if len(extraFiles) == 0:
        # Not used ones for this time
        classImpls = '\n'.join(classImpls)
        classImplFunDecls = '\n\n'.join(classImplFunDecls)
        # classImplFunDefs = '\n\n'.join(classImplFunDefs)

        # Used ones
        classVars = ['\n'.join(classVars)]
        classImplFunDecls = ['//Classes implemented directly in module']
        classImpls = ['\n\n'.join(classImplFunBodies)]
    else:
        classFileCount = len(extraFiles)
        divClasses = divideListInto(classes,classFileCount)
        classScopeVars = ['']
        for group in divClasses:
            scopes = set()
            # add all parent classes
            for cls in group:
                # because we append the '' to make it divide evenly
                if not isinstance(cls,str):
                    scopes.add(cls.scope.canonical)
            # remove the ones that we are implementing in this group
            for cls in group:
                # because we append the '' to make it divide evenly
                if not isinstance(cls,str):
                    if cls.canonical in scopes:
                        scopes.remove(cls.canonical)
            classScopeVars.append('\n'.join(scopeSetToVars(scopes)))


        #divideListInto(classImplFunDefs,len(extraFiles))
        #divideListInto(classImplFunDecls,len(extraFiles))
        classImplFunNames = ['Implement_Class_Bindings_%d'%(1+i) for i in range(classFileCount)]
        classImplFunDecls = ['void %s(py::module& m);'%f for f in classImplFunNames] + ['void Implement_Enum_Bindings(py::module& m);']
        classImplFunCalls = ['%s(m);'%f for f in classImplFunNames] + ['Implement_Enum_Bindings(m);']
        classVars = ['//Class declarations moved to other files'] + divideListInto(classVars,classFileCount,'\n')
        classImplFunBodies = [''] + divideListInto(classImplFunBodies,classFileCount,'\n\n')
        classImpls = [f'{scopes}\n\n{vars}\n\n{further}\n\n{actual}' for scopes,vars,further,actual in zip(classScopeVars,classVars,classImplFunCalls,classImplFunBodies)]
        classImplFunDefs = [f'void {f}(py::module& m)\n{{\n{impl}\n}}' for f,impl in zip(['NEVER USED!!!'] + classImplFunNames,classImpls)]



    if len(extraFiles) == 0:
        enumImpls = []
        enumScopes = set()
        for e in enums:
            assert isinstance(e,Enumeration)
            pyclass = 'pyclass_Var_' + varsafe(e.canonical)
            baseclass = 'pyclass_Var_' + varsafe(e.scope.canonical)

            # TODO: Actually determine which Urho Enums use math (FlagSets?)
            def enumUsesMath(e):
                return True

            pyarith = 'py::arithmetic(), ' if enumUsesMath(e) else ''

            comment = f'// Enum {e.canonical} Registrations'
            binding = f'auto {pyclass} = py::enum_<{e.canonical}>({baseclass}, "{e.name}", {pyarith}"test doc")\n'

            for v in e.values:
                binding += f'  .value("{v.name}", {v.canonical})\n'

            if not e.enum_class:
                binding += '  .export_values()\n'

            binding += ';'

            enumImpls.append(comment + '\n' + binding)
            enumScopes.add(e.scope.canonical)

            enumImpls = '\n\n'.join(enumImpls)
            enumScopes = '\n'.join(scopeSetToVars(enumScopes))

            if not enumImpls:
                enumImpls = f'// {len(enums)}'

            enumImplDecls = ['']
            enumImplDefs = [f'''void Implement_Enum_Bindings(py::module& m)
{{
{enumScopes}

{enumImpls}
}}''']
    else:
        classFileCount = len(extraFiles)+1
        divEnums = divideListInto(enums,classFileCount)
        enumImplFunNames = ['Implement_Enum_Bindings']+['Implement_Enum_Bindings_%d'%(1+i) for i in range(classFileCount-1)]
        enumImplDecls = ['void %s(py::module& m);'%f for f in enumImplFunNames[1:]] + ['// No more enum init fns']
        enumImplCalls = ['%s(m);'%f for f in enumImplFunNames] + ['// No more enum calls']
        enumImplDefs = []
        for i,group in enumerate(divEnums):
            enumImpls = []
            enumScopes = set()
            for e in group:
                if not isinstance(e,Enumeration):
                    # we append '' to the groups to make them even
                    continue
                pyclass = 'pyclass_Var_' + varsafe(e.canonical)
                baseclass = 'pyclass_Var_' + varsafe(e.scope.canonical)

                # TODO: Actually determine which Urho Enums use math (FlagSets?)
                def enumUsesMath(e):
                    return True

                pyarith = 'py::arithmetic(), ' if enumUsesMath(e) else ''

                comment = f'// Enum {e.canonical} Registrations'
                binding = f'auto {pyclass} = py::enum_<{e.canonical}>({baseclass}, "{e.name}", {pyarith}"test doc")\n'

                for v in e.values:
                    binding += f'  .value("{v.name}", {v.canonical})\n'

                if not e.enum_class:
                    binding += '  .export_values()\n'

                binding += ';'

                enumImpls.append(comment + '\n' + binding)
                enumScopes.add(e.scope.canonical)
            next = enumImplCalls[i+1]
            enumImpls = '\n\n'.join(enumImpls)
            enumScopes = scopeSetToVars(enumScopes)
            enumScopes = '\n'.join(enumScopes)

            enumImplDefs.append(f'''void {enumImplFunNames[i]}(py::module& m)
{{
{enumScopes}

{enumImpls}

{next}
}}''')




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
// TODO: Consider global hashmap of pointers for external pointer, then we could mark it as safe from raw ptr.
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::ExternalPtr<T>, false);
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::SharedPtr<T>, true);
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::WeakPtr<T>, true);

//================================================
// Implement Classes
//================================================
{classImplFunDecls[0]}

//================================================
// Declare and Implement Enumerations
//================================================
{enumImplDecls[0]}
{enumImplDefs[0]}

// can do sub-modules, just need to py::import... the other module if it has any required classes first (see Advanced Topics in pybind11 docs)
PYBIND11_MODULE(pyrho3d, m) {{
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

    auto pyclass_Var_Urho3D_Vector__unsigned_char_ = py::bind_Vector<Urho3D::PODVector<unsigned char>>(pyclass_Var_Urho3D,"ByteVector");

    auto pyclass_Var_Urho3D_VariantVector = py::bind_Vector<Urho3D::Vector<Variant>>(pyclass_Var_Urho3D,"VariantVector");

    auto pyclass_Var_Urho3D_StringVector = py::bind_Vector<Urho3D::StringVector>(pyclass_Var_Urho3D,"StringVector");
    
    auto pyclass_Var_Urho3D_VariantMap = py::bind_Map<Urho3D::VariantMap>(pyclass_Var_Urho3D,"VariantMap");

    auto pyclass_Var_Urho3D_StringMap = py::bind_Map<Urho3D::StringMap>(pyclass_Var_Urho3D,"StringMap");


    //================================================
    // Declare Classes
    //================================================
    {classVars[0]}

    //================================================
    // Implement Classes
    //================================================
    {classImpls[0]}

    //================================================
    // Implement Namespaces
    //================================================
    {namespaceImpls}


    //================================================
    // MANUAL:
    //================================================
    // Turn on implicit conversions
    py::implicitly_convertible<bool, Urho3D::Variant>();
    py::implicitly_convertible<int, Urho3D::Variant>();
    py::implicitly_convertible<float, Urho3D::Variant>();
    py::implicitly_convertible<Urho3D::String, Urho3D::Variant>();
    py::implicitly_convertible<Urho3D::String, Urho3D::StringHash>();

/*
{globalClassOperators}
*/




// create context object for us
Urho3D::SharedPtr<Urho3D::Context> c{{new Urho3D::Context()}};
c->AddRef();
//m.add_object("context", py::cast(c));
m.attr("context") = py::cast(c);
// Register a callback function that is invoked when the BaseClass object is colelcted
py::cpp_function cleanup_callback(
    [m](py::handle weakref) {{
        // perform cleanup here -- this function is called with the GIL held
        Urho3D::Context* ctx = m.attr("context").cast<Urho3D::Context*>();
        weakref.dec_ref(); // release weak reference
    }}
);

// Create a weak reference with a cleanup callback and initially leak it
(void) py::weakref(m.attr("Context"), cleanup_callback).release();

}}


/*{classesMixedHolder}*/


'''#.format(includes=includes, preamble=preamble)
    print('~~~~~~~~~~~~~~~~~')
    print(out)
    if outputFile is not None:
        outputFile.write(out)
        outputFile.close()
    for i,f in enumerate(extraFiles):
        i+=1 # as it should go 1,2,3,4,...
        extraOut = f'''
{preamble}



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


typedef Urho3D::Renderer::ShadowMapFilter ShadowMapFilter;
static const auto& RIGHT_FORWARD_UP = Urho3D::RaycastVehicle::RIGHT_FORWARD_UP;


//================================================
//Operator typedefs
//================================================
// These are needed to prevent the compiler disliking the spaces, so we make it a single word
{typedefs}


//================================================
// Declare the holder types shared and weak ptr
//================================================
// TODO: Consider global hashmap of pointers for external pointer, then we could mark it as safe from raw ptr.
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::ExternalPtr<T>, false);
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::SharedPtr<T>, true);
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::WeakPtr<T>, true);


//================================================
// Implement Classes
//================================================

// Next binding:
{classImplFunDecls[i]}

// Current binding:
{classImplFunDefs[i]}


//================================================
// Declare and Implement Enumerations
//================================================
{enumImplDecls[i]}
{enumImplDefs[i]}
'''
        f.write(extraOut)
        f.close
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
