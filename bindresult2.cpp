

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
void Implement_Urho3D_AutoProfileBlock(py::class_<Urho3D::AutoProfileBlock, Urho3D::ExternalPtr<Urho3D::AutoProfileBlock>>& pyclass_Var_Urho3D_AutoProfileBlock)
{
    // Class AutoProfileBlock Implementation
pyclass_Var_Urho3D_AutoProfileBlock
  .def(py::init<Urho3D::Profiler *, const char *>(), "todo: constructor docstring")
  //.def("~AutoProfileBlock", (void (Urho3D::AutoProfileBlock::*)()) &Urho3D::AutoProfileBlock::~AutoProfileBlock, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_Spline(py::class_<Urho3D::Spline, Urho3D::ExternalPtr<Urho3D::Spline>>& pyclass_Var_Urho3D_Spline)
{
    // Class Spline Implementation
pyclass_Var_Urho3D_Spline
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<Urho3D::InterpolationMode>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector<Urho3D::Variant> &, Urho3D::InterpolationMode>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Spline &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Spline(), "todo: docstring").def("__assign__", (Urho3D::Spline & (Urho3D::Spline::*)(const Urho3D::Spline &)) &Urho3D::Spline::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Spline']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Spline(), "todo: docstring")
    //['Urho3D::Spline']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Spline(), "todo: docstring")
    //['Urho3D::Spline']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("GetInterpolationMode", (Urho3D::InterpolationMode (Urho3D::Spline::*)() const) &Urho3D::Spline::GetInterpolationMode, "todo: docstring")
  .def("GetKnots", (const Urho3D::VariantVector & (Urho3D::Spline::*)() const) &Urho3D::Spline::GetKnots, "todo: docstring")
  .def("GetKnot", (Urho3D::Variant (Urho3D::Spline::*)(unsigned int) const) &Urho3D::Spline::GetKnot, "todo: docstring", py::arg("index"))
  .def("GetPoint", (Urho3D::Variant (Urho3D::Spline::*)(float) const) &Urho3D::Spline::GetPoint, "todo: docstring", py::arg("f"))
  .def("SetInterpolationMode", (void (Urho3D::Spline::*)(Urho3D::InterpolationMode)) &Urho3D::Spline::SetInterpolationMode, "todo: docstring", py::arg("interpolationMode"))
  .def("SetKnots", (void (Urho3D::Spline::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::Spline::SetKnots, "todo: docstring", py::arg("knots"))
  .def("SetKnot", (void (Urho3D::Spline::*)(const Urho3D::Variant &, unsigned int)) &Urho3D::Spline::SetKnot, "todo: docstring", py::arg("knot"), py::arg("index"))
  .def("AddKnot", (void (Urho3D::Spline::*)(const Urho3D::Variant &)) &Urho3D::Spline::AddKnot, "todo: docstring", py::arg("knot"))
  .def("AddKnot", (void (Urho3D::Spline::*)(const Urho3D::Variant &, unsigned int)) &Urho3D::Spline::AddKnot, "todo: docstring", py::arg("knot"), py::arg("index"))
  .def("RemoveKnot", (void (Urho3D::Spline::*)()) &Urho3D::Spline::RemoveKnot, "todo: docstring")
  .def("RemoveKnot", (void (Urho3D::Spline::*)(unsigned int)) &Urho3D::Spline::RemoveKnot, "todo: docstring", py::arg("index"))
  .def("Clear", (void (Urho3D::Spline::*)()) &Urho3D::Spline::Clear, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Skeleton(py::class_<Urho3D::Skeleton, Urho3D::ExternalPtr<Urho3D::Skeleton>>& pyclass_Var_Urho3D_Skeleton)
{
    // Class Skeleton Implementation
pyclass_Var_Urho3D_Skeleton
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~Skeleton", (void (Urho3D::Skeleton::*)()) &Urho3D::Skeleton::~Skeleton, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Load", (bool (Urho3D::Skeleton::*)(Urho3D::Deserializer &)) &Urho3D::Skeleton::Load, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::Skeleton::*)(Urho3D::Serializer &) const) &Urho3D::Skeleton::Save, "todo: docstring", py::arg("dest"))
  .def("Define", (void (Urho3D::Skeleton::*)(const Urho3D::Skeleton &)) &Urho3D::Skeleton::Define, "todo: docstring", py::arg("src"))
  .def("SetRootBoneIndex", (void (Urho3D::Skeleton::*)(unsigned int)) &Urho3D::Skeleton::SetRootBoneIndex, "todo: docstring", py::arg("index"))
  .def("ClearBones", (void (Urho3D::Skeleton::*)()) &Urho3D::Skeleton::ClearBones, "todo: docstring")
  .def("Reset", (void (Urho3D::Skeleton::*)()) &Urho3D::Skeleton::Reset, "todo: docstring")
  //.def("GetBones", (const Vector<Urho3D::Bone> & (Urho3D::Skeleton::*)() const) &Urho3D::Skeleton::GetBones, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetModifiableBones", (Vector<Urho3D::Bone> & (Urho3D::Skeleton::*)()) &Urho3D::Skeleton::GetModifiableBones, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumBones", (unsigned int (Urho3D::Skeleton::*)() const) &Urho3D::Skeleton::GetNumBones, "todo: docstring")
  //.def("GetRootBone", (Urho3D::Bone * (Urho3D::Skeleton::*)()) &Urho3D::Skeleton::GetRootBone, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetBoneIndex", (unsigned int (Urho3D::Skeleton::*)(const Urho3D::String &) const) &Urho3D::Skeleton::GetBoneIndex, "todo: docstring", py::arg("boneName"))
  .def("GetBoneIndex", (unsigned int (Urho3D::Skeleton::*)(const Urho3D::StringHash &) const) &Urho3D::Skeleton::GetBoneIndex, "todo: docstring", py::arg("boneNameHash"))
  //.def("GetBoneIndex", (unsigned int (Urho3D::Skeleton::*)(const Urho3D::Bone *) const) &Urho3D::Skeleton::GetBoneIndex, "todo: docstring", py::arg("bone"))
    //['Urho3D::Bone']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetBoneParent", (Urho3D::Bone * (Urho3D::Skeleton::*)(const Urho3D::Bone *)) &Urho3D::Skeleton::GetBoneParent, "todo: docstring", py::arg("bone"))
    //['Urho3D::Bone']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad True, max ptr 1
  //.def("GetBone", (Urho3D::Bone * (Urho3D::Skeleton::*)(unsigned int)) &Urho3D::Skeleton::GetBone, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetBone", (Urho3D::Bone * (Urho3D::Skeleton::*)(const Urho3D::String &)) &Urho3D::Skeleton::GetBone, "todo: docstring", py::arg("name"))
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetBone", (Urho3D::Bone * (Urho3D::Skeleton::*)(const char *)) &Urho3D::Skeleton::GetBone, "todo: docstring", py::arg("name"))
    //['char']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetBone", (Urho3D::Bone * (Urho3D::Skeleton::*)(const Urho3D::StringHash &)) &Urho3D::Skeleton::GetBone, "todo: docstring", py::arg("boneNameHash"))
    //['Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("ResetSilent", (void (Urho3D::Skeleton::*)()) &Urho3D::Skeleton::ResetSilent, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_AnimationState(py::class_<Urho3D::AnimationState, Urho3D::SharedPtr<Urho3D::AnimationState>, Urho3D::RefCounted>& pyclass_Var_Urho3D_AnimationState)
{
    // Class AnimationState Implementation
pyclass_Var_Urho3D_AnimationState
  .def(py::init<Urho3D::AnimatedModel *, Urho3D::Animation *>(), "todo: constructor docstring")
  .def(py::init<Urho3D::Node *, Urho3D::Animation *>(), "todo: constructor docstring")
  //.def("~AnimationState", (void (Urho3D::AnimationState::*)()) &Urho3D::AnimationState::~AnimationState, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("SetStartBone", (void (Urho3D::AnimationState::*)(Urho3D::Bone *)) &Urho3D::AnimationState::SetStartBone, "todo: docstring", py::arg("startBone"))
    //['Urho3D::Bone']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("SetLooped", (void (Urho3D::AnimationState::*)(bool)) &Urho3D::AnimationState::SetLooped, "todo: docstring", py::arg("looped"))
  .def("SetWeight", (void (Urho3D::AnimationState::*)(float)) &Urho3D::AnimationState::SetWeight, "todo: docstring", py::arg("weight"))
  .def("SetBlendMode", (void (Urho3D::AnimationState::*)(Urho3D::AnimationBlendMode)) &Urho3D::AnimationState::SetBlendMode, "todo: docstring", py::arg("mode"))
  .def("SetTime", (void (Urho3D::AnimationState::*)(float)) &Urho3D::AnimationState::SetTime, "todo: docstring", py::arg("time"))
  .def("SetBoneWeight", (void (Urho3D::AnimationState::*)(unsigned int, float, bool)) &Urho3D::AnimationState::SetBoneWeight, "todo: docstring", py::arg("index"), py::arg("weight"), py::arg("recursive")=false)
  .def("SetBoneWeight", (void (Urho3D::AnimationState::*)(const Urho3D::String &, float, bool)) &Urho3D::AnimationState::SetBoneWeight, "todo: docstring", py::arg("name"), py::arg("weight"), py::arg("recursive")=false)
  .def("SetBoneWeight", (void (Urho3D::AnimationState::*)(Urho3D::StringHash, float, bool)) &Urho3D::AnimationState::SetBoneWeight, "todo: docstring", py::arg("nameHash"), py::arg("weight"), py::arg("recursive")=false)
  .def("AddWeight", (void (Urho3D::AnimationState::*)(float)) &Urho3D::AnimationState::AddWeight, "todo: docstring", py::arg("delta"))
  .def("AddTime", (void (Urho3D::AnimationState::*)(float)) &Urho3D::AnimationState::AddTime, "todo: docstring", py::arg("delta"))
  .def("SetLayer", (void (Urho3D::AnimationState::*)(unsigned char)) &Urho3D::AnimationState::SetLayer, "todo: docstring", py::arg("layer"))
  .def("GetAnimation", (Urho3D::Animation * (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::GetAnimation, "todo: docstring")
  .def("GetModel", (Urho3D::AnimatedModel * (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::GetModel, "todo: docstring")
  .def("GetNode", (Urho3D::Node * (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::GetNode, "todo: docstring")
  //.def("GetStartBone", (Urho3D::Bone * (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::GetStartBone, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetBoneWeight", (float (Urho3D::AnimationState::*)(unsigned int) const) &Urho3D::AnimationState::GetBoneWeight, "todo: docstring", py::arg("index"))
  .def("GetBoneWeight", (float (Urho3D::AnimationState::*)(const Urho3D::String &) const) &Urho3D::AnimationState::GetBoneWeight, "todo: docstring", py::arg("name"))
  .def("GetBoneWeight", (float (Urho3D::AnimationState::*)(Urho3D::StringHash) const) &Urho3D::AnimationState::GetBoneWeight, "todo: docstring", py::arg("nameHash"))
  .def("GetTrackIndex", (unsigned int (Urho3D::AnimationState::*)(Urho3D::Node *) const) &Urho3D::AnimationState::GetTrackIndex, "todo: docstring", py::arg("node"))
  .def("GetTrackIndex", (unsigned int (Urho3D::AnimationState::*)(const Urho3D::String &) const) &Urho3D::AnimationState::GetTrackIndex, "todo: docstring", py::arg("name"))
  .def("GetTrackIndex", (unsigned int (Urho3D::AnimationState::*)(Urho3D::StringHash) const) &Urho3D::AnimationState::GetTrackIndex, "todo: docstring", py::arg("nameHash"))
  .def("IsEnabled", (bool (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::IsEnabled, "todo: docstring")
  .def("IsLooped", (bool (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::IsLooped, "todo: docstring")
  .def("GetWeight", (float (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::GetWeight, "todo: docstring")
  .def("GetBlendMode", (Urho3D::AnimationBlendMode (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::GetBlendMode, "todo: docstring")
  .def("GetTime", (float (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::GetTime, "todo: docstring")
  .def("GetLength", (float (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::GetLength, "todo: docstring")
  .def("GetLayer", (unsigned char (Urho3D::AnimationState::*)() const) &Urho3D::AnimationState::GetLayer, "todo: docstring")
  .def("Apply", (void (Urho3D::AnimationState::*)()) &Urho3D::AnimationState::Apply, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_AnimationTrack(py::class_<Urho3D::AnimationTrack, Urho3D::ExternalPtr<Urho3D::AnimationTrack>>& pyclass_Var_Urho3D_AnimationTrack)
{
    // Class AnimationTrack Implementation
pyclass_Var_Urho3D_AnimationTrack
  .def(py::init<>(), "todo: constructor docstring")
  //.def("SetKeyFrame", (void (Urho3D::AnimationTrack::*)(unsigned int, const Urho3D::AnimationKeyFrame &)) &Urho3D::AnimationTrack::SetKeyFrame, "todo: docstring", py::arg("index"), py::arg("keyFrame"))
    //['unsigned int', 'Urho3D::AnimationKeyFrame']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("AddKeyFrame", (void (Urho3D::AnimationTrack::*)(const Urho3D::AnimationKeyFrame &)) &Urho3D::AnimationTrack::AddKeyFrame, "todo: docstring", py::arg("keyFrame"))
    //['Urho3D::AnimationKeyFrame']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("InsertKeyFrame", (void (Urho3D::AnimationTrack::*)(unsigned int, const Urho3D::AnimationKeyFrame &)) &Urho3D::AnimationTrack::InsertKeyFrame, "todo: docstring", py::arg("index"), py::arg("keyFrame"))
    //['unsigned int', 'Urho3D::AnimationKeyFrame']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("RemoveKeyFrame", (void (Urho3D::AnimationTrack::*)(unsigned int)) &Urho3D::AnimationTrack::RemoveKeyFrame, "todo: docstring", py::arg("index"))
  .def("RemoveAllKeyFrames", (void (Urho3D::AnimationTrack::*)()) &Urho3D::AnimationTrack::RemoveAllKeyFrames, "todo: docstring")
  //.def("GetKeyFrame", (Urho3D::AnimationKeyFrame * (Urho3D::AnimationTrack::*)(unsigned int)) &Urho3D::AnimationTrack::GetKeyFrame, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetNumKeyFrames", (unsigned int (Urho3D::AnimationTrack::*)() const) &Urho3D::AnimationTrack::GetNumKeyFrames, "todo: docstring")
  .def("GetKeyFrameIndex", (void (Urho3D::AnimationTrack::*)(float, unsigned int &) const) &Urho3D::AnimationTrack::GetKeyFrameIndex, "todo: docstring", py::arg("time"), py::arg("index"))
// Class Variables:
  .def_readwrite("name",&Urho3D::AnimationTrack::name_, "todo: var docstring")//Urho3D::String
  .def_readwrite("nameHash",&Urho3D::AnimationTrack::nameHash_, "todo: var docstring")//Urho3D::StringHash
  .def_readwrite("channelMask",&Urho3D::AnimationTrack::channelMask_, "todo: var docstring")//Urho3D::FlagSet<Urho3D::AnimationChannel, void>
  .def_readwrite("keyFrames",&Urho3D::AnimationTrack::keyFrames_, "todo: var docstring")//Urho3D::Vector<Urho3D::AnimationKeyFrame>
;
}

void Implement_Urho3D_ShaderVariation(py::class_<Urho3D::ShaderVariation, Urho3D::SharedPtr<Urho3D::ShaderVariation>, Urho3D::RefCounted, Urho3D::GPUObject>& pyclass_Var_Urho3D_ShaderVariation)
{
    // Class ShaderVariation Implementation
pyclass_Var_Urho3D_ShaderVariation
  .def(py::init<Urho3D::Shader *, Urho3D::ShaderType>(), "todo: constructor docstring")
  //.def("~ShaderVariation", (void (Urho3D::ShaderVariation::*)()) &Urho3D::ShaderVariation::~ShaderVariation, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnDeviceLost", (void (Urho3D::ShaderVariation::*)()) &Urho3D::ShaderVariation::OnDeviceLost, "todo: docstring")
  .def("Release", (void (Urho3D::ShaderVariation::*)()) &Urho3D::ShaderVariation::Release, "todo: docstring")
  .def("Create", (bool (Urho3D::ShaderVariation::*)()) &Urho3D::ShaderVariation::Create, "todo: docstring")
  .def("SetName", (void (Urho3D::ShaderVariation::*)(const Urho3D::String &)) &Urho3D::ShaderVariation::SetName, "todo: docstring", py::arg("name"))
  .def("SetDefines", (void (Urho3D::ShaderVariation::*)(const Urho3D::String &)) &Urho3D::ShaderVariation::SetDefines, "todo: docstring", py::arg("defines"))
  .def("GetOwner", (Urho3D::Shader * (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetOwner, "todo: docstring")
  .def("GetShaderType", (Urho3D::ShaderType (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetShaderType, "todo: docstring")
  .def("GetName", (const Urho3D::String & (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetName, "todo: docstring")
  .def("GetFullName", (Urho3D::String (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetFullName, "todo: docstring")
  .def("HasParameter", (bool (Urho3D::ShaderVariation::*)(Urho3D::StringHash) const) &Urho3D::ShaderVariation::HasParameter, "todo: docstring", py::arg("param"))
  .def("HasTextureUnit", (bool (Urho3D::ShaderVariation::*)(Urho3D::TextureUnit) const) &Urho3D::ShaderVariation::HasTextureUnit, "todo: docstring", py::arg("unit"))
  //.def("GetParameters", (const HashMap<Urho3D::StringHash, Urho3D::ShaderParameter> & (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetParameters, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetElementHash", (unsigned long long (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetElementHash, "todo: docstring")
  //.def("GetByteCode", (const PODVector<unsigned char> & (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetByteCode, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetDefines", (const Urho3D::String & (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetDefines, "todo: docstring")
  .def("GetCompilerOutput", (const Urho3D::String & (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetCompilerOutput, "todo: docstring")
  .def("GetConstantBufferSizes", (const unsigned int * (Urho3D::ShaderVariation::*)() const) &Urho3D::ShaderVariation::GetConstantBufferSizes, "todo: docstring")
  .def("GetDefinesClipPlane", (const Urho3D::String & (Urho3D::ShaderVariation::*)()) &Urho3D::ShaderVariation::GetDefinesClipPlane, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Billboard(py::class_<Urho3D::Billboard, Urho3D::ExternalPtr<Urho3D::Billboard>>& pyclass_Var_Urho3D_Billboard)
{
    // Class Billboard Implementation
pyclass_Var_Urho3D_Billboard
// Class Variables:
  .def_readwrite("position",&Urho3D::Billboard::position_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("size",&Urho3D::Billboard::size_, "todo: var docstring")//Urho3D::Vector2
  .def_readwrite("uv",&Urho3D::Billboard::uv_, "todo: var docstring")//Urho3D::Rect
  .def_readwrite("color",&Urho3D::Billboard::color_, "todo: var docstring")//Urho3D::Color
  .def_readwrite("rotation",&Urho3D::Billboard::rotation_, "todo: var docstring")//float
  .def_readwrite("direction",&Urho3D::Billboard::direction_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("enabled",&Urho3D::Billboard::enabled_, "todo: var docstring")//bool
  .def_readwrite("sortDistance",&Urho3D::Billboard::sortDistance_, "todo: var docstring")//float
  .def_readwrite("screenScaleFactor",&Urho3D::Billboard::screenScaleFactor_, "todo: var docstring")//float
;
}

void Implement_Urho3D_Ray(py::class_<Urho3D::Ray, Urho3D::ExternalPtr<Urho3D::Ray>>& pyclass_Var_Urho3D_Ray)
{
    // Class Ray Implementation
pyclass_Var_Urho3D_Ray
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Vector3 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Ray &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Ray(), "todo: docstring").def("__assign__", (Urho3D::Ray & (Urho3D::Ray::*)(const Urho3D::Ray &)) &Urho3D::Ray::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Ray']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Ray(), "todo: docstring")
    //['Urho3D::Ray']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Ray(), "todo: docstring")
    //['Urho3D::Ray']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Define", (void (Urho3D::Ray::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::Ray::Define, "todo: docstring", py::arg("origin"), py::arg("direction"))
  .def("Project", (Urho3D::Vector3 (Urho3D::Ray::*)(const Urho3D::Vector3 &) const) &Urho3D::Ray::Project, "todo: docstring", py::arg("point"))
  .def("Distance", (float (Urho3D::Ray::*)(const Urho3D::Vector3 &) const) &Urho3D::Ray::Distance, "todo: docstring", py::arg("point"))
  .def("ClosestPoint", (Urho3D::Vector3 (Urho3D::Ray::*)(const Urho3D::Ray &) const) &Urho3D::Ray::ClosestPoint, "todo: docstring", py::arg("ray"))
  .def("HitDistance", (float (Urho3D::Ray::*)(const Urho3D::Plane &) const) &Urho3D::Ray::HitDistance, "todo: docstring", py::arg("plane"))
  .def("HitDistance", (float (Urho3D::Ray::*)(const Urho3D::BoundingBox &) const) &Urho3D::Ray::HitDistance, "todo: docstring", py::arg("box"))
  .def("HitDistance", (float (Urho3D::Ray::*)(const Urho3D::Frustum &, bool) const) &Urho3D::Ray::HitDistance, "todo: docstring", py::arg("frustum"), py::arg("solidInside")=true)
  .def("HitDistance", (float (Urho3D::Ray::*)(const Urho3D::Sphere &) const) &Urho3D::Ray::HitDistance, "todo: docstring", py::arg("sphere"))
  .def("HitDistance", (float (Urho3D::Ray::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, Urho3D::Vector3 *, Urho3D::Vector3 *) const) &Urho3D::Ray::HitDistance, "todo: docstring", py::arg("v0"), py::arg("v1"), py::arg("v2"), py::arg("outNormal")=nullptr, py::arg("outBary")=nullptr)
  .def("HitDistance", (float (Urho3D::Ray::*)(const void *, unsigned int, unsigned int, unsigned int, Urho3D::Vector3 *, Urho3D::Vector2 *, unsigned int) const) &Urho3D::Ray::HitDistance, "todo: docstring", py::arg("vertexData"), py::arg("vertexStride"), py::arg("vertexStart"), py::arg("vertexCount"), py::arg("outNormal")=nullptr, py::arg("outUV")=nullptr, py::arg("uvOffset")=0)
  .def("HitDistance", (float (Urho3D::Ray::*)(const void *, unsigned int, const void *, unsigned int, unsigned int, unsigned int, Urho3D::Vector3 *, Urho3D::Vector2 *, unsigned int) const) &Urho3D::Ray::HitDistance, "todo: docstring", py::arg("vertexData"), py::arg("vertexStride"), py::arg("indexData"), py::arg("indexSize"), py::arg("indexStart"), py::arg("indexCount"), py::arg("outNormal")=nullptr, py::arg("outUV")=nullptr, py::arg("uvOffset")=0)
  .def("InsideGeometry", (bool (Urho3D::Ray::*)(const void *, unsigned int, unsigned int, unsigned int) const) &Urho3D::Ray::InsideGeometry, "todo: docstring", py::arg("vertexData"), py::arg("vertexSize"), py::arg("vertexStart"), py::arg("vertexCount"))
  .def("InsideGeometry", (bool (Urho3D::Ray::*)(const void *, unsigned int, const void *, unsigned int, unsigned int, unsigned int) const) &Urho3D::Ray::InsideGeometry, "todo: docstring", py::arg("vertexData"), py::arg("vertexSize"), py::arg("indexData"), py::arg("indexSize"), py::arg("indexStart"), py::arg("indexCount"))
  .def("Transformed", (Urho3D::Ray (Urho3D::Ray::*)(const Urho3D::Matrix3x4 &) const) &Urho3D::Ray::Transformed, "todo: docstring", py::arg("transform"))
// Class Variables:
  .def_readwrite("origin",&Urho3D::Ray::origin_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("direction",&Urho3D::Ray::direction_, "todo: var docstring")//Urho3D::Vector3
;
}

void Implement_Urho3D_RenderSurface(py::class_<Urho3D::RenderSurface, Urho3D::SharedPtr<Urho3D::RenderSurface>, Urho3D::RefCounted>& pyclass_Var_Urho3D_RenderSurface)
{
    // Class RenderSurface Implementation
pyclass_Var_Urho3D_RenderSurface
  .def(py::init<Urho3D::Texture *>(), "todo: constructor docstring")
  //.def("~RenderSurface", (void (Urho3D::RenderSurface::*)()) &Urho3D::RenderSurface::~RenderSurface, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetNumViewports", (void (Urho3D::RenderSurface::*)(unsigned int)) &Urho3D::RenderSurface::SetNumViewports, "todo: docstring", py::arg("num"))
  .def("SetViewport", (void (Urho3D::RenderSurface::*)(unsigned int, Urho3D::Viewport *)) &Urho3D::RenderSurface::SetViewport, "todo: docstring", py::arg("index"), py::arg("viewport"))
  .def("SetUpdateMode", (void (Urho3D::RenderSurface::*)(Urho3D::RenderSurfaceUpdateMode)) &Urho3D::RenderSurface::SetUpdateMode, "todo: docstring", py::arg("mode"))
  .def("SetLinkedRenderTarget", (void (Urho3D::RenderSurface::*)(Urho3D::RenderSurface *)) &Urho3D::RenderSurface::SetLinkedRenderTarget, "todo: docstring", py::arg("renderTarget"))
  .def("SetLinkedDepthStencil", (void (Urho3D::RenderSurface::*)(Urho3D::RenderSurface *)) &Urho3D::RenderSurface::SetLinkedDepthStencil, "todo: docstring", py::arg("depthStencil"))
  .def("QueueUpdate", (void (Urho3D::RenderSurface::*)()) &Urho3D::RenderSurface::QueueUpdate, "todo: docstring")
  .def("Release", (void (Urho3D::RenderSurface::*)()) &Urho3D::RenderSurface::Release, "todo: docstring")
  .def("OnDeviceLost", (void (Urho3D::RenderSurface::*)()) &Urho3D::RenderSurface::OnDeviceLost, "todo: docstring")
  .def("CreateRenderBuffer", (bool (Urho3D::RenderSurface::*)(unsigned int, unsigned int, unsigned int, int)) &Urho3D::RenderSurface::CreateRenderBuffer, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("format"), py::arg("multiSample"))
  .def("GetWidth", (int (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetWidth, "todo: docstring")
  .def("GetHeight", (int (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetHeight, "todo: docstring")
  .def("GetUsage", (Urho3D::TextureUsage (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetUsage, "todo: docstring")
  .def("GetMultiSample", (int (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetMultiSample, "todo: docstring")
  .def("GetAutoResolve", (bool (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetAutoResolve, "todo: docstring")
  .def("GetNumViewports", (unsigned int (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetNumViewports, "todo: docstring")
  .def("GetViewport", (Urho3D::Viewport * (Urho3D::RenderSurface::*)(unsigned int) const) &Urho3D::RenderSurface::GetViewport, "todo: docstring", py::arg("index"))
  .def("GetUpdateMode", (Urho3D::RenderSurfaceUpdateMode (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetUpdateMode, "todo: docstring")
  .def("GetLinkedRenderTarget", (Urho3D::RenderSurface * (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetLinkedRenderTarget, "todo: docstring")
  .def("GetLinkedDepthStencil", (Urho3D::RenderSurface * (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetLinkedDepthStencil, "todo: docstring")
  .def("IsUpdateQueued", (bool (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::IsUpdateQueued, "todo: docstring")
  .def("ResetUpdateQueued", (void (Urho3D::RenderSurface::*)()) &Urho3D::RenderSurface::ResetUpdateQueued, "todo: docstring")
  .def("GetParentTexture", (Urho3D::Texture * (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetParentTexture, "todo: docstring")
  .def("GetSurface", (void * (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetSurface, "todo: docstring")
  .def("GetRenderTargetView", (void * (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetRenderTargetView, "todo: docstring")
  .def("GetReadOnlyView", (void * (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetReadOnlyView, "todo: docstring")
  .def("GetTarget", (unsigned int (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetTarget, "todo: docstring")
  .def("GetRenderBuffer", (unsigned int (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::GetRenderBuffer, "todo: docstring")
  .def("IsResolveDirty", (bool (Urho3D::RenderSurface::*)() const) &Urho3D::RenderSurface::IsResolveDirty, "todo: docstring")
  .def("SetResolveDirty", (void (Urho3D::RenderSurface::*)(bool)) &Urho3D::RenderSurface::SetResolveDirty, "todo: docstring", py::arg("enable"))
// Class Variables:
;
}

void Implement_Urho3D_ShaderProgram(py::class_<Urho3D::ShaderProgram, Urho3D::SharedPtr<Urho3D::ShaderProgram>, Urho3D::RefCounted, Urho3D::GPUObject>& pyclass_Var_Urho3D_ShaderProgram)
{
    // Class ShaderProgram Implementation
pyclass_Var_Urho3D_ShaderProgram
  .def(py::init<Urho3D::Graphics *, Urho3D::ShaderVariation *, Urho3D::ShaderVariation *>(), "todo: constructor docstring")
  //.def("~ShaderProgram", (void (Urho3D::ShaderProgram::*)()) &Urho3D::ShaderProgram::~ShaderProgram, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnDeviceLost", (void (Urho3D::ShaderProgram::*)()) &Urho3D::ShaderProgram::OnDeviceLost, "todo: docstring")
  .def("Release", (void (Urho3D::ShaderProgram::*)()) &Urho3D::ShaderProgram::Release, "todo: docstring")
  .def("Link", (bool (Urho3D::ShaderProgram::*)()) &Urho3D::ShaderProgram::Link, "todo: docstring")
  .def("GetVertexShader", (Urho3D::ShaderVariation * (Urho3D::ShaderProgram::*)() const) &Urho3D::ShaderProgram::GetVertexShader, "todo: docstring")
  .def("GetPixelShader", (Urho3D::ShaderVariation * (Urho3D::ShaderProgram::*)() const) &Urho3D::ShaderProgram::GetPixelShader, "todo: docstring")
  .def("HasParameter", (bool (Urho3D::ShaderProgram::*)(Urho3D::StringHash) const) &Urho3D::ShaderProgram::HasParameter, "todo: docstring", py::arg("param"))
  .def("HasTextureUnit", (bool (Urho3D::ShaderProgram::*)(Urho3D::TextureUnit) const) &Urho3D::ShaderProgram::HasTextureUnit, "todo: docstring", py::arg("unit"))
  //.def("GetParameter", (const Urho3D::ShaderParameter * (Urho3D::ShaderProgram::*)(Urho3D::StringHash) const) &Urho3D::ShaderProgram::GetParameter, "todo: docstring", py::arg("param"))
    //['Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetLinkerOutput", (const Urho3D::String & (Urho3D::ShaderProgram::*)() const) &Urho3D::ShaderProgram::GetLinkerOutput, "todo: docstring")
  //.def("GetVertexAttributes", (const HashMap<Pair<unsigned char, unsigned char>, unsigned int> & (Urho3D::ShaderProgram::*)() const) &Urho3D::ShaderProgram::GetVertexAttributes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetUsedVertexAttributes", (unsigned int (Urho3D::ShaderProgram::*)() const) &Urho3D::ShaderProgram::GetUsedVertexAttributes, "todo: docstring")
  //.def("GetConstantBuffers", (const SharedPtr<Urho3D::ConstantBuffer> * (Urho3D::ShaderProgram::*)() const) &Urho3D::ShaderProgram::GetConstantBuffers, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("NeedParameterUpdate", (bool (Urho3D::ShaderProgram::*)(Urho3D::ShaderParameterGroup, const void *)) &Urho3D::ShaderProgram::NeedParameterUpdate, "todo: docstring", py::arg("group"), py::arg("source"))
  .def("ClearParameterSource", (void (Urho3D::ShaderProgram::*)(Urho3D::ShaderParameterGroup)) &Urho3D::ShaderProgram::ClearParameterSource, "todo: docstring", py::arg("group"))
// Class Variables:
;
}

void Implement_Urho3D_OctreeQuery(py::class_<Urho3D::OctreeQuery, Urho3D::ExternalPtr<Urho3D::OctreeQuery>>& pyclass_Var_Urho3D_OctreeQuery)
{
    // Class OctreeQuery Implementation
pyclass_Var_Urho3D_OctreeQuery
  //.def(py::init<Urho3D::PODVector<Urho3D::Drawable *> &, unsigned char, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::PODVector<Urho3D::Drawable', 'unsigned char', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
    // Abstract class OctreeQuery -> no init
  //.def("~OctreeQuery", (void (Urho3D::OctreeQuery::*)()) &Urho3D::OctreeQuery::~OctreeQuery, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def(py::init<const Urho3D::OctreeQuery &>(), "todo: constructor docstring")
    //['Urho3D::OctreeQuery']; op False, ctor True, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
    // Abstract class OctreeQuery -> no init
  //  .def(py::self = Urho3D::OctreeQuery(), "todo: docstring").def("__assign__", (Urho3D::OctreeQuery & (Urho3D::OctreeQuery::*)(const Urho3D::OctreeQuery &)) &Urho3D::OctreeQuery::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::OctreeQuery']; op =, ctor False, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
  .def("TestOctant", (Urho3D::Intersection (Urho3D::OctreeQuery::*)(const Urho3D::BoundingBox &, bool)) &Urho3D::OctreeQuery::TestOctant, "todo: docstring", py::arg("box"), py::arg("inside"))
  //.def("TestDrawables", (void (Urho3D::OctreeQuery::*)(Urho3D::Drawable **, Urho3D::Drawable **, bool)) &Urho3D::OctreeQuery::TestDrawables, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("inside"))
    //['Urho3D::Drawable', 'Urho3D::Drawable', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 2
// Class Variables:
  .def_readwrite("drawableFlags",&Urho3D::OctreeQuery::drawableFlags_, "todo: var docstring")//unsigned char
  .def_readwrite("viewMask",&Urho3D::OctreeQuery::viewMask_, "todo: var docstring")//unsigned int
;
}

void Implement_Urho3D_SphereOctreeQuery(py::class_<Urho3D::SphereOctreeQuery, Urho3D::ExternalPtr<Urho3D::SphereOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_SphereOctreeQuery)
{
    // Class SphereOctreeQuery Implementation
pyclass_Var_Urho3D_SphereOctreeQuery
  //.def(py::init<Urho3D::PODVector<Urho3D::Drawable *> &, const Urho3D::Sphere &, unsigned char, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::PODVector<Urho3D::Drawable', 'Urho3D::Sphere', 'unsigned char', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("TestOctant", (Urho3D::Intersection (Urho3D::SphereOctreeQuery::*)(const Urho3D::BoundingBox &, bool)) &Urho3D::SphereOctreeQuery::TestOctant, "todo: docstring", py::arg("box"), py::arg("inside"))
  //.def("TestDrawables", (void (Urho3D::SphereOctreeQuery::*)(Urho3D::Drawable **, Urho3D::Drawable **, bool)) &Urho3D::SphereOctreeQuery::TestDrawables, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("inside"))
    //['Urho3D::Drawable', 'Urho3D::Drawable', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 2
// Class Variables:
  .def_readwrite("sphere",&Urho3D::SphereOctreeQuery::sphere_, "todo: var docstring")//Urho3D::Sphere
;
}

void Implement_Urho3D_FrustumOctreeQuery(py::class_<Urho3D::FrustumOctreeQuery, Urho3D::ExternalPtr<Urho3D::FrustumOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_FrustumOctreeQuery)
{
    // Class FrustumOctreeQuery Implementation
pyclass_Var_Urho3D_FrustumOctreeQuery
  //.def(py::init<Urho3D::PODVector<Urho3D::Drawable *> &, const Urho3D::Frustum &, unsigned char, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::PODVector<Urho3D::Drawable', 'Urho3D::Frustum', 'unsigned char', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("TestOctant", (Urho3D::Intersection (Urho3D::FrustumOctreeQuery::*)(const Urho3D::BoundingBox &, bool)) &Urho3D::FrustumOctreeQuery::TestOctant, "todo: docstring", py::arg("box"), py::arg("inside"))
  //.def("TestDrawables", (void (Urho3D::FrustumOctreeQuery::*)(Urho3D::Drawable **, Urho3D::Drawable **, bool)) &Urho3D::FrustumOctreeQuery::TestDrawables, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("inside"))
    //['Urho3D::Drawable', 'Urho3D::Drawable', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 2
// Class Variables:
  .def_readwrite("frustum",&Urho3D::FrustumOctreeQuery::frustum_, "todo: var docstring")//Urho3D::Frustum
;
}

void Implement_Urho3D_AllContentOctreeQuery(py::class_<Urho3D::AllContentOctreeQuery, Urho3D::ExternalPtr<Urho3D::AllContentOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_AllContentOctreeQuery)
{
    // Class AllContentOctreeQuery Implementation
pyclass_Var_Urho3D_AllContentOctreeQuery
  //.def(py::init<Urho3D::PODVector<Urho3D::Drawable *> &, unsigned char, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::PODVector<Urho3D::Drawable', 'unsigned char', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("TestOctant", (Urho3D::Intersection (Urho3D::AllContentOctreeQuery::*)(const Urho3D::BoundingBox &, bool)) &Urho3D::AllContentOctreeQuery::TestOctant, "todo: docstring", py::arg("box"), py::arg("inside"))
  //.def("TestDrawables", (void (Urho3D::AllContentOctreeQuery::*)(Urho3D::Drawable **, Urho3D::Drawable **, bool)) &Urho3D::AllContentOctreeQuery::TestDrawables, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("inside"))
    //['Urho3D::Drawable', 'Urho3D::Drawable', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 2
// Class Variables:
;
}

void Implement_Urho3D_RenderTargetInfo(py::class_<Urho3D::RenderTargetInfo, Urho3D::ExternalPtr<Urho3D::RenderTargetInfo>>& pyclass_Var_Urho3D_RenderTargetInfo)
{
    // Class RenderTargetInfo Implementation
pyclass_Var_Urho3D_RenderTargetInfo
  .def("Load", (void (Urho3D::RenderTargetInfo::*)(const Urho3D::XMLElement &)) &Urho3D::RenderTargetInfo::Load, "todo: docstring", py::arg("element"))
// Class Variables:
  .def_readwrite("name",&Urho3D::RenderTargetInfo::name_, "todo: var docstring")//Urho3D::String
  .def_readwrite("tag",&Urho3D::RenderTargetInfo::tag_, "todo: var docstring")//Urho3D::String
  .def_readwrite("format",&Urho3D::RenderTargetInfo::format_, "todo: var docstring")//unsigned int
  .def_readwrite("size",&Urho3D::RenderTargetInfo::size_, "todo: var docstring")//Urho3D::Vector2
  .def_readwrite("sizeMode",&Urho3D::RenderTargetInfo::sizeMode_, "todo: var docstring")//Urho3D::RenderTargetSizeMode
  .def_readwrite("multiSample",&Urho3D::RenderTargetInfo::multiSample_, "todo: var docstring")//int
  .def_readwrite("autoResolve",&Urho3D::RenderTargetInfo::autoResolve_, "todo: var docstring")//bool
  .def_readwrite("enabled",&Urho3D::RenderTargetInfo::enabled_, "todo: var docstring")//bool
  .def_readwrite("cubemap",&Urho3D::RenderTargetInfo::cubemap_, "todo: var docstring")//bool
  .def_readwrite("filtered",&Urho3D::RenderTargetInfo::filtered_, "todo: var docstring")//bool
  .def_readwrite("sRGB",&Urho3D::RenderTargetInfo::sRGB_, "todo: var docstring")//bool
  .def_readwrite("persistent",&Urho3D::RenderTargetInfo::persistent_, "todo: var docstring")//bool
;
}

void Implement_Urho3D_RenderPath(py::class_<Urho3D::RenderPath, Urho3D::SharedPtr<Urho3D::RenderPath>, Urho3D::RefCounted>& pyclass_Var_Urho3D_RenderPath)
{
    // Class RenderPath Implementation
pyclass_Var_Urho3D_RenderPath
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~RenderPath", (void (Urho3D::RenderPath::*)()) &Urho3D::RenderPath::~RenderPath, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("Clone", (SharedPtr<Urho3D::RenderPath> (Urho3D::RenderPath::*)()) &Urho3D::RenderPath::Clone, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("Load", (bool (Urho3D::RenderPath::*)(Urho3D::XMLFile *)) &Urho3D::RenderPath::Load, "todo: docstring", py::arg("file"))
  .def("Append", (bool (Urho3D::RenderPath::*)(Urho3D::XMLFile *)) &Urho3D::RenderPath::Append, "todo: docstring", py::arg("file"))
  .def("SetEnabled", (void (Urho3D::RenderPath::*)(const Urho3D::String &, bool)) &Urho3D::RenderPath::SetEnabled, "todo: docstring", py::arg("tag"), py::arg("active"))
  .def("IsEnabled", (bool (Urho3D::RenderPath::*)(const Urho3D::String &) const) &Urho3D::RenderPath::IsEnabled, "todo: docstring", py::arg("tag"))
  .def("IsAdded", (bool (Urho3D::RenderPath::*)(const Urho3D::String &) const) &Urho3D::RenderPath::IsAdded, "todo: docstring", py::arg("tag"))
  .def("ToggleEnabled", (void (Urho3D::RenderPath::*)(const Urho3D::String &)) &Urho3D::RenderPath::ToggleEnabled, "todo: docstring", py::arg("tag"))
  .def("SetRenderTarget", (void (Urho3D::RenderPath::*)(unsigned int, const Urho3D::RenderTargetInfo &)) &Urho3D::RenderPath::SetRenderTarget, "todo: docstring", py::arg("index"), py::arg("info"))
  .def("AddRenderTarget", (void (Urho3D::RenderPath::*)(const Urho3D::RenderTargetInfo &)) &Urho3D::RenderPath::AddRenderTarget, "todo: docstring", py::arg("info"))
  .def("RemoveRenderTarget", (void (Urho3D::RenderPath::*)(unsigned int)) &Urho3D::RenderPath::RemoveRenderTarget, "todo: docstring", py::arg("index"))
  .def("RemoveRenderTarget", (void (Urho3D::RenderPath::*)(const Urho3D::String &)) &Urho3D::RenderPath::RemoveRenderTarget, "todo: docstring", py::arg("name"))
  .def("RemoveRenderTargets", (void (Urho3D::RenderPath::*)(const Urho3D::String &)) &Urho3D::RenderPath::RemoveRenderTargets, "todo: docstring", py::arg("tag"))
  .def("SetCommand", (void (Urho3D::RenderPath::*)(unsigned int, const Urho3D::RenderPathCommand &)) &Urho3D::RenderPath::SetCommand, "todo: docstring", py::arg("index"), py::arg("command"))
  .def("AddCommand", (void (Urho3D::RenderPath::*)(const Urho3D::RenderPathCommand &)) &Urho3D::RenderPath::AddCommand, "todo: docstring", py::arg("command"))
  .def("InsertCommand", (void (Urho3D::RenderPath::*)(unsigned int, const Urho3D::RenderPathCommand &)) &Urho3D::RenderPath::InsertCommand, "todo: docstring", py::arg("index"), py::arg("command"))
  .def("RemoveCommand", (void (Urho3D::RenderPath::*)(unsigned int)) &Urho3D::RenderPath::RemoveCommand, "todo: docstring", py::arg("index"))
  .def("RemoveCommands", (void (Urho3D::RenderPath::*)(const Urho3D::String &)) &Urho3D::RenderPath::RemoveCommands, "todo: docstring", py::arg("tag"))
  .def("SetShaderParameter", (void (Urho3D::RenderPath::*)(const Urho3D::String &, const Urho3D::Variant &)) &Urho3D::RenderPath::SetShaderParameter, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("GetNumRenderTargets", (unsigned int (Urho3D::RenderPath::*)() const) &Urho3D::RenderPath::GetNumRenderTargets, "todo: docstring")
  .def("GetNumCommands", (unsigned int (Urho3D::RenderPath::*)() const) &Urho3D::RenderPath::GetNumCommands, "todo: docstring")
  .def("GetCommand", (Urho3D::RenderPathCommand * (Urho3D::RenderPath::*)(unsigned int)) &Urho3D::RenderPath::GetCommand, "todo: docstring", py::arg("index"))
  .def("GetShaderParameter", (const Urho3D::Variant & (Urho3D::RenderPath::*)(const Urho3D::String &) const) &Urho3D::RenderPath::GetShaderParameter, "todo: docstring", py::arg("name"))
// Class Variables:
  .def_readwrite("renderTargets",&Urho3D::RenderPath::renderTargets_, "todo: var docstring")//Urho3D::Vector<Urho3D::RenderTargetInfo>
  .def_readwrite("commands",&Urho3D::RenderPath::commands_, "todo: var docstring")//Urho3D::Vector<Urho3D::RenderPathCommand>
;
}

void Implement_Urho3D_TrailPoint(py::class_<Urho3D::TrailPoint, Urho3D::ExternalPtr<Urho3D::TrailPoint>>& pyclass_Var_Urho3D_TrailPoint)
{
    // Class TrailPoint Implementation
pyclass_Var_Urho3D_TrailPoint
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Vector3 &>(), "todo: constructor docstring")
// Class Variables:
  .def_readwrite("position",&Urho3D::TrailPoint::position_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("forward",&Urho3D::TrailPoint::forward_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("parentPos",&Urho3D::TrailPoint::parentPos_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("elapsedLength",&Urho3D::TrailPoint::elapsedLength_, "todo: var docstring")//float
  .def_readwrite("lifetime",&Urho3D::TrailPoint::lifetime_, "todo: var docstring")//float
  .def_readwrite("sortDistance",&Urho3D::TrailPoint::sortDistance_, "todo: var docstring")//float
;
}

void Implement_Urho3D_Controls(py::class_<Urho3D::Controls, Urho3D::ExternalPtr<Urho3D::Controls>>& pyclass_Var_Urho3D_Controls)
{
    // Class Controls Implementation
pyclass_Var_Urho3D_Controls
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~Controls", (void (Urho3D::Controls::*)()) &Urho3D::Controls::~Controls, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Reset", (void (Urho3D::Controls::*)()) &Urho3D::Controls::Reset, "todo: docstring")
  .def("Set", (void (Urho3D::Controls::*)(unsigned int, bool)) &Urho3D::Controls::Set, "todo: docstring", py::arg("buttons"), py::arg("down")=true)
  .def("IsDown", (bool (Urho3D::Controls::*)(unsigned int) const) &Urho3D::Controls::IsDown, "todo: docstring", py::arg("button"))
  .def("IsPressed", (bool (Urho3D::Controls::*)(unsigned int, const Urho3D::Controls &) const) &Urho3D::Controls::IsPressed, "todo: docstring", py::arg("button"), py::arg("previousControls"))
// Class Variables:
  .def_readwrite("buttons",&Urho3D::Controls::buttons_, "todo: var docstring")//unsigned int
  .def_readwrite("yaw",&Urho3D::Controls::yaw_, "todo: var docstring")//float
  .def_readwrite("pitch",&Urho3D::Controls::pitch_, "todo: var docstring")//float
  .def_readwrite("extraData",&Urho3D::Controls::extraData_, "todo: var docstring")//Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>
;
}

void Implement_Urho3D_LuaFunction(py::class_<Urho3D::LuaFunction, Urho3D::SharedPtr<Urho3D::LuaFunction>, Urho3D::RefCounted>& pyclass_Var_Urho3D_LuaFunction)
{
    // Class LuaFunction Implementation
pyclass_Var_Urho3D_LuaFunction
  //.def(py::init<lua_State *, int>(), "todo: constructor docstring")
    //['lua_State', 'int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def(py::init<lua_State *, int (*)(lua_State *)>(), "todo: constructor docstring")
    //['lua_State', 'int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 2
  //.def("~LuaFunction", (void (Urho3D::LuaFunction::*)()) &Urho3D::LuaFunction::~LuaFunction, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("IsValid", (bool (Urho3D::LuaFunction::*)() const) &Urho3D::LuaFunction::IsValid, "todo: docstring")
  .def("BeginCall", (bool (Urho3D::LuaFunction::*)(const Urho3D::LuaScriptInstance *)) &Urho3D::LuaFunction::BeginCall, "todo: docstring", py::arg("instance")=nullptr)
  .def("EndCall", (bool (Urho3D::LuaFunction::*)(int)) &Urho3D::LuaFunction::EndCall, "todo: docstring", py::arg("numReturns")=0)
  .def("PushInt", (void (Urho3D::LuaFunction::*)(int)) &Urho3D::LuaFunction::PushInt, "todo: docstring", py::arg("value"))
  .def("PushBool", (void (Urho3D::LuaFunction::*)(bool)) &Urho3D::LuaFunction::PushBool, "todo: docstring", py::arg("value"))
  .def("PushFloat", (void (Urho3D::LuaFunction::*)(float)) &Urho3D::LuaFunction::PushFloat, "todo: docstring", py::arg("value"))
  .def("PushDouble", (void (Urho3D::LuaFunction::*)(double)) &Urho3D::LuaFunction::PushDouble, "todo: docstring", py::arg("value"))
  .def("PushString", (void (Urho3D::LuaFunction::*)(const Urho3D::String &)) &Urho3D::LuaFunction::PushString, "todo: docstring", py::arg("string"))
  .def("PushUserType", (void (Urho3D::LuaFunction::*)(void *, const char *)) &Urho3D::LuaFunction::PushUserType, "todo: docstring", py::arg("userType"), py::arg("typeName"))
  .def("PushVariant", (void (Urho3D::LuaFunction::*)(const Urho3D::Variant &, const char *)) &Urho3D::LuaFunction::PushVariant, "todo: docstring", py::arg("variant"), py::arg("asType")=nullptr)
  .def("PushLuaTable", (void (Urho3D::LuaFunction::*)(const char *)) &Urho3D::LuaFunction::PushLuaTable, "todo: docstring", py::arg("tableName"))
  .def("PushLuaTable", (void (Urho3D::LuaFunction::*)(const Urho3D::String &)) &Urho3D::LuaFunction::PushLuaTable, "todo: docstring", py::arg("tableName"))
  .def("GetFunctionRef", (int (Urho3D::LuaFunction::*)() const) &Urho3D::LuaFunction::GetFunctionRef, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_AreaAllocator(py::class_<Urho3D::AreaAllocator, Urho3D::ExternalPtr<Urho3D::AreaAllocator>>& pyclass_Var_Urho3D_AreaAllocator)
{
    // Class AreaAllocator Implementation
pyclass_Var_Urho3D_AreaAllocator
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<int, int, bool>(), "todo: constructor docstring")
  .def(py::init<int, int, int, int, bool>(), "todo: constructor docstring")
  .def("Reset", (void (Urho3D::AreaAllocator::*)(int, int, int, int, bool)) &Urho3D::AreaAllocator::Reset, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("maxWidth")=0, py::arg("maxHeight")=0, py::arg("fastMode")=true)
  .def("Allocate", (bool (Urho3D::AreaAllocator::*)(int, int, int &, int &)) &Urho3D::AreaAllocator::Allocate, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("x"), py::arg("y"))
  .def("GetWidth", (int (Urho3D::AreaAllocator::*)() const) &Urho3D::AreaAllocator::GetWidth, "todo: docstring")
  .def("GetHeight", (int (Urho3D::AreaAllocator::*)() const) &Urho3D::AreaAllocator::GetHeight, "todo: docstring")
  .def("GetFastMode", (bool (Urho3D::AreaAllocator::*)() const) &Urho3D::AreaAllocator::GetFastMode, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_NavBuildData(py::class_<Urho3D::NavBuildData, Urho3D::ExternalPtr<Urho3D::NavBuildData>>& pyclass_Var_Urho3D_NavBuildData)
{
    // Class NavBuildData Implementation
pyclass_Var_Urho3D_NavBuildData
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~NavBuildData", (void (Urho3D::NavBuildData::*)()) &Urho3D::NavBuildData::~NavBuildData, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("worldBoundingBox",&Urho3D::NavBuildData::worldBoundingBox_, "todo: var docstring")//Urho3D::BoundingBox
  .def_readwrite("vertices",&Urho3D::NavBuildData::vertices_, "todo: var docstring")//Urho3D::PODVector<Urho3D::Vector3>
  .def_readwrite("indices",&Urho3D::NavBuildData::indices_, "todo: var docstring")//Urho3D::PODVector<int>
  .def_readwrite("offMeshVertices",&Urho3D::NavBuildData::offMeshVertices_, "todo: var docstring")//Urho3D::PODVector<Urho3D::Vector3>
  .def_readwrite("offMeshRadii",&Urho3D::NavBuildData::offMeshRadii_, "todo: var docstring")//Urho3D::PODVector<float>
  .def_readwrite("offMeshFlags",&Urho3D::NavBuildData::offMeshFlags_, "todo: var docstring")//Urho3D::PODVector<unsigned short>
  .def_readwrite("offMeshAreas",&Urho3D::NavBuildData::offMeshAreas_, "todo: var docstring")//Urho3D::PODVector<unsigned char>
  .def_readwrite("offMeshDir",&Urho3D::NavBuildData::offMeshDir_, "todo: var docstring")//Urho3D::PODVector<unsigned char>
  .def_readwrite("navAreas",&Urho3D::NavBuildData::navAreas_, "todo: var docstring")//Urho3D::PODVector<Urho3D::NavAreaStub>
;
}

void Implement_Urho3D_NavAreaStub(py::class_<Urho3D::NavAreaStub, Urho3D::ExternalPtr<Urho3D::NavAreaStub>>& pyclass_Var_Urho3D_NavAreaStub)
{
    // Class NavAreaStub Implementation
pyclass_Var_Urho3D_NavAreaStub
// Class Variables:
  .def_readwrite("bounds",&Urho3D::NavAreaStub::bounds_, "todo: var docstring")//Urho3D::BoundingBox
  .def_readwrite("areaID",&Urho3D::NavAreaStub::areaID_, "todo: var docstring")//unsigned char
;
}

void Implement_Urho3D_SceneReplicationState(py::class_<Urho3D::SceneReplicationState, Urho3D::ExternalPtr<Urho3D::SceneReplicationState>, Urho3D::ReplicationState>& pyclass_Var_Urho3D_SceneReplicationState)
{
    // Class SceneReplicationState Implementation
pyclass_Var_Urho3D_SceneReplicationState
  .def("Clear", (void (Urho3D::SceneReplicationState::*)()) &Urho3D::SceneReplicationState::Clear, "todo: docstring")
// Class Variables:
  .def_readwrite("nodeStates",&Urho3D::SceneReplicationState::nodeStates_, "todo: var docstring")//Urho3D::HashMap<unsigned int, Urho3D::NodeReplicationState>
  .def_readwrite("dirtyNodes",&Urho3D::SceneReplicationState::dirtyNodes_, "todo: var docstring")//Urho3D::HashSet<unsigned int>
;
}

void Implement_Urho3D_PhysicsRaycastResult(py::class_<Urho3D::PhysicsRaycastResult, Urho3D::ExternalPtr<Urho3D::PhysicsRaycastResult>>& pyclass_Var_Urho3D_PhysicsRaycastResult)
{
    // Class PhysicsRaycastResult Implementation
pyclass_Var_Urho3D_PhysicsRaycastResult
  .def(py::self != Urho3D::PhysicsRaycastResult(), "todo: docstring")
    //['Urho3D::PhysicsRaycastResult']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("position",&Urho3D::PhysicsRaycastResult::position_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("normal",&Urho3D::PhysicsRaycastResult::normal_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("distance",&Urho3D::PhysicsRaycastResult::distance_, "todo: var docstring")//float
  .def_readwrite("hitFraction",&Urho3D::PhysicsRaycastResult::hitFraction_, "todo: var docstring")//float
;
}

void Implement_Urho3D_PListValue(py::class_<Urho3D::PListValue, Urho3D::ExternalPtr<Urho3D::PListValue>>& pyclass_Var_Urho3D_PListValue)
{
    // Class PListValue Implementation
pyclass_Var_Urho3D_PListValue
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<int>(), "todo: constructor docstring")
  .def(py::init<bool>(), "todo: constructor docstring")
  .def(py::init<float>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::String &>(), "todo: constructor docstring")
  //.def(py::init<Urho3D::HashMap<Urho3D::String, Urho3D::PListValue> &>(), "todo: constructor docstring")
    //['Urho3D::HashMap<Urho3D::String, Urho3D::PListValue>']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def(py::init<Urho3D::Vector<Urho3D::PListValue> &>(), "todo: constructor docstring")
    //['Urho3D::Vector<Urho3D::PListValue>']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def(py::init<const Urho3D::PListValue &>(), "todo: constructor docstring")
  //.def("~PListValue", (void (Urho3D::PListValue::*)()) &Urho3D::PListValue::~PListValue, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::PListValue(), "todo: docstring").def("__assign__", (Urho3D::PListValue & (Urho3D::PListValue::*)(const Urho3D::PListValue &)) &Urho3D::PListValue::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::PListValue']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetInt", (void (Urho3D::PListValue::*)(int)) &Urho3D::PListValue::SetInt, "todo: docstring", py::arg("value"))
  .def("SetBool", (void (Urho3D::PListValue::*)(bool)) &Urho3D::PListValue::SetBool, "todo: docstring", py::arg("value"))
  .def("SetFloat", (void (Urho3D::PListValue::*)(float)) &Urho3D::PListValue::SetFloat, "todo: docstring", py::arg("value"))
  .def("SetString", (void (Urho3D::PListValue::*)(const Urho3D::String &)) &Urho3D::PListValue::SetString, "todo: docstring", py::arg("value"))
  //.def("SetValueMap", (void (Urho3D::PListValue::*)(const Urho3D::HashMap<Urho3D::String, Urho3D::PListValue> &)) &Urho3D::PListValue::SetValueMap, "todo: docstring", py::arg("valueMap"))
    //['Urho3D::HashMap<Urho3D::String, Urho3D::PListValue>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("SetValueVector", (void (Urho3D::PListValue::*)(const Urho3D::Vector<Urho3D::PListValue> &)) &Urho3D::PListValue::SetValueVector, "todo: docstring", py::arg("valueVector"))
    //['Urho3D::Vector<Urho3D::PListValue>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetType", (Urho3D::PListValueType (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetType, "todo: docstring")
  .def("GetInt", (int (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetInt, "todo: docstring")
  .def("GetBool", (bool (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetBool, "todo: docstring")
  .def("GetFloat", (float (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetFloat, "todo: docstring")
  .def("GetString", (const Urho3D::String & (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetString, "todo: docstring")
  .def("GetIntRect", (Urho3D::IntRect (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetIntRect, "todo: docstring")
  .def("GetIntVector2", (Urho3D::IntVector2 (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetIntVector2, "todo: docstring")
  .def("GetIntVector3", (Urho3D::IntVector3 (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetIntVector3, "todo: docstring")
  //.def("GetValueMap", (const Urho3D::PListValueMap & (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetValueMap, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetValueVector", (const Urho3D::PListValueVector & (Urho3D::PListValue::*)() const) &Urho3D::PListValue::GetValueVector, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("ConvertToValueMap", (Urho3D::PListValueMap & (Urho3D::PListValue::*)()) &Urho3D::PListValue::ConvertToValueMap, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("ConvertToValueVector", (Urho3D::PListValueVector & (Urho3D::PListValue::*)()) &Urho3D::PListValue::ConvertToValueVector, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_FontFace(py::class_<Urho3D::FontFace, Urho3D::SharedPtr<Urho3D::FontFace>, Urho3D::RefCounted>& pyclass_Var_Urho3D_FontFace)
{
    // Class FontFace Implementation
pyclass_Var_Urho3D_FontFace
  //.def(py::init<Urho3D::Font *>(), "todo: constructor docstring")
    // Abstract class FontFace -> no init
  //.def("~FontFace", (void (Urho3D::FontFace::*)()) &Urho3D::FontFace::~FontFace, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Load", (bool (Urho3D::FontFace::*)(const unsigned char *, unsigned int, float)) &Urho3D::FontFace::Load, "todo: docstring", py::arg("fontData"), py::arg("fontDataSize"), py::arg("pointSize"))
  .def("GetGlyph", (const Urho3D::FontGlyph * (Urho3D::FontFace::*)(unsigned int)) &Urho3D::FontFace::GetGlyph, "todo: docstring", py::arg("c"))
  .def("HasMutableGlyphs", (bool (Urho3D::FontFace::*)() const) &Urho3D::FontFace::HasMutableGlyphs, "todo: docstring")
  .def("GetKerning", (float (Urho3D::FontFace::*)(unsigned int, unsigned int) const) &Urho3D::FontFace::GetKerning, "todo: docstring", py::arg("c"), py::arg("d"))
  .def("IsDataLost", (bool (Urho3D::FontFace::*)() const) &Urho3D::FontFace::IsDataLost, "todo: docstring")
  .def("GetPointSize", (float (Urho3D::FontFace::*)() const) &Urho3D::FontFace::GetPointSize, "todo: docstring")
  .def("GetRowHeight", (float (Urho3D::FontFace::*)() const) &Urho3D::FontFace::GetRowHeight, "todo: docstring")
  //.def("GetTextures", (const Vector<SharedPtr<Urho3D::Texture2D> > & (Urho3D::FontFace::*)() const) &Urho3D::FontFace::GetTextures, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_FontFaceBitmap(py::class_<Urho3D::FontFaceBitmap, Urho3D::SharedPtr<Urho3D::FontFaceBitmap>, Urho3D::FontFace>& pyclass_Var_Urho3D_FontFaceBitmap)
{
    // Class FontFaceBitmap Implementation
pyclass_Var_Urho3D_FontFaceBitmap
  .def(py::init<Urho3D::Font *>(), "todo: constructor docstring")
  //.def("~FontFaceBitmap", (void (Urho3D::FontFaceBitmap::*)()) &Urho3D::FontFaceBitmap::~FontFaceBitmap, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Load", (bool (Urho3D::FontFaceBitmap::*)(const unsigned char *, unsigned int, float)) &Urho3D::FontFaceBitmap::Load, "todo: docstring", py::arg("fontData"), py::arg("fontDataSize"), py::arg("pointSize"))
  .def("Load", (bool (Urho3D::FontFaceBitmap::*)(Urho3D::FontFace *, bool)) &Urho3D::FontFaceBitmap::Load, "todo: docstring", py::arg("fontFace"), py::arg("usedGlyphs"))
  .def("Save", (bool (Urho3D::FontFaceBitmap::*)(Urho3D::Serializer &, int, const Urho3D::String &)) &Urho3D::FontFaceBitmap::Save, "todo: docstring", py::arg("dest"), py::arg("pointSize"), py::arg("indentation")="\t")
// Class Variables:
;
}

void Implement_Urho3D_PhysicsRaycastResult2D(py::class_<Urho3D::PhysicsRaycastResult2D, Urho3D::ExternalPtr<Urho3D::PhysicsRaycastResult2D>>& pyclass_Var_Urho3D_PhysicsRaycastResult2D)
{
    // Class PhysicsRaycastResult2D Implementation
pyclass_Var_Urho3D_PhysicsRaycastResult2D
  .def(py::self != Urho3D::PhysicsRaycastResult2D(), "todo: docstring")
    //['Urho3D::PhysicsRaycastResult2D']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("position",&Urho3D::PhysicsRaycastResult2D::position_, "todo: var docstring")//Urho3D::Vector2
  .def_readwrite("normal",&Urho3D::PhysicsRaycastResult2D::normal_, "todo: var docstring")//Urho3D::Vector2
  .def_readwrite("distance",&Urho3D::PhysicsRaycastResult2D::distance_, "todo: var docstring")//float
;
}

void Implement_Urho3D_TileMapInfo2D(py::class_<Urho3D::TileMapInfo2D, Urho3D::ExternalPtr<Urho3D::TileMapInfo2D>>& pyclass_Var_Urho3D_TileMapInfo2D)
{
    // Class TileMapInfo2D Implementation
pyclass_Var_Urho3D_TileMapInfo2D
  .def("GetMapWidth", (float (Urho3D::TileMapInfo2D::*)() const) &Urho3D::TileMapInfo2D::GetMapWidth, "todo: docstring")
  .def("GetMapHeight", (float (Urho3D::TileMapInfo2D::*)() const) &Urho3D::TileMapInfo2D::GetMapHeight, "todo: docstring")
  .def("ConvertPosition", (Urho3D::Vector2 (Urho3D::TileMapInfo2D::*)(const Urho3D::Vector2 &) const) &Urho3D::TileMapInfo2D::ConvertPosition, "todo: docstring", py::arg("position"))
  .def("TileIndexToPosition", (Urho3D::Vector2 (Urho3D::TileMapInfo2D::*)(int, int) const) &Urho3D::TileMapInfo2D::TileIndexToPosition, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("PositionToTileIndex", (bool (Urho3D::TileMapInfo2D::*)(int &, int &, const Urho3D::Vector2 &) const) &Urho3D::TileMapInfo2D::PositionToTileIndex, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("position"))
// Class Variables:
  .def_readwrite("orientation",&Urho3D::TileMapInfo2D::orientation_, "todo: var docstring")//Urho3D::Orientation2D
  .def_readwrite("width",&Urho3D::TileMapInfo2D::width_, "todo: var docstring")//int
  .def_readwrite("height",&Urho3D::TileMapInfo2D::height_, "todo: var docstring")//int
  .def_readwrite("tileWidth",&Urho3D::TileMapInfo2D::tileWidth_, "todo: var docstring")//float
  .def_readwrite("tileHeight",&Urho3D::TileMapInfo2D::tileHeight_, "todo: var docstring")//float
;
}

void Implement_Urho3D_Tile2D(py::class_<Urho3D::Tile2D, Urho3D::SharedPtr<Urho3D::Tile2D>, Urho3D::RefCounted>& pyclass_Var_Urho3D_Tile2D)
{
    // Class Tile2D Implementation
pyclass_Var_Urho3D_Tile2D
  .def(py::init<>(), "todo: constructor docstring")
  .def("GetGid", (unsigned int (Urho3D::Tile2D::*)() const) &Urho3D::Tile2D::GetGid, "todo: docstring")
  .def("GetFlipX", (bool (Urho3D::Tile2D::*)() const) &Urho3D::Tile2D::GetFlipX, "todo: docstring")
  .def("GetFlipY", (bool (Urho3D::Tile2D::*)() const) &Urho3D::Tile2D::GetFlipY, "todo: docstring")
  .def("GetSwapXY", (bool (Urho3D::Tile2D::*)() const) &Urho3D::Tile2D::GetSwapXY, "todo: docstring")
  .def("GetSprite", (Urho3D::Sprite2D * (Urho3D::Tile2D::*)() const) &Urho3D::Tile2D::GetSprite, "todo: docstring")
  .def("HasProperty", (bool (Urho3D::Tile2D::*)(const Urho3D::String &) const) &Urho3D::Tile2D::HasProperty, "todo: docstring", py::arg("name"))
  .def("GetProperty", (const Urho3D::String & (Urho3D::Tile2D::*)(const Urho3D::String &) const) &Urho3D::Tile2D::GetProperty, "todo: docstring", py::arg("name"))
// Class Variables:
;
}

void Implement_Urho3D_ListBase(py::class_<Urho3D::ListBase, Urho3D::ExternalPtr<Urho3D::ListBase>>& pyclass_Var_Urho3D_ListBase)
{
    // Class ListBase Implementation
pyclass_Var_Urho3D_ListBase
  .def(py::init<>(), "todo: constructor docstring")
  .def("Swap", (void (Urho3D::ListBase::*)(Urho3D::ListBase &)) &Urho3D::ListBase::Swap, "todo: docstring", py::arg("rhs"))
// Class Variables:
;
}

void Implement_Urho3D_StringHash(py::class_<Urho3D::StringHash, Urho3D::ExternalPtr<Urho3D::StringHash>>& pyclass_Var_Urho3D_StringHash)
{
    // Class StringHash Implementation
pyclass_Var_Urho3D_StringHash
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::StringHash &>(), "todo: constructor docstring")
  .def(py::init<unsigned int>(), "todo: constructor docstring")
  .def(py::init<const char *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::String &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::StringHash(), "todo: docstring").def("__assign__", (Urho3D::StringHash & (Urho3D::StringHash::*)(const Urho3D::StringHash &)) &Urho3D::StringHash::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::StringHash']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::StringHash(), "todo: docstring")
    //['Urho3D::StringHash']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::StringHash(), "todo: docstring")
    //['Urho3D::StringHash']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::StringHash(), "todo: docstring")
    //['Urho3D::StringHash']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::StringHash(), "todo: docstring")
    //['Urho3D::StringHash']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self < Urho3D::StringHash(), "todo: docstring")
    //['Urho3D::StringHash']; op <, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self > Urho3D::StringHash(), "todo: docstring")
    //['Urho3D::StringHash']; op >, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Value", (unsigned int (Urho3D::StringHash::*)() const) &Urho3D::StringHash::Value, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::StringHash::*)() const) &Urho3D::StringHash::ToString, "todo: docstring")
  .def("Reverse", (Urho3D::String (Urho3D::StringHash::*)() const) &Urho3D::StringHash::Reverse, "todo: docstring")
  .def("ToHash", (unsigned int (Urho3D::StringHash::*)() const) &Urho3D::StringHash::ToHash, "todo: docstring")
// Class Variables:
  .def_readonly_static("ZERO",&Urho3D::StringHash::ZERO, "todo: var docstring")//const Urho3D::StringHash
;
}

void Implement_Urho3D_Mutex(py::class_<Urho3D::Mutex, Urho3D::ExternalPtr<Urho3D::Mutex>>& pyclass_Var_Urho3D_Mutex)
{
    // Class Mutex Implementation
pyclass_Var_Urho3D_Mutex
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~Mutex", (void (Urho3D::Mutex::*)()) &Urho3D::Mutex::~Mutex, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Acquire", (void (Urho3D::Mutex::*)()) &Urho3D::Mutex::Acquire, "todo: docstring")
  .def("TryAcquire", (bool (Urho3D::Mutex::*)()) &Urho3D::Mutex::TryAcquire, "todo: docstring")
  .def("Release", (void (Urho3D::Mutex::*)()) &Urho3D::Mutex::Release, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_IntVector2(py::class_<Urho3D::IntVector2, Urho3D::ExternalPtr<Urho3D::IntVector2>>& pyclass_Var_Urho3D_IntVector2)
{
    // Class IntVector2 Implementation
pyclass_Var_Urho3D_IntVector2
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<int, int>(), "todo: constructor docstring")
  .def(py::init<const int *>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::IntVector2 &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::IntVector2(), "todo: docstring").def("__assign__", (Urho3D::IntVector2 & (Urho3D::IntVector2::*)(const Urho3D::IntVector2 &)) &Urho3D::IntVector2::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::IntVector2']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(-py::self, "todo: docstring")
    //[]; op -@, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * int(), "todo: docstring")
    //['int']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / int(), "todo: docstring")
    //['int']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self -= Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op -=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= int(), "todo: docstring")
    //['int']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= int(), "todo: docstring")
    //['int']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Data", (const int * (Urho3D::IntVector2::*)() const) &Urho3D::IntVector2::Data, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::IntVector2::*)() const) &Urho3D::IntVector2::ToString, "todo: docstring")
  .def("ToHash", (unsigned int (Urho3D::IntVector2::*)() const) &Urho3D::IntVector2::ToHash, "todo: docstring")
  .def("Length", (float (Urho3D::IntVector2::*)() const) &Urho3D::IntVector2::Length, "todo: docstring")
// External Operators:
  .def(int() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("x",&Urho3D::IntVector2::x_, "todo: var docstring")//int
  .def_readwrite("y",&Urho3D::IntVector2::y_, "todo: var docstring")//int
  .def_readonly_static("ZERO",&Urho3D::IntVector2::ZERO, "todo: var docstring")//const Urho3D::IntVector2
  .def_readonly_static("LEFT",&Urho3D::IntVector2::LEFT, "todo: var docstring")//const Urho3D::IntVector2
  .def_readonly_static("RIGHT",&Urho3D::IntVector2::RIGHT, "todo: var docstring")//const Urho3D::IntVector2
  .def_readonly_static("UP",&Urho3D::IntVector2::UP, "todo: var docstring")//const Urho3D::IntVector2
  .def_readonly_static("DOWN",&Urho3D::IntVector2::DOWN, "todo: var docstring")//const Urho3D::IntVector2
  .def_readonly_static("ONE",&Urho3D::IntVector2::ONE, "todo: var docstring")//const Urho3D::IntVector2
;
}

void Implement_Urho3D_Vector4(py::class_<Urho3D::Vector4, Urho3D::ExternalPtr<Urho3D::Vector4>>& pyclass_Var_Urho3D_Vector4)
{
    // Class Vector4 Implementation
pyclass_Var_Urho3D_Vector4
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector4 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, float>(), "todo: constructor docstring")
  .def(py::init<float, float, float, float>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Vector4(), "todo: docstring").def("__assign__", (Urho3D::Vector4 & (Urho3D::Vector4::*)(const Urho3D::Vector4 &)) &Urho3D::Vector4::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Vector4']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(-py::self, "todo: docstring")
    //[]; op -@, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / float(), "todo: docstring")
    //['float']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self -= Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op -=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= float(), "todo: docstring")
    //['float']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= float(), "todo: docstring")
    //['float']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(float operator[](unsigned int index=None), "todo: docstring").def("__index__", (float (Urho3D::Vector4::*)(unsigned int) const) &Urho3D::Vector4::operator[], py::operator, "todo: operator docstring. Switch to py: :self ops.")
//Unhandled call style []     //['unsigned int']; op [], ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(float & operator[](unsigned int index=None), "todo: docstring").def("__index__", (float & (Urho3D::Vector4::*)(unsigned int)) &Urho3D::Vector4::operator[], py::operator, "todo: operator docstring. Switch to py: :self ops.")
//Unhandled call style []     //['unsigned int']; op [], ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("DotProduct", (float (Urho3D::Vector4::*)(const Urho3D::Vector4 &) const) &Urho3D::Vector4::DotProduct, "todo: docstring", py::arg("rhs"))
  .def("AbsDotProduct", (float (Urho3D::Vector4::*)(const Urho3D::Vector4 &) const) &Urho3D::Vector4::AbsDotProduct, "todo: docstring", py::arg("rhs"))
  .def("ProjectOntoAxis", (float (Urho3D::Vector4::*)(const Urho3D::Vector3 &) const) &Urho3D::Vector4::ProjectOntoAxis, "todo: docstring", py::arg("axis"))
  .def("Abs", (Urho3D::Vector4 (Urho3D::Vector4::*)() const) &Urho3D::Vector4::Abs, "todo: docstring")
  .def("Lerp", (Urho3D::Vector4 (Urho3D::Vector4::*)(const Urho3D::Vector4 &, float) const) &Urho3D::Vector4::Lerp, "todo: docstring", py::arg("rhs"), py::arg("t"))
  .def("Equals", (bool (Urho3D::Vector4::*)(const Urho3D::Vector4 &) const) &Urho3D::Vector4::Equals, "todo: docstring", py::arg("rhs"))
  .def("IsNaN", (bool (Urho3D::Vector4::*)() const) &Urho3D::Vector4::IsNaN, "todo: docstring")
  .def("Data", (const float * (Urho3D::Vector4::*)() const) &Urho3D::Vector4::Data, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::Vector4::*)() const) &Urho3D::Vector4::ToString, "todo: docstring")
  .def("ToHash", (unsigned int (Urho3D::Vector4::*)() const) &Urho3D::Vector4::ToHash, "todo: docstring")
// External Operators:
  .def(float() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("x",&Urho3D::Vector4::x_, "todo: var docstring")//float
  .def_readwrite("y",&Urho3D::Vector4::y_, "todo: var docstring")//float
  .def_readwrite("z",&Urho3D::Vector4::z_, "todo: var docstring")//float
  .def_readwrite("w",&Urho3D::Vector4::w_, "todo: var docstring")//float
  .def_readonly_static("ZERO",&Urho3D::Vector4::ZERO, "todo: var docstring")//const Urho3D::Vector4
  .def_readonly_static("ONE",&Urho3D::Vector4::ONE, "todo: var docstring")//const Urho3D::Vector4
;
}

void Implement_Urho3D_Matrix3x4(py::class_<Urho3D::Matrix3x4, Urho3D::ExternalPtr<Urho3D::Matrix3x4>>& pyclass_Var_Urho3D_Matrix3x4)
{
    // Class Matrix3x4 Implementation
pyclass_Var_Urho3D_Matrix3x4
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix3x4 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix3 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix4 &>(), "todo: constructor docstring")
  .def(py::init<float, float, float, float, float, float, float, float, float, float, float, float>(), "todo: constructor docstring")
  .def(py::init<const float *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Quaternion &, float>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Quaternion &, const Urho3D::Vector3 &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::Matrix3x4(), "todo: docstring").def("__assign__", (Urho3D::Matrix3x4 & (Urho3D::Matrix3x4::*)(const Urho3D::Matrix3x4 &)) &Urho3D::Matrix3x4::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix3x4']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Matrix3(), "todo: docstring").def("__assign__", (Urho3D::Matrix3x4 & (Urho3D::Matrix3x4::*)(const Urho3D::Matrix3 &)) &Urho3D::Matrix3x4::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix3']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Matrix4(), "todo: docstring").def("__assign__", (Urho3D::Matrix3x4 & (Urho3D::Matrix3x4::*)(const Urho3D::Matrix4 &)) &Urho3D::Matrix3x4::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix4']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Matrix3x4(), "todo: docstring")
    //['Urho3D::Matrix3x4']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Matrix3x4(), "todo: docstring")
    //['Urho3D::Matrix3x4']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::Matrix3x4(), "todo: docstring")
    //['Urho3D::Matrix3x4']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::Matrix3x4(), "todo: docstring")
    //['Urho3D::Matrix3x4']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * float(), "todo: docstring")
    //['float']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Matrix3x4(), "todo: docstring")
    //['Urho3D::Matrix3x4']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::Matrix4(), "todo: docstring")
    //['Urho3D::Matrix4']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetTranslation", (void (Urho3D::Matrix3x4::*)(const Urho3D::Vector3 &)) &Urho3D::Matrix3x4::SetTranslation, "todo: docstring", py::arg("translation"))
  .def("SetRotation", (void (Urho3D::Matrix3x4::*)(const Urho3D::Matrix3 &)) &Urho3D::Matrix3x4::SetRotation, "todo: docstring", py::arg("rotation"))
  .def("SetScale", (void (Urho3D::Matrix3x4::*)(const Urho3D::Vector3 &)) &Urho3D::Matrix3x4::SetScale, "todo: docstring", py::arg("scale"))
  .def("SetScale", (void (Urho3D::Matrix3x4::*)(float)) &Urho3D::Matrix3x4::SetScale, "todo: docstring", py::arg("scale"))
  .def("ToMatrix3", (Urho3D::Matrix3 (Urho3D::Matrix3x4::*)() const) &Urho3D::Matrix3x4::ToMatrix3, "todo: docstring")
  .def("ToMatrix4", (Urho3D::Matrix4 (Urho3D::Matrix3x4::*)() const) &Urho3D::Matrix3x4::ToMatrix4, "todo: docstring")
  .def("RotationMatrix", (Urho3D::Matrix3 (Urho3D::Matrix3x4::*)() const) &Urho3D::Matrix3x4::RotationMatrix, "todo: docstring")
  .def("Translation", (Urho3D::Vector3 (Urho3D::Matrix3x4::*)() const) &Urho3D::Matrix3x4::Translation, "todo: docstring")
  .def("Rotation", (Urho3D::Quaternion (Urho3D::Matrix3x4::*)() const) &Urho3D::Matrix3x4::Rotation, "todo: docstring")
  .def("Scale", (Urho3D::Vector3 (Urho3D::Matrix3x4::*)() const) &Urho3D::Matrix3x4::Scale, "todo: docstring")
  .def("SignedScale", (Urho3D::Vector3 (Urho3D::Matrix3x4::*)(const Urho3D::Matrix3 &) const) &Urho3D::Matrix3x4::SignedScale, "todo: docstring", py::arg("rotation"))
  .def("Equals", (bool (Urho3D::Matrix3x4::*)(const Urho3D::Matrix3x4 &) const) &Urho3D::Matrix3x4::Equals, "todo: docstring", py::arg("rhs"))
  .def("Decompose", (void (Urho3D::Matrix3x4::*)(Urho3D::Vector3 &, Urho3D::Quaternion &, Urho3D::Vector3 &) const) &Urho3D::Matrix3x4::Decompose, "todo: docstring", py::arg("translation"), py::arg("rotation"), py::arg("scale"))
  .def("Inverse", (Urho3D::Matrix3x4 (Urho3D::Matrix3x4::*)() const) &Urho3D::Matrix3x4::Inverse, "todo: docstring")
  .def("Data", (const float * (Urho3D::Matrix3x4::*)() const) &Urho3D::Matrix3x4::Data, "todo: docstring")
  .def("Element", (float (Urho3D::Matrix3x4::*)(unsigned int, unsigned int) const) &Urho3D::Matrix3x4::Element, "todo: docstring", py::arg("i"), py::arg("j"))
  .def("Row", (Urho3D::Vector4 (Urho3D::Matrix3x4::*)(unsigned int) const) &Urho3D::Matrix3x4::Row, "todo: docstring", py::arg("i"))
  .def("Column", (Urho3D::Vector3 (Urho3D::Matrix3x4::*)(unsigned int) const) &Urho3D::Matrix3x4::Column, "todo: docstring", py::arg("j"))
  .def("ToString", (Urho3D::String (Urho3D::Matrix3x4::*)() const) &Urho3D::Matrix3x4::ToString, "todo: docstring")
// External Operators:
  .def(float() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("m00",&Urho3D::Matrix3x4::m00_, "todo: var docstring")//float
  .def_readwrite("m01",&Urho3D::Matrix3x4::m01_, "todo: var docstring")//float
  .def_readwrite("m02",&Urho3D::Matrix3x4::m02_, "todo: var docstring")//float
  .def_readwrite("m03",&Urho3D::Matrix3x4::m03_, "todo: var docstring")//float
  .def_readwrite("m10",&Urho3D::Matrix3x4::m10_, "todo: var docstring")//float
  .def_readwrite("m11",&Urho3D::Matrix3x4::m11_, "todo: var docstring")//float
  .def_readwrite("m12",&Urho3D::Matrix3x4::m12_, "todo: var docstring")//float
  .def_readwrite("m13",&Urho3D::Matrix3x4::m13_, "todo: var docstring")//float
  .def_readwrite("m20",&Urho3D::Matrix3x4::m20_, "todo: var docstring")//float
  .def_readwrite("m21",&Urho3D::Matrix3x4::m21_, "todo: var docstring")//float
  .def_readwrite("m22",&Urho3D::Matrix3x4::m22_, "todo: var docstring")//float
  .def_readwrite("m23",&Urho3D::Matrix3x4::m23_, "todo: var docstring")//float
  .def_readonly_static("ZERO",&Urho3D::Matrix3x4::ZERO, "todo: var docstring")//const Urho3D::Matrix3x4
  .def_readonly_static("IDENTITY",&Urho3D::Matrix3x4::IDENTITY, "todo: var docstring")//const Urho3D::Matrix3x4
;
}

void Implement_Urho3D_Variant(py::class_<Urho3D::Variant, Urho3D::ExternalPtr<Urho3D::Variant>>& pyclass_Var_Urho3D_Variant)
{
    // Class Variant Implementation
pyclass_Var_Urho3D_Variant
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<int>(), "todo: constructor docstring")
  .def(py::init<long long>(), "todo: constructor docstring")
  .def(py::init<unsigned int>(), "todo: constructor docstring")
  .def(py::init<unsigned long long>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::StringHash &>(), "todo: constructor docstring")
  .def(py::init<bool>(), "todo: constructor docstring")
  .def(py::init<float>(), "todo: constructor docstring")
  .def(py::init<double>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector2 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector4 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Quaternion &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Color &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::String &>(), "todo: constructor docstring")
  .def(py::init<const char *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::PODVector<unsigned char> &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::VectorBuffer &>(), "todo: constructor docstring")
  .def(py::init<void *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::ResourceRef &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::ResourceRefList &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector<Urho3D::Variant> &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector<Urho3D::String> &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Rect &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::IntRect &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::IntVector2 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::IntVector3 &>(), "todo: constructor docstring")
  .def(py::init<Urho3D::RefCounted *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix3 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix3x4 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Matrix4 &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::String &, const Urho3D::String &>(), "todo: constructor docstring")
  .def(py::init<Urho3D::VariantType, const Urho3D::String &>(), "todo: constructor docstring")
  .def(py::init<const char *, const char *>(), "todo: constructor docstring")
  .def(py::init<Urho3D::VariantType, const char *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Variant &>(), "todo: constructor docstring")
  //.def("~Variant", (void (Urho3D::Variant::*)()) &Urho3D::Variant::~Variant, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Clear", (void (Urho3D::Variant::*)()) &Urho3D::Variant::Clear, "todo: docstring")
  //  .def(py::self = Urho3D::Variant(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Variant &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Variant']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = int(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(int)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['int']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = longlong(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(long long)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['long long']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = unsignedlonglong(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(unsigned long long)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['unsigned long long']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = unsignedint(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(unsigned int)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['unsigned int']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::StringHash(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::StringHash &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::StringHash']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = bool(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(bool)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['bool']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = float(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(float)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['float']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = double(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(double)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['double']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Vector2(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Vector2 &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Vector2']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Vector3(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Vector3 &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Vector3']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Vector4(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Vector4 &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Vector4']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Quaternion(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Quaternion &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Quaternion']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Color(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Color &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Color']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::String(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::String &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::String']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = (char *)(0), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const char *)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['char']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 1
  //  .def(py::self = Urho3D::PODVector<unsigned char>(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::PODVector<unsigned char>']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::VectorBuffer(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::VectorBuffer &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::VectorBuffer']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = (void *)(0), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(void *)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['void']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 1
  //  .def(py::self = Urho3D::ResourceRef(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::ResourceRef &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::ResourceRef']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::ResourceRefList(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::ResourceRefList &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::ResourceRefList']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Vector<Urho3D::Variant>(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Vector<Urho3D::Variant>']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Vector<Urho3D::String>(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Vector<Urho3D::String>']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Rect(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Rect &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Rect']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::IntRect(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::IntRect &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::IntRect']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::IntVector2(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::IntVector2 &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::IntVector2']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::IntVector3(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::IntVector3 &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::IntVector3']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = (Urho3D::RefCounted *)(0), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(Urho3D::RefCounted *)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::RefCounted']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 1
  //  .def(py::self = Urho3D::Matrix3(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Matrix3 &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix3']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Matrix3x4(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Matrix3x4 &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix3x4']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::Matrix4(), "todo: docstring").def("__assign__", (Urho3D::Variant & (Urho3D::Variant::*)(const Urho3D::Matrix4 &)) &Urho3D::Variant::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::Matrix4']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Variant(), "todo: docstring")
    //['Urho3D::Variant']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == int(), "todo: docstring")
    //['int']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == unsignedint(), "todo: docstring")
    //['unsigned int']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == longlong(), "todo: docstring")
    //['long long']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == unsignedlonglong(), "todo: docstring")
    //['unsigned long long']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == bool(), "todo: docstring")
    //['bool']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == float(), "todo: docstring")
    //['float']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == double(), "todo: docstring")
    //['double']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Quaternion(), "todo: docstring")
    //['Urho3D::Quaternion']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Color(), "todo: docstring")
    //['Urho3D::Color']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::String(), "todo: docstring")
    //['Urho3D::String']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::PODVector<unsigned char>(), "todo: docstring")
    //['Urho3D::PODVector<unsigned char>']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::VectorBuffer(), "todo: docstring")
    //['Urho3D::VectorBuffer']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == (void *)(0), "todo: docstring")
    //['void']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 1
  .def(py::self == Urho3D::ResourceRef(), "todo: docstring")
    //['Urho3D::ResourceRef']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::ResourceRefList(), "todo: docstring")
    //['Urho3D::ResourceRefList']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Vector<Urho3D::Variant>(), "todo: docstring")
    //['Urho3D::Vector<Urho3D::Variant>']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Vector<Urho3D::String>(), "todo: docstring")
    //['Urho3D::Vector<Urho3D::String>']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>(), "todo: docstring")
    //['Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Rect(), "todo: docstring")
    //['Urho3D::Rect']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::IntRect(), "todo: docstring")
    //['Urho3D::IntRect']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::StringHash(), "todo: docstring")
    //['Urho3D::StringHash']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == (Urho3D::RefCounted *)(0), "todo: docstring")
    //['Urho3D::RefCounted']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 1
  .def(py::self == Urho3D::Matrix3(), "todo: docstring")
    //['Urho3D::Matrix3']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Matrix3x4(), "todo: docstring")
    //['Urho3D::Matrix3x4']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::Matrix4(), "todo: docstring")
    //['Urho3D::Matrix4']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Variant(), "todo: docstring")
    //['Urho3D::Variant']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != int(), "todo: docstring")
    //['int']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != unsignedint(), "todo: docstring")
    //['unsigned int']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != longlong(), "todo: docstring")
    //['long long']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != unsignedlonglong(), "todo: docstring")
    //['unsigned long long']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != bool(), "todo: docstring")
    //['bool']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != float(), "todo: docstring")
    //['float']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != double(), "todo: docstring")
    //['double']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Vector2(), "todo: docstring")
    //['Urho3D::Vector2']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Vector3(), "todo: docstring")
    //['Urho3D::Vector3']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Vector4(), "todo: docstring")
    //['Urho3D::Vector4']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Quaternion(), "todo: docstring")
    //['Urho3D::Quaternion']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::String(), "todo: docstring")
    //['Urho3D::String']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::PODVector<unsigned char>(), "todo: docstring")
    //['Urho3D::PODVector<unsigned char>']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::VectorBuffer(), "todo: docstring")
    //['Urho3D::VectorBuffer']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != (void *)(0), "todo: docstring")
    //['void']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 1
  .def(py::self != Urho3D::ResourceRef(), "todo: docstring")
    //['Urho3D::ResourceRef']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::ResourceRefList(), "todo: docstring")
    //['Urho3D::ResourceRefList']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Vector<Urho3D::Variant>(), "todo: docstring")
    //['Urho3D::Vector<Urho3D::Variant>']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Vector<Urho3D::String>(), "todo: docstring")
    //['Urho3D::Vector<Urho3D::String>']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>(), "todo: docstring")
    //['Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Rect(), "todo: docstring")
    //['Urho3D::Rect']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::IntRect(), "todo: docstring")
    //['Urho3D::IntRect']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::IntVector2(), "todo: docstring")
    //['Urho3D::IntVector2']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::StringHash(), "todo: docstring")
    //['Urho3D::StringHash']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != (Urho3D::RefCounted *)(0), "todo: docstring")
    //['Urho3D::RefCounted']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 1
  .def(py::self != Urho3D::Matrix3(), "todo: docstring")
    //['Urho3D::Matrix3']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Matrix3x4(), "todo: docstring")
    //['Urho3D::Matrix3x4']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::Matrix4(), "todo: docstring")
    //['Urho3D::Matrix4']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("FromString", (void (Urho3D::Variant::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::Variant::FromString, "todo: docstring", py::arg("type"), py::arg("value"))
  .def("FromString", (void (Urho3D::Variant::*)(const char *, const char *)) &Urho3D::Variant::FromString, "todo: docstring", py::arg("type"), py::arg("value"))
  .def("FromString", (void (Urho3D::Variant::*)(Urho3D::VariantType, const Urho3D::String &)) &Urho3D::Variant::FromString, "todo: docstring", py::arg("type"), py::arg("value"))
  .def("FromString", (void (Urho3D::Variant::*)(Urho3D::VariantType, const char *)) &Urho3D::Variant::FromString, "todo: docstring", py::arg("type"), py::arg("value"))
  .def("SetBuffer", (void (Urho3D::Variant::*)(const void *, unsigned int)) &Urho3D::Variant::SetBuffer, "todo: docstring", py::arg("data"), py::arg("size"))
  //.def("SetCustomVariantValue", (void (Urho3D::Variant::*)(const Urho3D::CustomVariantValue &)) &Urho3D::Variant::SetCustomVariantValue, "todo: docstring", py::arg("value"))
    //['Urho3D::CustomVariantValue']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetInt", (int (Urho3D::Variant::*)() const) &Urho3D::Variant::GetInt, "todo: docstring")
  .def("GetInt64", (long long (Urho3D::Variant::*)() const) &Urho3D::Variant::GetInt64, "todo: docstring")
  .def("GetUInt64", (unsigned long long (Urho3D::Variant::*)() const) &Urho3D::Variant::GetUInt64, "todo: docstring")
  .def("GetUInt", (unsigned int (Urho3D::Variant::*)() const) &Urho3D::Variant::GetUInt, "todo: docstring")
  .def("GetStringHash", (Urho3D::StringHash (Urho3D::Variant::*)() const) &Urho3D::Variant::GetStringHash, "todo: docstring")
  .def("GetBool", (bool (Urho3D::Variant::*)() const) &Urho3D::Variant::GetBool, "todo: docstring")
  .def("GetFloat", (float (Urho3D::Variant::*)() const) &Urho3D::Variant::GetFloat, "todo: docstring")
  .def("GetDouble", (double (Urho3D::Variant::*)() const) &Urho3D::Variant::GetDouble, "todo: docstring")
  .def("GetVector2", (const Urho3D::Vector2 & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetVector2, "todo: docstring")
  .def("GetVector3", (const Urho3D::Vector3 & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetVector3, "todo: docstring")
  .def("GetVector4", (const Urho3D::Vector4 & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetVector4, "todo: docstring")
  .def("GetQuaternion", (const Urho3D::Quaternion & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetQuaternion, "todo: docstring")
  .def("GetColor", (const Urho3D::Color & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetColor, "todo: docstring")
  .def("GetString", (const Urho3D::String & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetString, "todo: docstring")
  //.def("GetBuffer", (const PODVector<unsigned char> & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetBuffer, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetVectorBuffer", (Urho3D::VectorBuffer (Urho3D::Variant::*)() const) &Urho3D::Variant::GetVectorBuffer, "todo: docstring")
  .def("GetVoidPtr", (void * (Urho3D::Variant::*)() const) &Urho3D::Variant::GetVoidPtr, "todo: docstring")
  .def("GetResourceRef", (const Urho3D::ResourceRef & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetResourceRef, "todo: docstring")
  .def("GetResourceRefList", (const Urho3D::ResourceRefList & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetResourceRefList, "todo: docstring")
  .def("GetVariantVector", (const Urho3D::VariantVector & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetVariantVector, "todo: docstring")
  .def("GetStringVector", (const Urho3D::StringVector & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetStringVector, "todo: docstring")
  .def("GetVariantMap", (const Urho3D::VariantMap & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetVariantMap, "todo: docstring")
  .def("GetRect", (const Urho3D::Rect & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetRect, "todo: docstring")
  .def("GetIntRect", (const Urho3D::IntRect & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetIntRect, "todo: docstring")
  .def("GetIntVector2", (const Urho3D::IntVector2 & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetIntVector2, "todo: docstring")
  .def("GetIntVector3", (const Urho3D::IntVector3 & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetIntVector3, "todo: docstring")
  .def("GetPtr", (Urho3D::RefCounted * (Urho3D::Variant::*)() const) &Urho3D::Variant::GetPtr, "todo: docstring")
  .def("GetMatrix3", (const Urho3D::Matrix3 & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetMatrix3, "todo: docstring")
  .def("GetMatrix3x4", (const Urho3D::Matrix3x4 & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetMatrix3x4, "todo: docstring")
  .def("GetMatrix4", (const Urho3D::Matrix4 & (Urho3D::Variant::*)() const) &Urho3D::Variant::GetMatrix4, "todo: docstring")
  //.def("GetCustomVariantValuePtr", (Urho3D::CustomVariantValue * (Urho3D::Variant::*)()) &Urho3D::Variant::GetCustomVariantValuePtr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetCustomVariantValuePtr", (const Urho3D::CustomVariantValue * (Urho3D::Variant::*)() const) &Urho3D::Variant::GetCustomVariantValuePtr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetType", (Urho3D::VariantType (Urho3D::Variant::*)() const) &Urho3D::Variant::GetType, "todo: docstring")
  .def("GetTypeName", (Urho3D::String (Urho3D::Variant::*)() const) &Urho3D::Variant::GetTypeName, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::Variant::*)() const) &Urho3D::Variant::ToString, "todo: docstring")
  .def("IsZero", (bool (Urho3D::Variant::*)() const) &Urho3D::Variant::IsZero, "todo: docstring")
  .def("IsEmpty", (bool (Urho3D::Variant::*)() const) &Urho3D::Variant::IsEmpty, "todo: docstring")
  .def("IsCustom", (bool (Urho3D::Variant::*)() const) &Urho3D::Variant::IsCustom, "todo: docstring")
  //.def("GetBufferPtr", (PODVector<unsigned char> * (Urho3D::Variant::*)()) &Urho3D::Variant::GetBufferPtr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetVariantVectorPtr", (Urho3D::VariantVector * (Urho3D::Variant::*)()) &Urho3D::Variant::GetVariantVectorPtr, "todo: docstring")
  .def("GetStringVectorPtr", (Urho3D::StringVector * (Urho3D::Variant::*)()) &Urho3D::Variant::GetStringVectorPtr, "todo: docstring")
  .def("GetVariantMapPtr", (Urho3D::VariantMap * (Urho3D::Variant::*)()) &Urho3D::Variant::GetVariantMapPtr, "todo: docstring")
// Class Variables:
  .def_readonly_static("emptyBuffer",&Urho3D::Variant::emptyBuffer, "todo: var docstring")//const Urho3D::PODVector<unsigned char>
  .def_readonly_static("emptyResourceRef",&Urho3D::Variant::emptyResourceRef, "todo: var docstring")//const Urho3D::ResourceRef
  .def_readonly_static("emptyResourceRefList",&Urho3D::Variant::emptyResourceRefList, "todo: var docstring")//const Urho3D::ResourceRefList
  .def_readonly_static("emptyVariantMap",&Urho3D::Variant::emptyVariantMap, "todo: var docstring")//const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>
  .def_readonly_static("emptyVariantVector",&Urho3D::Variant::emptyVariantVector, "todo: var docstring")//const Urho3D::Vector<Urho3D::Variant>
  .def_readonly_static("emptyStringVector",&Urho3D::Variant::emptyStringVector, "todo: var docstring")//const Urho3D::Vector<Urho3D::String>
;
}

void Implement_Urho3D_ResourceRefList(py::class_<Urho3D::ResourceRefList, Urho3D::ExternalPtr<Urho3D::ResourceRefList>>& pyclass_Var_Urho3D_ResourceRefList)
{
    // Class ResourceRefList Implementation
pyclass_Var_Urho3D_ResourceRefList
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<Urho3D::StringHash>(), "todo: constructor docstring")
  .def(py::init<Urho3D::StringHash, const Urho3D::Vector<Urho3D::String> &>(), "todo: constructor docstring")
  .def(py::self == Urho3D::ResourceRefList(), "todo: docstring")
    //['Urho3D::ResourceRefList']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::ResourceRefList(), "todo: docstring")
    //['Urho3D::ResourceRefList']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("type",&Urho3D::ResourceRefList::type_, "todo: var docstring")//Urho3D::StringHash
  .def_readwrite("names",&Urho3D::ResourceRefList::names_, "todo: var docstring")//Urho3D::Vector<Urho3D::String>
;
}

void Implement_Urho3D_Object(py::class_<Urho3D::Object, Urho3D::SharedPtr<Urho3D::Object>, Urho3D::RefCounted>& pyclass_Var_Urho3D_Object)
{
    // Class Object Implementation
pyclass_Var_Urho3D_Object
  //.def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
    // Abstract class Object -> no init
  //.def("~Object", (void (Urho3D::Object::*)()) &Urho3D::Object::~Object, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("GetType", (Urho3D::StringHash (Urho3D::Object::*)() const) &Urho3D::Object::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Object::*)() const) &Urho3D::Object::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Object::*)() const) &Urho3D::Object::GetTypeInfo, "todo: docstring")
  .def("OnEvent", (void (Urho3D::Object::*)(Urho3D::Object *, Urho3D::StringHash, Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Object::OnEvent, "todo: docstring", py::arg("sender"), py::arg("eventType"), py::arg("eventData"))
  .def("IsInstanceOf", (bool (Urho3D::Object::*)(Urho3D::StringHash) const) &Urho3D::Object::IsInstanceOf, "todo: docstring", py::arg("type"))
  .def("IsInstanceOf", (bool (Urho3D::Object::*)(const Urho3D::TypeInfo *) const) &Urho3D::Object::IsInstanceOf, "todo: docstring", py::arg("typeInfo"))
  .def("SubscribeToEvent", (void (Urho3D::Object::*)(Urho3D::StringHash, Urho3D::EventHandler *)) &Urho3D::Object::SubscribeToEvent, "todo: docstring", py::arg("eventType"), py::arg("handler"))
  .def("SubscribeToEvent", (void (Urho3D::Object::*)(Urho3D::Object *, Urho3D::StringHash, Urho3D::EventHandler *)) &Urho3D::Object::SubscribeToEvent, "todo: docstring", py::arg("sender"), py::arg("eventType"), py::arg("handler"))
  //.def("SubscribeToEvent", (void (Urho3D::Object::*)(Urho3D::StringHash, const std::function<void (Urho3D::StringHash, Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)> &, void *)) &Urho3D::Object::SubscribeToEvent, "todo: docstring", py::arg("eventType"), py::arg("function"), py::arg("userData")=nullptr)
    //['Urho3D::StringHash', 'std::function<void', 'void']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("SubscribeToEvent", (void (Urho3D::Object::*)(Urho3D::Object *, Urho3D::StringHash, const std::function<void (Urho3D::StringHash, Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)> &, void *)) &Urho3D::Object::SubscribeToEvent, "todo: docstring", py::arg("sender"), py::arg("eventType"), py::arg("function"), py::arg("userData")=nullptr)
    //['Urho3D::Object', 'Urho3D::StringHash', 'std::function<void', 'void']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("UnsubscribeFromEvent", (void (Urho3D::Object::*)(Urho3D::StringHash)) &Urho3D::Object::UnsubscribeFromEvent, "todo: docstring", py::arg("eventType"))
  .def("UnsubscribeFromEvent", (void (Urho3D::Object::*)(Urho3D::Object *, Urho3D::StringHash)) &Urho3D::Object::UnsubscribeFromEvent, "todo: docstring", py::arg("sender"), py::arg("eventType"))
  .def("UnsubscribeFromEvents", (void (Urho3D::Object::*)(Urho3D::Object *)) &Urho3D::Object::UnsubscribeFromEvents, "todo: docstring", py::arg("sender"))
  .def("UnsubscribeFromAllEvents", (void (Urho3D::Object::*)()) &Urho3D::Object::UnsubscribeFromAllEvents, "todo: docstring")
  //.def("UnsubscribeFromAllEventsExcept", (void (Urho3D::Object::*)(const Urho3D::PODVector<Urho3D::StringHash> &, bool)) &Urho3D::Object::UnsubscribeFromAllEventsExcept, "todo: docstring", py::arg("exceptions"), py::arg("onlyUserData"))
    //['Urho3D::PODVector<Urho3D::StringHash>', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SendEvent", (void (Urho3D::Object::*)(Urho3D::StringHash)) &Urho3D::Object::SendEvent, "todo: docstring", py::arg("eventType"))
  .def("SendEvent", (void (Urho3D::Object::*)(Urho3D::StringHash, Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Object::SendEvent, "todo: docstring", py::arg("eventType"), py::arg("eventData"))
  .def("GetEventDataMap", (Urho3D::VariantMap & (Urho3D::Object::*)() const) &Urho3D::Object::GetEventDataMap, "todo: docstring")
  .def("GetContext", (Urho3D::Context * (Urho3D::Object::*)() const) &Urho3D::Object::GetContext, "todo: docstring")
  .def("GetGlobalVar", (const Urho3D::Variant & (Urho3D::Object::*)(Urho3D::StringHash) const) &Urho3D::Object::GetGlobalVar, "todo: docstring", py::arg("key"))
  .def("GetGlobalVars", (const Urho3D::VariantMap & (Urho3D::Object::*)() const) &Urho3D::Object::GetGlobalVars, "todo: docstring")
  .def("SetGlobalVar", (void (Urho3D::Object::*)(Urho3D::StringHash, const Urho3D::Variant &)) &Urho3D::Object::SetGlobalVar, "todo: docstring", py::arg("key"), py::arg("value"))
  .def("GetSubsystem", (Urho3D::Object * (Urho3D::Object::*)(Urho3D::StringHash) const) &Urho3D::Object::GetSubsystem, "todo: docstring", py::arg("type"))
  .def("GetEventSender", (Urho3D::Object * (Urho3D::Object::*)() const) &Urho3D::Object::GetEventSender, "todo: docstring")
  .def("GetEventHandler", (Urho3D::EventHandler * (Urho3D::Object::*)() const) &Urho3D::Object::GetEventHandler, "todo: docstring")
  .def("HasSubscribedToEvent", (bool (Urho3D::Object::*)(Urho3D::StringHash) const) &Urho3D::Object::HasSubscribedToEvent, "todo: docstring", py::arg("eventType"))
  .def("HasSubscribedToEvent", (bool (Urho3D::Object::*)(Urho3D::Object *, Urho3D::StringHash) const) &Urho3D::Object::HasSubscribedToEvent, "todo: docstring", py::arg("sender"), py::arg("eventType"))
  .def("HasEventHandlers", (bool (Urho3D::Object::*)() const) &Urho3D::Object::HasEventHandlers, "todo: docstring")
  .def("GetCategory", (const Urho3D::String & (Urho3D::Object::*)() const) &Urho3D::Object::GetCategory, "todo: docstring")
  .def("SetBlockEvents", (void (Urho3D::Object::*)(bool)) &Urho3D::Object::SetBlockEvents, "todo: docstring", py::arg("block"))
  .def("GetBlockEvents", (bool (Urho3D::Object::*)() const) &Urho3D::Object::GetBlockEvents, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Script(py::class_<Urho3D::Script, Urho3D::SharedPtr<Urho3D::Script>, Urho3D::Object>& pyclass_Var_Urho3D_Script)
{
    // Class Script Implementation
pyclass_Var_Urho3D_Script
  .def("GetType", (Urho3D::StringHash (Urho3D::Script::*)() const) &Urho3D::Script::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Script::*)() const) &Urho3D::Script::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Script::*)() const) &Urho3D::Script::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Script", (void (Urho3D::Script::*)()) &Urho3D::Script::~Script, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Execute", (bool (Urho3D::Script::*)(const Urho3D::String &)) &Urho3D::Script::Execute, "todo: docstring", py::arg("line"))
  .def("SetDefaultScriptFile", (void (Urho3D::Script::*)(Urho3D::ScriptFile *)) &Urho3D::Script::SetDefaultScriptFile, "todo: docstring", py::arg("file"))
  .def("SetDefaultScene", (void (Urho3D::Script::*)(Urho3D::Scene *)) &Urho3D::Script::SetDefaultScene, "todo: docstring", py::arg("scene"))
  .def("SetExecuteConsoleCommands", (void (Urho3D::Script::*)(bool)) &Urho3D::Script::SetExecuteConsoleCommands, "todo: docstring", py::arg("enable"))
  .def("DumpAPI", (void (Urho3D::Script::*)(Urho3D::DumpMode, const Urho3D::String &)) &Urho3D::Script::DumpAPI, "todo: docstring", py::arg("mode")=DOXYGEN, py::arg("sourceTree")=String::EMPTY)
  //.def("MessageCallback", (void (Urho3D::Script::*)(const asSMessageInfo *)) &Urho3D::Script::MessageCallback, "todo: docstring", py::arg("msg"))
    //['asSMessageInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("ExceptionCallback", (void (Urho3D::Script::*)(asIScriptContext *)) &Urho3D::Script::ExceptionCallback, "todo: docstring", py::arg("context"))
    //['asIScriptContext']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetScriptEngine", (asIScriptEngine * (Urho3D::Script::*)() const) &Urho3D::Script::GetScriptEngine, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetImmediateContext", (asIScriptContext * (Urho3D::Script::*)() const) &Urho3D::Script::GetImmediateContext, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetDefaultScriptFile", (Urho3D::ScriptFile * (Urho3D::Script::*)() const) &Urho3D::Script::GetDefaultScriptFile, "todo: docstring")
  .def("GetDefaultScene", (Urho3D::Scene * (Urho3D::Script::*)() const) &Urho3D::Script::GetDefaultScene, "todo: docstring")
  .def("GetExecuteConsoleCommands", (bool (Urho3D::Script::*)() const) &Urho3D::Script::GetExecuteConsoleCommands, "todo: docstring")
  .def("ClearObjectTypeCache", (void (Urho3D::Script::*)()) &Urho3D::Script::ClearObjectTypeCache, "todo: docstring")
  //.def("GetObjectType", (asITypeInfo * (Urho3D::Script::*)(const char *)) &Urho3D::Script::GetObjectType, "todo: docstring", py::arg("declaration"))
    //['char']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetModuleMutex", (Urho3D::Mutex & (Urho3D::Script::*)()) &Urho3D::Script::GetModuleMutex, "todo: docstring")
  //.def("GetEnumValues", (const char ** (Urho3D::Script::*)(int)) &Urho3D::Script::GetEnumValues, "todo: docstring", py::arg("asTypeID"))
    //['int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 2
// Class Variables:
;
}

void Implement_Urho3D_Connection(py::class_<Urho3D::Connection, Urho3D::SharedPtr<Urho3D::Connection>, Urho3D::Object>& pyclass_Var_Urho3D_Connection)
{
    // Class Connection Implementation
pyclass_Var_Urho3D_Connection
  .def("GetType", (Urho3D::StringHash (Urho3D::Connection::*)() const) &Urho3D::Connection::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Connection::*)() const) &Urho3D::Connection::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Connection::*)() const) &Urho3D::Connection::GetTypeInfo, "todo: docstring")
  //.def(py::init<Urho3D::Context *, bool, const SLNet::AddressOrGUID &, SLNet::RakPeerInterface *>(), "todo: constructor docstring")
    //['Urho3D::Context', 'bool', 'SLNet::AddressOrGUID', 'SLNet::RakPeerInterface']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("~Connection", (void (Urho3D::Connection::*)()) &Urho3D::Connection::~Connection, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SendMessage", (void (Urho3D::Connection::*)(int, bool, bool, const Urho3D::VectorBuffer &, unsigned int)) &Urho3D::Connection::SendMessage, "todo: docstring", py::arg("msgID"), py::arg("reliable"), py::arg("inOrder"), py::arg("msg"), py::arg("contentID")=0)
  .def("SendMessage", (void (Urho3D::Connection::*)(int, bool, bool, const unsigned char *, unsigned int, unsigned int)) &Urho3D::Connection::SendMessage, "todo: docstring", py::arg("msgID"), py::arg("reliable"), py::arg("inOrder"), py::arg("data"), py::arg("numBytes"), py::arg("contentID")=0)
  .def("SendRemoteEvent", (void (Urho3D::Connection::*)(Urho3D::StringHash, bool, const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Connection::SendRemoteEvent, "todo: docstring", py::arg("eventType"), py::arg("inOrder"), py::arg("eventData")=Variant::emptyVariantMap)
  .def("SendRemoteEvent", (void (Urho3D::Connection::*)(Urho3D::Node *, Urho3D::StringHash, bool, const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Connection::SendRemoteEvent, "todo: docstring", py::arg("node"), py::arg("eventType"), py::arg("inOrder"), py::arg("eventData")=Variant::emptyVariantMap)
  .def("SetScene", (void (Urho3D::Connection::*)(Urho3D::Scene *)) &Urho3D::Connection::SetScene, "todo: docstring", py::arg("newScene"))
  .def("SetIdentity", (void (Urho3D::Connection::*)(const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Connection::SetIdentity, "todo: docstring", py::arg("identity"))
  .def("SetControls", (void (Urho3D::Connection::*)(const Urho3D::Controls &)) &Urho3D::Connection::SetControls, "todo: docstring", py::arg("newControls"))
  .def("SetPosition", (void (Urho3D::Connection::*)(const Urho3D::Vector3 &)) &Urho3D::Connection::SetPosition, "todo: docstring", py::arg("position"))
  .def("SetRotation", (void (Urho3D::Connection::*)(const Urho3D::Quaternion &)) &Urho3D::Connection::SetRotation, "todo: docstring", py::arg("rotation"))
  .def("SetConnectPending", (void (Urho3D::Connection::*)(bool)) &Urho3D::Connection::SetConnectPending, "todo: docstring", py::arg("connectPending"))
  .def("SetLogStatistics", (void (Urho3D::Connection::*)(bool)) &Urho3D::Connection::SetLogStatistics, "todo: docstring", py::arg("enable"))
  .def("Disconnect", (void (Urho3D::Connection::*)(int)) &Urho3D::Connection::Disconnect, "todo: docstring", py::arg("waitMSec")=0)
  .def("SendServerUpdate", (void (Urho3D::Connection::*)()) &Urho3D::Connection::SendServerUpdate, "todo: docstring")
  .def("SendClientUpdate", (void (Urho3D::Connection::*)()) &Urho3D::Connection::SendClientUpdate, "todo: docstring")
  .def("SendRemoteEvents", (void (Urho3D::Connection::*)()) &Urho3D::Connection::SendRemoteEvents, "todo: docstring")
  .def("SendPackages", (void (Urho3D::Connection::*)()) &Urho3D::Connection::SendPackages, "todo: docstring")
  .def("ProcessPendingLatestData", (void (Urho3D::Connection::*)()) &Urho3D::Connection::ProcessPendingLatestData, "todo: docstring")
  .def("ProcessMessage", (bool (Urho3D::Connection::*)(int, Urho3D::MemoryBuffer &)) &Urho3D::Connection::ProcessMessage, "todo: docstring", py::arg("msgID"), py::arg("msg"))
  .def("Ban", (void (Urho3D::Connection::*)()) &Urho3D::Connection::Ban, "todo: docstring")
  //.def("GetAddressOrGUID", (const SLNet::AddressOrGUID & (Urho3D::Connection::*)() const) &Urho3D::Connection::GetAddressOrGUID, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("SetAddressOrGUID", (void (Urho3D::Connection::*)(const SLNet::AddressOrGUID &)) &Urho3D::Connection::SetAddressOrGUID, "todo: docstring", py::arg("addr"))
    //['SLNet::AddressOrGUID']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetIdentity", (Urho3D::VariantMap & (Urho3D::Connection::*)()) &Urho3D::Connection::GetIdentity, "todo: docstring")
  .def("GetScene", (Urho3D::Scene * (Urho3D::Connection::*)() const) &Urho3D::Connection::GetScene, "todo: docstring")
  .def("GetControls", (const Urho3D::Controls & (Urho3D::Connection::*)() const) &Urho3D::Connection::GetControls, "todo: docstring")
  .def("GetTimeStamp", (unsigned char (Urho3D::Connection::*)() const) &Urho3D::Connection::GetTimeStamp, "todo: docstring")
  .def("GetPosition", (const Urho3D::Vector3 & (Urho3D::Connection::*)() const) &Urho3D::Connection::GetPosition, "todo: docstring")
  .def("GetRotation", (const Urho3D::Quaternion & (Urho3D::Connection::*)() const) &Urho3D::Connection::GetRotation, "todo: docstring")
  .def("IsClient", (bool (Urho3D::Connection::*)() const) &Urho3D::Connection::IsClient, "todo: docstring")
  .def("IsConnected", (bool (Urho3D::Connection::*)() const) &Urho3D::Connection::IsConnected, "todo: docstring")
  .def("IsConnectPending", (bool (Urho3D::Connection::*)() const) &Urho3D::Connection::IsConnectPending, "todo: docstring")
  .def("IsSceneLoaded", (bool (Urho3D::Connection::*)() const) &Urho3D::Connection::IsSceneLoaded, "todo: docstring")
  .def("GetLogStatistics", (bool (Urho3D::Connection::*)() const) &Urho3D::Connection::GetLogStatistics, "todo: docstring")
  .def("GetAddress", (Urho3D::String (Urho3D::Connection::*)() const) &Urho3D::Connection::GetAddress, "todo: docstring")
  .def("GetPort", (unsigned short (Urho3D::Connection::*)() const) &Urho3D::Connection::GetPort, "todo: docstring")
  .def("GetRoundTripTime", (float (Urho3D::Connection::*)() const) &Urho3D::Connection::GetRoundTripTime, "todo: docstring")
  .def("GetLastHeardTime", (unsigned int (Urho3D::Connection::*)() const) &Urho3D::Connection::GetLastHeardTime, "todo: docstring")
  .def("GetBytesInPerSec", (float (Urho3D::Connection::*)() const) &Urho3D::Connection::GetBytesInPerSec, "todo: docstring")
  .def("GetBytesOutPerSec", (float (Urho3D::Connection::*)() const) &Urho3D::Connection::GetBytesOutPerSec, "todo: docstring")
  .def("GetPacketsInPerSec", (int (Urho3D::Connection::*)() const) &Urho3D::Connection::GetPacketsInPerSec, "todo: docstring")
  .def("GetPacketsOutPerSec", (int (Urho3D::Connection::*)() const) &Urho3D::Connection::GetPacketsOutPerSec, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::Connection::*)() const) &Urho3D::Connection::ToString, "todo: docstring")
  .def("GetNumDownloads", (unsigned int (Urho3D::Connection::*)() const) &Urho3D::Connection::GetNumDownloads, "todo: docstring")
  .def("GetDownloadName", (const Urho3D::String & (Urho3D::Connection::*)() const) &Urho3D::Connection::GetDownloadName, "todo: docstring")
  .def("GetDownloadProgress", (float (Urho3D::Connection::*)() const) &Urho3D::Connection::GetDownloadProgress, "todo: docstring")
  .def("SendPackageToClient", (void (Urho3D::Connection::*)(Urho3D::PackageFile *)) &Urho3D::Connection::SendPackageToClient, "todo: docstring", py::arg("package"))
  .def("ConfigureNetworkSimulator", (void (Urho3D::Connection::*)(int, float)) &Urho3D::Connection::ConfigureNetworkSimulator, "todo: docstring", py::arg("latencyMs"), py::arg("packetLoss"))
// Class Variables:
  .def_readwrite("controls",&Urho3D::Connection::controls_, "todo: var docstring")//Urho3D::Controls
  .def_readwrite("timeStamp",&Urho3D::Connection::timeStamp_, "todo: var docstring")//unsigned char
  .def_readwrite("identity",&Urho3D::Connection::identity_, "todo: var docstring")//Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>
;
}
