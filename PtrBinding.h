#include <pybind11/cast.h>

#include <Urho3D/Container/Ptr.h>


NAMESPACE_BEGIN(PYBIND11_NAMESPACE)
NAMESPACE_BEGIN(detail)

template <typename T>
struct holder_helper<Urho3D::SharedPtr<T>> {
    static auto get(const Urho3D::SharedPtr<T> &p) -> decltype(p.Get()) { return p.Get(); }
};

template <typename T>
struct holder_helper<Urho3D::WeakPtr<T>> {
    static auto get(const Urho3D::WeakPtr<T> &p) -> decltype(p.Get()) { return p.Get(); }
};


NAMESPACE_END(detail)
NAMESPACE_END(PYBIND11_NAMESPACE)
