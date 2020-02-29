

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
void Implement_Urho3D_PropertySet2D(py::class_<Urho3D::PropertySet2D, Urho3D::SharedPtr<Urho3D::PropertySet2D>, Urho3D::RefCounted>& pyclass_Var_Urho3D_PropertySet2D)
{
    // Class PropertySet2D Implementation
pyclass_Var_Urho3D_PropertySet2D
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~PropertySet2D", (void (Urho3D::PropertySet2D::*)()) &Urho3D::PropertySet2D::~PropertySet2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Load", (void (Urho3D::PropertySet2D::*)(const Urho3D::XMLElement &)) &Urho3D::PropertySet2D::Load, "todo: docstring", py::arg("element"))
  .def("HasProperty", (bool (Urho3D::PropertySet2D::*)(const Urho3D::String &) const) &Urho3D::PropertySet2D::HasProperty, "todo: docstring", py::arg("name"))
  .def("GetProperty", (const Urho3D::String & (Urho3D::PropertySet2D::*)(const Urho3D::String &) const) &Urho3D::PropertySet2D::GetProperty, "todo: docstring", py::arg("name"))
// Class Variables:
;
}

void Implement_Urho3D_VectorBase(py::class_<Urho3D::VectorBase, Urho3D::ExternalPtr<Urho3D::VectorBase>>& pyclass_Var_Urho3D_VectorBase)
{
    // Class VectorBase Implementation
pyclass_Var_Urho3D_VectorBase
  .def(py::init<>(), "todo: constructor docstring")
  .def("Swap", (void (Urho3D::VectorBase::*)(Urho3D::VectorBase &)) &Urho3D::VectorBase::Swap, "todo: docstring", py::arg("rhs"))
// Class Variables:
;
}

void Implement_Urho3D_LinkedListNode(py::class_<Urho3D::LinkedListNode, Urho3D::ExternalPtr<Urho3D::LinkedListNode>>& pyclass_Var_Urho3D_LinkedListNode)
{
    // Class LinkedListNode Implementation
pyclass_Var_Urho3D_LinkedListNode
  .def(py::init<>(), "todo: constructor docstring")
// Class Variables:
;
}

void Implement_Urho3D_Matrix3(py::class_<Urho3D::Matrix3, Urho3D::ExternalPtr<Urho3D::Matrix3>>& pyclass_Var_Urho3D_Matrix3)
{
    // Class Matrix3 Implementation
pyclass_Var_Urho3D_Matrix3
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix3 &>(), "todo: constructor docstring")
  .def(py::init<float, float, float, float, float, float, float, float, float>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Matrix3(), "todo: docstring").def("__assign__", (Urho3D::Matrix3 & (Urho3D::Matrix3::*)(const Urho3D::Matrix3 &)) &Urho3D::Matrix3::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix3']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Matrix3(), "todo: docstring")
    //['Urho3D::Matrix3']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Matrix3(), "todo: docstring")
    //['Urho3D::Matrix3']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Matrix3(), "todo: docstring")
    //['Urho3D::Matrix3']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Matrix3(), "todo: docstring")
    //['Urho3D::Matrix3']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Matrix3(), "todo: docstring")
    //['Urho3D::Matrix3']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetScale", (void (Urho3D::Matrix3::*)(const Urho3D::Vector3 &)) &Urho3D::Matrix3::SetScale, "todo: docstring", py::arg("scale"))
  .def("SetScale", (void (Urho3D::Matrix3::*)(float)) &Urho3D::Matrix3::SetScale, "todo: docstring", py::arg("scale"))
  .def("Scale", (Urho3D::Vector3 (Urho3D::Matrix3::*)() const) &Urho3D::Matrix3::Scale, "todo: docstring")
  .def("SignedScale", (Urho3D::Vector3 (Urho3D::Matrix3::*)(const Urho3D::Matrix3 &) const) &Urho3D::Matrix3::SignedScale, "todo: docstring", py::arg("rotation"))
  .def("Transpose", (Urho3D::Matrix3 (Urho3D::Matrix3::*)() const) &Urho3D::Matrix3::Transpose, "todo: docstring")
  .def("Scaled", (Urho3D::Matrix3 (Urho3D::Matrix3::*)(const Urho3D::Vector3 &) const) &Urho3D::Matrix3::Scaled, "todo: docstring", py::arg("scale"))
  .def("Equals", (bool (Urho3D::Matrix3::*)(const Urho3D::Matrix3 &) const) &Urho3D::Matrix3::Equals, "todo: docstring", py::arg("rhs"))
  .def("Inverse", (Urho3D::Matrix3 (Urho3D::Matrix3::*)() const) &Urho3D::Matrix3::Inverse, "todo: docstring")
  .def("Data", (const float * (Urho3D::Matrix3::*)() const) &Urho3D::Matrix3::Data, "todo: docstring")
  .def("Element", (float (Urho3D::Matrix3::*)(unsigned int, unsigned int) const) &Urho3D::Matrix3::Element, "todo: docstring", py::arg("i"), py::arg("j"))
  .def("Row", (Urho3D::Vector3 (Urho3D::Matrix3::*)(unsigned int) const) &Urho3D::Matrix3::Row, "todo: docstring", py::arg("i"))
  .def("Column", (Urho3D::Vector3 (Urho3D::Matrix3::*)(unsigned int) const) &Urho3D::Matrix3::Column, "todo: docstring", py::arg("j"))
  .def("ToString", (Urho3D::String (Urho3D::Matrix3::*)() const) &Urho3D::Matrix3::ToString, "todo: docstring")
// External Operators:
  .def(float() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("m00",&Urho3D::Matrix3::m00_, "todo: var docstring")//float
  .def_readwrite("m01",&Urho3D::Matrix3::m01_, "todo: var docstring")//float
  .def_readwrite("m02",&Urho3D::Matrix3::m02_, "todo: var docstring")//float
  .def_readwrite("m10",&Urho3D::Matrix3::m10_, "todo: var docstring")//float
  .def_readwrite("m11",&Urho3D::Matrix3::m11_, "todo: var docstring")//float
  .def_readwrite("m12",&Urho3D::Matrix3::m12_, "todo: var docstring")//float
  .def_readwrite("m20",&Urho3D::Matrix3::m20_, "todo: var docstring")//float
  .def_readwrite("m21",&Urho3D::Matrix3::m21_, "todo: var docstring")//float
  .def_readwrite("m22",&Urho3D::Matrix3::m22_, "todo: var docstring")//float
  .def_readonly_static("ZERO",&Urho3D::Matrix3::ZERO, "todo: var docstring")//const Urho3D::Matrix3
  .def_readonly_static("IDENTITY",&Urho3D::Matrix3::IDENTITY, "todo: var docstring")//const Urho3D::Matrix3
;
}

void Implement_Urho3D_EventHandler(py::class_<Urho3D::EventHandler, Urho3D::ExternalPtr<Urho3D::EventHandler>, Urho3D::LinkedListNode>& pyclass_Var_Urho3D_EventHandler)
{
    // Class EventHandler Implementation
pyclass_Var_Urho3D_EventHandler
  //.def(py::init<Urho3D::Object *, void *>(), "todo: constructor docstring")
    // Abstract class EventHandler -> no init
  //.def("~EventHandler", (void (Urho3D::EventHandler::*)()) &Urho3D::EventHandler::~EventHandler, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetSenderAndEventType", (void (Urho3D::EventHandler::*)(Urho3D::Object *, Urho3D::StringHash)) &Urho3D::EventHandler::SetSenderAndEventType, "todo: docstring", py::arg("sender"), py::arg("eventType"))
  .def("Invoke", (void (Urho3D::EventHandler::*)(Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::EventHandler::Invoke, "todo: docstring", py::arg("eventData"))
  .def("Clone", (Urho3D::EventHandler * (Urho3D::EventHandler::*)() const) &Urho3D::EventHandler::Clone, "todo: docstring")
  .def("GetReceiver", (Urho3D::Object * (Urho3D::EventHandler::*)() const) &Urho3D::EventHandler::GetReceiver, "todo: docstring")
  .def("GetSender", (Urho3D::Object * (Urho3D::EventHandler::*)() const) &Urho3D::EventHandler::GetSender, "todo: docstring")
  .def("GetEventType", (const Urho3D::StringHash & (Urho3D::EventHandler::*)() const) &Urho3D::EventHandler::GetEventType, "todo: docstring")
  .def("GetUserData", (void * (Urho3D::EventHandler::*)() const) &Urho3D::EventHandler::GetUserData, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Serializable(py::class_<Urho3D::Serializable, Urho3D::SharedPtr<Urho3D::Serializable>, Urho3D::Object>& pyclass_Var_Urho3D_Serializable)
{
    // Class Serializable Implementation
pyclass_Var_Urho3D_Serializable
  .def("GetType", (Urho3D::StringHash (Urho3D::Serializable::*)() const) &Urho3D::Serializable::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Serializable::*)() const) &Urho3D::Serializable::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Serializable::*)() const) &Urho3D::Serializable::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Serializable", (void (Urho3D::Serializable::*)()) &Urho3D::Serializable::~Serializable, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("OnSetAttribute", (void (Urho3D::Serializable::*)(const Urho3D::AttributeInfo &, const Urho3D::Variant &)) &Urho3D::Serializable::OnSetAttribute, "todo: docstring", py::arg("attr"), py::arg("src"))
    //['Urho3D::AttributeInfo', 'Urho3D::Variant']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("OnGetAttribute", (void (Urho3D::Serializable::*)(const Urho3D::AttributeInfo &, Urho3D::Variant &) const) &Urho3D::Serializable::OnGetAttribute, "todo: docstring", py::arg("attr"), py::arg("dest"))
    //['Urho3D::AttributeInfo', 'Urho3D::Variant']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("GetAttributes", (const Vector<Urho3D::AttributeInfo> * (Urho3D::Serializable::*)() const) &Urho3D::Serializable::GetAttributes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetNetworkAttributes", (const Vector<Urho3D::AttributeInfo> * (Urho3D::Serializable::*)() const) &Urho3D::Serializable::GetNetworkAttributes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("Load", (bool (Urho3D::Serializable::*)(Urho3D::Deserializer &)) &Urho3D::Serializable::Load, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::Serializable::*)(Urho3D::Serializer &) const) &Urho3D::Serializable::Save, "todo: docstring", py::arg("dest"))
  .def("LoadXML", (bool (Urho3D::Serializable::*)(const Urho3D::XMLElement &)) &Urho3D::Serializable::LoadXML, "todo: docstring", py::arg("source"))
  .def("SaveXML", (bool (Urho3D::Serializable::*)(Urho3D::XMLElement &) const) &Urho3D::Serializable::SaveXML, "todo: docstring", py::arg("dest"))
  .def("LoadJSON", (bool (Urho3D::Serializable::*)(const Urho3D::JSONValue &)) &Urho3D::Serializable::LoadJSON, "todo: docstring", py::arg("source"))
  .def("SaveJSON", (bool (Urho3D::Serializable::*)(Urho3D::JSONValue &) const) &Urho3D::Serializable::SaveJSON, "todo: docstring", py::arg("dest"))
  .def("ApplyAttributes", (void (Urho3D::Serializable::*)()) &Urho3D::Serializable::ApplyAttributes, "todo: docstring")
  .def("SaveDefaultAttributes", (bool (Urho3D::Serializable::*)() const) &Urho3D::Serializable::SaveDefaultAttributes, "todo: docstring")
  .def("MarkNetworkUpdate", (void (Urho3D::Serializable::*)()) &Urho3D::Serializable::MarkNetworkUpdate, "todo: docstring")
  .def("SetBasePath", (void (Urho3D::Serializable::*)(const Urho3D::String &)) &Urho3D::Serializable::SetBasePath, "todo: docstring", py::arg("basePath"))
  .def("GetBasePath", (const Urho3D::String & (Urho3D::Serializable::*)() const) &Urho3D::Serializable::GetBasePath, "todo: docstring")
  .def("SetAttribute", (bool (Urho3D::Serializable::*)(unsigned int, const Urho3D::Variant &)) &Urho3D::Serializable::SetAttribute, "todo: docstring", py::arg("index"), py::arg("value"))
  .def("SetAttribute", (bool (Urho3D::Serializable::*)(const Urho3D::String &, const Urho3D::Variant &)) &Urho3D::Serializable::SetAttribute, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetInstanceDefault", (void (Urho3D::Serializable::*)(bool)) &Urho3D::Serializable::SetInstanceDefault, "todo: docstring", py::arg("enable"))
  .def("ResetToDefault", (void (Urho3D::Serializable::*)()) &Urho3D::Serializable::ResetToDefault, "todo: docstring")
  .def("RemoveInstanceDefault", (void (Urho3D::Serializable::*)()) &Urho3D::Serializable::RemoveInstanceDefault, "todo: docstring")
  .def("SetTemporary", (void (Urho3D::Serializable::*)(bool)) &Urho3D::Serializable::SetTemporary, "todo: docstring", py::arg("enable"))
  .def("SetInterceptNetworkUpdate", (void (Urho3D::Serializable::*)(const Urho3D::String &, bool)) &Urho3D::Serializable::SetInterceptNetworkUpdate, "todo: docstring", py::arg("attributeName"), py::arg("enable"))
  .def("AllocateNetworkState", (void (Urho3D::Serializable::*)()) &Urho3D::Serializable::AllocateNetworkState, "todo: docstring")
  .def("WriteInitialDeltaUpdate", (void (Urho3D::Serializable::*)(Urho3D::Serializer &, unsigned char)) &Urho3D::Serializable::WriteInitialDeltaUpdate, "todo: docstring", py::arg("dest"), py::arg("timeStamp"))
  .def("WriteDeltaUpdate", (void (Urho3D::Serializable::*)(Urho3D::Serializer &, const Urho3D::DirtyBits &, unsigned char)) &Urho3D::Serializable::WriteDeltaUpdate, "todo: docstring", py::arg("dest"), py::arg("attributeBits"), py::arg("timeStamp"))
  .def("WriteLatestDataUpdate", (void (Urho3D::Serializable::*)(Urho3D::Serializer &, unsigned char)) &Urho3D::Serializable::WriteLatestDataUpdate, "todo: docstring", py::arg("dest"), py::arg("timeStamp"))
  .def("ReadDeltaUpdate", (bool (Urho3D::Serializable::*)(Urho3D::Deserializer &)) &Urho3D::Serializable::ReadDeltaUpdate, "todo: docstring", py::arg("source"))
  .def("ReadLatestDataUpdate", (bool (Urho3D::Serializable::*)(Urho3D::Deserializer &)) &Urho3D::Serializable::ReadLatestDataUpdate, "todo: docstring", py::arg("source"))
  .def("GetAttribute", (Urho3D::Variant (Urho3D::Serializable::*)(unsigned int) const) &Urho3D::Serializable::GetAttribute, "todo: docstring", py::arg("index"))
  .def("GetAttribute", (Urho3D::Variant (Urho3D::Serializable::*)(const Urho3D::String &) const) &Urho3D::Serializable::GetAttribute, "todo: docstring", py::arg("name"))
  .def("GetAttributeDefault", (Urho3D::Variant (Urho3D::Serializable::*)(unsigned int) const) &Urho3D::Serializable::GetAttributeDefault, "todo: docstring", py::arg("index"))
  .def("GetAttributeDefault", (Urho3D::Variant (Urho3D::Serializable::*)(const Urho3D::String &) const) &Urho3D::Serializable::GetAttributeDefault, "todo: docstring", py::arg("name"))
  .def("GetNumAttributes", (unsigned int (Urho3D::Serializable::*)() const) &Urho3D::Serializable::GetNumAttributes, "todo: docstring")
  .def("GetNumNetworkAttributes", (unsigned int (Urho3D::Serializable::*)() const) &Urho3D::Serializable::GetNumNetworkAttributes, "todo: docstring")
  .def("IsTemporary", (bool (Urho3D::Serializable::*)() const) &Urho3D::Serializable::IsTemporary, "todo: docstring")
  .def("GetInterceptNetworkUpdate", (bool (Urho3D::Serializable::*)(const Urho3D::String &) const) &Urho3D::Serializable::GetInterceptNetworkUpdate, "todo: docstring", py::arg("attributeName"))
  .def("GetNetworkState", (Urho3D::NetworkState * (Urho3D::Serializable::*)() const) &Urho3D::Serializable::GetNetworkState, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_NetworkState(py::class_<Urho3D::NetworkState, Urho3D::ExternalPtr<Urho3D::NetworkState>>& pyclass_Var_Urho3D_NetworkState)
{
    // Class NetworkState Implementation
pyclass_Var_Urho3D_NetworkState
// Class Variables:
  .def_readwrite("currentValues",&Urho3D::NetworkState::currentValues_, "todo: var docstring")//Urho3D::Vector<Urho3D::Variant>
  .def_readwrite("previousValues",&Urho3D::NetworkState::previousValues_, "todo: var docstring")//Urho3D::Vector<Urho3D::Variant>
  .def_readwrite("previousVars",&Urho3D::NetworkState::previousVars_, "todo: var docstring")//Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>
  .def_readwrite("interceptMask",&Urho3D::NetworkState::interceptMask_, "todo: var docstring")//unsigned long long
;
}

void Implement_Urho3D_Animatable(py::class_<Urho3D::Animatable, Urho3D::SharedPtr<Urho3D::Animatable>, Urho3D::Serializable>& pyclass_Var_Urho3D_Animatable)
{
    // Class Animatable Implementation
pyclass_Var_Urho3D_Animatable
  .def("GetType", (Urho3D::StringHash (Urho3D::Animatable::*)() const) &Urho3D::Animatable::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Animatable::*)() const) &Urho3D::Animatable::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Animatable::*)() const) &Urho3D::Animatable::GetTypeInfo, "todo: docstring")
  //.def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
    // Abstract class Animatable -> no init
  //.def("~Animatable", (void (Urho3D::Animatable::*)()) &Urho3D::Animatable::~Animatable, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("LoadXML", (bool (Urho3D::Animatable::*)(const Urho3D::XMLElement &)) &Urho3D::Animatable::LoadXML, "todo: docstring", py::arg("source"))
  .def("SaveXML", (bool (Urho3D::Animatable::*)(Urho3D::XMLElement &) const) &Urho3D::Animatable::SaveXML, "todo: docstring", py::arg("dest"))
  .def("LoadJSON", (bool (Urho3D::Animatable::*)(const Urho3D::JSONValue &)) &Urho3D::Animatable::LoadJSON, "todo: docstring", py::arg("source"))
  .def("SaveJSON", (bool (Urho3D::Animatable::*)(Urho3D::JSONValue &) const) &Urho3D::Animatable::SaveJSON, "todo: docstring", py::arg("dest"))
  .def("SetAnimationEnabled", (void (Urho3D::Animatable::*)(bool)) &Urho3D::Animatable::SetAnimationEnabled, "todo: docstring", py::arg("enable"))
  .def("SetAnimationTime", (void (Urho3D::Animatable::*)(float)) &Urho3D::Animatable::SetAnimationTime, "todo: docstring", py::arg("time"))
  .def("SetObjectAnimation", (void (Urho3D::Animatable::*)(Urho3D::ObjectAnimation *)) &Urho3D::Animatable::SetObjectAnimation, "todo: docstring", py::arg("objectAnimation"))
  .def("SetAttributeAnimation", (void (Urho3D::Animatable::*)(const Urho3D::String &, Urho3D::ValueAnimation *, Urho3D::WrapMode, float)) &Urho3D::Animatable::SetAttributeAnimation, "todo: docstring", py::arg("name"), py::arg("attributeAnimation"), py::arg("wrapMode")=WM_LOOP, py::arg("speed")=1.0f)
  .def("SetAttributeAnimationWrapMode", (void (Urho3D::Animatable::*)(const Urho3D::String &, Urho3D::WrapMode)) &Urho3D::Animatable::SetAttributeAnimationWrapMode, "todo: docstring", py::arg("name"), py::arg("wrapMode"))
  .def("SetAttributeAnimationSpeed", (void (Urho3D::Animatable::*)(const Urho3D::String &, float)) &Urho3D::Animatable::SetAttributeAnimationSpeed, "todo: docstring", py::arg("name"), py::arg("speed"))
  .def("SetAttributeAnimationTime", (void (Urho3D::Animatable::*)(const Urho3D::String &, float)) &Urho3D::Animatable::SetAttributeAnimationTime, "todo: docstring", py::arg("name"), py::arg("time"))
  .def("RemoveObjectAnimation", (void (Urho3D::Animatable::*)()) &Urho3D::Animatable::RemoveObjectAnimation, "todo: docstring")
  .def("RemoveAttributeAnimation", (void (Urho3D::Animatable::*)(const Urho3D::String &)) &Urho3D::Animatable::RemoveAttributeAnimation, "todo: docstring", py::arg("name"))
  .def("GetAnimationEnabled", (bool (Urho3D::Animatable::*)() const) &Urho3D::Animatable::GetAnimationEnabled, "todo: docstring")
  .def("GetObjectAnimation", (Urho3D::ObjectAnimation * (Urho3D::Animatable::*)() const) &Urho3D::Animatable::GetObjectAnimation, "todo: docstring")
  .def("GetAttributeAnimation", (Urho3D::ValueAnimation * (Urho3D::Animatable::*)(const Urho3D::String &) const) &Urho3D::Animatable::GetAttributeAnimation, "todo: docstring", py::arg("name"))
  .def("GetAttributeAnimationWrapMode", (Urho3D::WrapMode (Urho3D::Animatable::*)(const Urho3D::String &) const) &Urho3D::Animatable::GetAttributeAnimationWrapMode, "todo: docstring", py::arg("name"))
  .def("GetAttributeAnimationSpeed", (float (Urho3D::Animatable::*)(const Urho3D::String &) const) &Urho3D::Animatable::GetAttributeAnimationSpeed, "todo: docstring", py::arg("name"))
  .def("GetAttributeAnimationTime", (float (Urho3D::Animatable::*)(const Urho3D::String &) const) &Urho3D::Animatable::GetAttributeAnimationTime, "todo: docstring", py::arg("name"))
  .def("SetObjectAnimationAttr", (void (Urho3D::Animatable::*)(const Urho3D::ResourceRef &)) &Urho3D::Animatable::SetObjectAnimationAttr, "todo: docstring", py::arg("value"))
  .def("GetObjectAnimationAttr", (Urho3D::ResourceRef (Urho3D::Animatable::*)() const) &Urho3D::Animatable::GetObjectAnimationAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Node(py::class_<Urho3D::Node, Urho3D::SharedPtr<Urho3D::Node>, Urho3D::Animatable>& pyclass_Var_Urho3D_Node)
{
    // Class Node Implementation
pyclass_Var_Urho3D_Node
  .def("GetType", (Urho3D::StringHash (Urho3D::Node::*)() const) &Urho3D::Node::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Node::*)() const) &Urho3D::Node::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Node::*)() const) &Urho3D::Node::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Node", (void (Urho3D::Node::*)()) &Urho3D::Node::~Node, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Load", (bool (Urho3D::Node::*)(Urho3D::Deserializer &)) &Urho3D::Node::Load, "todo: docstring", py::arg("source"))
  .def("LoadXML", (bool (Urho3D::Node::*)(const Urho3D::XMLElement &)) &Urho3D::Node::LoadXML, "todo: docstring", py::arg("source"))
  .def("LoadJSON", (bool (Urho3D::Node::*)(const Urho3D::JSONValue &)) &Urho3D::Node::LoadJSON, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::Node::*)(Urho3D::Serializer &) const) &Urho3D::Node::Save, "todo: docstring", py::arg("dest"))
  .def("SaveXML", (bool (Urho3D::Node::*)(Urho3D::XMLElement &) const) &Urho3D::Node::SaveXML, "todo: docstring", py::arg("dest"))
  .def("SaveJSON", (bool (Urho3D::Node::*)(Urho3D::JSONValue &) const) &Urho3D::Node::SaveJSON, "todo: docstring", py::arg("dest"))
  .def("ApplyAttributes", (void (Urho3D::Node::*)()) &Urho3D::Node::ApplyAttributes, "todo: docstring")
  .def("SaveDefaultAttributes", (bool (Urho3D::Node::*)() const) &Urho3D::Node::SaveDefaultAttributes, "todo: docstring")
  .def("MarkNetworkUpdate", (void (Urho3D::Node::*)()) &Urho3D::Node::MarkNetworkUpdate, "todo: docstring")
  .def("AddReplicationState", (void (Urho3D::Node::*)(Urho3D::NodeReplicationState *)) &Urho3D::Node::AddReplicationState, "todo: docstring", py::arg("state"))
  .def("SaveXML", (bool (Urho3D::Node::*)(Urho3D::Serializer &, const Urho3D::String &) const) &Urho3D::Node::SaveXML, "todo: docstring", py::arg("dest"), py::arg("indentation")="\t")
  .def("SaveJSON", (bool (Urho3D::Node::*)(Urho3D::Serializer &, const Urho3D::String &) const) &Urho3D::Node::SaveJSON, "todo: docstring", py::arg("dest"), py::arg("indentation")="\t")
  .def("SetName", (void (Urho3D::Node::*)(const Urho3D::String &)) &Urho3D::Node::SetName, "todo: docstring", py::arg("name"))
  .def("SetBasePath", (void (Urho3D::Node::*)(const Urho3D::String &)) &Urho3D::Node::SetBasePath, "todo: docstring", py::arg("basePath"))
  .def("SetTags", (void (Urho3D::Node::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::Node::SetTags, "todo: docstring", py::arg("tags"))
  .def("AddTag", (void (Urho3D::Node::*)(const Urho3D::String &)) &Urho3D::Node::AddTag, "todo: docstring", py::arg("tag"))
  .def("AddTags", (void (Urho3D::Node::*)(const Urho3D::String &, char)) &Urho3D::Node::AddTags, "todo: docstring", py::arg("tags"), py::arg("separator")=';')
  .def("AddTags", (void (Urho3D::Node::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::Node::AddTags, "todo: docstring", py::arg("tags"))
  .def("RemoveTag", (bool (Urho3D::Node::*)(const Urho3D::String &)) &Urho3D::Node::RemoveTag, "todo: docstring", py::arg("tag"))
  .def("RemoveAllTags", (void (Urho3D::Node::*)()) &Urho3D::Node::RemoveAllTags, "todo: docstring")
  .def("SetPosition", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::SetPosition, "todo: docstring", py::arg("position"))
  .def("SetPosition2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &)) &Urho3D::Node::SetPosition2D, "todo: docstring", py::arg("position"))
  .def("SetPosition2D", (void (Urho3D::Node::*)(float, float)) &Urho3D::Node::SetPosition2D, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetRotation", (void (Urho3D::Node::*)(const Urho3D::Quaternion &)) &Urho3D::Node::SetRotation, "todo: docstring", py::arg("rotation"))
  .def("SetRotation2D", (void (Urho3D::Node::*)(float)) &Urho3D::Node::SetRotation2D, "todo: docstring", py::arg("rotation"))
  .def("SetDirection", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::SetDirection, "todo: docstring", py::arg("direction"))
  .def("SetScale", (void (Urho3D::Node::*)(float)) &Urho3D::Node::SetScale, "todo: docstring", py::arg("scale"))
  .def("SetScale", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::SetScale, "todo: docstring", py::arg("scale"))
  .def("SetScale2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &)) &Urho3D::Node::SetScale2D, "todo: docstring", py::arg("scale"))
  .def("SetScale2D", (void (Urho3D::Node::*)(float, float)) &Urho3D::Node::SetScale2D, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetTransform", (void (Urho3D::Node::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::Node::SetTransform, "todo: docstring", py::arg("position"), py::arg("rotation"))
  .def("SetTransform", (void (Urho3D::Node::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &, float)) &Urho3D::Node::SetTransform, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("scale"))
  .def("SetTransform", (void (Urho3D::Node::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &, const Urho3D::Vector3 &)) &Urho3D::Node::SetTransform, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("scale"))
  .def("SetTransform", (void (Urho3D::Node::*)(const Urho3D::Matrix3x4 &)) &Urho3D::Node::SetTransform, "todo: docstring", py::arg("matrix"))
  .def("SetTransform2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &, float)) &Urho3D::Node::SetTransform2D, "todo: docstring", py::arg("position"), py::arg("rotation"))
  .def("SetTransform2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &, float, float)) &Urho3D::Node::SetTransform2D, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("scale"))
  .def("SetTransform2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &, float, const Urho3D::Vector2 &)) &Urho3D::Node::SetTransform2D, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("scale"))
  .def("SetWorldPosition", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::SetWorldPosition, "todo: docstring", py::arg("position"))
  .def("SetWorldPosition2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &)) &Urho3D::Node::SetWorldPosition2D, "todo: docstring", py::arg("position"))
  .def("SetWorldPosition2D", (void (Urho3D::Node::*)(float, float)) &Urho3D::Node::SetWorldPosition2D, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetWorldRotation", (void (Urho3D::Node::*)(const Urho3D::Quaternion &)) &Urho3D::Node::SetWorldRotation, "todo: docstring", py::arg("rotation"))
  .def("SetWorldRotation2D", (void (Urho3D::Node::*)(float)) &Urho3D::Node::SetWorldRotation2D, "todo: docstring", py::arg("rotation"))
  .def("SetWorldDirection", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::SetWorldDirection, "todo: docstring", py::arg("direction"))
  .def("SetWorldScale", (void (Urho3D::Node::*)(float)) &Urho3D::Node::SetWorldScale, "todo: docstring", py::arg("scale"))
  .def("SetWorldScale", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::SetWorldScale, "todo: docstring", py::arg("scale"))
  .def("SetWorldScale2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &)) &Urho3D::Node::SetWorldScale2D, "todo: docstring", py::arg("scale"))
  .def("SetWorldScale2D", (void (Urho3D::Node::*)(float, float)) &Urho3D::Node::SetWorldScale2D, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetWorldTransform", (void (Urho3D::Node::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::Node::SetWorldTransform, "todo: docstring", py::arg("position"), py::arg("rotation"))
  .def("SetWorldTransform", (void (Urho3D::Node::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &, float)) &Urho3D::Node::SetWorldTransform, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("scale"))
  .def("SetWorldTransform", (void (Urho3D::Node::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &, const Urho3D::Vector3 &)) &Urho3D::Node::SetWorldTransform, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("scale"))
  .def("SetWorldTransform2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &, float)) &Urho3D::Node::SetWorldTransform2D, "todo: docstring", py::arg("position"), py::arg("rotation"))
  .def("SetWorldTransform2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &, float, float)) &Urho3D::Node::SetWorldTransform2D, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("scale"))
  .def("SetWorldTransform2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &, float, const Urho3D::Vector2 &)) &Urho3D::Node::SetWorldTransform2D, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("scale"))
  .def("Translate", (void (Urho3D::Node::*)(const Urho3D::Vector3 &, Urho3D::TransformSpace)) &Urho3D::Node::Translate, "todo: docstring", py::arg("delta"), py::arg("space")=TS_LOCAL)
  .def("Translate2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &, Urho3D::TransformSpace)) &Urho3D::Node::Translate2D, "todo: docstring", py::arg("delta"), py::arg("space")=TS_LOCAL)
  .def("Rotate", (void (Urho3D::Node::*)(const Urho3D::Quaternion &, Urho3D::TransformSpace)) &Urho3D::Node::Rotate, "todo: docstring", py::arg("delta"), py::arg("space")=TS_LOCAL)
  .def("Rotate2D", (void (Urho3D::Node::*)(float, Urho3D::TransformSpace)) &Urho3D::Node::Rotate2D, "todo: docstring", py::arg("delta"), py::arg("space")=TS_LOCAL)
  .def("RotateAround", (void (Urho3D::Node::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &, Urho3D::TransformSpace)) &Urho3D::Node::RotateAround, "todo: docstring", py::arg("point"), py::arg("delta"), py::arg("space")=TS_LOCAL)
  .def("RotateAround2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &, float, Urho3D::TransformSpace)) &Urho3D::Node::RotateAround2D, "todo: docstring", py::arg("point"), py::arg("delta"), py::arg("space")=TS_LOCAL)
  .def("Pitch", (void (Urho3D::Node::*)(float, Urho3D::TransformSpace)) &Urho3D::Node::Pitch, "todo: docstring", py::arg("angle"), py::arg("space")=TS_LOCAL)
  .def("Yaw", (void (Urho3D::Node::*)(float, Urho3D::TransformSpace)) &Urho3D::Node::Yaw, "todo: docstring", py::arg("angle"), py::arg("space")=TS_LOCAL)
  .def("Roll", (void (Urho3D::Node::*)(float, Urho3D::TransformSpace)) &Urho3D::Node::Roll, "todo: docstring", py::arg("angle"), py::arg("space")=TS_LOCAL)
  .def("LookAt", (bool (Urho3D::Node::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, Urho3D::TransformSpace)) &Urho3D::Node::LookAt, "todo: docstring", py::arg("target"), py::arg("up")=Vector3::UP, py::arg("space")=TS_WORLD)
  .def("Scale", (void (Urho3D::Node::*)(float)) &Urho3D::Node::Scale, "todo: docstring", py::arg("scale"))
  .def("Scale", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::Scale, "todo: docstring", py::arg("scale"))
  .def("Scale2D", (void (Urho3D::Node::*)(const Urho3D::Vector2 &)) &Urho3D::Node::Scale2D, "todo: docstring", py::arg("scale"))
  .def("SetEnabled", (void (Urho3D::Node::*)(bool)) &Urho3D::Node::SetEnabled, "todo: docstring", py::arg("enable"))
  .def("SetDeepEnabled", (void (Urho3D::Node::*)(bool)) &Urho3D::Node::SetDeepEnabled, "todo: docstring", py::arg("enable"))
  .def("ResetDeepEnabled", (void (Urho3D::Node::*)()) &Urho3D::Node::ResetDeepEnabled, "todo: docstring")
  .def("SetEnabledRecursive", (void (Urho3D::Node::*)(bool)) &Urho3D::Node::SetEnabledRecursive, "todo: docstring", py::arg("enable"))
  .def("SetOwner", (void (Urho3D::Node::*)(Urho3D::Connection *)) &Urho3D::Node::SetOwner, "todo: docstring", py::arg("owner"))
  .def("MarkDirty", (void (Urho3D::Node::*)()) &Urho3D::Node::MarkDirty, "todo: docstring")
  .def("CreateChild", (Urho3D::Node * (Urho3D::Node::*)(const Urho3D::String &, Urho3D::CreateMode, unsigned int, bool)) &Urho3D::Node::CreateChild, "todo: docstring", py::arg("name")=String::EMPTY, py::arg("mode")=REPLICATED, py::arg("id")=0, py::arg("temporary")=false)
  .def("CreateTemporaryChild", (Urho3D::Node * (Urho3D::Node::*)(const Urho3D::String &, Urho3D::CreateMode, unsigned int)) &Urho3D::Node::CreateTemporaryChild, "todo: docstring", py::arg("name")=String::EMPTY, py::arg("mode")=REPLICATED, py::arg("id")=0)
  .def("AddChild", (void (Urho3D::Node::*)(Urho3D::Node *, unsigned int)) &Urho3D::Node::AddChild, "todo: docstring", py::arg("node"), py::arg("index")=M_MAX_UNSIGNED)
  .def("RemoveChild", (void (Urho3D::Node::*)(Urho3D::Node *)) &Urho3D::Node::RemoveChild, "todo: docstring", py::arg("node"))
  .def("RemoveAllChildren", (void (Urho3D::Node::*)()) &Urho3D::Node::RemoveAllChildren, "todo: docstring")
  .def("RemoveChildren", (void (Urho3D::Node::*)(bool, bool, bool)) &Urho3D::Node::RemoveChildren, "todo: docstring", py::arg("removeReplicated"), py::arg("removeLocal"), py::arg("recursive"))
  .def("CreateComponent", (Urho3D::Component * (Urho3D::Node::*)(Urho3D::StringHash, Urho3D::CreateMode, unsigned int)) &Urho3D::Node::CreateComponent, "todo: docstring", py::arg("type"), py::arg("mode")=REPLICATED, py::arg("id")=0)
  .def("GetOrCreateComponent", (Urho3D::Component * (Urho3D::Node::*)(Urho3D::StringHash, Urho3D::CreateMode, unsigned int)) &Urho3D::Node::GetOrCreateComponent, "todo: docstring", py::arg("type"), py::arg("mode")=REPLICATED, py::arg("id")=0)
  .def("CloneComponent", (Urho3D::Component * (Urho3D::Node::*)(Urho3D::Component *, unsigned int)) &Urho3D::Node::CloneComponent, "todo: docstring", py::arg("component"), py::arg("id")=0)
  .def("CloneComponent", (Urho3D::Component * (Urho3D::Node::*)(Urho3D::Component *, Urho3D::CreateMode, unsigned int)) &Urho3D::Node::CloneComponent, "todo: docstring", py::arg("component"), py::arg("mode"), py::arg("id")=0)
  .def("RemoveComponent", (void (Urho3D::Node::*)(Urho3D::Component *)) &Urho3D::Node::RemoveComponent, "todo: docstring", py::arg("component"))
  .def("RemoveComponent", (void (Urho3D::Node::*)(Urho3D::StringHash)) &Urho3D::Node::RemoveComponent, "todo: docstring", py::arg("type"))
  .def("RemoveComponents", (void (Urho3D::Node::*)(bool, bool)) &Urho3D::Node::RemoveComponents, "todo: docstring", py::arg("removeReplicated"), py::arg("removeLocal"))
  .def("RemoveComponents", (void (Urho3D::Node::*)(Urho3D::StringHash)) &Urho3D::Node::RemoveComponents, "todo: docstring", py::arg("type"))
  .def("RemoveAllComponents", (void (Urho3D::Node::*)()) &Urho3D::Node::RemoveAllComponents, "todo: docstring")
  .def("ReorderComponent", (void (Urho3D::Node::*)(Urho3D::Component *, unsigned int)) &Urho3D::Node::ReorderComponent, "todo: docstring", py::arg("component"), py::arg("index"))
  .def("Clone", (Urho3D::Node * (Urho3D::Node::*)(Urho3D::CreateMode)) &Urho3D::Node::Clone, "todo: docstring", py::arg("mode")=REPLICATED)
  .def("Remove", (void (Urho3D::Node::*)()) &Urho3D::Node::Remove, "todo: docstring")
  .def("SetParent", (void (Urho3D::Node::*)(Urho3D::Node *)) &Urho3D::Node::SetParent, "todo: docstring", py::arg("parent"))
  .def("SetVar", (void (Urho3D::Node::*)(Urho3D::StringHash, const Urho3D::Variant &)) &Urho3D::Node::SetVar, "todo: docstring", py::arg("key"), py::arg("value"))
  .def("AddListener", (void (Urho3D::Node::*)(Urho3D::Component *)) &Urho3D::Node::AddListener, "todo: docstring", py::arg("component"))
  .def("RemoveListener", (void (Urho3D::Node::*)(Urho3D::Component *)) &Urho3D::Node::RemoveListener, "todo: docstring", py::arg("component"))
  .def("GetID", (unsigned int (Urho3D::Node::*)() const) &Urho3D::Node::GetID, "todo: docstring")
  .def("IsReplicated", (bool (Urho3D::Node::*)() const) &Urho3D::Node::IsReplicated, "todo: docstring")
  .def("GetName", (const Urho3D::String & (Urho3D::Node::*)() const) &Urho3D::Node::GetName, "todo: docstring")
  .def("GetNameHash", (Urho3D::StringHash (Urho3D::Node::*)() const) &Urho3D::Node::GetNameHash, "todo: docstring")
  .def("GetBasePath", (const Urho3D::String & (Urho3D::Node::*)() const) &Urho3D::Node::GetBasePath, "todo: docstring")
  .def("GetTags", (const Urho3D::StringVector & (Urho3D::Node::*)() const) &Urho3D::Node::GetTags, "todo: docstring")
  .def("HasTag", (bool (Urho3D::Node::*)(const Urho3D::String &) const) &Urho3D::Node::HasTag, "todo: docstring", py::arg("tag"))
  .def("GetParent", (Urho3D::Node * (Urho3D::Node::*)() const) &Urho3D::Node::GetParent, "todo: docstring")
  .def("GetScene", (Urho3D::Scene * (Urho3D::Node::*)() const) &Urho3D::Node::GetScene, "todo: docstring")
  .def("IsChildOf", (bool (Urho3D::Node::*)(Urho3D::Node *) const) &Urho3D::Node::IsChildOf, "todo: docstring", py::arg("node"))
  .def("IsEnabled", (bool (Urho3D::Node::*)() const) &Urho3D::Node::IsEnabled, "todo: docstring")
  .def("IsEnabledSelf", (bool (Urho3D::Node::*)() const) &Urho3D::Node::IsEnabledSelf, "todo: docstring")
  .def("GetOwner", (Urho3D::Connection * (Urho3D::Node::*)() const) &Urho3D::Node::GetOwner, "todo: docstring")
  .def("GetPosition", (const Urho3D::Vector3 & (Urho3D::Node::*)() const) &Urho3D::Node::GetPosition, "todo: docstring")
  .def("GetPosition2D", (Urho3D::Vector2 (Urho3D::Node::*)() const) &Urho3D::Node::GetPosition2D, "todo: docstring")
  .def("GetRotation", (const Urho3D::Quaternion & (Urho3D::Node::*)() const) &Urho3D::Node::GetRotation, "todo: docstring")
  .def("GetRotation2D", (float (Urho3D::Node::*)() const) &Urho3D::Node::GetRotation2D, "todo: docstring")
  .def("GetDirection", (Urho3D::Vector3 (Urho3D::Node::*)() const) &Urho3D::Node::GetDirection, "todo: docstring")
  .def("GetUp", (Urho3D::Vector3 (Urho3D::Node::*)() const) &Urho3D::Node::GetUp, "todo: docstring")
  .def("GetRight", (Urho3D::Vector3 (Urho3D::Node::*)() const) &Urho3D::Node::GetRight, "todo: docstring")
  .def("GetScale", (const Urho3D::Vector3 & (Urho3D::Node::*)() const) &Urho3D::Node::GetScale, "todo: docstring")
  .def("GetScale2D", (Urho3D::Vector2 (Urho3D::Node::*)() const) &Urho3D::Node::GetScale2D, "todo: docstring")
  .def("GetTransform", (Urho3D::Matrix3x4 (Urho3D::Node::*)() const) &Urho3D::Node::GetTransform, "todo: docstring")
  .def("GetWorldPosition", (Urho3D::Vector3 (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldPosition, "todo: docstring")
  .def("GetWorldPosition2D", (Urho3D::Vector2 (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldPosition2D, "todo: docstring")
  .def("GetWorldRotation", (Urho3D::Quaternion (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldRotation, "todo: docstring")
  .def("GetWorldRotation2D", (float (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldRotation2D, "todo: docstring")
  .def("GetWorldDirection", (Urho3D::Vector3 (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldDirection, "todo: docstring")
  .def("GetWorldUp", (Urho3D::Vector3 (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldUp, "todo: docstring")
  .def("GetWorldRight", (Urho3D::Vector3 (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldRight, "todo: docstring")
  .def("GetWorldScale", (Urho3D::Vector3 (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldScale, "todo: docstring")
  .def("GetSignedWorldScale", (Urho3D::Vector3 (Urho3D::Node::*)() const) &Urho3D::Node::GetSignedWorldScale, "todo: docstring")
  .def("GetWorldScale2D", (Urho3D::Vector2 (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldScale2D, "todo: docstring")
  .def("GetWorldTransform", (const Urho3D::Matrix3x4 & (Urho3D::Node::*)() const) &Urho3D::Node::GetWorldTransform, "todo: docstring")
  .def("LocalToWorld", (Urho3D::Vector3 (Urho3D::Node::*)(const Urho3D::Vector3 &) const) &Urho3D::Node::LocalToWorld, "todo: docstring", py::arg("position"))
  .def("LocalToWorld", (Urho3D::Vector3 (Urho3D::Node::*)(const Urho3D::Vector4 &) const) &Urho3D::Node::LocalToWorld, "todo: docstring", py::arg("vector"))
  .def("LocalToWorld2D", (Urho3D::Vector2 (Urho3D::Node::*)(const Urho3D::Vector2 &) const) &Urho3D::Node::LocalToWorld2D, "todo: docstring", py::arg("vector"))
  .def("WorldToLocal", (Urho3D::Vector3 (Urho3D::Node::*)(const Urho3D::Vector3 &) const) &Urho3D::Node::WorldToLocal, "todo: docstring", py::arg("position"))
  .def("WorldToLocal", (Urho3D::Vector3 (Urho3D::Node::*)(const Urho3D::Vector4 &) const) &Urho3D::Node::WorldToLocal, "todo: docstring", py::arg("vector"))
  .def("WorldToLocal2D", (Urho3D::Vector2 (Urho3D::Node::*)(const Urho3D::Vector2 &) const) &Urho3D::Node::WorldToLocal2D, "todo: docstring", py::arg("vector"))
  .def("IsDirty", (bool (Urho3D::Node::*)() const) &Urho3D::Node::IsDirty, "todo: docstring")
  .def("GetNumChildren", (unsigned int (Urho3D::Node::*)(bool) const) &Urho3D::Node::GetNumChildren, "todo: docstring", py::arg("recursive")=false)
  //.def("GetChildren", (const Vector<SharedPtr<Urho3D::Node> > & (Urho3D::Node::*)() const) &Urho3D::Node::GetChildren, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetChildren", (void (Urho3D::Node::*)(Urho3D::PODVector<Urho3D::Node *> &, bool) const) &Urho3D::Node::GetChildren, "todo: docstring", py::arg("dest"), py::arg("recursive")=false)
    //['Urho3D::PODVector<Urho3D::Node', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetChildren", (PODVector<Urho3D::Node *> (Urho3D::Node::*)(bool) const) &Urho3D::Node::GetChildren, "todo: docstring", py::arg("recursive"))
    //['bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetChildrenWithComponent", (void (Urho3D::Node::*)(Urho3D::PODVector<Urho3D::Node *> &, Urho3D::StringHash, bool) const) &Urho3D::Node::GetChildrenWithComponent, "todo: docstring", py::arg("dest"), py::arg("type"), py::arg("recursive")=false)
    //['Urho3D::PODVector<Urho3D::Node', 'Urho3D::StringHash', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetChildrenWithComponent", (PODVector<Urho3D::Node *> (Urho3D::Node::*)(Urho3D::StringHash, bool) const) &Urho3D::Node::GetChildrenWithComponent, "todo: docstring", py::arg("type"), py::arg("recursive")=false)
    //['Urho3D::StringHash', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetChildrenWithTag", (void (Urho3D::Node::*)(Urho3D::PODVector<Urho3D::Node *> &, const Urho3D::String &, bool) const) &Urho3D::Node::GetChildrenWithTag, "todo: docstring", py::arg("dest"), py::arg("tag"), py::arg("recursive")=false)
    //['Urho3D::PODVector<Urho3D::Node', 'Urho3D::String', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetChildrenWithTag", (PODVector<Urho3D::Node *> (Urho3D::Node::*)(const Urho3D::String &, bool) const) &Urho3D::Node::GetChildrenWithTag, "todo: docstring", py::arg("tag"), py::arg("recursive")=false)
    //['Urho3D::String', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetChild", (Urho3D::Node * (Urho3D::Node::*)(unsigned int) const) &Urho3D::Node::GetChild, "todo: docstring", py::arg("index"))
  .def("GetChild", (Urho3D::Node * (Urho3D::Node::*)(const Urho3D::String &, bool) const) &Urho3D::Node::GetChild, "todo: docstring", py::arg("name"), py::arg("recursive")=false)
  .def("GetChild", (Urho3D::Node * (Urho3D::Node::*)(const char *, bool) const) &Urho3D::Node::GetChild, "todo: docstring", py::arg("name"), py::arg("recursive")=false)
  .def("GetChild", (Urho3D::Node * (Urho3D::Node::*)(Urho3D::StringHash, bool) const) &Urho3D::Node::GetChild, "todo: docstring", py::arg("nameHash"), py::arg("recursive")=false)
  .def("GetNumComponents", (unsigned int (Urho3D::Node::*)() const) &Urho3D::Node::GetNumComponents, "todo: docstring")
  .def("GetNumNetworkComponents", (unsigned int (Urho3D::Node::*)() const) &Urho3D::Node::GetNumNetworkComponents, "todo: docstring")
  //.def("GetComponents", (const Vector<SharedPtr<Urho3D::Component> > & (Urho3D::Node::*)() const) &Urho3D::Node::GetComponents, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetComponents", (void (Urho3D::Node::*)(Urho3D::PODVector<Urho3D::Component *> &, Urho3D::StringHash, bool) const) &Urho3D::Node::GetComponents, "todo: docstring", py::arg("dest"), py::arg("type"), py::arg("recursive")=false)
    //['Urho3D::PODVector<Urho3D::Component', 'Urho3D::StringHash', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetComponent", (Urho3D::Component * (Urho3D::Node::*)(Urho3D::StringHash, bool) const) &Urho3D::Node::GetComponent, "todo: docstring", py::arg("type"), py::arg("recursive")=false)
  .def("GetParentComponent", (Urho3D::Component * (Urho3D::Node::*)(Urho3D::StringHash, bool) const) &Urho3D::Node::GetParentComponent, "todo: docstring", py::arg("type"), py::arg("fullTraversal")=false)
  .def("HasComponent", (bool (Urho3D::Node::*)(Urho3D::StringHash) const) &Urho3D::Node::HasComponent, "todo: docstring", py::arg("type"))
  //.def("GetListeners", (const Vector<WeakPtr<Urho3D::Component> > (Urho3D::Node::*)() const) &Urho3D::Node::GetListeners, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetVar", (const Urho3D::Variant & (Urho3D::Node::*)(Urho3D::StringHash) const) &Urho3D::Node::GetVar, "todo: docstring", py::arg("key"))
  .def("GetVars", (const Urho3D::VariantMap & (Urho3D::Node::*)() const) &Urho3D::Node::GetVars, "todo: docstring")
  .def("SetID", (void (Urho3D::Node::*)(unsigned int)) &Urho3D::Node::SetID, "todo: docstring", py::arg("id"))
  .def("SetScene", (void (Urho3D::Node::*)(Urho3D::Scene *)) &Urho3D::Node::SetScene, "todo: docstring", py::arg("scene"))
  .def("ResetScene", (void (Urho3D::Node::*)()) &Urho3D::Node::ResetScene, "todo: docstring")
  .def("SetNetPositionAttr", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::SetNetPositionAttr, "todo: docstring", py::arg("value"))
  .def("SetNetRotationAttr", (void (Urho3D::Node::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::Node::SetNetRotationAttr, "todo: docstring", py::arg("value"))
  .def("SetNetParentAttr", (void (Urho3D::Node::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::Node::SetNetParentAttr, "todo: docstring", py::arg("value"))
  .def("GetNetPositionAttr", (const Urho3D::Vector3 & (Urho3D::Node::*)() const) &Urho3D::Node::GetNetPositionAttr, "todo: docstring")
  //.def("GetNetRotationAttr", (const PODVector<unsigned char> & (Urho3D::Node::*)() const) &Urho3D::Node::GetNetRotationAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetNetParentAttr", (const PODVector<unsigned char> & (Urho3D::Node::*)() const) &Urho3D::Node::GetNetParentAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("Load", (bool (Urho3D::Node::*)(Urho3D::Deserializer &, Urho3D::SceneResolver &, bool, bool, Urho3D::CreateMode)) &Urho3D::Node::Load, "todo: docstring", py::arg("source"), py::arg("resolver"), py::arg("loadChildren")=true, py::arg("rewriteIDs")=false, py::arg("mode")=REPLICATED)
  .def("LoadXML", (bool (Urho3D::Node::*)(const Urho3D::XMLElement &, Urho3D::SceneResolver &, bool, bool, Urho3D::CreateMode)) &Urho3D::Node::LoadXML, "todo: docstring", py::arg("source"), py::arg("resolver"), py::arg("loadChildren")=true, py::arg("rewriteIDs")=false, py::arg("mode")=REPLICATED)
  .def("LoadJSON", (bool (Urho3D::Node::*)(const Urho3D::JSONValue &, Urho3D::SceneResolver &, bool, bool, Urho3D::CreateMode)) &Urho3D::Node::LoadJSON, "todo: docstring", py::arg("source"), py::arg("resolver"), py::arg("loadChildren")=true, py::arg("rewriteIDs")=false, py::arg("mode")=REPLICATED)
  //.def("GetDependencyNodes", (const PODVector<Urho3D::Node *> & (Urho3D::Node::*)() const) &Urho3D::Node::GetDependencyNodes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("PrepareNetworkUpdate", (void (Urho3D::Node::*)()) &Urho3D::Node::PrepareNetworkUpdate, "todo: docstring")
  .def("CleanupConnection", (void (Urho3D::Node::*)(Urho3D::Connection *)) &Urho3D::Node::CleanupConnection, "todo: docstring", py::arg("connection"))
  .def("MarkReplicationDirty", (void (Urho3D::Node::*)()) &Urho3D::Node::MarkReplicationDirty, "todo: docstring")
  .def("CreateChild", (Urho3D::Node * (Urho3D::Node::*)(unsigned int, Urho3D::CreateMode, bool)) &Urho3D::Node::CreateChild, "todo: docstring", py::arg("id"), py::arg("mode"), py::arg("temporary")=false)
  .def("AddComponent", (void (Urho3D::Node::*)(Urho3D::Component *, unsigned int, Urho3D::CreateMode)) &Urho3D::Node::AddComponent, "todo: docstring", py::arg("component"), py::arg("id"), py::arg("mode"))
  .def("GetNumPersistentChildren", (unsigned int (Urho3D::Node::*)() const) &Urho3D::Node::GetNumPersistentChildren, "todo: docstring")
  .def("GetNumPersistentComponents", (unsigned int (Urho3D::Node::*)() const) &Urho3D::Node::GetNumPersistentComponents, "todo: docstring")
  .def("SetPositionSilent", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::SetPositionSilent, "todo: docstring", py::arg("position"))
  .def("SetRotationSilent", (void (Urho3D::Node::*)(const Urho3D::Quaternion &)) &Urho3D::Node::SetRotationSilent, "todo: docstring", py::arg("rotation"))
  .def("SetScaleSilent", (void (Urho3D::Node::*)(const Urho3D::Vector3 &)) &Urho3D::Node::SetScaleSilent, "todo: docstring", py::arg("scale"))
  .def("SetTransformSilent", (void (Urho3D::Node::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &, const Urho3D::Vector3 &)) &Urho3D::Node::SetTransformSilent, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("scale"))
// Class Variables:
;
}

void Implement_Urho3D_Frustum(py::class_<Urho3D::Frustum, Urho3D::ExternalPtr<Urho3D::Frustum>>& pyclass_Var_Urho3D_Frustum)
{
    // Class Frustum Implementation
pyclass_Var_Urho3D_Frustum
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Frustum &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Frustum(), "todo: docstring").def("__assign__", (Urho3D::Frustum & (Urho3D::Frustum::*)(const Urho3D::Frustum &)) &Urho3D::Frustum::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Frustum']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Define", (void (Urho3D::Frustum::*)(float, float, float, float, float, const Urho3D::Matrix3x4 &)) &Urho3D::Frustum::Define, "todo: docstring", py::arg("fov"), py::arg("aspectRatio"), py::arg("zoom"), py::arg("nearZ"), py::arg("farZ"), py::arg("transform")=Matrix3x4::IDENTITY)
  .def("Define", (void (Urho3D::Frustum::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Matrix3x4 &)) &Urho3D::Frustum::Define, "todo: docstring", py::arg("near"), py::arg("far"), py::arg("transform")=Matrix3x4::IDENTITY)
  .def("Define", (void (Urho3D::Frustum::*)(const Urho3D::BoundingBox &, const Urho3D::Matrix3x4 &)) &Urho3D::Frustum::Define, "todo: docstring", py::arg("box"), py::arg("transform")=Matrix3x4::IDENTITY)
  .def("Define", (void (Urho3D::Frustum::*)(const Urho3D::Matrix4 &)) &Urho3D::Frustum::Define, "todo: docstring", py::arg("projection"))
  .def("DefineOrtho", (void (Urho3D::Frustum::*)(float, float, float, float, float, const Urho3D::Matrix3x4 &)) &Urho3D::Frustum::DefineOrtho, "todo: docstring", py::arg("orthoSize"), py::arg("aspectRatio"), py::arg("zoom"), py::arg("nearZ"), py::arg("farZ"), py::arg("transform")=Matrix3x4::IDENTITY)
  .def("DefineSplit", (void (Urho3D::Frustum::*)(const Urho3D::Matrix4 &, float, float)) &Urho3D::Frustum::DefineSplit, "todo: docstring", py::arg("projection"), py::arg("near"), py::arg("far"))
  .def("Transform", (void (Urho3D::Frustum::*)(const Urho3D::Matrix3 &)) &Urho3D::Frustum::Transform, "todo: docstring", py::arg("transform"))
  .def("Transform", (void (Urho3D::Frustum::*)(const Urho3D::Matrix3x4 &)) &Urho3D::Frustum::Transform, "todo: docstring", py::arg("transform"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::Frustum::*)(const Urho3D::Vector3 &) const) &Urho3D::Frustum::IsInside, "todo: docstring", py::arg("point"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::Frustum::*)(const Urho3D::Sphere &) const) &Urho3D::Frustum::IsInside, "todo: docstring", py::arg("sphere"))
  .def("IsInsideFast", (Urho3D::Intersection (Urho3D::Frustum::*)(const Urho3D::Sphere &) const) &Urho3D::Frustum::IsInsideFast, "todo: docstring", py::arg("sphere"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::Frustum::*)(const Urho3D::BoundingBox &) const) &Urho3D::Frustum::IsInside, "todo: docstring", py::arg("box"))
  .def("IsInsideFast", (Urho3D::Intersection (Urho3D::Frustum::*)(const Urho3D::BoundingBox &) const) &Urho3D::Frustum::IsInsideFast, "todo: docstring", py::arg("box"))
  .def("Distance", (float (Urho3D::Frustum::*)(const Urho3D::Vector3 &) const) &Urho3D::Frustum::Distance, "todo: docstring", py::arg("point"))
  .def("Transformed", (Urho3D::Frustum (Urho3D::Frustum::*)(const Urho3D::Matrix3 &) const) &Urho3D::Frustum::Transformed, "todo: docstring", py::arg("transform"))
  .def("Transformed", (Urho3D::Frustum (Urho3D::Frustum::*)(const Urho3D::Matrix3x4 &) const) &Urho3D::Frustum::Transformed, "todo: docstring", py::arg("transform"))
  .def("Projected", (Urho3D::Rect (Urho3D::Frustum::*)(const Urho3D::Matrix4 &) const) &Urho3D::Frustum::Projected, "todo: docstring", py::arg("projection"))
  .def("UpdatePlanes", (void (Urho3D::Frustum::*)()) &Urho3D::Frustum::UpdatePlanes, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_RayOctreeQuery(py::class_<Urho3D::RayOctreeQuery, Urho3D::ExternalPtr<Urho3D::RayOctreeQuery>>& pyclass_Var_Urho3D_RayOctreeQuery)
{
    // Class RayOctreeQuery Implementation
pyclass_Var_Urho3D_RayOctreeQuery
  //.def(py::init<Urho3D::PODVector<Urho3D::RayQueryResult> &, const Urho3D::Ray &, Urho3D::RayQueryLevel, float, unsigned char, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::PODVector<Urho3D::RayQueryResult>', 'Urho3D::Ray', 'Urho3D::RayQueryLevel', 'float', 'unsigned char', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def(py::init<const Urho3D::RayOctreeQuery &>(), "todo: constructor docstring")
    //['Urho3D::RayOctreeQuery']; op False, ctor True, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::RayOctreeQuery(), "todo: docstring").def("__assign__", (Urho3D::RayOctreeQuery & (Urho3D::RayOctreeQuery::*)(const Urho3D::RayOctreeQuery &)) &Urho3D::RayOctreeQuery::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::RayOctreeQuery']; op =, ctor False, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("ray",&Urho3D::RayOctreeQuery::ray_, "todo: var docstring")//Urho3D::Ray
  .def_readwrite("drawableFlags",&Urho3D::RayOctreeQuery::drawableFlags_, "todo: var docstring")//unsigned char
  .def_readwrite("viewMask",&Urho3D::RayOctreeQuery::viewMask_, "todo: var docstring")//unsigned int
  .def_readwrite("maxDistance",&Urho3D::RayOctreeQuery::maxDistance_, "todo: var docstring")//float
  .def_readwrite("level",&Urho3D::RayOctreeQuery::level_, "todo: var docstring")//Urho3D::RayQueryLevel
;
}

void Implement_Urho3D_Timer(py::class_<Urho3D::Timer, Urho3D::ExternalPtr<Urho3D::Timer>>& pyclass_Var_Urho3D_Timer)
{
    // Class Timer Implementation
pyclass_Var_Urho3D_Timer
  .def(py::init<>(), "todo: constructor docstring")
  .def("GetMSec", (unsigned int (Urho3D::Timer::*)(bool)) &Urho3D::Timer::GetMSec, "todo: docstring", py::arg("reset"))
  .def("Reset", (void (Urho3D::Timer::*)()) &Urho3D::Timer::Reset, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Log(py::class_<Urho3D::Log, Urho3D::SharedPtr<Urho3D::Log>, Urho3D::Object>& pyclass_Var_Urho3D_Log)
{
    // Class Log Implementation
pyclass_Var_Urho3D_Log
  .def("GetType", (Urho3D::StringHash (Urho3D::Log::*)() const) &Urho3D::Log::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Log::*)() const) &Urho3D::Log::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Log::*)() const) &Urho3D::Log::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Log", (void (Urho3D::Log::*)()) &Urho3D::Log::~Log, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Open", (void (Urho3D::Log::*)(const Urho3D::String &)) &Urho3D::Log::Open, "todo: docstring", py::arg("fileName"))
  .def("Close", (void (Urho3D::Log::*)()) &Urho3D::Log::Close, "todo: docstring")
  .def("SetLevel", (void (Urho3D::Log::*)(int)) &Urho3D::Log::SetLevel, "todo: docstring", py::arg("level"))
  .def("SetTimeStamp", (void (Urho3D::Log::*)(bool)) &Urho3D::Log::SetTimeStamp, "todo: docstring", py::arg("enable"))
  .def("SetQuiet", (void (Urho3D::Log::*)(bool)) &Urho3D::Log::SetQuiet, "todo: docstring", py::arg("quiet"))
  .def("GetLevel", (int (Urho3D::Log::*)() const) &Urho3D::Log::GetLevel, "todo: docstring")
  .def("GetTimeStamp", (bool (Urho3D::Log::*)() const) &Urho3D::Log::GetTimeStamp, "todo: docstring")
  .def("GetLastMessage", (Urho3D::String (Urho3D::Log::*)() const) &Urho3D::Log::GetLastMessage, "todo: docstring")
  .def("IsQuiet", (bool (Urho3D::Log::*)() const) &Urho3D::Log::IsQuiet, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_CascadeParameters(py::class_<Urho3D::CascadeParameters, Urho3D::ExternalPtr<Urho3D::CascadeParameters>>& pyclass_Var_Urho3D_CascadeParameters)
{
    // Class CascadeParameters Implementation
pyclass_Var_Urho3D_CascadeParameters
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<float, float, float, float, float, float>(), "todo: constructor docstring")
  .def("Validate", (void (Urho3D::CascadeParameters::*)()) &Urho3D::CascadeParameters::Validate, "todo: docstring")
  .def("GetShadowRange", (float (Urho3D::CascadeParameters::*)() const) &Urho3D::CascadeParameters::GetShadowRange, "todo: docstring")
// Class Variables:
  .def_readwrite("splits",&Urho3D::CascadeParameters::splits_, "todo: var docstring")//Urho3D::Vector4
  .def_readwrite("fadeStart",&Urho3D::CascadeParameters::fadeStart_, "todo: var docstring")//float
  .def_readwrite("biasAutoAdjust",&Urho3D::CascadeParameters::biasAutoAdjust_, "todo: var docstring")//float
;
}

void Implement_Urho3D_UIElement(py::class_<Urho3D::UIElement, Urho3D::SharedPtr<Urho3D::UIElement>, Urho3D::Animatable>& pyclass_Var_Urho3D_UIElement)
{
    // Class UIElement Implementation
pyclass_Var_Urho3D_UIElement
  .def("GetType", (Urho3D::StringHash (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~UIElement", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::~UIElement, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::ApplyAttributes, "todo: docstring")
  .def("LoadXML", (bool (Urho3D::UIElement::*)(const Urho3D::XMLElement &)) &Urho3D::UIElement::LoadXML, "todo: docstring", py::arg("source"))
  .def("LoadXML", (bool (Urho3D::UIElement::*)(const Urho3D::XMLElement &, Urho3D::XMLFile *)) &Urho3D::UIElement::LoadXML, "todo: docstring", py::arg("source"), py::arg("styleFile"))
  .def("LoadChildXML", (Urho3D::UIElement * (Urho3D::UIElement::*)(const Urho3D::XMLElement &, Urho3D::XMLFile *)) &Urho3D::UIElement::LoadChildXML, "todo: docstring", py::arg("childElem"), py::arg("styleFile"))
  .def("SaveXML", (bool (Urho3D::UIElement::*)(Urho3D::XMLElement &) const) &Urho3D::UIElement::SaveXML, "todo: docstring", py::arg("dest"))
  .def("Update", (void (Urho3D::UIElement::*)(float)) &Urho3D::UIElement::Update, "todo: docstring", py::arg("timeStep"))
  .def("IsWithinScissor", (bool (Urho3D::UIElement::*)(const Urho3D::IntRect &)) &Urho3D::UIElement::IsWithinScissor, "todo: docstring", py::arg("currentScissor"))
  .def("GetScreenPosition", (const Urho3D::IntVector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetScreenPosition, "todo: docstring")
  //.def("GetBatches", (void (Urho3D::UIElement::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::UIElement::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("GetDebugDrawBatches", (void (Urho3D::UIElement::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::UIElement::GetDebugDrawBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnHover", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::UIElement::OnHover, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnClickBegin", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *)) &Urho3D::UIElement::OnClickBegin, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnClickEnd", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *, Urho3D::UIElement *)) &Urho3D::UIElement::OnClickEnd, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"), py::arg("beginElement"))
  .def("OnDoubleClick", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *)) &Urho3D::UIElement::OnDoubleClick, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragBegin", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::UIElement::OnDragBegin, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragMove", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::UIElement::OnDragMove, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("deltaPos"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragEnd", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::UIElement::OnDragEnd, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("dragButtons"), py::arg("releaseButton"), py::arg("cursor"))
  .def("OnDragCancel", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::UIElement::OnDragCancel, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("dragButtons"), py::arg("cancelButton"), py::arg("cursor"))
  .def("OnDragDropTest", (bool (Urho3D::UIElement::*)(Urho3D::UIElement *)) &Urho3D::UIElement::OnDragDropTest, "todo: docstring", py::arg("source"))
  .def("OnDragDropFinish", (bool (Urho3D::UIElement::*)(Urho3D::UIElement *)) &Urho3D::UIElement::OnDragDropFinish, "todo: docstring", py::arg("source"))
  //.def("OnWheel", (void (Urho3D::UIElement::*)(int, Urho3D::FlagSet<Urho3D::MouseButton, void>, Urho3D::FlagSet<Urho3D::Qualifier, void>)) &Urho3D::UIElement::OnWheel, "todo: docstring", py::arg("delta"), py::arg("buttons"), py::arg("qualifiers"))
    //['int', 'Urho3D::FlagSet<Urho3D::MouseButton, void>', 'Urho3D::FlagSet<Urho3D::Qualifier, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("OnKey", (void (Urho3D::UIElement::*)(Urho3D::Key, Urho3D::FlagSet<Urho3D::MouseButton, void>, Urho3D::FlagSet<Urho3D::Qualifier, void>)) &Urho3D::UIElement::OnKey, "todo: docstring", py::arg("key"), py::arg("buttons"), py::arg("qualifiers"))
    //['Urho3D::Key', 'Urho3D::FlagSet<Urho3D::MouseButton, void>', 'Urho3D::FlagSet<Urho3D::Qualifier, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnTextInput", (void (Urho3D::UIElement::*)(const Urho3D::String &)) &Urho3D::UIElement::OnTextInput, "todo: docstring", py::arg("text"))
  .def("OnResize", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::UIElement::OnResize, "todo: docstring", py::arg("newSize"), py::arg("delta"))
  .def("OnPositionSet", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::OnPositionSet, "todo: docstring", py::arg("newPosition"))
  .def("OnSetEditable", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::OnSetEditable, "todo: docstring")
  .def("OnIndentSet", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::OnIndentSet, "todo: docstring")
  .def("ScreenToElement", (Urho3D::IntVector2 (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::ScreenToElement, "todo: docstring", py::arg("screenPosition"))
  .def("ElementToScreen", (Urho3D::IntVector2 (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::ElementToScreen, "todo: docstring", py::arg("position"))
  .def("IsWheelHandler", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsWheelHandler, "todo: docstring")
  .def("LoadXML", (bool (Urho3D::UIElement::*)(Urho3D::Deserializer &)) &Urho3D::UIElement::LoadXML, "todo: docstring", py::arg("source"))
  .def("SaveXML", (bool (Urho3D::UIElement::*)(Urho3D::Serializer &, const Urho3D::String &) const) &Urho3D::UIElement::SaveXML, "todo: docstring", py::arg("dest"), py::arg("indentation")="\t")
  .def("FilterAttributes", (bool (Urho3D::UIElement::*)(Urho3D::XMLElement &) const) &Urho3D::UIElement::FilterAttributes, "todo: docstring", py::arg("dest"))
  .def("SetName", (void (Urho3D::UIElement::*)(const Urho3D::String &)) &Urho3D::UIElement::SetName, "todo: docstring", py::arg("name"))
  .def("SetPosition", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::SetPosition, "todo: docstring", py::arg("position"))
  .def("SetPosition", (void (Urho3D::UIElement::*)(int, int)) &Urho3D::UIElement::SetPosition, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetSize", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::SetSize, "todo: docstring", py::arg("size"))
  .def("SetSize", (void (Urho3D::UIElement::*)(int, int)) &Urho3D::UIElement::SetSize, "todo: docstring", py::arg("width"), py::arg("height"))
  .def("SetWidth", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetWidth, "todo: docstring", py::arg("width"))
  .def("SetHeight", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetHeight, "todo: docstring", py::arg("height"))
  .def("SetMinSize", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::SetMinSize, "todo: docstring", py::arg("minSize"))
  .def("SetMinSize", (void (Urho3D::UIElement::*)(int, int)) &Urho3D::UIElement::SetMinSize, "todo: docstring", py::arg("width"), py::arg("height"))
  .def("SetMinWidth", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetMinWidth, "todo: docstring", py::arg("width"))
  .def("SetMinHeight", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetMinHeight, "todo: docstring", py::arg("height"))
  .def("SetMaxSize", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::SetMaxSize, "todo: docstring", py::arg("maxSize"))
  .def("SetMaxSize", (void (Urho3D::UIElement::*)(int, int)) &Urho3D::UIElement::SetMaxSize, "todo: docstring", py::arg("width"), py::arg("height"))
  .def("SetMaxWidth", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetMaxWidth, "todo: docstring", py::arg("width"))
  .def("SetMaxHeight", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetMaxHeight, "todo: docstring", py::arg("height"))
  .def("SetFixedSize", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::SetFixedSize, "todo: docstring", py::arg("size"))
  .def("SetFixedSize", (void (Urho3D::UIElement::*)(int, int)) &Urho3D::UIElement::SetFixedSize, "todo: docstring", py::arg("width"), py::arg("height"))
  .def("SetFixedWidth", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetFixedWidth, "todo: docstring", py::arg("width"))
  .def("SetFixedHeight", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetFixedHeight, "todo: docstring", py::arg("height"))
  .def("SetAlignment", (void (Urho3D::UIElement::*)(Urho3D::HorizontalAlignment, Urho3D::VerticalAlignment)) &Urho3D::UIElement::SetAlignment, "todo: docstring", py::arg("hAlign"), py::arg("vAlign"))
  .def("SetHorizontalAlignment", (void (Urho3D::UIElement::*)(Urho3D::HorizontalAlignment)) &Urho3D::UIElement::SetHorizontalAlignment, "todo: docstring", py::arg("align"))
  .def("SetVerticalAlignment", (void (Urho3D::UIElement::*)(Urho3D::VerticalAlignment)) &Urho3D::UIElement::SetVerticalAlignment, "todo: docstring", py::arg("align"))
  .def("SetEnableAnchor", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetEnableAnchor, "todo: docstring", py::arg("enable"))
  .def("SetMinAnchor", (void (Urho3D::UIElement::*)(const Urho3D::Vector2 &)) &Urho3D::UIElement::SetMinAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetMinAnchor", (void (Urho3D::UIElement::*)(float, float)) &Urho3D::UIElement::SetMinAnchor, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetMaxAnchor", (void (Urho3D::UIElement::*)(const Urho3D::Vector2 &)) &Urho3D::UIElement::SetMaxAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetMaxAnchor", (void (Urho3D::UIElement::*)(float, float)) &Urho3D::UIElement::SetMaxAnchor, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetMinOffset", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::SetMinOffset, "todo: docstring", py::arg("offset"))
  .def("SetMaxOffset", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::SetMaxOffset, "todo: docstring", py::arg("offset"))
  .def("SetPivot", (void (Urho3D::UIElement::*)(const Urho3D::Vector2 &)) &Urho3D::UIElement::SetPivot, "todo: docstring", py::arg("pivot"))
  .def("SetPivot", (void (Urho3D::UIElement::*)(float, float)) &Urho3D::UIElement::SetPivot, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetClipBorder", (void (Urho3D::UIElement::*)(const Urho3D::IntRect &)) &Urho3D::UIElement::SetClipBorder, "todo: docstring", py::arg("rect"))
  .def("SetColor", (void (Urho3D::UIElement::*)(const Urho3D::Color &)) &Urho3D::UIElement::SetColor, "todo: docstring", py::arg("color"))
  .def("SetColor", (void (Urho3D::UIElement::*)(Urho3D::Corner, const Urho3D::Color &)) &Urho3D::UIElement::SetColor, "todo: docstring", py::arg("corner"), py::arg("color"))
  .def("SetPriority", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetPriority, "todo: docstring", py::arg("priority"))
  .def("SetOpacity", (void (Urho3D::UIElement::*)(float)) &Urho3D::UIElement::SetOpacity, "todo: docstring", py::arg("opacity"))
  .def("SetBringToFront", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetBringToFront, "todo: docstring", py::arg("enable"))
  .def("SetBringToBack", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetBringToBack, "todo: docstring", py::arg("enable"))
  .def("SetClipChildren", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetClipChildren, "todo: docstring", py::arg("enable"))
  .def("SetSortChildren", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetSortChildren, "todo: docstring", py::arg("enable"))
  .def("SetUseDerivedOpacity", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetUseDerivedOpacity, "todo: docstring", py::arg("enable"))
  .def("SetEnabled", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetEnabled, "todo: docstring", py::arg("enable"))
  .def("SetDeepEnabled", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetDeepEnabled, "todo: docstring", py::arg("enable"))
  .def("ResetDeepEnabled", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::ResetDeepEnabled, "todo: docstring")
  .def("SetEnabledRecursive", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetEnabledRecursive, "todo: docstring", py::arg("enable"))
  .def("SetEditable", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetEditable, "todo: docstring", py::arg("enable"))
  .def("SetFocus", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetFocus, "todo: docstring", py::arg("enable"))
  .def("SetSelected", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetSelected, "todo: docstring", py::arg("enable"))
  .def("SetVisible", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetVisible, "todo: docstring", py::arg("enable"))
  .def("SetFocusMode", (void (Urho3D::UIElement::*)(Urho3D::FocusMode)) &Urho3D::UIElement::SetFocusMode, "todo: docstring", py::arg("mode"))
  //.def("SetDragDropMode", (void (Urho3D::UIElement::*)(Urho3D::FlagSet<Urho3D::DragAndDropMode, void>)) &Urho3D::UIElement::SetDragDropMode, "todo: docstring", py::arg("mode"))
    //['Urho3D::FlagSet<Urho3D::DragAndDropMode, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetStyle", (bool (Urho3D::UIElement::*)(const Urho3D::String &, Urho3D::XMLFile *)) &Urho3D::UIElement::SetStyle, "todo: docstring", py::arg("styleName"), py::arg("file")=nullptr)
  .def("SetStyle", (bool (Urho3D::UIElement::*)(const Urho3D::XMLElement &)) &Urho3D::UIElement::SetStyle, "todo: docstring", py::arg("element"))
  .def("SetStyleAuto", (bool (Urho3D::UIElement::*)(Urho3D::XMLFile *)) &Urho3D::UIElement::SetStyleAuto, "todo: docstring", py::arg("file")=nullptr)
  .def("SetDefaultStyle", (void (Urho3D::UIElement::*)(Urho3D::XMLFile *)) &Urho3D::UIElement::SetDefaultStyle, "todo: docstring", py::arg("style"))
  .def("SetLayout", (void (Urho3D::UIElement::*)(Urho3D::LayoutMode, int, const Urho3D::IntRect &)) &Urho3D::UIElement::SetLayout, "todo: docstring", py::arg("mode"), py::arg("spacing")=0, py::arg("border")=IntRect::ZERO)
  .def("SetLayoutMode", (void (Urho3D::UIElement::*)(Urho3D::LayoutMode)) &Urho3D::UIElement::SetLayoutMode, "todo: docstring", py::arg("mode"))
  .def("SetLayoutSpacing", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetLayoutSpacing, "todo: docstring", py::arg("spacing"))
  .def("SetLayoutBorder", (void (Urho3D::UIElement::*)(const Urho3D::IntRect &)) &Urho3D::UIElement::SetLayoutBorder, "todo: docstring", py::arg("border"))
  .def("SetLayoutFlexScale", (void (Urho3D::UIElement::*)(const Urho3D::Vector2 &)) &Urho3D::UIElement::SetLayoutFlexScale, "todo: docstring", py::arg("scale"))
  .def("SetIndent", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetIndent, "todo: docstring", py::arg("indent"))
  .def("SetIndentSpacing", (void (Urho3D::UIElement::*)(int)) &Urho3D::UIElement::SetIndentSpacing, "todo: docstring", py::arg("indentSpacing"))
  .def("UpdateLayout", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::UpdateLayout, "todo: docstring")
  .def("DisableLayoutUpdate", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::DisableLayoutUpdate, "todo: docstring")
  .def("EnableLayoutUpdate", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::EnableLayoutUpdate, "todo: docstring")
  .def("BringToFront", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::BringToFront, "todo: docstring")
  .def("CreateChild", (Urho3D::UIElement * (Urho3D::UIElement::*)(Urho3D::StringHash, const Urho3D::String &, unsigned int)) &Urho3D::UIElement::CreateChild, "todo: docstring", py::arg("type"), py::arg("name")=String::EMPTY, py::arg("index")=M_MAX_UNSIGNED)
  .def("AddChild", (void (Urho3D::UIElement::*)(Urho3D::UIElement *)) &Urho3D::UIElement::AddChild, "todo: docstring", py::arg("element"))
  .def("InsertChild", (void (Urho3D::UIElement::*)(unsigned int, Urho3D::UIElement *)) &Urho3D::UIElement::InsertChild, "todo: docstring", py::arg("index"), py::arg("element"))
  .def("RemoveChild", (void (Urho3D::UIElement::*)(Urho3D::UIElement *, unsigned int)) &Urho3D::UIElement::RemoveChild, "todo: docstring", py::arg("element"), py::arg("index")=0)
  .def("RemoveChildAtIndex", (void (Urho3D::UIElement::*)(unsigned int)) &Urho3D::UIElement::RemoveChildAtIndex, "todo: docstring", py::arg("index"))
  .def("RemoveAllChildren", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::RemoveAllChildren, "todo: docstring")
  .def("Remove", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::Remove, "todo: docstring")
  .def("FindChild", (unsigned int (Urho3D::UIElement::*)(Urho3D::UIElement *) const) &Urho3D::UIElement::FindChild, "todo: docstring", py::arg("element"))
  .def("SetParent", (void (Urho3D::UIElement::*)(Urho3D::UIElement *, unsigned int)) &Urho3D::UIElement::SetParent, "todo: docstring", py::arg("parent"), py::arg("index")=M_MAX_UNSIGNED)
  .def("SetVar", (void (Urho3D::UIElement::*)(Urho3D::StringHash, const Urho3D::Variant &)) &Urho3D::UIElement::SetVar, "todo: docstring", py::arg("key"), py::arg("value"))
  .def("SetInternal", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetInternal, "todo: docstring", py::arg("enable"))
  .def("SetTraversalMode", (void (Urho3D::UIElement::*)(Urho3D::TraversalMode)) &Urho3D::UIElement::SetTraversalMode, "todo: docstring", py::arg("traversalMode"))
  .def("SetElementEventSender", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetElementEventSender, "todo: docstring", py::arg("flag"))
  .def("SetBasePath", (void (Urho3D::UIElement::*)(const Urho3D::String &)) &Urho3D::UIElement::SetBasePath, "todo: docstring", py::arg("basePath"))
  .def("SetTags", (void (Urho3D::UIElement::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::UIElement::SetTags, "todo: docstring", py::arg("tags"))
  .def("AddTag", (void (Urho3D::UIElement::*)(const Urho3D::String &)) &Urho3D::UIElement::AddTag, "todo: docstring", py::arg("tag"))
  .def("AddTags", (void (Urho3D::UIElement::*)(const Urho3D::String &, char)) &Urho3D::UIElement::AddTags, "todo: docstring", py::arg("tags"), py::arg("separator")=';')
  .def("AddTags", (void (Urho3D::UIElement::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::UIElement::AddTags, "todo: docstring", py::arg("tags"))
  .def("RemoveTag", (bool (Urho3D::UIElement::*)(const Urho3D::String &)) &Urho3D::UIElement::RemoveTag, "todo: docstring", py::arg("tag"))
  .def("RemoveAllTags", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::RemoveAllTags, "todo: docstring")
  .def("GetName", (const Urho3D::String & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetName, "todo: docstring")
  .def("GetPosition", (const Urho3D::IntVector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetPosition, "todo: docstring")
  .def("GetSize", (const Urho3D::IntVector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetSize, "todo: docstring")
  .def("GetWidth", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetWidth, "todo: docstring")
  .def("GetHeight", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetHeight, "todo: docstring")
  .def("GetMinSize", (const Urho3D::IntVector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMinSize, "todo: docstring")
  .def("GetMinWidth", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMinWidth, "todo: docstring")
  .def("GetMinHeight", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMinHeight, "todo: docstring")
  .def("GetMaxSize", (const Urho3D::IntVector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMaxSize, "todo: docstring")
  .def("GetMaxWidth", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMaxWidth, "todo: docstring")
  .def("GetMaxHeight", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMaxHeight, "todo: docstring")
  .def("IsFixedSize", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsFixedSize, "todo: docstring")
  .def("IsFixedWidth", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsFixedWidth, "todo: docstring")
  .def("IsFixedHeight", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsFixedHeight, "todo: docstring")
  .def("GetChildOffset", (const Urho3D::IntVector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetChildOffset, "todo: docstring")
  .def("GetHorizontalAlignment", (Urho3D::HorizontalAlignment (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetHorizontalAlignment, "todo: docstring")
  .def("GetVerticalAlignment", (Urho3D::VerticalAlignment (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetVerticalAlignment, "todo: docstring")
  .def("GetEnableAnchor", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetEnableAnchor, "todo: docstring")
  .def("GetMinAnchor", (const Urho3D::Vector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMinAnchor, "todo: docstring")
  .def("GetMaxAnchor", (const Urho3D::Vector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMaxAnchor, "todo: docstring")
  .def("GetMinOffset", (const Urho3D::IntVector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMinOffset, "todo: docstring")
  .def("GetMaxOffset", (const Urho3D::IntVector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetMaxOffset, "todo: docstring")
  .def("GetPivot", (const Urho3D::Vector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetPivot, "todo: docstring")
  .def("GetClipBorder", (const Urho3D::IntRect & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetClipBorder, "todo: docstring")
  .def("GetColor", (const Urho3D::Color & (Urho3D::UIElement::*)(Urho3D::Corner) const) &Urho3D::UIElement::GetColor, "todo: docstring", py::arg("corner"))
  .def("GetPriority", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetPriority, "todo: docstring")
  .def("GetOpacity", (float (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetOpacity, "todo: docstring")
  .def("GetDerivedOpacity", (float (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetDerivedOpacity, "todo: docstring")
  .def("GetBringToFront", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetBringToFront, "todo: docstring")
  .def("GetBringToBack", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetBringToBack, "todo: docstring")
  .def("GetClipChildren", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetClipChildren, "todo: docstring")
  .def("GetSortChildren", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetSortChildren, "todo: docstring")
  .def("GetUseDerivedOpacity", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetUseDerivedOpacity, "todo: docstring")
  .def("HasFocus", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::HasFocus, "todo: docstring")
  .def("IsChildOf", (bool (Urho3D::UIElement::*)(Urho3D::UIElement *) const) &Urho3D::UIElement::IsChildOf, "todo: docstring", py::arg("element"))
  .def("IsEnabled", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsEnabled, "todo: docstring")
  .def("IsEnabledSelf", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsEnabledSelf, "todo: docstring")
  .def("IsEditable", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsEditable, "todo: docstring")
  .def("IsSelected", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsSelected, "todo: docstring")
  .def("IsVisible", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsVisible, "todo: docstring")
  .def("IsVisibleEffective", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsVisibleEffective, "todo: docstring")
  .def("IsHovering", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsHovering, "todo: docstring")
  .def("IsInternal", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsInternal, "todo: docstring")
  .def("HasColorGradient", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::HasColorGradient, "todo: docstring")
  .def("GetFocusMode", (Urho3D::FocusMode (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetFocusMode, "todo: docstring")
  //.def("GetDragDropMode", (Urho3D::DragAndDropModeFlags (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetDragDropMode, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetAppliedStyle", (const Urho3D::String & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetAppliedStyle, "todo: docstring")
  .def("GetDefaultStyle", (Urho3D::XMLFile * (Urho3D::UIElement::*)(bool) const) &Urho3D::UIElement::GetDefaultStyle, "todo: docstring", py::arg("recursiveUp")=true)
  .def("GetLayoutMode", (Urho3D::LayoutMode (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetLayoutMode, "todo: docstring")
  .def("GetLayoutSpacing", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetLayoutSpacing, "todo: docstring")
  .def("GetLayoutBorder", (const Urho3D::IntRect & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetLayoutBorder, "todo: docstring")
  .def("GetLayoutFlexScale", (const Urho3D::Vector2 & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetLayoutFlexScale, "todo: docstring")
  .def("GetNumChildren", (unsigned int (Urho3D::UIElement::*)(bool) const) &Urho3D::UIElement::GetNumChildren, "todo: docstring", py::arg("recursive")=false)
  .def("GetChild", (Urho3D::UIElement * (Urho3D::UIElement::*)(unsigned int) const) &Urho3D::UIElement::GetChild, "todo: docstring", py::arg("index"))
  .def("GetChild", (Urho3D::UIElement * (Urho3D::UIElement::*)(const Urho3D::String &, bool) const) &Urho3D::UIElement::GetChild, "todo: docstring", py::arg("name"), py::arg("recursive")=false)
  .def("GetChild", (Urho3D::UIElement * (Urho3D::UIElement::*)(const Urho3D::StringHash &, const Urho3D::Variant &, bool) const) &Urho3D::UIElement::GetChild, "todo: docstring", py::arg("key"), py::arg("value")=Variant::EMPTY, py::arg("recursive")=false)
  //.def("GetChildren", (const Vector<SharedPtr<Urho3D::UIElement> > & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetChildren, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetChildren", (void (Urho3D::UIElement::*)(Urho3D::PODVector<Urho3D::UIElement *> &, bool) const) &Urho3D::UIElement::GetChildren, "todo: docstring", py::arg("dest"), py::arg("recursive")=false)
    //['Urho3D::PODVector<Urho3D::UIElement', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetParent", (Urho3D::UIElement * (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetParent, "todo: docstring")
  .def("GetRoot", (Urho3D::UIElement * (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetRoot, "todo: docstring")
  .def("GetDerivedColor", (const Urho3D::Color & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetDerivedColor, "todo: docstring")
  .def("GetVar", (const Urho3D::Variant & (Urho3D::UIElement::*)(const Urho3D::StringHash &) const) &Urho3D::UIElement::GetVar, "todo: docstring", py::arg("key"))
  .def("GetVars", (const Urho3D::VariantMap & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetVars, "todo: docstring")
  .def("GetBasePath", (const Urho3D::String & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetBasePath, "todo: docstring")
  .def("HasTag", (bool (Urho3D::UIElement::*)(const Urho3D::String &) const) &Urho3D::UIElement::HasTag, "todo: docstring", py::arg("tag"))
  .def("GetTags", (const Urho3D::StringVector & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetTags, "todo: docstring")
  //.def("GetChildrenWithTag", (void (Urho3D::UIElement::*)(Urho3D::PODVector<Urho3D::UIElement *> &, const Urho3D::String &, bool) const) &Urho3D::UIElement::GetChildrenWithTag, "todo: docstring", py::arg("dest"), py::arg("tag"), py::arg("recursive")=false)
    //['Urho3D::PODVector<Urho3D::UIElement', 'Urho3D::String', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetChildrenWithTag", (PODVector<Urho3D::UIElement *> (Urho3D::UIElement::*)(const Urho3D::String &, bool) const) &Urho3D::UIElement::GetChildrenWithTag, "todo: docstring", py::arg("tag"), py::arg("recursive")=false)
    //['Urho3D::String', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetDragButtonCombo", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetDragButtonCombo, "todo: docstring")
  .def("GetDragButtonCount", (unsigned int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetDragButtonCount, "todo: docstring")
  .def("IsInside", (bool (Urho3D::UIElement::*)(Urho3D::IntVector2, bool)) &Urho3D::UIElement::IsInside, "todo: docstring", py::arg("position"), py::arg("isScreen"))
  .def("IsInsideCombined", (bool (Urho3D::UIElement::*)(Urho3D::IntVector2, bool)) &Urho3D::UIElement::IsInsideCombined, "todo: docstring", py::arg("position"), py::arg("isScreen"))
  .def("GetCombinedScreenRect", (Urho3D::IntRect (Urho3D::UIElement::*)()) &Urho3D::UIElement::GetCombinedScreenRect, "todo: docstring")
  .def("SortChildren", (void (Urho3D::UIElement::*)()) &Urho3D::UIElement::SortChildren, "todo: docstring")
  .def("GetLayoutElementMaxSize", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetLayoutElementMaxSize, "todo: docstring")
  .def("GetIndent", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetIndent, "todo: docstring")
  .def("GetIndentSpacing", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetIndentSpacing, "todo: docstring")
  .def("GetIndentWidth", (int (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetIndentWidth, "todo: docstring")
  .def("SetChildOffset", (void (Urho3D::UIElement::*)(const Urho3D::IntVector2 &)) &Urho3D::UIElement::SetChildOffset, "todo: docstring", py::arg("offset"))
  .def("SetHovering", (void (Urho3D::UIElement::*)(bool)) &Urho3D::UIElement::SetHovering, "todo: docstring", py::arg("enable"))
  .def("AdjustScissor", (void (Urho3D::UIElement::*)(Urho3D::IntRect &)) &Urho3D::UIElement::AdjustScissor, "todo: docstring", py::arg("currentScissor"))
  //.def("GetBatchesWithOffset", (void (Urho3D::UIElement::*)(Urho3D::IntVector2 &, Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, Urho3D::IntRect)) &Urho3D::UIElement::GetBatchesWithOffset, "todo: docstring", py::arg("offset"), py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::IntVector2', 'Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetColorAttr", (const Urho3D::Color & (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetColorAttr, "todo: docstring")
  .def("GetTraversalMode", (Urho3D::TraversalMode (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetTraversalMode, "todo: docstring")
  .def("IsElementEventSender", (bool (Urho3D::UIElement::*)() const) &Urho3D::UIElement::IsElementEventSender, "todo: docstring")
  .def("GetElementEventSender", (Urho3D::UIElement * (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetElementEventSender, "todo: docstring")
  .def("GetEffectiveMinSize", (Urho3D::IntVector2 (Urho3D::UIElement::*)() const) &Urho3D::UIElement::GetEffectiveMinSize, "todo: docstring")
  .def("SetRenderTexture", (void (Urho3D::UIElement::*)(Urho3D::Texture2D *)) &Urho3D::UIElement::SetRenderTexture, "todo: docstring", py::arg("texture"))
// Class Variables:
;
}

void Implement_Urho3D_BorderImage(py::class_<Urho3D::BorderImage, Urho3D::SharedPtr<Urho3D::BorderImage>, Urho3D::UIElement>& pyclass_Var_Urho3D_BorderImage)
{
    // Class BorderImage Implementation
pyclass_Var_Urho3D_BorderImage
  .def("GetType", (Urho3D::StringHash (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~BorderImage", (void (Urho3D::BorderImage::*)()) &Urho3D::BorderImage::~BorderImage, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("GetBatches", (void (Urho3D::BorderImage::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::BorderImage::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetTexture", (void (Urho3D::BorderImage::*)(Urho3D::Texture *)) &Urho3D::BorderImage::SetTexture, "todo: docstring", py::arg("texture"))
  .def("SetImageRect", (void (Urho3D::BorderImage::*)(const Urho3D::IntRect &)) &Urho3D::BorderImage::SetImageRect, "todo: docstring", py::arg("rect"))
  .def("SetFullImageRect", (void (Urho3D::BorderImage::*)()) &Urho3D::BorderImage::SetFullImageRect, "todo: docstring")
  .def("SetBorder", (void (Urho3D::BorderImage::*)(const Urho3D::IntRect &)) &Urho3D::BorderImage::SetBorder, "todo: docstring", py::arg("rect"))
  .def("SetImageBorder", (void (Urho3D::BorderImage::*)(const Urho3D::IntRect &)) &Urho3D::BorderImage::SetImageBorder, "todo: docstring", py::arg("rect"))
  .def("SetHoverOffset", (void (Urho3D::BorderImage::*)(const Urho3D::IntVector2 &)) &Urho3D::BorderImage::SetHoverOffset, "todo: docstring", py::arg("offset"))
  .def("SetHoverOffset", (void (Urho3D::BorderImage::*)(int, int)) &Urho3D::BorderImage::SetHoverOffset, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetBlendMode", (void (Urho3D::BorderImage::*)(Urho3D::BlendMode)) &Urho3D::BorderImage::SetBlendMode, "todo: docstring", py::arg("mode"))
  .def("SetTiled", (void (Urho3D::BorderImage::*)(bool)) &Urho3D::BorderImage::SetTiled, "todo: docstring", py::arg("enable"))
  .def("SetMaterial", (void (Urho3D::BorderImage::*)(Urho3D::Material *)) &Urho3D::BorderImage::SetMaterial, "todo: docstring", py::arg("material"))
  .def("GetTexture", (Urho3D::Texture * (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetTexture, "todo: docstring")
  .def("GetImageRect", (const Urho3D::IntRect & (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetImageRect, "todo: docstring")
  .def("GetBorder", (const Urho3D::IntRect & (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetBorder, "todo: docstring")
  .def("GetImageBorder", (const Urho3D::IntRect & (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetImageBorder, "todo: docstring")
  .def("GetHoverOffset", (const Urho3D::IntVector2 & (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetHoverOffset, "todo: docstring")
  .def("GetBlendMode", (Urho3D::BlendMode (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetBlendMode, "todo: docstring")
  .def("IsTiled", (bool (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::IsTiled, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetMaterial, "todo: docstring")
  .def("SetTextureAttr", (void (Urho3D::BorderImage::*)(const Urho3D::ResourceRef &)) &Urho3D::BorderImage::SetTextureAttr, "todo: docstring", py::arg("value"))
  .def("GetTextureAttr", (Urho3D::ResourceRef (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetTextureAttr, "todo: docstring")
  .def("SetMaterialAttr", (void (Urho3D::BorderImage::*)(const Urho3D::ResourceRef &)) &Urho3D::BorderImage::SetMaterialAttr, "todo: docstring", py::arg("value"))
  .def("GetMaterialAttr", (Urho3D::ResourceRef (Urho3D::BorderImage::*)() const) &Urho3D::BorderImage::GetMaterialAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Profiler(py::class_<Urho3D::Profiler, Urho3D::SharedPtr<Urho3D::Profiler>, Urho3D::Object>& pyclass_Var_Urho3D_Profiler)
{
    // Class Profiler Implementation
pyclass_Var_Urho3D_Profiler
  .def("GetType", (Urho3D::StringHash (Urho3D::Profiler::*)() const) &Urho3D::Profiler::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Profiler::*)() const) &Urho3D::Profiler::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Profiler::*)() const) &Urho3D::Profiler::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Profiler", (void (Urho3D::Profiler::*)()) &Urho3D::Profiler::~Profiler, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginBlock", (void (Urho3D::Profiler::*)(const char *)) &Urho3D::Profiler::BeginBlock, "todo: docstring", py::arg("name"))
  .def("EndBlock", (void (Urho3D::Profiler::*)()) &Urho3D::Profiler::EndBlock, "todo: docstring")
  .def("BeginFrame", (void (Urho3D::Profiler::*)()) &Urho3D::Profiler::BeginFrame, "todo: docstring")
  .def("EndFrame", (void (Urho3D::Profiler::*)()) &Urho3D::Profiler::EndFrame, "todo: docstring")
  .def("BeginInterval", (void (Urho3D::Profiler::*)()) &Urho3D::Profiler::BeginInterval, "todo: docstring")
  .def("PrintData", (const Urho3D::String & (Urho3D::Profiler::*)(bool, bool, unsigned int) const) &Urho3D::Profiler::PrintData, "todo: docstring", py::arg("showUnused")=false, py::arg("showTotal")=false, py::arg("maxDepth")=M_MAX_UNSIGNED)
  .def("GetCurrentBlock", (const Urho3D::ProfilerBlock * (Urho3D::Profiler::*)()) &Urho3D::Profiler::GetCurrentBlock, "todo: docstring")
  .def("GetRootBlock", (const Urho3D::ProfilerBlock * (Urho3D::Profiler::*)()) &Urho3D::Profiler::GetRootBlock, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Console(py::class_<Urho3D::Console, Urho3D::SharedPtr<Urho3D::Console>, Urho3D::Object>& pyclass_Var_Urho3D_Console)
{
    // Class Console Implementation
pyclass_Var_Urho3D_Console
  .def("GetType", (Urho3D::StringHash (Urho3D::Console::*)() const) &Urho3D::Console::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Console::*)() const) &Urho3D::Console::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Console::*)() const) &Urho3D::Console::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Console", (void (Urho3D::Console::*)()) &Urho3D::Console::~Console, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetDefaultStyle", (void (Urho3D::Console::*)(Urho3D::XMLFile *)) &Urho3D::Console::SetDefaultStyle, "todo: docstring", py::arg("style"))
  .def("SetVisible", (void (Urho3D::Console::*)(bool)) &Urho3D::Console::SetVisible, "todo: docstring", py::arg("enable"))
  .def("Toggle", (void (Urho3D::Console::*)()) &Urho3D::Console::Toggle, "todo: docstring")
  .def("SetAutoVisibleOnError", (void (Urho3D::Console::*)(bool)) &Urho3D::Console::SetAutoVisibleOnError, "todo: docstring", py::arg("enable"))
  .def("SetCommandInterpreter", (void (Urho3D::Console::*)(const Urho3D::String &)) &Urho3D::Console::SetCommandInterpreter, "todo: docstring", py::arg("interpreter"))
  .def("SetNumBufferedRows", (void (Urho3D::Console::*)(unsigned int)) &Urho3D::Console::SetNumBufferedRows, "todo: docstring", py::arg("rows"))
  .def("SetNumRows", (void (Urho3D::Console::*)(unsigned int)) &Urho3D::Console::SetNumRows, "todo: docstring", py::arg("rows"))
  .def("SetNumHistoryRows", (void (Urho3D::Console::*)(unsigned int)) &Urho3D::Console::SetNumHistoryRows, "todo: docstring", py::arg("rows"))
  .def("SetFocusOnShow", (void (Urho3D::Console::*)(bool)) &Urho3D::Console::SetFocusOnShow, "todo: docstring", py::arg("enable"))
  .def("AddAutoComplete", (void (Urho3D::Console::*)(const Urho3D::String &)) &Urho3D::Console::AddAutoComplete, "todo: docstring", py::arg("option"))
  .def("RemoveAutoComplete", (void (Urho3D::Console::*)(const Urho3D::String &)) &Urho3D::Console::RemoveAutoComplete, "todo: docstring", py::arg("option"))
  .def("UpdateElements", (void (Urho3D::Console::*)()) &Urho3D::Console::UpdateElements, "todo: docstring")
  .def("GetDefaultStyle", (Urho3D::XMLFile * (Urho3D::Console::*)() const) &Urho3D::Console::GetDefaultStyle, "todo: docstring")
  .def("GetBackground", (Urho3D::BorderImage * (Urho3D::Console::*)() const) &Urho3D::Console::GetBackground, "todo: docstring")
  .def("GetLineEdit", (Urho3D::LineEdit * (Urho3D::Console::*)() const) &Urho3D::Console::GetLineEdit, "todo: docstring")
  .def("GetCloseButton", (Urho3D::Button * (Urho3D::Console::*)() const) &Urho3D::Console::GetCloseButton, "todo: docstring")
  .def("IsVisible", (bool (Urho3D::Console::*)() const) &Urho3D::Console::IsVisible, "todo: docstring")
  .def("IsAutoVisibleOnError", (bool (Urho3D::Console::*)() const) &Urho3D::Console::IsAutoVisibleOnError, "todo: docstring")
  .def("GetCommandInterpreter", (const Urho3D::String & (Urho3D::Console::*)() const) &Urho3D::Console::GetCommandInterpreter, "todo: docstring")
  .def("GetNumBufferedRows", (unsigned int (Urho3D::Console::*)() const) &Urho3D::Console::GetNumBufferedRows, "todo: docstring")
  .def("GetNumRows", (unsigned int (Urho3D::Console::*)() const) &Urho3D::Console::GetNumRows, "todo: docstring")
  .def("CopySelectedRows", (void (Urho3D::Console::*)() const) &Urho3D::Console::CopySelectedRows, "todo: docstring")
  .def("GetNumHistoryRows", (unsigned int (Urho3D::Console::*)() const) &Urho3D::Console::GetNumHistoryRows, "todo: docstring")
  .def("GetHistoryPosition", (unsigned int (Urho3D::Console::*)() const) &Urho3D::Console::GetHistoryPosition, "todo: docstring")
  .def("GetHistoryRow", (const Urho3D::String & (Urho3D::Console::*)(unsigned int) const) &Urho3D::Console::GetHistoryRow, "todo: docstring", py::arg("index"))
  .def("GetFocusOnShow", (bool (Urho3D::Console::*)() const) &Urho3D::Console::GetFocusOnShow, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Button(py::class_<Urho3D::Button, Urho3D::SharedPtr<Urho3D::Button>, Urho3D::BorderImage>& pyclass_Var_Urho3D_Button)
{
    // Class Button Implementation
pyclass_Var_Urho3D_Button
  .def("GetType", (Urho3D::StringHash (Urho3D::Button::*)() const) &Urho3D::Button::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Button::*)() const) &Urho3D::Button::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Button::*)() const) &Urho3D::Button::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Button", (void (Urho3D::Button::*)()) &Urho3D::Button::~Button, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Update", (void (Urho3D::Button::*)(float)) &Urho3D::Button::Update, "todo: docstring", py::arg("timeStep"))
  //.def("GetBatches", (void (Urho3D::Button::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::Button::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnClickBegin", (void (Urho3D::Button::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *)) &Urho3D::Button::OnClickBegin, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnClickEnd", (void (Urho3D::Button::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *, Urho3D::UIElement *)) &Urho3D::Button::OnClickEnd, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"), py::arg("beginElement"))
  .def("OnDragMove", (void (Urho3D::Button::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Button::OnDragMove, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("deltaPos"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  //.def("OnKey", (void (Urho3D::Button::*)(Urho3D::Key, Urho3D::FlagSet<Urho3D::MouseButton, void>, Urho3D::FlagSet<Urho3D::Qualifier, void>)) &Urho3D::Button::OnKey, "todo: docstring", py::arg("key"), py::arg("buttons"), py::arg("qualifiers"))
    //['Urho3D::Key', 'Urho3D::FlagSet<Urho3D::MouseButton, void>', 'Urho3D::FlagSet<Urho3D::Qualifier, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetPressedOffset", (void (Urho3D::Button::*)(const Urho3D::IntVector2 &)) &Urho3D::Button::SetPressedOffset, "todo: docstring", py::arg("offset"))
  .def("SetPressedOffset", (void (Urho3D::Button::*)(int, int)) &Urho3D::Button::SetPressedOffset, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetDisabledOffset", (void (Urho3D::Button::*)(const Urho3D::IntVector2 &)) &Urho3D::Button::SetDisabledOffset, "todo: docstring", py::arg("offset"))
  .def("SetDisabledOffset", (void (Urho3D::Button::*)(int, int)) &Urho3D::Button::SetDisabledOffset, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetPressedChildOffset", (void (Urho3D::Button::*)(const Urho3D::IntVector2 &)) &Urho3D::Button::SetPressedChildOffset, "todo: docstring", py::arg("offset"))
  .def("SetPressedChildOffset", (void (Urho3D::Button::*)(int, int)) &Urho3D::Button::SetPressedChildOffset, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetRepeat", (void (Urho3D::Button::*)(float, float)) &Urho3D::Button::SetRepeat, "todo: docstring", py::arg("delay"), py::arg("rate"))
  .def("SetRepeatDelay", (void (Urho3D::Button::*)(float)) &Urho3D::Button::SetRepeatDelay, "todo: docstring", py::arg("delay"))
  .def("SetRepeatRate", (void (Urho3D::Button::*)(float)) &Urho3D::Button::SetRepeatRate, "todo: docstring", py::arg("rate"))
  .def("GetPressedOffset", (const Urho3D::IntVector2 & (Urho3D::Button::*)() const) &Urho3D::Button::GetPressedOffset, "todo: docstring")
  .def("GetDisabledOffset", (const Urho3D::IntVector2 & (Urho3D::Button::*)() const) &Urho3D::Button::GetDisabledOffset, "todo: docstring")
  .def("GetPressedChildOffset", (const Urho3D::IntVector2 & (Urho3D::Button::*)() const) &Urho3D::Button::GetPressedChildOffset, "todo: docstring")
  .def("GetRepeatDelay", (float (Urho3D::Button::*)() const) &Urho3D::Button::GetRepeatDelay, "todo: docstring")
  .def("GetRepeatRate", (float (Urho3D::Button::*)() const) &Urho3D::Button::GetRepeatRate, "todo: docstring")
  .def("IsPressed", (bool (Urho3D::Button::*)() const) &Urho3D::Button::IsPressed, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_LineEdit(py::class_<Urho3D::LineEdit, Urho3D::SharedPtr<Urho3D::LineEdit>, Urho3D::BorderImage>& pyclass_Var_Urho3D_LineEdit)
{
    // Class LineEdit Implementation
pyclass_Var_Urho3D_LineEdit
  .def("GetType", (Urho3D::StringHash (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~LineEdit", (void (Urho3D::LineEdit::*)()) &Urho3D::LineEdit::~LineEdit, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::LineEdit::*)()) &Urho3D::LineEdit::ApplyAttributes, "todo: docstring")
  .def("Update", (void (Urho3D::LineEdit::*)(float)) &Urho3D::LineEdit::Update, "todo: docstring", py::arg("timeStep"))
  .def("OnClickBegin", (void (Urho3D::LineEdit::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *)) &Urho3D::LineEdit::OnClickBegin, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDoubleClick", (void (Urho3D::LineEdit::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *)) &Urho3D::LineEdit::OnDoubleClick, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragBegin", (void (Urho3D::LineEdit::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::LineEdit::OnDragBegin, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragMove", (void (Urho3D::LineEdit::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::LineEdit::OnDragMove, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("deltaPos"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragDropTest", (bool (Urho3D::LineEdit::*)(Urho3D::UIElement *)) &Urho3D::LineEdit::OnDragDropTest, "todo: docstring", py::arg("source"))
  .def("OnDragDropFinish", (bool (Urho3D::LineEdit::*)(Urho3D::UIElement *)) &Urho3D::LineEdit::OnDragDropFinish, "todo: docstring", py::arg("source"))
  //.def("OnKey", (void (Urho3D::LineEdit::*)(Urho3D::Key, Urho3D::FlagSet<Urho3D::MouseButton, void>, Urho3D::FlagSet<Urho3D::Qualifier, void>)) &Urho3D::LineEdit::OnKey, "todo: docstring", py::arg("key"), py::arg("buttons"), py::arg("qualifiers"))
    //['Urho3D::Key', 'Urho3D::FlagSet<Urho3D::MouseButton, void>', 'Urho3D::FlagSet<Urho3D::Qualifier, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnTextInput", (void (Urho3D::LineEdit::*)(const Urho3D::String &)) &Urho3D::LineEdit::OnTextInput, "todo: docstring", py::arg("text"))
  .def("SetText", (void (Urho3D::LineEdit::*)(const Urho3D::String &)) &Urho3D::LineEdit::SetText, "todo: docstring", py::arg("text"))
  .def("SetCursorPosition", (void (Urho3D::LineEdit::*)(unsigned int)) &Urho3D::LineEdit::SetCursorPosition, "todo: docstring", py::arg("position"))
  .def("SetCursorBlinkRate", (void (Urho3D::LineEdit::*)(float)) &Urho3D::LineEdit::SetCursorBlinkRate, "todo: docstring", py::arg("rate"))
  .def("SetMaxLength", (void (Urho3D::LineEdit::*)(unsigned int)) &Urho3D::LineEdit::SetMaxLength, "todo: docstring", py::arg("length"))
  .def("SetEchoCharacter", (void (Urho3D::LineEdit::*)(unsigned int)) &Urho3D::LineEdit::SetEchoCharacter, "todo: docstring", py::arg("c"))
  .def("SetCursorMovable", (void (Urho3D::LineEdit::*)(bool)) &Urho3D::LineEdit::SetCursorMovable, "todo: docstring", py::arg("enable"))
  .def("SetTextSelectable", (void (Urho3D::LineEdit::*)(bool)) &Urho3D::LineEdit::SetTextSelectable, "todo: docstring", py::arg("enable"))
  .def("SetTextCopyable", (void (Urho3D::LineEdit::*)(bool)) &Urho3D::LineEdit::SetTextCopyable, "todo: docstring", py::arg("enable"))
  .def("GetText", (const Urho3D::String & (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetText, "todo: docstring")
  .def("GetCursorPosition", (unsigned int (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetCursorPosition, "todo: docstring")
  .def("GetCursorBlinkRate", (float (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetCursorBlinkRate, "todo: docstring")
  .def("GetMaxLength", (unsigned int (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetMaxLength, "todo: docstring")
  .def("GetEchoCharacter", (unsigned int (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetEchoCharacter, "todo: docstring")
  .def("IsCursorMovable", (bool (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::IsCursorMovable, "todo: docstring")
  .def("IsTextSelectable", (bool (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::IsTextSelectable, "todo: docstring")
  .def("IsTextCopyable", (bool (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::IsTextCopyable, "todo: docstring")
  .def("GetTextElement", (Urho3D::Text * (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetTextElement, "todo: docstring")
  .def("GetCursor", (Urho3D::BorderImage * (Urho3D::LineEdit::*)() const) &Urho3D::LineEdit::GetCursor, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_VertexBuffer(py::class_<Urho3D::VertexBuffer, Urho3D::SharedPtr<Urho3D::VertexBuffer>, Urho3D::Object, Urho3D::GPUObject>& pyclass_Var_Urho3D_VertexBuffer)
{
    // Class VertexBuffer Implementation
pyclass_Var_Urho3D_VertexBuffer
  .def("GetType", (Urho3D::StringHash (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *, bool>(), "todo: constructor docstring")
  //.def("~VertexBuffer", (void (Urho3D::VertexBuffer::*)()) &Urho3D::VertexBuffer::~VertexBuffer, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnDeviceLost", (void (Urho3D::VertexBuffer::*)()) &Urho3D::VertexBuffer::OnDeviceLost, "todo: docstring")
  .def("OnDeviceReset", (void (Urho3D::VertexBuffer::*)()) &Urho3D::VertexBuffer::OnDeviceReset, "todo: docstring")
  .def("Release", (void (Urho3D::VertexBuffer::*)()) &Urho3D::VertexBuffer::Release, "todo: docstring")
  .def("SetShadowed", (void (Urho3D::VertexBuffer::*)(bool)) &Urho3D::VertexBuffer::SetShadowed, "todo: docstring", py::arg("enable"))
  //.def("SetSize", (bool (Urho3D::VertexBuffer::*)(unsigned int, const Urho3D::PODVector<Urho3D::VertexElement> &, bool)) &Urho3D::VertexBuffer::SetSize, "todo: docstring", py::arg("vertexCount"), py::arg("elements"), py::arg("dynamic")=false)
    //['unsigned int', 'Urho3D::PODVector<Urho3D::VertexElement>', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetSize", (bool (Urho3D::VertexBuffer::*)(unsigned int, unsigned int, bool)) &Urho3D::VertexBuffer::SetSize, "todo: docstring", py::arg("vertexCount"), py::arg("elementMask"), py::arg("dynamic")=false)
  .def("SetData", (bool (Urho3D::VertexBuffer::*)(const void *)) &Urho3D::VertexBuffer::SetData, "todo: docstring", py::arg("data"))
  .def("SetDataRange", (bool (Urho3D::VertexBuffer::*)(const void *, unsigned int, unsigned int, bool)) &Urho3D::VertexBuffer::SetDataRange, "todo: docstring", py::arg("data"), py::arg("start"), py::arg("count"), py::arg("discard")=false)
  .def("Lock", (void * (Urho3D::VertexBuffer::*)(unsigned int, unsigned int, bool)) &Urho3D::VertexBuffer::Lock, "todo: docstring", py::arg("start"), py::arg("count"), py::arg("discard")=false)
  .def("Unlock", (void (Urho3D::VertexBuffer::*)()) &Urho3D::VertexBuffer::Unlock, "todo: docstring")
  .def("IsShadowed", (bool (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::IsShadowed, "todo: docstring")
  .def("IsDynamic", (bool (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::IsDynamic, "todo: docstring")
  .def("IsLocked", (bool (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::IsLocked, "todo: docstring")
  .def("GetVertexCount", (unsigned int (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::GetVertexCount, "todo: docstring")
  .def("GetVertexSize", (unsigned int (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::GetVertexSize, "todo: docstring")
  //.def("GetElements", (const PODVector<Urho3D::VertexElement> & (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::GetElements, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetElement", (const Urho3D::VertexElement * (Urho3D::VertexBuffer::*)(Urho3D::VertexElementSemantic, unsigned char) const) &Urho3D::VertexBuffer::GetElement, "todo: docstring", py::arg("semantic"), py::arg("index")=0)
  .def("GetElement", (const Urho3D::VertexElement * (Urho3D::VertexBuffer::*)(Urho3D::VertexElementType, Urho3D::VertexElementSemantic, unsigned char) const) &Urho3D::VertexBuffer::GetElement, "todo: docstring", py::arg("type"), py::arg("semantic"), py::arg("index")=0)
  .def("HasElement", (bool (Urho3D::VertexBuffer::*)(Urho3D::VertexElementSemantic, unsigned char) const) &Urho3D::VertexBuffer::HasElement, "todo: docstring", py::arg("semantic"), py::arg("index")=0)
  .def("HasElement", (bool (Urho3D::VertexBuffer::*)(Urho3D::VertexElementType, Urho3D::VertexElementSemantic, unsigned char) const) &Urho3D::VertexBuffer::HasElement, "todo: docstring", py::arg("type"), py::arg("semantic"), py::arg("index")=0)
  .def("GetElementOffset", (unsigned int (Urho3D::VertexBuffer::*)(Urho3D::VertexElementSemantic, unsigned char) const) &Urho3D::VertexBuffer::GetElementOffset, "todo: docstring", py::arg("semantic"), py::arg("index")=0)
  .def("GetElementOffset", (unsigned int (Urho3D::VertexBuffer::*)(Urho3D::VertexElementType, Urho3D::VertexElementSemantic, unsigned char) const) &Urho3D::VertexBuffer::GetElementOffset, "todo: docstring", py::arg("type"), py::arg("semantic"), py::arg("index")=0)
  //.def("GetElementMask", (Urho3D::VertexMaskFlags (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::GetElementMask, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetShadowData", (unsigned char * (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::GetShadowData, "todo: docstring")
  //.def("GetShadowDataShared", (SharedArrayPtr<unsigned char> (Urho3D::VertexBuffer::*)() const) &Urho3D::VertexBuffer::GetShadowDataShared, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetBufferHash", (unsigned long long (Urho3D::VertexBuffer::*)(unsigned int)) &Urho3D::VertexBuffer::GetBufferHash, "todo: docstring", py::arg("streamIndex"))
// Class Variables:
;
}

void Implement_Urho3D_BoxOctreeQuery(py::class_<Urho3D::BoxOctreeQuery, Urho3D::ExternalPtr<Urho3D::BoxOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_BoxOctreeQuery)
{
    // Class BoxOctreeQuery Implementation
pyclass_Var_Urho3D_BoxOctreeQuery
  //.def(py::init<Urho3D::PODVector<Urho3D::Drawable *> &, const Urho3D::BoundingBox &, unsigned char, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::PODVector<Urho3D::Drawable', 'Urho3D::BoundingBox', 'unsigned char', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("TestOctant", (Urho3D::Intersection (Urho3D::BoxOctreeQuery::*)(const Urho3D::BoundingBox &, bool)) &Urho3D::BoxOctreeQuery::TestOctant, "todo: docstring", py::arg("box"), py::arg("inside"))
  //.def("TestDrawables", (void (Urho3D::BoxOctreeQuery::*)(Urho3D::Drawable **, Urho3D::Drawable **, bool)) &Urho3D::BoxOctreeQuery::TestDrawables, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("inside"))
    //['Urho3D::Drawable', 'Urho3D::Drawable', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 2
// Class Variables:
  .def_readwrite("box",&Urho3D::BoxOctreeQuery::box_, "todo: var docstring")//Urho3D::BoundingBox
;
}

void Implement_Urho3D_Viewport(py::class_<Urho3D::Viewport, Urho3D::SharedPtr<Urho3D::Viewport>, Urho3D::Object>& pyclass_Var_Urho3D_Viewport)
{
    // Class Viewport Implementation
pyclass_Var_Urho3D_Viewport
  .def("GetType", (Urho3D::StringHash (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def(py::init<Urho3D::Context *, Urho3D::Scene *, Urho3D::Camera *, Urho3D::RenderPath *>(), "todo: constructor docstring")
  .def(py::init<Urho3D::Context *, Urho3D::Scene *, Urho3D::Camera *, const Urho3D::IntRect &, Urho3D::RenderPath *>(), "todo: constructor docstring")
  //.def("~Viewport", (void (Urho3D::Viewport::*)()) &Urho3D::Viewport::~Viewport, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetScene", (void (Urho3D::Viewport::*)(Urho3D::Scene *)) &Urho3D::Viewport::SetScene, "todo: docstring", py::arg("scene"))
  .def("SetCamera", (void (Urho3D::Viewport::*)(Urho3D::Camera *)) &Urho3D::Viewport::SetCamera, "todo: docstring", py::arg("camera"))
  .def("SetRect", (void (Urho3D::Viewport::*)(const Urho3D::IntRect &)) &Urho3D::Viewport::SetRect, "todo: docstring", py::arg("rect"))
  .def("SetRenderPath", (void (Urho3D::Viewport::*)(Urho3D::RenderPath *)) &Urho3D::Viewport::SetRenderPath, "todo: docstring", py::arg("renderPath"))
  .def("SetRenderPath", (void (Urho3D::Viewport::*)(Urho3D::XMLFile *)) &Urho3D::Viewport::SetRenderPath, "todo: docstring", py::arg("file"))
  .def("SetDrawDebug", (void (Urho3D::Viewport::*)(bool)) &Urho3D::Viewport::SetDrawDebug, "todo: docstring", py::arg("enable"))
  .def("SetCullCamera", (void (Urho3D::Viewport::*)(Urho3D::Camera *)) &Urho3D::Viewport::SetCullCamera, "todo: docstring", py::arg("camera"))
  .def("GetScene", (Urho3D::Scene * (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetScene, "todo: docstring")
  .def("GetCamera", (Urho3D::Camera * (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetCamera, "todo: docstring")
  .def("GetView", (Urho3D::View * (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetView, "todo: docstring")
  .def("GetRect", (const Urho3D::IntRect & (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetRect, "todo: docstring")
  .def("GetRenderPath", (Urho3D::RenderPath * (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetRenderPath, "todo: docstring")
  .def("GetDrawDebug", (bool (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetDrawDebug, "todo: docstring")
  .def("GetCullCamera", (Urho3D::Camera * (Urho3D::Viewport::*)() const) &Urho3D::Viewport::GetCullCamera, "todo: docstring")
  .def("GetScreenRay", (Urho3D::Ray (Urho3D::Viewport::*)(int, int) const) &Urho3D::Viewport::GetScreenRay, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("WorldToScreenPoint", (Urho3D::IntVector2 (Urho3D::Viewport::*)(const Urho3D::Vector3 &) const) &Urho3D::Viewport::WorldToScreenPoint, "todo: docstring", py::arg("worldPos"))
  .def("ScreenToWorldPoint", (Urho3D::Vector3 (Urho3D::Viewport::*)(int, int, float) const) &Urho3D::Viewport::ScreenToWorldPoint, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("depth"))
  .def("AllocateView", (void (Urho3D::Viewport::*)()) &Urho3D::Viewport::AllocateView, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_FileWatcher(py::class_<Urho3D::FileWatcher, Urho3D::SharedPtr<Urho3D::FileWatcher>, Urho3D::Object, Urho3D::Thread>& pyclass_Var_Urho3D_FileWatcher)
{
    // Class FileWatcher Implementation
pyclass_Var_Urho3D_FileWatcher
  .def("GetType", (Urho3D::StringHash (Urho3D::FileWatcher::*)() const) &Urho3D::FileWatcher::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::FileWatcher::*)() const) &Urho3D::FileWatcher::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::FileWatcher::*)() const) &Urho3D::FileWatcher::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~FileWatcher", (void (Urho3D::FileWatcher::*)()) &Urho3D::FileWatcher::~FileWatcher, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ThreadFunction", (void (Urho3D::FileWatcher::*)()) &Urho3D::FileWatcher::ThreadFunction, "todo: docstring")
  .def("StartWatching", (bool (Urho3D::FileWatcher::*)(const Urho3D::String &, bool)) &Urho3D::FileWatcher::StartWatching, "todo: docstring", py::arg("pathName"), py::arg("watchSubDirs"))
  .def("StopWatching", (void (Urho3D::FileWatcher::*)()) &Urho3D::FileWatcher::StopWatching, "todo: docstring")
  .def("SetDelay", (void (Urho3D::FileWatcher::*)(float)) &Urho3D::FileWatcher::SetDelay, "todo: docstring", py::arg("interval"))
  .def("AddChange", (void (Urho3D::FileWatcher::*)(const Urho3D::String &)) &Urho3D::FileWatcher::AddChange, "todo: docstring", py::arg("fileName"))
  .def("GetNextChange", (bool (Urho3D::FileWatcher::*)(Urho3D::String &)) &Urho3D::FileWatcher::GetNextChange, "todo: docstring", py::arg("dest"))
  .def("GetPath", (const Urho3D::String & (Urho3D::FileWatcher::*)() const) &Urho3D::FileWatcher::GetPath, "todo: docstring")
  .def("GetDelay", (float (Urho3D::FileWatcher::*)() const) &Urho3D::FileWatcher::GetDelay, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Input(py::class_<Urho3D::Input, Urho3D::SharedPtr<Urho3D::Input>, Urho3D::Object>& pyclass_Var_Urho3D_Input)
{
    // Class Input Implementation
pyclass_Var_Urho3D_Input
  .def("GetType", (Urho3D::StringHash (Urho3D::Input::*)() const) &Urho3D::Input::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Input::*)() const) &Urho3D::Input::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Input::*)() const) &Urho3D::Input::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Input", (void (Urho3D::Input::*)()) &Urho3D::Input::~Input, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Update", (void (Urho3D::Input::*)()) &Urho3D::Input::Update, "todo: docstring")
  .def("SetToggleFullscreen", (void (Urho3D::Input::*)(bool)) &Urho3D::Input::SetToggleFullscreen, "todo: docstring", py::arg("enable"))
  .def("SetMouseVisible", (void (Urho3D::Input::*)(bool, bool)) &Urho3D::Input::SetMouseVisible, "todo: docstring", py::arg("enable"), py::arg("suppressEvent")=false)
  .def("ResetMouseVisible", (void (Urho3D::Input::*)()) &Urho3D::Input::ResetMouseVisible, "todo: docstring")
  .def("SetMouseGrabbed", (void (Urho3D::Input::*)(bool, bool)) &Urho3D::Input::SetMouseGrabbed, "todo: docstring", py::arg("grab"), py::arg("suppressEvent")=false)
  .def("ResetMouseGrabbed", (void (Urho3D::Input::*)()) &Urho3D::Input::ResetMouseGrabbed, "todo: docstring")
  .def("SetMouseMode", (void (Urho3D::Input::*)(Urho3D::MouseMode, bool)) &Urho3D::Input::SetMouseMode, "todo: docstring", py::arg("mode"), py::arg("suppressEvent")=false)
  .def("ResetMouseMode", (void (Urho3D::Input::*)()) &Urho3D::Input::ResetMouseMode, "todo: docstring")
  //.def("AddScreenJoystick", (SDL_JoystickID (Urho3D::Input::*)()) &Urho3D::Input::AddScreenJoystick, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("RemoveScreenJoystick", (bool (Urho3D::Input::*)(int)) &Urho3D::Input::RemoveScreenJoystick, "todo: docstring", py::arg("id"))
  .def("SetScreenJoystickVisible", (void (Urho3D::Input::*)(int, bool)) &Urho3D::Input::SetScreenJoystickVisible, "todo: docstring", py::arg("id"), py::arg("enable"))
  .def("SetScreenKeyboardVisible", (void (Urho3D::Input::*)(bool)) &Urho3D::Input::SetScreenKeyboardVisible, "todo: docstring", py::arg("enable"))
  .def("SetTouchEmulation", (void (Urho3D::Input::*)(bool)) &Urho3D::Input::SetTouchEmulation, "todo: docstring", py::arg("enable"))
  .def("RecordGesture", (bool (Urho3D::Input::*)()) &Urho3D::Input::RecordGesture, "todo: docstring")
  .def("SaveGestures", (bool (Urho3D::Input::*)(Urho3D::Serializer &)) &Urho3D::Input::SaveGestures, "todo: docstring", py::arg("dest"))
  .def("SaveGesture", (bool (Urho3D::Input::*)(Urho3D::Serializer &, unsigned int)) &Urho3D::Input::SaveGesture, "todo: docstring", py::arg("dest"), py::arg("gestureID"))
  .def("LoadGestures", (unsigned int (Urho3D::Input::*)(Urho3D::Deserializer &)) &Urho3D::Input::LoadGestures, "todo: docstring", py::arg("source"))
  .def("RemoveGesture", (bool (Urho3D::Input::*)(unsigned int)) &Urho3D::Input::RemoveGesture, "todo: docstring", py::arg("gestureID"))
  .def("RemoveAllGestures", (void (Urho3D::Input::*)()) &Urho3D::Input::RemoveAllGestures, "todo: docstring")
  .def("SetMousePosition", (void (Urho3D::Input::*)(const Urho3D::IntVector2 &)) &Urho3D::Input::SetMousePosition, "todo: docstring", py::arg("position"))
  .def("CenterMousePosition", (void (Urho3D::Input::*)()) &Urho3D::Input::CenterMousePosition, "todo: docstring")
  .def("GetKeyFromName", (Urho3D::Key (Urho3D::Input::*)(const Urho3D::String &) const) &Urho3D::Input::GetKeyFromName, "todo: docstring", py::arg("name"))
  .def("GetKeyFromScancode", (Urho3D::Key (Urho3D::Input::*)(Urho3D::Scancode) const) &Urho3D::Input::GetKeyFromScancode, "todo: docstring", py::arg("scancode"))
  .def("GetKeyName", (Urho3D::String (Urho3D::Input::*)(Urho3D::Key) const) &Urho3D::Input::GetKeyName, "todo: docstring", py::arg("key"))
  .def("GetScancodeFromKey", (Urho3D::Scancode (Urho3D::Input::*)(Urho3D::Key) const) &Urho3D::Input::GetScancodeFromKey, "todo: docstring", py::arg("key"))
  .def("GetScancodeFromName", (Urho3D::Scancode (Urho3D::Input::*)(const Urho3D::String &) const) &Urho3D::Input::GetScancodeFromName, "todo: docstring", py::arg("name"))
  .def("GetScancodeName", (Urho3D::String (Urho3D::Input::*)(Urho3D::Scancode) const) &Urho3D::Input::GetScancodeName, "todo: docstring", py::arg("scancode"))
  .def("GetKeyDown", (bool (Urho3D::Input::*)(Urho3D::Key) const) &Urho3D::Input::GetKeyDown, "todo: docstring", py::arg("key"))
  .def("GetKeyPress", (bool (Urho3D::Input::*)(Urho3D::Key) const) &Urho3D::Input::GetKeyPress, "todo: docstring", py::arg("key"))
  .def("GetScancodeDown", (bool (Urho3D::Input::*)(Urho3D::Scancode) const) &Urho3D::Input::GetScancodeDown, "todo: docstring", py::arg("scancode"))
  .def("GetScancodePress", (bool (Urho3D::Input::*)(Urho3D::Scancode) const) &Urho3D::Input::GetScancodePress, "todo: docstring", py::arg("scancode"))
  //.def("GetMouseButtonDown", (bool (Urho3D::Input::*)(Urho3D::FlagSet<Urho3D::MouseButton, void>) const) &Urho3D::Input::GetMouseButtonDown, "todo: docstring", py::arg("button"))
    //['Urho3D::FlagSet<Urho3D::MouseButton, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("GetMouseButtonPress", (bool (Urho3D::Input::*)(Urho3D::FlagSet<Urho3D::MouseButton, void>) const) &Urho3D::Input::GetMouseButtonPress, "todo: docstring", py::arg("button"))
    //['Urho3D::FlagSet<Urho3D::MouseButton, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetQualifierDown", (bool (Urho3D::Input::*)(Urho3D::Qualifier) const) &Urho3D::Input::GetQualifierDown, "todo: docstring", py::arg("qualifier"))
  .def("GetQualifierPress", (bool (Urho3D::Input::*)(Urho3D::Qualifier) const) &Urho3D::Input::GetQualifierPress, "todo: docstring", py::arg("qualifier"))
  //.def("GetQualifiers", (Urho3D::QualifierFlags (Urho3D::Input::*)() const) &Urho3D::Input::GetQualifiers, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetMousePosition", (Urho3D::IntVector2 (Urho3D::Input::*)() const) &Urho3D::Input::GetMousePosition, "todo: docstring")
  .def("GetMouseMove", (Urho3D::IntVector2 (Urho3D::Input::*)() const) &Urho3D::Input::GetMouseMove, "todo: docstring")
  .def("GetMouseMoveX", (int (Urho3D::Input::*)() const) &Urho3D::Input::GetMouseMoveX, "todo: docstring")
  .def("GetMouseMoveY", (int (Urho3D::Input::*)() const) &Urho3D::Input::GetMouseMoveY, "todo: docstring")
  .def("GetMouseMoveWheel", (int (Urho3D::Input::*)() const) &Urho3D::Input::GetMouseMoveWheel, "todo: docstring")
  .def("GetInputScale", (Urho3D::Vector2 (Urho3D::Input::*)() const) &Urho3D::Input::GetInputScale, "todo: docstring")
  .def("GetNumTouches", (unsigned int (Urho3D::Input::*)() const) &Urho3D::Input::GetNumTouches, "todo: docstring")
  //.def("GetTouch", (Urho3D::TouchState * (Urho3D::Input::*)(unsigned int) const) &Urho3D::Input::GetTouch, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetNumJoysticks", (unsigned int (Urho3D::Input::*)() const) &Urho3D::Input::GetNumJoysticks, "todo: docstring")
  //.def("GetJoystick", (Urho3D::JoystickState * (Urho3D::Input::*)(int)) &Urho3D::Input::GetJoystick, "todo: docstring", py::arg("id"))
    //['int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetJoystickByIndex", (Urho3D::JoystickState * (Urho3D::Input::*)(unsigned int)) &Urho3D::Input::GetJoystickByIndex, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetJoystickByName", (Urho3D::JoystickState * (Urho3D::Input::*)(const Urho3D::String &)) &Urho3D::Input::GetJoystickByName, "todo: docstring", py::arg("name"))
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetToggleFullscreen", (bool (Urho3D::Input::*)() const) &Urho3D::Input::GetToggleFullscreen, "todo: docstring")
  .def("IsScreenJoystickVisible", (bool (Urho3D::Input::*)(int) const) &Urho3D::Input::IsScreenJoystickVisible, "todo: docstring", py::arg("id"))
  .def("GetScreenKeyboardSupport", (bool (Urho3D::Input::*)() const) &Urho3D::Input::GetScreenKeyboardSupport, "todo: docstring")
  .def("IsScreenKeyboardVisible", (bool (Urho3D::Input::*)() const) &Urho3D::Input::IsScreenKeyboardVisible, "todo: docstring")
  .def("GetTouchEmulation", (bool (Urho3D::Input::*)() const) &Urho3D::Input::GetTouchEmulation, "todo: docstring")
  .def("IsMouseVisible", (bool (Urho3D::Input::*)() const) &Urho3D::Input::IsMouseVisible, "todo: docstring")
  .def("IsMouseGrabbed", (bool (Urho3D::Input::*)() const) &Urho3D::Input::IsMouseGrabbed, "todo: docstring")
  .def("IsMouseLocked", (bool (Urho3D::Input::*)() const) &Urho3D::Input::IsMouseLocked, "todo: docstring")
  .def("GetMouseMode", (Urho3D::MouseMode (Urho3D::Input::*)() const) &Urho3D::Input::GetMouseMode, "todo: docstring")
  .def("HasFocus", (bool (Urho3D::Input::*)()) &Urho3D::Input::HasFocus, "todo: docstring")
  .def("IsMinimized", (bool (Urho3D::Input::*)() const) &Urho3D::Input::IsMinimized, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_LuaScript(py::class_<Urho3D::LuaScript, Urho3D::SharedPtr<Urho3D::LuaScript>, Urho3D::Object, Urho3D::LuaScriptEventListener>& pyclass_Var_Urho3D_LuaScript)
{
    // Class LuaScript Implementation
pyclass_Var_Urho3D_LuaScript
  .def("GetType", (Urho3D::StringHash (Urho3D::LuaScript::*)() const) &Urho3D::LuaScript::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::LuaScript::*)() const) &Urho3D::LuaScript::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::LuaScript::*)() const) &Urho3D::LuaScript::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~LuaScript", (void (Urho3D::LuaScript::*)()) &Urho3D::LuaScript::~LuaScript, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("AddEventHandler", (void (Urho3D::LuaScript::*)(const Urho3D::String &, int)) &Urho3D::LuaScript::AddEventHandler, "todo: docstring", py::arg("eventName"), py::arg("index"))
  .def("AddEventHandler", (void (Urho3D::LuaScript::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::LuaScript::AddEventHandler, "todo: docstring", py::arg("eventName"), py::arg("functionName"))
  .def("AddEventHandler", (void (Urho3D::LuaScript::*)(Urho3D::Object *, const Urho3D::String &, int)) &Urho3D::LuaScript::AddEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"), py::arg("index"))
  .def("AddEventHandler", (void (Urho3D::LuaScript::*)(Urho3D::Object *, const Urho3D::String &, const Urho3D::String &)) &Urho3D::LuaScript::AddEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"), py::arg("functionName"))
  .def("RemoveEventHandler", (void (Urho3D::LuaScript::*)(const Urho3D::String &)) &Urho3D::LuaScript::RemoveEventHandler, "todo: docstring", py::arg("eventName"))
  .def("RemoveEventHandler", (void (Urho3D::LuaScript::*)(Urho3D::Object *, const Urho3D::String &)) &Urho3D::LuaScript::RemoveEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"))
  .def("RemoveEventHandlers", (void (Urho3D::LuaScript::*)(Urho3D::Object *)) &Urho3D::LuaScript::RemoveEventHandlers, "todo: docstring", py::arg("sender"))
  .def("RemoveAllEventHandlers", (void (Urho3D::LuaScript::*)()) &Urho3D::LuaScript::RemoveAllEventHandlers, "todo: docstring")
  .def("RemoveEventHandlersExcept", (void (Urho3D::LuaScript::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::LuaScript::RemoveEventHandlersExcept, "todo: docstring", py::arg("exceptionNames"))
  .def("HasEventHandler", (bool (Urho3D::LuaScript::*)(const Urho3D::String &) const) &Urho3D::LuaScript::HasEventHandler, "todo: docstring", py::arg("eventName"))
  .def("HasEventHandler", (bool (Urho3D::LuaScript::*)(Urho3D::Object *, const Urho3D::String &) const) &Urho3D::LuaScript::HasEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"))
  .def("ExecuteFile", (bool (Urho3D::LuaScript::*)(const Urho3D::String &)) &Urho3D::LuaScript::ExecuteFile, "todo: docstring", py::arg("fileName"))
  .def("ExecuteString", (bool (Urho3D::LuaScript::*)(const Urho3D::String &)) &Urho3D::LuaScript::ExecuteString, "todo: docstring", py::arg("string"))
  .def("LoadRawFile", (bool (Urho3D::LuaScript::*)(const Urho3D::String &)) &Urho3D::LuaScript::LoadRawFile, "todo: docstring", py::arg("fileName"))
  .def("ExecuteRawFile", (bool (Urho3D::LuaScript::*)(const Urho3D::String &)) &Urho3D::LuaScript::ExecuteRawFile, "todo: docstring", py::arg("fileName"))
  .def("ExecuteFunction", (bool (Urho3D::LuaScript::*)(const Urho3D::String &)) &Urho3D::LuaScript::ExecuteFunction, "todo: docstring", py::arg("functionName"))
  .def("SetExecuteConsoleCommands", (void (Urho3D::LuaScript::*)(bool)) &Urho3D::LuaScript::SetExecuteConsoleCommands, "todo: docstring", py::arg("enable"))
  //.def("GetState", (lua_State * (Urho3D::LuaScript::*)() const) &Urho3D::LuaScript::GetState, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetFunction", (Urho3D::LuaFunction * (Urho3D::LuaScript::*)(int)) &Urho3D::LuaScript::GetFunction, "todo: docstring", py::arg("index"))
  .def("GetFunction", (Urho3D::LuaFunction * (Urho3D::LuaScript::*)(const Urho3D::String &, bool)) &Urho3D::LuaScript::GetFunction, "todo: docstring", py::arg("functionName"), py::arg("silentIfNotFound")=false)
  .def("GetExecuteConsoleCommands", (bool (Urho3D::LuaScript::*)() const) &Urho3D::LuaScript::GetExecuteConsoleCommands, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Matrix2(py::class_<Urho3D::Matrix2, Urho3D::ExternalPtr<Urho3D::Matrix2>>& pyclass_Var_Urho3D_Matrix2)
{
    // Class Matrix2 Implementation
pyclass_Var_Urho3D_Matrix2
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix2 &>(), "todo: constructor docstring")
  .def(py::init<float, float, float, float>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Matrix2(), "todo: docstring").def("__assign__", (Urho3D::Matrix2 & (Urho3D::Matrix2::*)(const Urho3D::Matrix2 &)) &Urho3D::Matrix2::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix2']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Matrix2(), "todo: docstring")
    //['Urho3D::Matrix2']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Matrix2(), "todo: docstring")
    //['Urho3D::Matrix2']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Matrix2(), "todo: docstring")
    //['Urho3D::Matrix2']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Matrix2(), "todo: docstring")
    //['Urho3D::Matrix2']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Matrix2(), "todo: docstring")
    //['Urho3D::Matrix2']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetScale", (void (Urho3D::Matrix2::*)(const Urho3D::Vector2 &)) &Urho3D::Matrix2::SetScale, "todo: docstring", py::arg("scale"))
  .def("SetScale", (void (Urho3D::Matrix2::*)(float)) &Urho3D::Matrix2::SetScale, "todo: docstring", py::arg("scale"))
  .def("Scale", (Urho3D::Vector2 (Urho3D::Matrix2::*)() const) &Urho3D::Matrix2::Scale, "todo: docstring")
  .def("Transpose", (Urho3D::Matrix2 (Urho3D::Matrix2::*)() const) &Urho3D::Matrix2::Transpose, "todo: docstring")
  .def("Scaled", (Urho3D::Matrix2 (Urho3D::Matrix2::*)(const Urho3D::Vector2 &) const) &Urho3D::Matrix2::Scaled, "todo: docstring", py::arg("scale"))
  .def("Equals", (bool (Urho3D::Matrix2::*)(const Urho3D::Matrix2 &) const) &Urho3D::Matrix2::Equals, "todo: docstring", py::arg("rhs"))
  .def("Inverse", (Urho3D::Matrix2 (Urho3D::Matrix2::*)() const) &Urho3D::Matrix2::Inverse, "todo: docstring")
  .def("Data", (const float * (Urho3D::Matrix2::*)() const) &Urho3D::Matrix2::Data, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::Matrix2::*)() const) &Urho3D::Matrix2::ToString, "todo: docstring")
// External Operators:
  .def(float() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("m00",&Urho3D::Matrix2::m00_, "todo: var docstring")//float
  .def_readwrite("m01",&Urho3D::Matrix2::m01_, "todo: var docstring")//float
  .def_readwrite("m10",&Urho3D::Matrix2::m10_, "todo: var docstring")//float
  .def_readwrite("m11",&Urho3D::Matrix2::m11_, "todo: var docstring")//float
  .def_readonly_static("ZERO",&Urho3D::Matrix2::ZERO, "todo: var docstring")//const Urho3D::Matrix2
  .def_readonly_static("IDENTITY",&Urho3D::Matrix2::IDENTITY, "todo: var docstring")//const Urho3D::Matrix2
;
}

void Implement_Urho3D_Network(py::class_<Urho3D::Network, Urho3D::SharedPtr<Urho3D::Network>, Urho3D::Object>& pyclass_Var_Urho3D_Network)
{
    // Class Network Implementation
pyclass_Var_Urho3D_Network
  .def("GetType", (Urho3D::StringHash (Urho3D::Network::*)() const) &Urho3D::Network::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Network::*)() const) &Urho3D::Network::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Network::*)() const) &Urho3D::Network::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Network", (void (Urho3D::Network::*)()) &Urho3D::Network::~Network, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("HandleMessage", (void (Urho3D::Network::*)(const SLNet::AddressOrGUID &, int, int, const char *, unsigned long)) &Urho3D::Network::HandleMessage, "todo: docstring", py::arg("source"), py::arg("packetID"), py::arg("msgID"), py::arg("data"), py::arg("numBytes"))
    //['SLNet::AddressOrGUID', 'int', 'int', 'char', 'unsigned long']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("NewConnectionEstablished", (void (Urho3D::Network::*)(const SLNet::AddressOrGUID &)) &Urho3D::Network::NewConnectionEstablished, "todo: docstring", py::arg("connection"))
    //['SLNet::AddressOrGUID']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("ClientDisconnected", (void (Urho3D::Network::*)(const SLNet::AddressOrGUID &)) &Urho3D::Network::ClientDisconnected, "todo: docstring", py::arg("connection"))
    //['SLNet::AddressOrGUID']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetDiscoveryBeacon", (void (Urho3D::Network::*)(const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Network::SetDiscoveryBeacon, "todo: docstring", py::arg("data"))
  .def("DiscoverHosts", (void (Urho3D::Network::*)(unsigned int)) &Urho3D::Network::DiscoverHosts, "todo: docstring", py::arg("port"))
  .def("SetPassword", (void (Urho3D::Network::*)(const Urho3D::String &)) &Urho3D::Network::SetPassword, "todo: docstring", py::arg("password"))
  .def("SetNATServerInfo", (void (Urho3D::Network::*)(const Urho3D::String &, unsigned short)) &Urho3D::Network::SetNATServerInfo, "todo: docstring", py::arg("address"), py::arg("port"))
  .def("Connect", (bool (Urho3D::Network::*)(const Urho3D::String &, unsigned short, Urho3D::Scene *, const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Network::Connect, "todo: docstring", py::arg("address"), py::arg("port"), py::arg("scene"), py::arg("identity")=Variant::emptyVariantMap)
  .def("Disconnect", (void (Urho3D::Network::*)(int)) &Urho3D::Network::Disconnect, "todo: docstring", py::arg("waitMSec")=0)
  .def("StartServer", (bool (Urho3D::Network::*)(unsigned short)) &Urho3D::Network::StartServer, "todo: docstring", py::arg("port"))
  .def("StopServer", (void (Urho3D::Network::*)()) &Urho3D::Network::StopServer, "todo: docstring")
  .def("StartNATClient", (void (Urho3D::Network::*)()) &Urho3D::Network::StartNATClient, "todo: docstring")
  .def("GetGUID", (const Urho3D::String & (Urho3D::Network::*)() const) &Urho3D::Network::GetGUID, "todo: docstring")
  .def("AttemptNATPunchtrough", (void (Urho3D::Network::*)(const Urho3D::String &, Urho3D::Scene *, const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Network::AttemptNATPunchtrough, "todo: docstring", py::arg("guid"), py::arg("scene"), py::arg("identity")=Variant::emptyVariantMap)
  .def("BroadcastMessage", (void (Urho3D::Network::*)(int, bool, bool, const Urho3D::VectorBuffer &, unsigned int)) &Urho3D::Network::BroadcastMessage, "todo: docstring", py::arg("msgID"), py::arg("reliable"), py::arg("inOrder"), py::arg("msg"), py::arg("contentID")=0)
  .def("BroadcastMessage", (void (Urho3D::Network::*)(int, bool, bool, const unsigned char *, unsigned int, unsigned int)) &Urho3D::Network::BroadcastMessage, "todo: docstring", py::arg("msgID"), py::arg("reliable"), py::arg("inOrder"), py::arg("data"), py::arg("numBytes"), py::arg("contentID")=0)
  .def("BroadcastRemoteEvent", (void (Urho3D::Network::*)(Urho3D::StringHash, bool, const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Network::BroadcastRemoteEvent, "todo: docstring", py::arg("eventType"), py::arg("inOrder"), py::arg("eventData")=Variant::emptyVariantMap)
  .def("BroadcastRemoteEvent", (void (Urho3D::Network::*)(Urho3D::Scene *, Urho3D::StringHash, bool, const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Network::BroadcastRemoteEvent, "todo: docstring", py::arg("scene"), py::arg("eventType"), py::arg("inOrder"), py::arg("eventData")=Variant::emptyVariantMap)
  .def("BroadcastRemoteEvent", (void (Urho3D::Network::*)(Urho3D::Node *, Urho3D::StringHash, bool, const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Network::BroadcastRemoteEvent, "todo: docstring", py::arg("node"), py::arg("eventType"), py::arg("inOrder"), py::arg("eventData")=Variant::emptyVariantMap)
  .def("SetUpdateFps", (void (Urho3D::Network::*)(int)) &Urho3D::Network::SetUpdateFps, "todo: docstring", py::arg("fps"))
  .def("SetSimulatedLatency", (void (Urho3D::Network::*)(int)) &Urho3D::Network::SetSimulatedLatency, "todo: docstring", py::arg("ms"))
  .def("SetSimulatedPacketLoss", (void (Urho3D::Network::*)(float)) &Urho3D::Network::SetSimulatedPacketLoss, "todo: docstring", py::arg("probability"))
  .def("RegisterRemoteEvent", (void (Urho3D::Network::*)(Urho3D::StringHash)) &Urho3D::Network::RegisterRemoteEvent, "todo: docstring", py::arg("eventType"))
  .def("UnregisterRemoteEvent", (void (Urho3D::Network::*)(Urho3D::StringHash)) &Urho3D::Network::UnregisterRemoteEvent, "todo: docstring", py::arg("eventType"))
  .def("UnregisterAllRemoteEvents", (void (Urho3D::Network::*)()) &Urho3D::Network::UnregisterAllRemoteEvents, "todo: docstring")
  .def("SetPackageCacheDir", (void (Urho3D::Network::*)(const Urho3D::String &)) &Urho3D::Network::SetPackageCacheDir, "todo: docstring", py::arg("path"))
  .def("SendPackageToClients", (void (Urho3D::Network::*)(Urho3D::Scene *, Urho3D::PackageFile *)) &Urho3D::Network::SendPackageToClients, "todo: docstring", py::arg("scene"), py::arg("package"))
  //.def("MakeHttpRequest", (SharedPtr<Urho3D::HttpRequest> (Urho3D::Network::*)(const Urho3D::String &, const Urho3D::String &, const Urho3D::Vector<Urho3D::String> &, const Urho3D::String &)) &Urho3D::Network::MakeHttpRequest, "todo: docstring", py::arg("url"), py::arg("verb")=String::EMPTY, py::arg("headers")=Vector<String>(), py::arg("postData")=String::EMPTY)
    //['Urho3D::String', 'Urho3D::String', 'Urho3D::Vector<Urho3D::String>', 'Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("BanAddress", (void (Urho3D::Network::*)(const Urho3D::String &)) &Urho3D::Network::BanAddress, "todo: docstring", py::arg("address"))
  .def("GetUpdateFps", (int (Urho3D::Network::*)() const) &Urho3D::Network::GetUpdateFps, "todo: docstring")
  .def("GetSimulatedLatency", (int (Urho3D::Network::*)() const) &Urho3D::Network::GetSimulatedLatency, "todo: docstring")
  .def("GetSimulatedPacketLoss", (float (Urho3D::Network::*)() const) &Urho3D::Network::GetSimulatedPacketLoss, "todo: docstring")
  //.def("GetConnection", (Urho3D::Connection * (Urho3D::Network::*)(const SLNet::AddressOrGUID &) const) &Urho3D::Network::GetConnection, "todo: docstring", py::arg("connection"))
    //['SLNet::AddressOrGUID']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetServerConnection", (Urho3D::Connection * (Urho3D::Network::*)() const) &Urho3D::Network::GetServerConnection, "todo: docstring")
  //.def("GetClientConnections", (Vector<SharedPtr<Urho3D::Connection> > (Urho3D::Network::*)() const) &Urho3D::Network::GetClientConnections, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("IsServerRunning", (bool (Urho3D::Network::*)() const) &Urho3D::Network::IsServerRunning, "todo: docstring")
  .def("CheckRemoteEvent", (bool (Urho3D::Network::*)(Urho3D::StringHash) const) &Urho3D::Network::CheckRemoteEvent, "todo: docstring", py::arg("eventType"))
  .def("GetPackageCacheDir", (const Urho3D::String & (Urho3D::Network::*)() const) &Urho3D::Network::GetPackageCacheDir, "todo: docstring")
  .def("Update", (void (Urho3D::Network::*)(float)) &Urho3D::Network::Update, "todo: docstring", py::arg("timeStep"))
  .def("PostUpdate", (void (Urho3D::Network::*)(float)) &Urho3D::Network::PostUpdate, "todo: docstring", py::arg("timeStep"))
// Class Variables:
;
}

void Implement_Urho3D_CheckBox(py::class_<Urho3D::CheckBox, Urho3D::SharedPtr<Urho3D::CheckBox>, Urho3D::BorderImage>& pyclass_Var_Urho3D_CheckBox)
{
    // Class CheckBox Implementation
pyclass_Var_Urho3D_CheckBox
  .def("GetType", (Urho3D::StringHash (Urho3D::CheckBox::*)() const) &Urho3D::CheckBox::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CheckBox::*)() const) &Urho3D::CheckBox::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CheckBox::*)() const) &Urho3D::CheckBox::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CheckBox", (void (Urho3D::CheckBox::*)()) &Urho3D::CheckBox::~CheckBox, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("GetBatches", (void (Urho3D::CheckBox::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::CheckBox::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnClickBegin", (void (Urho3D::CheckBox::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *)) &Urho3D::CheckBox::OnClickBegin, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  //.def("OnKey", (void (Urho3D::CheckBox::*)(Urho3D::Key, Urho3D::FlagSet<Urho3D::MouseButton, void>, Urho3D::FlagSet<Urho3D::Qualifier, void>)) &Urho3D::CheckBox::OnKey, "todo: docstring", py::arg("key"), py::arg("buttons"), py::arg("qualifiers"))
    //['Urho3D::Key', 'Urho3D::FlagSet<Urho3D::MouseButton, void>', 'Urho3D::FlagSet<Urho3D::Qualifier, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetChecked", (void (Urho3D::CheckBox::*)(bool)) &Urho3D::CheckBox::SetChecked, "todo: docstring", py::arg("enable"))
  .def("SetCheckedOffset", (void (Urho3D::CheckBox::*)(const Urho3D::IntVector2 &)) &Urho3D::CheckBox::SetCheckedOffset, "todo: docstring", py::arg("offset"))
  .def("SetCheckedOffset", (void (Urho3D::CheckBox::*)(int, int)) &Urho3D::CheckBox::SetCheckedOffset, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("IsChecked", (bool (Urho3D::CheckBox::*)() const) &Urho3D::CheckBox::IsChecked, "todo: docstring")
  .def("GetCheckedOffset", (const Urho3D::IntVector2 & (Urho3D::CheckBox::*)() const) &Urho3D::CheckBox::GetCheckedOffset, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Window(py::class_<Urho3D::Window, Urho3D::SharedPtr<Urho3D::Window>, Urho3D::BorderImage>& pyclass_Var_Urho3D_Window)
{
    // Class Window Implementation
pyclass_Var_Urho3D_Window
  .def("GetType", (Urho3D::StringHash (Urho3D::Window::*)() const) &Urho3D::Window::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Window::*)() const) &Urho3D::Window::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Window::*)() const) &Urho3D::Window::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Window", (void (Urho3D::Window::*)()) &Urho3D::Window::~Window, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("GetBatches", (void (Urho3D::Window::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::Window::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnHover", (void (Urho3D::Window::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Window::OnHover, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragBegin", (void (Urho3D::Window::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Window::OnDragBegin, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragMove", (void (Urho3D::Window::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Window::OnDragMove, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("deltaPos"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragEnd", (void (Urho3D::Window::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Window::OnDragEnd, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("dragButtons"), py::arg("buttons"), py::arg("cursor"))
  .def("OnDragCancel", (void (Urho3D::Window::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Window::OnDragCancel, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("dragButtons"), py::arg("buttons"), py::arg("cursor"))
  .def("SetMovable", (void (Urho3D::Window::*)(bool)) &Urho3D::Window::SetMovable, "todo: docstring", py::arg("enable"))
  .def("SetResizable", (void (Urho3D::Window::*)(bool)) &Urho3D::Window::SetResizable, "todo: docstring", py::arg("enable"))
  .def("SetFixedWidthResizing", (void (Urho3D::Window::*)(bool)) &Urho3D::Window::SetFixedWidthResizing, "todo: docstring", py::arg("enable"))
  .def("SetFixedHeightResizing", (void (Urho3D::Window::*)(bool)) &Urho3D::Window::SetFixedHeightResizing, "todo: docstring", py::arg("enable"))
  .def("SetResizeBorder", (void (Urho3D::Window::*)(const Urho3D::IntRect &)) &Urho3D::Window::SetResizeBorder, "todo: docstring", py::arg("rect"))
  .def("SetModal", (void (Urho3D::Window::*)(bool)) &Urho3D::Window::SetModal, "todo: docstring", py::arg("modal"))
  .def("SetModalShadeColor", (void (Urho3D::Window::*)(const Urho3D::Color &)) &Urho3D::Window::SetModalShadeColor, "todo: docstring", py::arg("color"))
  .def("SetModalFrameColor", (void (Urho3D::Window::*)(const Urho3D::Color &)) &Urho3D::Window::SetModalFrameColor, "todo: docstring", py::arg("color"))
  .def("SetModalFrameSize", (void (Urho3D::Window::*)(const Urho3D::IntVector2 &)) &Urho3D::Window::SetModalFrameSize, "todo: docstring", py::arg("size"))
  .def("SetModalAutoDismiss", (void (Urho3D::Window::*)(bool)) &Urho3D::Window::SetModalAutoDismiss, "todo: docstring", py::arg("enable"))
  .def("IsMovable", (bool (Urho3D::Window::*)() const) &Urho3D::Window::IsMovable, "todo: docstring")
  .def("IsResizable", (bool (Urho3D::Window::*)() const) &Urho3D::Window::IsResizable, "todo: docstring")
  .def("GetFixedWidthResizing", (bool (Urho3D::Window::*)() const) &Urho3D::Window::GetFixedWidthResizing, "todo: docstring")
  .def("GetFixedHeightResizing", (bool (Urho3D::Window::*)() const) &Urho3D::Window::GetFixedHeightResizing, "todo: docstring")
  .def("GetResizeBorder", (const Urho3D::IntRect & (Urho3D::Window::*)() const) &Urho3D::Window::GetResizeBorder, "todo: docstring")
  .def("IsModal", (bool (Urho3D::Window::*)() const) &Urho3D::Window::IsModal, "todo: docstring")
  .def("GetModalShadeColor", (const Urho3D::Color & (Urho3D::Window::*)() const) &Urho3D::Window::GetModalShadeColor, "todo: docstring")
  .def("GetModalFrameColor", (const Urho3D::Color & (Urho3D::Window::*)() const) &Urho3D::Window::GetModalFrameColor, "todo: docstring")
  .def("GetModalFrameSize", (const Urho3D::IntVector2 & (Urho3D::Window::*)() const) &Urho3D::Window::GetModalFrameSize, "todo: docstring")
  .def("GetModalAutoDismiss", (bool (Urho3D::Window::*)() const) &Urho3D::Window::GetModalAutoDismiss, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ScrollBar(py::class_<Urho3D::ScrollBar, Urho3D::SharedPtr<Urho3D::ScrollBar>, Urho3D::BorderImage>& pyclass_Var_Urho3D_ScrollBar)
{
    // Class ScrollBar Implementation
pyclass_Var_Urho3D_ScrollBar
  .def("GetType", (Urho3D::StringHash (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ScrollBar", (void (Urho3D::ScrollBar::*)()) &Urho3D::ScrollBar::~ScrollBar, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::ScrollBar::*)()) &Urho3D::ScrollBar::ApplyAttributes, "todo: docstring")
  .def("OnResize", (void (Urho3D::ScrollBar::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::ScrollBar::OnResize, "todo: docstring", py::arg("newSize"), py::arg("delta"))
  .def("OnSetEditable", (void (Urho3D::ScrollBar::*)()) &Urho3D::ScrollBar::OnSetEditable, "todo: docstring")
  .def("SetOrientation", (void (Urho3D::ScrollBar::*)(Urho3D::Orientation)) &Urho3D::ScrollBar::SetOrientation, "todo: docstring", py::arg("orientation"))
  .def("SetRange", (void (Urho3D::ScrollBar::*)(float)) &Urho3D::ScrollBar::SetRange, "todo: docstring", py::arg("range"))
  .def("SetValue", (void (Urho3D::ScrollBar::*)(float)) &Urho3D::ScrollBar::SetValue, "todo: docstring", py::arg("value"))
  .def("ChangeValue", (void (Urho3D::ScrollBar::*)(float)) &Urho3D::ScrollBar::ChangeValue, "todo: docstring", py::arg("delta"))
  .def("SetScrollStep", (void (Urho3D::ScrollBar::*)(float)) &Urho3D::ScrollBar::SetScrollStep, "todo: docstring", py::arg("step"))
  .def("SetStepFactor", (void (Urho3D::ScrollBar::*)(float)) &Urho3D::ScrollBar::SetStepFactor, "todo: docstring", py::arg("factor"))
  .def("StepBack", (void (Urho3D::ScrollBar::*)()) &Urho3D::ScrollBar::StepBack, "todo: docstring")
  .def("StepForward", (void (Urho3D::ScrollBar::*)()) &Urho3D::ScrollBar::StepForward, "todo: docstring")
  .def("GetOrientation", (Urho3D::Orientation (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetOrientation, "todo: docstring")
  .def("GetRange", (float (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetRange, "todo: docstring")
  .def("GetValue", (float (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetValue, "todo: docstring")
  .def("GetScrollStep", (float (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetScrollStep, "todo: docstring")
  .def("GetStepFactor", (float (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetStepFactor, "todo: docstring")
  .def("GetEffectiveScrollStep", (float (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetEffectiveScrollStep, "todo: docstring")
  .def("GetBackButton", (Urho3D::Button * (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetBackButton, "todo: docstring")
  .def("GetForwardButton", (Urho3D::Button * (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetForwardButton, "todo: docstring")
  .def("GetSlider", (Urho3D::Slider * (Urho3D::ScrollBar::*)() const) &Urho3D::ScrollBar::GetSlider, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_UISelectable(py::class_<Urho3D::UISelectable, Urho3D::SharedPtr<Urho3D::UISelectable>, Urho3D::UIElement>& pyclass_Var_Urho3D_UISelectable)
{
    // Class UISelectable Implementation
pyclass_Var_Urho3D_UISelectable
  .def("GetType", (Urho3D::StringHash (Urho3D::UISelectable::*)() const) &Urho3D::UISelectable::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::UISelectable::*)() const) &Urho3D::UISelectable::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::UISelectable::*)() const) &Urho3D::UISelectable::GetTypeInfo, "todo: docstring")
  //.def("~UISelectable", (void (Urho3D::UISelectable::*)()) &Urho3D::UISelectable::~UISelectable, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("GetBatches", (void (Urho3D::UISelectable::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::UISelectable::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetSelectionColor", (void (Urho3D::UISelectable::*)(const Urho3D::Color &)) &Urho3D::UISelectable::SetSelectionColor, "todo: docstring", py::arg("color"))
  .def("SetHoverColor", (void (Urho3D::UISelectable::*)(const Urho3D::Color &)) &Urho3D::UISelectable::SetHoverColor, "todo: docstring", py::arg("color"))
  .def("GetSelectionColor", (const Urho3D::Color & (Urho3D::UISelectable::*)() const) &Urho3D::UISelectable::GetSelectionColor, "todo: docstring")
  .def("GetHoverColor", (const Urho3D::Color & (Urho3D::UISelectable::*)() const) &Urho3D::UISelectable::GetHoverColor, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Slider(py::class_<Urho3D::Slider, Urho3D::SharedPtr<Urho3D::Slider>, Urho3D::BorderImage>& pyclass_Var_Urho3D_Slider)
{
    // Class Slider Implementation
pyclass_Var_Urho3D_Slider
  .def("GetType", (Urho3D::StringHash (Urho3D::Slider::*)() const) &Urho3D::Slider::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Slider::*)() const) &Urho3D::Slider::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Slider::*)() const) &Urho3D::Slider::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Slider", (void (Urho3D::Slider::*)()) &Urho3D::Slider::~Slider, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Update", (void (Urho3D::Slider::*)(float)) &Urho3D::Slider::Update, "todo: docstring", py::arg("timeStep"))
  .def("OnHover", (void (Urho3D::Slider::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Slider::OnHover, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnClickBegin", (void (Urho3D::Slider::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *)) &Urho3D::Slider::OnClickBegin, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnClickEnd", (void (Urho3D::Slider::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, int, Urho3D::Cursor *, Urho3D::UIElement *)) &Urho3D::Slider::OnClickEnd, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("button"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"), py::arg("beginElement"))
  .def("OnDragBegin", (void (Urho3D::Slider::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Slider::OnDragBegin, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragMove", (void (Urho3D::Slider::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Slider::OnDragMove, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("deltaPos"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnDragEnd", (void (Urho3D::Slider::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Slider::OnDragEnd, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("dragButtons"), py::arg("buttons"), py::arg("cursor"))
  .def("OnResize", (void (Urho3D::Slider::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::Slider::OnResize, "todo: docstring", py::arg("newSize"), py::arg("delta"))
  .def("SetOrientation", (void (Urho3D::Slider::*)(Urho3D::Orientation)) &Urho3D::Slider::SetOrientation, "todo: docstring", py::arg("orientation"))
  .def("SetRange", (void (Urho3D::Slider::*)(float)) &Urho3D::Slider::SetRange, "todo: docstring", py::arg("range"))
  .def("SetValue", (void (Urho3D::Slider::*)(float)) &Urho3D::Slider::SetValue, "todo: docstring", py::arg("value"))
  .def("ChangeValue", (void (Urho3D::Slider::*)(float)) &Urho3D::Slider::ChangeValue, "todo: docstring", py::arg("delta"))
  .def("SetRepeatRate", (void (Urho3D::Slider::*)(float)) &Urho3D::Slider::SetRepeatRate, "todo: docstring", py::arg("rate"))
  .def("GetOrientation", (Urho3D::Orientation (Urho3D::Slider::*)() const) &Urho3D::Slider::GetOrientation, "todo: docstring")
  .def("GetRange", (float (Urho3D::Slider::*)() const) &Urho3D::Slider::GetRange, "todo: docstring")
  .def("GetValue", (float (Urho3D::Slider::*)() const) &Urho3D::Slider::GetValue, "todo: docstring")
  .def("GetKnob", (Urho3D::BorderImage * (Urho3D::Slider::*)() const) &Urho3D::Slider::GetKnob, "todo: docstring")
  .def("GetRepeatRate", (float (Urho3D::Slider::*)() const) &Urho3D::Slider::GetRepeatRate, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ToolTip(py::class_<Urho3D::ToolTip, Urho3D::SharedPtr<Urho3D::ToolTip>, Urho3D::UIElement>& pyclass_Var_Urho3D_ToolTip)
{
    // Class ToolTip Implementation
pyclass_Var_Urho3D_ToolTip
  .def("GetType", (Urho3D::StringHash (Urho3D::ToolTip::*)() const) &Urho3D::ToolTip::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ToolTip::*)() const) &Urho3D::ToolTip::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ToolTip::*)() const) &Urho3D::ToolTip::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ToolTip", (void (Urho3D::ToolTip::*)()) &Urho3D::ToolTip::~ToolTip, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Update", (void (Urho3D::ToolTip::*)(float)) &Urho3D::ToolTip::Update, "todo: docstring", py::arg("timeStep"))
  .def("Reset", (void (Urho3D::ToolTip::*)()) &Urho3D::ToolTip::Reset, "todo: docstring")
  .def("AddAltTarget", (void (Urho3D::ToolTip::*)(Urho3D::UIElement *)) &Urho3D::ToolTip::AddAltTarget, "todo: docstring", py::arg("target"))
  .def("SetDelay", (void (Urho3D::ToolTip::*)(float)) &Urho3D::ToolTip::SetDelay, "todo: docstring", py::arg("delay"))
  .def("GetDelay", (float (Urho3D::ToolTip::*)() const) &Urho3D::ToolTip::GetDelay, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_View3D(py::class_<Urho3D::View3D, Urho3D::SharedPtr<Urho3D::View3D>, Urho3D::Window>& pyclass_Var_Urho3D_View3D)
{
    // Class View3D Implementation
pyclass_Var_Urho3D_View3D
  .def("GetType", (Urho3D::StringHash (Urho3D::View3D::*)() const) &Urho3D::View3D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::View3D::*)() const) &Urho3D::View3D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::View3D::*)() const) &Urho3D::View3D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~View3D", (void (Urho3D::View3D::*)()) &Urho3D::View3D::~View3D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnResize", (void (Urho3D::View3D::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::View3D::OnResize, "todo: docstring", py::arg("newSize"), py::arg("delta"))
  .def("SetView", (void (Urho3D::View3D::*)(Urho3D::Scene *, Urho3D::Camera *, bool)) &Urho3D::View3D::SetView, "todo: docstring", py::arg("scene"), py::arg("camera"), py::arg("ownScene")=true)
  .def("SetFormat", (void (Urho3D::View3D::*)(unsigned int)) &Urho3D::View3D::SetFormat, "todo: docstring", py::arg("format"))
  .def("SetAutoUpdate", (void (Urho3D::View3D::*)(bool)) &Urho3D::View3D::SetAutoUpdate, "todo: docstring", py::arg("enable"))
  .def("QueueUpdate", (void (Urho3D::View3D::*)()) &Urho3D::View3D::QueueUpdate, "todo: docstring")
  .def("GetFormat", (unsigned int (Urho3D::View3D::*)() const) &Urho3D::View3D::GetFormat, "todo: docstring")
  .def("GetAutoUpdate", (bool (Urho3D::View3D::*)() const) &Urho3D::View3D::GetAutoUpdate, "todo: docstring")
  .def("GetScene", (Urho3D::Scene * (Urho3D::View3D::*)() const) &Urho3D::View3D::GetScene, "todo: docstring")
  .def("GetCameraNode", (Urho3D::Node * (Urho3D::View3D::*)() const) &Urho3D::View3D::GetCameraNode, "todo: docstring")
  .def("GetRenderTexture", (Urho3D::Texture2D * (Urho3D::View3D::*)() const) &Urho3D::View3D::GetRenderTexture, "todo: docstring")
  .def("GetDepthTexture", (Urho3D::Texture2D * (Urho3D::View3D::*)() const) &Urho3D::View3D::GetDepthTexture, "todo: docstring")
  .def("GetViewport", (Urho3D::Viewport * (Urho3D::View3D::*)() const) &Urho3D::View3D::GetViewport, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_TileMapObject2D(py::class_<Urho3D::TileMapObject2D, Urho3D::SharedPtr<Urho3D::TileMapObject2D>, Urho3D::RefCounted>& pyclass_Var_Urho3D_TileMapObject2D)
{
    // Class TileMapObject2D Implementation
pyclass_Var_Urho3D_TileMapObject2D
  .def(py::init<>(), "todo: constructor docstring")
  .def("GetObjectType", (Urho3D::TileMapObjectType2D (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetObjectType, "todo: docstring")
  .def("GetName", (const Urho3D::String & (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetName, "todo: docstring")
  .def("GetType", (const Urho3D::String & (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetType, "todo: docstring")
  .def("GetPosition", (const Urho3D::Vector2 & (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetPosition, "todo: docstring")
  .def("GetSize", (const Urho3D::Vector2 & (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetSize, "todo: docstring")
  .def("GetNumPoints", (unsigned int (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetNumPoints, "todo: docstring")
  .def("GetPoint", (const Urho3D::Vector2 & (Urho3D::TileMapObject2D::*)(unsigned int) const) &Urho3D::TileMapObject2D::GetPoint, "todo: docstring", py::arg("index"))
  .def("GetTileGid", (unsigned int (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetTileGid, "todo: docstring")
  .def("GetTileFlipX", (bool (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetTileFlipX, "todo: docstring")
  .def("GetTileFlipY", (bool (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetTileFlipY, "todo: docstring")
  .def("GetTileSwapXY", (bool (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetTileSwapXY, "todo: docstring")
  .def("GetTileSprite", (Urho3D::Sprite2D * (Urho3D::TileMapObject2D::*)() const) &Urho3D::TileMapObject2D::GetTileSprite, "todo: docstring")
  .def("HasProperty", (bool (Urho3D::TileMapObject2D::*)(const Urho3D::String &) const) &Urho3D::TileMapObject2D::HasProperty, "todo: docstring", py::arg("name"))
  .def("GetProperty", (const Urho3D::String & (Urho3D::TileMapObject2D::*)(const Urho3D::String &) const) &Urho3D::TileMapObject2D::GetProperty, "todo: docstring", py::arg("name"))
// Class Variables:
;
}

void Implement_Urho3D_CScriptDictValue(py::class_<Urho3D::CScriptDictValue, Urho3D::ExternalPtr<Urho3D::CScriptDictValue>>& pyclass_Var_Urho3D_CScriptDictValue)
{
    // Class CScriptDictValue Implementation
pyclass_Var_Urho3D_CScriptDictValue
  .def(py::init<>(), "todo: constructor docstring")
  //.def(py::init<asIScriptEngine *, void *, int>(), "todo: constructor docstring")
    //['asIScriptEngine', 'void', 'int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("~CScriptDictValue", (void (Urho3D::CScriptDictValue::*)()) &Urho3D::CScriptDictValue::~CScriptDictValue, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("Set", (void (Urho3D::CScriptDictValue::*)(asIScriptEngine *, void *, int)) &Urho3D::CScriptDictValue::Set, "todo: docstring", py::arg("engine"), py::arg("value"), py::arg("typeId"))
    //['asIScriptEngine', 'void', 'int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("Set", (void (Urho3D::CScriptDictValue::*)(asIScriptEngine *, const long &)) &Urho3D::CScriptDictValue::Set, "todo: docstring", py::arg("engine"), py::arg("value"))
    //['asIScriptEngine', 'long']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("Set", (void (Urho3D::CScriptDictValue::*)(asIScriptEngine *, const double &)) &Urho3D::CScriptDictValue::Set, "todo: docstring", py::arg("engine"), py::arg("value"))
    //['asIScriptEngine', 'double']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("Get", (bool (Urho3D::CScriptDictValue::*)(asIScriptEngine *, void *, int) const) &Urho3D::CScriptDictValue::Get, "todo: docstring", py::arg("engine"), py::arg("value"), py::arg("typeId"))
    //['asIScriptEngine', 'void', 'int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("Get", (bool (Urho3D::CScriptDictValue::*)(asIScriptEngine *, long &) const) &Urho3D::CScriptDictValue::Get, "todo: docstring", py::arg("engine"), py::arg("value"))
    //['asIScriptEngine', 'long']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("Get", (bool (Urho3D::CScriptDictValue::*)(asIScriptEngine *, double &) const) &Urho3D::CScriptDictValue::Get, "todo: docstring", py::arg("engine"), py::arg("value"))
    //['asIScriptEngine', 'double']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetTypeId", (int (Urho3D::CScriptDictValue::*)() const) &Urho3D::CScriptDictValue::GetTypeId, "todo: docstring")
  //.def("FreeValue", (void (Urho3D::CScriptDictValue::*)(asIScriptEngine *)) &Urho3D::CScriptDictValue::FreeValue, "todo: docstring", py::arg("engine"))
    //['asIScriptEngine']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_Rect(py::class_<Urho3D::Rect, Urho3D::ExternalPtr<Urho3D::Rect>>& pyclass_Var_Urho3D_Rect)
{
    // Class Rect Implementation
pyclass_Var_Urho3D_Rect
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector2 &, const Urho3D::Vector2 &>(), "todo: constructor docstring")
  .def(py::init<float, float, float, float>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector4 &>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Rect &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Rect(), "todo: docstring").def("__assign__", (Urho3D::Rect & (Urho3D::Rect::*)(const Urho3D::Rect &)) &Urho3D::Rect::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Rect']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Rect(), "todo: docstring")
    //['Urho3D::Rect']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Rect(), "todo: docstring")
    //['Urho3D::Rect']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::Rect(), "todo: docstring")
    //['Urho3D::Rect']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self -= Urho3D::Rect(), "todo: docstring")
    //['Urho3D::Rect']; op -=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= float(), "todo: docstring")
    //['float']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= float(), "todo: docstring")
    //['float']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / float(), "todo: docstring")
    //['float']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Rect(), "todo: docstring")
    //['Urho3D::Rect']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Rect(), "todo: docstring")
    //['Urho3D::Rect']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Define", (void (Urho3D::Rect::*)(const Urho3D::Rect &)) &Urho3D::Rect::Define, "todo: docstring", py::arg("rect"))
  .def("Define", (void (Urho3D::Rect::*)(const Urho3D::Vector2 &, const Urho3D::Vector2 &)) &Urho3D::Rect::Define, "todo: docstring", py::arg("min"), py::arg("max"))
  .def("Define", (void (Urho3D::Rect::*)(const Urho3D::Vector2 &)) &Urho3D::Rect::Define, "todo: docstring", py::arg("point"))
  .def("Merge", (void (Urho3D::Rect::*)(const Urho3D::Vector2 &)) &Urho3D::Rect::Merge, "todo: docstring", py::arg("point"))
  .def("Merge", (void (Urho3D::Rect::*)(const Urho3D::Rect &)) &Urho3D::Rect::Merge, "todo: docstring", py::arg("rect"))
  .def("Clear", (void (Urho3D::Rect::*)()) &Urho3D::Rect::Clear, "todo: docstring")
  .def("Clip", (void (Urho3D::Rect::*)(const Urho3D::Rect &)) &Urho3D::Rect::Clip, "todo: docstring", py::arg("rect"))
  .def("Defined", (bool (Urho3D::Rect::*)() const) &Urho3D::Rect::Defined, "todo: docstring")
  .def("Center", (Urho3D::Vector2 (Urho3D::Rect::*)() const) &Urho3D::Rect::Center, "todo: docstring")
  .def("Size", (Urho3D::Vector2 (Urho3D::Rect::*)() const) &Urho3D::Rect::Size, "todo: docstring")
  .def("HalfSize", (Urho3D::Vector2 (Urho3D::Rect::*)() const) &Urho3D::Rect::HalfSize, "todo: docstring")
  .def("Equals", (bool (Urho3D::Rect::*)(const Urho3D::Rect &) const) &Urho3D::Rect::Equals, "todo: docstring", py::arg("rhs"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::Rect::*)(const Urho3D::Vector2 &) const) &Urho3D::Rect::IsInside, "todo: docstring", py::arg("point"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::Rect::*)(const Urho3D::Rect &) const) &Urho3D::Rect::IsInside, "todo: docstring", py::arg("rect"))
  .def("Data", (const void * (Urho3D::Rect::*)() const) &Urho3D::Rect::Data, "todo: docstring")
  .def("ToVector4", (Urho3D::Vector4 (Urho3D::Rect::*)() const) &Urho3D::Rect::ToVector4, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::Rect::*)() const) &Urho3D::Rect::ToString, "todo: docstring")
  .def("Min", (Urho3D::Vector2 (Urho3D::Rect::*)() const) &Urho3D::Rect::Min, "todo: docstring")
  .def("Max", (Urho3D::Vector2 (Urho3D::Rect::*)() const) &Urho3D::Rect::Max, "todo: docstring")
  .def("Left", (float (Urho3D::Rect::*)() const) &Urho3D::Rect::Left, "todo: docstring")
  .def("Top", (float (Urho3D::Rect::*)() const) &Urho3D::Rect::Top, "todo: docstring")
  .def("Right", (float (Urho3D::Rect::*)() const) &Urho3D::Rect::Right, "todo: docstring")
  .def("Bottom", (float (Urho3D::Rect::*)() const) &Urho3D::Rect::Bottom, "todo: docstring")
// Class Variables:
  .def_readwrite("min",&Urho3D::Rect::min_, "todo: var docstring")//Urho3D::Vector2
  .def_readwrite("max",&Urho3D::Rect::max_, "todo: var docstring")//Urho3D::Vector2
  .def_readonly_static("FULL",&Urho3D::Rect::FULL, "todo: var docstring")//const Urho3D::Rect
  .def_readonly_static("POSITIVE",&Urho3D::Rect::POSITIVE, "todo: var docstring")//const Urho3D::Rect
  .def_readonly_static("ZERO",&Urho3D::Rect::ZERO, "todo: var docstring")//const Urho3D::Rect
;
}

void Implement_Urho3D_ResourceRouter(py::class_<Urho3D::ResourceRouter, Urho3D::SharedPtr<Urho3D::ResourceRouter>, Urho3D::Object>& pyclass_Var_Urho3D_ResourceRouter)
{
    // Class ResourceRouter Implementation
pyclass_Var_Urho3D_ResourceRouter
  //.def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
    // Abstract class ResourceRouter -> no init
  .def("Route", (void (Urho3D::ResourceRouter::*)(Urho3D::String &, Urho3D::ResourceRequest)) &Urho3D::ResourceRouter::Route, "todo: docstring", py::arg("name"), py::arg("requestType"))
// Class Variables:
;
}

void Implement_Urho3D_Serializer(py::class_<Urho3D::Serializer, Urho3D::ExternalPtr<Urho3D::Serializer>>& pyclass_Var_Urho3D_Serializer)
{
    // Class Serializer Implementation
pyclass_Var_Urho3D_Serializer
  //.def("~Serializer", (void (Urho3D::Serializer::*)()) &Urho3D::Serializer::~Serializer, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Write", (unsigned int (Urho3D::Serializer::*)(const void *, unsigned int)) &Urho3D::Serializer::Write, "todo: docstring", py::arg("data"), py::arg("size"))
  .def("WriteInt64", (bool (Urho3D::Serializer::*)(long long)) &Urho3D::Serializer::WriteInt64, "todo: docstring", py::arg("value"))
  .def("WriteInt", (bool (Urho3D::Serializer::*)(int)) &Urho3D::Serializer::WriteInt, "todo: docstring", py::arg("value"))
  //.def("WriteShort", (bool (Urho3D::Serializer::*)(short)) &Urho3D::Serializer::WriteShort, "todo: docstring", py::arg("value"))
    //['short']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("WriteByte", (bool (Urho3D::Serializer::*)(signed char)) &Urho3D::Serializer::WriteByte, "todo: docstring", py::arg("value"))
    //['signed char']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("WriteUInt64", (bool (Urho3D::Serializer::*)(unsigned long long)) &Urho3D::Serializer::WriteUInt64, "todo: docstring", py::arg("value"))
  .def("WriteUInt", (bool (Urho3D::Serializer::*)(unsigned int)) &Urho3D::Serializer::WriteUInt, "todo: docstring", py::arg("value"))
  .def("WriteUShort", (bool (Urho3D::Serializer::*)(unsigned short)) &Urho3D::Serializer::WriteUShort, "todo: docstring", py::arg("value"))
  .def("WriteUByte", (bool (Urho3D::Serializer::*)(unsigned char)) &Urho3D::Serializer::WriteUByte, "todo: docstring", py::arg("value"))
  .def("WriteBool", (bool (Urho3D::Serializer::*)(bool)) &Urho3D::Serializer::WriteBool, "todo: docstring", py::arg("value"))
  .def("WriteFloat", (bool (Urho3D::Serializer::*)(float)) &Urho3D::Serializer::WriteFloat, "todo: docstring", py::arg("value"))
  .def("WriteDouble", (bool (Urho3D::Serializer::*)(double)) &Urho3D::Serializer::WriteDouble, "todo: docstring", py::arg("value"))
  .def("WriteIntRect", (bool (Urho3D::Serializer::*)(const Urho3D::IntRect &)) &Urho3D::Serializer::WriteIntRect, "todo: docstring", py::arg("value"))
  .def("WriteIntVector2", (bool (Urho3D::Serializer::*)(const Urho3D::IntVector2 &)) &Urho3D::Serializer::WriteIntVector2, "todo: docstring", py::arg("value"))
  .def("WriteIntVector3", (bool (Urho3D::Serializer::*)(const Urho3D::IntVector3 &)) &Urho3D::Serializer::WriteIntVector3, "todo: docstring", py::arg("value"))
  .def("WriteRect", (bool (Urho3D::Serializer::*)(const Urho3D::Rect &)) &Urho3D::Serializer::WriteRect, "todo: docstring", py::arg("value"))
  .def("WriteVector2", (bool (Urho3D::Serializer::*)(const Urho3D::Vector2 &)) &Urho3D::Serializer::WriteVector2, "todo: docstring", py::arg("value"))
  .def("WriteVector3", (bool (Urho3D::Serializer::*)(const Urho3D::Vector3 &)) &Urho3D::Serializer::WriteVector3, "todo: docstring", py::arg("value"))
  .def("WritePackedVector3", (bool (Urho3D::Serializer::*)(const Urho3D::Vector3 &, float)) &Urho3D::Serializer::WritePackedVector3, "todo: docstring", py::arg("value"), py::arg("maxAbsCoord"))
  .def("WriteVector4", (bool (Urho3D::Serializer::*)(const Urho3D::Vector4 &)) &Urho3D::Serializer::WriteVector4, "todo: docstring", py::arg("value"))
  .def("WriteQuaternion", (bool (Urho3D::Serializer::*)(const Urho3D::Quaternion &)) &Urho3D::Serializer::WriteQuaternion, "todo: docstring", py::arg("value"))
  .def("WritePackedQuaternion", (bool (Urho3D::Serializer::*)(const Urho3D::Quaternion &)) &Urho3D::Serializer::WritePackedQuaternion, "todo: docstring", py::arg("value"))
  .def("WriteMatrix3", (bool (Urho3D::Serializer::*)(const Urho3D::Matrix3 &)) &Urho3D::Serializer::WriteMatrix3, "todo: docstring", py::arg("value"))
  .def("WriteMatrix3x4", (bool (Urho3D::Serializer::*)(const Urho3D::Matrix3x4 &)) &Urho3D::Serializer::WriteMatrix3x4, "todo: docstring", py::arg("value"))
  .def("WriteMatrix4", (bool (Urho3D::Serializer::*)(const Urho3D::Matrix4 &)) &Urho3D::Serializer::WriteMatrix4, "todo: docstring", py::arg("value"))
  .def("WriteColor", (bool (Urho3D::Serializer::*)(const Urho3D::Color &)) &Urho3D::Serializer::WriteColor, "todo: docstring", py::arg("value"))
  .def("WriteBoundingBox", (bool (Urho3D::Serializer::*)(const Urho3D::BoundingBox &)) &Urho3D::Serializer::WriteBoundingBox, "todo: docstring", py::arg("value"))
  .def("WriteString", (bool (Urho3D::Serializer::*)(const Urho3D::String &)) &Urho3D::Serializer::WriteString, "todo: docstring", py::arg("value"))
  .def("WriteFileID", (bool (Urho3D::Serializer::*)(const Urho3D::String &)) &Urho3D::Serializer::WriteFileID, "todo: docstring", py::arg("value"))
  .def("WriteStringHash", (bool (Urho3D::Serializer::*)(const Urho3D::StringHash &)) &Urho3D::Serializer::WriteStringHash, "todo: docstring", py::arg("value"))
  .def("WriteBuffer", (bool (Urho3D::Serializer::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::Serializer::WriteBuffer, "todo: docstring", py::arg("value"))
  .def("WriteResourceRef", (bool (Urho3D::Serializer::*)(const Urho3D::ResourceRef &)) &Urho3D::Serializer::WriteResourceRef, "todo: docstring", py::arg("value"))
  .def("WriteResourceRefList", (bool (Urho3D::Serializer::*)(const Urho3D::ResourceRefList &)) &Urho3D::Serializer::WriteResourceRefList, "todo: docstring", py::arg("value"))
  .def("WriteVariant", (bool (Urho3D::Serializer::*)(const Urho3D::Variant &)) &Urho3D::Serializer::WriteVariant, "todo: docstring", py::arg("value"))
  .def("WriteVariantData", (bool (Urho3D::Serializer::*)(const Urho3D::Variant &)) &Urho3D::Serializer::WriteVariantData, "todo: docstring", py::arg("value"))
  .def("WriteVariantVector", (bool (Urho3D::Serializer::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::Serializer::WriteVariantVector, "todo: docstring", py::arg("value"))
  .def("WriteStringVector", (bool (Urho3D::Serializer::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::Serializer::WriteStringVector, "todo: docstring", py::arg("value"))
  .def("WriteVariantMap", (bool (Urho3D::Serializer::*)(const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Serializer::WriteVariantMap, "todo: docstring", py::arg("value"))
  .def("WriteVLE", (bool (Urho3D::Serializer::*)(unsigned int)) &Urho3D::Serializer::WriteVLE, "todo: docstring", py::arg("value"))
  .def("WriteNetID", (bool (Urho3D::Serializer::*)(unsigned int)) &Urho3D::Serializer::WriteNetID, "todo: docstring", py::arg("value"))
  .def("WriteLine", (bool (Urho3D::Serializer::*)(const Urho3D::String &)) &Urho3D::Serializer::WriteLine, "todo: docstring", py::arg("value"))
// Class Variables:
;
}

void Implement_Urho3D_Component(py::class_<Urho3D::Component, Urho3D::SharedPtr<Urho3D::Component>, Urho3D::Animatable>& pyclass_Var_Urho3D_Component)
{
    // Class Component Implementation
pyclass_Var_Urho3D_Component
  .def("GetType", (Urho3D::StringHash (Urho3D::Component::*)() const) &Urho3D::Component::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Component::*)() const) &Urho3D::Component::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Component::*)() const) &Urho3D::Component::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Component", (void (Urho3D::Component::*)()) &Urho3D::Component::~Component, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::Component::*)()) &Urho3D::Component::OnSetEnabled, "todo: docstring")
  .def("Save", (bool (Urho3D::Component::*)(Urho3D::Serializer &) const) &Urho3D::Component::Save, "todo: docstring", py::arg("dest"))
  .def("SaveXML", (bool (Urho3D::Component::*)(Urho3D::XMLElement &) const) &Urho3D::Component::SaveXML, "todo: docstring", py::arg("dest"))
  .def("SaveJSON", (bool (Urho3D::Component::*)(Urho3D::JSONValue &) const) &Urho3D::Component::SaveJSON, "todo: docstring", py::arg("dest"))
  .def("MarkNetworkUpdate", (void (Urho3D::Component::*)()) &Urho3D::Component::MarkNetworkUpdate, "todo: docstring")
  //.def("GetDependencyNodes", (void (Urho3D::Component::*)(Urho3D::PODVector<Urho3D::Node *> &)) &Urho3D::Component::GetDependencyNodes, "todo: docstring", py::arg("dest"))
    //['Urho3D::PODVector<Urho3D::Node']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("DrawDebugGeometry", (void (Urho3D::Component::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::Component::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetEnabled", (void (Urho3D::Component::*)(bool)) &Urho3D::Component::SetEnabled, "todo: docstring", py::arg("enable"))
  .def("Remove", (void (Urho3D::Component::*)()) &Urho3D::Component::Remove, "todo: docstring")
  .def("GetID", (unsigned int (Urho3D::Component::*)() const) &Urho3D::Component::GetID, "todo: docstring")
  .def("IsReplicated", (bool (Urho3D::Component::*)() const) &Urho3D::Component::IsReplicated, "todo: docstring")
  .def("GetNode", (Urho3D::Node * (Urho3D::Component::*)() const) &Urho3D::Component::GetNode, "todo: docstring")
  .def("GetScene", (Urho3D::Scene * (Urho3D::Component::*)() const) &Urho3D::Component::GetScene, "todo: docstring")
  .def("IsEnabled", (bool (Urho3D::Component::*)() const) &Urho3D::Component::IsEnabled, "todo: docstring")
  .def("IsEnabledEffective", (bool (Urho3D::Component::*)() const) &Urho3D::Component::IsEnabledEffective, "todo: docstring")
  .def("GetComponent", (Urho3D::Component * (Urho3D::Component::*)(Urho3D::StringHash) const) &Urho3D::Component::GetComponent, "todo: docstring", py::arg("type"))
  //.def("GetComponents", (void (Urho3D::Component::*)(Urho3D::PODVector<Urho3D::Component *> &, Urho3D::StringHash) const) &Urho3D::Component::GetComponents, "todo: docstring", py::arg("dest"), py::arg("type"))
    //['Urho3D::PODVector<Urho3D::Component', 'Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("AddReplicationState", (void (Urho3D::Component::*)(Urho3D::ComponentReplicationState *)) &Urho3D::Component::AddReplicationState, "todo: docstring", py::arg("state"))
  .def("PrepareNetworkUpdate", (void (Urho3D::Component::*)()) &Urho3D::Component::PrepareNetworkUpdate, "todo: docstring")
  .def("CleanupConnection", (void (Urho3D::Component::*)(Urho3D::Connection *)) &Urho3D::Component::CleanupConnection, "todo: docstring", py::arg("connection"))
  .def("GetBasePath", (const Urho3D::String & (Urho3D::Component::*)() const) &Urho3D::Component::GetBasePath, "todo: docstring")
// Class Variables:
;
}
