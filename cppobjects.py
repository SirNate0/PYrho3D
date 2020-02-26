import re
from enum import Enum
import stringcase

docstr=""" Usage: call with <filename> <typename>
"""

from sys import stderr
# def printerr(*s):
#     print(*s,file=stderr)

def printerr(t):
    stderr.write(t)
    stderr.write('\n')
    stderr.flush()

canon = {}

def get_canonical(name, scope):
    # return cursor.type.spelling if cursor.type.spelling else cursor.canonical.spelling
    # return (scope.canonical + '::' + cursor.canonical.spelling) if scope is not None else ''
    return (((scope.canonical + '::') if scope.canonical else '') + name) if scope is not None else name



class Visibility(Enum):
    """
        Visibility specifier (dll_export like things)
        >= Default means that it is visible in the output
    """
    HIDDEN = 0
    DEFAULT = 1 #possibly unused
    EXPORTED = 2


class Access(Enum):
    """
        Access requirement specifier (private: like things)
        <= PUBLIC means we can access it
    """
    NONE = 0 #namespace scope, basically
    PUBLIC = 1
    PROTECTED = 2
    PRIVATE = 3


class Property(object):
    """
    A property holder.
        name - the name to use for the python variable - "Var"
        getter - the getter function - GetVar
        setter - the setter function, or None - setVar
    """
    def __init__(self, name, getter, setter=None):
        self.name = name
        self.getter = getter
        self.setter = setter

    @property
    def first_lower(self):
        return self.name[0].lower() + self.name[1:]

    @property
    def snake_case(self):
        # return re.sub(r"([a-z])([A-Z])", "//\1_\2", self.name).lower()
        name = stringcase.snakecase(self.name)
        return name[1:] if name.startswith('_') else name


class Class(object):
    """
    Represents a C++ class/struct
    """

    def __init__(self,name,scope, canonical=None):
        self.scope = scope
        self.name = name

        self.canonical = canonical if canonical is not None else get_canonical(name,scope)

        self.functions = []
        self.vars = []
        self.bases = []
        self.classes = []
        self.enums = []
        self.annotations = []
        # self.visibility = Visibility.DEFAULT
        self.visibility = Visibility.HIDDEN
        self.access = Access.NONE


        # for i in range(cursor.get_num_template_arguments()):
        #     print cursor.get_template_argument_type(i).spelling

        if self.canonical in canon:
            raise Exception('Creating duplicate canonical class entry %s' % self.canonical)
        else:
            canon[self.canonical] = self

    @property
    def methods(self):
        return [m for m in self.functions if m.method and not m.const]
    @property
    def const_methods(self):
        return [m for m in self.functions if m.method and m.const]
    @property
    def all_methods(self):
        return [m for m in self.functions if m.method]
    @property
    def static_methods(self):
        return [m for m in self.functions if m.static or m.friend]


    @property
    def const_fields(self):
        return [m for m in self.vars if m.const]
    @property
    def all_fields(self):
        return [m for m in self.vars]
    @property
    def static_fields(self):
        return [m for m in self.vars if m.static]

    @property
    def friend_methods(self):
        return [m for m in self.functions if m.friend]

    def inherits(self, canonical_base):
        for c in self.required:
            if c.canonical == canonical_base or c.inherits(canonical_base):
                return True
        return False

    @property
    def ref_counted(self):
        return self.inherits('Urho3D::RefCounted') or self.canonical == 'Urho3D::RefCounted'

    @property
    def properties(self):
        if self.props_ is None:
            self.props_ = []
            methods = self.all_methods
            setters = {}
            for m in methods:
                if m.name.lower().startswith('set') and len(m.args) == 1:
                    setters[m.name.lower()[3:]] = m
            #TODO: Potentially more complex logic to handle multiple setters for properties, accepting a tuple?
            for m in methods:
                name = m.name.lower()
                if name.startswith('get'):
                    name = name[3:]
                    getter = m;
                    if name in setters:
                        setter = setters[name]
                    else:
                        setter = None
                    self.props_.append(Property(name, getter, setter))


        return self.props_#[m for m in self.functions if m.method and not m.const]

    @property
    def public(self):
        return self.access <= Access.PUBLIC

    @property
    def hidden(self):
        return self.visibility == Visibility.HIDDEN

    # @property
    # def abstract(self): TODO: This, but need to check inheritance heirarchy
        # return any([f.pure_virtual for f in self.functions])

    @property
    def exported(self):
        return not self.hidden

    @property
    def required(self):
        # reqd = self.bases
        # return reqd
        return [canon[b] for b in self.bases]


    def __repr__(self):
        return 'class {}: {} {}\n'.format(self.canonical, ', '.join(self.bases), self.annotations) \
                + '\n\t'.join([repr(f) for f in self.functions]) \
                + '\n\t'.join([repr(v) for v in self.vars])



class Type(object):

    def __init__(self, name):
        assert isinstance(name,str)
        self.name = name

    @property
    def pointer(self):
        return self.name.count('*')  # count_end('*',self.name);

    @property
    def reference(self):
        return self.name.count('&')  # count_end('&',self.name);

    @property
    def array(self):
        return self.name.count(']')

    @property
    def const(self):
        return self.name.startswith("const")

    @property
    def stripped(self):
        # strip = re.match(r'^(const )?([\w:<>, *]+)( &*)?',self.name)
        strip = re.match(r'^(const )?([\w:<>, ]+)( [&*])?',self.name)
        if strip:
            return strip.group(2).strip(' ')
        else:
            return '/*COULD NOT STRIP TYPE*/' + self.name

    @property
    def stripped_const_ref(self):
        strip = re.match(r'^(const )?([\w:<>, *]+)( &)?',self.name)
        # strip = re.match(r'^(const )?([\w:<>, ]+)( [&*])?',self.name)
        if strip:
            return strip.group(2).strip(' ')
        else:
            return '/*COULD NOT STRIP CONST-REF TYPE*/' + self.name

    @property
    def stripped_type(self):
        return Type(self.stripped.replace('/*COULD NOT STRIP TYPE*/',''))

    _primitive_types = [
        'void', #don't know if it should be included

        'bool',

        'char',
        'unsigned char',
        'signed char'

        'short',
        'short int',
        'signed short',
        'signed short int',
        'unsigned short',
        'unsigned short int',
        'int',
        'signed',
        'signed int',
        'unsigned',
        'unsigned int',
        'long',
        'long int',
        'signed long',
        'signed long int',
        'unsigned long',
        'unsigned long int',
        'long long',
        'long long int',
        'signed long long',
        'signed long long int',
        'unsigned long long',
        'unsigned long long int',

        'float',
        'double',
        'long double',

        'wchar_t',
        'char16_t',
        'char32_t',
    ]

    @property
    def primitive(self):
        return self.name in Type._primitive_types

    @property
    def in_canon(self):
        return self.name in canon or self.stripped in canon

    def get_canonical(self):
        if self.name in canon:
            return canon[self.name]
        elif self.stripped in canon:
            return canon[self.stripped]
        else:
            return None

    def __repr__(self):
        return self.name


class Parameter(object):
    def __init__(self, type, name, defaultVal):
        self.type = type # Type
        self.name = name # str
        self.default = defaultVal # str

    def __repr__(self):
        return '{} {}={}'.format(self.type.name, self.name, self.default)


class Operator(object):
    #TODO: new and delete
    operator_functions = {
    '+' : '__ADD_FUNC__',
    '-' : '__SUB_FUNC__',
    '*' : '__MUL_FUNC__',
    '/' : '__DIV_FUNC__',
    '%' : '__MOD_FUNC__',
    '^' : '__XOR_FUNC__',
    '&' : '__BIT_AND_FUNC__',
    '|' : '__BIT_OR_FUNC__',
    '~' : '__BIT_NOT_FUNC__',
    '!' : '__NOT_FUNC__',
    '=' : '__ASSIGN_FUNC__',
    '<' : '__LT_FUNC__',
    '>' : '__GT_FUNC__',
    '+=' : '__ADD_ASSIGN_FUNC__',
    '-=' : '__SUB_ASSIGN_FUNC__',
    '*=' : '__MUL_ASSIGN_FUNC__',
    '/=' : '__DIV_ASSIGN_FUNC__',
    '%=' : '__MOD_ASSIGN_FUNC__',
    '^=' : '__XOR_ASSIGN_FUNC__',
    '&=' : '__AND_ASSIGN_FUNC__',
    '|=' : '__OR_ASSIGN_FUNC__',
    '<<' : '__SL_FUNC__',
    '>>' : '__SR_FUNC__',
    '>>=' : '__SR_ASSIGN_FUNC__',
    '<<=' : '__SL_ASSIGN_FUNC__',
    '==' : '__EQ_FUNC__',
    '!=' : '__NEQ_FUNC__',
    '<=' : '__LTE_FUNC__',
    '>=' : '__GTE_FUNC__',
    '&&' : '__AND_FUNC__',
    '||' : '__OR_FUNC__',
    '++' : '__INC_FUNC__',
    '--' : '__DEC_FUNC__',
    '++@' : '__PRE_INC_FUNC__',
    '--@' : '__PRE_DEC_FUNC__',
    '@++' : '__POST_INC_FUNC__',
    '@--' : '__POST_DEC_FUNC__',
    ',' : '__DOT_FUNC__',
    '->*' : '__ARROW_STAR_FUNC__', #TODO: name
    '->' : '__ARROW_FUNC__',
    '()' : '__OPERATOR_FUNC__',
    '[]' : '__INDEX_FUNC__',
        #CASTS
    'bool' : '__BOOL_CAST__',
    'int' : '__INT_CAST__',
    'float' : '__FLOAT_CAST__',
        #UNARY OPERATORS
    '-@' : '__NEG_FUNC__',
    '+@' : '__POS_FUNC__',
    '*@' : '__DEREFERENCE_FUNC__',
    '&@' : '__ADDRESS_FUNC__',
    }

    operator_names = {
    '+' : 'add',
    '-' : 'sub',
    '*' : 'mul',
    '/' : 'div',
    '%' : 'mod',
    '^' : 'xor',
    '&' : 'bit_and',
    '|' : 'bit_or',
    '~' : 'bit_not',
    '!' : 'not',
    '=' : 'assign',
    '<' : 'lt',
    '>' : 'gt',
    '+=' : 'add_assign',
    '-=' : 'sub_assign',
    '*=' : 'mul_assign',
    '/=' : 'div_assign',
    '%=' : 'mod_assign',
    '^=' : 'xor_assign',
    '&=' : 'and_assign',
    '|=' : 'or_assign',
    '<<' : 'sl',
    '>>' : 'sr',
    '>>=' : 'sr_assign',
    '<<=' : 'sl_assign',
    '==' : 'eq',
    '!=' : 'neq',
    '<=' : 'lte',
    '>=' : 'gte',
    '&&' : 'and',
    '||' : 'or',
    '++' : 'inc', #done: split pre-increment and post-increment
    '--' : 'dec',
    '++@' : 'pre_inc',
    '--@' : 'pre_dec',
    '@++' : 'post_inc',
    '@--' : 'post_dec',
    ',' : 'dot',
    '->*' : 'arrow_star', #todo: name
    '->' : 'arrow',
    '()' : 'call',
    '[]' : 'index',
        #CAST OPERATORS
    'bool' : 'bool',
    'int' : 'int',
    'float' : 'float',
        #UNARY OPERATORS
    '-@' : 'neg',
    '+@' : 'pos',
    '*@' : 'deref',
    '&@' : 'address',
    }

    operator_args = {
    '+' : 'binary',
    '-' : 'binary',
    '*' : 'binary',
    '/' : 'binary',
    '%' : 'binary',
    '^' : 'binary',
    '&' : 'binary',
    '|' : 'binary',
    '~' : 'unary',
    '!' : 'unary',
    '=' : 'binary',
    '<' : 'binary',
    '>' : 'binary',
    '+=' : 'binary',
    '-=' : 'binary',
    '*=' : 'binary',
    '/=' : 'binary',
    '%=' : 'binary',
    '^=' : 'binary',
    '&=' : 'binary',
    '|=' : 'binary',
    '<<' : 'binary',
    '>>' : 'binary',
    '>>=' : 'binary',
    '<<=' : 'binary',
    '==' : 'binary',
    '!=' : 'binary',
    '<=' : 'binary',
    '>=' : 'binary',
    '&&' : 'binary',
    '||' : 'binary',
    '++' : 'unary', #done: split pre-increment and post-increment
    '--' : 'unary',
    '++@' : 'unary',
    '--@' : 'unary',
    '@++' : 'post_unary',
    '@--' : 'post_unary',
    ',' : 'binary',
    '->*' : 'binary', #todo: name
    '->' : 'binary',
    '()' : 'operator',
    '[]' : 'operator',
        #CAST OPERATORS
    'bool' : 'cast',
    'int' : 'cast',
    'float' : 'cast',
        #UNARY OPERATORS
    '-@' : 'unary',
    '+@' : 'unary',
    '*@' : 'deref',
    '&@' : 'address',
    }

    @property
    def argstyle(self): #TODO: make these enums instead of strings
        return Operator.operator_args[self.op]

    @property
    def name(self):
        return Operator.operator_names[self.op]

    @property
    def function(self):
        return Operator.operator_functions[self.op]

    @property
    def unary(self):
        return self.argstyle == 'unary'

    @property
    def post_unary(self):
        return self.argstyle == 'post_unary'

    @property
    def binary(self):
        return self.argstyle == 'binary'


    def __init__(self, op, is_unary):
        if op in ['++','--']:
            if not is_unary: # post__crement operators appear to be binary
            #if post__crement:
                self.op = '@'+op
            else:
                self.op = op+'@'
        elif is_unary and op+'@' in Operator.operator_args:
            self.op = op+'@'
        else:
            self.op = op

    # So that we can do if f.op: instead of if f.op is not None:
    def __bool__(self):
        return True

    def __nonzero__(self):
        return True

    def __repr__(self):
        return self.op


class Function(object):

    @property
    def return_type(self):
        return self.ret

    @property
    def params(self):
        return self.vars

    @property
    def method(self):
        return not (self.static or self.friend)

    @property
    def friend(self):
        return 'friend' in self.annotations

    @property
    def inline(self):
        return 'inline' in self.annotations

    @property
    def in_class(self):
        return type(self.scope) is Class

    @property
    def operator(self):
        if self._operator is None:
            op = re.match(r'^operator ?(\W+|bool|int)$',self.name)
            if op:
                unary = len(self.params) == 0 if self.method else len(self.params) == 1
                #post__crement = 'int' in map(lambda param: param.type,self.params)
                self._operator = Operator(op.group(1), unary)
            else:
                self._operator = False
        return self._operator

    @property
    def arg_types_string(self):
        return ', '.join(map(lambda p : p.type.name,self.params))

    @property
    def fnptr_type(self):
        if self.static or not self.in_class:
            decl = '%s (*)(%s)%s' % (self.return_type, self.arg_types_string, ' const' if self.const else '')
        else:
            decl = '%s (%s::*)(%s)%s' % (self.return_type,self.scope.canonical,  self.arg_types_string, ' const' if self.const else '')
        return decl

    @property
    def variadic(self):
        return '...' in self.arg_types_string or 'va_list' in self.arg_types_string



    def __init__(self,name,scope, canonical=None):
        self.scope = scope
        self.name = name

        self.canonical = canonical if canonical is not None else get_canonical(name,scope)

        if self.canonical in canon:
            canon[self.canonical].append(self)
            # raise Exception('Creating duplicate canonical function entry %s' % self.canonical)
        else:
            canon[self.canonical] = [self]

        self.vars = []
        self.annotations = []
        self.visibility = Visibility.DEFAULT
        self.access = Access.NONE
        # May need to check if parent is a method first
        self.const = False
        self.noexcept = False
        self.static = False
        self.virtual = False
        self.pure_virtual = False
        self.constructor = False
        self.destructor = False
        self.deleted = False
        self.ret = None
        self._operator = None



                ##TODO: I think t.get_pointee with t.is_const_qualified and !t.is_pod will get me the const Class & equivalence
                # print ''
#TODO: need to make sure Variant's comes first.def(py::init<bool>(), "todo: constructor docstring")

    def __repr__(self):
        return "{} {}({})".format(self.return_type, self.name, ', '.join([str(p) for p in self.params]))


class Namespace(object):
    def __init__(self,name,scope, canonical=None):
        self.scope = scope
        self.name = name

        self.canonical = canonical if canonical is not None else get_canonical(name,scope)

        if self.canonical in canon:
            raise Exception('Creating duplicate canonical namespace entry %s' % self.canonical)
        else:
            canon[self.canonical] = self


        self.classes = []
        self.enums = []
        self.functions = []
        self.vars = []
        self.annotations = []
        self.namespaces = []
        self.visibility = Visibility.DEFAULT


    def __repr__(self):
        return """Namespace %s: %d classes, %d enums, %d functions, %d vars\n""" \
               % (self.canonical, len(self.classes), len(self.enums), len(self.functions), len(self.vars)) \
                + ('\n'.join([repr(c) for c in self.classes])) \
                + ('\n'.join([repr(n) for n in self.namespaces])) + '\n'




class Variable(object):

    def __init__(self, name, scope, canonical=None):
        self.scope = scope
        self.name = name

        self.canonical = canonical if canonical is not None else get_canonical(name,scope)

        if self.canonical in canon:
            printerr('Ignoring duplicate canonical variable entry %s' % self.canonical)
        else:
            canon[self.canonical] = self

        self.annotations = []
        self.visibility = Visibility.DEFAULT
        self.access = Access.PUBLIC
        self.type = None


    def __repr__(self):
        return '{} {}'.format(self.type,self.canonical)


class EnumerationValue(object):

    def __init__(self, name, value, enumeration):
        self.name = name
        self.value = value
        self.enumeration = enumeration

    @property
    def scoped(self):
        return self.enumeration.name + '::' + self.name

    @property
    def canonical(self):
        return self.enumeration.canonical + '::' + self.name

    def __repr__(self):
        return '{} = {}'.format(self.name,self.value)

class Enumeration(object):

    def __init__(self, name, scope, canonical=None):
        self.scope = scope
        self.name = name

        self.canonical = canonical if canonical is not None else get_canonical(name,scope)

        if self.canonical in canon:
            printerr('Ignoring duplicate canonical variable entry %s' % self.canonical)
        else:
            canon[self.canonical] = self

        # False if not an enum class, otherwise use the class type as a string (which is truthy)
        self.enum_class = False
        # the underly integral type for the enum
        self.enum_type = None
        self.values = []

        # TODO: These may not be needed???
        self.annotations = []
        self.visibility = Visibility.DEFAULT
        self.access = Access.NONE

    def add_value(self,name,value):
        self.values.append(EnumerationValue(name,value,self))

    def __repr__(self):
        return 'Enumeration {} {{ {} }}'.format(self.name,', '.join(str(v) for v in self.values))

import jsonpickle

def toJSON(dict):
    return jsonpickle.encode(dict)

def fromJSON(dict):
    return jsonpickle.decode(dict)

# import json
# from collections import Iterable
#
# dumpables = (Namespace,Class,Function,Variable,Operator,Type,Visibility,Access)
#
# def toJSON_(val):
#     if isinstance(val,dict):
#         # Canon
#         typed = dict((k,{'type' : type(val[k]).__name__, 'value' : toJSON_(val[k])}) for k in val)
#         return typed
#     elif isinstance(val,Iterable):
#         return list(toJSON_(x) for x in val)
#     elif isinstance(val,Enum):
#         return {'name': val.name, 'value' : val.value, 'type' : type(val).__name__}
#     elif isinstance(val,dumpables):
#         return toJSON_(val.__dict__)
#     else:
#         return val
#
#
# def toJSON(dict):
#     return json.dumps(toJSON_(dict))
#
# def getClass(name):
#     lookup = dict((c.__name__, c) for c in dumpables)
#     lookup['list'] = list
#     def default(*args): return args
#     return lookup.get(name,default)
#
# def fromJSON_(val):
#     if isinstance(val, dict):
#         if 'type' in val and 'value' in val:
#             if isinstance(val['value'],dict):
#                 val['value'] = dict((k,fromJSON_(v)) for k,v in val['value'].items())
#             elif isinstance(val['value'],list):
#                 val['value'] = list(fromJSON_(v) for v in val['value'])
#             else:
#                 val['value'] = fromJSON_(val['value'])
#             cl = getClass(val['type'])
#             c=cl(val['value'])
#             if hasattr(c,'__dict__'):
#                 c.__dict__.update(val['value'])
#             return c
#         else:
#             return dict((k,fromJSON_(val[k])) for k in val)
#     elif isinstance(val,list):
#         # return val.__class__(fromJSON_(x) for x in val)
#         return list(fromJSON_(x) for x in val)
#     else:
#         return val
#
# def fromJSON(string):
#     return fromJSON_(json.loads(string))