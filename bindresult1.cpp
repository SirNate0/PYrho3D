

/*********************************************************
 * AUTO GENERATED BINDING CODE - bind.py                 *
 * Please Run bind.py on the source again with different *
 * overrides rather than modfying this file directly.    *
 * Called as:                                            *
 * {callstring:50} *
 *********************************************************/




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
#include <Urho3D/Urho3DAll.h>

// Patch Urho things (esp. function default values)
typedef Urho3D::String::Iterator Iterator;


typedef Urho3D::Renderer::ShadowMapFilter ShadowMapFilter;
const auto& RIGHT_FORWARD_UP = Urho3D::RaycastVehicle::RIGHT_FORWARD_UP;


//================================================
//Operator typedefs
//================================================
// These are needed to prevent the compiler disliking the spaces, so we make it a single word
typedef unsigned long long unsignedlonglong;
typedef unsigned int unsignedint;
typedef unsigned short unsignedshort;
typedef unsigned long unsignedlong;
typedef long long longlong;

//================================================
// Implement Classes
//================================================
void Implement_Urho3D_HashBase(py::class_<Urho3D::HashBase, Urho3D::ExternalPtr<Urho3D::HashBase>>& pyclass_Var_Urho3D_HashBase)
{
    // Class HashBase Implementation
pyclass_Var_Urho3D_HashBase
  .def(py::init<>(), "todo: constructor docstring")
  .def("Swap", (void (Urho3D::HashBase::*)(Urho3D::HashBase &)) &Urho3D::HashBase::Swap, "todo: docstring", py::arg("rhs"))
  .def("Size", (unsigned int (Urho3D::HashBase::*)() const) &Urho3D::HashBase::Size, "todo: docstring")
  .def("NumBuckets", (unsigned int (Urho3D::HashBase::*)() const) &Urho3D::HashBase::NumBuckets, "todo: docstring")
  .def("Empty", (bool (Urho3D::HashBase::*)() const) &Urho3D::HashBase::Empty, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_WString(py::class_<Urho3D::WString, Urho3D::ExternalPtr<Urho3D::WString>>& pyclass_Var_Urho3D_WString)
{
    // Class WString Implementation
pyclass_Var_Urho3D_WString
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::String &>(), "todo: constructor docstring")
  //.def("~WString", (void (Urho3D::WString::*)()) &Urho3D::WString::~WString, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(wchar_t & operator[](unsigned int index=None), "todo: docstring").def("__index__", (wchar_t & (Urho3D::WString::*)(unsigned int)) &Urho3D::WString::operator[], py::operator, "todo: operator docstring. Switch to py: :self ops.")
//Unhandled call style []     //['unsigned int']; op [], ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(const wchar_t & operator[](unsigned int index=None), "todo: docstring").def("__index__", (const wchar_t & (Urho3D::WString::*)(unsigned int) const) &Urho3D::WString::operator[], py::operator, "todo: operator docstring. Switch to py: :self ops.")
//Unhandled call style []     //['unsigned int']; op [], ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("At", (wchar_t & (Urho3D::WString::*)(unsigned int)) &Urho3D::WString::At, "todo: docstring", py::arg("index"))
  .def("At", (const wchar_t & (Urho3D::WString::*)(unsigned int) const) &Urho3D::WString::At, "todo: docstring", py::arg("index"))
  .def("Resize", (void (Urho3D::WString::*)(unsigned int)) &Urho3D::WString::Resize, "todo: docstring", py::arg("newLength"))
  .def("Empty", (bool (Urho3D::WString::*)() const) &Urho3D::WString::Empty, "todo: docstring")
  .def("Length", (unsigned int (Urho3D::WString::*)() const) &Urho3D::WString::Length, "todo: docstring")
  .def("CString", (const wchar_t * (Urho3D::WString::*)() const) &Urho3D::WString::CString, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_StringHashRegister(py::class_<Urho3D::StringHashRegister, Urho3D::ExternalPtr<Urho3D::StringHashRegister>>& pyclass_Var_Urho3D_StringHashRegister)
{
    // Class StringHashRegister Implementation
pyclass_Var_Urho3D_StringHashRegister
  .def(py::init<bool>(), "todo: constructor docstring")
  //.def("~StringHashRegister", (void (Urho3D::StringHashRegister::*)()) &Urho3D::StringHashRegister::~StringHashRegister, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("RegisterString", (Urho3D::StringHash (Urho3D::StringHashRegister::*)(const Urho3D::StringHash &, const char *)) &Urho3D::StringHashRegister::RegisterString, "todo: docstring", py::arg("hash"), py::arg("string"))
  .def("RegisterString", (Urho3D::StringHash (Urho3D::StringHashRegister::*)(const char *)) &Urho3D::StringHashRegister::RegisterString, "todo: docstring", py::arg("string"))
  .def("GetStringCopy", (Urho3D::String (Urho3D::StringHashRegister::*)(const Urho3D::StringHash &) const) &Urho3D::StringHashRegister::GetStringCopy, "todo: docstring", py::arg("hash"))
  .def("Contains", (bool (Urho3D::StringHashRegister::*)(const Urho3D::StringHash &) const) &Urho3D::StringHashRegister::Contains, "todo: docstring", py::arg("hash"))
  .def("GetString", (const Urho3D::String & (Urho3D::StringHashRegister::*)(const Urho3D::StringHash &) const) &Urho3D::StringHashRegister::GetString, "todo: docstring", py::arg("hash"))
  .def("GetInternalMap", (const Urho3D::StringMap & (Urho3D::StringHashRegister::*)() const) &Urho3D::StringHashRegister::GetInternalMap, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_StringFactory(py::class_<Urho3D::StringFactory, Urho3D::ExternalPtr<Urho3D::StringFactory>>& pyclass_Var_Urho3D_StringFactory)
{
    // Class StringFactory Implementation
pyclass_Var_Urho3D_StringFactory
  .def("GetStringConstant", (const void * (Urho3D::StringFactory::*)(const char *, unsigned int)) &Urho3D::StringFactory::GetStringConstant, "todo: docstring", py::arg("data"), py::arg("length"))
  .def("ReleaseStringConstant", (int (Urho3D::StringFactory::*)(const void *)) &Urho3D::StringFactory::ReleaseStringConstant, "todo: docstring", py::arg("str"))
  .def("GetRawStringData", (int (Urho3D::StringFactory::*)(const void *, char *, unsigned int *) const) &Urho3D::StringFactory::GetRawStringData, "todo: docstring", py::arg("str"), py::arg("data"), py::arg("length"))
// Class Variables:
;
}

void Implement_Urho3D_MutexLock(py::class_<Urho3D::MutexLock, Urho3D::ExternalPtr<Urho3D::MutexLock>>& pyclass_Var_Urho3D_MutexLock)
{
    // Class MutexLock Implementation
pyclass_Var_Urho3D_MutexLock
  .def(py::init<Urho3D::Mutex &>(), "todo: constructor docstring")
  //.def("~MutexLock", (void (Urho3D::MutexLock::*)()) &Urho3D::MutexLock::~MutexLock, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def(py::init<const Urho3D::MutexLock &>(), "todo: constructor docstring")
    //['Urho3D::MutexLock']; op False, ctor True, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::MutexLock(), "todo: docstring").def("__assign__", (Urho3D::MutexLock & (Urho3D::MutexLock::*)(const Urho3D::MutexLock &)) &Urho3D::MutexLock::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::MutexLock']; op =, ctor False, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_RefCounted(py::class_<Urho3D::RefCounted, Urho3D::SharedPtr<Urho3D::RefCounted>>& pyclass_Var_Urho3D_RefCounted)
{
    // Class RefCounted Implementation
pyclass_Var_Urho3D_RefCounted
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~RefCounted", (void (Urho3D::RefCounted::*)()) &Urho3D::RefCounted::~RefCounted, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def(py::init<const Urho3D::RefCounted &>(), "todo: constructor docstring")
    //['Urho3D::RefCounted']; op False, ctor True, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::RefCounted(), "todo: docstring").def("__assign__", (Urho3D::RefCounted & (Urho3D::RefCounted::*)(const Urho3D::RefCounted &)) &Urho3D::RefCounted::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::RefCounted']; op =, ctor False, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
  .def("AddRef", (void (Urho3D::RefCounted::*)()) &Urho3D::RefCounted::AddRef, "todo: docstring")
  .def("ReleaseRef", (void (Urho3D::RefCounted::*)()) &Urho3D::RefCounted::ReleaseRef, "todo: docstring")
  .def("Refs", (int (Urho3D::RefCounted::*)() const) &Urho3D::RefCounted::Refs, "todo: docstring")
  .def("WeakRefs", (int (Urho3D::RefCounted::*)() const) &Urho3D::RefCounted::WeakRefs, "todo: docstring")
  //.def("RefCountPtr", (Urho3D::RefCount * (Urho3D::RefCounted::*)()) &Urho3D::RefCounted::RefCountPtr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_Vector2(py::class_<Urho3D::Vector2, Urho3D::ExternalPtr<Urho3D::Vector2>>& pyclass_Var_Urho3D_Vector2)
{
    // Class Vector2 Implementation
pyclass_Var_Urho3D_Vector2
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector2 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::IntVector2 &>(), "todo: constructor docstring")
  .def(py::init<float, float>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Vector2(), "todo: docstring").def("__assign__", (Urho3D::Vector2 & (Urho3D::Vector2::*)(const Urho3D::Vector2 &)) &Urho3D::Vector2::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Vector2']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(-py::self, "todo: docstring")
    //[]; op -@, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / float(), "todo: docstring")
    //['float']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self -= Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op -=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= float(), "todo: docstring")
    //['float']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= float(), "todo: docstring")
    //['float']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Normalize", (void (Urho3D::Vector2::*)()) &Urho3D::Vector2::Normalize, "todo: docstring")
  .def("Length", (float (Urho3D::Vector2::*)() const) &Urho3D::Vector2::Length, "todo: docstring")
  .def("LengthSquared", (float (Urho3D::Vector2::*)() const) &Urho3D::Vector2::LengthSquared, "todo: docstring")
  .def("DotProduct", (float (Urho3D::Vector2::*)(const Urho3D::Vector2 &) const) &Urho3D::Vector2::DotProduct, "todo: docstring", py::arg("rhs"))
  .def("AbsDotProduct", (float (Urho3D::Vector2::*)(const Urho3D::Vector2 &) const) &Urho3D::Vector2::AbsDotProduct, "todo: docstring", py::arg("rhs"))
  .def("ProjectOntoAxis", (float (Urho3D::Vector2::*)(const Urho3D::Vector2 &) const) &Urho3D::Vector2::ProjectOntoAxis, "todo: docstring", py::arg("axis"))
  .def("Angle", (float (Urho3D::Vector2::*)(const Urho3D::Vector2 &) const) &Urho3D::Vector2::Angle, "todo: docstring", py::arg("rhs"))
  .def("Abs", (Urho3D::Vector2 (Urho3D::Vector2::*)() const) &Urho3D::Vector2::Abs, "todo: docstring")
  .def("Lerp", (Urho3D::Vector2 (Urho3D::Vector2::*)(const Urho3D::Vector2 &, float) const) &Urho3D::Vector2::Lerp, "todo: docstring", py::arg("rhs"), py::arg("t"))
  .def("Equals", (bool (Urho3D::Vector2::*)(const Urho3D::Vector2 &) const) &Urho3D::Vector2::Equals, "todo: docstring", py::arg("rhs"))
  .def("IsNaN", (bool (Urho3D::Vector2::*)() const) &Urho3D::Vector2::IsNaN, "todo: docstring")
  .def("Normalized", (Urho3D::Vector2 (Urho3D::Vector2::*)() const) &Urho3D::Vector2::Normalized, "todo: docstring")
  .def("Data", (const float * (Urho3D::Vector2::*)() const) &Urho3D::Vector2::Data, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::Vector2::*)() const) &Urho3D::Vector2::ToString, "todo: docstring")
// External Operators:
  .def(float() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("x",&Urho3D::Vector2::x_, "todo: var docstring")//float
  .def_readwrite("y",&Urho3D::Vector2::y_, "todo: var docstring")//float
  .def_readonly_static("ZERO",&Urho3D::Vector2::ZERO, "todo: var docstring")//const Urho3D::Vector2
  .def_readonly_static("LEFT",&Urho3D::Vector2::LEFT, "todo: var docstring")//const Urho3D::Vector2
  .def_readonly_static("RIGHT",&Urho3D::Vector2::RIGHT, "todo: var docstring")//const Urho3D::Vector2
  .def_readonly_static("UP",&Urho3D::Vector2::UP, "todo: var docstring")//const Urho3D::Vector2
  .def_readonly_static("DOWN",&Urho3D::Vector2::DOWN, "todo: var docstring")//const Urho3D::Vector2
  .def_readonly_static("ONE",&Urho3D::Vector2::ONE, "todo: var docstring")//const Urho3D::Vector2
;
}

void Implement_Urho3D_Vector3(py::class_<Urho3D::Vector3, Urho3D::ExternalPtr<Urho3D::Vector3>>& pyclass_Var_Urho3D_Vector3)
{
    // Class Vector3 Implementation
pyclass_Var_Urho3D_Vector3
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector2 &, float>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector2 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::IntVector3 &>(), "todo: constructor docstring")
  .def(py::init<float, float, float>(), "todo: constructor docstring")
  .def(py::init<float, float>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Vector3(), "todo: docstring").def("__assign__", (Urho3D::Vector3 & (Urho3D::Vector3::*)(const Urho3D::Vector3 &)) &Urho3D::Vector3::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Vector3']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(-py::self, "todo: docstring")
    //[]; op -@, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / float(), "todo: docstring")
    //['float']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self -= Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op -=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= float(), "todo: docstring")
    //['float']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= float(), "todo: docstring")
    //['float']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Normalize", (void (Urho3D::Vector3::*)()) &Urho3D::Vector3::Normalize, "todo: docstring")
  .def("Length", (float (Urho3D::Vector3::*)() const) &Urho3D::Vector3::Length, "todo: docstring")
  .def("LengthSquared", (float (Urho3D::Vector3::*)() const) &Urho3D::Vector3::LengthSquared, "todo: docstring")
  .def("DotProduct", (float (Urho3D::Vector3::*)(const Urho3D::Vector3 &) const) &Urho3D::Vector3::DotProduct, "todo: docstring", py::arg("rhs"))
  .def("AbsDotProduct", (float (Urho3D::Vector3::*)(const Urho3D::Vector3 &) const) &Urho3D::Vector3::AbsDotProduct, "todo: docstring", py::arg("rhs"))
  .def("ProjectOntoAxis", (float (Urho3D::Vector3::*)(const Urho3D::Vector3 &) const) &Urho3D::Vector3::ProjectOntoAxis, "todo: docstring", py::arg("axis"))
  .def("ProjectOntoPlane", (Urho3D::Vector3 (Urho3D::Vector3::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &) const) &Urho3D::Vector3::ProjectOntoPlane, "todo: docstring", py::arg("origin"), py::arg("normal"))
  .def("ProjectOntoLine", (Urho3D::Vector3 (Urho3D::Vector3::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, bool) const) &Urho3D::Vector3::ProjectOntoLine, "todo: docstring", py::arg("from"), py::arg("to"), py::arg("clamped")=false)
  .def("DistanceToPoint", (float (Urho3D::Vector3::*)(const Urho3D::Vector3 &) const) &Urho3D::Vector3::DistanceToPoint, "todo: docstring", py::arg("point"))
  .def("DistanceToPlane", (float (Urho3D::Vector3::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &) const) &Urho3D::Vector3::DistanceToPlane, "todo: docstring", py::arg("origin"), py::arg("normal"))
  .def("Orthogonalize", (Urho3D::Vector3 (Urho3D::Vector3::*)(const Urho3D::Vector3 &) const) &Urho3D::Vector3::Orthogonalize, "todo: docstring", py::arg("axis"))
  .def("CrossProduct", (Urho3D::Vector3 (Urho3D::Vector3::*)(const Urho3D::Vector3 &) const) &Urho3D::Vector3::CrossProduct, "todo: docstring", py::arg("rhs"))
  .def("Abs", (Urho3D::Vector3 (Urho3D::Vector3::*)() const) &Urho3D::Vector3::Abs, "todo: docstring")
  .def("Lerp", (Urho3D::Vector3 (Urho3D::Vector3::*)(const Urho3D::Vector3 &, float) const) &Urho3D::Vector3::Lerp, "todo: docstring", py::arg("rhs"), py::arg("t"))
  .def("Equals", (bool (Urho3D::Vector3::*)(const Urho3D::Vector3 &) const) &Urho3D::Vector3::Equals, "todo: docstring", py::arg("rhs"))
  .def("Angle", (float (Urho3D::Vector3::*)(const Urho3D::Vector3 &) const) &Urho3D::Vector3::Angle, "todo: docstring", py::arg("rhs"))
  .def("IsNaN", (bool (Urho3D::Vector3::*)() const) &Urho3D::Vector3::IsNaN, "todo: docstring")
  .def("Normalized", (Urho3D::Vector3 (Urho3D::Vector3::*)() const) &Urho3D::Vector3::Normalized, "todo: docstring")
  .def("Data", (const float * (Urho3D::Vector3::*)() const) &Urho3D::Vector3::Data, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::Vector3::*)() const) &Urho3D::Vector3::ToString, "todo: docstring")
  .def("ToHash", (unsigned int (Urho3D::Vector3::*)() const) &Urho3D::Vector3::ToHash, "todo: docstring")
// External Operators:
  .def(float() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("x",&Urho3D::Vector3::x_, "todo: var docstring")//float
  .def_readwrite("y",&Urho3D::Vector3::y_, "todo: var docstring")//float
  .def_readwrite("z",&Urho3D::Vector3::z_, "todo: var docstring")//float
  .def_readonly_static("ZERO",&Urho3D::Vector3::ZERO, "todo: var docstring")//const Urho3D::Vector3
  .def_readonly_static("LEFT",&Urho3D::Vector3::LEFT, "todo: var docstring")//const Urho3D::Vector3
  .def_readonly_static("RIGHT",&Urho3D::Vector3::RIGHT, "todo: var docstring")//const Urho3D::Vector3
  .def_readonly_static("UP",&Urho3D::Vector3::UP, "todo: var docstring")//const Urho3D::Vector3
  .def_readonly_static("DOWN",&Urho3D::Vector3::DOWN, "todo: var docstring")//const Urho3D::Vector3
  .def_readonly_static("FORWARD",&Urho3D::Vector3::FORWARD, "todo: var docstring")//const Urho3D::Vector3
  .def_readonly_static("BACK",&Urho3D::Vector3::BACK, "todo: var docstring")//const Urho3D::Vector3
  .def_readonly_static("ONE",&Urho3D::Vector3::ONE, "todo: var docstring")//const Urho3D::Vector3
;
}

void Implement_Urho3D_Color(py::class_<Urho3D::Color, Urho3D::ExternalPtr<Urho3D::Color>>& pyclass_Var_Urho3D_Color)
{
    // Class Color Implementation
pyclass_Var_Urho3D_Color
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Color &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Color &, float>(), "todo: constructor docstring")
  .def(py::init<float, float, float>(), "todo: constructor docstring")
  .def(py::init<float, float, float, float>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Color(), "todo: docstring").def("__assign__", (Urho3D::Color & (Urho3D::Color::*)(const Urho3D::Color &)) &Urho3D::Color::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Color']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Color(), "todo: docstring")
    //['Urho3D::Color']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Color(), "todo: docstring")
    //['Urho3D::Color']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Color(), "todo: docstring")
    //['Urho3D::Color']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(-py::self, "todo: docstring")
    //[]; op -@, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Color(), "todo: docstring")
    //['Urho3D::Color']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::Color(), "todo: docstring")
    //['Urho3D::Color']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Data", (const float * (Urho3D::Color::*)() const) &Urho3D::Color::Data, "todo: docstring")
  .def("ToUInt", (unsigned int (Urho3D::Color::*)() const) &Urho3D::Color::ToUInt, "todo: docstring")
  .def("ToHSL", (Urho3D::Vector3 (Urho3D::Color::*)() const) &Urho3D::Color::ToHSL, "todo: docstring")
  .def("ToHSV", (Urho3D::Vector3 (Urho3D::Color::*)() const) &Urho3D::Color::ToHSV, "todo: docstring")
  .def("FromUInt", (void (Urho3D::Color::*)(unsigned int)) &Urho3D::Color::FromUInt, "todo: docstring", py::arg("color"))
  .def("FromHSL", (void (Urho3D::Color::*)(float, float, float, float)) &Urho3D::Color::FromHSL, "todo: docstring", py::arg("h"), py::arg("s"), py::arg("l"), py::arg("a")=1.0f)
  .def("FromHSV", (void (Urho3D::Color::*)(float, float, float, float)) &Urho3D::Color::FromHSV, "todo: docstring", py::arg("h"), py::arg("s"), py::arg("v"), py::arg("a")=1.0f)
  .def("ToVector3", (Urho3D::Vector3 (Urho3D::Color::*)() const) &Urho3D::Color::ToVector3, "todo: docstring")
  .def("ToVector4", (Urho3D::Vector4 (Urho3D::Color::*)() const) &Urho3D::Color::ToVector4, "todo: docstring")
  .def("SumRGB", (float (Urho3D::Color::*)() const) &Urho3D::Color::SumRGB, "todo: docstring")
  .def("Average", (float (Urho3D::Color::*)() const) &Urho3D::Color::Average, "todo: docstring")
  .def("Luma", (float (Urho3D::Color::*)() const) &Urho3D::Color::Luma, "todo: docstring")
  .def("Chroma", (float (Urho3D::Color::*)() const) &Urho3D::Color::Chroma, "todo: docstring")
  .def("Hue", (float (Urho3D::Color::*)() const) &Urho3D::Color::Hue, "todo: docstring")
  .def("SaturationHSL", (float (Urho3D::Color::*)() const) &Urho3D::Color::SaturationHSL, "todo: docstring")
  .def("SaturationHSV", (float (Urho3D::Color::*)() const) &Urho3D::Color::SaturationHSV, "todo: docstring")
  .def("Value", (float (Urho3D::Color::*)() const) &Urho3D::Color::Value, "todo: docstring")
  .def("Lightness", (float (Urho3D::Color::*)() const) &Urho3D::Color::Lightness, "todo: docstring")
  .def("Bounds", (void (Urho3D::Color::*)(float *, float *, bool) const) &Urho3D::Color::Bounds, "todo: docstring", py::arg("min"), py::arg("max"), py::arg("clipped")=false)
  .def("MaxRGB", (float (Urho3D::Color::*)() const) &Urho3D::Color::MaxRGB, "todo: docstring")
  .def("MinRGB", (float (Urho3D::Color::*)() const) &Urho3D::Color::MinRGB, "todo: docstring")
  .def("Range", (float (Urho3D::Color::*)() const) &Urho3D::Color::Range, "todo: docstring")
  .def("Clip", (void (Urho3D::Color::*)(bool)) &Urho3D::Color::Clip, "todo: docstring", py::arg("clipAlpha")=false)
  .def("Invert", (void (Urho3D::Color::*)(bool)) &Urho3D::Color::Invert, "todo: docstring", py::arg("invertAlpha")=false)
  .def("Lerp", (Urho3D::Color (Urho3D::Color::*)(const Urho3D::Color &, float) const) &Urho3D::Color::Lerp, "todo: docstring", py::arg("rhs"), py::arg("t"))
  .def("Abs", (Urho3D::Color (Urho3D::Color::*)() const) &Urho3D::Color::Abs, "todo: docstring")
  .def("Equals", (bool (Urho3D::Color::*)(const Urho3D::Color &) const) &Urho3D::Color::Equals, "todo: docstring", py::arg("rhs"))
  .def("ToString", (Urho3D::String (Urho3D::Color::*)() const) &Urho3D::Color::ToString, "todo: docstring")
  .def("ToHash", (unsigned int (Urho3D::Color::*)() const) &Urho3D::Color::ToHash, "todo: docstring")
// External Operators:
  .def(float() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("r",&Urho3D::Color::r_, "todo: var docstring")//float
  .def_readwrite("g",&Urho3D::Color::g_, "todo: var docstring")//float
  .def_readwrite("b",&Urho3D::Color::b_, "todo: var docstring")//float
  .def_readwrite("a",&Urho3D::Color::a_, "todo: var docstring")//float
  .def_readonly_static("WHITE",&Urho3D::Color::WHITE, "todo: var docstring")//const Urho3D::Color
  .def_readonly_static("GRAY",&Urho3D::Color::GRAY, "todo: var docstring")//const Urho3D::Color
  .def_readonly_static("BLACK",&Urho3D::Color::BLACK, "todo: var docstring")//const Urho3D::Color
  .def_readonly_static("RED",&Urho3D::Color::RED, "todo: var docstring")//const Urho3D::Color
  .def_readonly_static("GREEN",&Urho3D::Color::GREEN, "todo: var docstring")//const Urho3D::Color
  .def_readonly_static("BLUE",&Urho3D::Color::BLUE, "todo: var docstring")//const Urho3D::Color
  .def_readonly_static("CYAN",&Urho3D::Color::CYAN, "todo: var docstring")//const Urho3D::Color
  .def_readonly_static("MAGENTA",&Urho3D::Color::MAGENTA, "todo: var docstring")//const Urho3D::Color
  .def_readonly_static("YELLOW",&Urho3D::Color::YELLOW, "todo: var docstring")//const Urho3D::Color
  .def_readonly_static("TRANSPARENT_BLACK",&Urho3D::Color::TRANSPARENT_BLACK, "todo: var docstring")//const Urho3D::Color
;
}

void Implement_Urho3D_Quaternion(py::class_<Urho3D::Quaternion, Urho3D::ExternalPtr<Urho3D::Quaternion>>& pyclass_Var_Urho3D_Quaternion)
{
    // Class Quaternion Implementation
pyclass_Var_Urho3D_Quaternion
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Quaternion &>(), "todo: constructor docstring")
  .def(py::init<float, float, float, float>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  .def(py::init<float, const Urho3D::Vector3 &>(), "todo: constructor docstring")
  .def(py::init<float>(), "todo: constructor docstring")
  .def(py::init<float, float, float>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Vector3 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix3 &>(), "todo: constructor docstring")
  //.def(py::init<__attribute__((__vector_size__(4 * sizeof(float)))) float>(), "todo: constructor docstring")
    //['__attribute__']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //  .def(py::self = Urho3D::Quaternion(), "todo: docstring").def("__assign__", (Urho3D::Quaternion & (Urho3D::Quaternion::*)(const Urho3D::Quaternion &)) &Urho3D::Quaternion::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Quaternion']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::Quaternion(), "todo: docstring")
    //['Urho3D::Quaternion']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= float(), "todo: docstring")
    //['float']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Quaternion(), "todo: docstring")
    //['Urho3D::Quaternion']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Quaternion(), "todo: docstring")
    //['Urho3D::Quaternion']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(-py::self, "todo: docstring")
    //[]; op -@, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Quaternion(), "todo: docstring")
    //['Urho3D::Quaternion']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Quaternion(), "todo: docstring")
    //['Urho3D::Quaternion']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Quaternion(), "todo: docstring")
    //['Urho3D::Quaternion']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("FromAngleAxis", (void (Urho3D::Quaternion::*)(float, const Urho3D::Vector3 &)) &Urho3D::Quaternion::FromAngleAxis, "todo: docstring", py::arg("angle"), py::arg("axis"))
  .def("FromEulerAngles", (void (Urho3D::Quaternion::*)(float, float, float)) &Urho3D::Quaternion::FromEulerAngles, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("z"))
  .def("FromRotationTo", (void (Urho3D::Quaternion::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::Quaternion::FromRotationTo, "todo: docstring", py::arg("start"), py::arg("end"))
  .def("FromAxes", (void (Urho3D::Quaternion::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::Quaternion::FromAxes, "todo: docstring", py::arg("xAxis"), py::arg("yAxis"), py::arg("zAxis"))
  .def("FromRotationMatrix", (void (Urho3D::Quaternion::*)(const Urho3D::Matrix3 &)) &Urho3D::Quaternion::FromRotationMatrix, "todo: docstring", py::arg("matrix"))
  .def("FromLookRotation", (bool (Urho3D::Quaternion::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::Quaternion::FromLookRotation, "todo: docstring", py::arg("direction"), py::arg("up")=Vector3::UP)
  .def("Normalize", (void (Urho3D::Quaternion::*)()) &Urho3D::Quaternion::Normalize, "todo: docstring")
  .def("Normalized", (Urho3D::Quaternion (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::Normalized, "todo: docstring")
  .def("Inverse", (Urho3D::Quaternion (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::Inverse, "todo: docstring")
  .def("LengthSquared", (float (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::LengthSquared, "todo: docstring")
  .def("DotProduct", (float (Urho3D::Quaternion::*)(const Urho3D::Quaternion &) const) &Urho3D::Quaternion::DotProduct, "todo: docstring", py::arg("rhs"))
  .def("Equals", (bool (Urho3D::Quaternion::*)(const Urho3D::Quaternion &) const) &Urho3D::Quaternion::Equals, "todo: docstring", py::arg("rhs"))
  .def("IsNaN", (bool (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::IsNaN, "todo: docstring")
  .def("Conjugate", (Urho3D::Quaternion (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::Conjugate, "todo: docstring")
  .def("EulerAngles", (Urho3D::Vector3 (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::EulerAngles, "todo: docstring")
  .def("YawAngle", (float (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::YawAngle, "todo: docstring")
  .def("PitchAngle", (float (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::PitchAngle, "todo: docstring")
  .def("RollAngle", (float (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::RollAngle, "todo: docstring")
  .def("Axis", (Urho3D::Vector3 (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::Axis, "todo: docstring")
  .def("Angle", (float (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::Angle, "todo: docstring")
  .def("RotationMatrix", (Urho3D::Matrix3 (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::RotationMatrix, "todo: docstring")
  .def("Slerp", (Urho3D::Quaternion (Urho3D::Quaternion::*)(const Urho3D::Quaternion &, float) const) &Urho3D::Quaternion::Slerp, "todo: docstring", py::arg("rhs"), py::arg("t"))
  .def("Nlerp", (Urho3D::Quaternion (Urho3D::Quaternion::*)(const Urho3D::Quaternion &, float, bool) const) &Urho3D::Quaternion::Nlerp, "todo: docstring", py::arg("rhs"), py::arg("t"), py::arg("shortestPath")=false)
  .def("Data", (const float * (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::Data, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::Quaternion::*)() const) &Urho3D::Quaternion::ToString, "todo: docstring")
// Class Variables:
  .def_readwrite("w",&Urho3D::Quaternion::w_, "todo: var docstring")//float
  .def_readwrite("x",&Urho3D::Quaternion::x_, "todo: var docstring")//float
  .def_readwrite("y",&Urho3D::Quaternion::y_, "todo: var docstring")//float
  .def_readwrite("z",&Urho3D::Quaternion::z_, "todo: var docstring")//float
  .def_readonly_static("IDENTITY",&Urho3D::Quaternion::IDENTITY, "todo: var docstring")//const Urho3D::Quaternion
;
}

void Implement_Urho3D_Matrix4(py::class_<Urho3D::Matrix4, Urho3D::ExternalPtr<Urho3D::Matrix4>>& pyclass_Var_Urho3D_Matrix4)
{
    // Class Matrix4 Implementation
pyclass_Var_Urho3D_Matrix4
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix4 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix3 &>(), "todo: constructor docstring")
  .def(py::init<float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Matrix4(), "todo: docstring").def("__assign__", (Urho3D::Matrix4 & (Urho3D::Matrix4::*)(const Urho3D::Matrix4 &)) &Urho3D::Matrix4::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix4']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Matrix3(), "todo: docstring").def("__assign__", (Urho3D::Matrix4 & (Urho3D::Matrix4::*)(const Urho3D::Matrix3 &)) &Urho3D::Matrix4::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix3']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Matrix4(), "todo: docstring")
    //['Urho3D::Matrix4']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Matrix4(), "todo: docstring")
    //['Urho3D::Matrix4']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Matrix4(), "todo: docstring")
    //['Urho3D::Matrix4']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Matrix4(), "todo: docstring")
    //['Urho3D::Matrix4']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Matrix4(), "todo: docstring")
    //['Urho3D::Matrix4']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Matrix3x4(), "todo: docstring")
    //['Urho3D::Matrix3x4']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetTranslation", (void (Urho3D::Matrix4::*)(const Urho3D::Vector3 &)) &Urho3D::Matrix4::SetTranslation, "todo: docstring", py::arg("translation"))
  .def("SetRotation", (void (Urho3D::Matrix4::*)(const Urho3D::Matrix3 &)) &Urho3D::Matrix4::SetRotation, "todo: docstring", py::arg("rotation"))
  .def("SetScale", (void (Urho3D::Matrix4::*)(const Urho3D::Vector3 &)) &Urho3D::Matrix4::SetScale, "todo: docstring", py::arg("scale"))
  .def("SetScale", (void (Urho3D::Matrix4::*)(float)) &Urho3D::Matrix4::SetScale, "todo: docstring", py::arg("scale"))
  .def("ToMatrix3", (Urho3D::Matrix3 (Urho3D::Matrix4::*)() const) &Urho3D::Matrix4::ToMatrix3, "todo: docstring")
  .def("RotationMatrix", (Urho3D::Matrix3 (Urho3D::Matrix4::*)() const) &Urho3D::Matrix4::RotationMatrix, "todo: docstring")
  .def("Translation", (Urho3D::Vector3 (Urho3D::Matrix4::*)() const) &Urho3D::Matrix4::Translation, "todo: docstring")
  .def("Rotation", (Urho3D::Quaternion (Urho3D::Matrix4::*)() const) &Urho3D::Matrix4::Rotation, "todo: docstring")
  .def("Scale", (Urho3D::Vector3 (Urho3D::Matrix4::*)() const) &Urho3D::Matrix4::Scale, "todo: docstring")
  .def("SignedScale", (Urho3D::Vector3 (Urho3D::Matrix4::*)(const Urho3D::Matrix3 &) const) &Urho3D::Matrix4::SignedScale, "todo: docstring", py::arg("rotation"))
  .def("Transpose", (Urho3D::Matrix4 (Urho3D::Matrix4::*)() const) &Urho3D::Matrix4::Transpose, "todo: docstring")
  .def("Equals", (bool (Urho3D::Matrix4::*)(const Urho3D::Matrix4 &) const) &Urho3D::Matrix4::Equals, "todo: docstring", py::arg("rhs"))
  .def("Decompose", (void (Urho3D::Matrix4::*)(Urho3D::Vector3 &, Urho3D::Quaternion &, Urho3D::Vector3 &) const) &Urho3D::Matrix4::Decompose, "todo: docstring", py::arg("translation"), py::arg("rotation"), py::arg("scale"))
  .def("Inverse", (Urho3D::Matrix4 (Urho3D::Matrix4::*)() const) &Urho3D::Matrix4::Inverse, "todo: docstring")
  .def("Data", (const float * (Urho3D::Matrix4::*)() const) &Urho3D::Matrix4::Data, "todo: docstring")
  .def("Element", (float (Urho3D::Matrix4::*)(unsigned int, unsigned int) const) &Urho3D::Matrix4::Element, "todo: docstring", py::arg("i"), py::arg("j"))
  .def("Row", (Urho3D::Vector4 (Urho3D::Matrix4::*)(unsigned int) const) &Urho3D::Matrix4::Row, "todo: docstring", py::arg("i"))
  .def("Column", (Urho3D::Vector4 (Urho3D::Matrix4::*)(unsigned int) const) &Urho3D::Matrix4::Column, "todo: docstring", py::arg("j"))
  .def("ToString", (Urho3D::String (Urho3D::Matrix4::*)() const) &Urho3D::Matrix4::ToString, "todo: docstring")
// External Operators:
  .def(float() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("m00",&Urho3D::Matrix4::m00_, "todo: var docstring")//float
  .def_readwrite("m01",&Urho3D::Matrix4::m01_, "todo: var docstring")//float
  .def_readwrite("m02",&Urho3D::Matrix4::m02_, "todo: var docstring")//float
  .def_readwrite("m03",&Urho3D::Matrix4::m03_, "todo: var docstring")//float
  .def_readwrite("m10",&Urho3D::Matrix4::m10_, "todo: var docstring")//float
  .def_readwrite("m11",&Urho3D::Matrix4::m11_, "todo: var docstring")//float
  .def_readwrite("m12",&Urho3D::Matrix4::m12_, "todo: var docstring")//float
  .def_readwrite("m13",&Urho3D::Matrix4::m13_, "todo: var docstring")//float
  .def_readwrite("m20",&Urho3D::Matrix4::m20_, "todo: var docstring")//float
  .def_readwrite("m21",&Urho3D::Matrix4::m21_, "todo: var docstring")//float
  .def_readwrite("m22",&Urho3D::Matrix4::m22_, "todo: var docstring")//float
  .def_readwrite("m23",&Urho3D::Matrix4::m23_, "todo: var docstring")//float
  .def_readwrite("m30",&Urho3D::Matrix4::m30_, "todo: var docstring")//float
  .def_readwrite("m31",&Urho3D::Matrix4::m31_, "todo: var docstring")//float
  .def_readwrite("m32",&Urho3D::Matrix4::m32_, "todo: var docstring")//float
  .def_readwrite("m33",&Urho3D::Matrix4::m33_, "todo: var docstring")//float
  .def_readonly_static("ZERO",&Urho3D::Matrix4::ZERO, "todo: var docstring")//const Urho3D::Matrix4
  .def_readonly_static("IDENTITY",&Urho3D::Matrix4::IDENTITY, "todo: var docstring")//const Urho3D::Matrix4
;
}

void Implement_Urho3D_IntRect(py::class_<Urho3D::IntRect, Urho3D::ExternalPtr<Urho3D::IntRect>>& pyclass_Var_Urho3D_IntRect)
{
    // Class IntRect Implementation
pyclass_Var_Urho3D_IntRect
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::IntVector2 &, const Urho3D::IntVector2 &>(), "todo: constructor docstring")
  .def(py::init<int, int, int, int>(), "todo: constructor docstring")
  .def(py::init<const int *>(), "todo: constructor docstring")
  .def(py::self == Urho3D::IntRect(), "todo: docstring")
    //['Urho3D::IntRect']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::IntRect(), "todo: docstring")
    //['Urho3D::IntRect']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::IntRect(), "todo: docstring")
    //['Urho3D::IntRect']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self -= Urho3D::IntRect(), "todo: docstring")
    //['Urho3D::IntRect']; op -=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= float(), "todo: docstring")
    //['float']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= float(), "todo: docstring")
    //['float']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / float(), "todo: docstring")
    //['float']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::IntRect(), "todo: docstring")
    //['Urho3D::IntRect']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::IntRect(), "todo: docstring")
    //['Urho3D::IntRect']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Size", (Urho3D::IntVector2 (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Size, "todo: docstring")
  .def("Width", (int (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Width, "todo: docstring")
  .def("Height", (int (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Height, "todo: docstring")
  .def("IsInside", (Urho3D::Intersection (Urho3D::IntRect::*)(const Urho3D::IntVector2 &) const) &Urho3D::IntRect::IsInside, "todo: docstring", py::arg("point"))
  .def("Clip", (void (Urho3D::IntRect::*)(const Urho3D::IntRect &)) &Urho3D::IntRect::Clip, "todo: docstring", py::arg("rect"))
  .def("Merge", (void (Urho3D::IntRect::*)(const Urho3D::IntRect &)) &Urho3D::IntRect::Merge, "todo: docstring", py::arg("rect"))
  .def("Data", (const int * (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Data, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::IntRect::*)() const) &Urho3D::IntRect::ToString, "todo: docstring")
  .def("Min", (Urho3D::IntVector2 (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Min, "todo: docstring")
  .def("Max", (Urho3D::IntVector2 (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Max, "todo: docstring")
  .def("Left", (int (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Left, "todo: docstring")
  .def("Top", (int (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Top, "todo: docstring")
  .def("Right", (int (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Right, "todo: docstring")
  .def("Bottom", (int (Urho3D::IntRect::*)() const) &Urho3D::IntRect::Bottom, "todo: docstring")
// Class Variables:
  .def_readwrite("left",&Urho3D::IntRect::left_, "todo: var docstring")//int
  .def_readwrite("top",&Urho3D::IntRect::top_, "todo: var docstring")//int
  .def_readwrite("right",&Urho3D::IntRect::right_, "todo: var docstring")//int
  .def_readwrite("bottom",&Urho3D::IntRect::bottom_, "todo: var docstring")//int
  .def_readonly_static("ZERO",&Urho3D::IntRect::ZERO, "todo: var docstring")//const Urho3D::IntRect
;
}

void Implement_Urho3D_ResourceRef(py::class_<Urho3D::ResourceRef, Urho3D::ExternalPtr<Urho3D::ResourceRef>>& pyclass_Var_Urho3D_ResourceRef)
{
    // Class ResourceRef Implementation
pyclass_Var_Urho3D_ResourceRef
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<Urho3D::StringHash>(), "todo: constructor docstring")
  .def(py::init<Urho3D::StringHash, const Urho3D::String &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::String &, const Urho3D::String &>(), "todo: constructor docstring")
  .def(py::init<const char *, const char *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::ResourceRef &>(), "todo: constructor docstring")
  .def(py::self == Urho3D::ResourceRef(), "todo: docstring")
    //['Urho3D::ResourceRef']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::ResourceRef(), "todo: docstring")
    //['Urho3D::ResourceRef']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("type",&Urho3D::ResourceRef::type_, "todo: var docstring")//Urho3D::StringHash
  .def_readwrite("name",&Urho3D::ResourceRef::name_, "todo: var docstring")//Urho3D::String
;
}

void Implement_Urho3D_Context(py::class_<Urho3D::Context, Urho3D::SharedPtr<Urho3D::Context>, Urho3D::RefCounted>& pyclass_Var_Urho3D_Context)
{
    // Class Context Implementation
pyclass_Var_Urho3D_Context
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~Context", (void (Urho3D::Context::*)()) &Urho3D::Context::~Context, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("CreateObject", (SharedPtr<Urho3D::Object> (Urho3D::Context::*)(Urho3D::StringHash)) &Urho3D::Context::CreateObject, "todo: docstring", py::arg("objectType"))
    //['Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("RegisterFactory", (void (Urho3D::Context::*)(Urho3D::ObjectFactory *)) &Urho3D::Context::RegisterFactory, "todo: docstring", py::arg("factory"))
  .def("RegisterFactory", (void (Urho3D::Context::*)(Urho3D::ObjectFactory *, const char *)) &Urho3D::Context::RegisterFactory, "todo: docstring", py::arg("factory"), py::arg("category"))
  .def("RegisterSubsystem", (void (Urho3D::Context::*)(Urho3D::Object *)) &Urho3D::Context::RegisterSubsystem, "todo: docstring", py::arg("object"))
  .def("RemoveSubsystem", (void (Urho3D::Context::*)(Urho3D::StringHash)) &Urho3D::Context::RemoveSubsystem, "todo: docstring", py::arg("objectType"))
  //.def("RegisterAttribute", (Urho3D::AttributeHandle (Urho3D::Context::*)(Urho3D::StringHash, const Urho3D::AttributeInfo &)) &Urho3D::Context::RegisterAttribute, "todo: docstring", py::arg("objectType"), py::arg("attr"))
    //['Urho3D::StringHash', 'Urho3D::AttributeInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad True, max ptr 0
  .def("RemoveAttribute", (void (Urho3D::Context::*)(Urho3D::StringHash, const char *)) &Urho3D::Context::RemoveAttribute, "todo: docstring", py::arg("objectType"), py::arg("name"))
  .def("RemoveAllAttributes", (void (Urho3D::Context::*)(Urho3D::StringHash)) &Urho3D::Context::RemoveAllAttributes, "todo: docstring", py::arg("objectType"))
  .def("UpdateAttributeDefaultValue", (void (Urho3D::Context::*)(Urho3D::StringHash, const char *, const Urho3D::Variant &)) &Urho3D::Context::UpdateAttributeDefaultValue, "todo: docstring", py::arg("objectType"), py::arg("name"), py::arg("defaultValue"))
  .def("GetEventDataMap", (Urho3D::VariantMap & (Urho3D::Context::*)()) &Urho3D::Context::GetEventDataMap, "todo: docstring")
  .def("RequireSDL", (bool (Urho3D::Context::*)(unsigned int)) &Urho3D::Context::RequireSDL, "todo: docstring", py::arg("sdlFlags"))
  .def("ReleaseSDL", (void (Urho3D::Context::*)()) &Urho3D::Context::ReleaseSDL, "todo: docstring")
  .def("RequireIK", (void (Urho3D::Context::*)()) &Urho3D::Context::RequireIK, "todo: docstring")
  .def("ReleaseIK", (void (Urho3D::Context::*)()) &Urho3D::Context::ReleaseIK, "todo: docstring")
  .def("CopyBaseAttributes", (void (Urho3D::Context::*)(Urho3D::StringHash, Urho3D::StringHash)) &Urho3D::Context::CopyBaseAttributes, "todo: docstring", py::arg("baseType"), py::arg("derivedType"))
  .def("GetSubsystem", (Urho3D::Object * (Urho3D::Context::*)(Urho3D::StringHash) const) &Urho3D::Context::GetSubsystem, "todo: docstring", py::arg("type"))
  .def("GetGlobalVar", (const Urho3D::Variant & (Urho3D::Context::*)(Urho3D::StringHash) const) &Urho3D::Context::GetGlobalVar, "todo: docstring", py::arg("key"))
  .def("GetGlobalVars", (const Urho3D::VariantMap & (Urho3D::Context::*)() const) &Urho3D::Context::GetGlobalVars, "todo: docstring")
  .def("SetGlobalVar", (void (Urho3D::Context::*)(Urho3D::StringHash, const Urho3D::Variant &)) &Urho3D::Context::SetGlobalVar, "todo: docstring", py::arg("key"), py::arg("value"))
  //.def("GetSubsystems", (const HashMap<Urho3D::StringHash, SharedPtr<Urho3D::Object> > & (Urho3D::Context::*)() const) &Urho3D::Context::GetSubsystems, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetObjectFactories", (const HashMap<Urho3D::StringHash, SharedPtr<Urho3D::ObjectFactory> > & (Urho3D::Context::*)() const) &Urho3D::Context::GetObjectFactories, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetObjectCategories", (const HashMap<Urho3D::String, Vector<Urho3D::StringHash> > & (Urho3D::Context::*)() const) &Urho3D::Context::GetObjectCategories, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetEventSender", (Urho3D::Object * (Urho3D::Context::*)() const) &Urho3D::Context::GetEventSender, "todo: docstring")
  .def("GetEventHandler", (Urho3D::EventHandler * (Urho3D::Context::*)() const) &Urho3D::Context::GetEventHandler, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Context::*)(Urho3D::StringHash) const) &Urho3D::Context::GetTypeName, "todo: docstring", py::arg("objectType"))
  //.def("GetAttribute", (Urho3D::AttributeInfo * (Urho3D::Context::*)(Urho3D::StringHash, const char *)) &Urho3D::Context::GetAttribute, "todo: docstring", py::arg("objectType"), py::arg("name"))
    //['Urho3D::StringHash', 'char']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetAttributes", (const Vector<Urho3D::AttributeInfo> * (Urho3D::Context::*)(Urho3D::StringHash) const) &Urho3D::Context::GetAttributes, "todo: docstring", py::arg("type"))
    //['Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetNetworkAttributes", (const Vector<Urho3D::AttributeInfo> * (Urho3D::Context::*)(Urho3D::StringHash) const) &Urho3D::Context::GetNetworkAttributes, "todo: docstring", py::arg("type"))
    //['Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetAllAttributes", (const HashMap<Urho3D::StringHash, Vector<Urho3D::AttributeInfo> > & (Urho3D::Context::*)() const) &Urho3D::Context::GetAllAttributes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetEventReceivers", (Urho3D::EventReceiverGroup * (Urho3D::Context::*)(Urho3D::Object *, Urho3D::StringHash)) &Urho3D::Context::GetEventReceivers, "todo: docstring", py::arg("sender"), py::arg("eventType"))
  .def("GetEventReceivers", (Urho3D::EventReceiverGroup * (Urho3D::Context::*)(Urho3D::StringHash)) &Urho3D::Context::GetEventReceivers, "todo: docstring", py::arg("eventType"))
// Class Variables:
;
}

void Implement_Urho3D_TypeInfo(py::class_<Urho3D::TypeInfo, Urho3D::ExternalPtr<Urho3D::TypeInfo>>& pyclass_Var_Urho3D_TypeInfo)
{
    // Class TypeInfo Implementation
pyclass_Var_Urho3D_TypeInfo
  .def(py::init<const char *, const Urho3D::TypeInfo *>(), "todo: constructor docstring")
  //.def("~TypeInfo", (void (Urho3D::TypeInfo::*)()) &Urho3D::TypeInfo::~TypeInfo, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("IsTypeOf", (bool (Urho3D::TypeInfo::*)(Urho3D::StringHash) const) &Urho3D::TypeInfo::IsTypeOf, "todo: docstring", py::arg("type"))
  .def("IsTypeOf", (bool (Urho3D::TypeInfo::*)(const Urho3D::TypeInfo *) const) &Urho3D::TypeInfo::IsTypeOf, "todo: docstring", py::arg("typeInfo"))
  .def("GetType", (Urho3D::StringHash (Urho3D::TypeInfo::*)() const) &Urho3D::TypeInfo::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::TypeInfo::*)() const) &Urho3D::TypeInfo::GetTypeName, "todo: docstring")
  .def("GetBaseTypeInfo", (const Urho3D::TypeInfo * (Urho3D::TypeInfo::*)() const) &Urho3D::TypeInfo::GetBaseTypeInfo, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ObjectFactory(py::class_<Urho3D::ObjectFactory, Urho3D::SharedPtr<Urho3D::ObjectFactory>, Urho3D::RefCounted>& pyclass_Var_Urho3D_ObjectFactory)
{
    // Class ObjectFactory Implementation
pyclass_Var_Urho3D_ObjectFactory
  //.def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
    // Abstract class ObjectFactory -> no init
  //.def("CreateObject", (SharedPtr<Urho3D::Object> (Urho3D::ObjectFactory::*)()) &Urho3D::ObjectFactory::CreateObject, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetContext", (Urho3D::Context * (Urho3D::ObjectFactory::*)() const) &Urho3D::ObjectFactory::GetContext, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ObjectFactory::*)() const) &Urho3D::ObjectFactory::GetTypeInfo, "todo: docstring")
  .def("GetType", (Urho3D::StringHash (Urho3D::ObjectFactory::*)() const) &Urho3D::ObjectFactory::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ObjectFactory::*)() const) &Urho3D::ObjectFactory::GetTypeName, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ScriptEventListener(py::class_<Urho3D::ScriptEventListener, Urho3D::ExternalPtr<Urho3D::ScriptEventListener>>& pyclass_Var_Urho3D_ScriptEventListener)
{
    // Class ScriptEventListener Implementation
pyclass_Var_Urho3D_ScriptEventListener
  //.def("~ScriptEventListener", (void (Urho3D::ScriptEventListener::*)()) &Urho3D::ScriptEventListener::~ScriptEventListener, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("AddEventHandler", (void (Urho3D::ScriptEventListener::*)(Urho3D::StringHash, const Urho3D::String &)) &Urho3D::ScriptEventListener::AddEventHandler, "todo: docstring", py::arg("eventType"), py::arg("handlerName"))
  .def("AddEventHandler", (void (Urho3D::ScriptEventListener::*)(Urho3D::Object *, Urho3D::StringHash, const Urho3D::String &)) &Urho3D::ScriptEventListener::AddEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventType"), py::arg("handlerName"))
  .def("RemoveEventHandler", (void (Urho3D::ScriptEventListener::*)(Urho3D::StringHash)) &Urho3D::ScriptEventListener::RemoveEventHandler, "todo: docstring", py::arg("eventType"))
  .def("RemoveEventHandler", (void (Urho3D::ScriptEventListener::*)(Urho3D::Object *, Urho3D::StringHash)) &Urho3D::ScriptEventListener::RemoveEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventType"))
  .def("RemoveEventHandlers", (void (Urho3D::ScriptEventListener::*)(Urho3D::Object *)) &Urho3D::ScriptEventListener::RemoveEventHandlers, "todo: docstring", py::arg("sender"))
  .def("RemoveEventHandlers", (void (Urho3D::ScriptEventListener::*)()) &Urho3D::ScriptEventListener::RemoveEventHandlers, "todo: docstring")
  //.def("RemoveEventHandlersExcept", (void (Urho3D::ScriptEventListener::*)(const Urho3D::PODVector<Urho3D::StringHash> &)) &Urho3D::ScriptEventListener::RemoveEventHandlersExcept, "todo: docstring", py::arg("exceptions"))
    //['Urho3D::PODVector<Urho3D::StringHash>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("HasEventHandler", (bool (Urho3D::ScriptEventListener::*)(Urho3D::StringHash) const) &Urho3D::ScriptEventListener::HasEventHandler, "todo: docstring", py::arg("eventType"))
  .def("HasEventHandler", (bool (Urho3D::ScriptEventListener::*)(Urho3D::Object *, Urho3D::StringHash) const) &Urho3D::ScriptEventListener::HasEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventType"))
// Class Variables:
;
}

void Implement_Urho3D_AttributeAccessor(py::class_<Urho3D::AttributeAccessor, Urho3D::SharedPtr<Urho3D::AttributeAccessor>, Urho3D::RefCounted>& pyclass_Var_Urho3D_AttributeAccessor)
{
    // Class AttributeAccessor Implementation
pyclass_Var_Urho3D_AttributeAccessor
  .def("Get", (void (Urho3D::AttributeAccessor::*)(const Urho3D::Serializable *, Urho3D::Variant &) const) &Urho3D::AttributeAccessor::Get, "todo: docstring", py::arg("ptr"), py::arg("dest"))
  .def("Set", (void (Urho3D::AttributeAccessor::*)(Urho3D::Serializable *, const Urho3D::Variant &)) &Urho3D::AttributeAccessor::Set, "todo: docstring", py::arg("ptr"), py::arg("src"))
// Class Variables:
;
}

void Implement_Urho3D_Deserializer(py::class_<Urho3D::Deserializer, Urho3D::ExternalPtr<Urho3D::Deserializer>>& pyclass_Var_Urho3D_Deserializer)
{
    // Class Deserializer Implementation
pyclass_Var_Urho3D_Deserializer
  //.def(py::init<>(), "todo: constructor docstring")
    // Abstract class Deserializer -> no init
  //.def(py::init<unsigned int>(), "todo: constructor docstring")
    // Abstract class Deserializer -> no init
  //.def("~Deserializer", (void (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::~Deserializer, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Read", (unsigned int (Urho3D::Deserializer::*)(void *, unsigned int)) &Urho3D::Deserializer::Read, "todo: docstring", py::arg("dest"), py::arg("size"))
  .def("Seek", (unsigned int (Urho3D::Deserializer::*)(unsigned int)) &Urho3D::Deserializer::Seek, "todo: docstring", py::arg("position"))
  .def("GetName", (const Urho3D::String & (Urho3D::Deserializer::*)() const) &Urho3D::Deserializer::GetName, "todo: docstring")
  .def("GetChecksum", (unsigned int (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::GetChecksum, "todo: docstring")
  .def("IsEof", (bool (Urho3D::Deserializer::*)() const) &Urho3D::Deserializer::IsEof, "todo: docstring")
  .def("SeekRelative", (unsigned int (Urho3D::Deserializer::*)(int)) &Urho3D::Deserializer::SeekRelative, "todo: docstring", py::arg("delta"))
  .def("GetPosition", (unsigned int (Urho3D::Deserializer::*)() const) &Urho3D::Deserializer::GetPosition, "todo: docstring")
  .def("Tell", (unsigned int (Urho3D::Deserializer::*)() const) &Urho3D::Deserializer::Tell, "todo: docstring")
  .def("GetSize", (unsigned int (Urho3D::Deserializer::*)() const) &Urho3D::Deserializer::GetSize, "todo: docstring")
  .def("ReadInt64", (long long (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadInt64, "todo: docstring")
  .def("ReadInt", (int (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadInt, "todo: docstring")
  //.def("ReadShort", (short (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadShort, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("ReadByte", (signed char (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadByte, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("ReadUInt64", (unsigned long long (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadUInt64, "todo: docstring")
  .def("ReadUInt", (unsigned int (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadUInt, "todo: docstring")
  .def("ReadUShort", (unsigned short (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadUShort, "todo: docstring")
  .def("ReadUByte", (unsigned char (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadUByte, "todo: docstring")
  .def("ReadBool", (bool (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadBool, "todo: docstring")
  .def("ReadFloat", (float (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadFloat, "todo: docstring")
  .def("ReadDouble", (double (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadDouble, "todo: docstring")
  .def("ReadIntRect", (Urho3D::IntRect (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadIntRect, "todo: docstring")
  .def("ReadIntVector2", (Urho3D::IntVector2 (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadIntVector2, "todo: docstring")
  .def("ReadIntVector3", (Urho3D::IntVector3 (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadIntVector3, "todo: docstring")
  .def("ReadRect", (Urho3D::Rect (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadRect, "todo: docstring")
  .def("ReadVector2", (Urho3D::Vector2 (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadVector2, "todo: docstring")
  .def("ReadVector3", (Urho3D::Vector3 (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadVector3, "todo: docstring")
  .def("ReadPackedVector3", (Urho3D::Vector3 (Urho3D::Deserializer::*)(float)) &Urho3D::Deserializer::ReadPackedVector3, "todo: docstring", py::arg("maxAbsCoord"))
  .def("ReadVector4", (Urho3D::Vector4 (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadVector4, "todo: docstring")
  .def("ReadQuaternion", (Urho3D::Quaternion (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadQuaternion, "todo: docstring")
  .def("ReadPackedQuaternion", (Urho3D::Quaternion (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadPackedQuaternion, "todo: docstring")
  .def("ReadMatrix3", (Urho3D::Matrix3 (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadMatrix3, "todo: docstring")
  .def("ReadMatrix3x4", (Urho3D::Matrix3x4 (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadMatrix3x4, "todo: docstring")
  .def("ReadMatrix4", (Urho3D::Matrix4 (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadMatrix4, "todo: docstring")
  .def("ReadColor", (Urho3D::Color (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadColor, "todo: docstring")
  .def("ReadBoundingBox", (Urho3D::BoundingBox (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadBoundingBox, "todo: docstring")
  .def("ReadString", (Urho3D::String (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadString, "todo: docstring")
  .def("ReadFileID", (Urho3D::String (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadFileID, "todo: docstring")
  .def("ReadStringHash", (Urho3D::StringHash (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadStringHash, "todo: docstring")
  //.def("ReadBuffer", (PODVector<unsigned char> (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadBuffer, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("ReadResourceRef", (Urho3D::ResourceRef (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadResourceRef, "todo: docstring")
  .def("ReadResourceRefList", (Urho3D::ResourceRefList (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadResourceRefList, "todo: docstring")
  .def("ReadVariant", (Urho3D::Variant (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadVariant, "todo: docstring")
  .def("ReadVariant", (Urho3D::Variant (Urho3D::Deserializer::*)(Urho3D::VariantType)) &Urho3D::Deserializer::ReadVariant, "todo: docstring", py::arg("type"))
  .def("ReadVariantVector", (Urho3D::VariantVector (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadVariantVector, "todo: docstring")
  .def("ReadStringVector", (Urho3D::StringVector (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadStringVector, "todo: docstring")
  .def("ReadVariantMap", (Urho3D::VariantMap (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadVariantMap, "todo: docstring")
  .def("ReadVLE", (unsigned int (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadVLE, "todo: docstring")
  .def("ReadNetID", (unsigned int (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadNetID, "todo: docstring")
  .def("ReadLine", (Urho3D::String (Urho3D::Deserializer::*)()) &Urho3D::Deserializer::ReadLine, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_XMLElement(py::class_<Urho3D::XMLElement, Urho3D::ExternalPtr<Urho3D::XMLElement>>& pyclass_Var_Urho3D_XMLElement)
{
    // Class XMLElement Implementation
pyclass_Var_Urho3D_XMLElement
  .def(py::init<>(), "todo: constructor docstring")
  //.def(py::init<Urho3D::XMLFile *, pugi::xml_node_struct *>(), "todo: constructor docstring")
    //['Urho3D::XMLFile', 'pugi::xml_node_struct']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def(py::init<Urho3D::XMLFile *, const Urho3D::XPathResultSet *, const pugi::xpath_node *, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::XMLFile', 'Urho3D::XPathResultSet', 'pugi::xpath_node', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def(py::init<const Urho3D::XMLElement &>(), "todo: constructor docstring")
  //.def("~XMLElement", (void (Urho3D::XMLElement::*)()) &Urho3D::XMLElement::~XMLElement, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::XMLElement(), "todo: docstring").def("__assign__", (Urho3D::XMLElement & (Urho3D::XMLElement::*)(const Urho3D::XMLElement &)) &Urho3D::XMLElement::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::XMLElement']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("CreateChild", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const Urho3D::String &)) &Urho3D::XMLElement::CreateChild, "todo: docstring", py::arg("name"))
  .def("CreateChild", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const char *)) &Urho3D::XMLElement::CreateChild, "todo: docstring", py::arg("name"))
  .def("GetOrCreateChild", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const Urho3D::String &)) &Urho3D::XMLElement::GetOrCreateChild, "todo: docstring", py::arg("name"))
  .def("GetOrCreateChild", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const char *)) &Urho3D::XMLElement::GetOrCreateChild, "todo: docstring", py::arg("name"))
  .def("AppendChild", (bool (Urho3D::XMLElement::*)(Urho3D::XMLElement, bool)) &Urho3D::XMLElement::AppendChild, "todo: docstring", py::arg("element"), py::arg("asCopy")=false)
  .def("Remove", (bool (Urho3D::XMLElement::*)()) &Urho3D::XMLElement::Remove, "todo: docstring")
  .def("RemoveChild", (bool (Urho3D::XMLElement::*)(const Urho3D::XMLElement &)) &Urho3D::XMLElement::RemoveChild, "todo: docstring", py::arg("element"))
  .def("RemoveChild", (bool (Urho3D::XMLElement::*)(const Urho3D::String &)) &Urho3D::XMLElement::RemoveChild, "todo: docstring", py::arg("name"))
  .def("RemoveChild", (bool (Urho3D::XMLElement::*)(const char *)) &Urho3D::XMLElement::RemoveChild, "todo: docstring", py::arg("name"))
  .def("RemoveChildren", (bool (Urho3D::XMLElement::*)(const Urho3D::String &)) &Urho3D::XMLElement::RemoveChildren, "todo: docstring", py::arg("name")=String::EMPTY)
  .def("RemoveChildren", (bool (Urho3D::XMLElement::*)(const char *)) &Urho3D::XMLElement::RemoveChildren, "todo: docstring", py::arg("name"))
  .def("RemoveAttribute", (bool (Urho3D::XMLElement::*)(const Urho3D::String &)) &Urho3D::XMLElement::RemoveAttribute, "todo: docstring", py::arg("name")=String::EMPTY)
  .def("RemoveAttribute", (bool (Urho3D::XMLElement::*)(const char *)) &Urho3D::XMLElement::RemoveAttribute, "todo: docstring", py::arg("name"))
  //.def("SelectSingle", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const Urho3D::String &, pugi::xpath_variable_set *) const) &Urho3D::XMLElement::SelectSingle, "todo: docstring", py::arg("query"), py::arg("variables")=nullptr)
    //['Urho3D::String', 'pugi::xpath_variable_set']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("SelectSinglePrepared", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const Urho3D::XPathQuery &) const) &Urho3D::XMLElement::SelectSinglePrepared, "todo: docstring", py::arg("query"))
  //.def("Select", (Urho3D::XPathResultSet (Urho3D::XMLElement::*)(const Urho3D::String &, pugi::xpath_variable_set *) const) &Urho3D::XMLElement::Select, "todo: docstring", py::arg("query"), py::arg("variables")=nullptr)
    //['Urho3D::String', 'pugi::xpath_variable_set']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("SelectPrepared", (Urho3D::XPathResultSet (Urho3D::XMLElement::*)(const Urho3D::XPathQuery &) const) &Urho3D::XMLElement::SelectPrepared, "todo: docstring", py::arg("query"))
  .def("SetValue", (bool (Urho3D::XMLElement::*)(const Urho3D::String &)) &Urho3D::XMLElement::SetValue, "todo: docstring", py::arg("value"))
  .def("SetValue", (bool (Urho3D::XMLElement::*)(const char *)) &Urho3D::XMLElement::SetValue, "todo: docstring", py::arg("value"))
  .def("SetAttribute", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::XMLElement::SetAttribute, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetAttribute", (bool (Urho3D::XMLElement::*)(const char *, const char *)) &Urho3D::XMLElement::SetAttribute, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetAttribute", (bool (Urho3D::XMLElement::*)(const Urho3D::String &)) &Urho3D::XMLElement::SetAttribute, "todo: docstring", py::arg("value"))
  .def("SetAttribute", (bool (Urho3D::XMLElement::*)(const char *)) &Urho3D::XMLElement::SetAttribute, "todo: docstring", py::arg("value"))
  .def("SetBool", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, bool)) &Urho3D::XMLElement::SetBool, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetBoundingBox", (bool (Urho3D::XMLElement::*)(const Urho3D::BoundingBox &)) &Urho3D::XMLElement::SetBoundingBox, "todo: docstring", py::arg("value"))
  .def("SetBuffer", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const void *, unsigned int)) &Urho3D::XMLElement::SetBuffer, "todo: docstring", py::arg("name"), py::arg("data"), py::arg("size"))
  .def("SetBuffer", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::PODVector<unsigned char> &)) &Urho3D::XMLElement::SetBuffer, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetColor", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Color &)) &Urho3D::XMLElement::SetColor, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetFloat", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, float)) &Urho3D::XMLElement::SetFloat, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetDouble", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, double)) &Urho3D::XMLElement::SetDouble, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetUInt", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, unsigned int)) &Urho3D::XMLElement::SetUInt, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetInt", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, int)) &Urho3D::XMLElement::SetInt, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetUInt64", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, unsigned long long)) &Urho3D::XMLElement::SetUInt64, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetInt64", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, long long)) &Urho3D::XMLElement::SetInt64, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetIntRect", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::IntRect &)) &Urho3D::XMLElement::SetIntRect, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetIntVector2", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::IntVector2 &)) &Urho3D::XMLElement::SetIntVector2, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetIntVector3", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::IntVector3 &)) &Urho3D::XMLElement::SetIntVector3, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetRect", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Rect &)) &Urho3D::XMLElement::SetRect, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetQuaternion", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Quaternion &)) &Urho3D::XMLElement::SetQuaternion, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetString", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::XMLElement::SetString, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetVariant", (bool (Urho3D::XMLElement::*)(const Urho3D::Variant &)) &Urho3D::XMLElement::SetVariant, "todo: docstring", py::arg("value"))
  .def("SetVariantValue", (bool (Urho3D::XMLElement::*)(const Urho3D::Variant &)) &Urho3D::XMLElement::SetVariantValue, "todo: docstring", py::arg("value"))
  .def("SetResourceRef", (bool (Urho3D::XMLElement::*)(const Urho3D::ResourceRef &)) &Urho3D::XMLElement::SetResourceRef, "todo: docstring", py::arg("value"))
  .def("SetResourceRefList", (bool (Urho3D::XMLElement::*)(const Urho3D::ResourceRefList &)) &Urho3D::XMLElement::SetResourceRefList, "todo: docstring", py::arg("value"))
  .def("SetVariantVector", (bool (Urho3D::XMLElement::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::XMLElement::SetVariantVector, "todo: docstring", py::arg("value"))
  .def("SetStringVector", (bool (Urho3D::XMLElement::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::XMLElement::SetStringVector, "todo: docstring", py::arg("value"))
  .def("SetVariantMap", (bool (Urho3D::XMLElement::*)(const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::XMLElement::SetVariantMap, "todo: docstring", py::arg("value"))
  .def("SetVector2", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Vector2 &)) &Urho3D::XMLElement::SetVector2, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetVector3", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Vector3 &)) &Urho3D::XMLElement::SetVector3, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetVector4", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Vector4 &)) &Urho3D::XMLElement::SetVector4, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetVectorVariant", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Variant &)) &Urho3D::XMLElement::SetVectorVariant, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetMatrix3", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Matrix3 &)) &Urho3D::XMLElement::SetMatrix3, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetMatrix3x4", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Matrix3x4 &)) &Urho3D::XMLElement::SetMatrix3x4, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetMatrix4", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, const Urho3D::Matrix4 &)) &Urho3D::XMLElement::SetMatrix4, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("IsNull", (bool (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::IsNull, "todo: docstring")
  .def("NotNull", (bool (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::NotNull, "todo: docstring")
  .def("GetName", (Urho3D::String (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetName, "todo: docstring")
  .def("HasChild", (bool (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::HasChild, "todo: docstring", py::arg("name"))
  .def("HasChild", (bool (Urho3D::XMLElement::*)(const char *) const) &Urho3D::XMLElement::HasChild, "todo: docstring", py::arg("name"))
  .def("GetChild", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetChild, "todo: docstring", py::arg("name")=String::EMPTY)
  .def("GetChild", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const char *) const) &Urho3D::XMLElement::GetChild, "todo: docstring", py::arg("name"))
  .def("GetNext", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetNext, "todo: docstring", py::arg("name")=String::EMPTY)
  .def("GetNext", (Urho3D::XMLElement (Urho3D::XMLElement::*)(const char *) const) &Urho3D::XMLElement::GetNext, "todo: docstring", py::arg("name"))
  .def("GetParent", (Urho3D::XMLElement (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetParent, "todo: docstring")
  .def("GetNumAttributes", (unsigned int (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetNumAttributes, "todo: docstring")
  .def("HasAttribute", (bool (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::HasAttribute, "todo: docstring", py::arg("name"))
  .def("HasAttribute", (bool (Urho3D::XMLElement::*)(const char *) const) &Urho3D::XMLElement::HasAttribute, "todo: docstring", py::arg("name"))
  .def("GetValue", (Urho3D::String (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetValue, "todo: docstring")
  .def("GetAttribute", (Urho3D::String (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetAttribute, "todo: docstring", py::arg("name")=String::EMPTY)
  .def("GetAttribute", (Urho3D::String (Urho3D::XMLElement::*)(const char *) const) &Urho3D::XMLElement::GetAttribute, "todo: docstring", py::arg("name"))
  .def("GetAttributeCString", (const char * (Urho3D::XMLElement::*)(const char *) const) &Urho3D::XMLElement::GetAttributeCString, "todo: docstring", py::arg("name"))
  .def("GetAttributeLower", (Urho3D::String (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetAttributeLower, "todo: docstring", py::arg("name"))
  .def("GetAttributeLower", (Urho3D::String (Urho3D::XMLElement::*)(const char *) const) &Urho3D::XMLElement::GetAttributeLower, "todo: docstring", py::arg("name"))
  .def("GetAttributeUpper", (Urho3D::String (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetAttributeUpper, "todo: docstring", py::arg("name"))
  .def("GetAttributeUpper", (Urho3D::String (Urho3D::XMLElement::*)(const char *) const) &Urho3D::XMLElement::GetAttributeUpper, "todo: docstring", py::arg("name"))
  //.def("GetAttributeNames", (Vector<Urho3D::String> (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetAttributeNames, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetBool", (bool (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetBool, "todo: docstring", py::arg("name"))
  //.def("GetBuffer", (PODVector<unsigned char> (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetBuffer, "todo: docstring", py::arg("name"))
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetBuffer", (bool (Urho3D::XMLElement::*)(const Urho3D::String &, void *, unsigned int) const) &Urho3D::XMLElement::GetBuffer, "todo: docstring", py::arg("name"), py::arg("dest"), py::arg("size"))
  .def("GetBoundingBox", (Urho3D::BoundingBox (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetBoundingBox, "todo: docstring")
  .def("GetColor", (Urho3D::Color (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetColor, "todo: docstring", py::arg("name"))
  .def("GetFloat", (float (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetFloat, "todo: docstring", py::arg("name"))
  .def("GetDouble", (double (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetDouble, "todo: docstring", py::arg("name"))
  .def("GetUInt", (unsigned int (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetUInt, "todo: docstring", py::arg("name"))
  .def("GetInt", (int (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetInt, "todo: docstring", py::arg("name"))
  .def("GetUInt64", (unsigned long long (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetUInt64, "todo: docstring", py::arg("name"))
  .def("GetInt64", (long long (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetInt64, "todo: docstring", py::arg("name"))
  .def("GetIntRect", (Urho3D::IntRect (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetIntRect, "todo: docstring", py::arg("name"))
  .def("GetIntVector2", (Urho3D::IntVector2 (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetIntVector2, "todo: docstring", py::arg("name"))
  .def("GetIntVector3", (Urho3D::IntVector3 (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetIntVector3, "todo: docstring", py::arg("name"))
  .def("GetRect", (Urho3D::Rect (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetRect, "todo: docstring", py::arg("name"))
  .def("GetQuaternion", (Urho3D::Quaternion (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetQuaternion, "todo: docstring", py::arg("name"))
  .def("GetVariant", (Urho3D::Variant (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetVariant, "todo: docstring")
  .def("GetVariantValue", (Urho3D::Variant (Urho3D::XMLElement::*)(Urho3D::VariantType) const) &Urho3D::XMLElement::GetVariantValue, "todo: docstring", py::arg("type"))
  .def("GetResourceRef", (Urho3D::ResourceRef (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetResourceRef, "todo: docstring")
  .def("GetResourceRefList", (Urho3D::ResourceRefList (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetResourceRefList, "todo: docstring")
  .def("GetVariantVector", (Urho3D::VariantVector (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetVariantVector, "todo: docstring")
  .def("GetStringVector", (Urho3D::StringVector (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetStringVector, "todo: docstring")
  .def("GetVariantMap", (Urho3D::VariantMap (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetVariantMap, "todo: docstring")
  .def("GetVector2", (Urho3D::Vector2 (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetVector2, "todo: docstring", py::arg("name"))
  .def("GetVector3", (Urho3D::Vector3 (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetVector3, "todo: docstring", py::arg("name"))
  .def("GetVector4", (Urho3D::Vector4 (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetVector4, "todo: docstring", py::arg("name"))
  .def("GetVector", (Urho3D::Vector4 (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetVector, "todo: docstring", py::arg("name"))
  .def("GetVectorVariant", (Urho3D::Variant (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetVectorVariant, "todo: docstring", py::arg("name"))
  .def("GetMatrix3", (Urho3D::Matrix3 (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetMatrix3, "todo: docstring", py::arg("name"))
  .def("GetMatrix3x4", (Urho3D::Matrix3x4 (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetMatrix3x4, "todo: docstring", py::arg("name"))
  .def("GetMatrix4", (Urho3D::Matrix4 (Urho3D::XMLElement::*)(const Urho3D::String &) const) &Urho3D::XMLElement::GetMatrix4, "todo: docstring", py::arg("name"))
  .def("GetFile", (Urho3D::XMLFile * (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetFile, "todo: docstring")
  .def("GetBasePath", (const Urho3D::String & (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetBasePath, "todo: docstring")
  //.def("GetNode", (pugi::xml_node_struct * (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetNode, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetXPathResultSet", (const Urho3D::XPathResultSet * (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetXPathResultSet, "todo: docstring")
  //.def("GetXPathNode", (const pugi::xpath_node * (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetXPathNode, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetXPathResultIndex", (unsigned int (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::GetXPathResultIndex, "todo: docstring")
  .def("NextResult", (Urho3D::XMLElement (Urho3D::XMLElement::*)() const) &Urho3D::XMLElement::NextResult, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_DirtyBits(py::class_<Urho3D::DirtyBits, Urho3D::ExternalPtr<Urho3D::DirtyBits>>& pyclass_Var_Urho3D_DirtyBits)
{
    // Class DirtyBits Implementation
pyclass_Var_Urho3D_DirtyBits
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::DirtyBits &>(), "todo: constructor docstring")
  .def("Set", (void (Urho3D::DirtyBits::*)(unsigned int)) &Urho3D::DirtyBits::Set, "todo: docstring", py::arg("index"))
  .def("Clear", (void (Urho3D::DirtyBits::*)(unsigned int)) &Urho3D::DirtyBits::Clear, "todo: docstring", py::arg("index"))
  .def("ClearAll", (void (Urho3D::DirtyBits::*)()) &Urho3D::DirtyBits::ClearAll, "todo: docstring")
  .def("IsSet", (bool (Urho3D::DirtyBits::*)(unsigned int) const) &Urho3D::DirtyBits::IsSet, "todo: docstring", py::arg("index"))
  .def("Count", (unsigned int (Urho3D::DirtyBits::*)() const) &Urho3D::DirtyBits::Count, "todo: docstring")
// Class Variables:
  .def_readwrite("count",&Urho3D::DirtyBits::count_, "todo: var docstring")//unsigned char
;
}

void Implement_Urho3D_ReplicationState(py::class_<Urho3D::ReplicationState, Urho3D::ExternalPtr<Urho3D::ReplicationState>>& pyclass_Var_Urho3D_ReplicationState)
{
    // Class ReplicationState Implementation
pyclass_Var_Urho3D_ReplicationState
// Class Variables:
;
}

void Implement_Urho3D_ValueAnimationInfo(py::class_<Urho3D::ValueAnimationInfo, Urho3D::SharedPtr<Urho3D::ValueAnimationInfo>, Urho3D::RefCounted>& pyclass_Var_Urho3D_ValueAnimationInfo)
{
    // Class ValueAnimationInfo Implementation
pyclass_Var_Urho3D_ValueAnimationInfo
  .def(py::init<Urho3D::ValueAnimation *, Urho3D::WrapMode, float>(), "todo: constructor docstring")
  .def(py::init<Urho3D::Object *, Urho3D::ValueAnimation *, Urho3D::WrapMode, float>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::ValueAnimationInfo &>(), "todo: constructor docstring")
  //.def("~ValueAnimationInfo", (void (Urho3D::ValueAnimationInfo::*)()) &Urho3D::ValueAnimationInfo::~ValueAnimationInfo, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Update", (bool (Urho3D::ValueAnimationInfo::*)(float)) &Urho3D::ValueAnimationInfo::Update, "todo: docstring", py::arg("timeStep"))
  .def("SetTime", (bool (Urho3D::ValueAnimationInfo::*)(float)) &Urho3D::ValueAnimationInfo::SetTime, "todo: docstring", py::arg("time"))
  .def("SetWrapMode", (void (Urho3D::ValueAnimationInfo::*)(Urho3D::WrapMode)) &Urho3D::ValueAnimationInfo::SetWrapMode, "todo: docstring", py::arg("wrapMode"))
  .def("SetSpeed", (void (Urho3D::ValueAnimationInfo::*)(float)) &Urho3D::ValueAnimationInfo::SetSpeed, "todo: docstring", py::arg("speed"))
  .def("GetTarget", (Urho3D::Object * (Urho3D::ValueAnimationInfo::*)() const) &Urho3D::ValueAnimationInfo::GetTarget, "todo: docstring")
  .def("GetAnimation", (Urho3D::ValueAnimation * (Urho3D::ValueAnimationInfo::*)() const) &Urho3D::ValueAnimationInfo::GetAnimation, "todo: docstring")
  .def("GetWrapMode", (Urho3D::WrapMode (Urho3D::ValueAnimationInfo::*)() const) &Urho3D::ValueAnimationInfo::GetWrapMode, "todo: docstring")
  .def("GetTime", (float (Urho3D::ValueAnimationInfo::*)() const) &Urho3D::ValueAnimationInfo::GetTime, "todo: docstring")
  .def("GetSpeed", (float (Urho3D::ValueAnimationInfo::*)() const) &Urho3D::ValueAnimationInfo::GetSpeed, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ComponentReplicationState(py::class_<Urho3D::ComponentReplicationState, Urho3D::ExternalPtr<Urho3D::ComponentReplicationState>, Urho3D::ReplicationState>& pyclass_Var_Urho3D_ComponentReplicationState)
{
    // Class ComponentReplicationState Implementation
pyclass_Var_Urho3D_ComponentReplicationState
// Class Variables:
  .def_readwrite("component",&Urho3D::ComponentReplicationState::component_, "todo: var docstring")//Urho3D::WeakPtr<Urho3D::Component>
  .def_readwrite("dirtyAttributes",&Urho3D::ComponentReplicationState::dirtyAttributes_, "todo: var docstring")//Urho3D::DirtyBits
;
}

void Implement_Urho3D_SoundStream(py::class_<Urho3D::SoundStream, Urho3D::SharedPtr<Urho3D::SoundStream>, Urho3D::RefCounted>& pyclass_Var_Urho3D_SoundStream)
{
    // Class SoundStream Implementation
pyclass_Var_Urho3D_SoundStream
  //.def(py::init<>(), "todo: constructor docstring")
    // Abstract class SoundStream -> no init
  //.def("~SoundStream", (void (Urho3D::SoundStream::*)()) &Urho3D::SoundStream::~SoundStream, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Seek", (bool (Urho3D::SoundStream::*)(unsigned int)) &Urho3D::SoundStream::Seek, "todo: docstring", py::arg("sample_number"))
  //.def("GetData", (unsigned int (Urho3D::SoundStream::*)(signed char *, unsigned int)) &Urho3D::SoundStream::GetData, "todo: docstring", py::arg("dest"), py::arg("numBytes"))
    //['signed char', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("SetFormat", (void (Urho3D::SoundStream::*)(unsigned int, bool, bool)) &Urho3D::SoundStream::SetFormat, "todo: docstring", py::arg("frequency"), py::arg("sixteenBit"), py::arg("stereo"))
  .def("SetStopAtEnd", (void (Urho3D::SoundStream::*)(bool)) &Urho3D::SoundStream::SetStopAtEnd, "todo: docstring", py::arg("enable"))
  .def("GetSampleSize", (unsigned int (Urho3D::SoundStream::*)() const) &Urho3D::SoundStream::GetSampleSize, "todo: docstring")
  .def("GetFrequency", (float (Urho3D::SoundStream::*)() const) &Urho3D::SoundStream::GetFrequency, "todo: docstring")
  .def("GetIntFrequency", (unsigned int (Urho3D::SoundStream::*)() const) &Urho3D::SoundStream::GetIntFrequency, "todo: docstring")
  .def("GetStopAtEnd", (bool (Urho3D::SoundStream::*)() const) &Urho3D::SoundStream::GetStopAtEnd, "todo: docstring")
  .def("IsSixteenBit", (bool (Urho3D::SoundStream::*)() const) &Urho3D::SoundStream::IsSixteenBit, "todo: docstring")
  .def("IsStereo", (bool (Urho3D::SoundStream::*)() const) &Urho3D::SoundStream::IsStereo, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_EventReceiverGroup(py::class_<Urho3D::EventReceiverGroup, Urho3D::SharedPtr<Urho3D::EventReceiverGroup>, Urho3D::RefCounted>& pyclass_Var_Urho3D_EventReceiverGroup)
{
    // Class EventReceiverGroup Implementation
pyclass_Var_Urho3D_EventReceiverGroup
  .def(py::init<>(), "todo: constructor docstring")
  .def("BeginSendEvent", (void (Urho3D::EventReceiverGroup::*)()) &Urho3D::EventReceiverGroup::BeginSendEvent, "todo: docstring")
  .def("EndSendEvent", (void (Urho3D::EventReceiverGroup::*)()) &Urho3D::EventReceiverGroup::EndSendEvent, "todo: docstring")
  .def("Add", (void (Urho3D::EventReceiverGroup::*)(Urho3D::Object *)) &Urho3D::EventReceiverGroup::Add, "todo: docstring", py::arg("object"))
  .def("Remove", (void (Urho3D::EventReceiverGroup::*)(Urho3D::Object *)) &Urho3D::EventReceiverGroup::Remove, "todo: docstring", py::arg("object"))
// Class Variables:
;
}

void Implement_Urho3D_Polyhedron(py::class_<Urho3D::Polyhedron, Urho3D::ExternalPtr<Urho3D::Polyhedron>>& pyclass_Var_Urho3D_Polyhedron)
{
    // Class Polyhedron Implementation
pyclass_Var_Urho3D_Polyhedron
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~Polyhedron", (void (Urho3D::Polyhedron::*)()) &Urho3D::Polyhedron::~Polyhedron, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::init<const Urho3D::Polyhedron &>(), "todo: constructor docstring")
  //.def(py::init<const Urho3D::Vector<Urho3D::PODVector<Urho3D::Vector3> > &>(), "todo: constructor docstring")
    //['Urho3D::Vector<Urho3D::PODVector<Urho3D::Vector3> >']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def(py::init<const Urho3D::BoundingBox &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Frustum &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Polyhedron(), "todo: docstring").def("__assign__", (Urho3D::Polyhedron & (Urho3D::Polyhedron::*)(const Urho3D::Polyhedron &)) &Urho3D::Polyhedron::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Polyhedron']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Define", (void (Urho3D::Polyhedron::*)(const Urho3D::BoundingBox &)) &Urho3D::Polyhedron::Define, "todo: docstring", py::arg("box"))
  .def("Define", (void (Urho3D::Polyhedron::*)(const Urho3D::Frustum &)) &Urho3D::Polyhedron::Define, "todo: docstring", py::arg("frustum"))
  .def("AddFace", (void (Urho3D::Polyhedron::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::Polyhedron::AddFace, "todo: docstring", py::arg("v0"), py::arg("v1"), py::arg("v2"))
  .def("AddFace", (void (Urho3D::Polyhedron::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::Polyhedron::AddFace, "todo: docstring", py::arg("v0"), py::arg("v1"), py::arg("v2"), py::arg("v3"))
  //.def("AddFace", (void (Urho3D::Polyhedron::*)(const Urho3D::PODVector<Urho3D::Vector3> &)) &Urho3D::Polyhedron::AddFace, "todo: docstring", py::arg("face"))
    //['Urho3D::PODVector<Urho3D::Vector3>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("Clip", (void (Urho3D::Polyhedron::*)(const Urho3D::Plane &)) &Urho3D::Polyhedron::Clip, "todo: docstring", py::arg("plane"))
  .def("Clip", (void (Urho3D::Polyhedron::*)(const Urho3D::BoundingBox &)) &Urho3D::Polyhedron::Clip, "todo: docstring", py::arg("box"))
  .def("Clip", (void (Urho3D::Polyhedron::*)(const Urho3D::Frustum &)) &Urho3D::Polyhedron::Clip, "todo: docstring", py::arg("frustum"))
  .def("Clear", (void (Urho3D::Polyhedron::*)()) &Urho3D::Polyhedron::Clear, "todo: docstring")
  .def("Transform", (void (Urho3D::Polyhedron::*)(const Urho3D::Matrix3 &)) &Urho3D::Polyhedron::Transform, "todo: docstring", py::arg("transform"))
  .def("Transform", (void (Urho3D::Polyhedron::*)(const Urho3D::Matrix3x4 &)) &Urho3D::Polyhedron::Transform, "todo: docstring", py::arg("transform"))
  .def("Transformed", (Urho3D::Polyhedron (Urho3D::Polyhedron::*)(const Urho3D::Matrix3 &) const) &Urho3D::Polyhedron::Transformed, "todo: docstring", py::arg("transform"))
  .def("Transformed", (Urho3D::Polyhedron (Urho3D::Polyhedron::*)(const Urho3D::Matrix3x4 &) const) &Urho3D::Polyhedron::Transformed, "todo: docstring", py::arg("transform"))
  .def("Empty", (bool (Urho3D::Polyhedron::*)() const) &Urho3D::Polyhedron::Empty, "todo: docstring")
// Class Variables:
  .def_readwrite("faces",&Urho3D::Polyhedron::faces_, "todo: var docstring")//Urho3D::Vector<Urho3D::PODVector<Urho3D::Vector3> >
;
}

void Implement_Urho3D_Sphere(py::class_<Urho3D::Sphere, Urho3D::ExternalPtr<Urho3D::Sphere>>& pyclass_Var_Urho3D_Sphere)
{
    // Class Sphere Implementation
pyclass_Var_Urho3D_Sphere
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Sphere &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, float>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 *, unsigned int>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::BoundingBox &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Frustum &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Polyhedron &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Sphere(), "todo: docstring").def("__assign__", (Urho3D::Sphere & (Urho3D::Sphere::*)(const Urho3D::Sphere &)) &Urho3D::Sphere::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Sphere']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Sphere(), "todo: docstring")
    //['Urho3D::Sphere']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Sphere(), "todo: docstring")
    //['Urho3D::Sphere']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Define", (void (Urho3D::Sphere::*)(const Urho3D::Sphere &)) &Urho3D::Sphere::Define, "todo: docstring", py::arg("sphere"))
  .def("Define", (void (Urho3D::Sphere::*)(const Urho3D::Vector3 &, float)) &Urho3D::Sphere::Define, "todo: docstring", py::arg("center"), py::arg("radius"))
  .def("Define", (void (Urho3D::Sphere::*)(const Urho3D::Vector3 *, unsigned int)) &Urho3D::Sphere::Define, "todo: docstring", py::arg("vertices"), py::arg("count"))
  .def("Define", (void (Urho3D::Sphere::*)(const Urho3D::BoundingBox &)) &Urho3D::Sphere::Define, "todo: docstring", py::arg("box"))
  .def("Define", (void (Urho3D::Sphere::*)(const Urho3D::Frustum &)) &Urho3D::Sphere::Define, "todo: docstring", py::arg("frustum"))
  .def("Define", (void (Urho3D::Sphere::*)(const Urho3D::Polyhedron &)) &Urho3D::Sphere::Define, "todo: docstring", py::arg("poly"))
  .def("Merge", (void (Urho3D::Sphere::*)(const Urho3D::Vector3 &)) &Urho3D::Sphere::Merge, "todo: docstring", py::arg("point"))
  .def("Merge", (void (Urho3D::Sphere::*)(const Urho3D::Vector3 *, unsigned int)) &Urho3D::Sphere::Merge, "todo: docstring", py::arg("vertices"), py::arg("count"))
  .def("Merge", (void (Urho3D::Sphere::*)(const Urho3D::BoundingBox &)) &Urho3D::Sphere::Merge, "todo: docstring", py::arg("box"))
  .def("Merge", (void (Urho3D::Sphere::*)(const Urho3D::Frustum &)) &Urho3D::Sphere::Merge, "todo: docstring", py::arg("frustum"))
  .def("Merge", (void (Urho3D::Sphere::*)(const Urho3D::Polyhedron &)) &Urho3D::Sphere::Merge, "todo: docstring", py::arg("poly"))
  .def("Merge", (void (Urho3D::Sphere::*)(const Urho3D::Sphere &)) &Urho3D::Sphere::Merge, "todo: docstring", py::arg("sphere"))
  .def("Clear", (void (Urho3D::Sphere::*)()) &Urho3D::Sphere::Clear, "todo: docstring")
  .def("Defined", (bool (Urho3D::Sphere::*)() const) &Urho3D::Sphere::Defined, "todo: docstring")
  .def("IsInside", (Urho3D::Intersection (Urho3D::Sphere::*)(const Urho3D::Vector3 &) const) &Urho3D::Sphere::IsInside, "todo: docstring", py::arg("point"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::Sphere::*)(const Urho3D::Sphere &) const) &Urho3D::Sphere::IsInside, "todo: docstring", py::arg("sphere"))
  .def("IsInsideFast", (Urho3D::Intersection (Urho3D::Sphere::*)(const Urho3D::Sphere &) const) &Urho3D::Sphere::IsInsideFast, "todo: docstring", py::arg("sphere"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::Sphere::*)(const Urho3D::BoundingBox &) const) &Urho3D::Sphere::IsInside, "todo: docstring", py::arg("box"))
  .def("IsInsideFast", (Urho3D::Intersection (Urho3D::Sphere::*)(const Urho3D::BoundingBox &) const) &Urho3D::Sphere::IsInsideFast, "todo: docstring", py::arg("box"))
  .def("Distance", (float (Urho3D::Sphere::*)(const Urho3D::Vector3 &) const) &Urho3D::Sphere::Distance, "todo: docstring", py::arg("point"))
  .def("GetLocalPoint", (Urho3D::Vector3 (Urho3D::Sphere::*)(float, float) const) &Urho3D::Sphere::GetLocalPoint, "todo: docstring", py::arg("theta"), py::arg("phi"))
  .def("GetPoint", (Urho3D::Vector3 (Urho3D::Sphere::*)(float, float) const) &Urho3D::Sphere::GetPoint, "todo: docstring", py::arg("theta"), py::arg("phi"))
// Class Variables:
  .def_readwrite("center",&Urho3D::Sphere::center_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("radius",&Urho3D::Sphere::radius_, "todo: var docstring")//float
;
}

void Implement_Urho3D_Octant(py::class_<Urho3D::Octant, Urho3D::ExternalPtr<Urho3D::Octant>>& pyclass_Var_Urho3D_Octant)
{
    // Class Octant Implementation
pyclass_Var_Urho3D_Octant
  .def(py::init<const Urho3D::BoundingBox &, unsigned int, Urho3D::Octant *, Urho3D::Octree *, unsigned int>(), "todo: constructor docstring")
  //.def("~Octant", (void (Urho3D::Octant::*)()) &Urho3D::Octant::~Octant, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("GetOrCreateChild", (Urho3D::Octant * (Urho3D::Octant::*)(unsigned int)) &Urho3D::Octant::GetOrCreateChild, "todo: docstring", py::arg("index"))
  .def("DeleteChild", (void (Urho3D::Octant::*)(unsigned int)) &Urho3D::Octant::DeleteChild, "todo: docstring", py::arg("index"))
  .def("InsertDrawable", (void (Urho3D::Octant::*)(Urho3D::Drawable *)) &Urho3D::Octant::InsertDrawable, "todo: docstring", py::arg("drawable"))
  .def("CheckDrawableFit", (bool (Urho3D::Octant::*)(const Urho3D::BoundingBox &) const) &Urho3D::Octant::CheckDrawableFit, "todo: docstring", py::arg("box"))
  .def("AddDrawable", (void (Urho3D::Octant::*)(Urho3D::Drawable *)) &Urho3D::Octant::AddDrawable, "todo: docstring", py::arg("drawable"))
  .def("RemoveDrawable", (void (Urho3D::Octant::*)(Urho3D::Drawable *, bool)) &Urho3D::Octant::RemoveDrawable, "todo: docstring", py::arg("drawable"), py::arg("resetOctant")=true)
  .def("GetWorldBoundingBox", (const Urho3D::BoundingBox & (Urho3D::Octant::*)() const) &Urho3D::Octant::GetWorldBoundingBox, "todo: docstring")
  .def("GetCullingBox", (const Urho3D::BoundingBox & (Urho3D::Octant::*)() const) &Urho3D::Octant::GetCullingBox, "todo: docstring")
  .def("GetLevel", (unsigned int (Urho3D::Octant::*)() const) &Urho3D::Octant::GetLevel, "todo: docstring")
  .def("GetParent", (Urho3D::Octant * (Urho3D::Octant::*)() const) &Urho3D::Octant::GetParent, "todo: docstring")
  .def("GetRoot", (Urho3D::Octree * (Urho3D::Octant::*)() const) &Urho3D::Octant::GetRoot, "todo: docstring")
  .def("GetNumDrawables", (unsigned int (Urho3D::Octant::*)() const) &Urho3D::Octant::GetNumDrawables, "todo: docstring")
  .def("IsEmpty", (bool (Urho3D::Octant::*)()) &Urho3D::Octant::IsEmpty, "todo: docstring")
  .def("ResetRoot", (void (Urho3D::Octant::*)()) &Urho3D::Octant::ResetRoot, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::Octant::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::Octant::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
// Class Variables:
;
}

void Implement_Urho3D_RayQueryResult(py::class_<Urho3D::RayQueryResult, Urho3D::ExternalPtr<Urho3D::RayQueryResult>>& pyclass_Var_Urho3D_RayQueryResult)
{
    // Class RayQueryResult Implementation
pyclass_Var_Urho3D_RayQueryResult
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::self != Urho3D::RayQueryResult(), "todo: docstring")
    //['Urho3D::RayQueryResult']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("position",&Urho3D::RayQueryResult::position_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("normal",&Urho3D::RayQueryResult::normal_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("textureUV",&Urho3D::RayQueryResult::textureUV_, "todo: var docstring")//Urho3D::Vector2
  .def_readwrite("distance",&Urho3D::RayQueryResult::distance_, "todo: var docstring")//float
  .def_readwrite("subObject",&Urho3D::RayQueryResult::subObject_, "todo: var docstring")//unsigned int
;
}

void Implement_Urho3D_GPUObject(py::class_<Urho3D::GPUObject, Urho3D::ExternalPtr<Urho3D::GPUObject>>& pyclass_Var_Urho3D_GPUObject)
{
    // Class GPUObject Implementation
pyclass_Var_Urho3D_GPUObject
  .def(py::init<Urho3D::Graphics *>(), "todo: constructor docstring")
  //.def("~GPUObject", (void (Urho3D::GPUObject::*)()) &Urho3D::GPUObject::~GPUObject, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnDeviceLost", (void (Urho3D::GPUObject::*)()) &Urho3D::GPUObject::OnDeviceLost, "todo: docstring")
  .def("OnDeviceReset", (void (Urho3D::GPUObject::*)()) &Urho3D::GPUObject::OnDeviceReset, "todo: docstring")
  .def("Release", (void (Urho3D::GPUObject::*)()) &Urho3D::GPUObject::Release, "todo: docstring")
  .def("ClearDataLost", (void (Urho3D::GPUObject::*)()) &Urho3D::GPUObject::ClearDataLost, "todo: docstring")
  .def("GetGraphics", (Urho3D::Graphics * (Urho3D::GPUObject::*)() const) &Urho3D::GPUObject::GetGraphics, "todo: docstring")
  .def("GetGPUObject", (void * (Urho3D::GPUObject::*)() const) &Urho3D::GPUObject::GetGPUObject, "todo: docstring")
  .def("GetGPUObjectName", (unsigned int (Urho3D::GPUObject::*)() const) &Urho3D::GPUObject::GetGPUObjectName, "todo: docstring")
  .def("IsDataLost", (bool (Urho3D::GPUObject::*)() const) &Urho3D::GPUObject::IsDataLost, "todo: docstring")
  .def("HasPendingData", (bool (Urho3D::GPUObject::*)() const) &Urho3D::GPUObject::HasPendingData, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_HiresTimer(py::class_<Urho3D::HiresTimer, Urho3D::ExternalPtr<Urho3D::HiresTimer>>& pyclass_Var_Urho3D_HiresTimer)
{
    // Class HiresTimer Implementation
pyclass_Var_Urho3D_HiresTimer
  .def(py::init<>(), "todo: constructor docstring")
  .def("GetUSec", (long long (Urho3D::HiresTimer::*)(bool)) &Urho3D::HiresTimer::GetUSec, "todo: docstring", py::arg("reset"))
  .def("Reset", (void (Urho3D::HiresTimer::*)()) &Urho3D::HiresTimer::Reset, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_SceneResolver(py::class_<Urho3D::SceneResolver, Urho3D::ExternalPtr<Urho3D::SceneResolver>>& pyclass_Var_Urho3D_SceneResolver)
{
    // Class SceneResolver Implementation
pyclass_Var_Urho3D_SceneResolver
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~SceneResolver", (void (Urho3D::SceneResolver::*)()) &Urho3D::SceneResolver::~SceneResolver, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Reset", (void (Urho3D::SceneResolver::*)()) &Urho3D::SceneResolver::Reset, "todo: docstring")
  .def("AddNode", (void (Urho3D::SceneResolver::*)(unsigned int, Urho3D::Node *)) &Urho3D::SceneResolver::AddNode, "todo: docstring", py::arg("oldID"), py::arg("node"))
  .def("AddComponent", (void (Urho3D::SceneResolver::*)(unsigned int, Urho3D::Component *)) &Urho3D::SceneResolver::AddComponent, "todo: docstring", py::arg("oldID"), py::arg("component"))
  .def("Resolve", (void (Urho3D::SceneResolver::*)()) &Urho3D::SceneResolver::Resolve, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_NodeImpl(py::class_<Urho3D::NodeImpl, Urho3D::ExternalPtr<Urho3D::NodeImpl>>& pyclass_Var_Urho3D_NodeImpl)
{
    // Class NodeImpl Implementation
pyclass_Var_Urho3D_NodeImpl
// Class Variables:
  .def_readwrite("name",&Urho3D::NodeImpl::name_, "todo: var docstring")//Urho3D::String
  .def_readwrite("tags",&Urho3D::NodeImpl::tags_, "todo: var docstring")//Urho3D::Vector<Urho3D::String>
  .def_readwrite("nameHash",&Urho3D::NodeImpl::nameHash_, "todo: var docstring")//Urho3D::StringHash
  .def_readwrite("attrBuffer",&Urho3D::NodeImpl::attrBuffer_, "todo: var docstring")//Urho3D::VectorBuffer
  .def_readwrite("basePath",&Urho3D::NodeImpl::basePath_, "todo: var docstring")//Urho3D::String
;
}

void Implement_Urho3D_XPathResultSet(py::class_<Urho3D::XPathResultSet, Urho3D::ExternalPtr<Urho3D::XPathResultSet>>& pyclass_Var_Urho3D_XPathResultSet)
{
    // Class XPathResultSet Implementation
pyclass_Var_Urho3D_XPathResultSet
  .def(py::init<>(), "todo: constructor docstring")
  //.def(py::init<Urho3D::XMLFile *, pugi::xpath_node_set *>(), "todo: constructor docstring")
    //['Urho3D::XMLFile', 'pugi::xpath_node_set']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def(py::init<const Urho3D::XPathResultSet &>(), "todo: constructor docstring")
  //.def("~XPathResultSet", (void (Urho3D::XPathResultSet::*)()) &Urho3D::XPathResultSet::~XPathResultSet, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::XPathResultSet(), "todo: docstring").def("__assign__", (Urho3D::XPathResultSet & (Urho3D::XPathResultSet::*)(const Urho3D::XPathResultSet &)) &Urho3D::XPathResultSet::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::XPathResultSet']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(Urho3D::XMLElement operator[](unsigned int index=None), "todo: docstring").def("__index__", (Urho3D::XMLElement (Urho3D::XPathResultSet::*)(unsigned int) const) &Urho3D::XPathResultSet::operator[], py::operator, "todo: operator docstring. Switch to py: :self ops.")
//Unhandled call style []     //['unsigned int']; op [], ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("FirstResult", (Urho3D::XMLElement (Urho3D::XPathResultSet::*)()) &Urho3D::XPathResultSet::FirstResult, "todo: docstring")
  .def("Size", (unsigned int (Urho3D::XPathResultSet::*)() const) &Urho3D::XPathResultSet::Size, "todo: docstring")
  .def("Empty", (bool (Urho3D::XPathResultSet::*)() const) &Urho3D::XPathResultSet::Empty, "todo: docstring")
  //.def("GetXPathNodeSet", (pugi::xpath_node_set * (Urho3D::XPathResultSet::*)() const) &Urho3D::XPathResultSet::GetXPathNodeSet, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_BiasParameters(py::class_<Urho3D::BiasParameters, Urho3D::ExternalPtr<Urho3D::BiasParameters>>& pyclass_Var_Urho3D_BiasParameters)
{
    // Class BiasParameters Implementation
pyclass_Var_Urho3D_BiasParameters
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<float, float, float>(), "todo: constructor docstring")
  .def("Validate", (void (Urho3D::BiasParameters::*)()) &Urho3D::BiasParameters::Validate, "todo: docstring")
// Class Variables:
  .def_readwrite("constantBias",&Urho3D::BiasParameters::constantBias_, "todo: var docstring")//float
  .def_readwrite("slopeScaledBias",&Urho3D::BiasParameters::slopeScaledBias_, "todo: var docstring")//float
  .def_readwrite("normalOffset",&Urho3D::BiasParameters::normalOffset_, "todo: var docstring")//float
;
}

void Implement_Urho3D_FocusParameters(py::class_<Urho3D::FocusParameters, Urho3D::ExternalPtr<Urho3D::FocusParameters>>& pyclass_Var_Urho3D_FocusParameters)
{
    // Class FocusParameters Implementation
pyclass_Var_Urho3D_FocusParameters
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<bool, bool, bool, float, float>(), "todo: constructor docstring")
  .def("Validate", (void (Urho3D::FocusParameters::*)()) &Urho3D::FocusParameters::Validate, "todo: docstring")
// Class Variables:
  .def_readwrite("focus",&Urho3D::FocusParameters::focus_, "todo: var docstring")//bool
  .def_readwrite("nonUniform",&Urho3D::FocusParameters::nonUniform_, "todo: var docstring")//bool
  .def_readwrite("autoSize",&Urho3D::FocusParameters::autoSize_, "todo: var docstring")//bool
  .def_readwrite("quantize",&Urho3D::FocusParameters::quantize_, "todo: var docstring")//float
  .def_readwrite("minView",&Urho3D::FocusParameters::minView_, "todo: var docstring")//float
;
}

void Implement_Urho3D_UIBatch(py::class_<Urho3D::UIBatch, Urho3D::ExternalPtr<Urho3D::UIBatch>>& pyclass_Var_Urho3D_UIBatch)
{
    // Class UIBatch Implementation
pyclass_Var_Urho3D_UIBatch
  .def(py::init<>(), "todo: constructor docstring")
  //.def(py::init<Urho3D::UIElement *, Urho3D::BlendMode, const Urho3D::IntRect &, Urho3D::Texture *, Urho3D::PODVector<float> *>(), "todo: constructor docstring")
    //['Urho3D::UIElement', 'Urho3D::BlendMode', 'Urho3D::IntRect', 'Urho3D::Texture', 'Urho3D::PODVector<float>']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("SetColor", (void (Urho3D::UIBatch::*)(const Urho3D::Color &, bool)) &Urho3D::UIBatch::SetColor, "todo: docstring", py::arg("color"), py::arg("overrideAlpha")=false)
  .def("SetDefaultColor", (void (Urho3D::UIBatch::*)()) &Urho3D::UIBatch::SetDefaultColor, "todo: docstring")
  .def("AddQuad", (void (Urho3D::UIBatch::*)(float, float, float, float, int, int, int, int)) &Urho3D::UIBatch::AddQuad, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("width"), py::arg("height"), py::arg("texOffsetX"), py::arg("texOffsetY"), py::arg("texWidth")=0, py::arg("texHeight")=0)
  .def("AddQuad", (void (Urho3D::UIBatch::*)(const Urho3D::Matrix3x4 &, int, int, int, int, int, int, int, int)) &Urho3D::UIBatch::AddQuad, "todo: docstring", py::arg("transform"), py::arg("x"), py::arg("y"), py::arg("width"), py::arg("height"), py::arg("texOffsetX"), py::arg("texOffsetY"), py::arg("texWidth")=0, py::arg("texHeight")=0)
  .def("AddQuad", (void (Urho3D::UIBatch::*)(int, int, int, int, int, int, int, int, bool)) &Urho3D::UIBatch::AddQuad, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("width"), py::arg("height"), py::arg("texOffsetX"), py::arg("texOffsetY"), py::arg("texWidth"), py::arg("texHeight"), py::arg("tiled"))
  .def("AddQuad", (void (Urho3D::UIBatch::*)(const Urho3D::Matrix3x4 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::UIBatch::AddQuad, "todo: docstring", py::arg("transform"), py::arg("a"), py::arg("b"), py::arg("c"), py::arg("d"), py::arg("texA"), py::arg("texB"), py::arg("texC"), py::arg("texD"))
  .def("AddQuad", (void (Urho3D::UIBatch::*)(const Urho3D::Matrix3x4 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::Color &, const Urho3D::Color &, const Urho3D::Color &, const Urho3D::Color &)) &Urho3D::UIBatch::AddQuad, "todo: docstring", py::arg("transform"), py::arg("a"), py::arg("b"), py::arg("c"), py::arg("d"), py::arg("texA"), py::arg("texB"), py::arg("texC"), py::arg("texD"), py::arg("colA"), py::arg("colB"), py::arg("colC"), py::arg("colD"))
  .def("Merge", (bool (Urho3D::UIBatch::*)(const Urho3D::UIBatch &)) &Urho3D::UIBatch::Merge, "todo: docstring", py::arg("batch"))
  .def("GetInterpolatedColor", (unsigned int (Urho3D::UIBatch::*)(float, float)) &Urho3D::UIBatch::GetInterpolatedColor, "todo: docstring", py::arg("x"), py::arg("y"))
// Class Variables:
  .def_readwrite("blendMode",&Urho3D::UIBatch::blendMode_, "todo: var docstring")//Urho3D::BlendMode
  .def_readwrite("scissor",&Urho3D::UIBatch::scissor_, "todo: var docstring")//Urho3D::IntRect
  .def_readwrite("invTextureSize",&Urho3D::UIBatch::invTextureSize_, "todo: var docstring")//Urho3D::Vector2
  .def_readwrite("vertexStart",&Urho3D::UIBatch::vertexStart_, "todo: var docstring")//unsigned int
  .def_readwrite("vertexEnd",&Urho3D::UIBatch::vertexEnd_, "todo: var docstring")//unsigned int
  .def_readwrite("color",&Urho3D::UIBatch::color_, "todo: var docstring")//unsigned int
  .def_readwrite("useGradient",&Urho3D::UIBatch::useGradient_, "todo: var docstring")//bool
  .def_readwrite_static("posAdjust",&Urho3D::UIBatch::posAdjust, "todo: var docstring")//Urho3D::Vector3
;
}

void Implement_Urho3D_BufferedSoundStream(py::class_<Urho3D::BufferedSoundStream, Urho3D::SharedPtr<Urho3D::BufferedSoundStream>, Urho3D::SoundStream>& pyclass_Var_Urho3D_BufferedSoundStream)
{
    // Class BufferedSoundStream Implementation
pyclass_Var_Urho3D_BufferedSoundStream
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~BufferedSoundStream", (void (Urho3D::BufferedSoundStream::*)()) &Urho3D::BufferedSoundStream::~BufferedSoundStream, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("GetData", (unsigned int (Urho3D::BufferedSoundStream::*)(signed char *, unsigned int)) &Urho3D::BufferedSoundStream::GetData, "todo: docstring", py::arg("dest"), py::arg("numBytes"))
    //['signed char', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("AddData", (void (Urho3D::BufferedSoundStream::*)(void *, unsigned int)) &Urho3D::BufferedSoundStream::AddData, "todo: docstring", py::arg("data"), py::arg("numBytes"))
  //.def("AddData", (void (Urho3D::BufferedSoundStream::*)(const Urho3D::SharedArrayPtr<signed char> &, unsigned int)) &Urho3D::BufferedSoundStream::AddData, "todo: docstring", py::arg("data"), py::arg("numBytes"))
    //['Urho3D::SharedArrayPtr<signed char>', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("AddData", (void (Urho3D::BufferedSoundStream::*)(const Urho3D::SharedArrayPtr<short> &, unsigned int)) &Urho3D::BufferedSoundStream::AddData, "todo: docstring", py::arg("data"), py::arg("numBytes"))
    //['Urho3D::SharedArrayPtr<short>', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("Clear", (void (Urho3D::BufferedSoundStream::*)()) &Urho3D::BufferedSoundStream::Clear, "todo: docstring")
  .def("GetBufferNumBytes", (unsigned int (Urho3D::BufferedSoundStream::*)() const) &Urho3D::BufferedSoundStream::GetBufferNumBytes, "todo: docstring")
  .def("GetBufferLength", (float (Urho3D::BufferedSoundStream::*)() const) &Urho3D::BufferedSoundStream::GetBufferLength, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Condition(py::class_<Urho3D::Condition, Urho3D::ExternalPtr<Urho3D::Condition>>& pyclass_Var_Urho3D_Condition)
{
    // Class Condition Implementation
pyclass_Var_Urho3D_Condition
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~Condition", (void (Urho3D::Condition::*)()) &Urho3D::Condition::~Condition, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Set", (void (Urho3D::Condition::*)()) &Urho3D::Condition::Set, "todo: docstring")
  .def("Wait", (void (Urho3D::Condition::*)()) &Urho3D::Condition::Wait, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ProfilerBlock(py::class_<Urho3D::ProfilerBlock, Urho3D::ExternalPtr<Urho3D::ProfilerBlock>>& pyclass_Var_Urho3D_ProfilerBlock)
{
    // Class ProfilerBlock Implementation
pyclass_Var_Urho3D_ProfilerBlock
  .def(py::init<Urho3D::ProfilerBlock *, const char *>(), "todo: constructor docstring")
  //.def("~ProfilerBlock", (void (Urho3D::ProfilerBlock::*)()) &Urho3D::ProfilerBlock::~ProfilerBlock, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Begin", (void (Urho3D::ProfilerBlock::*)()) &Urho3D::ProfilerBlock::Begin, "todo: docstring")
  .def("End", (void (Urho3D::ProfilerBlock::*)()) &Urho3D::ProfilerBlock::End, "todo: docstring")
  .def("EndFrame", (void (Urho3D::ProfilerBlock::*)()) &Urho3D::ProfilerBlock::EndFrame, "todo: docstring")
  .def("BeginInterval", (void (Urho3D::ProfilerBlock::*)()) &Urho3D::ProfilerBlock::BeginInterval, "todo: docstring")
  .def("GetChild", (Urho3D::ProfilerBlock * (Urho3D::ProfilerBlock::*)(const char *)) &Urho3D::ProfilerBlock::GetChild, "todo: docstring", py::arg("name"))
// Class Variables:
  .def_readwrite("timer",&Urho3D::ProfilerBlock::timer_, "todo: var docstring")//Urho3D::HiresTimer
  .def_readwrite("time",&Urho3D::ProfilerBlock::time_, "todo: var docstring")//long long
  .def_readwrite("maxTime",&Urho3D::ProfilerBlock::maxTime_, "todo: var docstring")//long long
  .def_readwrite("count",&Urho3D::ProfilerBlock::count_, "todo: var docstring")//unsigned int
  .def_readwrite("frameTime",&Urho3D::ProfilerBlock::frameTime_, "todo: var docstring")//long long
  .def_readwrite("frameMaxTime",&Urho3D::ProfilerBlock::frameMaxTime_, "todo: var docstring")//long long
  .def_readwrite("frameCount",&Urho3D::ProfilerBlock::frameCount_, "todo: var docstring")//unsigned int
  .def_readwrite("intervalTime",&Urho3D::ProfilerBlock::intervalTime_, "todo: var docstring")//long long
  .def_readwrite("intervalMaxTime",&Urho3D::ProfilerBlock::intervalMaxTime_, "todo: var docstring")//long long
  .def_readwrite("intervalCount",&Urho3D::ProfilerBlock::intervalCount_, "todo: var docstring")//unsigned int
  .def_readwrite("totalTime",&Urho3D::ProfilerBlock::totalTime_, "todo: var docstring")//long long
  .def_readwrite("totalMaxTime",&Urho3D::ProfilerBlock::totalMaxTime_, "todo: var docstring")//long long
  .def_readwrite("totalCount",&Urho3D::ProfilerBlock::totalCount_, "todo: var docstring")//unsigned int
;
}
