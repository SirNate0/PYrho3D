

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
void Implement_Urho3D_SoundSource(py::class_<Urho3D::SoundSource, Urho3D::SharedPtr<Urho3D::SoundSource>, Urho3D::Component>& pyclass_Var_Urho3D_SoundSource)
{
    // Class SoundSource Implementation
pyclass_Var_Urho3D_SoundSource
  .def("GetType", (Urho3D::StringHash (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~SoundSource", (void (Urho3D::SoundSource::*)()) &Urho3D::SoundSource::~SoundSource, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Seek", (void (Urho3D::SoundSource::*)(float)) &Urho3D::SoundSource::Seek, "todo: docstring", py::arg("seekTime"))
  .def("Play", (void (Urho3D::SoundSource::*)(Urho3D::Sound *)) &Urho3D::SoundSource::Play, "todo: docstring", py::arg("sound"))
  .def("Play", (void (Urho3D::SoundSource::*)(Urho3D::Sound *, float)) &Urho3D::SoundSource::Play, "todo: docstring", py::arg("sound"), py::arg("frequency"))
  .def("Play", (void (Urho3D::SoundSource::*)(Urho3D::Sound *, float, float)) &Urho3D::SoundSource::Play, "todo: docstring", py::arg("sound"), py::arg("frequency"), py::arg("gain"))
  .def("Play", (void (Urho3D::SoundSource::*)(Urho3D::Sound *, float, float, float)) &Urho3D::SoundSource::Play, "todo: docstring", py::arg("sound"), py::arg("frequency"), py::arg("gain"), py::arg("panning"))
  .def("Play", (void (Urho3D::SoundSource::*)(Urho3D::SoundStream *)) &Urho3D::SoundSource::Play, "todo: docstring", py::arg("stream"))
  .def("Stop", (void (Urho3D::SoundSource::*)()) &Urho3D::SoundSource::Stop, "todo: docstring")
  .def("SetSoundType", (void (Urho3D::SoundSource::*)(const Urho3D::String &)) &Urho3D::SoundSource::SetSoundType, "todo: docstring", py::arg("type"))
  .def("SetFrequency", (void (Urho3D::SoundSource::*)(float)) &Urho3D::SoundSource::SetFrequency, "todo: docstring", py::arg("frequency"))
  .def("SetGain", (void (Urho3D::SoundSource::*)(float)) &Urho3D::SoundSource::SetGain, "todo: docstring", py::arg("gain"))
  .def("SetAttenuation", (void (Urho3D::SoundSource::*)(float)) &Urho3D::SoundSource::SetAttenuation, "todo: docstring", py::arg("attenuation"))
  .def("SetPanning", (void (Urho3D::SoundSource::*)(float)) &Urho3D::SoundSource::SetPanning, "todo: docstring", py::arg("panning"))
  .def("SetAutoRemoveMode", (void (Urho3D::SoundSource::*)(Urho3D::AutoRemoveMode)) &Urho3D::SoundSource::SetAutoRemoveMode, "todo: docstring", py::arg("mode"))
  //.def("SetPlayPosition", (void (Urho3D::SoundSource::*)(signed char *)) &Urho3D::SoundSource::SetPlayPosition, "todo: docstring", py::arg("pos"))
    //['signed char']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetSound", (Urho3D::Sound * (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetSound, "todo: docstring")
  //.def("GetPlayPosition", (volatile signed char * (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetPlayPosition, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetSoundType", (Urho3D::String (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetSoundType, "todo: docstring")
  .def("GetTimePosition", (float (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetTimePosition, "todo: docstring")
  .def("GetFrequency", (float (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetFrequency, "todo: docstring")
  .def("GetGain", (float (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetGain, "todo: docstring")
  .def("GetAttenuation", (float (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetAttenuation, "todo: docstring")
  .def("GetPanning", (float (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetPanning, "todo: docstring")
  .def("GetAutoRemoveMode", (Urho3D::AutoRemoveMode (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetAutoRemoveMode, "todo: docstring")
  .def("IsPlaying", (bool (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::IsPlaying, "todo: docstring")
  .def("Update", (void (Urho3D::SoundSource::*)(float)) &Urho3D::SoundSource::Update, "todo: docstring", py::arg("timeStep"))
  .def("Mix", (void (Urho3D::SoundSource::*)(int *, unsigned int, int, bool, bool)) &Urho3D::SoundSource::Mix, "todo: docstring", py::arg("dest"), py::arg("samples"), py::arg("mixRate"), py::arg("stereo"), py::arg("interpolation"))
  .def("UpdateMasterGain", (void (Urho3D::SoundSource::*)()) &Urho3D::SoundSource::UpdateMasterGain, "todo: docstring")
  .def("SetSoundAttr", (void (Urho3D::SoundSource::*)(const Urho3D::ResourceRef &)) &Urho3D::SoundSource::SetSoundAttr, "todo: docstring", py::arg("value"))
  .def("SetPositionAttr", (void (Urho3D::SoundSource::*)(int)) &Urho3D::SoundSource::SetPositionAttr, "todo: docstring", py::arg("value"))
  .def("GetSoundAttr", (Urho3D::ResourceRef (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetSoundAttr, "todo: docstring")
  .def("SetPlayingAttr", (void (Urho3D::SoundSource::*)(bool)) &Urho3D::SoundSource::SetPlayingAttr, "todo: docstring", py::arg("value"))
  .def("GetPositionAttr", (int (Urho3D::SoundSource::*)() const) &Urho3D::SoundSource::GetPositionAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Drawable(py::class_<Urho3D::Drawable, Urho3D::SharedPtr<Urho3D::Drawable>, Urho3D::Component>& pyclass_Var_Urho3D_Drawable)
{
    // Class Drawable Implementation
pyclass_Var_Urho3D_Drawable
  .def("GetType", (Urho3D::StringHash (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetTypeInfo, "todo: docstring")
  //.def(py::init<Urho3D::Context *, unsigned char>(), "todo: constructor docstring")
    // Abstract class Drawable -> no init
  //.def("~Drawable", (void (Urho3D::Drawable::*)()) &Urho3D::Drawable::~Drawable, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::Drawable::*)()) &Urho3D::Drawable::OnSetEnabled, "todo: docstring")
  //.def("ProcessRayQuery", (void (Urho3D::Drawable::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::Drawable::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("Update", (void (Urho3D::Drawable::*)(const Urho3D::FrameInfo &)) &Urho3D::Drawable::Update, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::Drawable::*)(const Urho3D::FrameInfo &)) &Urho3D::Drawable::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateGeometry", (void (Urho3D::Drawable::*)(const Urho3D::FrameInfo &)) &Urho3D::Drawable::UpdateGeometry, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetUpdateGeometryType", (Urho3D::UpdateGeometryType (Urho3D::Drawable::*)()) &Urho3D::Drawable::GetUpdateGeometryType, "todo: docstring")
  .def("GetLodGeometry", (Urho3D::Geometry * (Urho3D::Drawable::*)(unsigned int, unsigned int)) &Urho3D::Drawable::GetLodGeometry, "todo: docstring", py::arg("batchIndex"), py::arg("level"))
  .def("GetNumOccluderTriangles", (unsigned int (Urho3D::Drawable::*)()) &Urho3D::Drawable::GetNumOccluderTriangles, "todo: docstring")
  .def("DrawOcclusion", (bool (Urho3D::Drawable::*)(Urho3D::OcclusionBuffer *)) &Urho3D::Drawable::DrawOcclusion, "todo: docstring", py::arg("buffer"))
  .def("DrawDebugGeometry", (void (Urho3D::Drawable::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::Drawable::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetDrawDistance", (void (Urho3D::Drawable::*)(float)) &Urho3D::Drawable::SetDrawDistance, "todo: docstring", py::arg("distance"))
  .def("SetShadowDistance", (void (Urho3D::Drawable::*)(float)) &Urho3D::Drawable::SetShadowDistance, "todo: docstring", py::arg("distance"))
  .def("SetLodBias", (void (Urho3D::Drawable::*)(float)) &Urho3D::Drawable::SetLodBias, "todo: docstring", py::arg("bias"))
  .def("SetViewMask", (void (Urho3D::Drawable::*)(unsigned int)) &Urho3D::Drawable::SetViewMask, "todo: docstring", py::arg("mask"))
  .def("SetLightMask", (void (Urho3D::Drawable::*)(unsigned int)) &Urho3D::Drawable::SetLightMask, "todo: docstring", py::arg("mask"))
  .def("SetShadowMask", (void (Urho3D::Drawable::*)(unsigned int)) &Urho3D::Drawable::SetShadowMask, "todo: docstring", py::arg("mask"))
  .def("SetZoneMask", (void (Urho3D::Drawable::*)(unsigned int)) &Urho3D::Drawable::SetZoneMask, "todo: docstring", py::arg("mask"))
  .def("SetMaxLights", (void (Urho3D::Drawable::*)(unsigned int)) &Urho3D::Drawable::SetMaxLights, "todo: docstring", py::arg("num"))
  .def("SetCastShadows", (void (Urho3D::Drawable::*)(bool)) &Urho3D::Drawable::SetCastShadows, "todo: docstring", py::arg("enable"))
  .def("SetOccluder", (void (Urho3D::Drawable::*)(bool)) &Urho3D::Drawable::SetOccluder, "todo: docstring", py::arg("enable"))
  .def("SetOccludee", (void (Urho3D::Drawable::*)(bool)) &Urho3D::Drawable::SetOccludee, "todo: docstring", py::arg("enable"))
  .def("MarkForUpdate", (void (Urho3D::Drawable::*)()) &Urho3D::Drawable::MarkForUpdate, "todo: docstring")
  .def("GetBoundingBox", (const Urho3D::BoundingBox & (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetBoundingBox, "todo: docstring")
  .def("GetWorldBoundingBox", (const Urho3D::BoundingBox & (Urho3D::Drawable::*)()) &Urho3D::Drawable::GetWorldBoundingBox, "todo: docstring")
  .def("GetDrawableFlags", (unsigned char (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetDrawableFlags, "todo: docstring")
  .def("GetDrawDistance", (float (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetDrawDistance, "todo: docstring")
  .def("GetShadowDistance", (float (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetShadowDistance, "todo: docstring")
  .def("GetLodBias", (float (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetLodBias, "todo: docstring")
  .def("GetViewMask", (unsigned int (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetViewMask, "todo: docstring")
  .def("GetLightMask", (unsigned int (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetLightMask, "todo: docstring")
  .def("GetShadowMask", (unsigned int (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetShadowMask, "todo: docstring")
  .def("GetZoneMask", (unsigned int (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetZoneMask, "todo: docstring")
  .def("GetMaxLights", (unsigned int (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetMaxLights, "todo: docstring")
  .def("GetCastShadows", (bool (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetCastShadows, "todo: docstring")
  .def("IsOccluder", (bool (Urho3D::Drawable::*)() const) &Urho3D::Drawable::IsOccluder, "todo: docstring")
  .def("IsOccludee", (bool (Urho3D::Drawable::*)() const) &Urho3D::Drawable::IsOccludee, "todo: docstring")
  .def("IsInView", (bool (Urho3D::Drawable::*)() const) &Urho3D::Drawable::IsInView, "todo: docstring")
  .def("IsInView", (bool (Urho3D::Drawable::*)(Urho3D::Camera *) const) &Urho3D::Drawable::IsInView, "todo: docstring", py::arg("camera"))
  //.def("GetBatches", (const Vector<Urho3D::SourceBatch> & (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetBatches, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("SetZone", (void (Urho3D::Drawable::*)(Urho3D::Zone *, bool)) &Urho3D::Drawable::SetZone, "todo: docstring", py::arg("zone"), py::arg("temporary")=false)
  .def("SetSortValue", (void (Urho3D::Drawable::*)(float)) &Urho3D::Drawable::SetSortValue, "todo: docstring", py::arg("value"))
  .def("SetMinMaxZ", (void (Urho3D::Drawable::*)(float, float)) &Urho3D::Drawable::SetMinMaxZ, "todo: docstring", py::arg("minZ"), py::arg("maxZ"))
  //.def("MarkInView", (void (Urho3D::Drawable::*)(const Urho3D::FrameInfo &)) &Urho3D::Drawable::MarkInView, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("MarkInView", (void (Urho3D::Drawable::*)(unsigned int)) &Urho3D::Drawable::MarkInView, "todo: docstring", py::arg("frameNumber"))
  .def("LimitLights", (void (Urho3D::Drawable::*)()) &Urho3D::Drawable::LimitLights, "todo: docstring")
  .def("LimitVertexLights", (void (Urho3D::Drawable::*)(bool)) &Urho3D::Drawable::LimitVertexLights, "todo: docstring", py::arg("removeConvertedLights"))
  .def("SetBasePass", (void (Urho3D::Drawable::*)(unsigned int)) &Urho3D::Drawable::SetBasePass, "todo: docstring", py::arg("batchIndex"))
  .def("GetOctant", (Urho3D::Octant * (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetOctant, "todo: docstring")
  .def("GetZone", (Urho3D::Zone * (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetZone, "todo: docstring")
  .def("IsZoneDirty", (bool (Urho3D::Drawable::*)() const) &Urho3D::Drawable::IsZoneDirty, "todo: docstring")
  .def("GetDistance", (float (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetDistance, "todo: docstring")
  .def("GetLodDistance", (float (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetLodDistance, "todo: docstring")
  .def("GetSortValue", (float (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetSortValue, "todo: docstring")
  //.def("IsInView", (bool (Urho3D::Drawable::*)(const Urho3D::FrameInfo &, bool) const) &Urho3D::Drawable::IsInView, "todo: docstring", py::arg("frame"), py::arg("anyCamera")=false)
    //['Urho3D::FrameInfo', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("HasBasePass", (bool (Urho3D::Drawable::*)(unsigned int) const) &Urho3D::Drawable::HasBasePass, "todo: docstring", py::arg("batchIndex"))
  //.def("GetLights", (const PODVector<Urho3D::Light *> & (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetLights, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetVertexLights", (const PODVector<Urho3D::Light *> & (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetVertexLights, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetFirstLight", (Urho3D::Light * (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetFirstLight, "todo: docstring")
  .def("GetMinZ", (float (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetMinZ, "todo: docstring")
  .def("GetMaxZ", (float (Urho3D::Drawable::*)() const) &Urho3D::Drawable::GetMaxZ, "todo: docstring")
  .def("AddLight", (void (Urho3D::Drawable::*)(Urho3D::Light *)) &Urho3D::Drawable::AddLight, "todo: docstring", py::arg("light"))
  .def("AddVertexLight", (void (Urho3D::Drawable::*)(Urho3D::Light *)) &Urho3D::Drawable::AddVertexLight, "todo: docstring", py::arg("light"))
// Class Variables:
;
}

void Implement_Urho3D_StaticModel(py::class_<Urho3D::StaticModel, Urho3D::SharedPtr<Urho3D::StaticModel>, Urho3D::Drawable>& pyclass_Var_Urho3D_StaticModel)
{
    // Class StaticModel Implementation
pyclass_Var_Urho3D_StaticModel
  .def("GetType", (Urho3D::StringHash (Urho3D::StaticModel::*)() const) &Urho3D::StaticModel::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::StaticModel::*)() const) &Urho3D::StaticModel::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::StaticModel::*)() const) &Urho3D::StaticModel::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~StaticModel", (void (Urho3D::StaticModel::*)()) &Urho3D::StaticModel::~StaticModel, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("ProcessRayQuery", (void (Urho3D::StaticModel::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::StaticModel::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::StaticModel::*)(const Urho3D::FrameInfo &)) &Urho3D::StaticModel::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetLodGeometry", (Urho3D::Geometry * (Urho3D::StaticModel::*)(unsigned int, unsigned int)) &Urho3D::StaticModel::GetLodGeometry, "todo: docstring", py::arg("batchIndex"), py::arg("level"))
  .def("GetNumOccluderTriangles", (unsigned int (Urho3D::StaticModel::*)()) &Urho3D::StaticModel::GetNumOccluderTriangles, "todo: docstring")
  .def("DrawOcclusion", (bool (Urho3D::StaticModel::*)(Urho3D::OcclusionBuffer *)) &Urho3D::StaticModel::DrawOcclusion, "todo: docstring", py::arg("buffer"))
  .def("SetModel", (void (Urho3D::StaticModel::*)(Urho3D::Model *)) &Urho3D::StaticModel::SetModel, "todo: docstring", py::arg("model"))
  .def("SetMaterial", (void (Urho3D::StaticModel::*)(Urho3D::Material *)) &Urho3D::StaticModel::SetMaterial, "todo: docstring", py::arg("material"))
  .def("SetMaterial", (bool (Urho3D::StaticModel::*)(unsigned int, Urho3D::Material *)) &Urho3D::StaticModel::SetMaterial, "todo: docstring", py::arg("index"), py::arg("material"))
  .def("SetOcclusionLodLevel", (void (Urho3D::StaticModel::*)(unsigned int)) &Urho3D::StaticModel::SetOcclusionLodLevel, "todo: docstring", py::arg("level"))
  .def("ApplyMaterialList", (void (Urho3D::StaticModel::*)(const Urho3D::String &)) &Urho3D::StaticModel::ApplyMaterialList, "todo: docstring", py::arg("fileName")=String::EMPTY)
  .def("GetModel", (Urho3D::Model * (Urho3D::StaticModel::*)() const) &Urho3D::StaticModel::GetModel, "todo: docstring")
  .def("GetNumGeometries", (unsigned int (Urho3D::StaticModel::*)() const) &Urho3D::StaticModel::GetNumGeometries, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::StaticModel::*)() const) &Urho3D::StaticModel::GetMaterial, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::StaticModel::*)(unsigned int) const) &Urho3D::StaticModel::GetMaterial, "todo: docstring", py::arg("index"))
  .def("GetOcclusionLodLevel", (unsigned int (Urho3D::StaticModel::*)() const) &Urho3D::StaticModel::GetOcclusionLodLevel, "todo: docstring")
  .def("IsInside", (bool (Urho3D::StaticModel::*)(const Urho3D::Vector3 &) const) &Urho3D::StaticModel::IsInside, "todo: docstring", py::arg("point"))
  .def("IsInsideLocal", (bool (Urho3D::StaticModel::*)(const Urho3D::Vector3 &) const) &Urho3D::StaticModel::IsInsideLocal, "todo: docstring", py::arg("point"))
  .def("SetModelAttr", (void (Urho3D::StaticModel::*)(const Urho3D::ResourceRef &)) &Urho3D::StaticModel::SetModelAttr, "todo: docstring", py::arg("value"))
  .def("SetMaterialsAttr", (void (Urho3D::StaticModel::*)(const Urho3D::ResourceRefList &)) &Urho3D::StaticModel::SetMaterialsAttr, "todo: docstring", py::arg("value"))
  .def("GetModelAttr", (Urho3D::ResourceRef (Urho3D::StaticModel::*)() const) &Urho3D::StaticModel::GetModelAttr, "todo: docstring")
  .def("GetMaterialsAttr", (const Urho3D::ResourceRefList & (Urho3D::StaticModel::*)() const) &Urho3D::StaticModel::GetMaterialsAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_AbstractFile(py::class_<Urho3D::AbstractFile, Urho3D::ExternalPtr<Urho3D::AbstractFile>, Urho3D::Deserializer, Urho3D::Serializer>& pyclass_Var_Urho3D_AbstractFile)
{
    // Class AbstractFile Implementation
pyclass_Var_Urho3D_AbstractFile
  //.def(py::init<>(), "todo: constructor docstring")
    // Abstract class AbstractFile -> no init
  //.def(py::init<unsigned int>(), "todo: constructor docstring")
    // Abstract class AbstractFile -> no init
  //.def("~AbstractFile", (void (Urho3D::AbstractFile::*)()) &Urho3D::AbstractFile::~AbstractFile, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_Cursor(py::class_<Urho3D::Cursor, Urho3D::SharedPtr<Urho3D::Cursor>, Urho3D::BorderImage>& pyclass_Var_Urho3D_Cursor)
{
    // Class Cursor Implementation
pyclass_Var_Urho3D_Cursor
  .def("GetType", (Urho3D::StringHash (Urho3D::Cursor::*)() const) &Urho3D::Cursor::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Cursor::*)() const) &Urho3D::Cursor::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Cursor::*)() const) &Urho3D::Cursor::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Cursor", (void (Urho3D::Cursor::*)()) &Urho3D::Cursor::~Cursor, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("GetBatches", (void (Urho3D::Cursor::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::Cursor::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("DefineShape", (void (Urho3D::Cursor::*)(const Urho3D::String &, Urho3D::Image *, const Urho3D::IntRect &, const Urho3D::IntVector2 &)) &Urho3D::Cursor::DefineShape, "todo: docstring", py::arg("shape"), py::arg("image"), py::arg("imageRect"), py::arg("hotSpot"))
  .def("DefineShape", (void (Urho3D::Cursor::*)(Urho3D::CursorShape, Urho3D::Image *, const Urho3D::IntRect &, const Urho3D::IntVector2 &)) &Urho3D::Cursor::DefineShape, "todo: docstring", py::arg("shape"), py::arg("image"), py::arg("imageRect"), py::arg("hotSpot"))
  .def("SetShape", (void (Urho3D::Cursor::*)(const Urho3D::String &)) &Urho3D::Cursor::SetShape, "todo: docstring", py::arg("shape"))
  .def("SetShape", (void (Urho3D::Cursor::*)(Urho3D::CursorShape)) &Urho3D::Cursor::SetShape, "todo: docstring", py::arg("shape"))
  .def("SetUseSystemShapes", (void (Urho3D::Cursor::*)(bool)) &Urho3D::Cursor::SetUseSystemShapes, "todo: docstring", py::arg("enable"))
  .def("GetShape", (const Urho3D::String & (Urho3D::Cursor::*)() const) &Urho3D::Cursor::GetShape, "todo: docstring")
  .def("GetUseSystemShapes", (bool (Urho3D::Cursor::*)() const) &Urho3D::Cursor::GetUseSystemShapes, "todo: docstring")
  .def("SetShapesAttr", (void (Urho3D::Cursor::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::Cursor::SetShapesAttr, "todo: docstring", py::arg("value"))
  .def("GetShapesAttr", (Urho3D::VariantVector (Urho3D::Cursor::*)() const) &Urho3D::Cursor::GetShapesAttr, "todo: docstring")
  .def("ApplyOSCursorShape", (void (Urho3D::Cursor::*)()) &Urho3D::Cursor::ApplyOSCursorShape, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_SoundSource3D(py::class_<Urho3D::SoundSource3D, Urho3D::SharedPtr<Urho3D::SoundSource3D>, Urho3D::SoundSource>& pyclass_Var_Urho3D_SoundSource3D)
{
    // Class SoundSource3D Implementation
pyclass_Var_Urho3D_SoundSource3D
  .def("GetType", (Urho3D::StringHash (Urho3D::SoundSource3D::*)() const) &Urho3D::SoundSource3D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::SoundSource3D::*)() const) &Urho3D::SoundSource3D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::SoundSource3D::*)() const) &Urho3D::SoundSource3D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def("DrawDebugGeometry", (void (Urho3D::SoundSource3D::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::SoundSource3D::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("Update", (void (Urho3D::SoundSource3D::*)(float)) &Urho3D::SoundSource3D::Update, "todo: docstring", py::arg("timeStep"))
  .def("SetDistanceAttenuation", (void (Urho3D::SoundSource3D::*)(float, float, float)) &Urho3D::SoundSource3D::SetDistanceAttenuation, "todo: docstring", py::arg("nearDistance"), py::arg("farDistance"), py::arg("rolloffFactor"))
  .def("SetAngleAttenuation", (void (Urho3D::SoundSource3D::*)(float, float)) &Urho3D::SoundSource3D::SetAngleAttenuation, "todo: docstring", py::arg("innerAngle"), py::arg("outerAngle"))
  .def("SetNearDistance", (void (Urho3D::SoundSource3D::*)(float)) &Urho3D::SoundSource3D::SetNearDistance, "todo: docstring", py::arg("distance"))
  .def("SetFarDistance", (void (Urho3D::SoundSource3D::*)(float)) &Urho3D::SoundSource3D::SetFarDistance, "todo: docstring", py::arg("distance"))
  .def("SetInnerAngle", (void (Urho3D::SoundSource3D::*)(float)) &Urho3D::SoundSource3D::SetInnerAngle, "todo: docstring", py::arg("angle"))
  .def("SetOuterAngle", (void (Urho3D::SoundSource3D::*)(float)) &Urho3D::SoundSource3D::SetOuterAngle, "todo: docstring", py::arg("angle"))
  .def("SetRolloffFactor", (void (Urho3D::SoundSource3D::*)(float)) &Urho3D::SoundSource3D::SetRolloffFactor, "todo: docstring", py::arg("factor"))
  .def("CalculateAttenuation", (void (Urho3D::SoundSource3D::*)()) &Urho3D::SoundSource3D::CalculateAttenuation, "todo: docstring")
  .def("GetNearDistance", (float (Urho3D::SoundSource3D::*)() const) &Urho3D::SoundSource3D::GetNearDistance, "todo: docstring")
  .def("GetFarDistance", (float (Urho3D::SoundSource3D::*)() const) &Urho3D::SoundSource3D::GetFarDistance, "todo: docstring")
  .def("GetInnerAngle", (float (Urho3D::SoundSource3D::*)() const) &Urho3D::SoundSource3D::GetInnerAngle, "todo: docstring")
  .def("GetOuterAngle", (float (Urho3D::SoundSource3D::*)() const) &Urho3D::SoundSource3D::GetOuterAngle, "todo: docstring")
  .def("RollAngleoffFactor", (float (Urho3D::SoundSource3D::*)() const) &Urho3D::SoundSource3D::RollAngleoffFactor, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Engine(py::class_<Urho3D::Engine, Urho3D::SharedPtr<Urho3D::Engine>, Urho3D::Object>& pyclass_Var_Urho3D_Engine)
{
    // Class Engine Implementation
pyclass_Var_Urho3D_Engine
  .def("GetType", (Urho3D::StringHash (Urho3D::Engine::*)() const) &Urho3D::Engine::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Engine::*)() const) &Urho3D::Engine::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Engine::*)() const) &Urho3D::Engine::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Engine", (void (Urho3D::Engine::*)()) &Urho3D::Engine::~Engine, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Initialize", (bool (Urho3D::Engine::*)(const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::Engine::Initialize, "todo: docstring", py::arg("parameters"))
  .def("InitializeResourceCache", (bool (Urho3D::Engine::*)(const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &, bool)) &Urho3D::Engine::InitializeResourceCache, "todo: docstring", py::arg("parameters"), py::arg("removeOld")=true)
  .def("RunFrame", (void (Urho3D::Engine::*)()) &Urho3D::Engine::RunFrame, "todo: docstring")
  .def("CreateConsole", (Urho3D::Console * (Urho3D::Engine::*)()) &Urho3D::Engine::CreateConsole, "todo: docstring")
  .def("CreateDebugHud", (Urho3D::DebugHud * (Urho3D::Engine::*)()) &Urho3D::Engine::CreateDebugHud, "todo: docstring")
  .def("SetMinFps", (void (Urho3D::Engine::*)(int)) &Urho3D::Engine::SetMinFps, "todo: docstring", py::arg("fps"))
  .def("SetMaxFps", (void (Urho3D::Engine::*)(int)) &Urho3D::Engine::SetMaxFps, "todo: docstring", py::arg("fps"))
  .def("SetMaxInactiveFps", (void (Urho3D::Engine::*)(int)) &Urho3D::Engine::SetMaxInactiveFps, "todo: docstring", py::arg("fps"))
  .def("SetTimeStepSmoothing", (void (Urho3D::Engine::*)(int)) &Urho3D::Engine::SetTimeStepSmoothing, "todo: docstring", py::arg("frames"))
  .def("SetPauseMinimized", (void (Urho3D::Engine::*)(bool)) &Urho3D::Engine::SetPauseMinimized, "todo: docstring", py::arg("enable"))
  .def("SetAutoExit", (void (Urho3D::Engine::*)(bool)) &Urho3D::Engine::SetAutoExit, "todo: docstring", py::arg("enable"))
  .def("SetNextTimeStep", (void (Urho3D::Engine::*)(float)) &Urho3D::Engine::SetNextTimeStep, "todo: docstring", py::arg("seconds"))
  .def("Exit", (void (Urho3D::Engine::*)()) &Urho3D::Engine::Exit, "todo: docstring")
  .def("DumpProfiler", (void (Urho3D::Engine::*)()) &Urho3D::Engine::DumpProfiler, "todo: docstring")
  .def("DumpResources", (void (Urho3D::Engine::*)(bool)) &Urho3D::Engine::DumpResources, "todo: docstring", py::arg("dumpFileName")=false)
  .def("DumpMemory", (void (Urho3D::Engine::*)()) &Urho3D::Engine::DumpMemory, "todo: docstring")
  .def("GetNextTimeStep", (float (Urho3D::Engine::*)() const) &Urho3D::Engine::GetNextTimeStep, "todo: docstring")
  .def("GetMinFps", (int (Urho3D::Engine::*)() const) &Urho3D::Engine::GetMinFps, "todo: docstring")
  .def("GetMaxFps", (int (Urho3D::Engine::*)() const) &Urho3D::Engine::GetMaxFps, "todo: docstring")
  .def("GetMaxInactiveFps", (int (Urho3D::Engine::*)() const) &Urho3D::Engine::GetMaxInactiveFps, "todo: docstring")
  .def("GetTimeStepSmoothing", (int (Urho3D::Engine::*)() const) &Urho3D::Engine::GetTimeStepSmoothing, "todo: docstring")
  .def("GetPauseMinimized", (bool (Urho3D::Engine::*)() const) &Urho3D::Engine::GetPauseMinimized, "todo: docstring")
  .def("GetAutoExit", (bool (Urho3D::Engine::*)() const) &Urho3D::Engine::GetAutoExit, "todo: docstring")
  .def("IsInitialized", (bool (Urho3D::Engine::*)() const) &Urho3D::Engine::IsInitialized, "todo: docstring")
  .def("IsExiting", (bool (Urho3D::Engine::*)() const) &Urho3D::Engine::IsExiting, "todo: docstring")
  .def("IsHeadless", (bool (Urho3D::Engine::*)() const) &Urho3D::Engine::IsHeadless, "todo: docstring")
  .def("Update", (void (Urho3D::Engine::*)()) &Urho3D::Engine::Update, "todo: docstring")
  .def("Render", (void (Urho3D::Engine::*)()) &Urho3D::Engine::Render, "todo: docstring")
  .def("ApplyFrameLimit", (void (Urho3D::Engine::*)()) &Urho3D::Engine::ApplyFrameLimit, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Text(py::class_<Urho3D::Text, Urho3D::SharedPtr<Urho3D::Text>, Urho3D::UISelectable>& pyclass_Var_Urho3D_Text)
{
    // Class Text Implementation
pyclass_Var_Urho3D_Text
  .def("GetType", (Urho3D::StringHash (Urho3D::Text::*)() const) &Urho3D::Text::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Text::*)() const) &Urho3D::Text::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Text::*)() const) &Urho3D::Text::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Text", (void (Urho3D::Text::*)()) &Urho3D::Text::~Text, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::Text::*)()) &Urho3D::Text::ApplyAttributes, "todo: docstring")
  //.def("GetBatches", (void (Urho3D::Text::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::Text::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnResize", (void (Urho3D::Text::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::Text::OnResize, "todo: docstring", py::arg("newSize"), py::arg("delta"))
  .def("OnIndentSet", (void (Urho3D::Text::*)()) &Urho3D::Text::OnIndentSet, "todo: docstring")
  .def("SetFont", (bool (Urho3D::Text::*)(const Urho3D::String &, float)) &Urho3D::Text::SetFont, "todo: docstring", py::arg("fontName"), py::arg("size")=DEFAULT_FONT_SIZE)
  .def("SetFont", (bool (Urho3D::Text::*)(Urho3D::Font *, float)) &Urho3D::Text::SetFont, "todo: docstring", py::arg("font"), py::arg("size")=DEFAULT_FONT_SIZE)
  .def("SetFontSize", (bool (Urho3D::Text::*)(float)) &Urho3D::Text::SetFontSize, "todo: docstring", py::arg("size"))
  .def("SetText", (void (Urho3D::Text::*)(const Urho3D::String &)) &Urho3D::Text::SetText, "todo: docstring", py::arg("text"))
  .def("SetTextAlignment", (void (Urho3D::Text::*)(Urho3D::HorizontalAlignment)) &Urho3D::Text::SetTextAlignment, "todo: docstring", py::arg("align"))
  .def("SetRowSpacing", (void (Urho3D::Text::*)(float)) &Urho3D::Text::SetRowSpacing, "todo: docstring", py::arg("spacing"))
  .def("SetWordwrap", (void (Urho3D::Text::*)(bool)) &Urho3D::Text::SetWordwrap, "todo: docstring", py::arg("enable"))
  .def("SetAutoLocalizable", (void (Urho3D::Text::*)(bool)) &Urho3D::Text::SetAutoLocalizable, "todo: docstring", py::arg("enable"))
  .def("SetSelection", (void (Urho3D::Text::*)(unsigned int, unsigned int)) &Urho3D::Text::SetSelection, "todo: docstring", py::arg("start"), py::arg("length")=M_MAX_UNSIGNED)
  .def("ClearSelection", (void (Urho3D::Text::*)()) &Urho3D::Text::ClearSelection, "todo: docstring")
  .def("SetTextEffect", (void (Urho3D::Text::*)(Urho3D::TextEffect)) &Urho3D::Text::SetTextEffect, "todo: docstring", py::arg("textEffect"))
  .def("SetEffectShadowOffset", (void (Urho3D::Text::*)(const Urho3D::IntVector2 &)) &Urho3D::Text::SetEffectShadowOffset, "todo: docstring", py::arg("offset"))
  .def("SetEffectStrokeThickness", (void (Urho3D::Text::*)(int)) &Urho3D::Text::SetEffectStrokeThickness, "todo: docstring", py::arg("thickness"))
  .def("SetEffectRoundStroke", (void (Urho3D::Text::*)(bool)) &Urho3D::Text::SetEffectRoundStroke, "todo: docstring", py::arg("roundStroke"))
  .def("SetEffectColor", (void (Urho3D::Text::*)(const Urho3D::Color &)) &Urho3D::Text::SetEffectColor, "todo: docstring", py::arg("effectColor"))
  .def("GetFont", (Urho3D::Font * (Urho3D::Text::*)() const) &Urho3D::Text::GetFont, "todo: docstring")
  .def("GetFontSize", (float (Urho3D::Text::*)() const) &Urho3D::Text::GetFontSize, "todo: docstring")
  .def("GetText", (const Urho3D::String & (Urho3D::Text::*)() const) &Urho3D::Text::GetText, "todo: docstring")
  .def("GetTextAlignment", (Urho3D::HorizontalAlignment (Urho3D::Text::*)() const) &Urho3D::Text::GetTextAlignment, "todo: docstring")
  .def("GetRowSpacing", (float (Urho3D::Text::*)() const) &Urho3D::Text::GetRowSpacing, "todo: docstring")
  .def("GetWordwrap", (bool (Urho3D::Text::*)() const) &Urho3D::Text::GetWordwrap, "todo: docstring")
  .def("GetAutoLocalizable", (bool (Urho3D::Text::*)() const) &Urho3D::Text::GetAutoLocalizable, "todo: docstring")
  .def("GetSelectionStart", (unsigned int (Urho3D::Text::*)() const) &Urho3D::Text::GetSelectionStart, "todo: docstring")
  .def("GetSelectionLength", (unsigned int (Urho3D::Text::*)() const) &Urho3D::Text::GetSelectionLength, "todo: docstring")
  .def("GetTextEffect", (Urho3D::TextEffect (Urho3D::Text::*)() const) &Urho3D::Text::GetTextEffect, "todo: docstring")
  .def("GetEffectShadowOffset", (const Urho3D::IntVector2 & (Urho3D::Text::*)() const) &Urho3D::Text::GetEffectShadowOffset, "todo: docstring")
  .def("GetEffectStrokeThickness", (int (Urho3D::Text::*)() const) &Urho3D::Text::GetEffectStrokeThickness, "todo: docstring")
  .def("GetEffectRoundStroke", (bool (Urho3D::Text::*)() const) &Urho3D::Text::GetEffectRoundStroke, "todo: docstring")
  .def("GetEffectColor", (const Urho3D::Color & (Urho3D::Text::*)() const) &Urho3D::Text::GetEffectColor, "todo: docstring")
  .def("GetRowHeight", (float (Urho3D::Text::*)() const) &Urho3D::Text::GetRowHeight, "todo: docstring")
  .def("GetNumRows", (unsigned int (Urho3D::Text::*)() const) &Urho3D::Text::GetNumRows, "todo: docstring")
  .def("GetNumChars", (unsigned int (Urho3D::Text::*)() const) &Urho3D::Text::GetNumChars, "todo: docstring")
  .def("GetRowWidth", (float (Urho3D::Text::*)(unsigned int) const) &Urho3D::Text::GetRowWidth, "todo: docstring", py::arg("index"))
  .def("GetCharPosition", (Urho3D::Vector2 (Urho3D::Text::*)(unsigned int)) &Urho3D::Text::GetCharPosition, "todo: docstring", py::arg("index"))
  .def("GetCharSize", (Urho3D::Vector2 (Urho3D::Text::*)(unsigned int)) &Urho3D::Text::GetCharSize, "todo: docstring", py::arg("index"))
  .def("SetEffectDepthBias", (void (Urho3D::Text::*)(float)) &Urho3D::Text::SetEffectDepthBias, "todo: docstring", py::arg("bias"))
  .def("GetEffectDepthBias", (float (Urho3D::Text::*)() const) &Urho3D::Text::GetEffectDepthBias, "todo: docstring")
  .def("SetFontAttr", (void (Urho3D::Text::*)(const Urho3D::ResourceRef &)) &Urho3D::Text::SetFontAttr, "todo: docstring", py::arg("value"))
  .def("GetFontAttr", (Urho3D::ResourceRef (Urho3D::Text::*)() const) &Urho3D::Text::GetFontAttr, "todo: docstring")
  .def("SetTextAttr", (void (Urho3D::Text::*)(const Urho3D::String &)) &Urho3D::Text::SetTextAttr, "todo: docstring", py::arg("value"))
  .def("GetTextAttr", (Urho3D::String (Urho3D::Text::*)() const) &Urho3D::Text::GetTextAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_AnimatedModel(py::class_<Urho3D::AnimatedModel, Urho3D::SharedPtr<Urho3D::AnimatedModel>, Urho3D::StaticModel>& pyclass_Var_Urho3D_AnimatedModel)
{
    // Class AnimatedModel Implementation
pyclass_Var_Urho3D_AnimatedModel
  .def("GetType", (Urho3D::StringHash (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~AnimatedModel", (void (Urho3D::AnimatedModel::*)()) &Urho3D::AnimatedModel::~AnimatedModel, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Load", (bool (Urho3D::AnimatedModel::*)(Urho3D::Deserializer &)) &Urho3D::AnimatedModel::Load, "todo: docstring", py::arg("source"))
  .def("LoadXML", (bool (Urho3D::AnimatedModel::*)(const Urho3D::XMLElement &)) &Urho3D::AnimatedModel::LoadXML, "todo: docstring", py::arg("source"))
  .def("LoadJSON", (bool (Urho3D::AnimatedModel::*)(const Urho3D::JSONValue &)) &Urho3D::AnimatedModel::LoadJSON, "todo: docstring", py::arg("source"))
  .def("ApplyAttributes", (void (Urho3D::AnimatedModel::*)()) &Urho3D::AnimatedModel::ApplyAttributes, "todo: docstring")
  //.def("ProcessRayQuery", (void (Urho3D::AnimatedModel::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::AnimatedModel::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("Update", (void (Urho3D::AnimatedModel::*)(const Urho3D::FrameInfo &)) &Urho3D::AnimatedModel::Update, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::AnimatedModel::*)(const Urho3D::FrameInfo &)) &Urho3D::AnimatedModel::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateGeometry", (void (Urho3D::AnimatedModel::*)(const Urho3D::FrameInfo &)) &Urho3D::AnimatedModel::UpdateGeometry, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetUpdateGeometryType", (Urho3D::UpdateGeometryType (Urho3D::AnimatedModel::*)()) &Urho3D::AnimatedModel::GetUpdateGeometryType, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::AnimatedModel::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::AnimatedModel::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetModel", (void (Urho3D::AnimatedModel::*)(Urho3D::Model *, bool)) &Urho3D::AnimatedModel::SetModel, "todo: docstring", py::arg("model"), py::arg("createBones")=true)
  .def("AddAnimationState", (Urho3D::AnimationState * (Urho3D::AnimatedModel::*)(Urho3D::Animation *)) &Urho3D::AnimatedModel::AddAnimationState, "todo: docstring", py::arg("animation"))
  .def("RemoveAnimationState", (void (Urho3D::AnimatedModel::*)(Urho3D::Animation *)) &Urho3D::AnimatedModel::RemoveAnimationState, "todo: docstring", py::arg("animation"))
  .def("RemoveAnimationState", (void (Urho3D::AnimatedModel::*)(const Urho3D::String &)) &Urho3D::AnimatedModel::RemoveAnimationState, "todo: docstring", py::arg("animationName"))
  .def("RemoveAnimationState", (void (Urho3D::AnimatedModel::*)(Urho3D::StringHash)) &Urho3D::AnimatedModel::RemoveAnimationState, "todo: docstring", py::arg("animationNameHash"))
  .def("RemoveAnimationState", (void (Urho3D::AnimatedModel::*)(Urho3D::AnimationState *)) &Urho3D::AnimatedModel::RemoveAnimationState, "todo: docstring", py::arg("state"))
  .def("RemoveAnimationState", (void (Urho3D::AnimatedModel::*)(unsigned int)) &Urho3D::AnimatedModel::RemoveAnimationState, "todo: docstring", py::arg("index"))
  .def("RemoveAllAnimationStates", (void (Urho3D::AnimatedModel::*)()) &Urho3D::AnimatedModel::RemoveAllAnimationStates, "todo: docstring")
  .def("SetAnimationLodBias", (void (Urho3D::AnimatedModel::*)(float)) &Urho3D::AnimatedModel::SetAnimationLodBias, "todo: docstring", py::arg("bias"))
  .def("SetUpdateInvisible", (void (Urho3D::AnimatedModel::*)(bool)) &Urho3D::AnimatedModel::SetUpdateInvisible, "todo: docstring", py::arg("enable"))
  .def("SetMorphWeight", (void (Urho3D::AnimatedModel::*)(unsigned int, float)) &Urho3D::AnimatedModel::SetMorphWeight, "todo: docstring", py::arg("index"), py::arg("weight"))
  .def("SetMorphWeight", (void (Urho3D::AnimatedModel::*)(const Urho3D::String &, float)) &Urho3D::AnimatedModel::SetMorphWeight, "todo: docstring", py::arg("name"), py::arg("weight"))
  .def("SetMorphWeight", (void (Urho3D::AnimatedModel::*)(Urho3D::StringHash, float)) &Urho3D::AnimatedModel::SetMorphWeight, "todo: docstring", py::arg("nameHash"), py::arg("weight"))
  .def("ResetMorphWeights", (void (Urho3D::AnimatedModel::*)()) &Urho3D::AnimatedModel::ResetMorphWeights, "todo: docstring")
  .def("ApplyAnimation", (void (Urho3D::AnimatedModel::*)()) &Urho3D::AnimatedModel::ApplyAnimation, "todo: docstring")
  .def("GetSkeleton", (Urho3D::Skeleton & (Urho3D::AnimatedModel::*)()) &Urho3D::AnimatedModel::GetSkeleton, "todo: docstring")
  //.def("GetAnimationStates", (const Vector<SharedPtr<Urho3D::AnimationState> > & (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetAnimationStates, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumAnimationStates", (unsigned int (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetNumAnimationStates, "todo: docstring")
  .def("GetAnimationState", (Urho3D::AnimationState * (Urho3D::AnimatedModel::*)(Urho3D::Animation *) const) &Urho3D::AnimatedModel::GetAnimationState, "todo: docstring", py::arg("animation"))
  .def("GetAnimationState", (Urho3D::AnimationState * (Urho3D::AnimatedModel::*)(const Urho3D::String &) const) &Urho3D::AnimatedModel::GetAnimationState, "todo: docstring", py::arg("animationName"))
  .def("GetAnimationState", (Urho3D::AnimationState * (Urho3D::AnimatedModel::*)(Urho3D::StringHash) const) &Urho3D::AnimatedModel::GetAnimationState, "todo: docstring", py::arg("animationNameHash"))
  .def("GetAnimationState", (Urho3D::AnimationState * (Urho3D::AnimatedModel::*)(unsigned int) const) &Urho3D::AnimatedModel::GetAnimationState, "todo: docstring", py::arg("index"))
  .def("GetAnimationLodBias", (float (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetAnimationLodBias, "todo: docstring")
  .def("GetUpdateInvisible", (bool (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetUpdateInvisible, "todo: docstring")
  //.def("GetMorphs", (const Vector<Urho3D::ModelMorph> & (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetMorphs, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetMorphVertexBuffers", (const Vector<SharedPtr<Urho3D::VertexBuffer> > & (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetMorphVertexBuffers, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumMorphs", (unsigned int (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetNumMorphs, "todo: docstring")
  .def("GetMorphWeight", (float (Urho3D::AnimatedModel::*)(unsigned int) const) &Urho3D::AnimatedModel::GetMorphWeight, "todo: docstring", py::arg("index"))
  .def("GetMorphWeight", (float (Urho3D::AnimatedModel::*)(const Urho3D::String &) const) &Urho3D::AnimatedModel::GetMorphWeight, "todo: docstring", py::arg("name"))
  .def("GetMorphWeight", (float (Urho3D::AnimatedModel::*)(Urho3D::StringHash) const) &Urho3D::AnimatedModel::GetMorphWeight, "todo: docstring", py::arg("nameHash"))
  .def("IsMaster", (bool (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::IsMaster, "todo: docstring")
  .def("SetModelAttr", (void (Urho3D::AnimatedModel::*)(const Urho3D::ResourceRef &)) &Urho3D::AnimatedModel::SetModelAttr, "todo: docstring", py::arg("value"))
  .def("SetBonesEnabledAttr", (void (Urho3D::AnimatedModel::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::AnimatedModel::SetBonesEnabledAttr, "todo: docstring", py::arg("value"))
  .def("SetAnimationStatesAttr", (void (Urho3D::AnimatedModel::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::AnimatedModel::SetAnimationStatesAttr, "todo: docstring", py::arg("value"))
  .def("SetMorphsAttr", (void (Urho3D::AnimatedModel::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::AnimatedModel::SetMorphsAttr, "todo: docstring", py::arg("value"))
  .def("GetModelAttr", (Urho3D::ResourceRef (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetModelAttr, "todo: docstring")
  .def("GetBonesEnabledAttr", (Urho3D::VariantVector (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetBonesEnabledAttr, "todo: docstring")
  .def("GetAnimationStatesAttr", (Urho3D::VariantVector (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetAnimationStatesAttr, "todo: docstring")
  //.def("GetMorphsAttr", (const PODVector<unsigned char> & (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetMorphsAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetGeometryBoneMappings", (const Vector<PODVector<unsigned int> > & (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetGeometryBoneMappings, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetGeometrySkinMatrices", (const Vector<PODVector<Urho3D::Matrix3x4> > & (Urho3D::AnimatedModel::*)() const) &Urho3D::AnimatedModel::GetGeometrySkinMatrices, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("UpdateBoneBoundingBox", (void (Urho3D::AnimatedModel::*)()) &Urho3D::AnimatedModel::UpdateBoneBoundingBox, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_BillboardSet(py::class_<Urho3D::BillboardSet, Urho3D::SharedPtr<Urho3D::BillboardSet>, Urho3D::Drawable>& pyclass_Var_Urho3D_BillboardSet)
{
    // Class BillboardSet Implementation
pyclass_Var_Urho3D_BillboardSet
  .def("GetType", (Urho3D::StringHash (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~BillboardSet", (void (Urho3D::BillboardSet::*)()) &Urho3D::BillboardSet::~BillboardSet, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("ProcessRayQuery", (void (Urho3D::BillboardSet::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::BillboardSet::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::BillboardSet::*)(const Urho3D::FrameInfo &)) &Urho3D::BillboardSet::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateGeometry", (void (Urho3D::BillboardSet::*)(const Urho3D::FrameInfo &)) &Urho3D::BillboardSet::UpdateGeometry, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetUpdateGeometryType", (Urho3D::UpdateGeometryType (Urho3D::BillboardSet::*)()) &Urho3D::BillboardSet::GetUpdateGeometryType, "todo: docstring")
  .def("SetMaterial", (void (Urho3D::BillboardSet::*)(Urho3D::Material *)) &Urho3D::BillboardSet::SetMaterial, "todo: docstring", py::arg("material"))
  .def("SetNumBillboards", (void (Urho3D::BillboardSet::*)(unsigned int)) &Urho3D::BillboardSet::SetNumBillboards, "todo: docstring", py::arg("num"))
  .def("SetRelative", (void (Urho3D::BillboardSet::*)(bool)) &Urho3D::BillboardSet::SetRelative, "todo: docstring", py::arg("enable"))
  .def("SetScaled", (void (Urho3D::BillboardSet::*)(bool)) &Urho3D::BillboardSet::SetScaled, "todo: docstring", py::arg("enable"))
  .def("SetSorted", (void (Urho3D::BillboardSet::*)(bool)) &Urho3D::BillboardSet::SetSorted, "todo: docstring", py::arg("enable"))
  .def("SetFixedScreenSize", (void (Urho3D::BillboardSet::*)(bool)) &Urho3D::BillboardSet::SetFixedScreenSize, "todo: docstring", py::arg("enable"))
  .def("SetFaceCameraMode", (void (Urho3D::BillboardSet::*)(Urho3D::FaceCameraMode)) &Urho3D::BillboardSet::SetFaceCameraMode, "todo: docstring", py::arg("mode"))
  .def("SetMinAngle", (void (Urho3D::BillboardSet::*)(float)) &Urho3D::BillboardSet::SetMinAngle, "todo: docstring", py::arg("angle"))
  .def("SetAnimationLodBias", (void (Urho3D::BillboardSet::*)(float)) &Urho3D::BillboardSet::SetAnimationLodBias, "todo: docstring", py::arg("bias"))
  .def("Commit", (void (Urho3D::BillboardSet::*)()) &Urho3D::BillboardSet::Commit, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetMaterial, "todo: docstring")
  .def("GetNumBillboards", (unsigned int (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetNumBillboards, "todo: docstring")
  //.def("GetBillboards", (PODVector<Urho3D::Billboard> & (Urho3D::BillboardSet::*)()) &Urho3D::BillboardSet::GetBillboards, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetBillboard", (Urho3D::Billboard * (Urho3D::BillboardSet::*)(unsigned int)) &Urho3D::BillboardSet::GetBillboard, "todo: docstring", py::arg("index"))
  .def("IsRelative", (bool (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::IsRelative, "todo: docstring")
  .def("IsScaled", (bool (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::IsScaled, "todo: docstring")
  .def("IsSorted", (bool (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::IsSorted, "todo: docstring")
  .def("IsFixedScreenSize", (bool (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::IsFixedScreenSize, "todo: docstring")
  .def("GetFaceCameraMode", (Urho3D::FaceCameraMode (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetFaceCameraMode, "todo: docstring")
  .def("GetMinAngle", (float (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetMinAngle, "todo: docstring")
  .def("GetAnimationLodBias", (float (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetAnimationLodBias, "todo: docstring")
  .def("SetMaterialAttr", (void (Urho3D::BillboardSet::*)(const Urho3D::ResourceRef &)) &Urho3D::BillboardSet::SetMaterialAttr, "todo: docstring", py::arg("value"))
  .def("SetBillboardsAttr", (void (Urho3D::BillboardSet::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::BillboardSet::SetBillboardsAttr, "todo: docstring", py::arg("value"))
  .def("SetNetBillboardsAttr", (void (Urho3D::BillboardSet::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::BillboardSet::SetNetBillboardsAttr, "todo: docstring", py::arg("value"))
  .def("GetMaterialAttr", (Urho3D::ResourceRef (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetMaterialAttr, "todo: docstring")
  .def("GetBillboardsAttr", (Urho3D::VariantVector (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetBillboardsAttr, "todo: docstring")
  //.def("GetNetBillboardsAttr", (const PODVector<unsigned char> & (Urho3D::BillboardSet::*)() const) &Urho3D::BillboardSet::GetNetBillboardsAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_DecalSet(py::class_<Urho3D::DecalSet, Urho3D::SharedPtr<Urho3D::DecalSet>, Urho3D::Drawable>& pyclass_Var_Urho3D_DecalSet)
{
    // Class DecalSet Implementation
pyclass_Var_Urho3D_DecalSet
  .def("GetType", (Urho3D::StringHash (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~DecalSet", (void (Urho3D::DecalSet::*)()) &Urho3D::DecalSet::~DecalSet, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::DecalSet::*)()) &Urho3D::DecalSet::ApplyAttributes, "todo: docstring")
  .def("OnSetEnabled", (void (Urho3D::DecalSet::*)()) &Urho3D::DecalSet::OnSetEnabled, "todo: docstring")
  //.def("ProcessRayQuery", (void (Urho3D::DecalSet::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::DecalSet::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::DecalSet::*)(const Urho3D::FrameInfo &)) &Urho3D::DecalSet::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateGeometry", (void (Urho3D::DecalSet::*)(const Urho3D::FrameInfo &)) &Urho3D::DecalSet::UpdateGeometry, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetUpdateGeometryType", (Urho3D::UpdateGeometryType (Urho3D::DecalSet::*)()) &Urho3D::DecalSet::GetUpdateGeometryType, "todo: docstring")
  .def("SetMaterial", (void (Urho3D::DecalSet::*)(Urho3D::Material *)) &Urho3D::DecalSet::SetMaterial, "todo: docstring", py::arg("material"))
  .def("SetMaxVertices", (void (Urho3D::DecalSet::*)(unsigned int)) &Urho3D::DecalSet::SetMaxVertices, "todo: docstring", py::arg("num"))
  .def("SetMaxIndices", (void (Urho3D::DecalSet::*)(unsigned int)) &Urho3D::DecalSet::SetMaxIndices, "todo: docstring", py::arg("num"))
  .def("SetOptimizeBufferSize", (void (Urho3D::DecalSet::*)(bool)) &Urho3D::DecalSet::SetOptimizeBufferSize, "todo: docstring", py::arg("enable"))
  .def("AddDecal", (bool (Urho3D::DecalSet::*)(Urho3D::Drawable *, const Urho3D::Vector3 &, const Urho3D::Quaternion &, float, float, float, const Urho3D::Vector2 &, const Urho3D::Vector2 &, float, float, unsigned int)) &Urho3D::DecalSet::AddDecal, "todo: docstring", py::arg("target"), py::arg("worldPosition"), py::arg("worldRotation"), py::arg("size"), py::arg("aspectRatio"), py::arg("depth"), py::arg("topLeftUV"), py::arg("bottomRightUV"), py::arg("timeToLive")=0.0f, py::arg("normalCutoff")=0.1f, py::arg("subGeometry")=M_MAX_UNSIGNED)
  .def("RemoveDecals", (void (Urho3D::DecalSet::*)(unsigned int)) &Urho3D::DecalSet::RemoveDecals, "todo: docstring", py::arg("num"))
  .def("RemoveAllDecals", (void (Urho3D::DecalSet::*)()) &Urho3D::DecalSet::RemoveAllDecals, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetMaterial, "todo: docstring")
  .def("GetNumDecals", (unsigned int (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetNumDecals, "todo: docstring")
  .def("GetNumVertices", (unsigned int (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetNumVertices, "todo: docstring")
  .def("GetNumIndices", (unsigned int (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetNumIndices, "todo: docstring")
  .def("GetMaxVertices", (unsigned int (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetMaxVertices, "todo: docstring")
  .def("GetMaxIndices", (unsigned int (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetMaxIndices, "todo: docstring")
  .def("GetOptimizeBufferSize", (bool (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetOptimizeBufferSize, "todo: docstring")
  .def("SetMaterialAttr", (void (Urho3D::DecalSet::*)(const Urho3D::ResourceRef &)) &Urho3D::DecalSet::SetMaterialAttr, "todo: docstring", py::arg("value"))
  .def("SetDecalsAttr", (void (Urho3D::DecalSet::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::DecalSet::SetDecalsAttr, "todo: docstring", py::arg("value"))
  .def("GetMaterialAttr", (Urho3D::ResourceRef (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetMaterialAttr, "todo: docstring")
  //.def("GetDecalsAttr", (PODVector<unsigned char> (Urho3D::DecalSet::*)() const) &Urho3D::DecalSet::GetDecalsAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_Octree(py::class_<Urho3D::Octree, Urho3D::SharedPtr<Urho3D::Octree>, Urho3D::Component, Urho3D::Octant>& pyclass_Var_Urho3D_Octree)
{
    // Class Octree Implementation
pyclass_Var_Urho3D_Octree
  .def("GetType", (Urho3D::StringHash (Urho3D::Octree::*)() const) &Urho3D::Octree::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Octree::*)() const) &Urho3D::Octree::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Octree::*)() const) &Urho3D::Octree::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Octree", (void (Urho3D::Octree::*)()) &Urho3D::Octree::~Octree, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::Octree::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::Octree::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetSize", (void (Urho3D::Octree::*)(const Urho3D::BoundingBox &, unsigned int)) &Urho3D::Octree::SetSize, "todo: docstring", py::arg("box"), py::arg("numLevels"))
  //.def("Update", (void (Urho3D::Octree::*)(const Urho3D::FrameInfo &)) &Urho3D::Octree::Update, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("AddManualDrawable", (void (Urho3D::Octree::*)(Urho3D::Drawable *)) &Urho3D::Octree::AddManualDrawable, "todo: docstring", py::arg("drawable"))
  .def("RemoveManualDrawable", (void (Urho3D::Octree::*)(Urho3D::Drawable *)) &Urho3D::Octree::RemoveManualDrawable, "todo: docstring", py::arg("drawable"))
  .def("GetDrawables", (void (Urho3D::Octree::*)(Urho3D::OctreeQuery &) const) &Urho3D::Octree::GetDrawables, "todo: docstring", py::arg("query"))
  .def("Raycast", (void (Urho3D::Octree::*)(Urho3D::RayOctreeQuery &) const) &Urho3D::Octree::Raycast, "todo: docstring", py::arg("query"))
  .def("RaycastSingle", (void (Urho3D::Octree::*)(Urho3D::RayOctreeQuery &) const) &Urho3D::Octree::RaycastSingle, "todo: docstring", py::arg("query"))
  .def("GetNumLevels", (unsigned int (Urho3D::Octree::*)() const) &Urho3D::Octree::GetNumLevels, "todo: docstring")
  .def("QueueUpdate", (void (Urho3D::Octree::*)(Urho3D::Drawable *)) &Urho3D::Octree::QueueUpdate, "todo: docstring", py::arg("drawable"))
  .def("CancelUpdate", (void (Urho3D::Octree::*)(Urho3D::Drawable *)) &Urho3D::Octree::CancelUpdate, "todo: docstring", py::arg("drawable"))
  .def("DrawDebugGeometry", (void (Urho3D::Octree::*)(bool)) &Urho3D::Octree::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
// Class Variables:
;
}

void Implement_Urho3D_ParticleEmitter(py::class_<Urho3D::ParticleEmitter, Urho3D::SharedPtr<Urho3D::ParticleEmitter>, Urho3D::BillboardSet>& pyclass_Var_Urho3D_ParticleEmitter)
{
    // Class ParticleEmitter Implementation
pyclass_Var_Urho3D_ParticleEmitter
  .def("GetType", (Urho3D::StringHash (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ParticleEmitter", (void (Urho3D::ParticleEmitter::*)()) &Urho3D::ParticleEmitter::~ParticleEmitter, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::ParticleEmitter::*)()) &Urho3D::ParticleEmitter::OnSetEnabled, "todo: docstring")
  //.def("Update", (void (Urho3D::ParticleEmitter::*)(const Urho3D::FrameInfo &)) &Urho3D::ParticleEmitter::Update, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetEffect", (void (Urho3D::ParticleEmitter::*)(Urho3D::ParticleEffect *)) &Urho3D::ParticleEmitter::SetEffect, "todo: docstring", py::arg("effect"))
  .def("SetNumParticles", (void (Urho3D::ParticleEmitter::*)(unsigned int)) &Urho3D::ParticleEmitter::SetNumParticles, "todo: docstring", py::arg("num"))
  .def("SetEmitting", (void (Urho3D::ParticleEmitter::*)(bool)) &Urho3D::ParticleEmitter::SetEmitting, "todo: docstring", py::arg("enable"))
  .def("SetSerializeParticles", (void (Urho3D::ParticleEmitter::*)(bool)) &Urho3D::ParticleEmitter::SetSerializeParticles, "todo: docstring", py::arg("enable"))
  .def("SetAutoRemoveMode", (void (Urho3D::ParticleEmitter::*)(Urho3D::AutoRemoveMode)) &Urho3D::ParticleEmitter::SetAutoRemoveMode, "todo: docstring", py::arg("mode"))
  .def("ResetEmissionTimer", (void (Urho3D::ParticleEmitter::*)()) &Urho3D::ParticleEmitter::ResetEmissionTimer, "todo: docstring")
  .def("RemoveAllParticles", (void (Urho3D::ParticleEmitter::*)()) &Urho3D::ParticleEmitter::RemoveAllParticles, "todo: docstring")
  .def("Reset", (void (Urho3D::ParticleEmitter::*)()) &Urho3D::ParticleEmitter::Reset, "todo: docstring")
  .def("ApplyEffect", (void (Urho3D::ParticleEmitter::*)()) &Urho3D::ParticleEmitter::ApplyEffect, "todo: docstring")
  .def("GetEffect", (Urho3D::ParticleEffect * (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetEffect, "todo: docstring")
  .def("GetNumParticles", (unsigned int (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetNumParticles, "todo: docstring")
  .def("IsEmitting", (bool (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::IsEmitting, "todo: docstring")
  .def("GetSerializeParticles", (bool (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetSerializeParticles, "todo: docstring")
  .def("GetAutoRemoveMode", (Urho3D::AutoRemoveMode (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetAutoRemoveMode, "todo: docstring")
  .def("SetEffectAttr", (void (Urho3D::ParticleEmitter::*)(const Urho3D::ResourceRef &)) &Urho3D::ParticleEmitter::SetEffectAttr, "todo: docstring", py::arg("value"))
  .def("GetEffectAttr", (Urho3D::ResourceRef (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetEffectAttr, "todo: docstring")
  .def("SetParticlesAttr", (void (Urho3D::ParticleEmitter::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::ParticleEmitter::SetParticlesAttr, "todo: docstring", py::arg("value"))
  .def("GetParticlesAttr", (Urho3D::VariantVector (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetParticlesAttr, "todo: docstring")
  .def("GetParticleBillboardsAttr", (Urho3D::VariantVector (Urho3D::ParticleEmitter::*)() const) &Urho3D::ParticleEmitter::GetParticleBillboardsAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Skybox(py::class_<Urho3D::Skybox, Urho3D::SharedPtr<Urho3D::Skybox>, Urho3D::StaticModel>& pyclass_Var_Urho3D_Skybox)
{
    // Class Skybox Implementation
pyclass_Var_Urho3D_Skybox
  .def("GetType", (Urho3D::StringHash (Urho3D::Skybox::*)() const) &Urho3D::Skybox::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Skybox::*)() const) &Urho3D::Skybox::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Skybox::*)() const) &Urho3D::Skybox::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Skybox", (void (Urho3D::Skybox::*)()) &Urho3D::Skybox::~Skybox, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("ProcessRayQuery", (void (Urho3D::Skybox::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::Skybox::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::Skybox::*)(const Urho3D::FrameInfo &)) &Urho3D::Skybox::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_TerrainPatch(py::class_<Urho3D::TerrainPatch, Urho3D::SharedPtr<Urho3D::TerrainPatch>, Urho3D::Drawable>& pyclass_Var_Urho3D_TerrainPatch)
{
    // Class TerrainPatch Implementation
pyclass_Var_Urho3D_TerrainPatch
  .def("GetType", (Urho3D::StringHash (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~TerrainPatch", (void (Urho3D::TerrainPatch::*)()) &Urho3D::TerrainPatch::~TerrainPatch, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("ProcessRayQuery", (void (Urho3D::TerrainPatch::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::TerrainPatch::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::TerrainPatch::*)(const Urho3D::FrameInfo &)) &Urho3D::TerrainPatch::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateGeometry", (void (Urho3D::TerrainPatch::*)(const Urho3D::FrameInfo &)) &Urho3D::TerrainPatch::UpdateGeometry, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetUpdateGeometryType", (Urho3D::UpdateGeometryType (Urho3D::TerrainPatch::*)()) &Urho3D::TerrainPatch::GetUpdateGeometryType, "todo: docstring")
  .def("GetLodGeometry", (Urho3D::Geometry * (Urho3D::TerrainPatch::*)(unsigned int, unsigned int)) &Urho3D::TerrainPatch::GetLodGeometry, "todo: docstring", py::arg("batchIndex"), py::arg("level"))
  .def("GetNumOccluderTriangles", (unsigned int (Urho3D::TerrainPatch::*)()) &Urho3D::TerrainPatch::GetNumOccluderTriangles, "todo: docstring")
  .def("DrawOcclusion", (bool (Urho3D::TerrainPatch::*)(Urho3D::OcclusionBuffer *)) &Urho3D::TerrainPatch::DrawOcclusion, "todo: docstring", py::arg("buffer"))
  .def("DrawDebugGeometry", (void (Urho3D::TerrainPatch::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::TerrainPatch::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetOwner", (void (Urho3D::TerrainPatch::*)(Urho3D::Terrain *)) &Urho3D::TerrainPatch::SetOwner, "todo: docstring", py::arg("terrain"))
  .def("SetNeighbors", (void (Urho3D::TerrainPatch::*)(Urho3D::TerrainPatch *, Urho3D::TerrainPatch *, Urho3D::TerrainPatch *, Urho3D::TerrainPatch *)) &Urho3D::TerrainPatch::SetNeighbors, "todo: docstring", py::arg("north"), py::arg("south"), py::arg("west"), py::arg("east"))
  .def("SetMaterial", (void (Urho3D::TerrainPatch::*)(Urho3D::Material *)) &Urho3D::TerrainPatch::SetMaterial, "todo: docstring", py::arg("material"))
  .def("SetBoundingBox", (void (Urho3D::TerrainPatch::*)(const Urho3D::BoundingBox &)) &Urho3D::TerrainPatch::SetBoundingBox, "todo: docstring", py::arg("box"))
  .def("SetCoordinates", (void (Urho3D::TerrainPatch::*)(const Urho3D::IntVector2 &)) &Urho3D::TerrainPatch::SetCoordinates, "todo: docstring", py::arg("coordinates"))
  .def("ResetLod", (void (Urho3D::TerrainPatch::*)()) &Urho3D::TerrainPatch::ResetLod, "todo: docstring")
  .def("GetGeometry", (Urho3D::Geometry * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetGeometry, "todo: docstring")
  .def("GetMaxLodGeometry", (Urho3D::Geometry * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetMaxLodGeometry, "todo: docstring")
  .def("GetOcclusionGeometry", (Urho3D::Geometry * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetOcclusionGeometry, "todo: docstring")
  .def("GetVertexBuffer", (Urho3D::VertexBuffer * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetVertexBuffer, "todo: docstring")
  .def("GetOwner", (Urho3D::Terrain * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetOwner, "todo: docstring")
  .def("GetNorthPatch", (Urho3D::TerrainPatch * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetNorthPatch, "todo: docstring")
  .def("GetSouthPatch", (Urho3D::TerrainPatch * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetSouthPatch, "todo: docstring")
  .def("GetWestPatch", (Urho3D::TerrainPatch * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetWestPatch, "todo: docstring")
  .def("GetEastPatch", (Urho3D::TerrainPatch * (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetEastPatch, "todo: docstring")
  //.def("GetLodErrors", (PODVector<float> & (Urho3D::TerrainPatch::*)()) &Urho3D::TerrainPatch::GetLodErrors, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetCoordinates", (const Urho3D::IntVector2 & (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetCoordinates, "todo: docstring")
  .def("GetLodLevel", (unsigned int (Urho3D::TerrainPatch::*)() const) &Urho3D::TerrainPatch::GetLodLevel, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_IKConstraint(py::class_<Urho3D::IKConstraint, Urho3D::SharedPtr<Urho3D::IKConstraint>, Urho3D::Component>& pyclass_Var_Urho3D_IKConstraint)
{
    // Class IKConstraint Implementation
pyclass_Var_Urho3D_IKConstraint
  .def("GetType", (Urho3D::StringHash (Urho3D::IKConstraint::*)() const) &Urho3D::IKConstraint::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::IKConstraint::*)() const) &Urho3D::IKConstraint::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::IKConstraint::*)() const) &Urho3D::IKConstraint::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~IKConstraint", (void (Urho3D::IKConstraint::*)()) &Urho3D::IKConstraint::~IKConstraint, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("GetStiffness", (float (Urho3D::IKConstraint::*)() const) &Urho3D::IKConstraint::GetStiffness, "todo: docstring")
  .def("SetStiffness", (void (Urho3D::IKConstraint::*)(float)) &Urho3D::IKConstraint::SetStiffness, "todo: docstring", py::arg("stiffness"))
  .def("GetStretchiness", (float (Urho3D::IKConstraint::*)() const) &Urho3D::IKConstraint::GetStretchiness, "todo: docstring")
  .def("SetStretchiness", (void (Urho3D::IKConstraint::*)(float)) &Urho3D::IKConstraint::SetStretchiness, "todo: docstring", py::arg("stretchiness"))
  .def("GetLengthConstraints", (const Urho3D::Vector2 & (Urho3D::IKConstraint::*)() const) &Urho3D::IKConstraint::GetLengthConstraints, "todo: docstring")
  .def("SetLengthConstraints", (void (Urho3D::IKConstraint::*)(const Urho3D::Vector2 &)) &Urho3D::IKConstraint::SetLengthConstraints, "todo: docstring", py::arg("lengthConstraints"))
// Class Variables:
;
}

void Implement_Urho3D_IKEffector(py::class_<Urho3D::IKEffector, Urho3D::SharedPtr<Urho3D::IKEffector>, Urho3D::Component>& pyclass_Var_Urho3D_IKEffector)
{
    // Class IKEffector Implementation
pyclass_Var_Urho3D_IKEffector
  .def("GetType", (Urho3D::StringHash (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~IKEffector", (void (Urho3D::IKEffector::*)()) &Urho3D::IKEffector::~IKEffector, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("GetFeature", (bool (Urho3D::IKEffector::*)(Urho3D::IKEffector::Feature) const) &Urho3D::IKEffector::GetFeature, "todo: docstring", py::arg("feature"))
  .def("SetFeature", (void (Urho3D::IKEffector::*)(Urho3D::IKEffector::Feature, bool)) &Urho3D::IKEffector::SetFeature, "todo: docstring", py::arg("feature"), py::arg("enable"))
  .def("GetTargetNode", (Urho3D::Node * (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetTargetNode, "todo: docstring")
  .def("SetTargetNode", (void (Urho3D::IKEffector::*)(Urho3D::Node *)) &Urho3D::IKEffector::SetTargetNode, "todo: docstring", py::arg("targetNode"))
  .def("GetTargetName", (const Urho3D::String & (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetTargetName, "todo: docstring")
  .def("SetTargetName", (void (Urho3D::IKEffector::*)(const Urho3D::String &)) &Urho3D::IKEffector::SetTargetName, "todo: docstring", py::arg("nodeName"))
  .def("GetTargetPosition", (const Urho3D::Vector3 & (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetTargetPosition, "todo: docstring")
  .def("SetTargetPosition", (void (Urho3D::IKEffector::*)(const Urho3D::Vector3 &)) &Urho3D::IKEffector::SetTargetPosition, "todo: docstring", py::arg("targetPosition"))
  .def("GetTargetRotation", (const Urho3D::Quaternion & (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetTargetRotation, "todo: docstring")
  .def("SetTargetRotation", (void (Urho3D::IKEffector::*)(const Urho3D::Quaternion &)) &Urho3D::IKEffector::SetTargetRotation, "todo: docstring", py::arg("targetRotation"))
  .def("GetTargetRotationEuler", (Urho3D::Vector3 (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetTargetRotationEuler, "todo: docstring")
  .def("SetTargetRotationEuler", (void (Urho3D::IKEffector::*)(const Urho3D::Vector3 &)) &Urho3D::IKEffector::SetTargetRotationEuler, "todo: docstring", py::arg("targetRotation"))
  .def("GetChainLength", (unsigned int (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetChainLength, "todo: docstring")
  .def("SetChainLength", (void (Urho3D::IKEffector::*)(unsigned int)) &Urho3D::IKEffector::SetChainLength, "todo: docstring", py::arg("chainLength"))
  .def("GetWeight", (float (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetWeight, "todo: docstring")
  .def("SetWeight", (void (Urho3D::IKEffector::*)(float)) &Urho3D::IKEffector::SetWeight, "todo: docstring", py::arg("weight"))
  .def("GetRotationWeight", (float (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetRotationWeight, "todo: docstring")
  .def("SetRotationWeight", (void (Urho3D::IKEffector::*)(float)) &Urho3D::IKEffector::SetRotationWeight, "todo: docstring", py::arg("weight"))
  .def("GetRotationDecay", (float (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetRotationDecay, "todo: docstring")
  .def("SetRotationDecay", (void (Urho3D::IKEffector::*)(float)) &Urho3D::IKEffector::SetRotationDecay, "todo: docstring", py::arg("decay"))
  .def("DrawDebugGeometry", (void (Urho3D::IKEffector::*)(bool)) &Urho3D::IKEffector::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
  .def("DrawDebugGeometry", (void (Urho3D::IKEffector::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::IKEffector::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("GetWEIGHT_NLERP", (bool (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetWEIGHT_NLERP, "todo: docstring")
  .def("GetINHERIT_PARENT_ROTATION", (bool (Urho3D::IKEffector::*)() const) &Urho3D::IKEffector::GetINHERIT_PARENT_ROTATION, "todo: docstring")
  .def("SetWEIGHT_NLERP", (void (Urho3D::IKEffector::*)(bool)) &Urho3D::IKEffector::SetWEIGHT_NLERP, "todo: docstring", py::arg("enable"))
  .def("SetINHERIT_PARENT_ROTATION", (void (Urho3D::IKEffector::*)(bool)) &Urho3D::IKEffector::SetINHERIT_PARENT_ROTATION, "todo: docstring", py::arg("enable"))
// Class Variables:
;
}

void Implement_Urho3D_NamedPipe(py::class_<Urho3D::NamedPipe, Urho3D::SharedPtr<Urho3D::NamedPipe>, Urho3D::Object, Urho3D::AbstractFile>& pyclass_Var_Urho3D_NamedPipe)
{
    // Class NamedPipe Implementation
pyclass_Var_Urho3D_NamedPipe
  .def("GetType", (Urho3D::StringHash (Urho3D::NamedPipe::*)() const) &Urho3D::NamedPipe::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::NamedPipe::*)() const) &Urho3D::NamedPipe::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::NamedPipe::*)() const) &Urho3D::NamedPipe::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def(py::init<Urho3D::Context *, const Urho3D::String &, bool>(), "todo: constructor docstring")
  //.def("~NamedPipe", (void (Urho3D::NamedPipe::*)()) &Urho3D::NamedPipe::~NamedPipe, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Read", (unsigned int (Urho3D::NamedPipe::*)(void *, unsigned int)) &Urho3D::NamedPipe::Read, "todo: docstring", py::arg("dest"), py::arg("size"))
  .def("Seek", (unsigned int (Urho3D::NamedPipe::*)(unsigned int)) &Urho3D::NamedPipe::Seek, "todo: docstring", py::arg("position"))
  .def("Write", (unsigned int (Urho3D::NamedPipe::*)(const void *, unsigned int)) &Urho3D::NamedPipe::Write, "todo: docstring", py::arg("data"), py::arg("size"))
  .def("IsEof", (bool (Urho3D::NamedPipe::*)() const) &Urho3D::NamedPipe::IsEof, "todo: docstring")
  .def("GetName", (const Urho3D::String & (Urho3D::NamedPipe::*)() const) &Urho3D::NamedPipe::GetName, "todo: docstring")
  .def("Open", (bool (Urho3D::NamedPipe::*)(const Urho3D::String &, bool)) &Urho3D::NamedPipe::Open, "todo: docstring", py::arg("pipeName"), py::arg("isServer"))
  .def("Close", (void (Urho3D::NamedPipe::*)()) &Urho3D::NamedPipe::Close, "todo: docstring")
  .def("IsOpen", (bool (Urho3D::NamedPipe::*)() const) &Urho3D::NamedPipe::IsOpen, "todo: docstring")
  .def("IsServer", (bool (Urho3D::NamedPipe::*)() const) &Urho3D::NamedPipe::IsServer, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_LuaScriptInstance(py::class_<Urho3D::LuaScriptInstance, Urho3D::SharedPtr<Urho3D::LuaScriptInstance>, Urho3D::Component, Urho3D::LuaScriptEventListener>& pyclass_Var_Urho3D_LuaScriptInstance)
{
    // Class LuaScriptInstance Implementation
pyclass_Var_Urho3D_LuaScriptInstance
  .def("GetType", (Urho3D::StringHash (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~LuaScriptInstance", (void (Urho3D::LuaScriptInstance::*)()) &Urho3D::LuaScriptInstance::~LuaScriptInstance, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("OnSetAttribute", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::AttributeInfo &, const Urho3D::Variant &)) &Urho3D::LuaScriptInstance::OnSetAttribute, "todo: docstring", py::arg("attr"), py::arg("src"))
    //['Urho3D::AttributeInfo', 'Urho3D::Variant']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("OnGetAttribute", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::AttributeInfo &, Urho3D::Variant &) const) &Urho3D::LuaScriptInstance::OnGetAttribute, "todo: docstring", py::arg("attr"), py::arg("dest"))
    //['Urho3D::AttributeInfo', 'Urho3D::Variant']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("GetAttributes", (const Vector<Urho3D::AttributeInfo> * (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetAttributes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("ApplyAttributes", (void (Urho3D::LuaScriptInstance::*)()) &Urho3D::LuaScriptInstance::ApplyAttributes, "todo: docstring")
  .def("OnSetEnabled", (void (Urho3D::LuaScriptInstance::*)()) &Urho3D::LuaScriptInstance::OnSetEnabled, "todo: docstring")
  .def("AddEventHandler", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::String &, int)) &Urho3D::LuaScriptInstance::AddEventHandler, "todo: docstring", py::arg("eventName"), py::arg("functionIndex"))
  .def("AddEventHandler", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::LuaScriptInstance::AddEventHandler, "todo: docstring", py::arg("eventName"), py::arg("functionName"))
  .def("AddEventHandler", (void (Urho3D::LuaScriptInstance::*)(Urho3D::Object *, const Urho3D::String &, int)) &Urho3D::LuaScriptInstance::AddEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"), py::arg("functionIndex"))
  .def("AddEventHandler", (void (Urho3D::LuaScriptInstance::*)(Urho3D::Object *, const Urho3D::String &, const Urho3D::String &)) &Urho3D::LuaScriptInstance::AddEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"), py::arg("functionName"))
  .def("RemoveEventHandler", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::String &)) &Urho3D::LuaScriptInstance::RemoveEventHandler, "todo: docstring", py::arg("eventName"))
  .def("RemoveEventHandler", (void (Urho3D::LuaScriptInstance::*)(Urho3D::Object *, const Urho3D::String &)) &Urho3D::LuaScriptInstance::RemoveEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"))
  .def("RemoveEventHandlers", (void (Urho3D::LuaScriptInstance::*)(Urho3D::Object *)) &Urho3D::LuaScriptInstance::RemoveEventHandlers, "todo: docstring", py::arg("sender"))
  .def("RemoveAllEventHandlers", (void (Urho3D::LuaScriptInstance::*)()) &Urho3D::LuaScriptInstance::RemoveAllEventHandlers, "todo: docstring")
  .def("RemoveEventHandlersExcept", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::Vector<Urho3D::String> &)) &Urho3D::LuaScriptInstance::RemoveEventHandlersExcept, "todo: docstring", py::arg("exceptionNames"))
  .def("HasEventHandler", (bool (Urho3D::LuaScriptInstance::*)(const Urho3D::String &) const) &Urho3D::LuaScriptInstance::HasEventHandler, "todo: docstring", py::arg("eventName"))
  .def("HasEventHandler", (bool (Urho3D::LuaScriptInstance::*)(Urho3D::Object *, const Urho3D::String &) const) &Urho3D::LuaScriptInstance::HasEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventName"))
  .def("CreateObject", (bool (Urho3D::LuaScriptInstance::*)(const Urho3D::String &)) &Urho3D::LuaScriptInstance::CreateObject, "todo: docstring", py::arg("scriptObjectType"))
  .def("CreateObject", (bool (Urho3D::LuaScriptInstance::*)(Urho3D::LuaFile *, const Urho3D::String &)) &Urho3D::LuaScriptInstance::CreateObject, "todo: docstring", py::arg("scriptFile"), py::arg("scriptObjectType"))
  .def("SetScriptFile", (void (Urho3D::LuaScriptInstance::*)(Urho3D::LuaFile *)) &Urho3D::LuaScriptInstance::SetScriptFile, "todo: docstring", py::arg("scriptFile"))
  .def("SetScriptObjectType", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::String &)) &Urho3D::LuaScriptInstance::SetScriptObjectType, "todo: docstring", py::arg("scriptObjectType"))
  .def("SetScriptDataAttr", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::LuaScriptInstance::SetScriptDataAttr, "todo: docstring", py::arg("data"))
  .def("SetScriptNetworkDataAttr", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::LuaScriptInstance::SetScriptNetworkDataAttr, "todo: docstring", py::arg("data"))
  .def("GetScriptFile", (Urho3D::LuaFile * (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetScriptFile, "todo: docstring")
  .def("GetScriptObjectType", (const Urho3D::String & (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetScriptObjectType, "todo: docstring")
  .def("GetScriptObjectRef", (int (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetScriptObjectRef, "todo: docstring")
  //.def("GetScriptDataAttr", (PODVector<unsigned char> (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetScriptDataAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetScriptNetworkDataAttr", (PODVector<unsigned char> (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetScriptNetworkDataAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetScriptObjectFunction", (Urho3D::LuaFunction * (Urho3D::LuaScriptInstance::*)(const Urho3D::String &) const) &Urho3D::LuaScriptInstance::GetScriptObjectFunction, "todo: docstring", py::arg("functionName"))
  .def("SetScriptFileAttr", (void (Urho3D::LuaScriptInstance::*)(const Urho3D::ResourceRef &)) &Urho3D::LuaScriptInstance::SetScriptFileAttr, "todo: docstring", py::arg("value"))
  .def("GetScriptFileAttr", (Urho3D::ResourceRef (Urho3D::LuaScriptInstance::*)() const) &Urho3D::LuaScriptInstance::GetScriptFileAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_NavigationMesh(py::class_<Urho3D::NavigationMesh, Urho3D::SharedPtr<Urho3D::NavigationMesh>, Urho3D::Component>& pyclass_Var_Urho3D_NavigationMesh)
{
    // Class NavigationMesh Implementation
pyclass_Var_Urho3D_NavigationMesh
  .def("GetType", (Urho3D::StringHash (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~NavigationMesh", (void (Urho3D::NavigationMesh::*)()) &Urho3D::NavigationMesh::~NavigationMesh, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::NavigationMesh::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::NavigationMesh::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetTileSize", (void (Urho3D::NavigationMesh::*)(int)) &Urho3D::NavigationMesh::SetTileSize, "todo: docstring", py::arg("size"))
  .def("SetCellSize", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetCellSize, "todo: docstring", py::arg("size"))
  .def("SetCellHeight", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetCellHeight, "todo: docstring", py::arg("height"))
  .def("SetAgentHeight", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetAgentHeight, "todo: docstring", py::arg("height"))
  .def("SetAgentRadius", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetAgentRadius, "todo: docstring", py::arg("radius"))
  .def("SetAgentMaxClimb", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetAgentMaxClimb, "todo: docstring", py::arg("maxClimb"))
  .def("SetAgentMaxSlope", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetAgentMaxSlope, "todo: docstring", py::arg("maxSlope"))
  .def("SetRegionMinSize", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetRegionMinSize, "todo: docstring", py::arg("size"))
  .def("SetRegionMergeSize", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetRegionMergeSize, "todo: docstring", py::arg("size"))
  .def("SetEdgeMaxLength", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetEdgeMaxLength, "todo: docstring", py::arg("length"))
  .def("SetEdgeMaxError", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetEdgeMaxError, "todo: docstring", py::arg("error"))
  .def("SetDetailSampleDistance", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetDetailSampleDistance, "todo: docstring", py::arg("distance"))
  .def("SetDetailSampleMaxError", (void (Urho3D::NavigationMesh::*)(float)) &Urho3D::NavigationMesh::SetDetailSampleMaxError, "todo: docstring", py::arg("error"))
  .def("SetPadding", (void (Urho3D::NavigationMesh::*)(const Urho3D::Vector3 &)) &Urho3D::NavigationMesh::SetPadding, "todo: docstring", py::arg("padding"))
  .def("SetAreaCost", (void (Urho3D::NavigationMesh::*)(unsigned int, float)) &Urho3D::NavigationMesh::SetAreaCost, "todo: docstring", py::arg("areaID"), py::arg("cost"))
  .def("Allocate", (bool (Urho3D::NavigationMesh::*)(const Urho3D::BoundingBox &, unsigned int)) &Urho3D::NavigationMesh::Allocate, "todo: docstring", py::arg("boundingBox"), py::arg("maxTiles"))
  .def("Build", (bool (Urho3D::NavigationMesh::*)()) &Urho3D::NavigationMesh::Build, "todo: docstring")
  .def("Build", (bool (Urho3D::NavigationMesh::*)(const Urho3D::BoundingBox &)) &Urho3D::NavigationMesh::Build, "todo: docstring", py::arg("boundingBox"))
  .def("Build", (bool (Urho3D::NavigationMesh::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::NavigationMesh::Build, "todo: docstring", py::arg("from"), py::arg("to"))
  //.def("GetTileData", (PODVector<unsigned char> (Urho3D::NavigationMesh::*)(const Urho3D::IntVector2 &) const) &Urho3D::NavigationMesh::GetTileData, "todo: docstring", py::arg("tile"))
    //['Urho3D::IntVector2']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("AddTile", (bool (Urho3D::NavigationMesh::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::NavigationMesh::AddTile, "todo: docstring", py::arg("tileData"))
  .def("RemoveTile", (void (Urho3D::NavigationMesh::*)(const Urho3D::IntVector2 &)) &Urho3D::NavigationMesh::RemoveTile, "todo: docstring", py::arg("tile"))
  .def("RemoveAllTiles", (void (Urho3D::NavigationMesh::*)()) &Urho3D::NavigationMesh::RemoveAllTiles, "todo: docstring")
  .def("HasTile", (bool (Urho3D::NavigationMesh::*)(const Urho3D::IntVector2 &) const) &Urho3D::NavigationMesh::HasTile, "todo: docstring", py::arg("tile"))
  .def("GetTileBoundingBox", (Urho3D::BoundingBox (Urho3D::NavigationMesh::*)(const Urho3D::IntVector2 &) const) &Urho3D::NavigationMesh::GetTileBoundingBox, "todo: docstring", py::arg("tile"))
  .def("GetTileIndex", (Urho3D::IntVector2 (Urho3D::NavigationMesh::*)(const Urho3D::Vector3 &) const) &Urho3D::NavigationMesh::GetTileIndex, "todo: docstring", py::arg("position"))
  //.def("FindNearestPoint", (Urho3D::Vector3 (Urho3D::NavigationMesh::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const dtQueryFilter *, unsigned int *)) &Urho3D::NavigationMesh::FindNearestPoint, "todo: docstring", py::arg("point"), py::arg("extents")=Vector3::ONE, py::arg("filter")=nullptr, py::arg("nearestRef")=nullptr)
    //['Urho3D::Vector3', 'Urho3D::Vector3', 'dtQueryFilter', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("MoveAlongSurface", (Urho3D::Vector3 (Urho3D::NavigationMesh::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, int, const dtQueryFilter *)) &Urho3D::NavigationMesh::MoveAlongSurface, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("extents")=Vector3::ONE, py::arg("maxVisited")=3, py::arg("filter")=nullptr)
    //['Urho3D::Vector3', 'Urho3D::Vector3', 'Urho3D::Vector3', 'int', 'dtQueryFilter']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("FindPath", (void (Urho3D::NavigationMesh::*)(Urho3D::PODVector<Urho3D::Vector3> &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const dtQueryFilter *)) &Urho3D::NavigationMesh::FindPath, "todo: docstring", py::arg("dest"), py::arg("start"), py::arg("end"), py::arg("extents")=Vector3::ONE, py::arg("filter")=nullptr)
    //['Urho3D::PODVector<Urho3D::Vector3>', 'Urho3D::Vector3', 'Urho3D::Vector3', 'Urho3D::Vector3', 'dtQueryFilter']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("FindPath", (void (Urho3D::NavigationMesh::*)(Urho3D::PODVector<Urho3D::NavigationPathPoint> &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const dtQueryFilter *)) &Urho3D::NavigationMesh::FindPath, "todo: docstring", py::arg("dest"), py::arg("start"), py::arg("end"), py::arg("extents")=Vector3::ONE, py::arg("filter")=nullptr)
    //['Urho3D::PODVector<Urho3D::NavigationPathPoint>', 'Urho3D::Vector3', 'Urho3D::Vector3', 'Urho3D::Vector3', 'dtQueryFilter']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetRandomPoint", (Urho3D::Vector3 (Urho3D::NavigationMesh::*)(const dtQueryFilter *, unsigned int *)) &Urho3D::NavigationMesh::GetRandomPoint, "todo: docstring", py::arg("filter")=nullptr, py::arg("randomRef")=nullptr)
    //['dtQueryFilter', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetRandomPointInCircle", (Urho3D::Vector3 (Urho3D::NavigationMesh::*)(const Urho3D::Vector3 &, float, const Urho3D::Vector3 &, const dtQueryFilter *, unsigned int *)) &Urho3D::NavigationMesh::GetRandomPointInCircle, "todo: docstring", py::arg("center"), py::arg("radius"), py::arg("extents")=Vector3::ONE, py::arg("filter")=nullptr, py::arg("randomRef")=nullptr)
    //['Urho3D::Vector3', 'float', 'Urho3D::Vector3', 'dtQueryFilter', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetDistanceToWall", (float (Urho3D::NavigationMesh::*)(const Urho3D::Vector3 &, float, const Urho3D::Vector3 &, const dtQueryFilter *, Urho3D::Vector3 *, Urho3D::Vector3 *)) &Urho3D::NavigationMesh::GetDistanceToWall, "todo: docstring", py::arg("point"), py::arg("radius"), py::arg("extents")=Vector3::ONE, py::arg("filter")=nullptr, py::arg("hitPos")=nullptr, py::arg("hitNormal")=nullptr)
    //['Urho3D::Vector3', 'float', 'Urho3D::Vector3', 'dtQueryFilter', 'Urho3D::Vector3', 'Urho3D::Vector3']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("Raycast", (Urho3D::Vector3 (Urho3D::NavigationMesh::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const dtQueryFilter *, Urho3D::Vector3 *)) &Urho3D::NavigationMesh::Raycast, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("extents")=Vector3::ONE, py::arg("filter")=nullptr, py::arg("hitNormal")=nullptr)
    //['Urho3D::Vector3', 'Urho3D::Vector3', 'Urho3D::Vector3', 'dtQueryFilter', 'Urho3D::Vector3']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("DrawDebugGeometry", (void (Urho3D::NavigationMesh::*)(bool)) &Urho3D::NavigationMesh::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
  .def("GetMeshName", (Urho3D::String (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetMeshName, "todo: docstring")
  .def("SetMeshName", (void (Urho3D::NavigationMesh::*)(const Urho3D::String &)) &Urho3D::NavigationMesh::SetMeshName, "todo: docstring", py::arg("newName"))
  .def("GetTileSize", (int (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetTileSize, "todo: docstring")
  .def("GetCellSize", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetCellSize, "todo: docstring")
  .def("GetCellHeight", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetCellHeight, "todo: docstring")
  .def("GetAgentHeight", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetAgentHeight, "todo: docstring")
  .def("GetAgentRadius", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetAgentRadius, "todo: docstring")
  .def("GetAgentMaxClimb", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetAgentMaxClimb, "todo: docstring")
  .def("GetAgentMaxSlope", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetAgentMaxSlope, "todo: docstring")
  .def("GetRegionMinSize", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetRegionMinSize, "todo: docstring")
  .def("GetRegionMergeSize", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetRegionMergeSize, "todo: docstring")
  .def("GetEdgeMaxLength", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetEdgeMaxLength, "todo: docstring")
  .def("GetEdgeMaxError", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetEdgeMaxError, "todo: docstring")
  .def("GetDetailSampleDistance", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetDetailSampleDistance, "todo: docstring")
  .def("GetDetailSampleMaxError", (float (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetDetailSampleMaxError, "todo: docstring")
  .def("GetPadding", (const Urho3D::Vector3 & (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetPadding, "todo: docstring")
  .def("GetAreaCost", (float (Urho3D::NavigationMesh::*)(unsigned int) const) &Urho3D::NavigationMesh::GetAreaCost, "todo: docstring", py::arg("areaID"))
  .def("IsInitialized", (bool (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::IsInitialized, "todo: docstring")
  .def("GetBoundingBox", (const Urho3D::BoundingBox & (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetBoundingBox, "todo: docstring")
  .def("GetWorldBoundingBox", (Urho3D::BoundingBox (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetWorldBoundingBox, "todo: docstring")
  .def("GetNumTiles", (Urho3D::IntVector2 (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetNumTiles, "todo: docstring")
  .def("SetPartitionType", (void (Urho3D::NavigationMesh::*)(Urho3D::NavmeshPartitionType)) &Urho3D::NavigationMesh::SetPartitionType, "todo: docstring", py::arg("partitionType"))
  .def("GetPartitionType", (Urho3D::NavmeshPartitionType (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetPartitionType, "todo: docstring")
  .def("SetNavigationDataAttr", (void (Urho3D::NavigationMesh::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::NavigationMesh::SetNavigationDataAttr, "todo: docstring", py::arg("value"))
  //.def("GetNavigationDataAttr", (PODVector<unsigned char> (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetNavigationDataAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("SetDrawOffMeshConnections", (void (Urho3D::NavigationMesh::*)(bool)) &Urho3D::NavigationMesh::SetDrawOffMeshConnections, "todo: docstring", py::arg("enable"))
  .def("GetDrawOffMeshConnections", (bool (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetDrawOffMeshConnections, "todo: docstring")
  .def("SetDrawNavAreas", (void (Urho3D::NavigationMesh::*)(bool)) &Urho3D::NavigationMesh::SetDrawNavAreas, "todo: docstring", py::arg("enable"))
  .def("GetDrawNavAreas", (bool (Urho3D::NavigationMesh::*)() const) &Urho3D::NavigationMesh::GetDrawNavAreas, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_NavArea(py::class_<Urho3D::NavArea, Urho3D::SharedPtr<Urho3D::NavArea>, Urho3D::Component>& pyclass_Var_Urho3D_NavArea)
{
    // Class NavArea Implementation
pyclass_Var_Urho3D_NavArea
  .def("GetType", (Urho3D::StringHash (Urho3D::NavArea::*)() const) &Urho3D::NavArea::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::NavArea::*)() const) &Urho3D::NavArea::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::NavArea::*)() const) &Urho3D::NavArea::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~NavArea", (void (Urho3D::NavArea::*)()) &Urho3D::NavArea::~NavArea, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::NavArea::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::NavArea::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("GetAreaID", (unsigned int (Urho3D::NavArea::*)() const) &Urho3D::NavArea::GetAreaID, "todo: docstring")
  .def("SetAreaID", (void (Urho3D::NavArea::*)(unsigned int)) &Urho3D::NavArea::SetAreaID, "todo: docstring", py::arg("newID"))
  .def("GetBoundingBox", (Urho3D::BoundingBox (Urho3D::NavArea::*)() const) &Urho3D::NavArea::GetBoundingBox, "todo: docstring")
  .def("SetBoundingBox", (void (Urho3D::NavArea::*)(const Urho3D::BoundingBox &)) &Urho3D::NavArea::SetBoundingBox, "todo: docstring", py::arg("bnds"))
  .def("GetWorldBoundingBox", (Urho3D::BoundingBox (Urho3D::NavArea::*)() const) &Urho3D::NavArea::GetWorldBoundingBox, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Obstacle(py::class_<Urho3D::Obstacle, Urho3D::SharedPtr<Urho3D::Obstacle>, Urho3D::Component>& pyclass_Var_Urho3D_Obstacle)
{
    // Class Obstacle Implementation
pyclass_Var_Urho3D_Obstacle
  .def("GetType", (Urho3D::StringHash (Urho3D::Obstacle::*)() const) &Urho3D::Obstacle::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Obstacle::*)() const) &Urho3D::Obstacle::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Obstacle::*)() const) &Urho3D::Obstacle::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Obstacle", (void (Urho3D::Obstacle::*)()) &Urho3D::Obstacle::~Obstacle, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::Obstacle::*)()) &Urho3D::Obstacle::OnSetEnabled, "todo: docstring")
  .def("GetHeight", (float (Urho3D::Obstacle::*)() const) &Urho3D::Obstacle::GetHeight, "todo: docstring")
  .def("SetHeight", (void (Urho3D::Obstacle::*)(float)) &Urho3D::Obstacle::SetHeight, "todo: docstring", py::arg("newHeight"))
  .def("GetRadius", (float (Urho3D::Obstacle::*)() const) &Urho3D::Obstacle::GetRadius, "todo: docstring")
  .def("SetRadius", (void (Urho3D::Obstacle::*)(float)) &Urho3D::Obstacle::SetRadius, "todo: docstring", py::arg("newRadius"))
  .def("GetObstacleID", (unsigned int (Urho3D::Obstacle::*)() const) &Urho3D::Obstacle::GetObstacleID, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::Obstacle::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::Obstacle::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("DrawDebugGeometry", (void (Urho3D::Obstacle::*)(bool)) &Urho3D::Obstacle::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
// Class Variables:
;
}

void Implement_Urho3D_Navigable(py::class_<Urho3D::Navigable, Urho3D::SharedPtr<Urho3D::Navigable>, Urho3D::Component>& pyclass_Var_Urho3D_Navigable)
{
    // Class Navigable Implementation
pyclass_Var_Urho3D_Navigable
  .def("GetType", (Urho3D::StringHash (Urho3D::Navigable::*)() const) &Urho3D::Navigable::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Navigable::*)() const) &Urho3D::Navigable::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Navigable::*)() const) &Urho3D::Navigable::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Navigable", (void (Urho3D::Navigable::*)()) &Urho3D::Navigable::~Navigable, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetRecursive", (void (Urho3D::Navigable::*)(bool)) &Urho3D::Navigable::SetRecursive, "todo: docstring", py::arg("enable"))
  .def("IsRecursive", (bool (Urho3D::Navigable::*)() const) &Urho3D::Navigable::IsRecursive, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_PhysicsWorld(py::class_<Urho3D::PhysicsWorld, Urho3D::SharedPtr<Urho3D::PhysicsWorld>, Urho3D::Component>& pyclass_Var_Urho3D_PhysicsWorld)
{
    // Class PhysicsWorld Implementation
pyclass_Var_Urho3D_PhysicsWorld
  .def("GetType", (Urho3D::StringHash (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~PhysicsWorld", (void (Urho3D::PhysicsWorld::*)()) &Urho3D::PhysicsWorld::~PhysicsWorld, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("isVisible", (bool (Urho3D::PhysicsWorld::*)(const btVector3 &, const btVector3 &)) &Urho3D::PhysicsWorld::isVisible, "todo: docstring", py::arg("aabbMin"), py::arg("aabbMax"))
    //['btVector3', 'btVector3']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("drawLine", (void (Urho3D::PhysicsWorld::*)(const btVector3 &, const btVector3 &, const btVector3 &)) &Urho3D::PhysicsWorld::drawLine, "todo: docstring", py::arg("from"), py::arg("to"), py::arg("color"))
    //['btVector3', 'btVector3', 'btVector3']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("reportErrorWarning", (void (Urho3D::PhysicsWorld::*)(const char *)) &Urho3D::PhysicsWorld::reportErrorWarning, "todo: docstring", py::arg("warningString"))
  //.def("drawContactPoint", (void (Urho3D::PhysicsWorld::*)(const btVector3 &, const btVector3 &, float, int, const btVector3 &)) &Urho3D::PhysicsWorld::drawContactPoint, "todo: docstring", py::arg("pointOnB"), py::arg("normalOnB"), py::arg("distance"), py::arg("lifeTime"), py::arg("color"))
    //['btVector3', 'btVector3', 'float', 'int', 'btVector3']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("draw3dText", (void (Urho3D::PhysicsWorld::*)(const btVector3 &, const char *)) &Urho3D::PhysicsWorld::draw3dText, "todo: docstring", py::arg("location"), py::arg("textString"))
    //['btVector3', 'char']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("setDebugMode", (void (Urho3D::PhysicsWorld::*)(int)) &Urho3D::PhysicsWorld::setDebugMode, "todo: docstring", py::arg("debugMode"))
  .def("getDebugMode", (int (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::getDebugMode, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::PhysicsWorld::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::PhysicsWorld::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("Update", (void (Urho3D::PhysicsWorld::*)(float)) &Urho3D::PhysicsWorld::Update, "todo: docstring", py::arg("timeStep"))
  .def("UpdateCollisions", (void (Urho3D::PhysicsWorld::*)()) &Urho3D::PhysicsWorld::UpdateCollisions, "todo: docstring")
  .def("SetFps", (void (Urho3D::PhysicsWorld::*)(int)) &Urho3D::PhysicsWorld::SetFps, "todo: docstring", py::arg("fps"))
  .def("SetGravity", (void (Urho3D::PhysicsWorld::*)(const Urho3D::Vector3 &)) &Urho3D::PhysicsWorld::SetGravity, "todo: docstring", py::arg("gravity"))
  .def("SetMaxSubSteps", (void (Urho3D::PhysicsWorld::*)(int)) &Urho3D::PhysicsWorld::SetMaxSubSteps, "todo: docstring", py::arg("num"))
  .def("SetNumIterations", (void (Urho3D::PhysicsWorld::*)(int)) &Urho3D::PhysicsWorld::SetNumIterations, "todo: docstring", py::arg("num"))
  .def("SetUpdateEnabled", (void (Urho3D::PhysicsWorld::*)(bool)) &Urho3D::PhysicsWorld::SetUpdateEnabled, "todo: docstring", py::arg("enable"))
  .def("SetInterpolation", (void (Urho3D::PhysicsWorld::*)(bool)) &Urho3D::PhysicsWorld::SetInterpolation, "todo: docstring", py::arg("enable"))
  .def("SetInternalEdge", (void (Urho3D::PhysicsWorld::*)(bool)) &Urho3D::PhysicsWorld::SetInternalEdge, "todo: docstring", py::arg("enable"))
  .def("SetSplitImpulse", (void (Urho3D::PhysicsWorld::*)(bool)) &Urho3D::PhysicsWorld::SetSplitImpulse, "todo: docstring", py::arg("enable"))
  .def("SetMaxNetworkAngularVelocity", (void (Urho3D::PhysicsWorld::*)(float)) &Urho3D::PhysicsWorld::SetMaxNetworkAngularVelocity, "todo: docstring", py::arg("velocity"))
  //.def("Raycast", (void (Urho3D::PhysicsWorld::*)(Urho3D::PODVector<Urho3D::PhysicsRaycastResult> &, const Urho3D::Ray &, float, unsigned int)) &Urho3D::PhysicsWorld::Raycast, "todo: docstring", py::arg("result"), py::arg("ray"), py::arg("maxDistance"), py::arg("collisionMask")=M_MAX_UNSIGNED)
    //['Urho3D::PODVector<Urho3D::PhysicsRaycastResult>', 'Urho3D::Ray', 'float', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("RaycastSingle", (void (Urho3D::PhysicsWorld::*)(Urho3D::PhysicsRaycastResult &, const Urho3D::Ray &, float, unsigned int)) &Urho3D::PhysicsWorld::RaycastSingle, "todo: docstring", py::arg("result"), py::arg("ray"), py::arg("maxDistance"), py::arg("collisionMask")=M_MAX_UNSIGNED)
  .def("RaycastSingleSegmented", (void (Urho3D::PhysicsWorld::*)(Urho3D::PhysicsRaycastResult &, const Urho3D::Ray &, float, float, unsigned int, float)) &Urho3D::PhysicsWorld::RaycastSingleSegmented, "todo: docstring", py::arg("result"), py::arg("ray"), py::arg("maxDistance"), py::arg("segmentDistance"), py::arg("collisionMask")=M_MAX_UNSIGNED, py::arg("overlapDistance")=0.1f)
  .def("SphereCast", (void (Urho3D::PhysicsWorld::*)(Urho3D::PhysicsRaycastResult &, const Urho3D::Ray &, float, float, unsigned int)) &Urho3D::PhysicsWorld::SphereCast, "todo: docstring", py::arg("result"), py::arg("ray"), py::arg("radius"), py::arg("maxDistance"), py::arg("collisionMask")=M_MAX_UNSIGNED)
  .def("ConvexCast", (void (Urho3D::PhysicsWorld::*)(Urho3D::PhysicsRaycastResult &, Urho3D::CollisionShape *, const Urho3D::Vector3 &, const Urho3D::Quaternion &, const Urho3D::Vector3 &, const Urho3D::Quaternion &, unsigned int)) &Urho3D::PhysicsWorld::ConvexCast, "todo: docstring", py::arg("result"), py::arg("shape"), py::arg("startPos"), py::arg("startRot"), py::arg("endPos"), py::arg("endRot"), py::arg("collisionMask")=M_MAX_UNSIGNED)
  //.def("ConvexCast", (void (Urho3D::PhysicsWorld::*)(Urho3D::PhysicsRaycastResult &, btCollisionShape *, const Urho3D::Vector3 &, const Urho3D::Quaternion &, const Urho3D::Vector3 &, const Urho3D::Quaternion &, unsigned int)) &Urho3D::PhysicsWorld::ConvexCast, "todo: docstring", py::arg("result"), py::arg("shape"), py::arg("startPos"), py::arg("startRot"), py::arg("endPos"), py::arg("endRot"), py::arg("collisionMask")=M_MAX_UNSIGNED)
    //['Urho3D::PhysicsRaycastResult', 'btCollisionShape', 'Urho3D::Vector3', 'Urho3D::Quaternion', 'Urho3D::Vector3', 'Urho3D::Quaternion', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("RemoveCachedGeometry", (void (Urho3D::PhysicsWorld::*)(Urho3D::Model *)) &Urho3D::PhysicsWorld::RemoveCachedGeometry, "todo: docstring", py::arg("model"))
  //.def("GetRigidBodies", (void (Urho3D::PhysicsWorld::*)(Urho3D::PODVector<Urho3D::RigidBody *> &, const Urho3D::Sphere &, unsigned int)) &Urho3D::PhysicsWorld::GetRigidBodies, "todo: docstring", py::arg("result"), py::arg("sphere"), py::arg("collisionMask")=M_MAX_UNSIGNED)
    //['Urho3D::PODVector<Urho3D::RigidBody', 'Urho3D::Sphere', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetRigidBodies", (void (Urho3D::PhysicsWorld::*)(Urho3D::PODVector<Urho3D::RigidBody *> &, const Urho3D::BoundingBox &, unsigned int)) &Urho3D::PhysicsWorld::GetRigidBodies, "todo: docstring", py::arg("result"), py::arg("box"), py::arg("collisionMask")=M_MAX_UNSIGNED)
    //['Urho3D::PODVector<Urho3D::RigidBody', 'Urho3D::BoundingBox', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetRigidBodies", (void (Urho3D::PhysicsWorld::*)(Urho3D::PODVector<Urho3D::RigidBody *> &, const Urho3D::RigidBody *)) &Urho3D::PhysicsWorld::GetRigidBodies, "todo: docstring", py::arg("result"), py::arg("body"))
    //['Urho3D::PODVector<Urho3D::RigidBody', 'Urho3D::RigidBody']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetCollidingBodies", (void (Urho3D::PhysicsWorld::*)(Urho3D::PODVector<Urho3D::RigidBody *> &, const Urho3D::RigidBody *)) &Urho3D::PhysicsWorld::GetCollidingBodies, "todo: docstring", py::arg("result"), py::arg("body"))
    //['Urho3D::PODVector<Urho3D::RigidBody', 'Urho3D::RigidBody']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetGravity", (Urho3D::Vector3 (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetGravity, "todo: docstring")
  .def("GetMaxSubSteps", (int (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetMaxSubSteps, "todo: docstring")
  .def("GetNumIterations", (int (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetNumIterations, "todo: docstring")
  .def("IsUpdateEnabled", (bool (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::IsUpdateEnabled, "todo: docstring")
  .def("GetInterpolation", (bool (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetInterpolation, "todo: docstring")
  .def("GetInternalEdge", (bool (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetInternalEdge, "todo: docstring")
  .def("GetSplitImpulse", (bool (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetSplitImpulse, "todo: docstring")
  .def("GetFps", (int (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetFps, "todo: docstring")
  .def("GetMaxNetworkAngularVelocity", (float (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::GetMaxNetworkAngularVelocity, "todo: docstring")
  .def("AddRigidBody", (void (Urho3D::PhysicsWorld::*)(Urho3D::RigidBody *)) &Urho3D::PhysicsWorld::AddRigidBody, "todo: docstring", py::arg("body"))
  .def("RemoveRigidBody", (void (Urho3D::PhysicsWorld::*)(Urho3D::RigidBody *)) &Urho3D::PhysicsWorld::RemoveRigidBody, "todo: docstring", py::arg("body"))
  .def("AddCollisionShape", (void (Urho3D::PhysicsWorld::*)(Urho3D::CollisionShape *)) &Urho3D::PhysicsWorld::AddCollisionShape, "todo: docstring", py::arg("shape"))
  .def("RemoveCollisionShape", (void (Urho3D::PhysicsWorld::*)(Urho3D::CollisionShape *)) &Urho3D::PhysicsWorld::RemoveCollisionShape, "todo: docstring", py::arg("shape"))
  .def("AddConstraint", (void (Urho3D::PhysicsWorld::*)(Urho3D::Constraint *)) &Urho3D::PhysicsWorld::AddConstraint, "todo: docstring", py::arg("constraint"))
  .def("RemoveConstraint", (void (Urho3D::PhysicsWorld::*)(Urho3D::Constraint *)) &Urho3D::PhysicsWorld::RemoveConstraint, "todo: docstring", py::arg("constraint"))
  //.def("AddDelayedWorldTransform", (void (Urho3D::PhysicsWorld::*)(const Urho3D::DelayedWorldTransform &)) &Urho3D::PhysicsWorld::AddDelayedWorldTransform, "todo: docstring", py::arg("transform"))
    //['Urho3D::DelayedWorldTransform']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::PhysicsWorld::*)(bool)) &Urho3D::PhysicsWorld::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
  .def("SetDebugRenderer", (void (Urho3D::PhysicsWorld::*)(Urho3D::DebugRenderer *)) &Urho3D::PhysicsWorld::SetDebugRenderer, "todo: docstring", py::arg("debug"))
  .def("SetDebugDepthTest", (void (Urho3D::PhysicsWorld::*)(bool)) &Urho3D::PhysicsWorld::SetDebugDepthTest, "todo: docstring", py::arg("enable"))
  //.def("GetWorld", (btDiscreteDynamicsWorld * (Urho3D::PhysicsWorld::*)()) &Urho3D::PhysicsWorld::GetWorld, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("CleanupGeometryCache", (void (Urho3D::PhysicsWorld::*)()) &Urho3D::PhysicsWorld::CleanupGeometryCache, "todo: docstring")
  //.def("GetTriMeshCache", (Urho3D::CollisionGeometryDataCache & (Urho3D::PhysicsWorld::*)()) &Urho3D::PhysicsWorld::GetTriMeshCache, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetConvexCache", (Urho3D::CollisionGeometryDataCache & (Urho3D::PhysicsWorld::*)()) &Urho3D::PhysicsWorld::GetConvexCache, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetGImpactTrimeshCache", (Urho3D::CollisionGeometryDataCache & (Urho3D::PhysicsWorld::*)()) &Urho3D::PhysicsWorld::GetGImpactTrimeshCache, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("SetApplyingTransforms", (void (Urho3D::PhysicsWorld::*)(bool)) &Urho3D::PhysicsWorld::SetApplyingTransforms, "todo: docstring", py::arg("enable"))
  .def("IsApplyingTransforms", (bool (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::IsApplyingTransforms, "todo: docstring")
  .def("IsSimulating", (bool (Urho3D::PhysicsWorld::*)() const) &Urho3D::PhysicsWorld::IsSimulating, "todo: docstring")
// Class Variables:
  .def_readwrite_static("config",&Urho3D::PhysicsWorld::config, "todo: var docstring")//Urho3D::PhysicsWorldConfig
;
}

void Implement_Urho3D_CollisionShape(py::class_<Urho3D::CollisionShape, Urho3D::SharedPtr<Urho3D::CollisionShape>, Urho3D::Component>& pyclass_Var_Urho3D_CollisionShape)
{
    // Class CollisionShape Implementation
pyclass_Var_Urho3D_CollisionShape
  .def("GetType", (Urho3D::StringHash (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CollisionShape", (void (Urho3D::CollisionShape::*)()) &Urho3D::CollisionShape::~CollisionShape, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::CollisionShape::*)()) &Urho3D::CollisionShape::ApplyAttributes, "todo: docstring")
  .def("OnSetEnabled", (void (Urho3D::CollisionShape::*)()) &Urho3D::CollisionShape::OnSetEnabled, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::CollisionShape::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::CollisionShape::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetBox", (void (Urho3D::CollisionShape::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetBox, "todo: docstring", py::arg("size"), py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetSphere", (void (Urho3D::CollisionShape::*)(float, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetSphere, "todo: docstring", py::arg("diameter"), py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetStaticPlane", (void (Urho3D::CollisionShape::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetStaticPlane, "todo: docstring", py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetCylinder", (void (Urho3D::CollisionShape::*)(float, float, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetCylinder, "todo: docstring", py::arg("diameter"), py::arg("height"), py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetCapsule", (void (Urho3D::CollisionShape::*)(float, float, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetCapsule, "todo: docstring", py::arg("diameter"), py::arg("height"), py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetCone", (void (Urho3D::CollisionShape::*)(float, float, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetCone, "todo: docstring", py::arg("diameter"), py::arg("height"), py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetTriangleMesh", (void (Urho3D::CollisionShape::*)(Urho3D::Model *, unsigned int, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetTriangleMesh, "todo: docstring", py::arg("model"), py::arg("lodLevel")=0, py::arg("scale")=Vector3::ONE, py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetCustomTriangleMesh", (void (Urho3D::CollisionShape::*)(Urho3D::CustomGeometry *, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetCustomTriangleMesh, "todo: docstring", py::arg("custom"), py::arg("scale")=Vector3::ONE, py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetConvexHull", (void (Urho3D::CollisionShape::*)(Urho3D::Model *, unsigned int, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetConvexHull, "todo: docstring", py::arg("model"), py::arg("lodLevel")=0, py::arg("scale")=Vector3::ONE, py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetCustomConvexHull", (void (Urho3D::CollisionShape::*)(Urho3D::CustomGeometry *, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetCustomConvexHull, "todo: docstring", py::arg("custom"), py::arg("scale")=Vector3::ONE, py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetGImpactMesh", (void (Urho3D::CollisionShape::*)(Urho3D::Model *, unsigned int, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetGImpactMesh, "todo: docstring", py::arg("model"), py::arg("lodLevel")=0, py::arg("scale")=Vector3::ONE, py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetCustomGImpactMesh", (void (Urho3D::CollisionShape::*)(Urho3D::CustomGeometry *, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetCustomGImpactMesh, "todo: docstring", py::arg("custom"), py::arg("scale")=Vector3::ONE, py::arg("position")=Vector3::ZERO, py::arg("rotation")=Quaternion::IDENTITY)
  .def("SetTerrain", (void (Urho3D::CollisionShape::*)(unsigned int)) &Urho3D::CollisionShape::SetTerrain, "todo: docstring", py::arg("lodLevel")=0)
  .def("SetShapeType", (void (Urho3D::CollisionShape::*)(Urho3D::ShapeType)) &Urho3D::CollisionShape::SetShapeType, "todo: docstring", py::arg("type"))
  .def("SetSize", (void (Urho3D::CollisionShape::*)(const Urho3D::Vector3 &)) &Urho3D::CollisionShape::SetSize, "todo: docstring", py::arg("size"))
  .def("SetPosition", (void (Urho3D::CollisionShape::*)(const Urho3D::Vector3 &)) &Urho3D::CollisionShape::SetPosition, "todo: docstring", py::arg("position"))
  .def("SetRotation", (void (Urho3D::CollisionShape::*)(const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetRotation, "todo: docstring", py::arg("rotation"))
  .def("SetTransform", (void (Urho3D::CollisionShape::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::CollisionShape::SetTransform, "todo: docstring", py::arg("position"), py::arg("rotation"))
  .def("SetMargin", (void (Urho3D::CollisionShape::*)(float)) &Urho3D::CollisionShape::SetMargin, "todo: docstring", py::arg("margin"))
  .def("SetModel", (void (Urho3D::CollisionShape::*)(Urho3D::Model *)) &Urho3D::CollisionShape::SetModel, "todo: docstring", py::arg("model"))
  .def("SetLodLevel", (void (Urho3D::CollisionShape::*)(unsigned int)) &Urho3D::CollisionShape::SetLodLevel, "todo: docstring", py::arg("lodLevel"))
  //.def("GetCollisionShape", (btCollisionShape * (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetCollisionShape, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetGeometryData", (Urho3D::CollisionGeometryData * (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetGeometryData, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetPhysicsWorld", (Urho3D::PhysicsWorld * (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetPhysicsWorld, "todo: docstring")
  .def("GetShapeType", (Urho3D::ShapeType (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetShapeType, "todo: docstring")
  .def("GetSize", (const Urho3D::Vector3 & (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetSize, "todo: docstring")
  .def("GetPosition", (const Urho3D::Vector3 & (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetPosition, "todo: docstring")
  .def("GetRotation", (const Urho3D::Quaternion & (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetRotation, "todo: docstring")
  .def("GetMargin", (float (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetMargin, "todo: docstring")
  .def("GetModel", (Urho3D::Model * (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetModel, "todo: docstring")
  .def("GetLodLevel", (unsigned int (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetLodLevel, "todo: docstring")
  .def("GetWorldBoundingBox", (Urho3D::BoundingBox (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetWorldBoundingBox, "todo: docstring")
  .def("NotifyRigidBody", (void (Urho3D::CollisionShape::*)(bool)) &Urho3D::CollisionShape::NotifyRigidBody, "todo: docstring", py::arg("updateMass")=true)
  .def("SetModelAttr", (void (Urho3D::CollisionShape::*)(const Urho3D::ResourceRef &)) &Urho3D::CollisionShape::SetModelAttr, "todo: docstring", py::arg("value"))
  .def("GetModelAttr", (Urho3D::ResourceRef (Urho3D::CollisionShape::*)() const) &Urho3D::CollisionShape::GetModelAttr, "todo: docstring")
  .def("ReleaseShape", (void (Urho3D::CollisionShape::*)()) &Urho3D::CollisionShape::ReleaseShape, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_LogicComponent(py::class_<Urho3D::LogicComponent, Urho3D::SharedPtr<Urho3D::LogicComponent>, Urho3D::Component>& pyclass_Var_Urho3D_LogicComponent)
{
    // Class LogicComponent Implementation
pyclass_Var_Urho3D_LogicComponent
  .def("GetType", (Urho3D::StringHash (Urho3D::LogicComponent::*)() const) &Urho3D::LogicComponent::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::LogicComponent::*)() const) &Urho3D::LogicComponent::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::LogicComponent::*)() const) &Urho3D::LogicComponent::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~LogicComponent", (void (Urho3D::LogicComponent::*)()) &Urho3D::LogicComponent::~LogicComponent, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::LogicComponent::*)()) &Urho3D::LogicComponent::OnSetEnabled, "todo: docstring")
  .def("Start", (void (Urho3D::LogicComponent::*)()) &Urho3D::LogicComponent::Start, "todo: docstring")
  .def("DelayedStart", (void (Urho3D::LogicComponent::*)()) &Urho3D::LogicComponent::DelayedStart, "todo: docstring")
  .def("Stop", (void (Urho3D::LogicComponent::*)()) &Urho3D::LogicComponent::Stop, "todo: docstring")
  .def("Update", (void (Urho3D::LogicComponent::*)(float)) &Urho3D::LogicComponent::Update, "todo: docstring", py::arg("timeStep"))
  .def("PostUpdate", (void (Urho3D::LogicComponent::*)(float)) &Urho3D::LogicComponent::PostUpdate, "todo: docstring", py::arg("timeStep"))
  .def("FixedUpdate", (void (Urho3D::LogicComponent::*)(float)) &Urho3D::LogicComponent::FixedUpdate, "todo: docstring", py::arg("timeStep"))
  .def("FixedPostUpdate", (void (Urho3D::LogicComponent::*)(float)) &Urho3D::LogicComponent::FixedPostUpdate, "todo: docstring", py::arg("timeStep"))
  //.def("SetUpdateEventMask", (void (Urho3D::LogicComponent::*)(Urho3D::FlagSet<Urho3D::UpdateEvent, void>)) &Urho3D::LogicComponent::SetUpdateEventMask, "todo: docstring", py::arg("mask"))
    //['Urho3D::FlagSet<Urho3D::UpdateEvent, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("GetUpdateEventMask", (Urho3D::UpdateEventFlags (Urho3D::LogicComponent::*)() const) &Urho3D::LogicComponent::GetUpdateEventMask, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("IsDelayedStartCalled", (bool (Urho3D::LogicComponent::*)() const) &Urho3D::LogicComponent::IsDelayedStartCalled, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_RaycastVehicle(py::class_<Urho3D::RaycastVehicle, Urho3D::SharedPtr<Urho3D::RaycastVehicle>, Urho3D::LogicComponent>& pyclass_Var_Urho3D_RaycastVehicle)
{
    // Class RaycastVehicle Implementation
pyclass_Var_Urho3D_RaycastVehicle
  .def("GetType", (Urho3D::StringHash (Urho3D::RaycastVehicle::*)() const) &Urho3D::RaycastVehicle::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::RaycastVehicle::*)() const) &Urho3D::RaycastVehicle::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::RaycastVehicle::*)() const) &Urho3D::RaycastVehicle::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~RaycastVehicle", (void (Urho3D::RaycastVehicle::*)()) &Urho3D::RaycastVehicle::~RaycastVehicle, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::RaycastVehicle::*)()) &Urho3D::RaycastVehicle::OnSetEnabled, "todo: docstring")
  .def("ApplyAttributes", (void (Urho3D::RaycastVehicle::*)()) &Urho3D::RaycastVehicle::ApplyAttributes, "todo: docstring")
  .def("AddWheel", (void (Urho3D::RaycastVehicle::*)(Urho3D::Node *, Urho3D::Vector3, Urho3D::Vector3, float, float, bool)) &Urho3D::RaycastVehicle::AddWheel, "todo: docstring", py::arg("wheelNode"), py::arg("wheelDirection"), py::arg("wheelAxle"), py::arg("restLength"), py::arg("wheelRadius"), py::arg("frontWheel"))
  .def("ResetSuspension", (void (Urho3D::RaycastVehicle::*)()) &Urho3D::RaycastVehicle::ResetSuspension, "todo: docstring")
  .def("UpdateWheelTransform", (void (Urho3D::RaycastVehicle::*)(int, bool)) &Urho3D::RaycastVehicle::UpdateWheelTransform, "todo: docstring", py::arg("wheel"), py::arg("interpolated"))
  .def("SetSteeringValue", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetSteeringValue, "todo: docstring", py::arg("wheel"), py::arg("steeringValue"))
  .def("SetWheelSuspensionStiffness", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetWheelSuspensionStiffness, "todo: docstring", py::arg("wheel"), py::arg("stiffness"))
  .def("SetWheelDampingRelaxation", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetWheelDampingRelaxation, "todo: docstring", py::arg("wheel"), py::arg("damping"))
  .def("SetWheelDampingCompression", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetWheelDampingCompression, "todo: docstring", py::arg("wheel"), py::arg("compression"))
  .def("SetWheelFrictionSlip", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetWheelFrictionSlip, "todo: docstring", py::arg("wheel"), py::arg("slip"))
  .def("SetWheelRollInfluence", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetWheelRollInfluence, "todo: docstring", py::arg("wheel"), py::arg("rollInfluence"))
  .def("SetEngineForce", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetEngineForce, "todo: docstring", py::arg("wheel"), py::arg("force"))
  .def("SetBrake", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetBrake, "todo: docstring", py::arg("wheel"), py::arg("force"))
  .def("SetWheelRadius", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetWheelRadius, "todo: docstring", py::arg("wheel"), py::arg("wheelRadius"))
  .def("ResetWheels", (void (Urho3D::RaycastVehicle::*)()) &Urho3D::RaycastVehicle::ResetWheels, "todo: docstring")
  .def("SetWheelSkidInfo", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetWheelSkidInfo, "todo: docstring", py::arg("wheel"), py::arg("factor"))
  .def("WheelIsGrounded", (bool (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::WheelIsGrounded, "todo: docstring", py::arg("wheel"))
  .def("SetMaxSuspensionTravel", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetMaxSuspensionTravel, "todo: docstring", py::arg("wheel"), py::arg("maxSuspensionTravel"))
  .def("SetWheelDirection", (void (Urho3D::RaycastVehicle::*)(int, Urho3D::Vector3)) &Urho3D::RaycastVehicle::SetWheelDirection, "todo: docstring", py::arg("wheel"), py::arg("direction"))
  .def("SetWheelAxle", (void (Urho3D::RaycastVehicle::*)(int, Urho3D::Vector3)) &Urho3D::RaycastVehicle::SetWheelAxle, "todo: docstring", py::arg("wheel"), py::arg("axle"))
  .def("SetMaxSideSlipSpeed", (void (Urho3D::RaycastVehicle::*)(float)) &Urho3D::RaycastVehicle::SetMaxSideSlipSpeed, "todo: docstring", py::arg("speed"))
  .def("SetWheelSkidInfoCumulative", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetWheelSkidInfoCumulative, "todo: docstring", py::arg("wheel"), py::arg("skid"))
  .def("SetInAirRPM", (void (Urho3D::RaycastVehicle::*)(float)) &Urho3D::RaycastVehicle::SetInAirRPM, "todo: docstring", py::arg("rpm"))
  .def("SetCoordinateSystem", (void (Urho3D::RaycastVehicle::*)(const Urho3D::IntVector3 &)) &Urho3D::RaycastVehicle::SetCoordinateSystem, "todo: docstring", py::arg("coordinateSystem")=RIGHT_FORWARD_UP)
  .def("Init", (void (Urho3D::RaycastVehicle::*)()) &Urho3D::RaycastVehicle::Init, "todo: docstring")
  .def("FixedUpdate", (void (Urho3D::RaycastVehicle::*)(float)) &Urho3D::RaycastVehicle::FixedUpdate, "todo: docstring", py::arg("timeStep"))
  .def("FixedPostUpdate", (void (Urho3D::RaycastVehicle::*)(float)) &Urho3D::RaycastVehicle::FixedPostUpdate, "todo: docstring", py::arg("timeStep"))
  .def("PostUpdate", (void (Urho3D::RaycastVehicle::*)(float)) &Urho3D::RaycastVehicle::PostUpdate, "todo: docstring", py::arg("timeStep"))
  .def("GetWheelPosition", (Urho3D::Vector3 (Urho3D::RaycastVehicle::*)(int)) &Urho3D::RaycastVehicle::GetWheelPosition, "todo: docstring", py::arg("wheel"))
  .def("GetWheelRotation", (Urho3D::Quaternion (Urho3D::RaycastVehicle::*)(int)) &Urho3D::RaycastVehicle::GetWheelRotation, "todo: docstring", py::arg("wheel"))
  .def("GetWheelConnectionPoint", (Urho3D::Vector3 (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelConnectionPoint, "todo: docstring", py::arg("wheel"))
  .def("GetNumWheels", (int (Urho3D::RaycastVehicle::*)() const) &Urho3D::RaycastVehicle::GetNumWheels, "todo: docstring")
  .def("GetWheelNode", (Urho3D::Node * (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelNode, "todo: docstring", py::arg("wheel"))
  .def("GetSteeringValue", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetSteeringValue, "todo: docstring", py::arg("wheel"))
  .def("GetWheelSuspensionStiffness", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelSuspensionStiffness, "todo: docstring", py::arg("wheel"))
  .def("GetWheelDampingRelaxation", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelDampingRelaxation, "todo: docstring", py::arg("wheel"))
  .def("GetWheelDampingCompression", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelDampingCompression, "todo: docstring", py::arg("wheel"))
  .def("GetWheelFrictionSlip", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelFrictionSlip, "todo: docstring", py::arg("wheel"))
  .def("GetWheelRollInfluence", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelRollInfluence, "todo: docstring", py::arg("wheel"))
  .def("GetEngineForce", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetEngineForce, "todo: docstring", py::arg("wheel"))
  .def("GetBrake", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetBrake, "todo: docstring", py::arg("wheel"))
  .def("GetWheelRadius", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelRadius, "todo: docstring", py::arg("wheel"))
  .def("SetWheelRestLength", (void (Urho3D::RaycastVehicle::*)(int, float)) &Urho3D::RaycastVehicle::SetWheelRestLength, "todo: docstring", py::arg("wheel"), py::arg("length"))
  .def("GetWheelRestLength", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelRestLength, "todo: docstring", py::arg("wheel"))
  .def("GetMaxSuspensionTravel", (float (Urho3D::RaycastVehicle::*)(int)) &Urho3D::RaycastVehicle::GetMaxSuspensionTravel, "todo: docstring", py::arg("wheel"))
  .def("GetWheelAxle", (Urho3D::Vector3 (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelAxle, "todo: docstring", py::arg("wheel"))
  .def("GetWheelSideSlipSpeed", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelSideSlipSpeed, "todo: docstring", py::arg("wheel"))
  .def("GetMaxSideSlipSpeed", (float (Urho3D::RaycastVehicle::*)() const) &Urho3D::RaycastVehicle::GetMaxSideSlipSpeed, "todo: docstring")
  .def("GetWheelSkidInfo", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelSkidInfo, "todo: docstring", py::arg("wheel"))
  .def("GetWheelDirection", (Urho3D::Vector3 (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelDirection, "todo: docstring", py::arg("wheel"))
  .def("GetWheelSkidInfoCumulative", (float (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetWheelSkidInfoCumulative, "todo: docstring", py::arg("wheel"))
  .def("IsFrontWheel", (bool (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::IsFrontWheel, "todo: docstring", py::arg("wheel"))
  .def("GetContactPosition", (Urho3D::Vector3 (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetContactPosition, "todo: docstring", py::arg("wheel"))
  .def("GetContactNormal", (Urho3D::Vector3 (Urho3D::RaycastVehicle::*)(int) const) &Urho3D::RaycastVehicle::GetContactNormal, "todo: docstring", py::arg("wheel"))
  .def("GetInAirRPM", (float (Urho3D::RaycastVehicle::*)() const) &Urho3D::RaycastVehicle::GetInAirRPM, "todo: docstring")
  .def("GetCoordinateSystem", (Urho3D::IntVector3 (Urho3D::RaycastVehicle::*)() const) &Urho3D::RaycastVehicle::GetCoordinateSystem, "todo: docstring")
  .def("GetWheelDataAttr", (Urho3D::VariantVector (Urho3D::RaycastVehicle::*)() const) &Urho3D::RaycastVehicle::GetWheelDataAttr, "todo: docstring")
  .def("SetWheelDataAttr", (void (Urho3D::RaycastVehicle::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::RaycastVehicle::SetWheelDataAttr, "todo: docstring", py::arg("value"))
// Class Variables:
  .def_readonly_static("RIGHT_UP_FORWARD",&Urho3D::RaycastVehicle::RIGHT_UP_FORWARD, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("RIGHT_FORWARD_UP",&Urho3D::RaycastVehicle::RIGHT_FORWARD_UP, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("UP_FORWARD_RIGHT",&Urho3D::RaycastVehicle::UP_FORWARD_RIGHT, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("UP_RIGHT_FORWARD",&Urho3D::RaycastVehicle::UP_RIGHT_FORWARD, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("FORWARD_RIGHT_UP",&Urho3D::RaycastVehicle::FORWARD_RIGHT_UP, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("FORWARD_UP_RIGHT",&Urho3D::RaycastVehicle::FORWARD_UP_RIGHT, "todo: var docstring")//const Urho3D::IntVector3
;
}

void Implement_Urho3D_SplinePath(py::class_<Urho3D::SplinePath, Urho3D::SharedPtr<Urho3D::SplinePath>, Urho3D::Component>& pyclass_Var_Urho3D_SplinePath)
{
    // Class SplinePath Implementation
pyclass_Var_Urho3D_SplinePath
  .def("GetType", (Urho3D::StringHash (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~SplinePath", (void (Urho3D::SplinePath::*)()) &Urho3D::SplinePath::~SplinePath, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::SplinePath::*)()) &Urho3D::SplinePath::ApplyAttributes, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::SplinePath::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::SplinePath::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("AddControlPoint", (void (Urho3D::SplinePath::*)(Urho3D::Node *, unsigned int)) &Urho3D::SplinePath::AddControlPoint, "todo: docstring", py::arg("point"), py::arg("index")=M_MAX_UNSIGNED)
  .def("RemoveControlPoint", (void (Urho3D::SplinePath::*)(Urho3D::Node *)) &Urho3D::SplinePath::RemoveControlPoint, "todo: docstring", py::arg("point"))
  .def("ClearControlPoints", (void (Urho3D::SplinePath::*)()) &Urho3D::SplinePath::ClearControlPoints, "todo: docstring")
  .def("SetInterpolationMode", (void (Urho3D::SplinePath::*)(Urho3D::InterpolationMode)) &Urho3D::SplinePath::SetInterpolationMode, "todo: docstring", py::arg("interpolationMode"))
  .def("SetSpeed", (void (Urho3D::SplinePath::*)(float)) &Urho3D::SplinePath::SetSpeed, "todo: docstring", py::arg("speed"))
  .def("SetPosition", (void (Urho3D::SplinePath::*)(float)) &Urho3D::SplinePath::SetPosition, "todo: docstring", py::arg("factor"))
  .def("SetControlledNode", (void (Urho3D::SplinePath::*)(Urho3D::Node *)) &Urho3D::SplinePath::SetControlledNode, "todo: docstring", py::arg("controlled"))
  .def("GetInterpolationMode", (Urho3D::InterpolationMode (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetInterpolationMode, "todo: docstring")
  .def("GetSpeed", (float (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetSpeed, "todo: docstring")
  .def("GetLength", (float (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetLength, "todo: docstring")
  .def("GetPosition", (Urho3D::Vector3 (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetPosition, "todo: docstring")
  .def("GetControlledNode", (Urho3D::Node * (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetControlledNode, "todo: docstring")
  .def("GetPoint", (Urho3D::Vector3 (Urho3D::SplinePath::*)(float) const) &Urho3D::SplinePath::GetPoint, "todo: docstring", py::arg("factor"))
  .def("Move", (void (Urho3D::SplinePath::*)(float)) &Urho3D::SplinePath::Move, "todo: docstring", py::arg("timeStep"))
  .def("Reset", (void (Urho3D::SplinePath::*)()) &Urho3D::SplinePath::Reset, "todo: docstring")
  .def("IsFinished", (bool (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::IsFinished, "todo: docstring")
  .def("SetControlPointIdsAttr", (void (Urho3D::SplinePath::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::SplinePath::SetControlPointIdsAttr, "todo: docstring", py::arg("value"))
  .def("GetControlPointIdsAttr", (const Urho3D::VariantVector & (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetControlPointIdsAttr, "todo: docstring")
  .def("SetControlledIdAttr", (void (Urho3D::SplinePath::*)(unsigned int)) &Urho3D::SplinePath::SetControlledIdAttr, "todo: docstring", py::arg("value"))
  .def("GetControlledIdAttr", (unsigned int (Urho3D::SplinePath::*)() const) &Urho3D::SplinePath::GetControlledIdAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Menu(py::class_<Urho3D::Menu, Urho3D::SharedPtr<Urho3D::Menu>, Urho3D::Button>& pyclass_Var_Urho3D_Menu)
{
    // Class Menu Implementation
pyclass_Var_Urho3D_Menu
  .def("GetType", (Urho3D::StringHash (Urho3D::Menu::*)() const) &Urho3D::Menu::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Menu::*)() const) &Urho3D::Menu::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Menu::*)() const) &Urho3D::Menu::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Menu", (void (Urho3D::Menu::*)()) &Urho3D::Menu::~Menu, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("LoadXML", (bool (Urho3D::Menu::*)(const Urho3D::XMLElement &, Urho3D::XMLFile *)) &Urho3D::Menu::LoadXML, "todo: docstring", py::arg("source"), py::arg("styleFile"))
  .def("SaveXML", (bool (Urho3D::Menu::*)(Urho3D::XMLElement &) const) &Urho3D::Menu::SaveXML, "todo: docstring", py::arg("dest"))
  .def("Update", (void (Urho3D::Menu::*)(float)) &Urho3D::Menu::Update, "todo: docstring", py::arg("timeStep"))
  .def("OnHover", (void (Urho3D::Menu::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &, int, int, Urho3D::Cursor *)) &Urho3D::Menu::OnHover, "todo: docstring", py::arg("position"), py::arg("screenPosition"), py::arg("buttons"), py::arg("qualifiers"), py::arg("cursor"))
  .def("OnShowPopup", (void (Urho3D::Menu::*)()) &Urho3D::Menu::OnShowPopup, "todo: docstring")
  .def("OnHidePopup", (void (Urho3D::Menu::*)()) &Urho3D::Menu::OnHidePopup, "todo: docstring")
  .def("SetPopup", (void (Urho3D::Menu::*)(Urho3D::UIElement *)) &Urho3D::Menu::SetPopup, "todo: docstring", py::arg("popup"))
  .def("SetPopupOffset", (void (Urho3D::Menu::*)(const Urho3D::IntVector2 &)) &Urho3D::Menu::SetPopupOffset, "todo: docstring", py::arg("offset"))
  .def("SetPopupOffset", (void (Urho3D::Menu::*)(int, int)) &Urho3D::Menu::SetPopupOffset, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("ShowPopup", (void (Urho3D::Menu::*)(bool)) &Urho3D::Menu::ShowPopup, "todo: docstring", py::arg("enable"))
  .def("SetAccelerator", (void (Urho3D::Menu::*)(int, int)) &Urho3D::Menu::SetAccelerator, "todo: docstring", py::arg("key"), py::arg("qualifiers"))
  .def("GetPopup", (Urho3D::UIElement * (Urho3D::Menu::*)() const) &Urho3D::Menu::GetPopup, "todo: docstring")
  .def("GetPopupOffset", (const Urho3D::IntVector2 & (Urho3D::Menu::*)() const) &Urho3D::Menu::GetPopupOffset, "todo: docstring")
  .def("GetShowPopup", (bool (Urho3D::Menu::*)() const) &Urho3D::Menu::GetShowPopup, "todo: docstring")
  .def("GetAcceleratorKey", (int (Urho3D::Menu::*)() const) &Urho3D::Menu::GetAcceleratorKey, "todo: docstring")
  .def("GetAcceleratorQualifiers", (int (Urho3D::Menu::*)() const) &Urho3D::Menu::GetAcceleratorQualifiers, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ScrollView(py::class_<Urho3D::ScrollView, Urho3D::SharedPtr<Urho3D::ScrollView>, Urho3D::UIElement>& pyclass_Var_Urho3D_ScrollView)
{
    // Class ScrollView Implementation
pyclass_Var_Urho3D_ScrollView
  .def("GetType", (Urho3D::StringHash (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ScrollView", (void (Urho3D::ScrollView::*)()) &Urho3D::ScrollView::~ScrollView, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Update", (void (Urho3D::ScrollView::*)(float)) &Urho3D::ScrollView::Update, "todo: docstring", py::arg("timeStep"))
  .def("ApplyAttributes", (void (Urho3D::ScrollView::*)()) &Urho3D::ScrollView::ApplyAttributes, "todo: docstring")
  //.def("OnWheel", (void (Urho3D::ScrollView::*)(int, Urho3D::FlagSet<Urho3D::MouseButton, void>, Urho3D::FlagSet<Urho3D::Qualifier, void>)) &Urho3D::ScrollView::OnWheel, "todo: docstring", py::arg("delta"), py::arg("buttons"), py::arg("qualifiers"))
    //['int', 'Urho3D::FlagSet<Urho3D::MouseButton, void>', 'Urho3D::FlagSet<Urho3D::Qualifier, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("OnKey", (void (Urho3D::ScrollView::*)(Urho3D::Key, Urho3D::FlagSet<Urho3D::MouseButton, void>, Urho3D::FlagSet<Urho3D::Qualifier, void>)) &Urho3D::ScrollView::OnKey, "todo: docstring", py::arg("key"), py::arg("buttons"), py::arg("qualifiers"))
    //['Urho3D::Key', 'Urho3D::FlagSet<Urho3D::MouseButton, void>', 'Urho3D::FlagSet<Urho3D::Qualifier, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnResize", (void (Urho3D::ScrollView::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::ScrollView::OnResize, "todo: docstring", py::arg("newSize"), py::arg("delta"))
  .def("IsWheelHandler", (bool (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::IsWheelHandler, "todo: docstring")
  .def("SetContentElement", (void (Urho3D::ScrollView::*)(Urho3D::UIElement *)) &Urho3D::ScrollView::SetContentElement, "todo: docstring", py::arg("element"))
  .def("SetViewPosition", (void (Urho3D::ScrollView::*)(const Urho3D::IntVector2 &)) &Urho3D::ScrollView::SetViewPosition, "todo: docstring", py::arg("position"))
  .def("SetViewPosition", (void (Urho3D::ScrollView::*)(int, int)) &Urho3D::ScrollView::SetViewPosition, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetScrollBarsVisible", (void (Urho3D::ScrollView::*)(bool, bool)) &Urho3D::ScrollView::SetScrollBarsVisible, "todo: docstring", py::arg("horizontal"), py::arg("vertical"))
  .def("SetHorizontalScrollBarVisible", (void (Urho3D::ScrollView::*)(bool)) &Urho3D::ScrollView::SetHorizontalScrollBarVisible, "todo: docstring", py::arg("visible"))
  .def("SetVerticalScrollBarVisible", (void (Urho3D::ScrollView::*)(bool)) &Urho3D::ScrollView::SetVerticalScrollBarVisible, "todo: docstring", py::arg("visible"))
  .def("SetScrollBarsAutoVisible", (void (Urho3D::ScrollView::*)(bool)) &Urho3D::ScrollView::SetScrollBarsAutoVisible, "todo: docstring", py::arg("enable"))
  .def("SetScrollStep", (void (Urho3D::ScrollView::*)(float)) &Urho3D::ScrollView::SetScrollStep, "todo: docstring", py::arg("step"))
  .def("SetPageStep", (void (Urho3D::ScrollView::*)(float)) &Urho3D::ScrollView::SetPageStep, "todo: docstring", py::arg("step"))
  .def("SetScrollDeceleration", (void (Urho3D::ScrollView::*)(float)) &Urho3D::ScrollView::SetScrollDeceleration, "todo: docstring", py::arg("deceleration"))
  .def("SetScrollSnapEpsilon", (void (Urho3D::ScrollView::*)(float)) &Urho3D::ScrollView::SetScrollSnapEpsilon, "todo: docstring", py::arg("snap"))
  .def("SetAutoDisableChildren", (void (Urho3D::ScrollView::*)(bool)) &Urho3D::ScrollView::SetAutoDisableChildren, "todo: docstring", py::arg("disable"))
  .def("SetAutoDisableThreshold", (void (Urho3D::ScrollView::*)(float)) &Urho3D::ScrollView::SetAutoDisableThreshold, "todo: docstring", py::arg("amount"))
  .def("GetViewPosition", (const Urho3D::IntVector2 & (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetViewPosition, "todo: docstring")
  .def("GetContentElement", (Urho3D::UIElement * (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetContentElement, "todo: docstring")
  .def("GetHorizontalScrollBar", (Urho3D::ScrollBar * (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetHorizontalScrollBar, "todo: docstring")
  .def("GetVerticalScrollBar", (Urho3D::ScrollBar * (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetVerticalScrollBar, "todo: docstring")
  .def("GetScrollPanel", (Urho3D::BorderImage * (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetScrollPanel, "todo: docstring")
  .def("GetScrollBarsAutoVisible", (bool (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetScrollBarsAutoVisible, "todo: docstring")
  .def("GetHorizontalScrollBarVisible", (bool (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetHorizontalScrollBarVisible, "todo: docstring")
  .def("GetVerticalScrollBarVisible", (bool (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetVerticalScrollBarVisible, "todo: docstring")
  .def("GetScrollStep", (float (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetScrollStep, "todo: docstring")
  .def("GetPageStep", (float (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetPageStep, "todo: docstring")
  .def("GetScrollDeceleration", (float (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetScrollDeceleration, "todo: docstring")
  .def("GetScrollSnapEpsilon", (float (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetScrollSnapEpsilon, "todo: docstring")
  .def("GetAutoDisableChildren", (bool (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetAutoDisableChildren, "todo: docstring")
  .def("GetAutoDisableThreshold", (float (Urho3D::ScrollView::*)() const) &Urho3D::ScrollView::GetAutoDisableThreshold, "todo: docstring")
  .def("SetViewPositionAttr", (void (Urho3D::ScrollView::*)(const Urho3D::IntVector2 &)) &Urho3D::ScrollView::SetViewPositionAttr, "todo: docstring", py::arg("value"))
// Class Variables:
;
}

void Implement_Urho3D_Sprite(py::class_<Urho3D::Sprite, Urho3D::SharedPtr<Urho3D::Sprite>, Urho3D::UIElement>& pyclass_Var_Urho3D_Sprite)
{
    // Class Sprite Implementation
pyclass_Var_Urho3D_Sprite
  .def("GetType", (Urho3D::StringHash (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Sprite", (void (Urho3D::Sprite::*)()) &Urho3D::Sprite::~Sprite, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("IsWithinScissor", (bool (Urho3D::Sprite::*)(const Urho3D::IntRect &)) &Urho3D::Sprite::IsWithinScissor, "todo: docstring", py::arg("currentScissor"))
  .def("GetScreenPosition", (const Urho3D::IntVector2 & (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetScreenPosition, "todo: docstring")
  //.def("GetBatches", (void (Urho3D::Sprite::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::Sprite::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnPositionSet", (void (Urho3D::Sprite::*)(const Urho3D::IntVector2 &)) &Urho3D::Sprite::OnPositionSet, "todo: docstring", py::arg("newPosition"))
  .def("ScreenToElement", (Urho3D::IntVector2 (Urho3D::Sprite::*)(const Urho3D::IntVector2 &)) &Urho3D::Sprite::ScreenToElement, "todo: docstring", py::arg("screenPosition"))
  .def("ElementToScreen", (Urho3D::IntVector2 (Urho3D::Sprite::*)(const Urho3D::IntVector2 &)) &Urho3D::Sprite::ElementToScreen, "todo: docstring", py::arg("position"))
  .def("SetPosition", (void (Urho3D::Sprite::*)(const Urho3D::Vector2 &)) &Urho3D::Sprite::SetPosition, "todo: docstring", py::arg("position"))
  .def("SetPosition", (void (Urho3D::Sprite::*)(float, float)) &Urho3D::Sprite::SetPosition, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetHotSpot", (void (Urho3D::Sprite::*)(const Urho3D::IntVector2 &)) &Urho3D::Sprite::SetHotSpot, "todo: docstring", py::arg("hotSpot"))
  .def("SetHotSpot", (void (Urho3D::Sprite::*)(int, int)) &Urho3D::Sprite::SetHotSpot, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetScale", (void (Urho3D::Sprite::*)(const Urho3D::Vector2 &)) &Urho3D::Sprite::SetScale, "todo: docstring", py::arg("scale"))
  .def("SetScale", (void (Urho3D::Sprite::*)(float, float)) &Urho3D::Sprite::SetScale, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetScale", (void (Urho3D::Sprite::*)(float)) &Urho3D::Sprite::SetScale, "todo: docstring", py::arg("scale"))
  .def("SetRotation", (void (Urho3D::Sprite::*)(float)) &Urho3D::Sprite::SetRotation, "todo: docstring", py::arg("angle"))
  .def("SetTexture", (void (Urho3D::Sprite::*)(Urho3D::Texture *)) &Urho3D::Sprite::SetTexture, "todo: docstring", py::arg("texture"))
  .def("SetImageRect", (void (Urho3D::Sprite::*)(const Urho3D::IntRect &)) &Urho3D::Sprite::SetImageRect, "todo: docstring", py::arg("rect"))
  .def("SetFullImageRect", (void (Urho3D::Sprite::*)()) &Urho3D::Sprite::SetFullImageRect, "todo: docstring")
  .def("SetBlendMode", (void (Urho3D::Sprite::*)(Urho3D::BlendMode)) &Urho3D::Sprite::SetBlendMode, "todo: docstring", py::arg("mode"))
  .def("GetPosition", (const Urho3D::Vector2 & (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetPosition, "todo: docstring")
  .def("GetHotSpot", (const Urho3D::IntVector2 & (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetHotSpot, "todo: docstring")
  .def("GetScale", (const Urho3D::Vector2 & (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetScale, "todo: docstring")
  .def("GetRotation", (float (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetRotation, "todo: docstring")
  .def("GetTexture", (Urho3D::Texture * (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetTexture, "todo: docstring")
  .def("GetImageRect", (const Urho3D::IntRect & (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetImageRect, "todo: docstring")
  .def("GetBlendMode", (Urho3D::BlendMode (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetBlendMode, "todo: docstring")
  .def("SetTextureAttr", (void (Urho3D::Sprite::*)(const Urho3D::ResourceRef &)) &Urho3D::Sprite::SetTextureAttr, "todo: docstring", py::arg("value"))
  .def("GetTextureAttr", (Urho3D::ResourceRef (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetTextureAttr, "todo: docstring")
  .def("GetTransform", (const Urho3D::Matrix3x4 & (Urho3D::Sprite::*)() const) &Urho3D::Sprite::GetTransform, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_UIComponent(py::class_<Urho3D::UIComponent, Urho3D::SharedPtr<Urho3D::UIComponent>, Urho3D::Component>& pyclass_Var_Urho3D_UIComponent)
{
    // Class UIComponent Implementation
pyclass_Var_Urho3D_UIComponent
  .def("GetType", (Urho3D::StringHash (Urho3D::UIComponent::*)() const) &Urho3D::UIComponent::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::UIComponent::*)() const) &Urho3D::UIComponent::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::UIComponent::*)() const) &Urho3D::UIComponent::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~UIComponent", (void (Urho3D::UIComponent::*)()) &Urho3D::UIComponent::~UIComponent, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("GetRoot", (Urho3D::UIElement * (Urho3D::UIComponent::*)() const) &Urho3D::UIComponent::GetRoot, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::UIComponent::*)() const) &Urho3D::UIComponent::GetMaterial, "todo: docstring")
  .def("GetTexture", (Urho3D::Texture2D * (Urho3D::UIComponent::*)() const) &Urho3D::UIComponent::GetTexture, "todo: docstring")
  .def("SetViewportIndex", (void (Urho3D::UIComponent::*)(unsigned int)) &Urho3D::UIComponent::SetViewportIndex, "todo: docstring", py::arg("index"))
// Class Variables:
;
}

void Implement_Urho3D_Renderer2D(py::class_<Urho3D::Renderer2D, Urho3D::SharedPtr<Urho3D::Renderer2D>, Urho3D::Drawable>& pyclass_Var_Urho3D_Renderer2D)
{
    // Class Renderer2D Implementation
pyclass_Var_Urho3D_Renderer2D
  .def("GetType", (Urho3D::StringHash (Urho3D::Renderer2D::*)() const) &Urho3D::Renderer2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Renderer2D::*)() const) &Urho3D::Renderer2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Renderer2D::*)() const) &Urho3D::Renderer2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Renderer2D", (void (Urho3D::Renderer2D::*)()) &Urho3D::Renderer2D::~Renderer2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("ProcessRayQuery", (void (Urho3D::Renderer2D::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::Renderer2D::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::Renderer2D::*)(const Urho3D::FrameInfo &)) &Urho3D::Renderer2D::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateGeometry", (void (Urho3D::Renderer2D::*)(const Urho3D::FrameInfo &)) &Urho3D::Renderer2D::UpdateGeometry, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetUpdateGeometryType", (Urho3D::UpdateGeometryType (Urho3D::Renderer2D::*)()) &Urho3D::Renderer2D::GetUpdateGeometryType, "todo: docstring")
  .def("AddDrawable", (void (Urho3D::Renderer2D::*)(Urho3D::Drawable2D *)) &Urho3D::Renderer2D::AddDrawable, "todo: docstring", py::arg("drawable"))
  .def("RemoveDrawable", (void (Urho3D::Renderer2D::*)(Urho3D::Drawable2D *)) &Urho3D::Renderer2D::RemoveDrawable, "todo: docstring", py::arg("drawable"))
  .def("GetMaterial", (Urho3D::Material * (Urho3D::Renderer2D::*)(Urho3D::Texture2D *, Urho3D::BlendMode)) &Urho3D::Renderer2D::GetMaterial, "todo: docstring", py::arg("texture"), py::arg("blendMode"))
  .def("CheckVisibility", (bool (Urho3D::Renderer2D::*)(Urho3D::Drawable2D *) const) &Urho3D::Renderer2D::CheckVisibility, "todo: docstring", py::arg("drawable"))
// Class Variables:
;
}

void Implement_Urho3D_RigidBody2D(py::class_<Urho3D::RigidBody2D, Urho3D::SharedPtr<Urho3D::RigidBody2D>, Urho3D::Component>& pyclass_Var_Urho3D_RigidBody2D)
{
    // Class RigidBody2D Implementation
pyclass_Var_Urho3D_RigidBody2D
  .def("GetType", (Urho3D::StringHash (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~RigidBody2D", (void (Urho3D::RigidBody2D::*)()) &Urho3D::RigidBody2D::~RigidBody2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::RigidBody2D::*)()) &Urho3D::RigidBody2D::OnSetEnabled, "todo: docstring")
  .def("SetBodyType", (void (Urho3D::RigidBody2D::*)(Urho3D::BodyType2D)) &Urho3D::RigidBody2D::SetBodyType, "todo: docstring", py::arg("type"))
  .def("SetMass", (void (Urho3D::RigidBody2D::*)(float)) &Urho3D::RigidBody2D::SetMass, "todo: docstring", py::arg("mass"))
  .def("SetInertia", (void (Urho3D::RigidBody2D::*)(float)) &Urho3D::RigidBody2D::SetInertia, "todo: docstring", py::arg("inertia"))
  .def("SetMassCenter", (void (Urho3D::RigidBody2D::*)(const Urho3D::Vector2 &)) &Urho3D::RigidBody2D::SetMassCenter, "todo: docstring", py::arg("center"))
  .def("SetUseFixtureMass", (void (Urho3D::RigidBody2D::*)(bool)) &Urho3D::RigidBody2D::SetUseFixtureMass, "todo: docstring", py::arg("useFixtureMass"))
  .def("SetLinearDamping", (void (Urho3D::RigidBody2D::*)(float)) &Urho3D::RigidBody2D::SetLinearDamping, "todo: docstring", py::arg("linearDamping"))
  .def("SetAngularDamping", (void (Urho3D::RigidBody2D::*)(float)) &Urho3D::RigidBody2D::SetAngularDamping, "todo: docstring", py::arg("angularDamping"))
  .def("SetAllowSleep", (void (Urho3D::RigidBody2D::*)(bool)) &Urho3D::RigidBody2D::SetAllowSleep, "todo: docstring", py::arg("allowSleep"))
  .def("SetFixedRotation", (void (Urho3D::RigidBody2D::*)(bool)) &Urho3D::RigidBody2D::SetFixedRotation, "todo: docstring", py::arg("fixedRotation"))
  .def("SetBullet", (void (Urho3D::RigidBody2D::*)(bool)) &Urho3D::RigidBody2D::SetBullet, "todo: docstring", py::arg("bullet"))
  .def("SetGravityScale", (void (Urho3D::RigidBody2D::*)(float)) &Urho3D::RigidBody2D::SetGravityScale, "todo: docstring", py::arg("gravityScale"))
  .def("SetAwake", (void (Urho3D::RigidBody2D::*)(bool)) &Urho3D::RigidBody2D::SetAwake, "todo: docstring", py::arg("awake"))
  .def("SetLinearVelocity", (void (Urho3D::RigidBody2D::*)(const Urho3D::Vector2 &)) &Urho3D::RigidBody2D::SetLinearVelocity, "todo: docstring", py::arg("linearVelocity"))
  .def("SetAngularVelocity", (void (Urho3D::RigidBody2D::*)(float)) &Urho3D::RigidBody2D::SetAngularVelocity, "todo: docstring", py::arg("angularVelocity"))
  .def("ApplyForce", (void (Urho3D::RigidBody2D::*)(const Urho3D::Vector2 &, const Urho3D::Vector2 &, bool)) &Urho3D::RigidBody2D::ApplyForce, "todo: docstring", py::arg("force"), py::arg("point"), py::arg("wake"))
  .def("ApplyForceToCenter", (void (Urho3D::RigidBody2D::*)(const Urho3D::Vector2 &, bool)) &Urho3D::RigidBody2D::ApplyForceToCenter, "todo: docstring", py::arg("force"), py::arg("wake"))
  .def("ApplyTorque", (void (Urho3D::RigidBody2D::*)(float, bool)) &Urho3D::RigidBody2D::ApplyTorque, "todo: docstring", py::arg("torque"), py::arg("wake"))
  .def("ApplyLinearImpulse", (void (Urho3D::RigidBody2D::*)(const Urho3D::Vector2 &, const Urho3D::Vector2 &, bool)) &Urho3D::RigidBody2D::ApplyLinearImpulse, "todo: docstring", py::arg("impulse"), py::arg("point"), py::arg("wake"))
  .def("ApplyLinearImpulseToCenter", (void (Urho3D::RigidBody2D::*)(const Urho3D::Vector2 &, bool)) &Urho3D::RigidBody2D::ApplyLinearImpulseToCenter, "todo: docstring", py::arg("impulse"), py::arg("wake"))
  .def("ApplyAngularImpulse", (void (Urho3D::RigidBody2D::*)(float, bool)) &Urho3D::RigidBody2D::ApplyAngularImpulse, "todo: docstring", py::arg("impulse"), py::arg("wake"))
  .def("CreateBody", (void (Urho3D::RigidBody2D::*)()) &Urho3D::RigidBody2D::CreateBody, "todo: docstring")
  .def("ReleaseBody", (void (Urho3D::RigidBody2D::*)()) &Urho3D::RigidBody2D::ReleaseBody, "todo: docstring")
  .def("ApplyWorldTransform", (void (Urho3D::RigidBody2D::*)()) &Urho3D::RigidBody2D::ApplyWorldTransform, "todo: docstring")
  .def("ApplyWorldTransform", (void (Urho3D::RigidBody2D::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::RigidBody2D::ApplyWorldTransform, "todo: docstring", py::arg("newWorldPosition"), py::arg("newWorldRotation"))
  .def("AddCollisionShape2D", (void (Urho3D::RigidBody2D::*)(Urho3D::CollisionShape2D *)) &Urho3D::RigidBody2D::AddCollisionShape2D, "todo: docstring", py::arg("collisionShape"))
  .def("RemoveCollisionShape2D", (void (Urho3D::RigidBody2D::*)(Urho3D::CollisionShape2D *)) &Urho3D::RigidBody2D::RemoveCollisionShape2D, "todo: docstring", py::arg("collisionShape"))
  .def("AddConstraint2D", (void (Urho3D::RigidBody2D::*)(Urho3D::Constraint2D *)) &Urho3D::RigidBody2D::AddConstraint2D, "todo: docstring", py::arg("constraint"))
  .def("RemoveConstraint2D", (void (Urho3D::RigidBody2D::*)(Urho3D::Constraint2D *)) &Urho3D::RigidBody2D::RemoveConstraint2D, "todo: docstring", py::arg("constraint"))
  .def("GetBodyType", (Urho3D::BodyType2D (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetBodyType, "todo: docstring")
  .def("GetMass", (float (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetMass, "todo: docstring")
  .def("GetInertia", (float (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetInertia, "todo: docstring")
  .def("GetMassCenter", (Urho3D::Vector2 (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetMassCenter, "todo: docstring")
  .def("GetUseFixtureMass", (bool (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetUseFixtureMass, "todo: docstring")
  .def("GetLinearDamping", (float (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetLinearDamping, "todo: docstring")
  .def("GetAngularDamping", (float (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetAngularDamping, "todo: docstring")
  .def("IsAllowSleep", (bool (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::IsAllowSleep, "todo: docstring")
  .def("IsFixedRotation", (bool (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::IsFixedRotation, "todo: docstring")
  .def("IsBullet", (bool (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::IsBullet, "todo: docstring")
  .def("GetGravityScale", (float (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetGravityScale, "todo: docstring")
  .def("IsAwake", (bool (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::IsAwake, "todo: docstring")
  .def("GetLinearVelocity", (Urho3D::Vector2 (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetLinearVelocity, "todo: docstring")
  .def("GetAngularVelocity", (float (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetAngularVelocity, "todo: docstring")
  //.def("GetBody", (b2Body * (Urho3D::RigidBody2D::*)() const) &Urho3D::RigidBody2D::GetBody, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_PhysicsWorld2D(py::class_<Urho3D::PhysicsWorld2D, Urho3D::SharedPtr<Urho3D::PhysicsWorld2D>, Urho3D::Component>& pyclass_Var_Urho3D_PhysicsWorld2D)
{
    // Class PhysicsWorld2D Implementation
pyclass_Var_Urho3D_PhysicsWorld2D
  .def("GetType", (Urho3D::StringHash (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~PhysicsWorld2D", (void (Urho3D::PhysicsWorld2D::*)()) &Urho3D::PhysicsWorld2D::~PhysicsWorld2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::PhysicsWorld2D::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::PhysicsWorld2D::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  //.def("BeginContact", (void (Urho3D::PhysicsWorld2D::*)(b2Contact *)) &Urho3D::PhysicsWorld2D::BeginContact, "todo: docstring", py::arg("contact"))
    //['b2Contact']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("EndContact", (void (Urho3D::PhysicsWorld2D::*)(b2Contact *)) &Urho3D::PhysicsWorld2D::EndContact, "todo: docstring", py::arg("contact"))
    //['b2Contact']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("PreSolve", (void (Urho3D::PhysicsWorld2D::*)(b2Contact *, const b2Manifold *)) &Urho3D::PhysicsWorld2D::PreSolve, "todo: docstring", py::arg("contact"), py::arg("oldManifold"))
    //['b2Contact', 'b2Manifold']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("DrawPolygon", (void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 *, int, const b2Color &)) &Urho3D::PhysicsWorld2D::DrawPolygon, "todo: docstring", py::arg("vertices"), py::arg("vertexCount"), py::arg("color"))
    //['b2Vec2', 'int', 'b2Color']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("DrawSolidPolygon", (void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 *, int, const b2Color &)) &Urho3D::PhysicsWorld2D::DrawSolidPolygon, "todo: docstring", py::arg("vertices"), py::arg("vertexCount"), py::arg("color"))
    //['b2Vec2', 'int', 'b2Color']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("DrawCircle", (void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 &, float, const b2Color &)) &Urho3D::PhysicsWorld2D::DrawCircle, "todo: docstring", py::arg("center"), py::arg("radius"), py::arg("color"))
    //['b2Vec2', 'float', 'b2Color']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("DrawSolidCircle", (void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 &, float, const b2Vec2 &, const b2Color &)) &Urho3D::PhysicsWorld2D::DrawSolidCircle, "todo: docstring", py::arg("center"), py::arg("radius"), py::arg("axis"), py::arg("color"))
    //['b2Vec2', 'float', 'b2Vec2', 'b2Color']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("DrawSegment", (void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 &, const b2Vec2 &, const b2Color &)) &Urho3D::PhysicsWorld2D::DrawSegment, "todo: docstring", py::arg("p1"), py::arg("p2"), py::arg("color"))
    //['b2Vec2', 'b2Vec2', 'b2Color']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("DrawTransform", (void (Urho3D::PhysicsWorld2D::*)(const b2Transform &)) &Urho3D::PhysicsWorld2D::DrawTransform, "todo: docstring", py::arg("xf"))
    //['b2Transform']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("DrawPoint", (void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 &, float, const b2Color &)) &Urho3D::PhysicsWorld2D::DrawPoint, "todo: docstring", py::arg("p"), py::arg("size"), py::arg("color"))
    //['b2Vec2', 'float', 'b2Color']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("Update", (void (Urho3D::PhysicsWorld2D::*)(float)) &Urho3D::PhysicsWorld2D::Update, "todo: docstring", py::arg("timeStep"))
  .def("DrawDebugGeometry", (void (Urho3D::PhysicsWorld2D::*)()) &Urho3D::PhysicsWorld2D::DrawDebugGeometry, "todo: docstring")
  .def("SetUpdateEnabled", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetUpdateEnabled, "todo: docstring", py::arg("enable"))
  .def("SetDrawShape", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetDrawShape, "todo: docstring", py::arg("drawShape"))
  .def("SetDrawJoint", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetDrawJoint, "todo: docstring", py::arg("drawJoint"))
  .def("SetDrawAabb", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetDrawAabb, "todo: docstring", py::arg("drawAabb"))
  .def("SetDrawPair", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetDrawPair, "todo: docstring", py::arg("drawPair"))
  .def("SetDrawCenterOfMass", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetDrawCenterOfMass, "todo: docstring", py::arg("drawCenterOfMass"))
  .def("SetAllowSleeping", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetAllowSleeping, "todo: docstring", py::arg("enable"))
  .def("SetWarmStarting", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetWarmStarting, "todo: docstring", py::arg("enable"))
  .def("SetContinuousPhysics", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetContinuousPhysics, "todo: docstring", py::arg("enable"))
  .def("SetSubStepping", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetSubStepping, "todo: docstring", py::arg("enable"))
  .def("SetGravity", (void (Urho3D::PhysicsWorld2D::*)(const Urho3D::Vector2 &)) &Urho3D::PhysicsWorld2D::SetGravity, "todo: docstring", py::arg("gravity"))
  .def("SetAutoClearForces", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetAutoClearForces, "todo: docstring", py::arg("enable"))
  .def("SetVelocityIterations", (void (Urho3D::PhysicsWorld2D::*)(int)) &Urho3D::PhysicsWorld2D::SetVelocityIterations, "todo: docstring", py::arg("velocityIterations"))
  .def("SetPositionIterations", (void (Urho3D::PhysicsWorld2D::*)(int)) &Urho3D::PhysicsWorld2D::SetPositionIterations, "todo: docstring", py::arg("positionIterations"))
  .def("AddRigidBody", (void (Urho3D::PhysicsWorld2D::*)(Urho3D::RigidBody2D *)) &Urho3D::PhysicsWorld2D::AddRigidBody, "todo: docstring", py::arg("rigidBody"))
  .def("RemoveRigidBody", (void (Urho3D::PhysicsWorld2D::*)(Urho3D::RigidBody2D *)) &Urho3D::PhysicsWorld2D::RemoveRigidBody, "todo: docstring", py::arg("rigidBody"))
  //.def("AddDelayedWorldTransform", (void (Urho3D::PhysicsWorld2D::*)(const Urho3D::DelayedWorldTransform2D &)) &Urho3D::PhysicsWorld2D::AddDelayedWorldTransform, "todo: docstring", py::arg("transform"))
    //['Urho3D::DelayedWorldTransform2D']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("Raycast", (void (Urho3D::PhysicsWorld2D::*)(Urho3D::PODVector<Urho3D::PhysicsRaycastResult2D> &, const Urho3D::Vector2 &, const Urho3D::Vector2 &, unsigned int)) &Urho3D::PhysicsWorld2D::Raycast, "todo: docstring", py::arg("results"), py::arg("startPoint"), py::arg("endPoint"), py::arg("collisionMask")=M_MAX_UNSIGNED)
    //['Urho3D::PODVector<Urho3D::PhysicsRaycastResult2D>', 'Urho3D::Vector2', 'Urho3D::Vector2', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("RaycastSingle", (void (Urho3D::PhysicsWorld2D::*)(Urho3D::PhysicsRaycastResult2D &, const Urho3D::Vector2 &, const Urho3D::Vector2 &, unsigned int)) &Urho3D::PhysicsWorld2D::RaycastSingle, "todo: docstring", py::arg("result"), py::arg("startPoint"), py::arg("endPoint"), py::arg("collisionMask")=M_MAX_UNSIGNED)
  .def("GetRigidBody", (Urho3D::RigidBody2D * (Urho3D::PhysicsWorld2D::*)(const Urho3D::Vector2 &, unsigned int)) &Urho3D::PhysicsWorld2D::GetRigidBody, "todo: docstring", py::arg("point"), py::arg("collisionMask")=M_MAX_UNSIGNED)
  .def("GetRigidBody", (Urho3D::RigidBody2D * (Urho3D::PhysicsWorld2D::*)(int, int, unsigned int)) &Urho3D::PhysicsWorld2D::GetRigidBody, "todo: docstring", py::arg("screenX"), py::arg("screenY"), py::arg("collisionMask")=M_MAX_UNSIGNED)
  //.def("GetRigidBodies", (void (Urho3D::PhysicsWorld2D::*)(Urho3D::PODVector<Urho3D::RigidBody2D *> &, const Urho3D::Rect &, unsigned int)) &Urho3D::PhysicsWorld2D::GetRigidBodies, "todo: docstring", py::arg("results"), py::arg("aabb"), py::arg("collisionMask")=M_MAX_UNSIGNED)
    //['Urho3D::PODVector<Urho3D::RigidBody2D', 'Urho3D::Rect', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("IsUpdateEnabled", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::IsUpdateEnabled, "todo: docstring")
  .def("GetDrawShape", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetDrawShape, "todo: docstring")
  .def("GetDrawJoint", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetDrawJoint, "todo: docstring")
  .def("GetDrawAabb", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetDrawAabb, "todo: docstring")
  .def("GetDrawPair", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetDrawPair, "todo: docstring")
  .def("GetDrawCenterOfMass", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetDrawCenterOfMass, "todo: docstring")
  .def("GetAllowSleeping", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetAllowSleeping, "todo: docstring")
  .def("GetWarmStarting", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetWarmStarting, "todo: docstring")
  .def("GetContinuousPhysics", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetContinuousPhysics, "todo: docstring")
  .def("GetSubStepping", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetSubStepping, "todo: docstring")
  .def("GetAutoClearForces", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetAutoClearForces, "todo: docstring")
  .def("GetGravity", (const Urho3D::Vector2 & (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetGravity, "todo: docstring")
  .def("GetVelocityIterations", (int (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetVelocityIterations, "todo: docstring")
  .def("GetPositionIterations", (int (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::GetPositionIterations, "todo: docstring")
  //.def("GetWorld", (b2World * (Urho3D::PhysicsWorld2D::*)()) &Urho3D::PhysicsWorld2D::GetWorld, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("SetApplyingTransforms", (void (Urho3D::PhysicsWorld2D::*)(bool)) &Urho3D::PhysicsWorld2D::SetApplyingTransforms, "todo: docstring", py::arg("enable"))
  .def("IsApplyingTransforms", (bool (Urho3D::PhysicsWorld2D::*)() const) &Urho3D::PhysicsWorld2D::IsApplyingTransforms, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_TileMapLayer2D(py::class_<Urho3D::TileMapLayer2D, Urho3D::SharedPtr<Urho3D::TileMapLayer2D>, Urho3D::Component>& pyclass_Var_Urho3D_TileMapLayer2D)
{
    // Class TileMapLayer2D Implementation
pyclass_Var_Urho3D_TileMapLayer2D
  .def("GetType", (Urho3D::StringHash (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~TileMapLayer2D", (void (Urho3D::TileMapLayer2D::*)()) &Urho3D::TileMapLayer2D::~TileMapLayer2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::TileMapLayer2D::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::TileMapLayer2D::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  //.def("Initialize", (void (Urho3D::TileMapLayer2D::*)(Urho3D::TileMap2D *, const Urho3D::TmxLayer2D *)) &Urho3D::TileMapLayer2D::Initialize, "todo: docstring", py::arg("tileMap"), py::arg("tmxLayer"))
    //['Urho3D::TileMap2D', 'Urho3D::TmxLayer2D']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("SetDrawOrder", (void (Urho3D::TileMapLayer2D::*)(int)) &Urho3D::TileMapLayer2D::SetDrawOrder, "todo: docstring", py::arg("drawOrder"))
  .def("SetVisible", (void (Urho3D::TileMapLayer2D::*)(bool)) &Urho3D::TileMapLayer2D::SetVisible, "todo: docstring", py::arg("visible"))
  .def("GetTileMap", (Urho3D::TileMap2D * (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetTileMap, "todo: docstring")
  //.def("GetTmxLayer", (const Urho3D::TmxLayer2D * (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetTmxLayer, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetDrawOrder", (int (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetDrawOrder, "todo: docstring")
  .def("IsVisible", (bool (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::IsVisible, "todo: docstring")
  .def("HasProperty", (bool (Urho3D::TileMapLayer2D::*)(const Urho3D::String &) const) &Urho3D::TileMapLayer2D::HasProperty, "todo: docstring", py::arg("name"))
  .def("GetProperty", (const Urho3D::String & (Urho3D::TileMapLayer2D::*)(const Urho3D::String &) const) &Urho3D::TileMapLayer2D::GetProperty, "todo: docstring", py::arg("name"))
  .def("GetLayerType", (Urho3D::TileMapLayerType2D (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetLayerType, "todo: docstring")
  .def("GetWidth", (int (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetWidth, "todo: docstring")
  .def("GetHeight", (int (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetHeight, "todo: docstring")
  .def("GetTileNode", (Urho3D::Node * (Urho3D::TileMapLayer2D::*)(int, int) const) &Urho3D::TileMapLayer2D::GetTileNode, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("GetTile", (Urho3D::Tile2D * (Urho3D::TileMapLayer2D::*)(int, int) const) &Urho3D::TileMapLayer2D::GetTile, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("GetNumObjects", (unsigned int (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetNumObjects, "todo: docstring")
  .def("GetObject", (Urho3D::TileMapObject2D * (Urho3D::TileMapLayer2D::*)(unsigned int) const) &Urho3D::TileMapLayer2D::GetObject, "todo: docstring", py::arg("index"))
  .def("GetObjectNode", (Urho3D::Node * (Urho3D::TileMapLayer2D::*)(unsigned int) const) &Urho3D::TileMapLayer2D::GetObjectNode, "todo: docstring", py::arg("index"))
  .def("GetImageNode", (Urho3D::Node * (Urho3D::TileMapLayer2D::*)() const) &Urho3D::TileMapLayer2D::GetImageNode, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_TileMap2D(py::class_<Urho3D::TileMap2D, Urho3D::SharedPtr<Urho3D::TileMap2D>, Urho3D::Component>& pyclass_Var_Urho3D_TileMap2D)
{
    // Class TileMap2D Implementation
pyclass_Var_Urho3D_TileMap2D
  .def("GetType", (Urho3D::StringHash (Urho3D::TileMap2D::*)() const) &Urho3D::TileMap2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::TileMap2D::*)() const) &Urho3D::TileMap2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::TileMap2D::*)() const) &Urho3D::TileMap2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~TileMap2D", (void (Urho3D::TileMap2D::*)()) &Urho3D::TileMap2D::~TileMap2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::TileMap2D::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::TileMap2D::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetTmxFile", (void (Urho3D::TileMap2D::*)(Urho3D::TmxFile2D *)) &Urho3D::TileMap2D::SetTmxFile, "todo: docstring", py::arg("tmxFile"))
  .def("DrawDebugGeometry", (void (Urho3D::TileMap2D::*)()) &Urho3D::TileMap2D::DrawDebugGeometry, "todo: docstring")
  .def("GetTmxFile", (Urho3D::TmxFile2D * (Urho3D::TileMap2D::*)() const) &Urho3D::TileMap2D::GetTmxFile, "todo: docstring")
  .def("GetInfo", (const Urho3D::TileMapInfo2D & (Urho3D::TileMap2D::*)() const) &Urho3D::TileMap2D::GetInfo, "todo: docstring")
  .def("GetNumLayers", (unsigned int (Urho3D::TileMap2D::*)() const) &Urho3D::TileMap2D::GetNumLayers, "todo: docstring")
  .def("GetLayer", (Urho3D::TileMapLayer2D * (Urho3D::TileMap2D::*)(unsigned int) const) &Urho3D::TileMap2D::GetLayer, "todo: docstring", py::arg("index"))
  .def("TileIndexToPosition", (Urho3D::Vector2 (Urho3D::TileMap2D::*)(int, int) const) &Urho3D::TileMap2D::TileIndexToPosition, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("PositionToTileIndex", (bool (Urho3D::TileMap2D::*)(int &, int &, const Urho3D::Vector2 &) const) &Urho3D::TileMap2D::PositionToTileIndex, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("position"))
  .def("SetTmxFileAttr", (void (Urho3D::TileMap2D::*)(const Urho3D::ResourceRef &)) &Urho3D::TileMap2D::SetTmxFileAttr, "todo: docstring", py::arg("value"))
  .def("GetTmxFileAttr", (Urho3D::ResourceRef (Urho3D::TileMap2D::*)() const) &Urho3D::TileMap2D::GetTmxFileAttr, "todo: docstring")
  //.def("GetTileCollisionShapes", (Vector<SharedPtr<Urho3D::TileMapObject2D> > (Urho3D::TileMap2D::*)(unsigned int) const) &Urho3D::TileMap2D::GetTileCollisionShapes, "todo: docstring", py::arg("gid"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_IntVector3(py::class_<Urho3D::IntVector3, Urho3D::ExternalPtr<Urho3D::IntVector3>>& pyclass_Var_Urho3D_IntVector3)
{
    // Class IntVector3 Implementation
pyclass_Var_Urho3D_IntVector3
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<int, int, int>(), "todo: constructor docstring")
  .def(py::init<const int *>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::IntVector3 &>(), "todo: constructor docstring")
  //  .def(py::self = Urho3D::IntVector3(), "todo: docstring").def("__assign__", (Urho3D::IntVector3 & (Urho3D::IntVector3::*)(const Urho3D::IntVector3 &)) &Urho3D::IntVector3::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::IntVector3']; op =, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self == Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op ==, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self != Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self + Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op +, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(-py::self, "todo: docstring")
    //[]; op -@, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self - Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op -, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * int(), "todo: docstring")
    //['int']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self * Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op *, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / int(), "todo: docstring")
    //['int']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self / Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op /, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self += Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op +=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self -= Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op -=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= int(), "todo: docstring")
    //['int']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self *= Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op *=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= int(), "todo: docstring")
    //['int']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def(py::self /= Urho3D::IntVector3(), "todo: docstring")
    //['Urho3D::IntVector3']; op /=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Data", (const int * (Urho3D::IntVector3::*)() const) &Urho3D::IntVector3::Data, "todo: docstring")
  .def("ToString", (Urho3D::String (Urho3D::IntVector3::*)() const) &Urho3D::IntVector3::ToString, "todo: docstring")
  .def("ToHash", (unsigned int (Urho3D::IntVector3::*)() const) &Urho3D::IntVector3::ToHash, "todo: docstring")
  .def("Length", (float (Urho3D::IntVector3::*)() const) &Urho3D::IntVector3::Length, "todo: docstring")
// External Operators:
  .def(int() * py::self, "todo: docstring")
// Class Variables:
  .def_readwrite("x",&Urho3D::IntVector3::x_, "todo: var docstring")//int
  .def_readwrite("y",&Urho3D::IntVector3::y_, "todo: var docstring")//int
  .def_readwrite("z",&Urho3D::IntVector3::z_, "todo: var docstring")//int
  .def_readonly_static("ZERO",&Urho3D::IntVector3::ZERO, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("LEFT",&Urho3D::IntVector3::LEFT, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("RIGHT",&Urho3D::IntVector3::RIGHT, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("UP",&Urho3D::IntVector3::UP, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("DOWN",&Urho3D::IntVector3::DOWN, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("FORWARD",&Urho3D::IntVector3::FORWARD, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("BACK",&Urho3D::IntVector3::BACK, "todo: var docstring")//const Urho3D::IntVector3
  .def_readonly_static("ONE",&Urho3D::IntVector3::ONE, "todo: var docstring")//const Urho3D::IntVector3
;
}

void Implement_Urho3D_Scene(py::class_<Urho3D::Scene, Urho3D::SharedPtr<Urho3D::Scene>, Urho3D::Node>& pyclass_Var_Urho3D_Scene)
{
    // Class Scene Implementation
pyclass_Var_Urho3D_Scene
  .def("GetType", (Urho3D::StringHash (Urho3D::Scene::*)() const) &Urho3D::Scene::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Scene::*)() const) &Urho3D::Scene::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Scene::*)() const) &Urho3D::Scene::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Scene", (void (Urho3D::Scene::*)()) &Urho3D::Scene::~Scene, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Load", (bool (Urho3D::Scene::*)(Urho3D::Deserializer &)) &Urho3D::Scene::Load, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::Scene::*)(Urho3D::Serializer &) const) &Urho3D::Scene::Save, "todo: docstring", py::arg("dest"))
  .def("LoadXML", (bool (Urho3D::Scene::*)(const Urho3D::XMLElement &)) &Urho3D::Scene::LoadXML, "todo: docstring", py::arg("source"))
  .def("LoadJSON", (bool (Urho3D::Scene::*)(const Urho3D::JSONValue &)) &Urho3D::Scene::LoadJSON, "todo: docstring", py::arg("source"))
  .def("MarkNetworkUpdate", (void (Urho3D::Scene::*)()) &Urho3D::Scene::MarkNetworkUpdate, "todo: docstring")
  .def("AddReplicationState", (void (Urho3D::Scene::*)(Urho3D::NodeReplicationState *)) &Urho3D::Scene::AddReplicationState, "todo: docstring", py::arg("state"))
  .def("LoadXML", (bool (Urho3D::Scene::*)(Urho3D::Deserializer &)) &Urho3D::Scene::LoadXML, "todo: docstring", py::arg("source"))
  .def("LoadJSON", (bool (Urho3D::Scene::*)(Urho3D::Deserializer &)) &Urho3D::Scene::LoadJSON, "todo: docstring", py::arg("source"))
  .def("SaveXML", (bool (Urho3D::Scene::*)(Urho3D::Serializer &, const Urho3D::String &) const) &Urho3D::Scene::SaveXML, "todo: docstring", py::arg("dest"), py::arg("indentation")="\t")
  .def("SaveJSON", (bool (Urho3D::Scene::*)(Urho3D::Serializer &, const Urho3D::String &) const) &Urho3D::Scene::SaveJSON, "todo: docstring", py::arg("dest"), py::arg("indentation")="\t")
  .def("LoadAsync", (bool (Urho3D::Scene::*)(Urho3D::File *, Urho3D::LoadMode)) &Urho3D::Scene::LoadAsync, "todo: docstring", py::arg("file"), py::arg("mode")=LOAD_SCENE_AND_RESOURCES)
  .def("LoadAsyncXML", (bool (Urho3D::Scene::*)(Urho3D::File *, Urho3D::LoadMode)) &Urho3D::Scene::LoadAsyncXML, "todo: docstring", py::arg("file"), py::arg("mode")=LOAD_SCENE_AND_RESOURCES)
  .def("LoadAsyncJSON", (bool (Urho3D::Scene::*)(Urho3D::File *, Urho3D::LoadMode)) &Urho3D::Scene::LoadAsyncJSON, "todo: docstring", py::arg("file"), py::arg("mode")=LOAD_SCENE_AND_RESOURCES)
  .def("StopAsyncLoading", (void (Urho3D::Scene::*)()) &Urho3D::Scene::StopAsyncLoading, "todo: docstring")
  .def("Instantiate", (Urho3D::Node * (Urho3D::Scene::*)(Urho3D::Deserializer &, const Urho3D::Vector3 &, const Urho3D::Quaternion &, Urho3D::CreateMode)) &Urho3D::Scene::Instantiate, "todo: docstring", py::arg("source"), py::arg("position"), py::arg("rotation"), py::arg("mode")=REPLICATED)
  .def("InstantiateXML", (Urho3D::Node * (Urho3D::Scene::*)(const Urho3D::XMLElement &, const Urho3D::Vector3 &, const Urho3D::Quaternion &, Urho3D::CreateMode)) &Urho3D::Scene::InstantiateXML, "todo: docstring", py::arg("source"), py::arg("position"), py::arg("rotation"), py::arg("mode")=REPLICATED)
  .def("InstantiateXML", (Urho3D::Node * (Urho3D::Scene::*)(Urho3D::Deserializer &, const Urho3D::Vector3 &, const Urho3D::Quaternion &, Urho3D::CreateMode)) &Urho3D::Scene::InstantiateXML, "todo: docstring", py::arg("source"), py::arg("position"), py::arg("rotation"), py::arg("mode")=REPLICATED)
  .def("InstantiateJSON", (Urho3D::Node * (Urho3D::Scene::*)(const Urho3D::JSONValue &, const Urho3D::Vector3 &, const Urho3D::Quaternion &, Urho3D::CreateMode)) &Urho3D::Scene::InstantiateJSON, "todo: docstring", py::arg("source"), py::arg("position"), py::arg("rotation"), py::arg("mode")=REPLICATED)
  .def("InstantiateJSON", (Urho3D::Node * (Urho3D::Scene::*)(Urho3D::Deserializer &, const Urho3D::Vector3 &, const Urho3D::Quaternion &, Urho3D::CreateMode)) &Urho3D::Scene::InstantiateJSON, "todo: docstring", py::arg("source"), py::arg("position"), py::arg("rotation"), py::arg("mode")=REPLICATED)
  .def("Clear", (void (Urho3D::Scene::*)(bool, bool)) &Urho3D::Scene::Clear, "todo: docstring", py::arg("clearReplicated")=true, py::arg("clearLocal")=true)
  .def("SetUpdateEnabled", (void (Urho3D::Scene::*)(bool)) &Urho3D::Scene::SetUpdateEnabled, "todo: docstring", py::arg("enable"))
  .def("SetTimeScale", (void (Urho3D::Scene::*)(float)) &Urho3D::Scene::SetTimeScale, "todo: docstring", py::arg("scale"))
  .def("SetElapsedTime", (void (Urho3D::Scene::*)(float)) &Urho3D::Scene::SetElapsedTime, "todo: docstring", py::arg("time"))
  .def("SetSmoothingConstant", (void (Urho3D::Scene::*)(float)) &Urho3D::Scene::SetSmoothingConstant, "todo: docstring", py::arg("constant"))
  .def("SetSnapThreshold", (void (Urho3D::Scene::*)(float)) &Urho3D::Scene::SetSnapThreshold, "todo: docstring", py::arg("threshold"))
  .def("SetAsyncLoadingMs", (void (Urho3D::Scene::*)(int)) &Urho3D::Scene::SetAsyncLoadingMs, "todo: docstring", py::arg("ms"))
  .def("AddRequiredPackageFile", (void (Urho3D::Scene::*)(Urho3D::PackageFile *)) &Urho3D::Scene::AddRequiredPackageFile, "todo: docstring", py::arg("package"))
  .def("ClearRequiredPackageFiles", (void (Urho3D::Scene::*)()) &Urho3D::Scene::ClearRequiredPackageFiles, "todo: docstring")
  .def("RegisterVar", (void (Urho3D::Scene::*)(const Urho3D::String &)) &Urho3D::Scene::RegisterVar, "todo: docstring", py::arg("name"))
  .def("UnregisterVar", (void (Urho3D::Scene::*)(const Urho3D::String &)) &Urho3D::Scene::UnregisterVar, "todo: docstring", py::arg("name"))
  .def("UnregisterAllVars", (void (Urho3D::Scene::*)()) &Urho3D::Scene::UnregisterAllVars, "todo: docstring")
  .def("GetNode", (Urho3D::Node * (Urho3D::Scene::*)(unsigned int) const) &Urho3D::Scene::GetNode, "todo: docstring", py::arg("id"))
  .def("GetComponent", (Urho3D::Component * (Urho3D::Scene::*)(unsigned int) const) &Urho3D::Scene::GetComponent, "todo: docstring", py::arg("id"))
  //.def("GetNodesWithTag", (bool (Urho3D::Scene::*)(Urho3D::PODVector<Urho3D::Node *> &, const Urho3D::String &) const) &Urho3D::Scene::GetNodesWithTag, "todo: docstring", py::arg("dest"), py::arg("tag"))
    //['Urho3D::PODVector<Urho3D::Node', 'Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("IsUpdateEnabled", (bool (Urho3D::Scene::*)() const) &Urho3D::Scene::IsUpdateEnabled, "todo: docstring")
  .def("IsAsyncLoading", (bool (Urho3D::Scene::*)() const) &Urho3D::Scene::IsAsyncLoading, "todo: docstring")
  .def("GetAsyncProgress", (float (Urho3D::Scene::*)() const) &Urho3D::Scene::GetAsyncProgress, "todo: docstring")
  .def("GetAsyncLoadMode", (Urho3D::LoadMode (Urho3D::Scene::*)() const) &Urho3D::Scene::GetAsyncLoadMode, "todo: docstring")
  .def("GetFileName", (const Urho3D::String & (Urho3D::Scene::*)() const) &Urho3D::Scene::GetFileName, "todo: docstring")
  .def("GetChecksum", (unsigned int (Urho3D::Scene::*)() const) &Urho3D::Scene::GetChecksum, "todo: docstring")
  .def("GetTimeScale", (float (Urho3D::Scene::*)() const) &Urho3D::Scene::GetTimeScale, "todo: docstring")
  .def("GetElapsedTime", (float (Urho3D::Scene::*)() const) &Urho3D::Scene::GetElapsedTime, "todo: docstring")
  .def("GetSmoothingConstant", (float (Urho3D::Scene::*)() const) &Urho3D::Scene::GetSmoothingConstant, "todo: docstring")
  .def("GetSnapThreshold", (float (Urho3D::Scene::*)() const) &Urho3D::Scene::GetSnapThreshold, "todo: docstring")
  .def("GetAsyncLoadingMs", (int (Urho3D::Scene::*)() const) &Urho3D::Scene::GetAsyncLoadingMs, "todo: docstring")
  //.def("GetRequiredPackageFiles", (const Vector<SharedPtr<Urho3D::PackageFile> > & (Urho3D::Scene::*)() const) &Urho3D::Scene::GetRequiredPackageFiles, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetVarName", (const Urho3D::String & (Urho3D::Scene::*)(Urho3D::StringHash) const) &Urho3D::Scene::GetVarName, "todo: docstring", py::arg("hash"))
  .def("Update", (void (Urho3D::Scene::*)(float)) &Urho3D::Scene::Update, "todo: docstring", py::arg("timeStep"))
  .def("BeginThreadedUpdate", (void (Urho3D::Scene::*)()) &Urho3D::Scene::BeginThreadedUpdate, "todo: docstring")
  .def("EndThreadedUpdate", (void (Urho3D::Scene::*)()) &Urho3D::Scene::EndThreadedUpdate, "todo: docstring")
  .def("DelayedMarkedDirty", (void (Urho3D::Scene::*)(Urho3D::Component *)) &Urho3D::Scene::DelayedMarkedDirty, "todo: docstring", py::arg("component"))
  .def("IsThreadedUpdate", (bool (Urho3D::Scene::*)() const) &Urho3D::Scene::IsThreadedUpdate, "todo: docstring")
  .def("GetFreeNodeID", (unsigned int (Urho3D::Scene::*)(Urho3D::CreateMode)) &Urho3D::Scene::GetFreeNodeID, "todo: docstring", py::arg("mode"))
  .def("GetFreeComponentID", (unsigned int (Urho3D::Scene::*)(Urho3D::CreateMode)) &Urho3D::Scene::GetFreeComponentID, "todo: docstring", py::arg("mode"))
  .def("NodeTagAdded", (void (Urho3D::Scene::*)(Urho3D::Node *, const Urho3D::String &)) &Urho3D::Scene::NodeTagAdded, "todo: docstring", py::arg("node"), py::arg("tag"))
  .def("NodeTagRemoved", (void (Urho3D::Scene::*)(Urho3D::Node *, const Urho3D::String &)) &Urho3D::Scene::NodeTagRemoved, "todo: docstring", py::arg("node"), py::arg("tag"))
  .def("NodeAdded", (void (Urho3D::Scene::*)(Urho3D::Node *)) &Urho3D::Scene::NodeAdded, "todo: docstring", py::arg("node"))
  .def("NodeRemoved", (void (Urho3D::Scene::*)(Urho3D::Node *)) &Urho3D::Scene::NodeRemoved, "todo: docstring", py::arg("node"))
  .def("ComponentAdded", (void (Urho3D::Scene::*)(Urho3D::Component *)) &Urho3D::Scene::ComponentAdded, "todo: docstring", py::arg("component"))
  .def("ComponentRemoved", (void (Urho3D::Scene::*)(Urho3D::Component *)) &Urho3D::Scene::ComponentRemoved, "todo: docstring", py::arg("component"))
  .def("SetVarNamesAttr", (void (Urho3D::Scene::*)(const Urho3D::String &)) &Urho3D::Scene::SetVarNamesAttr, "todo: docstring", py::arg("value"))
  .def("GetVarNamesAttr", (Urho3D::String (Urho3D::Scene::*)() const) &Urho3D::Scene::GetVarNamesAttr, "todo: docstring")
  .def("PrepareNetworkUpdate", (void (Urho3D::Scene::*)()) &Urho3D::Scene::PrepareNetworkUpdate, "todo: docstring")
  .def("CleanupConnection", (void (Urho3D::Scene::*)(Urho3D::Connection *)) &Urho3D::Scene::CleanupConnection, "todo: docstring", py::arg("connection"))
  .def("MarkNetworkUpdate", (void (Urho3D::Scene::*)(Urho3D::Node *)) &Urho3D::Scene::MarkNetworkUpdate, "todo: docstring", py::arg("node"))
  .def("MarkNetworkUpdate", (void (Urho3D::Scene::*)(Urho3D::Component *)) &Urho3D::Scene::MarkNetworkUpdate, "todo: docstring", py::arg("component"))
  .def("MarkReplicationDirty", (void (Urho3D::Scene::*)(Urho3D::Node *)) &Urho3D::Scene::MarkReplicationDirty, "todo: docstring", py::arg("node"))
// Class Variables:
;
}

void Implement_Urho3D_ScriptInstance(py::class_<Urho3D::ScriptInstance, Urho3D::SharedPtr<Urho3D::ScriptInstance>, Urho3D::Component, Urho3D::ScriptEventListener>& pyclass_Var_Urho3D_ScriptInstance)
{
    // Class ScriptInstance Implementation
pyclass_Var_Urho3D_ScriptInstance
  .def("GetType", (Urho3D::StringHash (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ScriptInstance", (void (Urho3D::ScriptInstance::*)()) &Urho3D::ScriptInstance::~ScriptInstance, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("OnSetAttribute", (void (Urho3D::ScriptInstance::*)(const Urho3D::AttributeInfo &, const Urho3D::Variant &)) &Urho3D::ScriptInstance::OnSetAttribute, "todo: docstring", py::arg("attr"), py::arg("src"))
    //['Urho3D::AttributeInfo', 'Urho3D::Variant']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("OnGetAttribute", (void (Urho3D::ScriptInstance::*)(const Urho3D::AttributeInfo &, Urho3D::Variant &) const) &Urho3D::ScriptInstance::OnGetAttribute, "todo: docstring", py::arg("attr"), py::arg("dest"))
    //['Urho3D::AttributeInfo', 'Urho3D::Variant']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("GetAttributes", (const Vector<Urho3D::AttributeInfo> * (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetAttributes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("ApplyAttributes", (void (Urho3D::ScriptInstance::*)()) &Urho3D::ScriptInstance::ApplyAttributes, "todo: docstring")
  .def("OnSetEnabled", (void (Urho3D::ScriptInstance::*)()) &Urho3D::ScriptInstance::OnSetEnabled, "todo: docstring")
  .def("AddEventHandler", (void (Urho3D::ScriptInstance::*)(Urho3D::StringHash, const Urho3D::String &)) &Urho3D::ScriptInstance::AddEventHandler, "todo: docstring", py::arg("eventType"), py::arg("handlerName"))
  .def("AddEventHandler", (void (Urho3D::ScriptInstance::*)(Urho3D::Object *, Urho3D::StringHash, const Urho3D::String &)) &Urho3D::ScriptInstance::AddEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventType"), py::arg("handlerName"))
  .def("RemoveEventHandler", (void (Urho3D::ScriptInstance::*)(Urho3D::StringHash)) &Urho3D::ScriptInstance::RemoveEventHandler, "todo: docstring", py::arg("eventType"))
  .def("RemoveEventHandler", (void (Urho3D::ScriptInstance::*)(Urho3D::Object *, Urho3D::StringHash)) &Urho3D::ScriptInstance::RemoveEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventType"))
  .def("RemoveEventHandlers", (void (Urho3D::ScriptInstance::*)(Urho3D::Object *)) &Urho3D::ScriptInstance::RemoveEventHandlers, "todo: docstring", py::arg("sender"))
  .def("RemoveEventHandlers", (void (Urho3D::ScriptInstance::*)()) &Urho3D::ScriptInstance::RemoveEventHandlers, "todo: docstring")
  //.def("RemoveEventHandlersExcept", (void (Urho3D::ScriptInstance::*)(const Urho3D::PODVector<Urho3D::StringHash> &)) &Urho3D::ScriptInstance::RemoveEventHandlersExcept, "todo: docstring", py::arg("exceptions"))
    //['Urho3D::PODVector<Urho3D::StringHash>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("HasEventHandler", (bool (Urho3D::ScriptInstance::*)(Urho3D::StringHash) const) &Urho3D::ScriptInstance::HasEventHandler, "todo: docstring", py::arg("eventType"))
  .def("HasEventHandler", (bool (Urho3D::ScriptInstance::*)(Urho3D::Object *, Urho3D::StringHash) const) &Urho3D::ScriptInstance::HasEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventType"))
  .def("CreateObject", (bool (Urho3D::ScriptInstance::*)(Urho3D::ScriptFile *, const Urho3D::String &)) &Urho3D::ScriptInstance::CreateObject, "todo: docstring", py::arg("scriptFile"), py::arg("className"))
  .def("SetScriptFile", (void (Urho3D::ScriptInstance::*)(Urho3D::ScriptFile *)) &Urho3D::ScriptInstance::SetScriptFile, "todo: docstring", py::arg("scriptFile"))
  .def("SetClassName", (void (Urho3D::ScriptInstance::*)(const Urho3D::String &)) &Urho3D::ScriptInstance::SetClassName, "todo: docstring", py::arg("className"))
  .def("Execute", (bool (Urho3D::ScriptInstance::*)(const Urho3D::String &, const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::ScriptInstance::Execute, "todo: docstring", py::arg("declaration"), py::arg("parameters")=Variant::emptyVariantVector)
  //.def("Execute", (bool (Urho3D::ScriptInstance::*)(asIScriptFunction *, const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::ScriptInstance::Execute, "todo: docstring", py::arg("method"), py::arg("parameters")=Variant::emptyVariantVector)
    //['asIScriptFunction', 'Urho3D::Vector<Urho3D::Variant>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("DelayedExecute", (void (Urho3D::ScriptInstance::*)(float, bool, const Urho3D::String &, const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::ScriptInstance::DelayedExecute, "todo: docstring", py::arg("delay"), py::arg("repeat"), py::arg("declaration"), py::arg("parameters")=Variant::emptyVariantVector)
  .def("ClearDelayedExecute", (void (Urho3D::ScriptInstance::*)(const Urho3D::String &)) &Urho3D::ScriptInstance::ClearDelayedExecute, "todo: docstring", py::arg("declaration")=String::EMPTY)
  .def("GetScriptFile", (Urho3D::ScriptFile * (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetScriptFile, "todo: docstring")
  //.def("GetScriptObject", (asIScriptObject * (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetScriptObject, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetClassName", (const Urho3D::String & (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetClassName, "todo: docstring")
  .def("IsA", (bool (Urho3D::ScriptInstance::*)(const Urho3D::String &) const) &Urho3D::ScriptInstance::IsA, "todo: docstring", py::arg("className"))
  .def("HasMethod", (bool (Urho3D::ScriptInstance::*)(const Urho3D::String &) const) &Urho3D::ScriptInstance::HasMethod, "todo: docstring", py::arg("declaration"))
  .def("SetScriptFileAttr", (void (Urho3D::ScriptInstance::*)(const Urho3D::ResourceRef &)) &Urho3D::ScriptInstance::SetScriptFileAttr, "todo: docstring", py::arg("value"))
  .def("SetDelayedCallsAttr", (void (Urho3D::ScriptInstance::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::ScriptInstance::SetDelayedCallsAttr, "todo: docstring", py::arg("value"))
  .def("SetScriptDataAttr", (void (Urho3D::ScriptInstance::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::ScriptInstance::SetScriptDataAttr, "todo: docstring", py::arg("data"))
  .def("SetScriptNetworkDataAttr", (void (Urho3D::ScriptInstance::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::ScriptInstance::SetScriptNetworkDataAttr, "todo: docstring", py::arg("data"))
  .def("GetScriptFileAttr", (Urho3D::ResourceRef (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetScriptFileAttr, "todo: docstring")
  //.def("GetDelayedCallsAttr", (PODVector<unsigned char> (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetDelayedCallsAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetScriptDataAttr", (PODVector<unsigned char> (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetScriptDataAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetScriptNetworkDataAttr", (PODVector<unsigned char> (Urho3D::ScriptInstance::*)() const) &Urho3D::ScriptInstance::GetScriptNetworkDataAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_DebugRenderer(py::class_<Urho3D::DebugRenderer, Urho3D::SharedPtr<Urho3D::DebugRenderer>, Urho3D::Component>& pyclass_Var_Urho3D_DebugRenderer)
{
    // Class DebugRenderer Implementation
pyclass_Var_Urho3D_DebugRenderer
  .def("GetType", (Urho3D::StringHash (Urho3D::DebugRenderer::*)() const) &Urho3D::DebugRenderer::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::DebugRenderer::*)() const) &Urho3D::DebugRenderer::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::DebugRenderer::*)() const) &Urho3D::DebugRenderer::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~DebugRenderer", (void (Urho3D::DebugRenderer::*)()) &Urho3D::DebugRenderer::~DebugRenderer, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetLineAntiAlias", (void (Urho3D::DebugRenderer::*)(bool)) &Urho3D::DebugRenderer::SetLineAntiAlias, "todo: docstring", py::arg("enable"))
  .def("SetView", (void (Urho3D::DebugRenderer::*)(Urho3D::Camera *)) &Urho3D::DebugRenderer::SetView, "todo: docstring", py::arg("camera"))
  .def("AddLine", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddLine, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddLine", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, unsigned int, bool)) &Urho3D::DebugRenderer::AddLine, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddTriangle", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddTriangle, "todo: docstring", py::arg("v1"), py::arg("v2"), py::arg("v3"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddTriangle", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, unsigned int, bool)) &Urho3D::DebugRenderer::AddTriangle, "todo: docstring", py::arg("v1"), py::arg("v2"), py::arg("v3"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddPolygon", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddPolygon, "todo: docstring", py::arg("v1"), py::arg("v2"), py::arg("v3"), py::arg("v4"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddPolygon", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, unsigned int, bool)) &Urho3D::DebugRenderer::AddPolygon, "todo: docstring", py::arg("v1"), py::arg("v2"), py::arg("v3"), py::arg("v4"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddNode", (void (Urho3D::DebugRenderer::*)(Urho3D::Node *, float, bool)) &Urho3D::DebugRenderer::AddNode, "todo: docstring", py::arg("node"), py::arg("scale")=1.0f, py::arg("depthTest")=true)
  .def("AddBoundingBox", (void (Urho3D::DebugRenderer::*)(const Urho3D::BoundingBox &, const Urho3D::Color &, bool, bool)) &Urho3D::DebugRenderer::AddBoundingBox, "todo: docstring", py::arg("box"), py::arg("color"), py::arg("depthTest")=true, py::arg("solid")=false)
  .def("AddBoundingBox", (void (Urho3D::DebugRenderer::*)(const Urho3D::BoundingBox &, const Urho3D::Matrix3x4 &, const Urho3D::Color &, bool, bool)) &Urho3D::DebugRenderer::AddBoundingBox, "todo: docstring", py::arg("box"), py::arg("transform"), py::arg("color"), py::arg("depthTest")=true, py::arg("solid")=false)
  .def("AddFrustum", (void (Urho3D::DebugRenderer::*)(const Urho3D::Frustum &, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddFrustum, "todo: docstring", py::arg("frustum"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddPolyhedron", (void (Urho3D::DebugRenderer::*)(const Urho3D::Polyhedron &, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddPolyhedron, "todo: docstring", py::arg("poly"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddSphere", (void (Urho3D::DebugRenderer::*)(const Urho3D::Sphere &, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddSphere, "todo: docstring", py::arg("sphere"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddSphereSector", (void (Urho3D::DebugRenderer::*)(const Urho3D::Sphere &, const Urho3D::Quaternion &, float, bool, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddSphereSector, "todo: docstring", py::arg("sphere"), py::arg("rotation"), py::arg("angle"), py::arg("drawLines"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddCylinder", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, float, float, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddCylinder, "todo: docstring", py::arg("position"), py::arg("radius"), py::arg("height"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddSkeleton", (void (Urho3D::DebugRenderer::*)(const Urho3D::Skeleton &, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddSkeleton, "todo: docstring", py::arg("skeleton"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddTriangleMesh", (void (Urho3D::DebugRenderer::*)(const void *, unsigned int, const void *, unsigned int, unsigned int, unsigned int, const Urho3D::Matrix3x4 &, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddTriangleMesh, "todo: docstring", py::arg("vertexData"), py::arg("vertexSize"), py::arg("indexData"), py::arg("indexSize"), py::arg("indexStart"), py::arg("indexCount"), py::arg("transform"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddTriangleMesh", (void (Urho3D::DebugRenderer::*)(const void *, unsigned int, unsigned int, const void *, unsigned int, unsigned int, unsigned int, const Urho3D::Matrix3x4 &, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddTriangleMesh, "todo: docstring", py::arg("vertexData"), py::arg("vertexSize"), py::arg("vertexStart"), py::arg("indexData"), py::arg("indexSize"), py::arg("indexStart"), py::arg("indexCount"), py::arg("transform"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddCircle", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, float, const Urho3D::Color &, int, bool)) &Urho3D::DebugRenderer::AddCircle, "todo: docstring", py::arg("center"), py::arg("normal"), py::arg("radius"), py::arg("color"), py::arg("steps")=64, py::arg("depthTest")=true)
  .def("AddCross", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, float, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddCross, "todo: docstring", py::arg("center"), py::arg("size"), py::arg("color"), py::arg("depthTest")=true)
  .def("AddQuad", (void (Urho3D::DebugRenderer::*)(const Urho3D::Vector3 &, float, float, const Urho3D::Color &, bool)) &Urho3D::DebugRenderer::AddQuad, "todo: docstring", py::arg("center"), py::arg("width"), py::arg("height"), py::arg("color"), py::arg("depthTest")=true)
  .def("Render", (void (Urho3D::DebugRenderer::*)()) &Urho3D::DebugRenderer::Render, "todo: docstring")
  .def("GetLineAntiAlias", (bool (Urho3D::DebugRenderer::*)() const) &Urho3D::DebugRenderer::GetLineAntiAlias, "todo: docstring")
  .def("GetView", (const Urho3D::Matrix3x4 & (Urho3D::DebugRenderer::*)() const) &Urho3D::DebugRenderer::GetView, "todo: docstring")
  .def("GetProjection", (const Urho3D::Matrix4 & (Urho3D::DebugRenderer::*)() const) &Urho3D::DebugRenderer::GetProjection, "todo: docstring")
  .def("GetFrustum", (const Urho3D::Frustum & (Urho3D::DebugRenderer::*)() const) &Urho3D::DebugRenderer::GetFrustum, "todo: docstring")
  .def("IsInside", (bool (Urho3D::DebugRenderer::*)(const Urho3D::BoundingBox &) const) &Urho3D::DebugRenderer::IsInside, "todo: docstring", py::arg("box"))
  .def("HasContent", (bool (Urho3D::DebugRenderer::*)() const) &Urho3D::DebugRenderer::HasContent, "todo: docstring")
// Class Variables:
;
}
