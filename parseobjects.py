#!/usr/bin/python3.6
import clang.cindex
from clang.cindex import CursorKind
from clang.cindex import AccessSpecifier
import sys
from pprint import pprint

from cppobjects import *
from bindpython import bind

#clang.cindex.Config.set_library_file('/usr/lib/llvm-3.8/lib/libclang-3.8.so.1')
clang.cindex.Config.set_library_file('/usr/lib/llvm-6.0/lib/libclang-6.0.so')


def clang_get_canonical(cursor, scope):
    # return cursor.type.spelling if cursor.type.spelling else cursor.canonical.spelling
    # return (scope.canonical + '::' + cursor.canonical.spelling) if scope is not None else ''
    return (((scope.canonical + '::') if scope.canonical else '') + cursor.canonical.spelling) if scope is not None else ''


def clang_map_access(clang_access):
    return { AccessSpecifier.INVALID : Access.NONE,
        AccessSpecifier.PUBLIC : Access.PUBLIC,
        AccessSpecifier.PROTECTED : Access.PROTECTED,
        AccessSpecifier.PRIVATE : Access.PRIVATE,
        AccessSpecifier.NONE : Access.NONE
    }.get(clang_access, Access.NONE)


def clang_append_class(cls, cursor):
    assert isinstance(cursor, clang.cindex.Cursor)

    for c in cursor.get_children():
        assert isinstance(c, clang.cindex.Cursor)
        if c.kind in [CursorKind.CLASS_DECL, CursorKind.STRUCT_DECL]:
            if clang_get_canonical(c, cls) in canon:
                canon[clang_get_canonical(c, cls)].append(c)
            else:
                cls.classes.append(clang_parse_class(c, cls))

        elif c.kind is clang.cindex.CursorKind.CXX_BASE_SPECIFIER:
            name = c.type.get_canonical().spelling #c.canonical.spelling
            defn = c.canonical.get_definition()
            # print 'CLASS_BASE ' + name + ' in ' + self.canonical + str( defn.location)
            cls.bases.append(name)

        elif c.kind is clang.cindex.CursorKind.ANNOTATE_ATTR:
            cls.annotations.append(c.spelling)
            # print c.canonical.spelling + '@' + cursor.spelling
        elif c.kind is CursorKind.VISIBILITY_ATTR:
            if c.spelling == 'default':
                cls.visibility = Visibility.EXPORTED

        elif c.kind in [CursorKind.CXX_METHOD, CursorKind.CONSTRUCTOR, CursorKind.DESTRUCTOR, CursorKind.FUNCTION_DECL]: #, CursorKind.FUNCTION_TEMPLATE
            cls.functions.append(clang_parse_function(c, cls))

        elif c.kind in [CursorKind.FIELD_DECL, CursorKind.VAR_DECL]:
            cls.vars.append(clang_parse_variable(c, cls))
        # self.append(c)

def clang_parse_class(cursor, scope):

    assert isinstance(cursor, clang.cindex.Cursor)
    assert isinstance(scope, Namespace) or isinstance(scope, Class)

    #Namespace is also Translation Unit, so check first before setting the name
    if cursor.kind not in [CursorKind.CLASS_DECL, CursorKind.STRUCT_DECL]:
        raise Exception('Namespace being constructed from a {}. Requires a NAMESPACE or TRANSLATION_UNIT'.format(cursor.kind.name))
    cls = Class(cursor.spelling, scope, canonical=clang_get_canonical(cursor,scope))

    cls.access = clang_map_access(cursor.access_specifier)

    # print str(cursor.access_specifier) + " " + self.canonical
    clang_append_class(cls,cursor)

    return cls

def clang_parse_type(clang_type):
    return Type(clang_type.spelling)

# def find(cursor, ns):
#     if (ns is Namespace):
#         for child in cursor.get_children():
#             child = cursor
#             if child.

def clang_parse_function(cursor, scope):
    assert isinstance(cursor, clang.cindex.Cursor)
    # assert isinstance(scope, Namespace)

    #Namespace is also Translation Unit, so check first before setting the name
    if cursor.kind not in [CursorKind.CXX_METHOD, CursorKind.CONSTRUCTOR, CursorKind.DESTRUCTOR, CursorKind.FUNCTION_DECL]: #, CursorKind.FUNCTION_TEMPLATE
        raise Exception('Function being constructed from a {}. Requires a function/method type'.format(cursor.kind.name))

    self = Function(cursor.spelling,scope,clang_get_canonical(cursor,scope))

    self.access = clang_map_access(cursor.access_specifier)
    # May need to check if parent is a method first
    self.const = cursor.is_const_method()
    self.noexcept = '/*TODO: Calc noexcept*/' # cursor.is_const_method()
    self.static = cursor.is_static_method()
    self.virtual = cursor.is_virtual_method()
    self.pure_virtual = cursor.is_pure_virtual_method()
    self.constructor = cursor.kind is CursorKind.CONSTRUCTOR
    self.destructor = cursor.kind is CursorKind.DESTRUCTOR
    self.ret = clang_parse_type(cursor.result_type)


    for c in cursor.get_children():
        assert isinstance(c, clang.cindex.Cursor)
        if c.kind is CursorKind.PARM_DECL:
            name = c.displayname

            default = ''
            foundEquals = False
            # print a.extent.end <= can try adjusting that, but instead will just trim last character
            for t in c.get_tokens():
                if foundEquals:
                    default += t.spelling
                elif t.spelling == '=':
                    foundEquals = True
            if len(default):
                i = 0
                for child in c.get_children():
                    s = ''
                    for t in child.get_tokens():
                        s += t.spelling
                    #print(('%d:' % i) + child.spelling + '|' + default  + '||' + s)
                    i += 1

            if foundEquals:
                end = default[-1:]
                if end == ',' or end == ')' and default.count(')') > default.count('('):
                    default = default[:-1]
            else:
                default = None

            t = c.type.get_canonical()

            self.params.append(Parameter(clang_parse_type(t), name, default))
        elif c.kind is clang.cindex.CursorKind.ANNOTATE_ATTR:
            self.annotations.append(c.spelling)

    # Process whether it is variadic
    s = cursor.type.spelling
    # remove the noexcept specification
    if 'noexcept' in s:
        s=s[:s.rfind('noexcept')]
    # get the start of the arguments
    start = s.find('(')
    # get the end of it
    end = s.rfind(')')
    if start < end:
        s = s[start+1:end]
    else:
        # we have some sort of error
        s = '/*UNMATCHED*/'
    #self.variadic = '...' in s or 'va_list' in s
    if '...' in s:
        # TODO: may need to split by , and then find the actual type of the ... argument
        self.params.append(Parameter(Type('...'),'',None))
    elif 'va_list' in s:
        self.params.append(Parameter(Type('va_list'),'',None))

    # Ensure it is not deleted
    updateReturn = 'int' == self.return_type.name
    updateReturnStr = []
    doneUpdating = False
    foundEquals = False
    for i,t in enumerate(cursor.get_tokens()):
        if i > 300:
            print('TOO MANY TOKENS: ', self.name)
            break
#            print('parent token: ' + t.spelling)
#            print(t.kind)
        if updateReturn and not doneUpdating:
            if t.spelling == self.name:
                doneUpdating = True
            else:
                updateReturnStr.append(t.spelling)
        if foundEquals and t.spelling == 'delete':
            self.deleted = True
        elif t.spelling == '=':
            foundEquals = True
        #elif 'test' in self.name:
        #    print(t.kind,t.spelling)
    if updateReturn:
        updateReturnStr = ' '.join(updateReturnStr)
        origUpdate = updateReturnStr
        for keyword in ['static','virtual']:
            updateReturnStr = updateReturnStr.replace(keyword,'')
        updateReturnStr = re.sub(r'__attribute__\s+\(.*\)','',updateReturnStr)
        updateReturnStr = updateReturnStr.strip()
        if updateReturnStr != 'int' and not updateReturnStr.endswith(' int'):
            print(updateReturnStr,'should be from v')
            print(origUpdate)
            print('Faking Return Type in {}: {} FOR {}'.format(
                  self.name,
                  updateReturnStr,
                  self.ret.name))
            self.ret = Type(updateReturnStr)

    return self

def clang_append_namespace(self, cursor):
    assert isinstance(cursor, clang.cindex.Cursor)

    if self.name in ['__extern_C_']:
        return

    for c in cursor.get_children():
        assert isinstance(c, clang.cindex.Cursor)
        if c.kind is CursorKind.NAMESPACE:
          if not (c.displayname == 'std' or c.displayname.startswith('__')):
            if clang_get_canonical(c, self) in canon:
                clang_append_namespace(canon[clang_get_canonical(c, self)],c)
            else:
                self.namespaces.append(clang_parse_namespace(c,self))
        elif c.kind in [CursorKind.CLASS_DECL, CursorKind.STRUCT_DECL]:
            if clang_get_canonical(c, self) in canon:
                clang_append_class(canon[clang_get_canonical(c, self)],c)
            else:
                self.classes.append(clang_parse_class(c,self))
        elif c.kind in [CursorKind.FUNCTION_DECL]:#CursorKind.CXX_METHOD, CursorKind.CONSTRUCTOR, CursorKind.DESTRUCTOR, CursorKind.FUNCTION_DECL]: #, CursorKind.FUNCTION_TEMPLATE
            self.functions.append(clang_parse_function(c, self))

        elif c.kind in [CursorKind.VAR_DECL]:#CursorKind.FIELD_DECL, CursorKind.VAR_DECL]:
            self.vars.append(clang_parse_variable(c, self))
        # else:
        #     print(c.kind)
        #     print(c.displayname)

def clang_parse_namespace(cursor, scope):
    assert isinstance(cursor, clang.cindex.Cursor)
    # assert isinstance(scope, Namespace)

    #Namespace is also Translation Unit, so check first before setting the name
    if cursor.kind not in [CursorKind.NAMESPACE, CursorKind.TRANSLATION_UNIT]:
        raise Exception('Namespace being constructed from a {}. Requires a NAMESPACE or TRANSLATION_UNIT'.format(cursor.kind.name))

    scope = scope if cursor.kind is CursorKind.NAMESPACE else None
    self = Namespace(cursor.spelling if cursor.kind is CursorKind.NAMESPACE else '', scope, clang_get_canonical(cursor,scope) )

    clang_append_namespace(self,cursor)

    return self

def clang_parse_variable(cursor, scope):
    assert isinstance(cursor, clang.cindex.Cursor)
    assert isinstance(scope, Class) or isinstance(scope, Namespace)

    #Namespace is also Translation Unit, so check first before setting the name
    if cursor.kind not in [CursorKind.VAR_DECL, CursorKind.FIELD_DECL]:
        raise Exception('Variable being constructed from a {}. Requires a VAR or FIELD'.format(cursor.kind.name))


    self = Variable(name=cursor.spelling,scope=scope,canonical=clang_get_canonical(cursor,scope))

    self.annotations = []
    self.visibility = Visibility.DEFAULT
    self.access = clang_map_access(cursor.access_specifier)

    # print str(cursor.access_specifier) + " " + self.canonical

    # for i in range(cursor.get_num_template_arguments()):
    #     print cursor.get_template_argument_type(i).spelling
    # print self.canonical
    # print cursor.type.spelling

    t = cursor.type.get_canonical()
    self.type = clang_parse_type(t)
    self.const = t.is_const_qualified()
    self.static = cursor.kind is CursorKind.VAR_DECL and type(self.scope) is Class

    for c in cursor.get_children():
        assert isinstance(c, clang.cindex.Cursor)

        if c.kind is clang.cindex.CursorKind.ANNOTATE_ATTR:
            self.annotations.append(c.spelling)
            print(c.canonical.spelling + '@' + cursor.spelling)
    return self

index = clang.cindex.Index.create()

def visit(cursor, cond):
    assert isinstance(cursor, clang.cindex.Cursor)
    next = False
    lag = None
    for c in cursor.get_children():
        if next:
            print('Next: ',c.displayname)
            next = False


        if cond(c):
            print('Current', cursor.displayname)
            next = True
            if lag is not None:
                print('LAG: ',lag.displayname, '|', lag.spelling, lag.kind)

        visit(c, cond)

        lag = c

import argparse

parser = argparse.ArgumentParser(description='Generates Python Bindings for C++ code using PyBind11.')
parser.add_argument('include', metavar='ProcessedIncludeFile.h', help='The (preprocessed) header file to parse.')
parser.add_argument('-i', '--include', dest='include_override', metavar='IncludeFile.h', help='The unprocessed header file to include in the output.')
parser.add_argument('-o', '--output', dest='output', required=False, default='result.cpp', metavar='result.cpp',  help='The output filename (default: result.cpp)')
parser.add_argument('-p', '--prefix', dest='prefix', required=False, metavar='/* Prefixed Comment */',  help='The text prefixed to the start of the file')

parser.add_argument('-v', '--parse-output', dest='parse_output', required=False, default=None, metavar='result.cpp',  help='File to output parsed file to.')

args = parser.parse_args()
# print(args)




# if len(sys.argv) < 2:
#     print(docstr)
#
#     # class test:
#     #     def __init__(self):
#     #         self = None
#     #
#     # t = test()
#     # print(t is None)
#     # print(t.__class__)
#     # print(type(t))
#
#     exit()

tu = None

import time

include = args.include #sys.argv[1]
with open(include) as f:
    file_data = """
#pragma once
#ifdef __BINDING_GENERATOR__
    #define friend __attribute__((annotate("friend"))) static
    //#define inline __attribute__((annotate("inline")))
#endif

//#include "%s"

//----------------------------------------------------
// BEGIN SOURCE
//----------------------------------------------------
""".format(include)

    # t = time.time()
    # for l in f:
    #     # l = re.sub(r"\bfriend\s+\b(!class|struct)"), '__attribute__((annotate("friend"))) \1'
    #     # annotation must be class [annotation] name
    #     #TODO: Could actually replace the regex with a class NextIsFriend_uniqueInt
    #
    #     l = re.sub(r"\bfriend\s+\b(class|struct)\b", "//\1 friend", l)
    #     l = re.sub(r'\bextern\s+"C"',"namespace __extern_C_",l)
    #     file_data += l
    # print('Read line by line in', time.time() - t,'seconds') # 0.38 seconds vs 0.16 for all at once

    tt = time.time()
    f.seek(0)
    l = f.read()
    # l = re.sub(r"\bfriend\s+\b(!class|struct)"), '__attribute__((annotate("friend"))) \1'
    # annotation must be class [annotation] name
    #TODO: Could actually replace the regex with a class NextIsFriend_uniqueInt
    t = time.time()
    l = re.sub(r"\bfriend\s+\b(class|struct)\b", "//\1 friend", l)
    print('Substituted friend in', time.time() - t,'seconds')
    t = time.time()

    # about 80 ms for re.sub vs about 4 ms for str.replace, but we'll keep re.sub since it is more generic
    l = re.sub(r'\bextern\s+"C"',"namespace __extern_C_",l)
    print('Substituted (re) extern "C" in', time.time() - t,'seconds')

    t = time.time()
    l = re.sub(r"(\s)\binline\b(\s)", r'\1__attribute__((annotate("inline")))\2', l)
    print('Substituted inline in', time.time() - t,'seconds')

    t = time.time()
    file_data += l
    print('Read all lines in', time.time() - tt,'seconds')


    # tt = time.time()
    # ll = l
    # f.seek(0)
    # l = f.read()
    # # l = re.sub(r"\bfriend\s+\b(!class|struct)"), '__attribute__((annotate("friend"))) \1'
    # # annotation must be class [annotation] name
    # #TODO: Could actually replace the regex with a class NextIsFriend_uniqueInt
    # t = time.time()
    # l = re.sub(r"\bfriend\s+\b(class|struct)\b", "//\1 friend", l)
    # print('Substituted friend in', time.time() - t,'seconds')
    # t = time.time()
    # l = l.replace('extern "C"',"namespace __extern_C_")
    # print('Replaced extern "C" in', time.time() - t,'seconds')
    # file_data += l
    # print('Read all lines in', time.time() - tt,'seconds')
    # print('Strings match ',l==ll)
    # exit()

    # print(file_data)
    tu = index.parse(include, args=['-x', 'c++', '-std=c++14', '-D__BINDING_GENERATOR__',
           '-I/home/nathan/Projects/Urho/Urho3D/Build/include', '-ferror-limit=0'],unsaved_files=[(include,file_data)],
         options=clang.cindex.TranslationUnit.PARSE_INCOMPLETE |
                 #clang.cindex.TranslationUnit.PARSE_DETAILED_PROCESSING_RECORD |
                 clang.cindex.TranslationUnit.PARSE_SKIP_FUNCTION_BODIES)

    for d in tu.diagnostics:
        print(str(d))
# tu = index.parse(sys.argv[1], ['-x', 'c++', '-std=c++14', '-D__BINDING_GENERATOR__'])

print('Translation unit:', tu.spelling)
print('================================')

def checkVis(c):
    assert isinstance(c, clang.cindex.Cursor)
    if c.kind is CursorKind.VISIBILITY_ATTR:
        if c.spelling == 'default':
            return True
        else:
            return False
# visit(tu.cursor,checkVis)
# exit()

default_namespace = clang_parse_namespace(tu.cursor, None)
# print(default_namespace)

dict = {'default_namespace' : default_namespace,
        'include' : include if args.include_override is None else args.include_override,
        'canon' : canon}

prefix = args.prefix

if args.parse_output is not None:
    with open(args.parse_output,'w') as f:
        print('Translation unit:', tu.spelling, file=f) # to long for pycharm to output nicely
        print(toJSON(canon), file=f)
        pprint(toJSON(canon))
        exit()

# print(Visibility.HIDDEN)
# print(Visibility['HIDDEN'])
# print(Visibility(0))
#
# print(canon)
#
# json = toJSON(canon)
# print(json)
#
# c = fromJSON(json)
# print(c)
#
#
# assert c == canon


print(args)
include = include if args.include_override is None else args.include_override
print(include)

bind(canon,default_namespace=default_namespace,includeThese=[include], outputFile=args.output)

#render_bindings(args.output, **globals()) #default_namespace=default_namespace,include= include if args.include_override is None else args.include_override,canon=canon)

