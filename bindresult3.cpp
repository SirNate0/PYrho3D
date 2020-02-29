

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
void Implement_Urho3D_JSONValue(py::class_<Urho3D::JSONValue, Urho3D::ExternalPtr<Urho3D::JSONValue>>& pyclass_Var_Urho3D_JSONValue)
{
    // Class JSONValue Implementation
pyclass_Var_Urho3D_JSONValue
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<bool>(), "todo: constructor docstring")
  .def(py::init<int>(), "todo: constructor docstring")
  .def(py::init<unsigned int>(), "todo: constructor docstring")
  .def(py::init<float>(), "todo: constructor docstring")
  .def(py::init<double>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::String &>(), "todo: constructor docstring")
  .def(py::init<const char *>(), "todo: constructor docstring")
  //.def(py::init<const Urho3D::Vector<Urho3D::JSONValue> &>(), "todo: constructor docstring")
    //['Urho3D::Vector<Urho3D::JSONValue>']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def(py::init<const Urho3D::HashMap<Urho3D::String, Urho3D::JSONValue> &>(), "todo: constructor docstring")
    //['Urho3D::HashMap<Urho3D::String, Urho3D::JSONValue>']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def(py::init<const Urho3D::JSONValue &>(), "todo: constructor docstring")
  //.def("~JSONValue", (void (Urho3D::JSONValue::*)()) &Urho3D::JSONValue::~JSONValue, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = bool(), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(bool)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['bool']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = int(), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(int)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['int']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = unsignedint(), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(unsigned int)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['unsigned int']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = float(), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(float)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['float']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = double(), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(double)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['double']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::String(), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(const Urho3D::String &)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::String']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = (char *)(0), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(const char *)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['char']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 1
  //  .def(py::self = Urho3D::Vector<Urho3D::JSONValue>(), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(const Urho3D::Vector<Urho3D::JSONValue> &)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Vector<Urho3D::JSONValue>']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //  .def(py::self = Urho3D::HashMap<Urho3D::String, Urho3D::JSONValue>(), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(const Urho3D::HashMap<Urho3D::String, Urho3D::JSONValue> &)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::HashMap<Urho3D::String, Urho3D::JSONValue>']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //  .def(py::self = Urho3D::JSONValue(), "todo: docstring").def("__assign__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(const Urho3D::JSONValue &)) &Urho3D::JSONValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::JSONValue']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("GetValueType", (Urho3D::JSONValueType (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::GetValueType, "todo: docstring")
  .def("GetNumberType", (Urho3D::JSONNumberType (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::GetNumberType, "todo: docstring")
  .def("GetValueTypeName", (Urho3D::String (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::GetValueTypeName, "todo: docstring")
  .def("GetNumberTypeName", (Urho3D::String (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::GetNumberTypeName, "todo: docstring")
  .def("IsNull", (bool (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::IsNull, "todo: docstring")
  .def("IsBool", (bool (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::IsBool, "todo: docstring")
  .def("IsNumber", (bool (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::IsNumber, "todo: docstring")
  .def("IsString", (bool (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::IsString, "todo: docstring")
  .def("IsArray", (bool (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::IsArray, "todo: docstring")
  .def("IsObject", (bool (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::IsObject, "todo: docstring")
  .def("GetBool", (bool (Urho3D::JSONValue::*)(bool) const) &Urho3D::JSONValue::GetBool, "todo: docstring", py::arg("defaultValue")=false)
  .def("GetInt", (int (Urho3D::JSONValue::*)(int) const) &Urho3D::JSONValue::GetInt, "todo: docstring", py::arg("defaultValue")=0)
  .def("GetUInt", (unsigned int (Urho3D::JSONValue::*)(unsigned int) const) &Urho3D::JSONValue::GetUInt, "todo: docstring", py::arg("defaultValue")=0)
  .def("GetFloat", (float (Urho3D::JSONValue::*)(float) const) &Urho3D::JSONValue::GetFloat, "todo: docstring", py::arg("defaultValue")=0.0f)
  .def("GetDouble", (double (Urho3D::JSONValue::*)(double) const) &Urho3D::JSONValue::GetDouble, "todo: docstring", py::arg("defaultValue")=0.0)
  .def("GetString", (const Urho3D::String & (Urho3D::JSONValue::*)(Urho3D::String) const) &Urho3D::JSONValue::GetString, "todo: docstring", py::arg("defaultValue")=String::EMPTY)
  .def("GetCString", (const char * (Urho3D::JSONValue::*)(const char *) const) &Urho3D::JSONValue::GetCString, "todo: docstring", py::arg("defaultValue")=nullptr)
  //.def("GetArray", (const Urho3D::JSONArray & (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::GetArray, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetObject", (const Urho3D::JSONObject & (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::GetObject, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //  .def(Urho3D::JSONValue & operator[](unsigned int index=None), "todo: docstring").def("__index__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(unsigned int)) &Urho3D::JSONValue::operator[], py::operator, "todo: operator docstring. Switch to py: :self ops.")
//Unhandled call style []     //['unsigned int']; op [], ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(const Urho3D::JSONValue & operator[](unsigned int index=None), "todo: docstring").def("__index__", (const Urho3D::JSONValue & (Urho3D::JSONValue::*)(unsigned int) const) &Urho3D::JSONValue::operator[], py::operator, "todo: operator docstring. Switch to py: :self ops.")
//Unhandled call style []     //['unsigned int']; op [], ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Push", (void (Urho3D::JSONValue::*)(const Urho3D::JSONValue &)) &Urho3D::JSONValue::Push, "todo: docstring", py::arg("value"))
  .def("Pop", (void (Urho3D::JSONValue::*)()) &Urho3D::JSONValue::Pop, "todo: docstring")
  .def("Insert", (void (Urho3D::JSONValue::*)(unsigned int, const Urho3D::JSONValue &)) &Urho3D::JSONValue::Insert, "todo: docstring", py::arg("pos"), py::arg("value"))
  .def("Erase", (void (Urho3D::JSONValue::*)(unsigned int, unsigned int)) &Urho3D::JSONValue::Erase, "todo: docstring", py::arg("pos"), py::arg("length")=1)
  .def("Resize", (void (Urho3D::JSONValue::*)(unsigned int)) &Urho3D::JSONValue::Resize, "todo: docstring", py::arg("newSize"))
  .def("Size", (unsigned int (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::Size, "todo: docstring")
  //  .def(Urho3D::JSONValue & operator[](const Urho3D::String & key=None), "todo: docstring").def("__index__", (Urho3D::JSONValue & (Urho3D::JSONValue::*)(const Urho3D::String &)) &Urho3D::JSONValue::operator[], py::operator, "todo: operator docstring. Switch to py: :self ops.")
//Unhandled call style []     //['Urho3D::String']; op [], ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(const Urho3D::JSONValue & operator[](const Urho3D::String & key=None), "todo: docstring").def("__index__", (const Urho3D::JSONValue & (Urho3D::JSONValue::*)(const Urho3D::String &) const) &Urho3D::JSONValue::operator[], py::operator, "todo: operator docstring. Switch to py: :self ops.")
//Unhandled call style []     //['Urho3D::String']; op [], ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Set", (void (Urho3D::JSONValue::*)(const Urho3D::String &, const Urho3D::JSONValue &)) &Urho3D::JSONValue::Set, "todo: docstring", py::arg("key"), py::arg("value"))
  .def("Get", (const Urho3D::JSONValue & (Urho3D::JSONValue::*)(const Urho3D::String &) const) &Urho3D::JSONValue::Get, "todo: docstring", py::arg("key"))
  .def("Erase", (bool (Urho3D::JSONValue::*)(const Urho3D::String &)) &Urho3D::JSONValue::Erase, "todo: docstring", py::arg("key"))
  .def("Contains", (bool (Urho3D::JSONValue::*)(const Urho3D::String &) const) &Urho3D::JSONValue::Contains, "todo: docstring", py::arg("key"))
  //.def("Begin", (Urho3D::JSONObjectIterator (Urho3D::JSONValue::*)()) &Urho3D::JSONValue::Begin, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("Begin", (Urho3D::ConstJSONObjectIterator (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::Begin, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("End", (Urho3D::JSONObjectIterator (Urho3D::JSONValue::*)()) &Urho3D::JSONValue::End, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("End", (Urho3D::ConstJSONObjectIterator (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::End, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("Clear", (void (Urho3D::JSONValue::*)()) &Urho3D::JSONValue::Clear, "todo: docstring")
  .def("SetType", (void (Urho3D::JSONValue::*)(Urho3D::JSONValueType, Urho3D::JSONNumberType)) &Urho3D::JSONValue::SetType, "todo: docstring", py::arg("valueType"), py::arg("numberType")=JSONNT_NAN)
  .def("SetVariant", (void (Urho3D::JSONValue::*)(const Urho3D::Variant &, Urho3D::Context *)) &Urho3D::JSONValue::SetVariant, "todo: docstring", py::arg("variant"), py::arg("context")=nullptr)
  .def("GetVariant", (Urho3D::Variant (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::GetVariant, "todo: docstring")
  .def("SetVariantValue", (void (Urho3D::JSONValue::*)(const Urho3D::Variant &, Urho3D::Context *)) &Urho3D::JSONValue::SetVariantValue, "todo: docstring", py::arg("variant"), py::arg("context")=nullptr)
  .def("GetVariantValue", (Urho3D::Variant (Urho3D::JSONValue::*)(Urho3D::VariantType) const) &Urho3D::JSONValue::GetVariantValue, "todo: docstring", py::arg("type"))
  .def("SetVariantMap", (void (Urho3D::JSONValue::*)(const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &, Urho3D::Context *)) &Urho3D::JSONValue::SetVariantMap, "todo: docstring", py::arg("variantMap"), py::arg("context")=nullptr)
  .def("GetVariantMap", (Urho3D::VariantMap (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::GetVariantMap, "todo: docstring")
  .def("SetVariantVector", (void (Urho3D::JSONValue::*)(const Urho3D::Vector<Urho3D::Variant> &, Urho3D::Context *)) &Urho3D::JSONValue::SetVariantVector, "todo: docstring", py::arg("variantVector"), py::arg("context")=nullptr)
  .def("GetVariantVector", (Urho3D::VariantVector (Urho3D::JSONValue::*)() const) &Urho3D::JSONValue::GetVariantVector, "todo: docstring")
// Class Variables:
  .def_readonly_static("emptyArray",&Urho3D::JSONValue::emptyArray, "todo: var docstring")//const Urho3D::Vector<Urho3D::JSONValue>
  .def_readonly_static("emptyObject",&Urho3D::JSONValue::emptyObject, "todo: var docstring")//const Urho3D::HashMap<Urho3D::String, Urho3D::JSONValue>
;
}

void Implement_Urho3D_Audio(py::class_<Urho3D::Audio, Urho3D::SharedPtr<Urho3D::Audio>, Urho3D::Object>& pyclass_Var_Urho3D_Audio)
{
    // Class Audio Implementation
pyclass_Var_Urho3D_Audio
  .def("GetType", (Urho3D::StringHash (Urho3D::Audio::*)() const) &Urho3D::Audio::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Audio::*)() const) &Urho3D::Audio::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Audio::*)() const) &Urho3D::Audio::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Audio", (void (Urho3D::Audio::*)()) &Urho3D::Audio::~Audio, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetMode", (bool (Urho3D::Audio::*)(int, int, bool, bool)) &Urho3D::Audio::SetMode, "todo: docstring", py::arg("bufferLengthMSec"), py::arg("mixRate"), py::arg("stereo"), py::arg("interpolation")=true)
  .def("Update", (void (Urho3D::Audio::*)(float)) &Urho3D::Audio::Update, "todo: docstring", py::arg("timeStep"))
  .def("Play", (bool (Urho3D::Audio::*)()) &Urho3D::Audio::Play, "todo: docstring")
  .def("Stop", (void (Urho3D::Audio::*)()) &Urho3D::Audio::Stop, "todo: docstring")
  .def("SetMasterGain", (void (Urho3D::Audio::*)(const Urho3D::String &, float)) &Urho3D::Audio::SetMasterGain, "todo: docstring", py::arg("type"), py::arg("gain"))
  .def("PauseSoundType", (void (Urho3D::Audio::*)(const Urho3D::String &)) &Urho3D::Audio::PauseSoundType, "todo: docstring", py::arg("type"))
  .def("ResumeSoundType", (void (Urho3D::Audio::*)(const Urho3D::String &)) &Urho3D::Audio::ResumeSoundType, "todo: docstring", py::arg("type"))
  .def("ResumeAll", (void (Urho3D::Audio::*)()) &Urho3D::Audio::ResumeAll, "todo: docstring")
  .def("SetListener", (void (Urho3D::Audio::*)(Urho3D::SoundListener *)) &Urho3D::Audio::SetListener, "todo: docstring", py::arg("listener"))
  .def("StopSound", (void (Urho3D::Audio::*)(Urho3D::Sound *)) &Urho3D::Audio::StopSound, "todo: docstring", py::arg("sound"))
  .def("GetSampleSize", (unsigned int (Urho3D::Audio::*)() const) &Urho3D::Audio::GetSampleSize, "todo: docstring")
  .def("GetMixRate", (int (Urho3D::Audio::*)() const) &Urho3D::Audio::GetMixRate, "todo: docstring")
  .def("GetInterpolation", (bool (Urho3D::Audio::*)() const) &Urho3D::Audio::GetInterpolation, "todo: docstring")
  .def("IsStereo", (bool (Urho3D::Audio::*)() const) &Urho3D::Audio::IsStereo, "todo: docstring")
  .def("IsPlaying", (bool (Urho3D::Audio::*)() const) &Urho3D::Audio::IsPlaying, "todo: docstring")
  .def("IsInitialized", (bool (Urho3D::Audio::*)() const) &Urho3D::Audio::IsInitialized, "todo: docstring")
  .def("GetMasterGain", (float (Urho3D::Audio::*)(const Urho3D::String &) const) &Urho3D::Audio::GetMasterGain, "todo: docstring", py::arg("type"))
  .def("IsSoundTypePaused", (bool (Urho3D::Audio::*)(const Urho3D::String &) const) &Urho3D::Audio::IsSoundTypePaused, "todo: docstring", py::arg("type"))
  .def("GetListener", (Urho3D::SoundListener * (Urho3D::Audio::*)() const) &Urho3D::Audio::GetListener, "todo: docstring")
  //.def("GetSoundSources", (const PODVector<Urho3D::SoundSource *> & (Urho3D::Audio::*)() const) &Urho3D::Audio::GetSoundSources, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("HasMasterGain", (bool (Urho3D::Audio::*)(const Urho3D::String &) const) &Urho3D::Audio::HasMasterGain, "todo: docstring", py::arg("type"))
  .def("AddSoundSource", (void (Urho3D::Audio::*)(Urho3D::SoundSource *)) &Urho3D::Audio::AddSoundSource, "todo: docstring", py::arg("soundSource"))
  .def("RemoveSoundSource", (void (Urho3D::Audio::*)(Urho3D::SoundSource *)) &Urho3D::Audio::RemoveSoundSource, "todo: docstring", py::arg("soundSource"))
  .def("GetMutex", (Urho3D::Mutex & (Urho3D::Audio::*)()) &Urho3D::Audio::GetMutex, "todo: docstring")
  .def("GetSoundSourceMasterGain", (float (Urho3D::Audio::*)(Urho3D::StringHash) const) &Urho3D::Audio::GetSoundSourceMasterGain, "todo: docstring", py::arg("typeHash"))
  .def("MixOutput", (void (Urho3D::Audio::*)(void *, unsigned int)) &Urho3D::Audio::MixOutput, "todo: docstring", py::arg("dest"), py::arg("samples"))
// Class Variables:
;
}

void Implement_Urho3D_VertexElement(py::class_<Urho3D::VertexElement, Urho3D::ExternalPtr<Urho3D::VertexElement>>& pyclass_Var_Urho3D_VertexElement)
{
    // Class VertexElement Implementation
pyclass_Var_Urho3D_VertexElement
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<Urho3D::VertexElementType, Urho3D::VertexElementSemantic, unsigned char, bool>(), "todo: constructor docstring")
  .def(py::self == Urho3D::VertexElement(), "todo: docstring")
    //['Urho3D::VertexElement']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::VertexElement(), "todo: docstring")
    //['Urho3D::VertexElement']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("type",&Urho3D::VertexElement::type_, "todo: var docstring")//Urho3D::VertexElementType
  .def_readwrite("semantic",&Urho3D::VertexElement::semantic_, "todo: var docstring")//Urho3D::VertexElementSemantic
  .def_readwrite("index",&Urho3D::VertexElement::index_, "todo: var docstring")//unsigned char
  .def_readwrite("perInstance",&Urho3D::VertexElement::perInstance_, "todo: var docstring")//bool
  .def_readwrite("offset",&Urho3D::VertexElement::offset_, "todo: var docstring")//unsigned int
;
}

void Implement_Urho3D_BoundingBox(py::class_<Urho3D::BoundingBox, Urho3D::ExternalPtr<Urho3D::BoundingBox>>& pyclass_Var_Urho3D_BoundingBox)
{
    // Class BoundingBox Implementation
pyclass_Var_Urho3D_BoundingBox
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::BoundingBox &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Rect &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Vector3 &>(), "todo: constructor docstring")
  .def(py::init<float, float>(), "todo: constructor docstring")
  //.def(py::init<__attribute__((__vector_size__(4 * sizeof(float)))) float, __attribute__((__vector_size__(4 * sizeof(float)))) float>(), "todo: constructor docstring")
    //['__attribute__', '__attribute__']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def(py::init<const Urho3D::Vector3 *, unsigned int>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Frustum &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Polyhedron &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Sphere &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::BoundingBox(), "todo: docstring").def("__assign__", (Urho3D::BoundingBox & (Urho3D::BoundingBox::*)(const Urho3D::BoundingBox &)) &Urho3D::BoundingBox::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::BoundingBox']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Rect(), "todo: docstring").def("__assign__", (Urho3D::BoundingBox & (Urho3D::BoundingBox::*)(const Urho3D::Rect &)) &Urho3D::BoundingBox::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Rect']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::BoundingBox(), "todo: docstring")
    //['Urho3D::BoundingBox']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::BoundingBox(), "todo: docstring")
    //['Urho3D::BoundingBox']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Define", (void (Urho3D::BoundingBox::*)(const Urho3D::BoundingBox &)) &Urho3D::BoundingBox::Define, "todo: docstring", py::arg("box"))
  .def("Define", (void (Urho3D::BoundingBox::*)(const Urho3D::Rect &)) &Urho3D::BoundingBox::Define, "todo: docstring", py::arg("rect"))
  .def("Define", (void (Urho3D::BoundingBox::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::BoundingBox::Define, "todo: docstring", py::arg("min"), py::arg("max"))
  .def("Define", (void (Urho3D::BoundingBox::*)(float, float)) &Urho3D::BoundingBox::Define, "todo: docstring", py::arg("min"), py::arg("max"))
  .def("Define", (void (Urho3D::BoundingBox::*)(const Urho3D::Vector3 &)) &Urho3D::BoundingBox::Define, "todo: docstring", py::arg("point"))
  .def("Merge", (void (Urho3D::BoundingBox::*)(const Urho3D::Vector3 &)) &Urho3D::BoundingBox::Merge, "todo: docstring", py::arg("point"))
  .def("Merge", (void (Urho3D::BoundingBox::*)(const Urho3D::BoundingBox &)) &Urho3D::BoundingBox::Merge, "todo: docstring", py::arg("box"))
  .def("Define", (void (Urho3D::BoundingBox::*)(const Urho3D::Vector3 *, unsigned int)) &Urho3D::BoundingBox::Define, "todo: docstring", py::arg("vertices"), py::arg("count"))
  .def("Define", (void (Urho3D::BoundingBox::*)(const Urho3D::Frustum &)) &Urho3D::BoundingBox::Define, "todo: docstring", py::arg("frustum"))
  .def("Define", (void (Urho3D::BoundingBox::*)(const Urho3D::Polyhedron &)) &Urho3D::BoundingBox::Define, "todo: docstring", py::arg("poly"))
  .def("Define", (void (Urho3D::BoundingBox::*)(const Urho3D::Sphere &)) &Urho3D::BoundingBox::Define, "todo: docstring", py::arg("sphere"))
  .def("Merge", (void (Urho3D::BoundingBox::*)(const Urho3D::Vector3 *, unsigned int)) &Urho3D::BoundingBox::Merge, "todo: docstring", py::arg("vertices"), py::arg("count"))
  .def("Merge", (void (Urho3D::BoundingBox::*)(const Urho3D::Frustum &)) &Urho3D::BoundingBox::Merge, "todo: docstring", py::arg("frustum"))
  .def("Merge", (void (Urho3D::BoundingBox::*)(const Urho3D::Polyhedron &)) &Urho3D::BoundingBox::Merge, "todo: docstring", py::arg("poly"))
  .def("Merge", (void (Urho3D::BoundingBox::*)(const Urho3D::Sphere &)) &Urho3D::BoundingBox::Merge, "todo: docstring", py::arg("sphere"))
  .def("Clip", (void (Urho3D::BoundingBox::*)(const Urho3D::BoundingBox &)) &Urho3D::BoundingBox::Clip, "todo: docstring", py::arg("box"))
  .def("Transform", (void (Urho3D::BoundingBox::*)(const Urho3D::Matrix3 &)) &Urho3D::BoundingBox::Transform, "todo: docstring", py::arg("transform"))
  .def("Transform", (void (Urho3D::BoundingBox::*)(const Urho3D::Matrix3x4 &)) &Urho3D::BoundingBox::Transform, "todo: docstring", py::arg("transform"))
  .def("Clear", (void (Urho3D::BoundingBox::*)()) &Urho3D::BoundingBox::Clear, "todo: docstring")
  .def("Defined", (bool (Urho3D::BoundingBox::*)() const) &Urho3D::BoundingBox::Defined, "todo: docstring")
  .def("Center", (Urho3D::Vector3 (Urho3D::BoundingBox::*)() const) &Urho3D::BoundingBox::Center, "todo: docstring")
  .def("Size", (Urho3D::Vector3 (Urho3D::BoundingBox::*)() const) &Urho3D::BoundingBox::Size, "todo: docstring")
  .def("HalfSize", (Urho3D::Vector3 (Urho3D::BoundingBox::*)() const) &Urho3D::BoundingBox::HalfSize, "todo: docstring")
  .def("Transformed", (Urho3D::BoundingBox (Urho3D::BoundingBox::*)(const Urho3D::Matrix3 &) const) &Urho3D::BoundingBox::Transformed, "todo: docstring", py::arg("transform"))
  .def("Transformed", (Urho3D::BoundingBox (Urho3D::BoundingBox::*)(const Urho3D::Matrix3x4 &) const) &Urho3D::BoundingBox::Transformed, "todo: docstring", py::arg("transform"))
  .def("Projected", (Urho3D::Rect (Urho3D::BoundingBox::*)(const Urho3D::Matrix4 &) const) &Urho3D::BoundingBox::Projected, "todo: docstring", py::arg("projection"))
  .def("DistanceToPoint", (float (Urho3D::BoundingBox::*)(const Urho3D::Vector3 &) const) &Urho3D::BoundingBox::DistanceToPoint, "todo: docstring", py::arg("point"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::BoundingBox::*)(const Urho3D::Vector3 &) const) &Urho3D::BoundingBox::IsInside, "todo: docstring", py::arg("point"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::BoundingBox::*)(const Urho3D::BoundingBox &) const) &Urho3D::BoundingBox::IsInside, "todo: docstring", py::arg("box"))
  .def("IsInsideFast", (Urho3D::Intersection (Urho3D::BoundingBox::*)(const Urho3D::BoundingBox &) const) &Urho3D::BoundingBox::IsInsideFast, "todo: docstring", py::arg("box"))
  .def("IsInside", (Urho3D::Intersection (Urho3D::BoundingBox::*)(const Urho3D::Sphere &) const) &Urho3D::BoundingBox::IsInside, "todo: docstring", py::arg("sphere"))
  .def("IsInsideFast", (Urho3D::Intersection (Urho3D::BoundingBox::*)(const Urho3D::Sphere &) const) &Urho3D::BoundingBox::IsInsideFast, "todo: docstring", py::arg("sphere"))
  .def("ToString", (Urho3D::String (Urho3D::BoundingBox::*)() const) &Urho3D::BoundingBox::ToString, "todo: docstring")
// Class Variables:
  .def_readwrite("min",&Urho3D::BoundingBox::min_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("dummyMin",&Urho3D::BoundingBox::dummyMin_, "todo: var docstring")//float
  .def_readwrite("max",&Urho3D::BoundingBox::max_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("dummyMax",&Urho3D::BoundingBox::dummyMax_, "todo: var docstring")//float
;
}

void Implement_Urho3D_Geometry(py::class_<Urho3D::Geometry, Urho3D::SharedPtr<Urho3D::Geometry>, Urho3D::Object>& pyclass_Var_Urho3D_Geometry)
{
    // Class Geometry Implementation
pyclass_Var_Urho3D_Geometry
  .def("GetType", (Urho3D::StringHash (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Geometry", (void (Urho3D::Geometry::*)()) &Urho3D::Geometry::~Geometry, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetNumVertexBuffers", (bool (Urho3D::Geometry::*)(unsigned int)) &Urho3D::Geometry::SetNumVertexBuffers, "todo: docstring", py::arg("num"))
  .def("SetVertexBuffer", (bool (Urho3D::Geometry::*)(unsigned int, Urho3D::VertexBuffer *)) &Urho3D::Geometry::SetVertexBuffer, "todo: docstring", py::arg("index"), py::arg("buffer"))
  .def("SetIndexBuffer", (void (Urho3D::Geometry::*)(Urho3D::IndexBuffer *)) &Urho3D::Geometry::SetIndexBuffer, "todo: docstring", py::arg("buffer"))
  .def("SetDrawRange", (bool (Urho3D::Geometry::*)(Urho3D::PrimitiveType, unsigned int, unsigned int, bool)) &Urho3D::Geometry::SetDrawRange, "todo: docstring", py::arg("type"), py::arg("indexStart"), py::arg("indexCount"), py::arg("getUsedVertexRange")=true)
  .def("SetDrawRange", (bool (Urho3D::Geometry::*)(Urho3D::PrimitiveType, unsigned int, unsigned int, unsigned int, unsigned int, bool)) &Urho3D::Geometry::SetDrawRange, "todo: docstring", py::arg("type"), py::arg("indexStart"), py::arg("indexCount"), py::arg("vertexStart"), py::arg("vertexCount"), py::arg("checkIllegal")=true)
  .def("SetLodDistance", (void (Urho3D::Geometry::*)(float)) &Urho3D::Geometry::SetLodDistance, "todo: docstring", py::arg("distance"))
  //.def("SetRawVertexData", (void (Urho3D::Geometry::*)(const Urho3D::SharedArrayPtr<unsigned char> &, const Urho3D::PODVector<Urho3D::VertexElement> &)) &Urho3D::Geometry::SetRawVertexData, "todo: docstring", py::arg("data"), py::arg("elements"))
    //['Urho3D::SharedArrayPtr<unsigned char>', 'Urho3D::PODVector<Urho3D::VertexElement>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("SetRawVertexData", (void (Urho3D::Geometry::*)(const Urho3D::SharedArrayPtr<unsigned char> &, unsigned int)) &Urho3D::Geometry::SetRawVertexData, "todo: docstring", py::arg("data"), py::arg("elementMask"))
    //['Urho3D::SharedArrayPtr<unsigned char>', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("SetRawIndexData", (void (Urho3D::Geometry::*)(const Urho3D::SharedArrayPtr<unsigned char> &, unsigned int)) &Urho3D::Geometry::SetRawIndexData, "todo: docstring", py::arg("data"), py::arg("indexSize"))
    //['Urho3D::SharedArrayPtr<unsigned char>', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("Draw", (void (Urho3D::Geometry::*)(Urho3D::Graphics *)) &Urho3D::Geometry::Draw, "todo: docstring", py::arg("graphics"))
  //.def("GetVertexBuffers", (const Vector<SharedPtr<Urho3D::VertexBuffer> > & (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetVertexBuffers, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumVertexBuffers", (unsigned int (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetNumVertexBuffers, "todo: docstring")
  .def("GetVertexBuffer", (Urho3D::VertexBuffer * (Urho3D::Geometry::*)(unsigned int) const) &Urho3D::Geometry::GetVertexBuffer, "todo: docstring", py::arg("index"))
  .def("GetIndexBuffer", (Urho3D::IndexBuffer * (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetIndexBuffer, "todo: docstring")
  .def("GetPrimitiveType", (Urho3D::PrimitiveType (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetPrimitiveType, "todo: docstring")
  .def("GetIndexStart", (unsigned int (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetIndexStart, "todo: docstring")
  .def("GetIndexCount", (unsigned int (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetIndexCount, "todo: docstring")
  .def("GetVertexStart", (unsigned int (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetVertexStart, "todo: docstring")
  .def("GetVertexCount", (unsigned int (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetVertexCount, "todo: docstring")
  .def("GetLodDistance", (float (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetLodDistance, "todo: docstring")
  .def("GetBufferHash", (unsigned short (Urho3D::Geometry::*)() const) &Urho3D::Geometry::GetBufferHash, "todo: docstring")
  //.def("GetRawData", (void (Urho3D::Geometry::*)(const unsigned char *&, unsigned int &, const unsigned char *&, unsigned int &, const Urho3D::PODVector<Urho3D::VertexElement> *&) const) &Urho3D::Geometry::GetRawData, "todo: docstring", py::arg("vertexData"), py::arg("vertexSize"), py::arg("indexData"), py::arg("indexSize"), py::arg("elements"))
    //['unsigned char', 'unsigned int', 'unsigned char', 'unsigned int', 'Urho3D::PODVector<Urho3D::VertexElement>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetRawDataShared", (void (Urho3D::Geometry::*)(Urho3D::SharedArrayPtr<unsigned char> &, unsigned int &, Urho3D::SharedArrayPtr<unsigned char> &, unsigned int &, const Urho3D::PODVector<Urho3D::VertexElement> *&) const) &Urho3D::Geometry::GetRawDataShared, "todo: docstring", py::arg("vertexData"), py::arg("vertexSize"), py::arg("indexData"), py::arg("indexSize"), py::arg("elements"))
    //['Urho3D::SharedArrayPtr<unsigned char>', 'unsigned int', 'Urho3D::SharedArrayPtr<unsigned char>', 'unsigned int', 'Urho3D::PODVector<Urho3D::VertexElement>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetHitDistance", (float (Urho3D::Geometry::*)(const Urho3D::Ray &, Urho3D::Vector3 *, Urho3D::Vector2 *) const) &Urho3D::Geometry::GetHitDistance, "todo: docstring", py::arg("ray"), py::arg("outNormal")=nullptr, py::arg("outUV")=nullptr)
  .def("IsInside", (bool (Urho3D::Geometry::*)(const Urho3D::Ray &) const) &Urho3D::Geometry::IsInside, "todo: docstring", py::arg("ray"))
  .def("IsEmpty", (bool (Urho3D::Geometry::*)() const) &Urho3D::Geometry::IsEmpty, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_OcclusionBuffer(py::class_<Urho3D::OcclusionBuffer, Urho3D::SharedPtr<Urho3D::OcclusionBuffer>, Urho3D::Object>& pyclass_Var_Urho3D_OcclusionBuffer)
{
    // Class OcclusionBuffer Implementation
pyclass_Var_Urho3D_OcclusionBuffer
  .def("GetType", (Urho3D::StringHash (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~OcclusionBuffer", (void (Urho3D::OcclusionBuffer::*)()) &Urho3D::OcclusionBuffer::~OcclusionBuffer, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetSize", (bool (Urho3D::OcclusionBuffer::*)(int, int, bool)) &Urho3D::OcclusionBuffer::SetSize, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("threaded"))
  .def("SetView", (void (Urho3D::OcclusionBuffer::*)(Urho3D::Camera *)) &Urho3D::OcclusionBuffer::SetView, "todo: docstring", py::arg("camera"))
  .def("SetMaxTriangles", (void (Urho3D::OcclusionBuffer::*)(unsigned int)) &Urho3D::OcclusionBuffer::SetMaxTriangles, "todo: docstring", py::arg("triangles"))
  .def("SetCullMode", (void (Urho3D::OcclusionBuffer::*)(Urho3D::CullMode)) &Urho3D::OcclusionBuffer::SetCullMode, "todo: docstring", py::arg("mode"))
  .def("Reset", (void (Urho3D::OcclusionBuffer::*)()) &Urho3D::OcclusionBuffer::Reset, "todo: docstring")
  .def("Clear", (void (Urho3D::OcclusionBuffer::*)()) &Urho3D::OcclusionBuffer::Clear, "todo: docstring")
  .def("AddTriangles", (bool (Urho3D::OcclusionBuffer::*)(const Urho3D::Matrix3x4 &, const void *, unsigned int, unsigned int, unsigned int)) &Urho3D::OcclusionBuffer::AddTriangles, "todo: docstring", py::arg("model"), py::arg("vertexData"), py::arg("vertexSize"), py::arg("vertexStart"), py::arg("vertexCount"))
  .def("AddTriangles", (bool (Urho3D::OcclusionBuffer::*)(const Urho3D::Matrix3x4 &, const void *, unsigned int, const void *, unsigned int, unsigned int, unsigned int)) &Urho3D::OcclusionBuffer::AddTriangles, "todo: docstring", py::arg("model"), py::arg("vertexData"), py::arg("vertexSize"), py::arg("indexData"), py::arg("indexSize"), py::arg("indexStart"), py::arg("indexCount"))
  .def("DrawTriangles", (void (Urho3D::OcclusionBuffer::*)()) &Urho3D::OcclusionBuffer::DrawTriangles, "todo: docstring")
  .def("BuildDepthHierarchy", (void (Urho3D::OcclusionBuffer::*)()) &Urho3D::OcclusionBuffer::BuildDepthHierarchy, "todo: docstring")
  .def("ResetUseTimer", (void (Urho3D::OcclusionBuffer::*)()) &Urho3D::OcclusionBuffer::ResetUseTimer, "todo: docstring")
  .def("GetBuffer", (int * (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetBuffer, "todo: docstring")
  .def("GetView", (const Urho3D::Matrix3x4 & (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetView, "todo: docstring")
  .def("GetProjection", (const Urho3D::Matrix4 & (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetProjection, "todo: docstring")
  .def("GetWidth", (int (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetWidth, "todo: docstring")
  .def("GetHeight", (int (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetHeight, "todo: docstring")
  .def("GetNumTriangles", (unsigned int (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetNumTriangles, "todo: docstring")
  .def("GetMaxTriangles", (unsigned int (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetMaxTriangles, "todo: docstring")
  .def("GetCullMode", (Urho3D::CullMode (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::GetCullMode, "todo: docstring")
  .def("IsThreaded", (bool (Urho3D::OcclusionBuffer::*)() const) &Urho3D::OcclusionBuffer::IsThreaded, "todo: docstring")
  .def("IsVisible", (bool (Urho3D::OcclusionBuffer::*)(const Urho3D::BoundingBox &) const) &Urho3D::OcclusionBuffer::IsVisible, "todo: docstring", py::arg("worldSpaceBox"))
  .def("GetUseTimer", (unsigned int (Urho3D::OcclusionBuffer::*)()) &Urho3D::OcclusionBuffer::GetUseTimer, "todo: docstring")
  //.def("DrawBatch", (void (Urho3D::OcclusionBuffer::*)(const Urho3D::OcclusionBatch &, unsigned int)) &Urho3D::OcclusionBuffer::DrawBatch, "todo: docstring", py::arg("batch"), py::arg("threadIndex"))
    //['Urho3D::OcclusionBatch', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_SourceBatch(py::class_<Urho3D::SourceBatch, Urho3D::ExternalPtr<Urho3D::SourceBatch>>& pyclass_Var_Urho3D_SourceBatch)
{
    // Class SourceBatch Implementation
pyclass_Var_Urho3D_SourceBatch
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::SourceBatch &>(), "todo: constructor docstring")
  //.def("~SourceBatch", (void (Urho3D::SourceBatch::*)()) &Urho3D::SourceBatch::~SourceBatch, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::SourceBatch(), "todo: docstring").def("__assign__", (Urho3D::SourceBatch & (Urho3D::SourceBatch::*)(const Urho3D::SourceBatch &)) &Urho3D::SourceBatch::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::SourceBatch']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("distance",&Urho3D::SourceBatch::distance_, "todo: var docstring")//float
  .def_readwrite("material",&Urho3D::SourceBatch::material_, "todo: var docstring")//Urho3D::SharedPtr<Urho3D::Material>
  .def_readwrite("numWorldTransforms",&Urho3D::SourceBatch::numWorldTransforms_, "todo: var docstring")//unsigned int
  .def_readwrite("geometryType",&Urho3D::SourceBatch::geometryType_, "todo: var docstring")//Urho3D::GeometryType
;
}

void Implement_Urho3D_Graphics(py::class_<Urho3D::Graphics, Urho3D::SharedPtr<Urho3D::Graphics>, Urho3D::Object>& pyclass_Var_Urho3D_Graphics)
{
    // Class Graphics Implementation
pyclass_Var_Urho3D_Graphics
  .def("GetType", (Urho3D::StringHash (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Graphics", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::~Graphics, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetExternalWindow", (void (Urho3D::Graphics::*)(void *)) &Urho3D::Graphics::SetExternalWindow, "todo: docstring", py::arg("window"))
  .def("SetWindowTitle", (void (Urho3D::Graphics::*)(const Urho3D::String &)) &Urho3D::Graphics::SetWindowTitle, "todo: docstring", py::arg("windowTitle"))
  .def("SetWindowIcon", (void (Urho3D::Graphics::*)(Urho3D::Image *)) &Urho3D::Graphics::SetWindowIcon, "todo: docstring", py::arg("windowIcon"))
  .def("SetWindowPosition", (void (Urho3D::Graphics::*)(const Urho3D::IntVector2 &)) &Urho3D::Graphics::SetWindowPosition, "todo: docstring", py::arg("position"))
  .def("SetWindowPosition", (void (Urho3D::Graphics::*)(int, int)) &Urho3D::Graphics::SetWindowPosition, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetMode", (bool (Urho3D::Graphics::*)(int, int, bool, bool, bool, bool, bool, bool, int, int, int)) &Urho3D::Graphics::SetMode, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("fullscreen"), py::arg("borderless"), py::arg("resizable"), py::arg("highDPI"), py::arg("vsync"), py::arg("tripleBuffer"), py::arg("multiSample"), py::arg("monitor"), py::arg("refreshRate"))
  .def("SetMode", (bool (Urho3D::Graphics::*)(int, int)) &Urho3D::Graphics::SetMode, "todo: docstring", py::arg("width"), py::arg("height"))
  .def("SetSRGB", (void (Urho3D::Graphics::*)(bool)) &Urho3D::Graphics::SetSRGB, "todo: docstring", py::arg("enable"))
  .def("SetDither", (void (Urho3D::Graphics::*)(bool)) &Urho3D::Graphics::SetDither, "todo: docstring", py::arg("enable"))
  .def("SetFlushGPU", (void (Urho3D::Graphics::*)(bool)) &Urho3D::Graphics::SetFlushGPU, "todo: docstring", py::arg("enable"))
  .def("SetForceGL2", (void (Urho3D::Graphics::*)(bool)) &Urho3D::Graphics::SetForceGL2, "todo: docstring", py::arg("enable"))
  .def("SetOrientations", (void (Urho3D::Graphics::*)(const Urho3D::String &)) &Urho3D::Graphics::SetOrientations, "todo: docstring", py::arg("orientations"))
  .def("ToggleFullscreen", (bool (Urho3D::Graphics::*)()) &Urho3D::Graphics::ToggleFullscreen, "todo: docstring")
  .def("Close", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::Close, "todo: docstring")
  .def("TakeScreenShot", (bool (Urho3D::Graphics::*)(Urho3D::Image &)) &Urho3D::Graphics::TakeScreenShot, "todo: docstring", py::arg("destImage"))
  .def("BeginFrame", (bool (Urho3D::Graphics::*)()) &Urho3D::Graphics::BeginFrame, "todo: docstring")
  .def("EndFrame", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::EndFrame, "todo: docstring")
  //.def("Clear", (void (Urho3D::Graphics::*)(Urho3D::FlagSet<Urho3D::ClearTarget, void>, const Urho3D::Color &, float, unsigned int)) &Urho3D::Graphics::Clear, "todo: docstring", py::arg("flags"), py::arg("color")=Color(0.0f,0.0f,0.0f,0.0f), py::arg("depth")=1.0f, py::arg("stencil")=0)
    //['Urho3D::FlagSet<Urho3D::ClearTarget, void>', 'Urho3D::Color', 'float', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("ResolveToTexture", (bool (Urho3D::Graphics::*)(Urho3D::Texture2D *, const Urho3D::IntRect &)) &Urho3D::Graphics::ResolveToTexture, "todo: docstring", py::arg("destination"), py::arg("viewport"))
  .def("ResolveToTexture", (bool (Urho3D::Graphics::*)(Urho3D::Texture2D *)) &Urho3D::Graphics::ResolveToTexture, "todo: docstring", py::arg("texture"))
  .def("ResolveToTexture", (bool (Urho3D::Graphics::*)(Urho3D::TextureCube *)) &Urho3D::Graphics::ResolveToTexture, "todo: docstring", py::arg("texture"))
  .def("Draw", (void (Urho3D::Graphics::*)(Urho3D::PrimitiveType, unsigned int, unsigned int)) &Urho3D::Graphics::Draw, "todo: docstring", py::arg("type"), py::arg("vertexStart"), py::arg("vertexCount"))
  .def("Draw", (void (Urho3D::Graphics::*)(Urho3D::PrimitiveType, unsigned int, unsigned int, unsigned int, unsigned int)) &Urho3D::Graphics::Draw, "todo: docstring", py::arg("type"), py::arg("indexStart"), py::arg("indexCount"), py::arg("minVertex"), py::arg("vertexCount"))
  .def("Draw", (void (Urho3D::Graphics::*)(Urho3D::PrimitiveType, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)) &Urho3D::Graphics::Draw, "todo: docstring", py::arg("type"), py::arg("indexStart"), py::arg("indexCount"), py::arg("baseVertexIndex"), py::arg("minVertex"), py::arg("vertexCount"))
  .def("DrawInstanced", (void (Urho3D::Graphics::*)(Urho3D::PrimitiveType, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)) &Urho3D::Graphics::DrawInstanced, "todo: docstring", py::arg("type"), py::arg("indexStart"), py::arg("indexCount"), py::arg("minVertex"), py::arg("vertexCount"), py::arg("instanceCount"))
  .def("DrawInstanced", (void (Urho3D::Graphics::*)(Urho3D::PrimitiveType, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)) &Urho3D::Graphics::DrawInstanced, "todo: docstring", py::arg("type"), py::arg("indexStart"), py::arg("indexCount"), py::arg("baseVertexIndex"), py::arg("minVertex"), py::arg("vertexCount"), py::arg("instanceCount"))
  .def("SetVertexBuffer", (void (Urho3D::Graphics::*)(Urho3D::VertexBuffer *)) &Urho3D::Graphics::SetVertexBuffer, "todo: docstring", py::arg("buffer"))
  //.def("SetVertexBuffers", (bool (Urho3D::Graphics::*)(const Urho3D::PODVector<Urho3D::VertexBuffer *> &, unsigned int)) &Urho3D::Graphics::SetVertexBuffers, "todo: docstring", py::arg("buffers"), py::arg("instanceOffset")=0)
    //['Urho3D::PODVector<Urho3D::VertexBuffer', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("SetVertexBuffers", (bool (Urho3D::Graphics::*)(const Urho3D::Vector<Urho3D::SharedPtr<Urho3D::VertexBuffer> > &, unsigned int)) &Urho3D::Graphics::SetVertexBuffers, "todo: docstring", py::arg("buffers"), py::arg("instanceOffset")=0)
    //['Urho3D::Vector<Urho3D::SharedPtr<Urho3D::VertexBuffer> >', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetIndexBuffer", (void (Urho3D::Graphics::*)(Urho3D::IndexBuffer *)) &Urho3D::Graphics::SetIndexBuffer, "todo: docstring", py::arg("buffer"))
  .def("SetShaders", (void (Urho3D::Graphics::*)(Urho3D::ShaderVariation *, Urho3D::ShaderVariation *)) &Urho3D::Graphics::SetShaders, "todo: docstring", py::arg("vs"), py::arg("ps"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, const float *, unsigned int)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("data"), py::arg("count"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, float)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("value"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, int)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("value"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, bool)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("value"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, const Urho3D::Color &)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("color"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, const Urho3D::Vector2 &)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("vector"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, const Urho3D::Matrix3 &)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("matrix"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, const Urho3D::Vector3 &)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("vector"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, const Urho3D::Matrix4 &)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("matrix"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, const Urho3D::Vector4 &)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("vector"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, const Urho3D::Matrix3x4 &)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("matrix"))
  .def("SetShaderParameter", (void (Urho3D::Graphics::*)(Urho3D::StringHash, const Urho3D::Variant &)) &Urho3D::Graphics::SetShaderParameter, "todo: docstring", py::arg("param"), py::arg("value"))
  .def("NeedParameterUpdate", (bool (Urho3D::Graphics::*)(Urho3D::ShaderParameterGroup, const void *)) &Urho3D::Graphics::NeedParameterUpdate, "todo: docstring", py::arg("group"), py::arg("source"))
  .def("HasShaderParameter", (bool (Urho3D::Graphics::*)(Urho3D::StringHash)) &Urho3D::Graphics::HasShaderParameter, "todo: docstring", py::arg("param"))
  .def("HasTextureUnit", (bool (Urho3D::Graphics::*)(Urho3D::TextureUnit)) &Urho3D::Graphics::HasTextureUnit, "todo: docstring", py::arg("unit"))
  .def("ClearParameterSource", (void (Urho3D::Graphics::*)(Urho3D::ShaderParameterGroup)) &Urho3D::Graphics::ClearParameterSource, "todo: docstring", py::arg("group"))
  .def("ClearParameterSources", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::ClearParameterSources, "todo: docstring")
  .def("ClearTransformSources", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::ClearTransformSources, "todo: docstring")
  .def("SetTexture", (void (Urho3D::Graphics::*)(unsigned int, Urho3D::Texture *)) &Urho3D::Graphics::SetTexture, "todo: docstring", py::arg("index"), py::arg("texture"))
  .def("SetTextureForUpdate", (void (Urho3D::Graphics::*)(Urho3D::Texture *)) &Urho3D::Graphics::SetTextureForUpdate, "todo: docstring", py::arg("texture"))
  .def("SetTextureParametersDirty", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::SetTextureParametersDirty, "todo: docstring")
  .def("SetDefaultTextureFilterMode", (void (Urho3D::Graphics::*)(Urho3D::TextureFilterMode)) &Urho3D::Graphics::SetDefaultTextureFilterMode, "todo: docstring", py::arg("mode"))
  .def("SetDefaultTextureAnisotropy", (void (Urho3D::Graphics::*)(unsigned int)) &Urho3D::Graphics::SetDefaultTextureAnisotropy, "todo: docstring", py::arg("level"))
  .def("ResetRenderTargets", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::ResetRenderTargets, "todo: docstring")
  .def("ResetRenderTarget", (void (Urho3D::Graphics::*)(unsigned int)) &Urho3D::Graphics::ResetRenderTarget, "todo: docstring", py::arg("index"))
  .def("ResetDepthStencil", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::ResetDepthStencil, "todo: docstring")
  .def("SetRenderTarget", (void (Urho3D::Graphics::*)(unsigned int, Urho3D::RenderSurface *)) &Urho3D::Graphics::SetRenderTarget, "todo: docstring", py::arg("index"), py::arg("renderTarget"))
  .def("SetRenderTarget", (void (Urho3D::Graphics::*)(unsigned int, Urho3D::Texture2D *)) &Urho3D::Graphics::SetRenderTarget, "todo: docstring", py::arg("index"), py::arg("texture"))
  .def("SetDepthStencil", (void (Urho3D::Graphics::*)(Urho3D::RenderSurface *)) &Urho3D::Graphics::SetDepthStencil, "todo: docstring", py::arg("depthStencil"))
  .def("SetDepthStencil", (void (Urho3D::Graphics::*)(Urho3D::Texture2D *)) &Urho3D::Graphics::SetDepthStencil, "todo: docstring", py::arg("texture"))
  .def("SetViewport", (void (Urho3D::Graphics::*)(const Urho3D::IntRect &)) &Urho3D::Graphics::SetViewport, "todo: docstring", py::arg("rect"))
  .def("SetBlendMode", (void (Urho3D::Graphics::*)(Urho3D::BlendMode, bool)) &Urho3D::Graphics::SetBlendMode, "todo: docstring", py::arg("mode"), py::arg("alphaToCoverage")=false)
  .def("SetColorWrite", (void (Urho3D::Graphics::*)(bool)) &Urho3D::Graphics::SetColorWrite, "todo: docstring", py::arg("enable"))
  .def("SetCullMode", (void (Urho3D::Graphics::*)(Urho3D::CullMode)) &Urho3D::Graphics::SetCullMode, "todo: docstring", py::arg("mode"))
  .def("SetDepthBias", (void (Urho3D::Graphics::*)(float, float)) &Urho3D::Graphics::SetDepthBias, "todo: docstring", py::arg("constantBias"), py::arg("slopeScaledBias"))
  .def("SetDepthTest", (void (Urho3D::Graphics::*)(Urho3D::CompareMode)) &Urho3D::Graphics::SetDepthTest, "todo: docstring", py::arg("mode"))
  .def("SetDepthWrite", (void (Urho3D::Graphics::*)(bool)) &Urho3D::Graphics::SetDepthWrite, "todo: docstring", py::arg("enable"))
  .def("SetFillMode", (void (Urho3D::Graphics::*)(Urho3D::FillMode)) &Urho3D::Graphics::SetFillMode, "todo: docstring", py::arg("mode"))
  .def("SetLineAntiAlias", (void (Urho3D::Graphics::*)(bool)) &Urho3D::Graphics::SetLineAntiAlias, "todo: docstring", py::arg("enable"))
  .def("SetScissorTest", (void (Urho3D::Graphics::*)(bool, const Urho3D::Rect &, bool)) &Urho3D::Graphics::SetScissorTest, "todo: docstring", py::arg("enable"), py::arg("rect")=Rect::FULL, py::arg("borderInclusive")=true)
  .def("SetScissorTest", (void (Urho3D::Graphics::*)(bool, const Urho3D::IntRect &)) &Urho3D::Graphics::SetScissorTest, "todo: docstring", py::arg("enable"), py::arg("rect"))
  .def("SetStencilTest", (void (Urho3D::Graphics::*)(bool, Urho3D::CompareMode, Urho3D::StencilOp, Urho3D::StencilOp, Urho3D::StencilOp, unsigned int, unsigned int, unsigned int)) &Urho3D::Graphics::SetStencilTest, "todo: docstring", py::arg("enable"), py::arg("mode")=CMP_ALWAYS, py::arg("pass")=OP_KEEP, py::arg("fail")=OP_KEEP, py::arg("zFail")=OP_KEEP, py::arg("stencilRef")=0, py::arg("compareMask")=M_MAX_UNSIGNED, py::arg("writeMask")=M_MAX_UNSIGNED)
  .def("SetClipPlane", (void (Urho3D::Graphics::*)(bool, const Urho3D::Plane &, const Urho3D::Matrix3x4 &, const Urho3D::Matrix4 &)) &Urho3D::Graphics::SetClipPlane, "todo: docstring", py::arg("enable"), py::arg("clipPlane")=Plane::UP, py::arg("view")=Matrix3x4::IDENTITY, py::arg("projection")=Matrix4::IDENTITY)
  .def("BeginDumpShaders", (void (Urho3D::Graphics::*)(const Urho3D::String &)) &Urho3D::Graphics::BeginDumpShaders, "todo: docstring", py::arg("fileName"))
  .def("EndDumpShaders", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::EndDumpShaders, "todo: docstring")
  .def("PrecacheShaders", (void (Urho3D::Graphics::*)(Urho3D::Deserializer &)) &Urho3D::Graphics::PrecacheShaders, "todo: docstring", py::arg("source"))
  .def("SetShaderCacheDir", (void (Urho3D::Graphics::*)(const Urho3D::String &)) &Urho3D::Graphics::SetShaderCacheDir, "todo: docstring", py::arg("path"))
  .def("IsInitialized", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::IsInitialized, "todo: docstring")
  //.def("GetImpl", (Urho3D::GraphicsImpl * (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetImpl, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetExternalWindow", (void * (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetExternalWindow, "todo: docstring")
  //.def("GetWindow", (SDL_Window * (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetWindow, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetWindowTitle", (const Urho3D::String & (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetWindowTitle, "todo: docstring")
  .def("GetApiName", (const Urho3D::String & (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetApiName, "todo: docstring")
  .def("GetWindowPosition", (Urho3D::IntVector2 (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetWindowPosition, "todo: docstring")
  .def("GetWidth", (int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetWidth, "todo: docstring")
  .def("GetHeight", (int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetHeight, "todo: docstring")
  .def("GetMultiSample", (int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetMultiSample, "todo: docstring")
  .def("GetSize", (Urho3D::IntVector2 (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetSize, "todo: docstring")
  .def("GetFullscreen", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetFullscreen, "todo: docstring")
  .def("GetBorderless", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetBorderless, "todo: docstring")
  .def("GetResizable", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetResizable, "todo: docstring")
  .def("GetHighDPI", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetHighDPI, "todo: docstring")
  .def("GetVSync", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetVSync, "todo: docstring")
  .def("GetRefreshRate", (int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetRefreshRate, "todo: docstring")
  .def("GetMonitor", (int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetMonitor, "todo: docstring")
  .def("GetTripleBuffer", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetTripleBuffer, "todo: docstring")
  .def("GetSRGB", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetSRGB, "todo: docstring")
  .def("GetDither", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDither, "todo: docstring")
  .def("GetFlushGPU", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetFlushGPU, "todo: docstring")
  .def("GetForceGL2", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetForceGL2, "todo: docstring")
  .def("GetOrientations", (const Urho3D::String & (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetOrientations, "todo: docstring")
  .def("IsDeviceLost", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::IsDeviceLost, "todo: docstring")
  .def("GetNumPrimitives", (unsigned int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetNumPrimitives, "todo: docstring")
  .def("GetNumBatches", (unsigned int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetNumBatches, "todo: docstring")
  .def("GetDummyColorFormat", (unsigned int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDummyColorFormat, "todo: docstring")
  .def("GetShadowMapFormat", (unsigned int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetShadowMapFormat, "todo: docstring")
  .def("GetHiresShadowMapFormat", (unsigned int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetHiresShadowMapFormat, "todo: docstring")
  .def("GetInstancingSupport", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetInstancingSupport, "todo: docstring")
  .def("GetLightPrepassSupport", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetLightPrepassSupport, "todo: docstring")
  .def("GetDeferredSupport", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDeferredSupport, "todo: docstring")
  .def("GetAnisotropySupport", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetAnisotropySupport, "todo: docstring")
  .def("GetHardwareShadowSupport", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetHardwareShadowSupport, "todo: docstring")
  .def("GetReadableDepthSupport", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetReadableDepthSupport, "todo: docstring")
  .def("GetSRGBSupport", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetSRGBSupport, "todo: docstring")
  .def("GetSRGBWriteSupport", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetSRGBWriteSupport, "todo: docstring")
  //.def("GetResolutions", (PODVector<Urho3D::IntVector3> (Urho3D::Graphics::*)(int) const) &Urho3D::Graphics::GetResolutions, "todo: docstring", py::arg("monitor"))
    //['int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetMultiSampleLevels", (PODVector<int> (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetMultiSampleLevels, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetDesktopResolution", (Urho3D::IntVector2 (Urho3D::Graphics::*)(int) const) &Urho3D::Graphics::GetDesktopResolution, "todo: docstring", py::arg("monitor"))
  .def("GetMonitorCount", (int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetMonitorCount, "todo: docstring")
  .def("GetCurrentMonitor", (int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetCurrentMonitor, "todo: docstring")
  .def("GetMaximized", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetMaximized, "todo: docstring")
  .def("GetDisplayDPI", (Urho3D::Vector3 (Urho3D::Graphics::*)(int) const) &Urho3D::Graphics::GetDisplayDPI, "todo: docstring", py::arg("monitor")=0)
  .def("GetFormat", (unsigned int (Urho3D::Graphics::*)(Urho3D::CompressedFormat) const) &Urho3D::Graphics::GetFormat, "todo: docstring", py::arg("format"))
  .def("GetShader", (Urho3D::ShaderVariation * (Urho3D::Graphics::*)(Urho3D::ShaderType, const Urho3D::String &, const Urho3D::String &) const) &Urho3D::Graphics::GetShader, "todo: docstring", py::arg("type"), py::arg("name"), py::arg("defines")=String::EMPTY)
  .def("GetShader", (Urho3D::ShaderVariation * (Urho3D::Graphics::*)(Urho3D::ShaderType, const char *, const char *) const) &Urho3D::Graphics::GetShader, "todo: docstring", py::arg("type"), py::arg("name"), py::arg("defines"))
  .def("GetVertexBuffer", (Urho3D::VertexBuffer * (Urho3D::Graphics::*)(unsigned int) const) &Urho3D::Graphics::GetVertexBuffer, "todo: docstring", py::arg("index"))
  .def("GetIndexBuffer", (Urho3D::IndexBuffer * (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetIndexBuffer, "todo: docstring")
  .def("GetVertexShader", (Urho3D::ShaderVariation * (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetVertexShader, "todo: docstring")
  .def("GetPixelShader", (Urho3D::ShaderVariation * (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetPixelShader, "todo: docstring")
  .def("GetShaderProgram", (Urho3D::ShaderProgram * (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetShaderProgram, "todo: docstring")
  .def("GetTextureUnit", (Urho3D::TextureUnit (Urho3D::Graphics::*)(const Urho3D::String &)) &Urho3D::Graphics::GetTextureUnit, "todo: docstring", py::arg("name"))
  .def("GetTextureUnitName", (const Urho3D::String & (Urho3D::Graphics::*)(Urho3D::TextureUnit)) &Urho3D::Graphics::GetTextureUnitName, "todo: docstring", py::arg("unit"))
  .def("GetTexture", (Urho3D::Texture * (Urho3D::Graphics::*)(unsigned int) const) &Urho3D::Graphics::GetTexture, "todo: docstring", py::arg("index"))
  .def("GetDefaultTextureFilterMode", (Urho3D::TextureFilterMode (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDefaultTextureFilterMode, "todo: docstring")
  .def("GetDefaultTextureAnisotropy", (unsigned int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDefaultTextureAnisotropy, "todo: docstring")
  .def("GetRenderTarget", (Urho3D::RenderSurface * (Urho3D::Graphics::*)(unsigned int) const) &Urho3D::Graphics::GetRenderTarget, "todo: docstring", py::arg("index"))
  .def("GetDepthStencil", (Urho3D::RenderSurface * (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDepthStencil, "todo: docstring")
  .def("GetViewport", (Urho3D::IntRect (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetViewport, "todo: docstring")
  .def("GetBlendMode", (Urho3D::BlendMode (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetBlendMode, "todo: docstring")
  .def("GetAlphaToCoverage", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetAlphaToCoverage, "todo: docstring")
  .def("GetColorWrite", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetColorWrite, "todo: docstring")
  .def("GetCullMode", (Urho3D::CullMode (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetCullMode, "todo: docstring")
  .def("GetDepthConstantBias", (float (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDepthConstantBias, "todo: docstring")
  .def("GetDepthSlopeScaledBias", (float (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDepthSlopeScaledBias, "todo: docstring")
  .def("GetDepthTest", (Urho3D::CompareMode (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDepthTest, "todo: docstring")
  .def("GetDepthWrite", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetDepthWrite, "todo: docstring")
  .def("GetFillMode", (Urho3D::FillMode (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetFillMode, "todo: docstring")
  .def("GetLineAntiAlias", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetLineAntiAlias, "todo: docstring")
  .def("GetStencilTest", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetStencilTest, "todo: docstring")
  .def("GetScissorTest", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetScissorTest, "todo: docstring")
  .def("GetScissorRect", (const Urho3D::IntRect & (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetScissorRect, "todo: docstring")
  .def("GetStencilTestMode", (Urho3D::CompareMode (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetStencilTestMode, "todo: docstring")
  .def("GetStencilPass", (Urho3D::StencilOp (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetStencilPass, "todo: docstring")
  .def("GetStencilFail", (Urho3D::StencilOp (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetStencilFail, "todo: docstring")
  .def("GetStencilZFail", (Urho3D::StencilOp (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetStencilZFail, "todo: docstring")
  .def("GetStencilRef", (unsigned int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetStencilRef, "todo: docstring")
  .def("GetStencilCompareMask", (unsigned int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetStencilCompareMask, "todo: docstring")
  .def("GetStencilWriteMask", (unsigned int (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetStencilWriteMask, "todo: docstring")
  .def("GetUseClipPlane", (bool (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetUseClipPlane, "todo: docstring")
  .def("GetShaderCacheDir", (const Urho3D::String & (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetShaderCacheDir, "todo: docstring")
  .def("GetRenderTargetDimensions", (Urho3D::IntVector2 (Urho3D::Graphics::*)() const) &Urho3D::Graphics::GetRenderTargetDimensions, "todo: docstring")
  .def("OnWindowResized", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::OnWindowResized, "todo: docstring")
  .def("OnWindowMoved", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::OnWindowMoved, "todo: docstring")
  .def("Restore", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::Restore, "todo: docstring")
  .def("Maximize", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::Maximize, "todo: docstring")
  .def("Minimize", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::Minimize, "todo: docstring")
  .def("Raise", (void (Urho3D::Graphics::*)() const) &Urho3D::Graphics::Raise, "todo: docstring")
  .def("AddGPUObject", (void (Urho3D::Graphics::*)(Urho3D::GPUObject *)) &Urho3D::Graphics::AddGPUObject, "todo: docstring", py::arg("object"))
  .def("RemoveGPUObject", (void (Urho3D::Graphics::*)(Urho3D::GPUObject *)) &Urho3D::Graphics::RemoveGPUObject, "todo: docstring", py::arg("object"))
  .def("ReserveScratchBuffer", (void * (Urho3D::Graphics::*)(unsigned int)) &Urho3D::Graphics::ReserveScratchBuffer, "todo: docstring", py::arg("size"))
  .def("FreeScratchBuffer", (void (Urho3D::Graphics::*)(void *)) &Urho3D::Graphics::FreeScratchBuffer, "todo: docstring", py::arg("buffer"))
  .def("CleanupScratchBuffers", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::CleanupScratchBuffers, "todo: docstring")
  .def("CleanupShaderPrograms", (void (Urho3D::Graphics::*)(Urho3D::ShaderVariation *)) &Urho3D::Graphics::CleanupShaderPrograms, "todo: docstring", py::arg("variation"))
  .def("CleanupRenderSurface", (void (Urho3D::Graphics::*)(Urho3D::RenderSurface *)) &Urho3D::Graphics::CleanupRenderSurface, "todo: docstring", py::arg("surface"))
  .def("GetOrCreateConstantBuffer", (Urho3D::ConstantBuffer * (Urho3D::Graphics::*)(Urho3D::ShaderType, unsigned int, unsigned int)) &Urho3D::Graphics::GetOrCreateConstantBuffer, "todo: docstring", py::arg("type"), py::arg("index"), py::arg("size"))
  .def("MarkFBODirty", (void (Urho3D::Graphics::*)()) &Urho3D::Graphics::MarkFBODirty, "todo: docstring")
  .def("SetVBO", (void (Urho3D::Graphics::*)(unsigned int)) &Urho3D::Graphics::SetVBO, "todo: docstring", py::arg("object"))
  .def("SetUBO", (void (Urho3D::Graphics::*)(unsigned int)) &Urho3D::Graphics::SetUBO, "todo: docstring", py::arg("object"))
// Class Variables:
;
}

void Implement_Urho3D_Time(py::class_<Urho3D::Time, Urho3D::SharedPtr<Urho3D::Time>, Urho3D::Object>& pyclass_Var_Urho3D_Time)
{
    // Class Time Implementation
pyclass_Var_Urho3D_Time
  .def("GetType", (Urho3D::StringHash (Urho3D::Time::*)() const) &Urho3D::Time::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Time::*)() const) &Urho3D::Time::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Time::*)() const) &Urho3D::Time::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Time", (void (Urho3D::Time::*)()) &Urho3D::Time::~Time, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginFrame", (void (Urho3D::Time::*)(float)) &Urho3D::Time::BeginFrame, "todo: docstring", py::arg("timeStep"))
  .def("EndFrame", (void (Urho3D::Time::*)()) &Urho3D::Time::EndFrame, "todo: docstring")
  .def("SetTimerPeriod", (void (Urho3D::Time::*)(unsigned int)) &Urho3D::Time::SetTimerPeriod, "todo: docstring", py::arg("mSec"))
  .def("GetFrameNumber", (unsigned int (Urho3D::Time::*)() const) &Urho3D::Time::GetFrameNumber, "todo: docstring")
  .def("GetTimeStep", (float (Urho3D::Time::*)() const) &Urho3D::Time::GetTimeStep, "todo: docstring")
  .def("GetTimerPeriod", (unsigned int (Urho3D::Time::*)() const) &Urho3D::Time::GetTimerPeriod, "todo: docstring")
  .def("GetElapsedTime", (float (Urho3D::Time::*)()) &Urho3D::Time::GetElapsedTime, "todo: docstring")
  .def("GetFramesPerSecond", (float (Urho3D::Time::*)() const) &Urho3D::Time::GetFramesPerSecond, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_PackageFile(py::class_<Urho3D::PackageFile, Urho3D::SharedPtr<Urho3D::PackageFile>, Urho3D::Object>& pyclass_Var_Urho3D_PackageFile)
{
    // Class PackageFile Implementation
pyclass_Var_Urho3D_PackageFile
  .def("GetType", (Urho3D::StringHash (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def(py::init<Urho3D::Context *, const Urho3D::String &, unsigned int>(), "todo: constructor docstring")
  //.def("~PackageFile", (void (Urho3D::PackageFile::*)()) &Urho3D::PackageFile::~PackageFile, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Open", (bool (Urho3D::PackageFile::*)(const Urho3D::String &, unsigned int)) &Urho3D::PackageFile::Open, "todo: docstring", py::arg("fileName"), py::arg("startOffset")=0)
  .def("Exists", (bool (Urho3D::PackageFile::*)(const Urho3D::String &) const) &Urho3D::PackageFile::Exists, "todo: docstring", py::arg("fileName"))
  //.def("GetEntry", (const Urho3D::PackageEntry * (Urho3D::PackageFile::*)(const Urho3D::String &) const) &Urho3D::PackageFile::GetEntry, "todo: docstring", py::arg("fileName"))
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetEntries", (const HashMap<Urho3D::String, Urho3D::PackageEntry> & (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetEntries, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetName", (const Urho3D::String & (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetName, "todo: docstring")
  .def("GetNameHash", (Urho3D::StringHash (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetNameHash, "todo: docstring")
  .def("GetNumFiles", (unsigned int (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetNumFiles, "todo: docstring")
  .def("GetTotalSize", (unsigned int (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetTotalSize, "todo: docstring")
  .def("GetTotalDataSize", (unsigned int (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetTotalDataSize, "todo: docstring")
  .def("GetChecksum", (unsigned int (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetChecksum, "todo: docstring")
  .def("IsCompressed", (bool (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::IsCompressed, "todo: docstring")
  //.def("GetEntryNames", (const Vector<Urho3D::String> (Urho3D::PackageFile::*)() const) &Urho3D::PackageFile::GetEntryNames, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_NodeReplicationState(py::class_<Urho3D::NodeReplicationState, Urho3D::ExternalPtr<Urho3D::NodeReplicationState>, Urho3D::ReplicationState>& pyclass_Var_Urho3D_NodeReplicationState)
{
    // Class NodeReplicationState Implementation
pyclass_Var_Urho3D_NodeReplicationState
// Class Variables:
  .def_readwrite("node",&Urho3D::NodeReplicationState::node_, "todo: var docstring")//Urho3D::WeakPtr<Urho3D::Node>
  .def_readwrite("dirtyAttributes",&Urho3D::NodeReplicationState::dirtyAttributes_, "todo: var docstring")//Urho3D::DirtyBits
  .def_readwrite("dirtyVars",&Urho3D::NodeReplicationState::dirtyVars_, "todo: var docstring")//Urho3D::HashSet<Urho3D::StringHash>
  .def_readwrite("componentStates",&Urho3D::NodeReplicationState::componentStates_, "todo: var docstring")//Urho3D::HashMap<unsigned int, Urho3D::ComponentReplicationState>
  .def_readwrite("priorityAcc",&Urho3D::NodeReplicationState::priorityAcc_, "todo: var docstring")//float
  .def_readwrite("markedDirty",&Urho3D::NodeReplicationState::markedDirty_, "todo: var docstring")//bool
;
}

void Implement_Urho3D_Plane(py::class_<Urho3D::Plane, Urho3D::ExternalPtr<Urho3D::Plane>>& pyclass_Var_Urho3D_Plane)
{
    // Class Plane Implementation
pyclass_Var_Urho3D_Plane
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Plane &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Vector3 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector4 &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Plane(), "todo: docstring").def("__assign__", (Urho3D::Plane & (Urho3D::Plane::*)(const Urho3D::Plane &)) &Urho3D::Plane::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Plane']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Define", (void (Urho3D::Plane::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::Plane::Define, "todo: docstring", py::arg("v0"), py::arg("v1"), py::arg("v2"))
  .def("Define", (void (Urho3D::Plane::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::Plane::Define, "todo: docstring", py::arg("normal"), py::arg("point"))
  .def("Define", (void (Urho3D::Plane::*)(const Urho3D::Vector4 &)) &Urho3D::Plane::Define, "todo: docstring", py::arg("plane"))
  .def("Transform", (void (Urho3D::Plane::*)(const Urho3D::Matrix3 &)) &Urho3D::Plane::Transform, "todo: docstring", py::arg("transform"))
  .def("Transform", (void (Urho3D::Plane::*)(const Urho3D::Matrix3x4 &)) &Urho3D::Plane::Transform, "todo: docstring", py::arg("transform"))
  .def("Transform", (void (Urho3D::Plane::*)(const Urho3D::Matrix4 &)) &Urho3D::Plane::Transform, "todo: docstring", py::arg("transform"))
  .def("Project", (Urho3D::Vector3 (Urho3D::Plane::*)(const Urho3D::Vector3 &) const) &Urho3D::Plane::Project, "todo: docstring", py::arg("point"))
  .def("Distance", (float (Urho3D::Plane::*)(const Urho3D::Vector3 &) const) &Urho3D::Plane::Distance, "todo: docstring", py::arg("point"))
  .def("Reflect", (Urho3D::Vector3 (Urho3D::Plane::*)(const Urho3D::Vector3 &) const) &Urho3D::Plane::Reflect, "todo: docstring", py::arg("direction"))
  .def("ReflectionMatrix", (Urho3D::Matrix3x4 (Urho3D::Plane::*)() const) &Urho3D::Plane::ReflectionMatrix, "todo: docstring")
  .def("Transformed", (Urho3D::Plane (Urho3D::Plane::*)(const Urho3D::Matrix3 &) const) &Urho3D::Plane::Transformed, "todo: docstring", py::arg("transform"))
  .def("Transformed", (Urho3D::Plane (Urho3D::Plane::*)(const Urho3D::Matrix3x4 &) const) &Urho3D::Plane::Transformed, "todo: docstring", py::arg("transform"))
  .def("Transformed", (Urho3D::Plane (Urho3D::Plane::*)(const Urho3D::Matrix4 &) const) &Urho3D::Plane::Transformed, "todo: docstring", py::arg("transform"))
  .def("ToVector4", (Urho3D::Vector4 (Urho3D::Plane::*)() const) &Urho3D::Plane::ToVector4, "todo: docstring")
// Class Variables:
  .def_readwrite("normal",&Urho3D::Plane::normal_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("absNormal",&Urho3D::Plane::absNormal_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("d",&Urho3D::Plane::d_, "todo: var docstring")//float
  .def_readonly_static("UP",&Urho3D::Plane::UP, "todo: var docstring")//const Urho3D::Plane
;
}

void Implement_Urho3D_Pass(py::class_<Urho3D::Pass, Urho3D::SharedPtr<Urho3D::Pass>, Urho3D::RefCounted>& pyclass_Var_Urho3D_Pass)
{
    // Class Pass Implementation
pyclass_Var_Urho3D_Pass
  .def(py::init<const Urho3D::String &>(), "todo: constructor docstring")
  //.def("~Pass", (void (Urho3D::Pass::*)()) &Urho3D::Pass::~Pass, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetBlendMode", (void (Urho3D::Pass::*)(Urho3D::BlendMode)) &Urho3D::Pass::SetBlendMode, "todo: docstring", py::arg("mode"))
  .def("SetCullMode", (void (Urho3D::Pass::*)(Urho3D::CullMode)) &Urho3D::Pass::SetCullMode, "todo: docstring", py::arg("mode"))
  .def("SetDepthTestMode", (void (Urho3D::Pass::*)(Urho3D::CompareMode)) &Urho3D::Pass::SetDepthTestMode, "todo: docstring", py::arg("mode"))
  .def("SetLightingMode", (void (Urho3D::Pass::*)(Urho3D::PassLightingMode)) &Urho3D::Pass::SetLightingMode, "todo: docstring", py::arg("mode"))
  .def("SetDepthWrite", (void (Urho3D::Pass::*)(bool)) &Urho3D::Pass::SetDepthWrite, "todo: docstring", py::arg("enable"))
  .def("SetAlphaToCoverage", (void (Urho3D::Pass::*)(bool)) &Urho3D::Pass::SetAlphaToCoverage, "todo: docstring", py::arg("enable"))
  .def("SetIsDesktop", (void (Urho3D::Pass::*)(bool)) &Urho3D::Pass::SetIsDesktop, "todo: docstring", py::arg("enable"))
  .def("SetVertexShader", (void (Urho3D::Pass::*)(const Urho3D::String &)) &Urho3D::Pass::SetVertexShader, "todo: docstring", py::arg("name"))
  .def("SetPixelShader", (void (Urho3D::Pass::*)(const Urho3D::String &)) &Urho3D::Pass::SetPixelShader, "todo: docstring", py::arg("name"))
  .def("SetVertexShaderDefines", (void (Urho3D::Pass::*)(const Urho3D::String &)) &Urho3D::Pass::SetVertexShaderDefines, "todo: docstring", py::arg("defines"))
  .def("SetPixelShaderDefines", (void (Urho3D::Pass::*)(const Urho3D::String &)) &Urho3D::Pass::SetPixelShaderDefines, "todo: docstring", py::arg("defines"))
  .def("SetVertexShaderDefineExcludes", (void (Urho3D::Pass::*)(const Urho3D::String &)) &Urho3D::Pass::SetVertexShaderDefineExcludes, "todo: docstring", py::arg("excludes"))
  .def("SetPixelShaderDefineExcludes", (void (Urho3D::Pass::*)(const Urho3D::String &)) &Urho3D::Pass::SetPixelShaderDefineExcludes, "todo: docstring", py::arg("excludes"))
  .def("ReleaseShaders", (void (Urho3D::Pass::*)()) &Urho3D::Pass::ReleaseShaders, "todo: docstring")
  .def("MarkShadersLoaded", (void (Urho3D::Pass::*)(unsigned int)) &Urho3D::Pass::MarkShadersLoaded, "todo: docstring", py::arg("frameNumber"))
  .def("GetName", (const Urho3D::String & (Urho3D::Pass::*)() const) &Urho3D::Pass::GetName, "todo: docstring")
  .def("GetIndex", (unsigned int (Urho3D::Pass::*)() const) &Urho3D::Pass::GetIndex, "todo: docstring")
  .def("GetBlendMode", (Urho3D::BlendMode (Urho3D::Pass::*)() const) &Urho3D::Pass::GetBlendMode, "todo: docstring")
  .def("GetCullMode", (Urho3D::CullMode (Urho3D::Pass::*)() const) &Urho3D::Pass::GetCullMode, "todo: docstring")
  .def("GetDepthTestMode", (Urho3D::CompareMode (Urho3D::Pass::*)() const) &Urho3D::Pass::GetDepthTestMode, "todo: docstring")
  .def("GetLightingMode", (Urho3D::PassLightingMode (Urho3D::Pass::*)() const) &Urho3D::Pass::GetLightingMode, "todo: docstring")
  .def("GetShadersLoadedFrameNumber", (unsigned int (Urho3D::Pass::*)() const) &Urho3D::Pass::GetShadersLoadedFrameNumber, "todo: docstring")
  .def("GetDepthWrite", (bool (Urho3D::Pass::*)() const) &Urho3D::Pass::GetDepthWrite, "todo: docstring")
  .def("GetAlphaToCoverage", (bool (Urho3D::Pass::*)() const) &Urho3D::Pass::GetAlphaToCoverage, "todo: docstring")
  .def("IsDesktop", (bool (Urho3D::Pass::*)() const) &Urho3D::Pass::IsDesktop, "todo: docstring")
  .def("GetVertexShader", (const Urho3D::String & (Urho3D::Pass::*)() const) &Urho3D::Pass::GetVertexShader, "todo: docstring")
  .def("GetPixelShader", (const Urho3D::String & (Urho3D::Pass::*)() const) &Urho3D::Pass::GetPixelShader, "todo: docstring")
  .def("GetVertexShaderDefines", (const Urho3D::String & (Urho3D::Pass::*)() const) &Urho3D::Pass::GetVertexShaderDefines, "todo: docstring")
  .def("GetPixelShaderDefines", (const Urho3D::String & (Urho3D::Pass::*)() const) &Urho3D::Pass::GetPixelShaderDefines, "todo: docstring")
  .def("GetVertexShaderDefineExcludes", (const Urho3D::String & (Urho3D::Pass::*)() const) &Urho3D::Pass::GetVertexShaderDefineExcludes, "todo: docstring")
  .def("GetPixelShaderDefineExcludes", (const Urho3D::String & (Urho3D::Pass::*)() const) &Urho3D::Pass::GetPixelShaderDefineExcludes, "todo: docstring")
  //.def("GetVertexShaders", (Vector<SharedPtr<Urho3D::ShaderVariation> > & (Urho3D::Pass::*)()) &Urho3D::Pass::GetVertexShaders, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetPixelShaders", (Vector<SharedPtr<Urho3D::ShaderVariation> > & (Urho3D::Pass::*)()) &Urho3D::Pass::GetPixelShaders, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetVertexShaders", (Vector<SharedPtr<Urho3D::ShaderVariation> > & (Urho3D::Pass::*)(const Urho3D::StringHash &)) &Urho3D::Pass::GetVertexShaders, "todo: docstring", py::arg("extraDefinesHash"))
    //['Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetPixelShaders", (Vector<SharedPtr<Urho3D::ShaderVariation> > & (Urho3D::Pass::*)(const Urho3D::StringHash &)) &Urho3D::Pass::GetPixelShaders, "todo: docstring", py::arg("extraDefinesHash"))
    //['Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetEffectiveVertexShaderDefines", (Urho3D::String (Urho3D::Pass::*)() const) &Urho3D::Pass::GetEffectiveVertexShaderDefines, "todo: docstring")
  .def("GetEffectivePixelShaderDefines", (Urho3D::String (Urho3D::Pass::*)() const) &Urho3D::Pass::GetEffectivePixelShaderDefines, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ResourceCache(py::class_<Urho3D::ResourceCache, Urho3D::SharedPtr<Urho3D::ResourceCache>, Urho3D::Object>& pyclass_Var_Urho3D_ResourceCache)
{
    // Class ResourceCache Implementation
pyclass_Var_Urho3D_ResourceCache
  .def("GetType", (Urho3D::StringHash (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ResourceCache", (void (Urho3D::ResourceCache::*)()) &Urho3D::ResourceCache::~ResourceCache, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("AddResourceDir", (bool (Urho3D::ResourceCache::*)(const Urho3D::String &, unsigned int)) &Urho3D::ResourceCache::AddResourceDir, "todo: docstring", py::arg("pathName"), py::arg("priority")=PRIORITY_LAST)
  .def("AddPackageFile", (bool (Urho3D::ResourceCache::*)(Urho3D::PackageFile *, unsigned int)) &Urho3D::ResourceCache::AddPackageFile, "todo: docstring", py::arg("package"), py::arg("priority")=PRIORITY_LAST)
  .def("AddPackageFile", (bool (Urho3D::ResourceCache::*)(const Urho3D::String &, unsigned int)) &Urho3D::ResourceCache::AddPackageFile, "todo: docstring", py::arg("fileName"), py::arg("priority")=PRIORITY_LAST)
  .def("AddManualResource", (bool (Urho3D::ResourceCache::*)(Urho3D::Resource *)) &Urho3D::ResourceCache::AddManualResource, "todo: docstring", py::arg("resource"))
  .def("RemoveResourceDir", (void (Urho3D::ResourceCache::*)(const Urho3D::String &)) &Urho3D::ResourceCache::RemoveResourceDir, "todo: docstring", py::arg("pathName"))
  .def("RemovePackageFile", (void (Urho3D::ResourceCache::*)(Urho3D::PackageFile *, bool, bool)) &Urho3D::ResourceCache::RemovePackageFile, "todo: docstring", py::arg("package"), py::arg("releaseResources")=true, py::arg("forceRelease")=false)
  .def("RemovePackageFile", (void (Urho3D::ResourceCache::*)(const Urho3D::String &, bool, bool)) &Urho3D::ResourceCache::RemovePackageFile, "todo: docstring", py::arg("fileName"), py::arg("releaseResources")=true, py::arg("forceRelease")=false)
  .def("ReleaseResource", (void (Urho3D::ResourceCache::*)(Urho3D::StringHash, const Urho3D::String &, bool)) &Urho3D::ResourceCache::ReleaseResource, "todo: docstring", py::arg("type"), py::arg("name"), py::arg("force")=false)
  .def("ReleaseResources", (void (Urho3D::ResourceCache::*)(Urho3D::StringHash, bool)) &Urho3D::ResourceCache::ReleaseResources, "todo: docstring", py::arg("type"), py::arg("force")=false)
  .def("ReleaseResources", (void (Urho3D::ResourceCache::*)(Urho3D::StringHash, const Urho3D::String &, bool)) &Urho3D::ResourceCache::ReleaseResources, "todo: docstring", py::arg("type"), py::arg("partialName"), py::arg("force")=false)
  .def("ReleaseResources", (void (Urho3D::ResourceCache::*)(const Urho3D::String &, bool)) &Urho3D::ResourceCache::ReleaseResources, "todo: docstring", py::arg("partialName"), py::arg("force")=false)
  .def("ReleaseAllResources", (void (Urho3D::ResourceCache::*)(bool)) &Urho3D::ResourceCache::ReleaseAllResources, "todo: docstring", py::arg("force")=false)
  .def("ReloadResource", (bool (Urho3D::ResourceCache::*)(Urho3D::Resource *)) &Urho3D::ResourceCache::ReloadResource, "todo: docstring", py::arg("resource"))
  .def("ReloadResourceWithDependencies", (void (Urho3D::ResourceCache::*)(const Urho3D::String &)) &Urho3D::ResourceCache::ReloadResourceWithDependencies, "todo: docstring", py::arg("fileName"))
  .def("SetMemoryBudget", (void (Urho3D::ResourceCache::*)(Urho3D::StringHash, unsigned long long)) &Urho3D::ResourceCache::SetMemoryBudget, "todo: docstring", py::arg("type"), py::arg("budget"))
  .def("SetAutoReloadResources", (void (Urho3D::ResourceCache::*)(bool)) &Urho3D::ResourceCache::SetAutoReloadResources, "todo: docstring", py::arg("enable"))
  .def("SetReturnFailedResources", (void (Urho3D::ResourceCache::*)(bool)) &Urho3D::ResourceCache::SetReturnFailedResources, "todo: docstring", py::arg("enable"))
  .def("SetSearchPackagesFirst", (void (Urho3D::ResourceCache::*)(bool)) &Urho3D::ResourceCache::SetSearchPackagesFirst, "todo: docstring", py::arg("value"))
  .def("SetFinishBackgroundResourcesMs", (void (Urho3D::ResourceCache::*)(int)) &Urho3D::ResourceCache::SetFinishBackgroundResourcesMs, "todo: docstring", py::arg("ms"))
  .def("AddResourceRouter", (void (Urho3D::ResourceCache::*)(Urho3D::ResourceRouter *, bool)) &Urho3D::ResourceCache::AddResourceRouter, "todo: docstring", py::arg("router"), py::arg("addAsFirst")=false)
  .def("RemoveResourceRouter", (void (Urho3D::ResourceCache::*)(Urho3D::ResourceRouter *)) &Urho3D::ResourceCache::RemoveResourceRouter, "todo: docstring", py::arg("router"))
  //.def("GetFile", (SharedPtr<Urho3D::File> (Urho3D::ResourceCache::*)(const Urho3D::String &, bool)) &Urho3D::ResourceCache::GetFile, "todo: docstring", py::arg("name"), py::arg("sendEventOnFailure")=true)
    //['Urho3D::String', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetResource", (Urho3D::Resource * (Urho3D::ResourceCache::*)(Urho3D::StringHash, const Urho3D::String &, const Urho3D::String &, bool)) &Urho3D::ResourceCache::GetResource, "todo: docstring", py::arg("type"), py::arg("name"), py::arg("basePath")=String::EMPTY, py::arg("sendEventOnFailure")=true)
  //.def("GetTempResource", (SharedPtr<Urho3D::Resource> (Urho3D::ResourceCache::*)(Urho3D::StringHash, const Urho3D::String &, const Urho3D::String &, bool)) &Urho3D::ResourceCache::GetTempResource, "todo: docstring", py::arg("type"), py::arg("name"), py::arg("basePath")=String::EMPTY, py::arg("sendEventOnFailure")=true)
    //['Urho3D::StringHash', 'Urho3D::String', 'Urho3D::String', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("BackgroundLoadResource", (bool (Urho3D::ResourceCache::*)(Urho3D::StringHash, const Urho3D::String &, const Urho3D::String &, bool, Urho3D::Resource *)) &Urho3D::ResourceCache::BackgroundLoadResource, "todo: docstring", py::arg("type"), py::arg("name"), py::arg("basePath")=String::EMPTY, py::arg("sendEventOnFailure")=true, py::arg("caller")=nullptr)
  .def("GetNumBackgroundLoadResources", (unsigned int (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetNumBackgroundLoadResources, "todo: docstring")
  //.def("GetResources", (void (Urho3D::ResourceCache::*)(Urho3D::PODVector<Urho3D::Resource *> &, Urho3D::StringHash) const) &Urho3D::ResourceCache::GetResources, "todo: docstring", py::arg("result"), py::arg("type"))
    //['Urho3D::PODVector<Urho3D::Resource', 'Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetExistingResource", (Urho3D::Resource * (Urho3D::ResourceCache::*)(Urho3D::StringHash, const Urho3D::String &)) &Urho3D::ResourceCache::GetExistingResource, "todo: docstring", py::arg("type"), py::arg("name"))
  //.def("GetAllResources", (const HashMap<Urho3D::StringHash, Urho3D::ResourceGroup> & (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetAllResources, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetResourceDirs", (const Vector<Urho3D::String> & (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetResourceDirs, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetPackageFiles", (const Vector<SharedPtr<Urho3D::PackageFile> > & (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetPackageFiles, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("Exists", (bool (Urho3D::ResourceCache::*)(const Urho3D::String &, const Urho3D::String &) const) &Urho3D::ResourceCache::Exists, "todo: docstring", py::arg("name"), py::arg("basePath")=String::EMPTY)
  .def("GetMemoryBudget", (unsigned long long (Urho3D::ResourceCache::*)(Urho3D::StringHash) const) &Urho3D::ResourceCache::GetMemoryBudget, "todo: docstring", py::arg("type"))
  .def("GetMemoryUse", (unsigned long long (Urho3D::ResourceCache::*)(Urho3D::StringHash) const) &Urho3D::ResourceCache::GetMemoryUse, "todo: docstring", py::arg("type"))
  .def("GetTotalMemoryUse", (unsigned long long (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetTotalMemoryUse, "todo: docstring")
  .def("GetResourceFileName", (Urho3D::String (Urho3D::ResourceCache::*)(const Urho3D::String &) const) &Urho3D::ResourceCache::GetResourceFileName, "todo: docstring", py::arg("name"))
  .def("GetAutoReloadResources", (bool (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetAutoReloadResources, "todo: docstring")
  .def("GetReturnFailedResources", (bool (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetReturnFailedResources, "todo: docstring")
  .def("GetSearchPackagesFirst", (bool (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetSearchPackagesFirst, "todo: docstring")
  .def("GetFinishBackgroundResourcesMs", (int (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::GetFinishBackgroundResourcesMs, "todo: docstring")
  .def("GetResourceRouter", (Urho3D::ResourceRouter * (Urho3D::ResourceCache::*)(unsigned int) const) &Urho3D::ResourceCache::GetResourceRouter, "todo: docstring", py::arg("index"))
  .def("GetPreferredResourceDir", (Urho3D::String (Urho3D::ResourceCache::*)(const Urho3D::String &) const) &Urho3D::ResourceCache::GetPreferredResourceDir, "todo: docstring", py::arg("path"))
  .def("SanitateResourceName", (Urho3D::String (Urho3D::ResourceCache::*)(const Urho3D::String &) const) &Urho3D::ResourceCache::SanitateResourceName, "todo: docstring", py::arg("name"))
  .def("SanitateResourceDirName", (Urho3D::String (Urho3D::ResourceCache::*)(const Urho3D::String &) const) &Urho3D::ResourceCache::SanitateResourceDirName, "todo: docstring", py::arg("name"))
  .def("StoreResourceDependency", (void (Urho3D::ResourceCache::*)(Urho3D::Resource *, const Urho3D::String &)) &Urho3D::ResourceCache::StoreResourceDependency, "todo: docstring", py::arg("resource"), py::arg("dependency"))
  .def("ResetDependencies", (void (Urho3D::ResourceCache::*)(Urho3D::Resource *)) &Urho3D::ResourceCache::ResetDependencies, "todo: docstring", py::arg("resource"))
  .def("PrintMemoryUsage", (Urho3D::String (Urho3D::ResourceCache::*)() const) &Urho3D::ResourceCache::PrintMemoryUsage, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ScriptEventInvoker(py::class_<Urho3D::ScriptEventInvoker, Urho3D::SharedPtr<Urho3D::ScriptEventInvoker>, Urho3D::Object>& pyclass_Var_Urho3D_ScriptEventInvoker)
{
    // Class ScriptEventInvoker Implementation
pyclass_Var_Urho3D_ScriptEventInvoker
  .def("GetType", (Urho3D::StringHash (Urho3D::ScriptEventInvoker::*)() const) &Urho3D::ScriptEventInvoker::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ScriptEventInvoker::*)() const) &Urho3D::ScriptEventInvoker::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ScriptEventInvoker::*)() const) &Urho3D::ScriptEventInvoker::GetTypeInfo, "todo: docstring")
  //.def(py::init<Urho3D::ScriptFile *, asIScriptObject *>(), "todo: constructor docstring")
    //['Urho3D::ScriptFile', 'asIScriptObject']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("~ScriptEventInvoker", (void (Urho3D::ScriptEventInvoker::*)()) &Urho3D::ScriptEventInvoker::~ScriptEventInvoker, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("GetObject", (asIScriptObject * (Urho3D::ScriptEventInvoker::*)() const) &Urho3D::ScriptEventInvoker::GetObject, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("IsObjectAlive", (bool (Urho3D::ScriptEventInvoker::*)() const) &Urho3D::ScriptEventInvoker::IsObjectAlive, "todo: docstring")
  .def("HandleScriptEvent", (void (Urho3D::ScriptEventInvoker::*)(Urho3D::StringHash, Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::ScriptEventInvoker::HandleScriptEvent, "todo: docstring", py::arg("eventType"), py::arg("eventData"))
// Class Variables:
;
}

void Implement_Urho3D_OggVorbisSoundStream(py::class_<Urho3D::OggVorbisSoundStream, Urho3D::SharedPtr<Urho3D::OggVorbisSoundStream>, Urho3D::SoundStream>& pyclass_Var_Urho3D_OggVorbisSoundStream)
{
    // Class OggVorbisSoundStream Implementation
pyclass_Var_Urho3D_OggVorbisSoundStream
  .def(py::init<const Urho3D::Sound *>(), "todo: constructor docstring")
  //.def("~OggVorbisSoundStream", (void (Urho3D::OggVorbisSoundStream::*)()) &Urho3D::OggVorbisSoundStream::~OggVorbisSoundStream, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Seek", (bool (Urho3D::OggVorbisSoundStream::*)(unsigned int)) &Urho3D::OggVorbisSoundStream::Seek, "todo: docstring", py::arg("sample_number"))
  //.def("GetData", (unsigned int (Urho3D::OggVorbisSoundStream::*)(signed char *, unsigned int)) &Urho3D::OggVorbisSoundStream::GetData, "todo: docstring", py::arg("dest"), py::arg("numBytes"))
    //['signed char', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_Thread(py::class_<Urho3D::Thread, Urho3D::ExternalPtr<Urho3D::Thread>>& pyclass_Var_Urho3D_Thread)
{
    // Class Thread Implementation
pyclass_Var_Urho3D_Thread
  //.def(py::init<>(), "todo: constructor docstring")
    // Abstract class Thread -> no init
  //.def("~Thread", (void (Urho3D::Thread::*)()) &Urho3D::Thread::~Thread, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ThreadFunction", (void (Urho3D::Thread::*)()) &Urho3D::Thread::ThreadFunction, "todo: docstring")
  .def("Run", (bool (Urho3D::Thread::*)()) &Urho3D::Thread::Run, "todo: docstring")
  .def("Stop", (void (Urho3D::Thread::*)()) &Urho3D::Thread::Stop, "todo: docstring")
  .def("SetPriority", (void (Urho3D::Thread::*)(int)) &Urho3D::Thread::SetPriority, "todo: docstring", py::arg("priority"))
  .def("IsStarted", (bool (Urho3D::Thread::*)() const) &Urho3D::Thread::IsStarted, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_EventProfilerBlock(py::class_<Urho3D::EventProfilerBlock, Urho3D::ExternalPtr<Urho3D::EventProfilerBlock>, Urho3D::ProfilerBlock>& pyclass_Var_Urho3D_EventProfilerBlock)
{
    // Class EventProfilerBlock Implementation
pyclass_Var_Urho3D_EventProfilerBlock
  .def(py::init<Urho3D::EventProfilerBlock *, Urho3D::StringHash>(), "todo: constructor docstring")
  .def("GetChild", (Urho3D::EventProfilerBlock * (Urho3D::EventProfilerBlock::*)(Urho3D::StringHash)) &Urho3D::EventProfilerBlock::GetChild, "todo: docstring", py::arg("eventID"))
// Class Variables:
  .def_readwrite("eventID",&Urho3D::EventProfilerBlock::eventID_, "todo: var docstring")//Urho3D::StringHash
;
}

void Implement_Urho3D_WorkQueue(py::class_<Urho3D::WorkQueue, Urho3D::SharedPtr<Urho3D::WorkQueue>, Urho3D::Object>& pyclass_Var_Urho3D_WorkQueue)
{
    // Class WorkQueue Implementation
pyclass_Var_Urho3D_WorkQueue
  .def("GetType", (Urho3D::StringHash (Urho3D::WorkQueue::*)() const) &Urho3D::WorkQueue::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::WorkQueue::*)() const) &Urho3D::WorkQueue::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::WorkQueue::*)() const) &Urho3D::WorkQueue::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~WorkQueue", (void (Urho3D::WorkQueue::*)()) &Urho3D::WorkQueue::~WorkQueue, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("CreateThreads", (void (Urho3D::WorkQueue::*)(unsigned int)) &Urho3D::WorkQueue::CreateThreads, "todo: docstring", py::arg("numThreads"))
  //.def("GetFreeItem", (SharedPtr<Urho3D::WorkItem> (Urho3D::WorkQueue::*)()) &Urho3D::WorkQueue::GetFreeItem, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("AddWorkItem", (void (Urho3D::WorkQueue::*)(const Urho3D::SharedPtr<Urho3D::WorkItem> &)) &Urho3D::WorkQueue::AddWorkItem, "todo: docstring", py::arg("item"))
    //['Urho3D::SharedPtr<Urho3D::WorkItem>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("RemoveWorkItem", (bool (Urho3D::WorkQueue::*)(Urho3D::SharedPtr<Urho3D::WorkItem>)) &Urho3D::WorkQueue::RemoveWorkItem, "todo: docstring", py::arg("item"))
    //['Urho3D::SharedPtr<Urho3D::WorkItem>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("RemoveWorkItems", (unsigned int (Urho3D::WorkQueue::*)(const Urho3D::Vector<Urho3D::SharedPtr<Urho3D::WorkItem> > &)) &Urho3D::WorkQueue::RemoveWorkItems, "todo: docstring", py::arg("items"))
    //['Urho3D::Vector<Urho3D::SharedPtr<Urho3D::WorkItem> >']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("Pause", (void (Urho3D::WorkQueue::*)()) &Urho3D::WorkQueue::Pause, "todo: docstring")
  .def("Resume", (void (Urho3D::WorkQueue::*)()) &Urho3D::WorkQueue::Resume, "todo: docstring")
  .def("Complete", (void (Urho3D::WorkQueue::*)(unsigned int)) &Urho3D::WorkQueue::Complete, "todo: docstring", py::arg("priority"))
  .def("SetTolerance", (void (Urho3D::WorkQueue::*)(int)) &Urho3D::WorkQueue::SetTolerance, "todo: docstring", py::arg("tolerance"))
  .def("SetNonThreadedWorkMs", (void (Urho3D::WorkQueue::*)(int)) &Urho3D::WorkQueue::SetNonThreadedWorkMs, "todo: docstring", py::arg("ms"))
  .def("GetNumThreads", (unsigned int (Urho3D::WorkQueue::*)() const) &Urho3D::WorkQueue::GetNumThreads, "todo: docstring")
  .def("IsCompleted", (bool (Urho3D::WorkQueue::*)(unsigned int) const) &Urho3D::WorkQueue::IsCompleted, "todo: docstring", py::arg("priority"))
  .def("IsCompleting", (bool (Urho3D::WorkQueue::*)() const) &Urho3D::WorkQueue::IsCompleting, "todo: docstring")
  .def("GetTolerance", (int (Urho3D::WorkQueue::*)() const) &Urho3D::WorkQueue::GetTolerance, "todo: docstring")
  .def("GetNonThreadedWorkMs", (int (Urho3D::WorkQueue::*)() const) &Urho3D::WorkQueue::GetNonThreadedWorkMs, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_DebugHud(py::class_<Urho3D::DebugHud, Urho3D::SharedPtr<Urho3D::DebugHud>, Urho3D::Object>& pyclass_Var_Urho3D_DebugHud)
{
    // Class DebugHud Implementation
pyclass_Var_Urho3D_DebugHud
  .def("GetType", (Urho3D::StringHash (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~DebugHud", (void (Urho3D::DebugHud::*)()) &Urho3D::DebugHud::~DebugHud, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Update", (void (Urho3D::DebugHud::*)()) &Urho3D::DebugHud::Update, "todo: docstring")
  .def("SetDefaultStyle", (void (Urho3D::DebugHud::*)(Urho3D::XMLFile *)) &Urho3D::DebugHud::SetDefaultStyle, "todo: docstring", py::arg("style"))
  .def("SetMode", (void (Urho3D::DebugHud::*)(unsigned int)) &Urho3D::DebugHud::SetMode, "todo: docstring", py::arg("mode"))
  .def("SetProfilerMaxDepth", (void (Urho3D::DebugHud::*)(unsigned int)) &Urho3D::DebugHud::SetProfilerMaxDepth, "todo: docstring", py::arg("depth"))
  .def("SetProfilerInterval", (void (Urho3D::DebugHud::*)(float)) &Urho3D::DebugHud::SetProfilerInterval, "todo: docstring", py::arg("interval"))
  .def("SetUseRendererStats", (void (Urho3D::DebugHud::*)(bool)) &Urho3D::DebugHud::SetUseRendererStats, "todo: docstring", py::arg("enable"))
  .def("Toggle", (void (Urho3D::DebugHud::*)(unsigned int)) &Urho3D::DebugHud::Toggle, "todo: docstring", py::arg("mode"))
  .def("ToggleAll", (void (Urho3D::DebugHud::*)()) &Urho3D::DebugHud::ToggleAll, "todo: docstring")
  .def("GetDefaultStyle", (Urho3D::XMLFile * (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetDefaultStyle, "todo: docstring")
  .def("GetStatsText", (Urho3D::Text * (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetStatsText, "todo: docstring")
  .def("GetModeText", (Urho3D::Text * (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetModeText, "todo: docstring")
  .def("GetProfilerText", (Urho3D::Text * (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetProfilerText, "todo: docstring")
  .def("GetMemoryText", (Urho3D::Text * (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetMemoryText, "todo: docstring")
  .def("GetMode", (unsigned int (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetMode, "todo: docstring")
  .def("GetProfilerMaxDepth", (unsigned int (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetProfilerMaxDepth, "todo: docstring")
  .def("GetProfilerInterval", (float (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetProfilerInterval, "todo: docstring")
  .def("GetUseRendererStats", (bool (Urho3D::DebugHud::*)() const) &Urho3D::DebugHud::GetUseRendererStats, "todo: docstring")
  .def("SetAppStats", (void (Urho3D::DebugHud::*)(const Urho3D::String &, const Urho3D::Variant &)) &Urho3D::DebugHud::SetAppStats, "todo: docstring", py::arg("label"), py::arg("stats"))
  .def("SetAppStats", (void (Urho3D::DebugHud::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::DebugHud::SetAppStats, "todo: docstring", py::arg("label"), py::arg("stats"))
  .def("ResetAppStats", (bool (Urho3D::DebugHud::*)(const Urho3D::String &)) &Urho3D::DebugHud::ResetAppStats, "todo: docstring", py::arg("label"))
  .def("ClearAppStats", (void (Urho3D::DebugHud::*)()) &Urho3D::DebugHud::ClearAppStats, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Application(py::class_<Urho3D::Application, PyApplication, Urho3D::SharedPtr<Urho3D::Application>, Urho3D::Object>& pyclass_Var_Urho3D_Application)
{
    // Class Application Implementation
pyclass_Var_Urho3D_Application
  .def("GetType", (Urho3D::StringHash (Urho3D::Application::*)() const) &Urho3D::Application::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Application::*)() const) &Urho3D::Application::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Application::*)() const) &Urho3D::Application::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def("Setup", (void (Urho3D::Application::*)()) &Urho3D::Application::Setup, "todo: docstring")
  .def("Start", (void (Urho3D::Application::*)()) &Urho3D::Application::Start, "todo: docstring")
  .def("Stop", (void (Urho3D::Application::*)()) &Urho3D::Application::Stop, "todo: docstring")
  .def("Run", (int (Urho3D::Application::*)()) &Urho3D::Application::Run, "todo: docstring")
  .def("ErrorExit", (void (Urho3D::Application::*)(const Urho3D::String &)) &Urho3D::Application::ErrorExit, "todo: docstring", py::arg("message")=String::EMPTY)
// Class Variables:
  .def_readwrite("engineParameters",&ApplicationPublicist::engineParameters_, "todo: var docstring")//Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>
;
}

void Implement_Urho3D_IndexBuffer(py::class_<Urho3D::IndexBuffer, Urho3D::SharedPtr<Urho3D::IndexBuffer>, Urho3D::Object, Urho3D::GPUObject>& pyclass_Var_Urho3D_IndexBuffer)
{
    // Class IndexBuffer Implementation
pyclass_Var_Urho3D_IndexBuffer
  .def("GetType", (Urho3D::StringHash (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *, bool>(), "todo: constructor docstring")
  //.def("~IndexBuffer", (void (Urho3D::IndexBuffer::*)()) &Urho3D::IndexBuffer::~IndexBuffer, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnDeviceLost", (void (Urho3D::IndexBuffer::*)()) &Urho3D::IndexBuffer::OnDeviceLost, "todo: docstring")
  .def("OnDeviceReset", (void (Urho3D::IndexBuffer::*)()) &Urho3D::IndexBuffer::OnDeviceReset, "todo: docstring")
  .def("Release", (void (Urho3D::IndexBuffer::*)()) &Urho3D::IndexBuffer::Release, "todo: docstring")
  .def("SetShadowed", (void (Urho3D::IndexBuffer::*)(bool)) &Urho3D::IndexBuffer::SetShadowed, "todo: docstring", py::arg("enable"))
  .def("SetSize", (bool (Urho3D::IndexBuffer::*)(unsigned int, bool, bool)) &Urho3D::IndexBuffer::SetSize, "todo: docstring", py::arg("indexCount"), py::arg("largeIndices"), py::arg("dynamic")=false)
  .def("SetData", (bool (Urho3D::IndexBuffer::*)(const void *)) &Urho3D::IndexBuffer::SetData, "todo: docstring", py::arg("data"))
  .def("SetDataRange", (bool (Urho3D::IndexBuffer::*)(const void *, unsigned int, unsigned int, bool)) &Urho3D::IndexBuffer::SetDataRange, "todo: docstring", py::arg("data"), py::arg("start"), py::arg("count"), py::arg("discard")=false)
  .def("Lock", (void * (Urho3D::IndexBuffer::*)(unsigned int, unsigned int, bool)) &Urho3D::IndexBuffer::Lock, "todo: docstring", py::arg("start"), py::arg("count"), py::arg("discard")=false)
  .def("Unlock", (void (Urho3D::IndexBuffer::*)()) &Urho3D::IndexBuffer::Unlock, "todo: docstring")
  .def("IsShadowed", (bool (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::IsShadowed, "todo: docstring")
  .def("IsDynamic", (bool (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::IsDynamic, "todo: docstring")
  .def("IsLocked", (bool (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::IsLocked, "todo: docstring")
  .def("GetIndexCount", (unsigned int (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::GetIndexCount, "todo: docstring")
  .def("GetIndexSize", (unsigned int (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::GetIndexSize, "todo: docstring")
  .def("GetUsedVertexRange", (bool (Urho3D::IndexBuffer::*)(unsigned int, unsigned int, unsigned int &, unsigned int &)) &Urho3D::IndexBuffer::GetUsedVertexRange, "todo: docstring", py::arg("start"), py::arg("count"), py::arg("minVertex"), py::arg("vertexCount"))
  .def("GetShadowData", (unsigned char * (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::GetShadowData, "todo: docstring")
  //.def("GetShadowDataShared", (SharedArrayPtr<unsigned char> (Urho3D::IndexBuffer::*)() const) &Urho3D::IndexBuffer::GetShadowDataShared, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_AnimationControl(py::class_<Urho3D::AnimationControl, Urho3D::ExternalPtr<Urho3D::AnimationControl>>& pyclass_Var_Urho3D_AnimationControl)
{
    // Class AnimationControl Implementation
pyclass_Var_Urho3D_AnimationControl
  .def(py::init<>(), "todo: constructor docstring")
// Class Variables:
  .def_readwrite("name",&Urho3D::AnimationControl::name_, "todo: var docstring")//Urho3D::String
  .def_readwrite("hash",&Urho3D::AnimationControl::hash_, "todo: var docstring")//Urho3D::StringHash
  .def_readwrite("speed",&Urho3D::AnimationControl::speed_, "todo: var docstring")//float
  .def_readwrite("targetWeight",&Urho3D::AnimationControl::targetWeight_, "todo: var docstring")//float
  .def_readwrite("fadeTime",&Urho3D::AnimationControl::fadeTime_, "todo: var docstring")//float
  .def_readwrite("autoFadeTime",&Urho3D::AnimationControl::autoFadeTime_, "todo: var docstring")//float
  .def_readwrite("setTimeTtl",&Urho3D::AnimationControl::setTimeTtl_, "todo: var docstring")//float
  .def_readwrite("setWeightTtl",&Urho3D::AnimationControl::setWeightTtl_, "todo: var docstring")//float
  .def_readwrite("setTime",&Urho3D::AnimationControl::setTime_, "todo: var docstring")//unsigned short
  .def_readwrite("setWeight",&Urho3D::AnimationControl::setWeight_, "todo: var docstring")//unsigned char
  .def_readwrite("setTimeRev",&Urho3D::AnimationControl::setTimeRev_, "todo: var docstring")//unsigned char
  .def_readwrite("setWeightRev",&Urho3D::AnimationControl::setWeightRev_, "todo: var docstring")//unsigned char
  .def_readwrite("removeOnCompletion",&Urho3D::AnimationControl::removeOnCompletion_, "todo: var docstring")//bool
;
}

void Implement_Urho3D_View(py::class_<Urho3D::View, Urho3D::SharedPtr<Urho3D::View>, Urho3D::Object>& pyclass_Var_Urho3D_View)
{
    // Class View Implementation
pyclass_Var_Urho3D_View
  .def("GetType", (Urho3D::StringHash (Urho3D::View::*)() const) &Urho3D::View::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::View::*)() const) &Urho3D::View::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::View::*)() const) &Urho3D::View::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~View", (void (Urho3D::View::*)()) &Urho3D::View::~View, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Define", (bool (Urho3D::View::*)(Urho3D::RenderSurface *, Urho3D::Viewport *)) &Urho3D::View::Define, "todo: docstring", py::arg("renderTarget"), py::arg("viewport"))
  //.def("Update", (void (Urho3D::View::*)(const Urho3D::FrameInfo &)) &Urho3D::View::Update, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("Render", (void (Urho3D::View::*)()) &Urho3D::View::Render, "todo: docstring")
  .def("GetGraphics", (Urho3D::Graphics * (Urho3D::View::*)() const) &Urho3D::View::GetGraphics, "todo: docstring")
  .def("GetRenderer", (Urho3D::Renderer * (Urho3D::View::*)() const) &Urho3D::View::GetRenderer, "todo: docstring")
  .def("GetScene", (Urho3D::Scene * (Urho3D::View::*)() const) &Urho3D::View::GetScene, "todo: docstring")
  .def("GetOctree", (Urho3D::Octree * (Urho3D::View::*)() const) &Urho3D::View::GetOctree, "todo: docstring")
  .def("GetCamera", (Urho3D::Camera * (Urho3D::View::*)() const) &Urho3D::View::GetCamera, "todo: docstring")
  .def("GetCullCamera", (Urho3D::Camera * (Urho3D::View::*)() const) &Urho3D::View::GetCullCamera, "todo: docstring")
  //.def("GetFrameInfo", (const Urho3D::FrameInfo & (Urho3D::View::*)() const) &Urho3D::View::GetFrameInfo, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetRenderTarget", (Urho3D::RenderSurface * (Urho3D::View::*)() const) &Urho3D::View::GetRenderTarget, "todo: docstring")
  .def("GetDrawDebug", (bool (Urho3D::View::*)() const) &Urho3D::View::GetDrawDebug, "todo: docstring")
  .def("GetViewRect", (const Urho3D::IntRect & (Urho3D::View::*)() const) &Urho3D::View::GetViewRect, "todo: docstring")
  .def("GetViewSize", (const Urho3D::IntVector2 & (Urho3D::View::*)() const) &Urho3D::View::GetViewSize, "todo: docstring")
  //.def("GetGeometries", (const PODVector<Urho3D::Drawable *> & (Urho3D::View::*)() const) &Urho3D::View::GetGeometries, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetOccluders", (const PODVector<Urho3D::Drawable *> & (Urho3D::View::*)() const) &Urho3D::View::GetOccluders, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetLights", (const PODVector<Urho3D::Light *> & (Urho3D::View::*)() const) &Urho3D::View::GetLights, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetLightQueues", (const Vector<Urho3D::LightBatchQueue> & (Urho3D::View::*)() const) &Urho3D::View::GetLightQueues, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetOcclusionBuffer", (Urho3D::OcclusionBuffer * (Urho3D::View::*)() const) &Urho3D::View::GetOcclusionBuffer, "todo: docstring")
  .def("GetNumActiveOccluders", (unsigned int (Urho3D::View::*)() const) &Urho3D::View::GetNumActiveOccluders, "todo: docstring")
  .def("GetSourceView", (Urho3D::View * (Urho3D::View::*)() const) &Urho3D::View::GetSourceView, "todo: docstring")
  .def("SetGlobalShaderParameters", (void (Urho3D::View::*)()) &Urho3D::View::SetGlobalShaderParameters, "todo: docstring")
  .def("SetCameraShaderParameters", (void (Urho3D::View::*)(Urho3D::Camera *)) &Urho3D::View::SetCameraShaderParameters, "todo: docstring", py::arg("camera"))
  .def("SetCommandShaderParameters", (void (Urho3D::View::*)(const Urho3D::RenderPathCommand &)) &Urho3D::View::SetCommandShaderParameters, "todo: docstring", py::arg("command"))
  .def("SetGBufferShaderParameters", (void (Urho3D::View::*)(const Urho3D::IntVector2 &, const Urho3D::IntRect &)) &Urho3D::View::SetGBufferShaderParameters, "todo: docstring", py::arg("texSize"), py::arg("viewRect"))
  .def("DrawFullscreenQuad", (void (Urho3D::View::*)(bool)) &Urho3D::View::DrawFullscreenQuad, "todo: docstring", py::arg("setIdentityProjection")=false)
  .def("FindNamedTexture", (Urho3D::Texture * (Urho3D::View::*)(const Urho3D::String &, const Urho3D::String &, bool, bool)) &Urho3D::View::FindNamedTexture, "todo: docstring", py::arg("name"), py::arg("basePath"), py::arg("isRenderTarget"), py::arg("isVolumeMap")=false)
// Class Variables:
;
}

void Implement_Urho3D_ConstantBuffer(py::class_<Urho3D::ConstantBuffer, Urho3D::SharedPtr<Urho3D::ConstantBuffer>, Urho3D::Object, Urho3D::GPUObject>& pyclass_Var_Urho3D_ConstantBuffer)
{
    // Class ConstantBuffer Implementation
pyclass_Var_Urho3D_ConstantBuffer
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstantBuffer::*)() const) &Urho3D::ConstantBuffer::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstantBuffer::*)() const) &Urho3D::ConstantBuffer::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstantBuffer::*)() const) &Urho3D::ConstantBuffer::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstantBuffer", (void (Urho3D::ConstantBuffer::*)()) &Urho3D::ConstantBuffer::~ConstantBuffer, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnDeviceReset", (void (Urho3D::ConstantBuffer::*)()) &Urho3D::ConstantBuffer::OnDeviceReset, "todo: docstring")
  .def("Release", (void (Urho3D::ConstantBuffer::*)()) &Urho3D::ConstantBuffer::Release, "todo: docstring")
  .def("SetSize", (bool (Urho3D::ConstantBuffer::*)(unsigned int)) &Urho3D::ConstantBuffer::SetSize, "todo: docstring", py::arg("size"))
  .def("SetParameter", (void (Urho3D::ConstantBuffer::*)(unsigned int, unsigned int, const void *)) &Urho3D::ConstantBuffer::SetParameter, "todo: docstring", py::arg("offset"), py::arg("size"), py::arg("data"))
  .def("SetVector3ArrayParameter", (void (Urho3D::ConstantBuffer::*)(unsigned int, unsigned int, const void *)) &Urho3D::ConstantBuffer::SetVector3ArrayParameter, "todo: docstring", py::arg("offset"), py::arg("rows"), py::arg("data"))
  .def("Apply", (void (Urho3D::ConstantBuffer::*)()) &Urho3D::ConstantBuffer::Apply, "todo: docstring")
  .def("GetSize", (unsigned int (Urho3D::ConstantBuffer::*)() const) &Urho3D::ConstantBuffer::GetSize, "todo: docstring")
  .def("IsDirty", (bool (Urho3D::ConstantBuffer::*)() const) &Urho3D::ConstantBuffer::IsDirty, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Renderer(py::class_<Urho3D::Renderer, Urho3D::SharedPtr<Urho3D::Renderer>, Urho3D::Object>& pyclass_Var_Urho3D_Renderer)
{
    // Class Renderer Implementation
pyclass_Var_Urho3D_Renderer
  .def("GetType", (Urho3D::StringHash (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Renderer", (void (Urho3D::Renderer::*)()) &Urho3D::Renderer::~Renderer, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetNumViewports", (void (Urho3D::Renderer::*)(unsigned int)) &Urho3D::Renderer::SetNumViewports, "todo: docstring", py::arg("num"))
  .def("SetViewport", (void (Urho3D::Renderer::*)(unsigned int, Urho3D::Viewport *)) &Urho3D::Renderer::SetViewport, "todo: docstring", py::arg("index"), py::arg("viewport"))
  .def("SetDefaultRenderPath", (void (Urho3D::Renderer::*)(Urho3D::RenderPath *)) &Urho3D::Renderer::SetDefaultRenderPath, "todo: docstring", py::arg("renderPath"))
  .def("SetDefaultRenderPath", (void (Urho3D::Renderer::*)(Urho3D::XMLFile *)) &Urho3D::Renderer::SetDefaultRenderPath, "todo: docstring", py::arg("xmlFile"))
  .def("SetDefaultTechnique", (void (Urho3D::Renderer::*)(Urho3D::Technique *)) &Urho3D::Renderer::SetDefaultTechnique, "todo: docstring", py::arg("technique"))
  .def("SetHDRRendering", (void (Urho3D::Renderer::*)(bool)) &Urho3D::Renderer::SetHDRRendering, "todo: docstring", py::arg("enable"))
  .def("SetSpecularLighting", (void (Urho3D::Renderer::*)(bool)) &Urho3D::Renderer::SetSpecularLighting, "todo: docstring", py::arg("enable"))
  .def("SetTextureAnisotropy", (void (Urho3D::Renderer::*)(int)) &Urho3D::Renderer::SetTextureAnisotropy, "todo: docstring", py::arg("level"))
  .def("SetTextureFilterMode", (void (Urho3D::Renderer::*)(Urho3D::TextureFilterMode)) &Urho3D::Renderer::SetTextureFilterMode, "todo: docstring", py::arg("mode"))
  .def("SetTextureQuality", (void (Urho3D::Renderer::*)(Urho3D::MaterialQuality)) &Urho3D::Renderer::SetTextureQuality, "todo: docstring", py::arg("quality"))
  .def("SetMaterialQuality", (void (Urho3D::Renderer::*)(Urho3D::MaterialQuality)) &Urho3D::Renderer::SetMaterialQuality, "todo: docstring", py::arg("quality"))
  .def("SetDrawShadows", (void (Urho3D::Renderer::*)(bool)) &Urho3D::Renderer::SetDrawShadows, "todo: docstring", py::arg("enable"))
  .def("SetShadowMapSize", (void (Urho3D::Renderer::*)(int)) &Urho3D::Renderer::SetShadowMapSize, "todo: docstring", py::arg("size"))
  .def("SetShadowQuality", (void (Urho3D::Renderer::*)(Urho3D::ShadowQuality)) &Urho3D::Renderer::SetShadowQuality, "todo: docstring", py::arg("quality"))
  .def("SetShadowSoftness", (void (Urho3D::Renderer::*)(float)) &Urho3D::Renderer::SetShadowSoftness, "todo: docstring", py::arg("shadowSoftness"))
  .def("SetVSMShadowParameters", (void (Urho3D::Renderer::*)(float, float)) &Urho3D::Renderer::SetVSMShadowParameters, "todo: docstring", py::arg("minVariance"), py::arg("lightBleedingReduction"))
  .def("SetVSMMultiSample", (void (Urho3D::Renderer::*)(int)) &Urho3D::Renderer::SetVSMMultiSample, "todo: docstring", py::arg("multiSample"))
  //.def("SetShadowMapFilter", (void (Urho3D::Renderer::*)(Urho3D::Object *, void (Urho3D::Object::*)(Urho3D::View *, Urho3D::Texture2D *, float))) &Urho3D::Renderer::SetShadowMapFilter, "todo: docstring", py::arg("instance"), py::arg("functionPtr"))
    //['Urho3D::Object', 'void']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 3
  .def("SetReuseShadowMaps", (void (Urho3D::Renderer::*)(bool)) &Urho3D::Renderer::SetReuseShadowMaps, "todo: docstring", py::arg("enable"))
  .def("SetMaxShadowMaps", (void (Urho3D::Renderer::*)(int)) &Urho3D::Renderer::SetMaxShadowMaps, "todo: docstring", py::arg("shadowMaps"))
  .def("SetDynamicInstancing", (void (Urho3D::Renderer::*)(bool)) &Urho3D::Renderer::SetDynamicInstancing, "todo: docstring", py::arg("enable"))
  .def("SetNumExtraInstancingBufferElements", (void (Urho3D::Renderer::*)(int)) &Urho3D::Renderer::SetNumExtraInstancingBufferElements, "todo: docstring", py::arg("elements"))
  .def("SetMinInstances", (void (Urho3D::Renderer::*)(int)) &Urho3D::Renderer::SetMinInstances, "todo: docstring", py::arg("instances"))
  .def("SetMaxSortedInstances", (void (Urho3D::Renderer::*)(int)) &Urho3D::Renderer::SetMaxSortedInstances, "todo: docstring", py::arg("instances"))
  .def("SetMaxOccluderTriangles", (void (Urho3D::Renderer::*)(int)) &Urho3D::Renderer::SetMaxOccluderTriangles, "todo: docstring", py::arg("triangles"))
  .def("SetOcclusionBufferSize", (void (Urho3D::Renderer::*)(int)) &Urho3D::Renderer::SetOcclusionBufferSize, "todo: docstring", py::arg("size"))
  .def("SetOccluderSizeThreshold", (void (Urho3D::Renderer::*)(float)) &Urho3D::Renderer::SetOccluderSizeThreshold, "todo: docstring", py::arg("screenSize"))
  .def("SetThreadedOcclusion", (void (Urho3D::Renderer::*)(bool)) &Urho3D::Renderer::SetThreadedOcclusion, "todo: docstring", py::arg("enable"))
  .def("SetMobileShadowBiasMul", (void (Urho3D::Renderer::*)(float)) &Urho3D::Renderer::SetMobileShadowBiasMul, "todo: docstring", py::arg("mul"))
  .def("SetMobileShadowBiasAdd", (void (Urho3D::Renderer::*)(float)) &Urho3D::Renderer::SetMobileShadowBiasAdd, "todo: docstring", py::arg("add"))
  .def("SetMobileNormalOffsetMul", (void (Urho3D::Renderer::*)(float)) &Urho3D::Renderer::SetMobileNormalOffsetMul, "todo: docstring", py::arg("mul"))
  .def("ReloadShaders", (void (Urho3D::Renderer::*)()) &Urho3D::Renderer::ReloadShaders, "todo: docstring")
  .def("ApplyShadowMapFilter", (void (Urho3D::Renderer::*)(Urho3D::View *, Urho3D::Texture2D *, float)) &Urho3D::Renderer::ApplyShadowMapFilter, "todo: docstring", py::arg("view"), py::arg("shadowMap"), py::arg("blurScale"))
  .def("GetNumViewports", (unsigned int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetNumViewports, "todo: docstring")
  .def("GetViewport", (Urho3D::Viewport * (Urho3D::Renderer::*)(unsigned int) const) &Urho3D::Renderer::GetViewport, "todo: docstring", py::arg("index"))
  .def("GetViewportForScene", (Urho3D::Viewport * (Urho3D::Renderer::*)(Urho3D::Scene *, unsigned int) const) &Urho3D::Renderer::GetViewportForScene, "todo: docstring", py::arg("scene"), py::arg("index"))
  .def("GetDefaultRenderPath", (Urho3D::RenderPath * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetDefaultRenderPath, "todo: docstring")
  .def("GetDefaultTechnique", (Urho3D::Technique * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetDefaultTechnique, "todo: docstring")
  .def("GetHDRRendering", (bool (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetHDRRendering, "todo: docstring")
  .def("GetSpecularLighting", (bool (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetSpecularLighting, "todo: docstring")
  .def("GetDrawShadows", (bool (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetDrawShadows, "todo: docstring")
  .def("GetTextureAnisotropy", (int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetTextureAnisotropy, "todo: docstring")
  .def("GetTextureFilterMode", (Urho3D::TextureFilterMode (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetTextureFilterMode, "todo: docstring")
  .def("GetTextureQuality", (Urho3D::MaterialQuality (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetTextureQuality, "todo: docstring")
  .def("GetMaterialQuality", (Urho3D::MaterialQuality (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetMaterialQuality, "todo: docstring")
  .def("GetShadowMapSize", (int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetShadowMapSize, "todo: docstring")
  .def("GetShadowQuality", (Urho3D::ShadowQuality (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetShadowQuality, "todo: docstring")
  .def("GetShadowSoftness", (float (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetShadowSoftness, "todo: docstring")
  .def("GetVSMShadowParameters", (Urho3D::Vector2 (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetVSMShadowParameters, "todo: docstring")
  .def("GetVSMMultiSample", (int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetVSMMultiSample, "todo: docstring")
  .def("GetReuseShadowMaps", (bool (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetReuseShadowMaps, "todo: docstring")
  .def("GetMaxShadowMaps", (int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetMaxShadowMaps, "todo: docstring")
  .def("GetDynamicInstancing", (bool (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetDynamicInstancing, "todo: docstring")
  .def("GetNumExtraInstancingBufferElements", (int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetNumExtraInstancingBufferElements, "todo: docstring")
  .def("GetMinInstances", (int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetMinInstances, "todo: docstring")
  .def("GetMaxSortedInstances", (int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetMaxSortedInstances, "todo: docstring")
  .def("GetMaxOccluderTriangles", (int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetMaxOccluderTriangles, "todo: docstring")
  .def("GetOcclusionBufferSize", (int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetOcclusionBufferSize, "todo: docstring")
  .def("GetOccluderSizeThreshold", (float (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetOccluderSizeThreshold, "todo: docstring")
  .def("GetThreadedOcclusion", (bool (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetThreadedOcclusion, "todo: docstring")
  .def("GetMobileShadowBiasMul", (float (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetMobileShadowBiasMul, "todo: docstring")
  .def("GetMobileShadowBiasAdd", (float (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetMobileShadowBiasAdd, "todo: docstring")
  .def("GetMobileNormalOffsetMul", (float (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetMobileNormalOffsetMul, "todo: docstring")
  .def("GetNumViews", (unsigned int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetNumViews, "todo: docstring")
  .def("GetNumPrimitives", (unsigned int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetNumPrimitives, "todo: docstring")
  .def("GetNumBatches", (unsigned int (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetNumBatches, "todo: docstring")
  .def("GetNumGeometries", (unsigned int (Urho3D::Renderer::*)(bool) const) &Urho3D::Renderer::GetNumGeometries, "todo: docstring", py::arg("allViews")=false)
  .def("GetNumLights", (unsigned int (Urho3D::Renderer::*)(bool) const) &Urho3D::Renderer::GetNumLights, "todo: docstring", py::arg("allViews")=false)
  .def("GetNumShadowMaps", (unsigned int (Urho3D::Renderer::*)(bool) const) &Urho3D::Renderer::GetNumShadowMaps, "todo: docstring", py::arg("allViews")=false)
  .def("GetNumOccluders", (unsigned int (Urho3D::Renderer::*)(bool) const) &Urho3D::Renderer::GetNumOccluders, "todo: docstring", py::arg("allViews")=false)
  .def("GetDefaultZone", (Urho3D::Zone * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetDefaultZone, "todo: docstring")
  .def("GetDefaultMaterial", (Urho3D::Material * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetDefaultMaterial, "todo: docstring")
  .def("GetDefaultLightRamp", (Urho3D::Texture2D * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetDefaultLightRamp, "todo: docstring")
  .def("GetDefaultLightSpot", (Urho3D::Texture2D * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetDefaultLightSpot, "todo: docstring")
  .def("GetFaceSelectCubeMap", (Urho3D::TextureCube * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetFaceSelectCubeMap, "todo: docstring")
  .def("GetIndirectionCubeMap", (Urho3D::TextureCube * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetIndirectionCubeMap, "todo: docstring")
  .def("GetInstancingBuffer", (Urho3D::VertexBuffer * (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetInstancingBuffer, "todo: docstring")
  //.def("GetFrameInfo", (const Urho3D::FrameInfo & (Urho3D::Renderer::*)() const) &Urho3D::Renderer::GetFrameInfo, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("Update", (void (Urho3D::Renderer::*)(float)) &Urho3D::Renderer::Update, "todo: docstring", py::arg("timeStep"))
  .def("Render", (void (Urho3D::Renderer::*)()) &Urho3D::Renderer::Render, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::Renderer::*)(bool)) &Urho3D::Renderer::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
  .def("QueueRenderSurface", (void (Urho3D::Renderer::*)(Urho3D::RenderSurface *)) &Urho3D::Renderer::QueueRenderSurface, "todo: docstring", py::arg("renderTarget"))
  .def("QueueViewport", (void (Urho3D::Renderer::*)(Urho3D::RenderSurface *, Urho3D::Viewport *)) &Urho3D::Renderer::QueueViewport, "todo: docstring", py::arg("renderTarget"), py::arg("viewport"))
  .def("GetLightGeometry", (Urho3D::Geometry * (Urho3D::Renderer::*)(Urho3D::Light *)) &Urho3D::Renderer::GetLightGeometry, "todo: docstring", py::arg("light"))
  .def("GetQuadGeometry", (Urho3D::Geometry * (Urho3D::Renderer::*)()) &Urho3D::Renderer::GetQuadGeometry, "todo: docstring")
  .def("GetShadowMap", (Urho3D::Texture2D * (Urho3D::Renderer::*)(Urho3D::Light *, Urho3D::Camera *, unsigned int, unsigned int)) &Urho3D::Renderer::GetShadowMap, "todo: docstring", py::arg("light"), py::arg("camera"), py::arg("viewWidth"), py::arg("viewHeight"))
  .def("GetScreenBuffer", (Urho3D::Texture * (Urho3D::Renderer::*)(int, int, unsigned int, int, bool, bool, bool, bool, unsigned int)) &Urho3D::Renderer::GetScreenBuffer, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("format"), py::arg("multiSample"), py::arg("autoResolve"), py::arg("cubemap"), py::arg("filtered"), py::arg("srgb"), py::arg("persistentKey")=0)
  .def("GetDepthStencil", (Urho3D::RenderSurface * (Urho3D::Renderer::*)(int, int, int, bool)) &Urho3D::Renderer::GetDepthStencil, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("multiSample"), py::arg("autoResolve"))
  .def("GetOcclusionBuffer", (Urho3D::OcclusionBuffer * (Urho3D::Renderer::*)(Urho3D::Camera *)) &Urho3D::Renderer::GetOcclusionBuffer, "todo: docstring", py::arg("camera"))
  .def("GetShadowCamera", (Urho3D::Camera * (Urho3D::Renderer::*)()) &Urho3D::Renderer::GetShadowCamera, "todo: docstring")
  .def("StorePreparedView", (void (Urho3D::Renderer::*)(Urho3D::View *, Urho3D::Camera *)) &Urho3D::Renderer::StorePreparedView, "todo: docstring", py::arg("view"), py::arg("camera"))
  .def("GetPreparedView", (Urho3D::View * (Urho3D::Renderer::*)(Urho3D::Camera *)) &Urho3D::Renderer::GetPreparedView, "todo: docstring", py::arg("camera"))
  //.def("SetBatchShaders", (void (Urho3D::Renderer::*)(Urho3D::Batch &, Urho3D::Technique *, bool, const Urho3D::BatchQueue &)) &Urho3D::Renderer::SetBatchShaders, "todo: docstring", py::arg("batch"), py::arg("tech"), py::arg("allowShadows"), py::arg("queue"))
    //['Urho3D::Batch', 'Urho3D::Technique', 'bool', 'Urho3D::BatchQueue']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("SetLightVolumeBatchShaders", (void (Urho3D::Renderer::*)(Urho3D::Batch &, Urho3D::Camera *, const Urho3D::String &, const Urho3D::String &, const Urho3D::String &, const Urho3D::String &)) &Urho3D::Renderer::SetLightVolumeBatchShaders, "todo: docstring", py::arg("batch"), py::arg("camera"), py::arg("vsName"), py::arg("psName"), py::arg("vsDefines"), py::arg("psDefines"))
    //['Urho3D::Batch', 'Urho3D::Camera', 'Urho3D::String', 'Urho3D::String', 'Urho3D::String', 'Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("SetCullMode", (void (Urho3D::Renderer::*)(Urho3D::CullMode, Urho3D::Camera *)) &Urho3D::Renderer::SetCullMode, "todo: docstring", py::arg("mode"), py::arg("camera"))
  .def("ResizeInstancingBuffer", (bool (Urho3D::Renderer::*)(unsigned int)) &Urho3D::Renderer::ResizeInstancingBuffer, "todo: docstring", py::arg("numInstances"))
  .def("OptimizeLightByScissor", (void (Urho3D::Renderer::*)(Urho3D::Light *, Urho3D::Camera *)) &Urho3D::Renderer::OptimizeLightByScissor, "todo: docstring", py::arg("light"), py::arg("camera"))
  .def("OptimizeLightByStencil", (void (Urho3D::Renderer::*)(Urho3D::Light *, Urho3D::Camera *)) &Urho3D::Renderer::OptimizeLightByStencil, "todo: docstring", py::arg("light"), py::arg("camera"))
  .def("GetLightScissor", (const Urho3D::Rect & (Urho3D::Renderer::*)(Urho3D::Light *, Urho3D::Camera *)) &Urho3D::Renderer::GetLightScissor, "todo: docstring", py::arg("light"), py::arg("camera"))
// Class Variables:
;
}

void Implement_Urho3D_ShaderPrecache(py::class_<Urho3D::ShaderPrecache, Urho3D::SharedPtr<Urho3D::ShaderPrecache>, Urho3D::Object>& pyclass_Var_Urho3D_ShaderPrecache)
{
    // Class ShaderPrecache Implementation
pyclass_Var_Urho3D_ShaderPrecache
  .def("GetType", (Urho3D::StringHash (Urho3D::ShaderPrecache::*)() const) &Urho3D::ShaderPrecache::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ShaderPrecache::*)() const) &Urho3D::ShaderPrecache::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ShaderPrecache::*)() const) &Urho3D::ShaderPrecache::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *, const Urho3D::String &>(), "todo: constructor docstring")
  //.def("~ShaderPrecache", (void (Urho3D::ShaderPrecache::*)()) &Urho3D::ShaderPrecache::~ShaderPrecache, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("StoreShaders", (void (Urho3D::ShaderPrecache::*)(Urho3D::ShaderVariation *, Urho3D::ShaderVariation *)) &Urho3D::ShaderPrecache::StoreShaders, "todo: docstring", py::arg("vs"), py::arg("ps"))
// Class Variables:
;
}

void Implement_Urho3D_PointOctreeQuery(py::class_<Urho3D::PointOctreeQuery, Urho3D::ExternalPtr<Urho3D::PointOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_PointOctreeQuery)
{
    // Class PointOctreeQuery Implementation
pyclass_Var_Urho3D_PointOctreeQuery
  //.def(py::init<Urho3D::PODVector<Urho3D::Drawable *> &, const Urho3D::Vector3 &, unsigned char, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::PODVector<Urho3D::Drawable', 'Urho3D::Vector3', 'unsigned char', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("TestOctant", (Urho3D::Intersection (Urho3D::PointOctreeQuery::*)(const Urho3D::BoundingBox &, bool)) &Urho3D::PointOctreeQuery::TestOctant, "todo: docstring", py::arg("box"), py::arg("inside"))
  //.def("TestDrawables", (void (Urho3D::PointOctreeQuery::*)(Urho3D::Drawable **, Urho3D::Drawable **, bool)) &Urho3D::PointOctreeQuery::TestDrawables, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("inside"))
    //['Urho3D::Drawable', 'Urho3D::Drawable', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 2
// Class Variables:
  .def_readwrite("point",&Urho3D::PointOctreeQuery::point_, "todo: var docstring")//Urho3D::Vector3
;
}

void Implement_Urho3D_OctreeQueryResult(py::class_<Urho3D::OctreeQueryResult, Urho3D::ExternalPtr<Urho3D::OctreeQueryResult>>& pyclass_Var_Urho3D_OctreeQueryResult)
{
    // Class OctreeQueryResult Implementation
pyclass_Var_Urho3D_OctreeQueryResult
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::self != Urho3D::OctreeQueryResult(), "todo: docstring")
    //['Urho3D::OctreeQueryResult']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_RenderPathCommand(py::class_<Urho3D::RenderPathCommand, Urho3D::ExternalPtr<Urho3D::RenderPathCommand>>& pyclass_Var_Urho3D_RenderPathCommand)
{
    // Class RenderPathCommand Implementation
pyclass_Var_Urho3D_RenderPathCommand
  .def("Load", (void (Urho3D::RenderPathCommand::*)(const Urho3D::XMLElement &)) &Urho3D::RenderPathCommand::Load, "todo: docstring", py::arg("element"))
  .def("SetTextureName", (void (Urho3D::RenderPathCommand::*)(Urho3D::TextureUnit, const Urho3D::String &)) &Urho3D::RenderPathCommand::SetTextureName, "todo: docstring", py::arg("unit"), py::arg("name"))
  .def("SetShaderParameter", (void (Urho3D::RenderPathCommand::*)(const Urho3D::String &, const Urho3D::Variant &)) &Urho3D::RenderPathCommand::SetShaderParameter, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("RemoveShaderParameter", (void (Urho3D::RenderPathCommand::*)(const Urho3D::String &)) &Urho3D::RenderPathCommand::RemoveShaderParameter, "todo: docstring", py::arg("name"))
  .def("SetNumOutputs", (void (Urho3D::RenderPathCommand::*)(unsigned int)) &Urho3D::RenderPathCommand::SetNumOutputs, "todo: docstring", py::arg("num"))
  .def("SetOutput", (void (Urho3D::RenderPathCommand::*)(unsigned int, const Urho3D::String &, Urho3D::CubeMapFace)) &Urho3D::RenderPathCommand::SetOutput, "todo: docstring", py::arg("index"), py::arg("name"), py::arg("face")=FACE_POSITIVE_X)
  .def("SetOutputName", (void (Urho3D::RenderPathCommand::*)(unsigned int, const Urho3D::String &)) &Urho3D::RenderPathCommand::SetOutputName, "todo: docstring", py::arg("index"), py::arg("name"))
  .def("SetOutputFace", (void (Urho3D::RenderPathCommand::*)(unsigned int, Urho3D::CubeMapFace)) &Urho3D::RenderPathCommand::SetOutputFace, "todo: docstring", py::arg("index"), py::arg("face"))
  .def("SetDepthStencilName", (void (Urho3D::RenderPathCommand::*)(const Urho3D::String &)) &Urho3D::RenderPathCommand::SetDepthStencilName, "todo: docstring", py::arg("name"))
  .def("GetTextureName", (const Urho3D::String & (Urho3D::RenderPathCommand::*)(Urho3D::TextureUnit) const) &Urho3D::RenderPathCommand::GetTextureName, "todo: docstring", py::arg("unit"))
  .def("GetShaderParameter", (const Urho3D::Variant & (Urho3D::RenderPathCommand::*)(const Urho3D::String &) const) &Urho3D::RenderPathCommand::GetShaderParameter, "todo: docstring", py::arg("name"))
  .def("GetNumOutputs", (unsigned int (Urho3D::RenderPathCommand::*)() const) &Urho3D::RenderPathCommand::GetNumOutputs, "todo: docstring")
  .def("GetOutputName", (const Urho3D::String & (Urho3D::RenderPathCommand::*)(unsigned int) const) &Urho3D::RenderPathCommand::GetOutputName, "todo: docstring", py::arg("index"))
  .def("GetOutputFace", (Urho3D::CubeMapFace (Urho3D::RenderPathCommand::*)(unsigned int) const) &Urho3D::RenderPathCommand::GetOutputFace, "todo: docstring", py::arg("index"))
  .def("GetDepthStencilName", (const Urho3D::String & (Urho3D::RenderPathCommand::*)() const) &Urho3D::RenderPathCommand::GetDepthStencilName, "todo: docstring")
// Class Variables:
  .def_readwrite("tag",&Urho3D::RenderPathCommand::tag_, "todo: var docstring")//Urho3D::String
  .def_readwrite("type",&Urho3D::RenderPathCommand::type_, "todo: var docstring")//Urho3D::RenderCommandType
  .def_readwrite("sortMode",&Urho3D::RenderPathCommand::sortMode_, "todo: var docstring")//Urho3D::RenderCommandSortMode
  .def_readwrite("pass",&Urho3D::RenderPathCommand::pass_, "todo: var docstring")//Urho3D::String
  .def_readwrite("passIndex",&Urho3D::RenderPathCommand::passIndex_, "todo: var docstring")//unsigned int
  .def_readwrite("basePath",&Urho3D::RenderPathCommand::basePath_, "todo: var docstring")//Urho3D::String
  .def_readwrite("metadata",&Urho3D::RenderPathCommand::metadata_, "todo: var docstring")//Urho3D::String
  .def_readwrite("vertexShaderName",&Urho3D::RenderPathCommand::vertexShaderName_, "todo: var docstring")//Urho3D::String
  .def_readwrite("pixelShaderName",&Urho3D::RenderPathCommand::pixelShaderName_, "todo: var docstring")//Urho3D::String
  .def_readwrite("vertexShaderDefines",&Urho3D::RenderPathCommand::vertexShaderDefines_, "todo: var docstring")//Urho3D::String
  .def_readwrite("pixelShaderDefines",&Urho3D::RenderPathCommand::pixelShaderDefines_, "todo: var docstring")//Urho3D::String
  .def_readwrite("shaderParameters",&Urho3D::RenderPathCommand::shaderParameters_, "todo: var docstring")//Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>
  .def_readwrite("outputs",&Urho3D::RenderPathCommand::outputs_, "todo: var docstring")//Urho3D::Vector<Urho3D::Pair<Urho3D::String, Urho3D::CubeMapFace> >
  .def_readwrite("depthStencilName",&Urho3D::RenderPathCommand::depthStencilName_, "todo: var docstring")//Urho3D::String
  .def_readwrite("clearFlags",&Urho3D::RenderPathCommand::clearFlags_, "todo: var docstring")//Urho3D::FlagSet<Urho3D::ClearTarget, void>
  .def_readwrite("clearColor",&Urho3D::RenderPathCommand::clearColor_, "todo: var docstring")//Urho3D::Color
  .def_readwrite("clearDepth",&Urho3D::RenderPathCommand::clearDepth_, "todo: var docstring")//float
  .def_readwrite("clearStencil",&Urho3D::RenderPathCommand::clearStencil_, "todo: var docstring")//unsigned int
  .def_readwrite("blendMode",&Urho3D::RenderPathCommand::blendMode_, "todo: var docstring")//Urho3D::BlendMode
  .def_readwrite("enabled",&Urho3D::RenderPathCommand::enabled_, "todo: var docstring")//bool
  .def_readwrite("useFogColor",&Urho3D::RenderPathCommand::useFogColor_, "todo: var docstring")//bool
  .def_readwrite("markToStencil",&Urho3D::RenderPathCommand::markToStencil_, "todo: var docstring")//bool
  .def_readwrite("useLitBase",&Urho3D::RenderPathCommand::useLitBase_, "todo: var docstring")//bool
  .def_readwrite("vertexLights",&Urho3D::RenderPathCommand::vertexLights_, "todo: var docstring")//bool
  .def_readwrite("eventName",&Urho3D::RenderPathCommand::eventName_, "todo: var docstring")//Urho3D::String
;
}

void Implement_Urho3D_FileSystem(py::class_<Urho3D::FileSystem, Urho3D::SharedPtr<Urho3D::FileSystem>, Urho3D::Object>& pyclass_Var_Urho3D_FileSystem)
{
    // Class FileSystem Implementation
pyclass_Var_Urho3D_FileSystem
  .def("GetType", (Urho3D::StringHash (Urho3D::FileSystem::*)() const) &Urho3D::FileSystem::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::FileSystem::*)() const) &Urho3D::FileSystem::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::FileSystem::*)() const) &Urho3D::FileSystem::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~FileSystem", (void (Urho3D::FileSystem::*)()) &Urho3D::FileSystem::~FileSystem, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetCurrentDir", (bool (Urho3D::FileSystem::*)(const Urho3D::String &)) &Urho3D::FileSystem::SetCurrentDir, "todo: docstring", py::arg("pathName"))
  .def("CreateDir", (bool (Urho3D::FileSystem::*)(const Urho3D::String &)) &Urho3D::FileSystem::CreateDir, "todo: docstring", py::arg("pathName"))
  .def("SetExecuteConsoleCommands", (void (Urho3D::FileSystem::*)(bool)) &Urho3D::FileSystem::SetExecuteConsoleCommands, "todo: docstring", py::arg("enable"))
  .def("SystemCommand", (int (Urho3D::FileSystem::*)(const Urho3D::String &, bool)) &Urho3D::FileSystem::SystemCommand, "todo: docstring", py::arg("commandLine"), py::arg("redirectStdOutToLog")=false)
  .def("SystemRun", (int (Urho3D::FileSystem::*)(const Urho3D::String &, const Urho3D::Vector<Urho3D::String> &)) &Urho3D::FileSystem::SystemRun, "todo: docstring", py::arg("fileName"), py::arg("arguments"))
  .def("SystemCommandAsync", (unsigned int (Urho3D::FileSystem::*)(const Urho3D::String &)) &Urho3D::FileSystem::SystemCommandAsync, "todo: docstring", py::arg("commandLine"))
  .def("SystemRunAsync", (unsigned int (Urho3D::FileSystem::*)(const Urho3D::String &, const Urho3D::Vector<Urho3D::String> &)) &Urho3D::FileSystem::SystemRunAsync, "todo: docstring", py::arg("fileName"), py::arg("arguments"))
  .def("SystemOpen", (bool (Urho3D::FileSystem::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::FileSystem::SystemOpen, "todo: docstring", py::arg("fileName"), py::arg("mode")=String::EMPTY)
  .def("Copy", (bool (Urho3D::FileSystem::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::FileSystem::Copy, "todo: docstring", py::arg("srcFileName"), py::arg("destFileName"))
  .def("Rename", (bool (Urho3D::FileSystem::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::FileSystem::Rename, "todo: docstring", py::arg("srcFileName"), py::arg("destFileName"))
  .def("Delete", (bool (Urho3D::FileSystem::*)(const Urho3D::String &)) &Urho3D::FileSystem::Delete, "todo: docstring", py::arg("fileName"))
  .def("RegisterPath", (void (Urho3D::FileSystem::*)(const Urho3D::String &)) &Urho3D::FileSystem::RegisterPath, "todo: docstring", py::arg("pathName"))
  .def("SetLastModifiedTime", (bool (Urho3D::FileSystem::*)(const Urho3D::String &, unsigned int)) &Urho3D::FileSystem::SetLastModifiedTime, "todo: docstring", py::arg("fileName"), py::arg("newTime"))
  .def("GetCurrentDir", (Urho3D::String (Urho3D::FileSystem::*)() const) &Urho3D::FileSystem::GetCurrentDir, "todo: docstring")
  .def("GetExecuteConsoleCommands", (bool (Urho3D::FileSystem::*)() const) &Urho3D::FileSystem::GetExecuteConsoleCommands, "todo: docstring")
  .def("HasRegisteredPaths", (bool (Urho3D::FileSystem::*)() const) &Urho3D::FileSystem::HasRegisteredPaths, "todo: docstring")
  .def("CheckAccess", (bool (Urho3D::FileSystem::*)(const Urho3D::String &) const) &Urho3D::FileSystem::CheckAccess, "todo: docstring", py::arg("pathName"))
  .def("GetLastModifiedTime", (unsigned int (Urho3D::FileSystem::*)(const Urho3D::String &) const) &Urho3D::FileSystem::GetLastModifiedTime, "todo: docstring", py::arg("fileName"))
  .def("FileExists", (bool (Urho3D::FileSystem::*)(const Urho3D::String &) const) &Urho3D::FileSystem::FileExists, "todo: docstring", py::arg("fileName"))
  .def("DirExists", (bool (Urho3D::FileSystem::*)(const Urho3D::String &) const) &Urho3D::FileSystem::DirExists, "todo: docstring", py::arg("pathName"))
  .def("ScanDir", (void (Urho3D::FileSystem::*)(Urho3D::Vector<Urho3D::String> &, const Urho3D::String &, const Urho3D::String &, unsigned int, bool) const) &Urho3D::FileSystem::ScanDir, "todo: docstring", py::arg("result"), py::arg("pathName"), py::arg("filter"), py::arg("flags"), py::arg("recursive"))
  .def("GetProgramDir", (Urho3D::String (Urho3D::FileSystem::*)() const) &Urho3D::FileSystem::GetProgramDir, "todo: docstring")
  .def("GetUserDocumentsDir", (Urho3D::String (Urho3D::FileSystem::*)() const) &Urho3D::FileSystem::GetUserDocumentsDir, "todo: docstring")
  .def("GetAppPreferencesDir", (Urho3D::String (Urho3D::FileSystem::*)(const Urho3D::String &, const Urho3D::String &) const) &Urho3D::FileSystem::GetAppPreferencesDir, "todo: docstring", py::arg("org"), py::arg("app"))
  .def("GetTemporaryDir", (Urho3D::String (Urho3D::FileSystem::*)() const) &Urho3D::FileSystem::GetTemporaryDir, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_CursorShapeInfo(py::class_<Urho3D::CursorShapeInfo, Urho3D::ExternalPtr<Urho3D::CursorShapeInfo>>& pyclass_Var_Urho3D_CursorShapeInfo)
{
    // Class CursorShapeInfo Implementation
pyclass_Var_Urho3D_CursorShapeInfo
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<int>(), "todo: constructor docstring")
// Class Variables:
  .def_readwrite("image",&Urho3D::CursorShapeInfo::image_, "todo: var docstring")//Urho3D::SharedPtr<Urho3D::Image>
  .def_readwrite("texture",&Urho3D::CursorShapeInfo::texture_, "todo: var docstring")//Urho3D::SharedPtr<Urho3D::Texture>
  .def_readwrite("imageRect",&Urho3D::CursorShapeInfo::imageRect_, "todo: var docstring")//Urho3D::IntRect
  .def_readwrite("hotSpot",&Urho3D::CursorShapeInfo::hotSpot_, "todo: var docstring")//Urho3D::IntVector2
  .def_readwrite("systemDefined",&Urho3D::CursorShapeInfo::systemDefined_, "todo: var docstring")//bool
  .def_readwrite("systemCursor",&Urho3D::CursorShapeInfo::systemCursor_, "todo: var docstring")//int
;
}

void Implement_Urho3D_LuaScriptEventListener(py::class_<Urho3D::LuaScriptEventListener, Urho3D::ExternalPtr<Urho3D::LuaScriptEventListener>>& pyclass_Var_Urho3D_LuaScriptEventListener)
{
    // Class LuaScriptEventListener Implementation
pyclass_Var_Urho3D_LuaScriptEventListener
  //.def("~LuaScriptEventListener", (void (Urho3D::LuaScriptEventListener::*)()) &Urho3D::LuaScriptEventListener::~LuaScriptEventListener, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("AddEventHandler", (void (Urho3D::LuaScriptEventListener::*)(const Urho3D::String &, int)) &Urho3D::LuaScriptEventListener::AddEventHandler, "todo: docstring", py::arg("eventName"), py::arg("index"))
  .def("AddEventHandler", (void (Urho3D::LuaScriptEventListener::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::LuaScriptEventListener::AddEventHandler, "todo: docstring", py::arg("eventName"), py::arg("functionName"))
  .def("AddEventHandler", (void (Urho3D::LuaScriptEventListener::*)(Urho3D::Object *, const Urho3D::String &, int)) &Urho3D::LuaScriptEventListener::AddEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"), py::arg("index"))
  .def("AddEventHandler", (void (Urho3D::LuaScriptEventListener::*)(Urho3D::Object *, const Urho3D::String &, const Urho3D::String &)) &Urho3D::LuaScriptEventListener::AddEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"), py::arg("functionName"))
  .def("RemoveEventHandler", (void (Urho3D::LuaScriptEventListener::*)(const Urho3D::String &)) &Urho3D::LuaScriptEventListener::RemoveEventHandler, "todo: docstring", py::arg("eventName"))
  .def("RemoveEventHandler", (void (Urho3D::LuaScriptEventListener::*)(Urho3D::Object *, const Urho3D::String &)) &Urho3D::LuaScriptEventListener::RemoveEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"))
  .def("RemoveEventHandlers", (void (Urho3D::LuaScriptEventListener::*)(Urho3D::Object *)) &Urho3D::LuaScriptEventListener::RemoveEventHandlers, "todo: docstring", py::arg("sender"))
  .def("RemoveAllEventHandlers", (void (Urho3D::LuaScriptEventListener::*)()) &Urho3D::LuaScriptEventListener::RemoveAllEventHandlers, "todo: docstring")
  .def("RemoveEventHandlersExcept", (void (Urho3D::LuaScriptEventListener::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::LuaScriptEventListener::RemoveEventHandlersExcept, "todo: docstring", py::arg("exceptionNames"))
  .def("HasEventHandler", (bool (Urho3D::LuaScriptEventListener::*)(const Urho3D::String &) const) &Urho3D::LuaScriptEventListener::HasEventHandler, "todo: docstring", py::arg("eventName"))
  .def("HasEventHandler", (bool (Urho3D::LuaScriptEventListener::*)(Urho3D::Object *, const Urho3D::String &) const) &Urho3D::LuaScriptEventListener::HasEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"))
// Class Variables:
;
}

void Implement_Urho3D_NavigationPathPoint(py::class_<Urho3D::NavigationPathPoint, Urho3D::ExternalPtr<Urho3D::NavigationPathPoint>>& pyclass_Var_Urho3D_NavigationPathPoint)
{
    // Class NavigationPathPoint Implementation
pyclass_Var_Urho3D_NavigationPathPoint
// Class Variables:
  .def_readwrite("position",&Urho3D::NavigationPathPoint::position_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("flag",&Urho3D::NavigationPathPoint::flag_, "todo: var docstring")//Urho3D::NavigationPathPointFlag
  .def_readwrite("areaID",&Urho3D::NavigationPathPoint::areaID_, "todo: var docstring")//unsigned char
;
}

void Implement_Urho3D_HttpRequest(py::class_<Urho3D::HttpRequest, Urho3D::SharedPtr<Urho3D::HttpRequest>, Urho3D::RefCounted, Urho3D::Deserializer, Urho3D::Thread>& pyclass_Var_Urho3D_HttpRequest)
{
    // Class HttpRequest Implementation
pyclass_Var_Urho3D_HttpRequest
  .def(py::init<const Urho3D::String &, const Urho3D::String &, const Urho3D::Vector<Urho3D::String> &, const Urho3D::String &>(), "todo: constructor docstring")
  //.def("~HttpRequest", (void (Urho3D::HttpRequest::*)()) &Urho3D::HttpRequest::~HttpRequest, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ThreadFunction", (void (Urho3D::HttpRequest::*)()) &Urho3D::HttpRequest::ThreadFunction, "todo: docstring")
  .def("Read", (unsigned int (Urho3D::HttpRequest::*)(void *, unsigned int)) &Urho3D::HttpRequest::Read, "todo: docstring", py::arg("dest"), py::arg("size"))
  .def("Seek", (unsigned int (Urho3D::HttpRequest::*)(unsigned int)) &Urho3D::HttpRequest::Seek, "todo: docstring", py::arg("position"))
  .def("IsEof", (bool (Urho3D::HttpRequest::*)() const) &Urho3D::HttpRequest::IsEof, "todo: docstring")
  .def("GetURL", (const Urho3D::String & (Urho3D::HttpRequest::*)() const) &Urho3D::HttpRequest::GetURL, "todo: docstring")
  .def("GetVerb", (const Urho3D::String & (Urho3D::HttpRequest::*)() const) &Urho3D::HttpRequest::GetVerb, "todo: docstring")
  .def("GetError", (Urho3D::String (Urho3D::HttpRequest::*)() const) &Urho3D::HttpRequest::GetError, "todo: docstring")
  .def("GetState", (Urho3D::HttpRequestState (Urho3D::HttpRequest::*)() const) &Urho3D::HttpRequest::GetState, "todo: docstring")
  .def("GetAvailableSize", (unsigned int (Urho3D::HttpRequest::*)() const) &Urho3D::HttpRequest::GetAvailableSize, "todo: docstring")
  .def("IsOpen", (bool (Urho3D::HttpRequest::*)() const) &Urho3D::HttpRequest::IsOpen, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Localization(py::class_<Urho3D::Localization, Urho3D::SharedPtr<Urho3D::Localization>, Urho3D::Object>& pyclass_Var_Urho3D_Localization)
{
    // Class Localization Implementation
pyclass_Var_Urho3D_Localization
  .def("GetType", (Urho3D::StringHash (Urho3D::Localization::*)() const) &Urho3D::Localization::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Localization::*)() const) &Urho3D::Localization::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Localization::*)() const) &Urho3D::Localization::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Localization", (void (Urho3D::Localization::*)()) &Urho3D::Localization::~Localization, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("GetNumLanguages", (int (Urho3D::Localization::*)() const) &Urho3D::Localization::GetNumLanguages, "todo: docstring")
  .def("GetLanguageIndex", (int (Urho3D::Localization::*)() const) &Urho3D::Localization::GetLanguageIndex, "todo: docstring")
  .def("GetLanguageIndex", (int (Urho3D::Localization::*)(const Urho3D::String &)) &Urho3D::Localization::GetLanguageIndex, "todo: docstring", py::arg("language"))
  .def("GetLanguage", (Urho3D::String (Urho3D::Localization::*)()) &Urho3D::Localization::GetLanguage, "todo: docstring")
  .def("GetLanguage", (Urho3D::String (Urho3D::Localization::*)(int)) &Urho3D::Localization::GetLanguage, "todo: docstring", py::arg("index"))
  .def("SetLanguage", (void (Urho3D::Localization::*)(int)) &Urho3D::Localization::SetLanguage, "todo: docstring", py::arg("index"))
  .def("SetLanguage", (void (Urho3D::Localization::*)(const Urho3D::String &)) &Urho3D::Localization::SetLanguage, "todo: docstring", py::arg("language"))
  .def("Get", (Urho3D::String (Urho3D::Localization::*)(const Urho3D::String &)) &Urho3D::Localization::Get, "todo: docstring", py::arg("id"))
  .def("Reset", (void (Urho3D::Localization::*)()) &Urho3D::Localization::Reset, "todo: docstring")
  .def("LoadJSONFile", (void (Urho3D::Localization::*)(const Urho3D::String &, const Urho3D::String &, const Urho3D::String)) &Urho3D::Localization::LoadJSONFile, "todo: docstring", py::arg("name"), py::arg("basePath")=String::EMPTY, py::arg("language")=String::EMPTY)
  .def("LoadMultipleLanguageJSON", (void (Urho3D::Localization::*)(const Urho3D::JSONValue &)) &Urho3D::Localization::LoadMultipleLanguageJSON, "todo: docstring", py::arg("source"))
  .def("LoadSingleLanguageJSON", (void (Urho3D::Localization::*)(const Urho3D::JSONValue &, const Urho3D::String &)) &Urho3D::Localization::LoadSingleLanguageJSON, "todo: docstring", py::arg("source"), py::arg("language")=String::EMPTY)
// Class Variables:
;
}

void Implement_Urho3D_RocketSys(py::class_<Urho3D::RocketSys, Urho3D::SharedPtr<Urho3D::RocketSys>, Urho3D::Object>& pyclass_Var_Urho3D_RocketSys)
{
    // Class RocketSys Implementation
pyclass_Var_Urho3D_RocketSys
  .def("GetType", (Urho3D::StringHash (Urho3D::RocketSys::*)() const) &Urho3D::RocketSys::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::RocketSys::*)() const) &Urho3D::RocketSys::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::RocketSys::*)() const) &Urho3D::RocketSys::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~RocketSys", (void (Urho3D::RocketSys::*)()) &Urho3D::RocketSys::~RocketSys, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("GetRocketContext", (::Rocket::Core::Context * (Urho3D::RocketSys::*)() const) &Urho3D::RocketSys::GetRocketContext, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetRocketInput", (RocketInput * (Urho3D::RocketSys::*)() const) &Urho3D::RocketSys::GetRocketInput, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("RenderGeometry", (void (Urho3D::RocketSys::*)(Rocket::Core::Vertex *, int, int *, int, unsigned long, const Rocket::Core::Vector2<float> &)) &Urho3D::RocketSys::RenderGeometry, "todo: docstring", py::arg("vertices"), py::arg("num_vertices"), py::arg("indices"), py::arg("num_indices"), py::arg("texture"), py::arg("translation"))
    //['Rocket::Core::Vertex', 'int', 'int', 'int', 'unsigned long', 'Rocket::Core::Vector2<float>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("CompileGeometry", (::Rocket::Core::CompiledGeometryHandle (Urho3D::RocketSys::*)(Rocket::Core::Vertex *, int, int *, int, unsigned long)) &Urho3D::RocketSys::CompileGeometry, "todo: docstring", py::arg("vertices"), py::arg("num_vertices"), py::arg("indices"), py::arg("num_indices"), py::arg("texture"))
    //['Rocket::Core::Vertex', 'int', 'int', 'int', 'unsigned long']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad True, max ptr 1
  //.def("RenderCompiledGeometry", (void (Urho3D::RocketSys::*)(unsigned long, const Rocket::Core::Vector2<float> &)) &Urho3D::RocketSys::RenderCompiledGeometry, "todo: docstring", py::arg("geometry"), py::arg("translation"))
    //['unsigned long', 'Rocket::Core::Vector2<float>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("ReleaseCompiledGeometry", (void (Urho3D::RocketSys::*)(unsigned long)) &Urho3D::RocketSys::ReleaseCompiledGeometry, "todo: docstring", py::arg("geometry"))
  .def("EnableScissorRegion", (void (Urho3D::RocketSys::*)(bool)) &Urho3D::RocketSys::EnableScissorRegion, "todo: docstring", py::arg("enable"))
  .def("SetScissorRegion", (void (Urho3D::RocketSys::*)(int, int, int, int)) &Urho3D::RocketSys::SetScissorRegion, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("width"), py::arg("height"))
  //.def("LoadTexture", (bool (Urho3D::RocketSys::*)(unsigned long &, Rocket::Core::Vector2<int> &, const Rocket::Core::StringBase<char> &)) &Urho3D::RocketSys::LoadTexture, "todo: docstring", py::arg("texture_handle"), py::arg("texture_dimensions"), py::arg("source"))
    //['unsigned long', 'Rocket::Core::Vector2<int>', 'Rocket::Core::StringBase<char>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("GenerateTexture", (bool (Urho3D::RocketSys::*)(unsigned long &, const unsigned char *, const Rocket::Core::Vector2<int> &)) &Urho3D::RocketSys::GenerateTexture, "todo: docstring", py::arg("texture_handle"), py::arg("source"), py::arg("source_dimensions"))
    //['unsigned long', 'unsigned char', 'Rocket::Core::Vector2<int>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("ReleaseTexture", (void (Urho3D::RocketSys::*)(unsigned long)) &Urho3D::RocketSys::ReleaseTexture, "todo: docstring", py::arg("texture_handle"))
  .def("GetHorizontalTexelOffset", (float (Urho3D::RocketSys::*)()) &Urho3D::RocketSys::GetHorizontalTexelOffset, "todo: docstring")
  .def("GetVerticalTexelOffset", (float (Urho3D::RocketSys::*)()) &Urho3D::RocketSys::GetVerticalTexelOffset, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_FileSelector(py::class_<Urho3D::FileSelector, Urho3D::SharedPtr<Urho3D::FileSelector>, Urho3D::Object>& pyclass_Var_Urho3D_FileSelector)
{
    // Class FileSelector Implementation
pyclass_Var_Urho3D_FileSelector
  .def("GetType", (Urho3D::StringHash (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~FileSelector", (void (Urho3D::FileSelector::*)()) &Urho3D::FileSelector::~FileSelector, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetDefaultStyle", (void (Urho3D::FileSelector::*)(Urho3D::XMLFile *)) &Urho3D::FileSelector::SetDefaultStyle, "todo: docstring", py::arg("style"))
  .def("SetTitle", (void (Urho3D::FileSelector::*)(const Urho3D::String &)) &Urho3D::FileSelector::SetTitle, "todo: docstring", py::arg("text"))
  .def("SetButtonTexts", (void (Urho3D::FileSelector::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::FileSelector::SetButtonTexts, "todo: docstring", py::arg("okText"), py::arg("cancelText"))
  .def("SetPath", (void (Urho3D::FileSelector::*)(const Urho3D::String &)) &Urho3D::FileSelector::SetPath, "todo: docstring", py::arg("path"))
  .def("SetFileName", (void (Urho3D::FileSelector::*)(const Urho3D::String &)) &Urho3D::FileSelector::SetFileName, "todo: docstring", py::arg("fileName"))
  .def("SetFilters", (void (Urho3D::FileSelector::*)(const Urho3D::Vector<Urho3D::String> &, unsigned int)) &Urho3D::FileSelector::SetFilters, "todo: docstring", py::arg("filters"), py::arg("defaultIndex"))
  .def("SetDirectoryMode", (void (Urho3D::FileSelector::*)(bool)) &Urho3D::FileSelector::SetDirectoryMode, "todo: docstring", py::arg("enable"))
  .def("UpdateElements", (void (Urho3D::FileSelector::*)()) &Urho3D::FileSelector::UpdateElements, "todo: docstring")
  .def("GetDefaultStyle", (Urho3D::XMLFile * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetDefaultStyle, "todo: docstring")
  .def("GetWindow", (Urho3D::Window * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetWindow, "todo: docstring")
  .def("GetTitleText", (Urho3D::Text * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetTitleText, "todo: docstring")
  .def("GetFileList", (Urho3D::ListView * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetFileList, "todo: docstring")
  .def("GetPathEdit", (Urho3D::LineEdit * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetPathEdit, "todo: docstring")
  .def("GetFileNameEdit", (Urho3D::LineEdit * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetFileNameEdit, "todo: docstring")
  .def("GetFilterList", (Urho3D::DropDownList * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetFilterList, "todo: docstring")
  .def("GetOKButton", (Urho3D::Button * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetOKButton, "todo: docstring")
  .def("GetCancelButton", (Urho3D::Button * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetCancelButton, "todo: docstring")
  .def("GetCloseButton", (Urho3D::Button * (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetCloseButton, "todo: docstring")
  .def("GetTitle", (const Urho3D::String & (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetTitle, "todo: docstring")
  .def("GetPath", (const Urho3D::String & (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetPath, "todo: docstring")
  .def("GetFileName", (const Urho3D::String & (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetFileName, "todo: docstring")
  .def("GetFilter", (const Urho3D::String & (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetFilter, "todo: docstring")
  .def("GetFilterIndex", (unsigned int (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetFilterIndex, "todo: docstring")
  .def("GetDirectoryMode", (bool (Urho3D::FileSelector::*)() const) &Urho3D::FileSelector::GetDirectoryMode, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_FontFaceFreeType(py::class_<Urho3D::FontFaceFreeType, Urho3D::SharedPtr<Urho3D::FontFaceFreeType>, Urho3D::FontFace>& pyclass_Var_Urho3D_FontFaceFreeType)
{
    // Class FontFaceFreeType Implementation
pyclass_Var_Urho3D_FontFaceFreeType
  .def(py::init<Urho3D::Font *>(), "todo: constructor docstring")
  //.def("~FontFaceFreeType", (void (Urho3D::FontFaceFreeType::*)()) &Urho3D::FontFaceFreeType::~FontFaceFreeType, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Load", (bool (Urho3D::FontFaceFreeType::*)(const unsigned char *, unsigned int, float)) &Urho3D::FontFaceFreeType::Load, "todo: docstring", py::arg("fontData"), py::arg("fontDataSize"), py::arg("pointSize"))
  .def("GetGlyph", (const Urho3D::FontGlyph * (Urho3D::FontFaceFreeType::*)(unsigned int)) &Urho3D::FontFaceFreeType::GetGlyph, "todo: docstring", py::arg("c"))
  .def("HasMutableGlyphs", (bool (Urho3D::FontFaceFreeType::*)() const) &Urho3D::FontFaceFreeType::HasMutableGlyphs, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_MessageBox(py::class_<Urho3D::MessageBox, Urho3D::SharedPtr<Urho3D::MessageBox>, Urho3D::Object>& pyclass_Var_Urho3D_MessageBox)
{
    // Class MessageBox Implementation
pyclass_Var_Urho3D_MessageBox
  .def("GetType", (Urho3D::StringHash (Urho3D::MessageBox::*)() const) &Urho3D::MessageBox::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::MessageBox::*)() const) &Urho3D::MessageBox::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::MessageBox::*)() const) &Urho3D::MessageBox::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *, const Urho3D::String &, const Urho3D::String &, Urho3D::XMLFile *, Urho3D::XMLFile *>(), "todo: constructor docstring")
  //.def("~MessageBox", (void (Urho3D::MessageBox::*)()) &Urho3D::MessageBox::~MessageBox, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetTitle", (void (Urho3D::MessageBox::*)(const Urho3D::String &)) &Urho3D::MessageBox::SetTitle, "todo: docstring", py::arg("text"))
  .def("SetMessage", (void (Urho3D::MessageBox::*)(const Urho3D::String &)) &Urho3D::MessageBox::SetMessage, "todo: docstring", py::arg("text"))
  .def("GetTitle", (const Urho3D::String & (Urho3D::MessageBox::*)() const) &Urho3D::MessageBox::GetTitle, "todo: docstring")
  .def("GetMessage", (const Urho3D::String & (Urho3D::MessageBox::*)() const) &Urho3D::MessageBox::GetMessage, "todo: docstring")
  .def("GetWindow", (Urho3D::UIElement * (Urho3D::MessageBox::*)() const) &Urho3D::MessageBox::GetWindow, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_UI(py::class_<Urho3D::UI, Urho3D::SharedPtr<Urho3D::UI>, Urho3D::Object>& pyclass_Var_Urho3D_UI)
{
    // Class UI Implementation
pyclass_Var_Urho3D_UI
  .def("GetType", (Urho3D::StringHash (Urho3D::UI::*)() const) &Urho3D::UI::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::UI::*)() const) &Urho3D::UI::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::UI::*)() const) &Urho3D::UI::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~UI", (void (Urho3D::UI::*)()) &Urho3D::UI::~UI, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetCursor", (void (Urho3D::UI::*)(Urho3D::Cursor *)) &Urho3D::UI::SetCursor, "todo: docstring", py::arg("cursor"))
  .def("SetFocusElement", (void (Urho3D::UI::*)(Urho3D::UIElement *, bool)) &Urho3D::UI::SetFocusElement, "todo: docstring", py::arg("element"), py::arg("byKey")=false)
  .def("SetModalElement", (bool (Urho3D::UI::*)(Urho3D::UIElement *, bool)) &Urho3D::UI::SetModalElement, "todo: docstring", py::arg("modalElement"), py::arg("enable"))
  .def("Clear", (void (Urho3D::UI::*)()) &Urho3D::UI::Clear, "todo: docstring")
  .def("Update", (void (Urho3D::UI::*)(float)) &Urho3D::UI::Update, "todo: docstring", py::arg("timeStep"))
  .def("RenderUpdate", (void (Urho3D::UI::*)()) &Urho3D::UI::RenderUpdate, "todo: docstring")
  .def("Render", (void (Urho3D::UI::*)(bool)) &Urho3D::UI::Render, "todo: docstring", py::arg("renderUICommand")=false)
  .def("DebugDraw", (void (Urho3D::UI::*)(Urho3D::UIElement *)) &Urho3D::UI::DebugDraw, "todo: docstring", py::arg("element"))
  //.def("LoadLayout", (SharedPtr<Urho3D::UIElement> (Urho3D::UI::*)(Urho3D::Deserializer &, Urho3D::XMLFile *)) &Urho3D::UI::LoadLayout, "todo: docstring", py::arg("source"), py::arg("styleFile")=nullptr)
    //['Urho3D::Deserializer', 'Urho3D::XMLFile']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("LoadLayout", (SharedPtr<Urho3D::UIElement> (Urho3D::UI::*)(Urho3D::XMLFile *, Urho3D::XMLFile *)) &Urho3D::UI::LoadLayout, "todo: docstring", py::arg("file"), py::arg("styleFile")=nullptr)
    //['Urho3D::XMLFile', 'Urho3D::XMLFile']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("SaveLayout", (bool (Urho3D::UI::*)(Urho3D::Serializer &, Urho3D::UIElement *)) &Urho3D::UI::SaveLayout, "todo: docstring", py::arg("dest"), py::arg("element"))
  .def("SetClipboardText", (void (Urho3D::UI::*)(const Urho3D::String &)) &Urho3D::UI::SetClipboardText, "todo: docstring", py::arg("text"))
  .def("SetDoubleClickInterval", (void (Urho3D::UI::*)(float)) &Urho3D::UI::SetDoubleClickInterval, "todo: docstring", py::arg("interval"))
  .def("SetMaxDoubleClickDistance", (void (Urho3D::UI::*)(float)) &Urho3D::UI::SetMaxDoubleClickDistance, "todo: docstring", py::arg("distPixels"))
  .def("SetDragBeginInterval", (void (Urho3D::UI::*)(float)) &Urho3D::UI::SetDragBeginInterval, "todo: docstring", py::arg("interval"))
  .def("SetDragBeginDistance", (void (Urho3D::UI::*)(int)) &Urho3D::UI::SetDragBeginDistance, "todo: docstring", py::arg("pixels"))
  .def("SetDefaultToolTipDelay", (void (Urho3D::UI::*)(float)) &Urho3D::UI::SetDefaultToolTipDelay, "todo: docstring", py::arg("delay"))
  .def("SetMaxFontTextureSize", (void (Urho3D::UI::*)(int)) &Urho3D::UI::SetMaxFontTextureSize, "todo: docstring", py::arg("size"))
  .def("SetNonFocusedMouseWheel", (void (Urho3D::UI::*)(bool)) &Urho3D::UI::SetNonFocusedMouseWheel, "todo: docstring", py::arg("nonFocusedMouseWheel"))
  .def("SetUseSystemClipboard", (void (Urho3D::UI::*)(bool)) &Urho3D::UI::SetUseSystemClipboard, "todo: docstring", py::arg("enable"))
  .def("SetUseScreenKeyboard", (void (Urho3D::UI::*)(bool)) &Urho3D::UI::SetUseScreenKeyboard, "todo: docstring", py::arg("enable"))
  .def("SetUseMutableGlyphs", (void (Urho3D::UI::*)(bool)) &Urho3D::UI::SetUseMutableGlyphs, "todo: docstring", py::arg("enable"))
  .def("SetForceAutoHint", (void (Urho3D::UI::*)(bool)) &Urho3D::UI::SetForceAutoHint, "todo: docstring", py::arg("enable"))
  .def("SetFontHintLevel", (void (Urho3D::UI::*)(Urho3D::FontHintLevel)) &Urho3D::UI::SetFontHintLevel, "todo: docstring", py::arg("level"))
  .def("SetFontSubpixelThreshold", (void (Urho3D::UI::*)(float)) &Urho3D::UI::SetFontSubpixelThreshold, "todo: docstring", py::arg("threshold"))
  .def("SetFontOversampling", (void (Urho3D::UI::*)(int)) &Urho3D::UI::SetFontOversampling, "todo: docstring", py::arg("oversampling"))
  .def("SetScale", (void (Urho3D::UI::*)(float)) &Urho3D::UI::SetScale, "todo: docstring", py::arg("scale"))
  .def("SetWidth", (void (Urho3D::UI::*)(float)) &Urho3D::UI::SetWidth, "todo: docstring", py::arg("width"))
  .def("SetHeight", (void (Urho3D::UI::*)(float)) &Urho3D::UI::SetHeight, "todo: docstring", py::arg("height"))
  .def("SetCustomSize", (void (Urho3D::UI::*)(const Urho3D::IntVector2 &)) &Urho3D::UI::SetCustomSize, "todo: docstring", py::arg("size"))
  .def("SetCustomSize", (void (Urho3D::UI::*)(int, int)) &Urho3D::UI::SetCustomSize, "todo: docstring", py::arg("width"), py::arg("height"))
  .def("GetRoot", (Urho3D::UIElement * (Urho3D::UI::*)() const) &Urho3D::UI::GetRoot, "todo: docstring")
  .def("GetRootModalElement", (Urho3D::UIElement * (Urho3D::UI::*)() const) &Urho3D::UI::GetRootModalElement, "todo: docstring")
  .def("GetCursor", (Urho3D::Cursor * (Urho3D::UI::*)() const) &Urho3D::UI::GetCursor, "todo: docstring")
  .def("GetCursorPosition", (Urho3D::IntVector2 (Urho3D::UI::*)() const) &Urho3D::UI::GetCursorPosition, "todo: docstring")
  .def("GetElementAt", (Urho3D::UIElement * (Urho3D::UI::*)(const Urho3D::IntVector2 &, bool)) &Urho3D::UI::GetElementAt, "todo: docstring", py::arg("position"), py::arg("enabledOnly")=true)
  .def("GetElementAt", (Urho3D::UIElement * (Urho3D::UI::*)(int, int, bool)) &Urho3D::UI::GetElementAt, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("enabledOnly")=true)
  .def("GetElementAt", (Urho3D::UIElement * (Urho3D::UI::*)(Urho3D::UIElement *, const Urho3D::IntVector2 &, bool)) &Urho3D::UI::GetElementAt, "todo: docstring", py::arg("root"), py::arg("position"), py::arg("enabledOnly")=true)
  .def("GetFocusElement", (Urho3D::UIElement * (Urho3D::UI::*)() const) &Urho3D::UI::GetFocusElement, "todo: docstring")
  .def("GetFrontElement", (Urho3D::UIElement * (Urho3D::UI::*)() const) &Urho3D::UI::GetFrontElement, "todo: docstring")
  //.def("GetDragElements", (const Vector<Urho3D::UIElement *> (Urho3D::UI::*)()) &Urho3D::UI::GetDragElements, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetNumDragElements", (unsigned int (Urho3D::UI::*)() const) &Urho3D::UI::GetNumDragElements, "todo: docstring")
  .def("GetDragElement", (Urho3D::UIElement * (Urho3D::UI::*)(unsigned int)) &Urho3D::UI::GetDragElement, "todo: docstring", py::arg("index"))
  .def("GetClipboardText", (const Urho3D::String & (Urho3D::UI::*)() const) &Urho3D::UI::GetClipboardText, "todo: docstring")
  .def("GetDoubleClickInterval", (float (Urho3D::UI::*)() const) &Urho3D::UI::GetDoubleClickInterval, "todo: docstring")
  .def("GetMaxDoubleClickDistance", (float (Urho3D::UI::*)() const) &Urho3D::UI::GetMaxDoubleClickDistance, "todo: docstring")
  .def("GetDragBeginInterval", (float (Urho3D::UI::*)() const) &Urho3D::UI::GetDragBeginInterval, "todo: docstring")
  .def("GetDragBeginDistance", (int (Urho3D::UI::*)() const) &Urho3D::UI::GetDragBeginDistance, "todo: docstring")
  .def("GetDefaultToolTipDelay", (float (Urho3D::UI::*)() const) &Urho3D::UI::GetDefaultToolTipDelay, "todo: docstring")
  .def("GetMaxFontTextureSize", (int (Urho3D::UI::*)() const) &Urho3D::UI::GetMaxFontTextureSize, "todo: docstring")
  .def("IsNonFocusedMouseWheel", (bool (Urho3D::UI::*)() const) &Urho3D::UI::IsNonFocusedMouseWheel, "todo: docstring")
  .def("GetUseSystemClipboard", (bool (Urho3D::UI::*)() const) &Urho3D::UI::GetUseSystemClipboard, "todo: docstring")
  .def("GetUseScreenKeyboard", (bool (Urho3D::UI::*)() const) &Urho3D::UI::GetUseScreenKeyboard, "todo: docstring")
  .def("GetUseMutableGlyphs", (bool (Urho3D::UI::*)() const) &Urho3D::UI::GetUseMutableGlyphs, "todo: docstring")
  .def("GetForceAutoHint", (bool (Urho3D::UI::*)() const) &Urho3D::UI::GetForceAutoHint, "todo: docstring")
  .def("GetFontHintLevel", (Urho3D::FontHintLevel (Urho3D::UI::*)() const) &Urho3D::UI::GetFontHintLevel, "todo: docstring")
  .def("GetFontSubpixelThreshold", (float (Urho3D::UI::*)() const) &Urho3D::UI::GetFontSubpixelThreshold, "todo: docstring")
  .def("GetFontOversampling", (int (Urho3D::UI::*)() const) &Urho3D::UI::GetFontOversampling, "todo: docstring")
  .def("HasModalElement", (bool (Urho3D::UI::*)() const) &Urho3D::UI::HasModalElement, "todo: docstring")
  .def("IsDragging", (bool (Urho3D::UI::*)() const) &Urho3D::UI::IsDragging, "todo: docstring")
  .def("GetScale", (float (Urho3D::UI::*)() const) &Urho3D::UI::GetScale, "todo: docstring")
  .def("GetCustomSize", (const Urho3D::IntVector2 & (Urho3D::UI::*)() const) &Urho3D::UI::GetCustomSize, "todo: docstring")
  .def("SetElementRenderTexture", (void (Urho3D::UI::*)(Urho3D::UIElement *, Urho3D::Texture2D *)) &Urho3D::UI::SetElementRenderTexture, "todo: docstring", py::arg("element"), py::arg("texture"))
// Class Variables:
;
}
