#pragma once

#include <pybind11/pytypes.h>
#include <pybind11/detail/typeid.h>
#include <pybind11/detail/descr.h>
#include <pybind11/detail/internals.h>

#include <Urho3D/Container/Str.h>

NAMESPACE_BEGIN(PYBIND11_NAMESPACE)

NAMESPACE_BEGIN(detail)

// Helper class for UTF-{8,16,32} C++ stl strings:
template <> 
struct string_caster<Urho3D::String, false> {
    using CharT = char;

    // Simplify life by being able to assume standard char sizes (the standard only guarantees
    // minimums, but Python requires exact sizes)
    static_assert(!std::is_same<CharT, char>::value || sizeof(CharT) == 1, "Unsupported char size != 1");
    static constexpr size_t UTF_N = 8 * sizeof(CharT);

    /**
     * Conversion part 1 (Python->C++): convert a PyObject into a inty
     * instance or return false upon failure. The second argument
     * indicates whether implicit conversions should be applied.
     */
    bool load(handle src, bool) {
#if PY_MAJOR_VERSION < 3
        object temp;
#endif
        handle load_src = src;
        if (!src) {
            return false;
        } else if (!PyUnicode_Check(load_src.ptr())) {
#if PY_MAJOR_VERSION >= 3
            return load_bytes(load_src);
#else
            if (sizeof(CharT) == 1) {
                return load_bytes(load_src);
            }

            // The below is a guaranteed failure in Python 3 when PyUnicode_Check returns false
            if (!PYBIND11_BYTES_CHECK(load_src.ptr()))
                return false;

            temp = reinterpret_steal<object>(PyUnicode_FromObject(load_src.ptr()));
            if (!temp) { PyErr_Clear(); return false; }
            load_src = temp;
#endif
        }

        object utfNbytes = reinterpret_steal<object>(PyUnicode_AsEncodedString(
            load_src.ptr(), UTF_N == 8 ? "utf-8" : UTF_N == 16 ? "utf-16" : "utf-32", nullptr));
        if (!utfNbytes) { PyErr_Clear(); return false; }

        const CharT *buffer = reinterpret_cast<const CharT *>(PYBIND11_BYTES_AS_STRING(utfNbytes.ptr()));
        size_t length = (size_t) PYBIND11_BYTES_SIZE(utfNbytes.ptr()) / sizeof(CharT);
        if (UTF_N > 8) { buffer++; length--; } // Skip BOM for UTF-16/32
        value = Urho3D::String(buffer, length);

        // If we're loading a string_view we need to keep the encoded Python object alive:
//        if (IsView) False
//            loader_life_support::add_patient(utfNbytes);

        return true;
    }

    /**
     * Conversion part 2 (C++ -> Python): convert an inty instance into
     * a Python object. The second and third arguments are used to
     * indicate the return value policy and parent object (for
     * ``return_value_policy::reference_internal``) and are generally
     * ignored by implicit casters.
     */
    static handle cast(const Urho3D::String &src, return_value_policy /* policy */, handle /* parent */) {
        const char *buffer = reinterpret_cast<const char *>(src.CString());
        ssize_t nbytes = ssize_t(src.Length() * sizeof(CharT));
        handle s = decode_utfN(buffer, nbytes);
        if (!s) throw error_already_set();
        return s;
    }

    /**
     * This macro establishes the name 's' in
     * function signatures and declares a local variable
     * 'value' of type inty
     */
    PYBIND11_TYPE_CASTER(Urho3D::String, _(PYBIND11_STRING_NAME));

private:
    static handle decode_utfN(const char *buffer, ssize_t nbytes) {
#if !defined(PYPY_VERSION)
        return
            UTF_N == 8  ? PyUnicode_DecodeUTF8(buffer, nbytes, nullptr) :
            UTF_N == 16 ? PyUnicode_DecodeUTF16(buffer, nbytes, nullptr, nullptr) :
                          PyUnicode_DecodeUTF32(buffer, nbytes, nullptr, nullptr);
#else
        // PyPy seems to have multiple problems related to PyUnicode_UTF*: the UTF8 version
        // sometimes segfaults for unknown reasons, while the UTF16 and 32 versions require a
        // non-const char * arguments, which is also a nuissance, so bypass the whole thing by just
        // passing the encoding as a string value, which works properly:
        return PyUnicode_Decode(buffer, nbytes, UTF_N == 8 ? "utf-8" : UTF_N == 16 ? "utf-16" : "utf-32", nullptr);
#endif
    }

    // When loading into a std::string or char*, accept a bytes object as-is (i.e.
    // without any encoding/decoding attempt).  For other C++ char sizes this is a no-op.
    // which supports loading a unicode from a str, doesn't take this path.
//    template <typename C = CharT>
//    bool load_bytes(enable_if_t<sizeof(C) == 1, handle> src) {
    bool load_bytes(handle src) {
        if (PYBIND11_BYTES_CHECK(src.ptr())) {
            // We were passed a Python 3 raw bytes; accept it into a std::string or char*
            // without any encoding attempt.
            const char *bytes = PYBIND11_BYTES_AS_STRING(src.ptr());
            if (bytes) {
                value = Urho3D::String(bytes, (size_t) PYBIND11_BYTES_SIZE(src.ptr()));
                return true;
            }
        }

        return false;
    }

    template <typename C = CharT>
    bool load_bytes(enable_if_t<sizeof(C) != 1, handle>) { return false; }
};

template<>
struct type_caster<Urho3D::String>
    : string_caster<Urho3D::String> {};


NAMESPACE_END(detail)


NAMESPACE_END(PYBIND11_NAMESPACE)
