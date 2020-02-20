#include <pybind11/cast.h>

#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>

#include <pybind11/stl_bind.h>

#include <algorithm>


NAMESPACE_BEGIN(PYBIND11_NAMESPACE)
NAMESPACE_BEGIN(detail)

/* SFINAE helper class used by 'is_Comparable */
template <typename T>  struct Container_traits {
    template <typename T2> static std::true_type test_comparable(decltype(std::declval<const T2 &>() == std::declval<const T2 &>())*);
    template <typename T2> static std::false_type test_comparable(...);
    template <typename T2> static std::true_type test_value(typename T2::ValueType *);
    template <typename T2> static std::false_type test_value(...);
    template <typename T2> static std::true_type test_pair(typename T2::KeyType *, typename T2::ValueType *);
    template <typename T2> static std::false_type test_pair(...);

    static constexpr const bool is_Comparable = std::is_same<std::true_type, decltype(test_comparable<T>(nullptr))>::value;
    static constexpr const bool is_pair = std::is_same<std::true_type, decltype(test_pair<T>(nullptr, nullptr))>::value;
    static constexpr const bool is_vector = std::is_same<std::true_type, decltype(test_value<T>(nullptr))>::value;
    static constexpr const bool is_element = !is_pair && !is_vector;
};

/* Default: is_Comparable -> std::false_type */
template <typename T, typename SFINAE = void>
struct is_Comparable : std::false_type { };
/* For non-map data structures, check whether operator== can be instantiated */
template <typename T>
struct is_Comparable<
    T, enable_if_t<Container_traits<T>::is_element &&
                   Container_traits<T>::is_Comparable>>
    : std::true_type { };

/* For a vector/map data structure, recursively check the value type (which is std::pair for maps) */
template <typename T>
struct is_Comparable<T, enable_if_t<Container_traits<T>::is_vector>> {
    static constexpr const bool value =
        is_Comparable<typename T::ValueType>::value;
};

/* For pairs, recursively check the two data types */
template <typename T>
struct is_Comparable<T, enable_if_t<Container_traits<T>::is_pair>> {
    static constexpr const bool value =
        is_Comparable<typename T::KeyType>::value &&
        is_Comparable<typename T::ValueType>::value;
};

template<typename Vector, typename Class_>
void Vector_if_copy_constructible(enable_if_t<is_copy_constructible<Vector>::value, Class_> &cl) {
    cl.def(init<const Vector &>(), "Copy constructor");
}

template<typename Vector, typename Class_>
void Vector_if_equal_operator(enable_if_t<is_Comparable<Vector>::value, Class_> &cl) {
    using T = typename Vector::ValueType;

    cl.def(self == self);
    cl.def(self != self);

    cl.def("count",
        [](const Vector &v, const T &x) {
            unsigned c = 0;
            for (auto&& val : v)
                if (val == x)
                    ++c;
            return c;
            //return std::count(begin(v), end(v), x);
        },
        arg("x"),
        "Return the number of times ``x`` appears in the list"
    );

    cl.def("remove", [](Vector &v, const T &x) {
            auto p = v.Find(x);
            if (p != v.End())
                v.Erase(p);
            else
                throw value_error();
        },
        arg("x"),
        "Remove the first item from the list whose value is x. "
        "It is an error if there is no such item."
    );

    cl.def("__contains__",
        [](const Vector &v, const T &x) {
            return v.Contains(x);
        },
        arg("x"),
        "Return true the container contains ``x``"
    );
}

// Vector modifiers -- requires a copyable Vector_type:
// (Technically, some of these (pop and __delitem__) don't actually require copyability, but it seems
// silly to allow deletion but not insertion, so include them here too.)
template <typename Vector, typename Class_>
void Vector_modifiers(enable_if_t<is_copy_constructible<typename Vector::ValueType>::value, Class_> &cl) {
    using T = typename Vector::ValueType;
    using SizeType = unsigned;
    using DiffType = int;

    cl.def("append",
           [](Vector &v, const T &value) { v.Push(value); },
           arg("x"),
           "Add an item to the end of the list");

    cl.def(init([](iterable it) {
        auto v = std::unique_ptr<Vector>(new Vector());
        v->Reserve(len(it));
        for (handle h : it)
           v->Push(h.cast<T>());
        return v.release();
    }));

    cl.def("extend",
       [](Vector &v, const py::list& list) {
            v.Reserve(v.Size() + list.size());
            for (int i = 0; i < list.size(); ++i)
                v += list[i].cast<T>();
       },
       arg("L"),
       "Extend the list by appending all the items in the given list"
    );

    cl.def("extend",
       [](Vector &v, const Vector &src) {
           v += src;
       },
       arg("L"),
       "Extend the list by appending all the items in the given list"
    );

    cl.def("insert",
        [](Vector &v, SizeType i, const T &x) {
            if (i > v.Size())
                throw index_error();
            v.Insert(v.Begin() + (DiffType) i, x);
        },
        arg("i") , arg("x"),
        "Insert an item at a given position."
    );

    cl.def("pop",
        [](Vector &v) {
            if (v.Empty())
                throw index_error();
            T t = v.Back();
            v.Pop();
            return t;
        },
        "Remove and return the last item"
    );

    cl.def("pop",
        [](Vector &v, SizeType i) {
            if (i >= v.Size())
                throw index_error();
            T t = v[i];
            v.Erase(v.Begin() + (DiffType) i);
            return t;
        },
        arg("i"),
        "Remove and return the item at index ``i``"
    );

    cl.def("__setitem__",
        [](Vector &v, SizeType i, const T &t) {
            if (i >= v.Size())
                throw index_error();
            v[i] = t;
        }
    );

    /// Slicing protocol
    cl.def("__getitem__",
        [](const Vector &v, slice slice) -> Vector * {
            size_t start, stop, step, slicelength;

            if (!slice.compute(v.Size(), &start, &stop, &step, &slicelength))
                throw error_already_set();

            Vector *seq = new Vector();
            seq->Reserve((size_t) slicelength);

            for (size_t i=0; i<slicelength; ++i) {
                seq->Push(v[start]);
                start += step;
            }
            return seq;
        },
        arg("s"),
        "Retrieve list elements using a slice object"
    );

    cl.def("__setitem__",
        [](Vector &v, slice slice,  const Vector &value) {
            size_t start, stop, step, slicelength;
            if (!slice.compute(v.Size(), &start, &stop, &step, &slicelength))
                throw error_already_set();

            if (slicelength != value.Size())
                throw std::runtime_error("Left and right hand size of slice assignment have different sizes!");

            for (size_t i=0; i<slicelength; ++i) {
                v[start] = value[i];
                start += step;
            }
        },
        "Assign list elements using a slice object"
    );

    cl.def("__delitem__",
        [](Vector &v, SizeType i) {
            if (i >= v.Size())
                throw index_error();
            v.Erase(v.Begin() + DiffType(i));
        },
        "Delete the list elements at index ``i``"
    );

    cl.def("__delitem__",
        [](Vector &v, slice slice) {
            size_t start, stop, step, slicelength;

            if (!slice.compute(v.Size(), &start, &stop, &step, &slicelength))
                throw error_already_set();

            if (step == 1 && false) {
                v.Erase(v.Begin() + (DiffType) start, v.Begin() + DiffType(start + slicelength));
            } else {
                for (size_t i = 0; i < slicelength; ++i) {
                    v.Erase(v.Begin() + DiffType(start));
                    start += step - 1;
                }
            }
        },
        "Delete list elements using a slice object"
    );

}

// If the type has an operator[] that doesn't return a reference (most notably std::vector<bool>),
// we have to access by copying; otherwise we return by reference.
template <typename Vector> using Vector_needs_copy = negation<
    std::is_same<decltype(std::declval<Vector>()[unsigned()]), typename Vector::ValueType &>>;

// The usual case: access and iterate by reference
template <typename Vector, typename Class_>
void Vector_accessor(enable_if_t<!Vector_needs_copy<Vector>::value, Class_> &cl) {
    using T = typename Vector::ValueType;
    using SizeType = unsigned;
    using ItType   = typename Vector::Iterator;

    cl.def("__getitem__",
        [](Vector &v, SizeType i) -> T & {
            if (i >= v.Size())
                throw index_error();
            return v[i];
        },
        return_value_policy::reference_internal // ref + keepalive
    );

    cl.def("__iter__",
           [](Vector &v) {
               return make_iterator<
                   return_value_policy::reference_internal, ItType, ItType, T&>(
                   v.Begin(), v.End());
           },
           keep_alive<0, 1>() /* Essential: keep list alive while iterator exists */
    );
}

// The case for special objects, like std::vector<bool>, that have to be returned-by-copy:
template <typename Vector, typename Class_>
void Vector_accessor(enable_if_t<Vector_needs_copy<Vector>::value, Class_> &cl) {
    using T = typename Vector::ValueType;
    using SizeType = unsigned;
    using ItType   = typename Vector::Iterator;
    cl.def("__getitem__",
        [](const Vector &v, SizeType i) -> T {
            if (i >= v.Size())
                throw index_error();
            return v[i];
        }
    );

    cl.def("__iter__",
           [](Vector &v) {
               return make_iterator<
                   return_value_policy::copy, ItType, ItType, T>(
                   v.Begin(), v.End());
           },
           keep_alive<0, 1>() /* Essential: keep list alive while iterator exists */
    );
}

template <typename Vector, typename Class_> auto Vector_if_insertion_operator(Class_ &cl, std::string const &name)
    -> decltype(std::declval<std::ostream&>() << std::declval<typename Vector::ValueType>(), void()) {
    using size_type = unsigned;

    cl.def("__repr__",
           [name](Vector &v) {
            std::ostringstream s;
            s << name << '[';
            for (size_type i=0; i < v.Size(); ++i) {
                s << v[i];
                if (i != v.Size() - 1)
                    s << ", ";
            }
            s << ']';
            return s.str();
        },
        "Return the canonical string representation of this list."
    );
}

// Provide the buffer interface for vectors if we have data() and we have a format for it
// GCC seems to have "void std::vector<bool>::data()" - doing SFINAE on the existence of data() is insufficient, we need to check it returns an appropriate pointer
template <typename Vector, typename = void>
struct Vector_has_data_and_format : std::false_type {};
template <typename Vector>
struct Vector_has_data_and_format<Vector, enable_if_t<std::is_same<decltype(format_descriptor<typename Vector::ValueType>::format(), std::declval<Vector>().data()), typename Vector::ValueType*>::value>> : std::true_type {};

// Add the buffer interface to a vector
template <typename Vector, typename Class_, typename... Args>
enable_if_t<detail::any_of<std::is_same<Args, buffer_protocol>...>::value>
Vector_buffer(Class_& cl) {
    using T = typename Vector::ValueType;

    static_assert(Vector_has_data_and_format<Vector>::value, "There is not an appropriate format descriptor for this vector");

    // numpy.h declares this for arbitrary types, but it may raise an exception and crash hard at runtime if PYBIND11_NUMPY_DTYPE hasn't been called, so check here
    format_descriptor<T>::format();

    cl.def_buffer([](Vector& v) -> buffer_info {
        return buffer_info(v.data(), static_cast<ssize_t>(sizeof(T)), format_descriptor<T>::format(), 1, {v.Size()}, {sizeof(T)});
    });

    cl.def(init([](buffer buf) {
        auto info = buf.request();
        if (info.ndim != 1 || info.strides[0] % static_cast<ssize_t>(sizeof(T)))
            throw type_error("Only valid 1D buffers can be copied to a vector");
        if (!detail::compare_buffer_info<T>::compare(info) || (ssize_t) sizeof(T) != info.itemsize)
            throw type_error("Format mismatch (Python: " + info.format + " C++: " + format_descriptor<T>::format() + ")");

        auto vec = std::unique_ptr<Vector>(new Vector());
        vec->Reserve((size_t) info.shape[0]);
        T *p = static_cast<T*>(info.ptr);
        ssize_t step = info.strides[0] / static_cast<ssize_t>(sizeof(T));
        T *end = p + info.shape[0] * step;
        for (; p != end; p += step)
            vec->Push(*p);
        return vec.release();
    }));

    return;
}

template <typename Vector, typename Class_, typename... Args>
enable_if_t<!detail::any_of<std::is_same<Args, buffer_protocol>...>::value> Vector_buffer(Class_&) {}

NAMESPACE_END(detail)

//
// std::vector
//
template <typename Vector, typename holder_type = std::unique_ptr<Vector>, typename... Args>
class_<Vector, holder_type> bind_Vector(handle scope, std::string const &name, Args&&... args) {
    using Class_ = class_<Vector, holder_type>;

    // If the ValueType is unregistered (e.g. a converting type) or is itself registered
    // module-local then make the vector binding module-local as well:
    using vtype = typename Vector::ValueType;
    auto vtype_info = detail::get_type_info(typeid(vtype));
    bool local = !vtype_info || vtype_info->module_local;

    Class_ cl(scope, name.c_str(), pybind11::module_local(local), std::forward<Args>(args)...);

    // Declare the buffer interface if a buffer_protocol() is passed in
    detail::Vector_buffer<Vector, Class_, Args...>(cl);

    cl.def(init<>());

    // Register copy constructor (if possible)
    detail::Vector_if_copy_constructible<Vector, Class_>(cl);

    // Register comparison-related operators and functions (if possible)
    detail::Vector_if_equal_operator<Vector, Class_>(cl);

    // Register stream insertion operator (if possible). Rather, registers __repr__ if possible.
    detail::Vector_if_insertion_operator<Vector, Class_>(cl, name);

    // Modifiers require copyable vector value type
    detail::Vector_modifiers<Vector, Class_>(cl);

    // Accessor and iterator; return by value if copyable, otherwise we return by ref + keep-alive
    detail::Vector_accessor<Vector, Class_>(cl);

    cl.def("__bool__",
        [](const Vector &v) -> bool {
            return !v.Empty();
        },
        "Check whether the list is nonempty"
    );

    cl.def("__len__", &Vector::Size);
    
    
    py::implicitly_convertible<py::list, Vector>();

    return cl;
}


NAMESPACE_BEGIN(detail)

/* Fallback functions */
template <typename, typename, typename... Args> void Map_if_insertion_operator(const Args &...) { }
template <typename, typename, typename... Args> void Map_assignment(const Args &...) { }

// Map assignment when copy-assignable: just copy the value
template <typename Map, typename Class_>
void Map_assignment(enable_if_t<std::is_copy_assignable<typename Map::ValueType>::value, Class_> &cl) {
    using KeyType = typename Map::KeyType;
    using MappedType = typename Map::ValueType;

    cl.def("__setitem__",
           [](Map &m, const KeyType &k, const MappedType &v) {
               //auto it = m.Find(k);
               //if (it != m.End()) it->second = v;
               //else 
                    m[k] = v;
           }
    );
}

// Not copy-assignable, but still copy-constructible: we can update the value by erasing and reinserting
template<typename Map, typename Class_>
void Map_assignment(enable_if_t<
        !std::is_copy_assignable<typename Map::ValueType>::value &&
        is_copy_constructible<typename Map::ValueType>::value,
        Class_> &cl) {
    using KeyType = typename Map::KeyType;
    using MappedType = typename Map::ValueType;

    cl.def("__setitem__",
           [](Map &m, const KeyType &k, const MappedType &v) {
               // We can't use m[k] = v; because value type might not be default constructable
//               auto r = m.emplace(k, v);
//               if (!r.second) {
//                   // value type is not copy assignable so the only way to insert it is to erase it first...
//                   m.Erase(r.first);
//                   m.emplace(k, v);
//               }
                m[k] = v;
           }
    );
}


template <typename Map, typename Class_> auto Map_if_insertion_operator(Class_ &cl, std::string const &name)
-> decltype(std::declval<std::ostream&>() << std::declval<typename Map::KeyType>() << std::declval<typename Map::ValueType>(), void()) {

    cl.def("__repr__",
           [name](Map &m) {
            std::ostringstream s;
            s << name << '{';
            bool f = false;
            for (auto const &kv : m) {
                if (f)
                    s << ", ";
                s << kv.first_ << ": " << kv.second_;
                f = true;
            }
            s << '}';
            return s.str();
        },
        "Return the canonical string representation of this Map."
    );
}


/// Makes an python iterator over the keys (`.first`) of a iterator over pairs from a
/// first and past-the-end InputIterator.
template <return_value_policy Policy = return_value_policy::reference_internal,
          typename Iterator,
          typename Sentinel,
          typename KeyType = decltype((*std::declval<Iterator>()).first_),
          typename... Extra>
iterator make_Key_iterator(Iterator first, Sentinel last, Extra &&... extra) {
    typedef detail::iterator_state<Iterator, Sentinel, true, Policy> state;

    if (!detail::get_type_info(typeid(state), false)) {
        class_<state>(handle(), "iterator", pybind11::module_local())
            .def("__iter__", [](state &s) -> state& { return s; })
            .def("__next__", [](state &s) -> KeyType {
                if (!s.first_or_done)
                    ++s.it;
                else
                    s.first_or_done = false;
                if (s.it == s.end) {
                    s.first_or_done = true;
                    throw stop_iteration();
                }
                return (*s.it).first_;
            }, std::forward<Extra>(extra)..., Policy);
    }

    return cast(state{first, last, true});
}


/// Makes an iterator over the keys (`.first`) of a stl map-like container supporting
/// `std::begin()`/`std::end()`
template <return_value_policy Policy = return_value_policy::reference_internal,
          typename Type, typename... Extra> iterator make_Key_iterator(Type &value, Extra&&... extra) {
    return make_Key_iterator<Policy>(std::begin(value), std::end(value), extra...);
}


NAMESPACE_END(detail)

template <typename Map, typename holder_type = std::unique_ptr<Map>, typename... Args>
class_<Map, holder_type> bind_Map(handle scope, const std::string &name, Args&&... args) {
    using KeyType = typename Map::KeyType;
    using MappedType = typename Map::ValueType;
    using Class_ = class_<Map, holder_type>;

    // If either type is a non-module-local bound type then make the Map binding non-local as well;
    // otherwise (e.g. both types are either module-local or converting) the Map will be
    // module-local.
    auto tinfo = detail::get_type_info(typeid(MappedType));
    bool local = !tinfo || tinfo->module_local;
    if (local) {
        tinfo = detail::get_type_info(typeid(KeyType));
        local = !tinfo || tinfo->module_local;
    }

    Class_ cl(scope, name.c_str(), pybind11::module_local(local), std::forward<Args>(args)...);

    cl.def(init<>());
    
    cl.def(init([](dict d) {
        auto m = std::unique_ptr<Map>(new Map());
        for (auto&& kv : d) //std::pair<handle, handle>
        {
            KeyType k = kv.first.cast<KeyType>();
            MappedType v = kv.second.cast<MappedType>();
            (*m)[k] = v;
        }
        return m.release();
    }));
    
    cl.def(init([](iterable it) {
        auto m = std::unique_ptr<Map>(new Map());
        int count = 0;
        for (handle h : it)
            if (len(h) == 2)
            {
                iterator i = iter(h);
                KeyType k = i->cast<KeyType>();
                MappedType v = (++i)->cast<MappedType>();
                (*m)[k] = v;
            }
            else
                throw value_error("dictionary update sequence element #" + std::to_string(count) + " has length " + std::to_string(len(h)) + "; 2 is required");
        return m.release();
    }));

    // Register stream insertion operator (if possible)
//    detail::Map_if_insertion_operator<Map, Class_>(cl, name);
//TODO: look into https://stackoverflow.com/questions/34940754/fallback-to-to-string-when-operator-fails
    cl.def("__repr__",
           [name](Map &m) {
//            std::ostringstream s;
//            s << name << '{';
//            bool f = false;
//            for (auto const &kv : m) {
//                if (f)
//                    s << ", ";
//                s << repr(cast(kv.first_)).cast<std::string>() << ": " << repr(cast(kv.second_)).cast<std::string>();
//                f = true;
//            }
//            s << '}';
//            return s.str();

              return "UNSUPORTED AT PRESENT";
            
//            Urho3D::String s = name;
//            s += '{';
//            bool f = false;
//            for (auto const &kv : m) {
//                if (f)
//                    s += ", ";
//                s += repr(cast(kv.first_)).cast< ::Urho3D::String>();
//                s += ": " + repr(cast(kv.second_)).cast< ::Urho3D::String>();
//                f = true;
//            }
//            s += '}';
//            return s;
        },
        "Return the canonical string representation of this Map."
    );

    cl.def("__bool__",
        [](const Map &m) -> bool { return !m.Empty(); },
        "Check whether the Map is nonempty"
    );

    cl.def("__iter__",
           [](Map &m) { return detail::make_Key_iterator(m.Begin(), m.End()); },
           keep_alive<0, 1>() /* Essential: keep list alive while iterator exists */
    );

    cl.def("items",
           [](Map &m) { return make_iterator(m.Begin(), m.End()); },
           keep_alive<0, 1>() /* Essential: keep list alive while iterator exists */
    );

    cl.def("__getitem__",
        [](Map &m, const KeyType &k) -> MappedType & {
            auto it = m.Find(k);
            if (it == m.End())
              throw key_error();
           return it->second_;
        },
        return_value_policy::reference_internal // ref + keepalive
    );

    // Assignment provided only if the type is copyable
    detail::Map_assignment<Map, Class_>(cl);

    cl.def("__delitem__",
           [](Map &m, const KeyType &k) {
               auto it = m.Find(k);
               if (it == m.End())
                   throw key_error();
               return m.Erase(it);
           }
    );

    cl.def("__len__", &Map::Size);
    
    py::implicitly_convertible<py::dict, Map>();

    return cl;
}


NAMESPACE_END(PYBIND11_NAMESPACE)




//template<typename T>
//py::class_<Urho3D::Vector<T>>& BindVector<T>(pybind11::handle scope, const char *name)
//{
//  auto pyclass_Var = py::class_<Urho3D::Vector<T>>(scope, name, "test doc")
//  .def(py::init<>(), "Default Constructor")
//  .def(py::init<unsigned>(), "Construct with initial size.")
//  .def(py::init<unsigned, const T&>(), "Construct with initial size and default value.")
//  .def(py::init<const Urho3D::Vector<T>&>(), "Copy Constructor")
//  .def(py::init([] (const py::list& list) { 
//            //TODO: default_constructible test
//            Urho3D::Vector<T>* v = new Urho3D::Vector<T>(list.size());
//            for (int i = 0; i < list.size(); ++i)
//                v[i] = list[i].cast<T>();
//            return v;
//  }), "List Constructor")
////  .def(
////  .def("__init__",[](std::array<int,4> &self, const py::list& list) { 
////            if (list.size() == 4)
////            {
////                for (int i = 0; i < 4; ++i)
////                    self[i] = list[i].cast<int>();
////            }
////            else
////            {
////                py::print("Failed with empty list.");
////                throw new std::runtime_error("oh no");
////            }
////  }, "List Constructor")
//  //.def_property("first", [](std::array<int,4> &me) { return me[0]; }, 
//  //  [](std::array<int,4> &me, int x) { me[0] = x; })
////    [](py::object self, py val) { 
////        if (py::isinstance<py::int_>(val))
////            self.cast<Urho3D::B*>()->z = val.cast<int>();
// ;
//  py::implicitly_convertible<py::list, Urho3D::Vector<T>>();
//  return pyclass_Var;
//}
