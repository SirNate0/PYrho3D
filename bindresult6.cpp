

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
void Implement_Urho3D_Camera(py::class_<Urho3D::Camera, Urho3D::SharedPtr<Urho3D::Camera>, Urho3D::Component>& pyclass_Var_Urho3D_Camera)
{
    // Class Camera Implementation
pyclass_Var_Urho3D_Camera
  .def("GetType", (Urho3D::StringHash (Urho3D::Camera::*)() const) &Urho3D::Camera::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Camera::*)() const) &Urho3D::Camera::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Camera::*)() const) &Urho3D::Camera::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Camera", (void (Urho3D::Camera::*)()) &Urho3D::Camera::~Camera, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::Camera::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::Camera::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetNearClip", (void (Urho3D::Camera::*)(float)) &Urho3D::Camera::SetNearClip, "todo: docstring", py::arg("nearClip"))
  .def("SetFarClip", (void (Urho3D::Camera::*)(float)) &Urho3D::Camera::SetFarClip, "todo: docstring", py::arg("farClip"))
  .def("SetFov", (void (Urho3D::Camera::*)(float)) &Urho3D::Camera::SetFov, "todo: docstring", py::arg("fov"))
  .def("SetOrthoSize", (void (Urho3D::Camera::*)(float)) &Urho3D::Camera::SetOrthoSize, "todo: docstring", py::arg("orthoSize"))
  .def("SetOrthoSize", (void (Urho3D::Camera::*)(const Urho3D::Vector2 &)) &Urho3D::Camera::SetOrthoSize, "todo: docstring", py::arg("orthoSize"))
  .def("SetAspectRatio", (void (Urho3D::Camera::*)(float)) &Urho3D::Camera::SetAspectRatio, "todo: docstring", py::arg("aspectRatio"))
  .def("SetFillMode", (void (Urho3D::Camera::*)(Urho3D::FillMode)) &Urho3D::Camera::SetFillMode, "todo: docstring", py::arg("mode"))
  .def("SetZoom", (void (Urho3D::Camera::*)(float)) &Urho3D::Camera::SetZoom, "todo: docstring", py::arg("zoom"))
  .def("SetLodBias", (void (Urho3D::Camera::*)(float)) &Urho3D::Camera::SetLodBias, "todo: docstring", py::arg("bias"))
  .def("SetViewMask", (void (Urho3D::Camera::*)(unsigned int)) &Urho3D::Camera::SetViewMask, "todo: docstring", py::arg("mask"))
  //.def("SetViewOverrideFlags", (void (Urho3D::Camera::*)(Urho3D::FlagSet<Urho3D::ViewOverride, void>)) &Urho3D::Camera::SetViewOverrideFlags, "todo: docstring", py::arg("flags"))
    //['Urho3D::FlagSet<Urho3D::ViewOverride, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetOrthographic", (void (Urho3D::Camera::*)(bool)) &Urho3D::Camera::SetOrthographic, "todo: docstring", py::arg("enable"))
  .def("SetAutoAspectRatio", (void (Urho3D::Camera::*)(bool)) &Urho3D::Camera::SetAutoAspectRatio, "todo: docstring", py::arg("enable"))
  .def("SetProjectionOffset", (void (Urho3D::Camera::*)(const Urho3D::Vector2 &)) &Urho3D::Camera::SetProjectionOffset, "todo: docstring", py::arg("offset"))
  .def("SetUseReflection", (void (Urho3D::Camera::*)(bool)) &Urho3D::Camera::SetUseReflection, "todo: docstring", py::arg("enable"))
  .def("SetReflectionPlane", (void (Urho3D::Camera::*)(const Urho3D::Plane &)) &Urho3D::Camera::SetReflectionPlane, "todo: docstring", py::arg("plane"))
  .def("SetUseClipping", (void (Urho3D::Camera::*)(bool)) &Urho3D::Camera::SetUseClipping, "todo: docstring", py::arg("enable"))
  .def("SetClipPlane", (void (Urho3D::Camera::*)(const Urho3D::Plane &)) &Urho3D::Camera::SetClipPlane, "todo: docstring", py::arg("plane"))
  .def("SetFlipVertical", (void (Urho3D::Camera::*)(bool)) &Urho3D::Camera::SetFlipVertical, "todo: docstring", py::arg("enable"))
  .def("SetProjection", (void (Urho3D::Camera::*)(const Urho3D::Matrix4 &)) &Urho3D::Camera::SetProjection, "todo: docstring", py::arg("projection"))
  .def("GetFarClip", (float (Urho3D::Camera::*)() const) &Urho3D::Camera::GetFarClip, "todo: docstring")
  .def("GetNearClip", (float (Urho3D::Camera::*)() const) &Urho3D::Camera::GetNearClip, "todo: docstring")
  .def("GetFov", (float (Urho3D::Camera::*)() const) &Urho3D::Camera::GetFov, "todo: docstring")
  .def("GetOrthoSize", (float (Urho3D::Camera::*)() const) &Urho3D::Camera::GetOrthoSize, "todo: docstring")
  .def("GetAspectRatio", (float (Urho3D::Camera::*)() const) &Urho3D::Camera::GetAspectRatio, "todo: docstring")
  .def("GetZoom", (float (Urho3D::Camera::*)() const) &Urho3D::Camera::GetZoom, "todo: docstring")
  .def("GetLodBias", (float (Urho3D::Camera::*)() const) &Urho3D::Camera::GetLodBias, "todo: docstring")
  .def("GetViewMask", (unsigned int (Urho3D::Camera::*)() const) &Urho3D::Camera::GetViewMask, "todo: docstring")
  //.def("GetViewOverrideFlags", (Urho3D::ViewOverrideFlags (Urho3D::Camera::*)() const) &Urho3D::Camera::GetViewOverrideFlags, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetFillMode", (Urho3D::FillMode (Urho3D::Camera::*)() const) &Urho3D::Camera::GetFillMode, "todo: docstring")
  .def("IsOrthographic", (bool (Urho3D::Camera::*)() const) &Urho3D::Camera::IsOrthographic, "todo: docstring")
  .def("GetAutoAspectRatio", (bool (Urho3D::Camera::*)() const) &Urho3D::Camera::GetAutoAspectRatio, "todo: docstring")
  .def("GetFrustum", (const Urho3D::Frustum & (Urho3D::Camera::*)() const) &Urho3D::Camera::GetFrustum, "todo: docstring")
  .def("GetProjection", (Urho3D::Matrix4 (Urho3D::Camera::*)() const) &Urho3D::Camera::GetProjection, "todo: docstring")
  .def("GetGPUProjection", (Urho3D::Matrix4 (Urho3D::Camera::*)() const) &Urho3D::Camera::GetGPUProjection, "todo: docstring")
  .def("GetView", (const Urho3D::Matrix3x4 & (Urho3D::Camera::*)() const) &Urho3D::Camera::GetView, "todo: docstring")
  .def("GetFrustumSize", (void (Urho3D::Camera::*)(Urho3D::Vector3 &, Urho3D::Vector3 &) const) &Urho3D::Camera::GetFrustumSize, "todo: docstring", py::arg("near"), py::arg("far"))
  .def("GetHalfViewSize", (float (Urho3D::Camera::*)() const) &Urho3D::Camera::GetHalfViewSize, "todo: docstring")
  .def("GetSplitFrustum", (Urho3D::Frustum (Urho3D::Camera::*)(float, float) const) &Urho3D::Camera::GetSplitFrustum, "todo: docstring", py::arg("nearClip"), py::arg("farClip"))
  .def("GetViewSpaceFrustum", (Urho3D::Frustum (Urho3D::Camera::*)() const) &Urho3D::Camera::GetViewSpaceFrustum, "todo: docstring")
  .def("GetViewSpaceSplitFrustum", (Urho3D::Frustum (Urho3D::Camera::*)(float, float) const) &Urho3D::Camera::GetViewSpaceSplitFrustum, "todo: docstring", py::arg("nearClip"), py::arg("farClip"))
  .def("GetScreenRay", (Urho3D::Ray (Urho3D::Camera::*)(float, float) const) &Urho3D::Camera::GetScreenRay, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("WorldToScreenPoint", (Urho3D::Vector2 (Urho3D::Camera::*)(const Urho3D::Vector3 &) const) &Urho3D::Camera::WorldToScreenPoint, "todo: docstring", py::arg("worldPos"))
  .def("ScreenToWorldPoint", (Urho3D::Vector3 (Urho3D::Camera::*)(const Urho3D::Vector3 &) const) &Urho3D::Camera::ScreenToWorldPoint, "todo: docstring", py::arg("screenPos"))
  .def("GetProjectionOffset", (const Urho3D::Vector2 & (Urho3D::Camera::*)() const) &Urho3D::Camera::GetProjectionOffset, "todo: docstring")
  .def("GetUseReflection", (bool (Urho3D::Camera::*)() const) &Urho3D::Camera::GetUseReflection, "todo: docstring")
  .def("GetReflectionPlane", (const Urho3D::Plane & (Urho3D::Camera::*)() const) &Urho3D::Camera::GetReflectionPlane, "todo: docstring")
  .def("GetUseClipping", (bool (Urho3D::Camera::*)() const) &Urho3D::Camera::GetUseClipping, "todo: docstring")
  .def("GetClipPlane", (const Urho3D::Plane & (Urho3D::Camera::*)() const) &Urho3D::Camera::GetClipPlane, "todo: docstring")
  .def("GetFlipVertical", (bool (Urho3D::Camera::*)() const) &Urho3D::Camera::GetFlipVertical, "todo: docstring")
  .def("GetReverseCulling", (bool (Urho3D::Camera::*)() const) &Urho3D::Camera::GetReverseCulling, "todo: docstring")
  .def("GetDistance", (float (Urho3D::Camera::*)(const Urho3D::Vector3 &) const) &Urho3D::Camera::GetDistance, "todo: docstring", py::arg("worldPos"))
  .def("GetDistanceSquared", (float (Urho3D::Camera::*)(const Urho3D::Vector3 &) const) &Urho3D::Camera::GetDistanceSquared, "todo: docstring", py::arg("worldPos"))
  .def("GetLodDistance", (float (Urho3D::Camera::*)(float, float, float) const) &Urho3D::Camera::GetLodDistance, "todo: docstring", py::arg("distance"), py::arg("scale"), py::arg("bias"))
  .def("GetFaceCameraRotation", (Urho3D::Quaternion (Urho3D::Camera::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &, Urho3D::FaceCameraMode, float)) &Urho3D::Camera::GetFaceCameraRotation, "todo: docstring", py::arg("position"), py::arg("rotation"), py::arg("mode"), py::arg("minAngle")=0.0f)
  .def("GetEffectiveWorldTransform", (Urho3D::Matrix3x4 (Urho3D::Camera::*)() const) &Urho3D::Camera::GetEffectiveWorldTransform, "todo: docstring")
  .def("IsProjectionValid", (bool (Urho3D::Camera::*)() const) &Urho3D::Camera::IsProjectionValid, "todo: docstring")
  .def("SetAspectRatioInternal", (void (Urho3D::Camera::*)(float)) &Urho3D::Camera::SetAspectRatioInternal, "todo: docstring", py::arg("aspectRatio"))
  .def("SetOrthoSizeAttr", (void (Urho3D::Camera::*)(float)) &Urho3D::Camera::SetOrthoSizeAttr, "todo: docstring", py::arg("orthoSize"))
  .def("SetReflectionPlaneAttr", (void (Urho3D::Camera::*)(const Urho3D::Vector4 &)) &Urho3D::Camera::SetReflectionPlaneAttr, "todo: docstring", py::arg("value"))
  .def("GetReflectionPlaneAttr", (Urho3D::Vector4 (Urho3D::Camera::*)() const) &Urho3D::Camera::GetReflectionPlaneAttr, "todo: docstring")
  .def("SetClipPlaneAttr", (void (Urho3D::Camera::*)(const Urho3D::Vector4 &)) &Urho3D::Camera::SetClipPlaneAttr, "todo: docstring", py::arg("value"))
  .def("GetClipPlaneAttr", (Urho3D::Vector4 (Urho3D::Camera::*)() const) &Urho3D::Camera::GetClipPlaneAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Light(py::class_<Urho3D::Light, Urho3D::SharedPtr<Urho3D::Light>, Urho3D::Drawable>& pyclass_Var_Urho3D_Light)
{
    // Class Light Implementation
pyclass_Var_Urho3D_Light
  .def("GetType", (Urho3D::StringHash (Urho3D::Light::*)() const) &Urho3D::Light::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Light::*)() const) &Urho3D::Light::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Light::*)() const) &Urho3D::Light::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Light", (void (Urho3D::Light::*)()) &Urho3D::Light::~Light, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("ProcessRayQuery", (void (Urho3D::Light::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::Light::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::Light::*)(const Urho3D::FrameInfo &)) &Urho3D::Light::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::Light::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::Light::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetLightType", (void (Urho3D::Light::*)(Urho3D::LightType)) &Urho3D::Light::SetLightType, "todo: docstring", py::arg("type"))
  .def("SetPerVertex", (void (Urho3D::Light::*)(bool)) &Urho3D::Light::SetPerVertex, "todo: docstring", py::arg("enable"))
  .def("SetColor", (void (Urho3D::Light::*)(const Urho3D::Color &)) &Urho3D::Light::SetColor, "todo: docstring", py::arg("color"))
  .def("SetTemperature", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetTemperature, "todo: docstring", py::arg("temperature"))
  .def("SetRadius", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetRadius, "todo: docstring", py::arg("radius"))
  .def("SetLength", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetLength, "todo: docstring", py::arg("length"))
  .def("SetUsePhysicalValues", (void (Urho3D::Light::*)(bool)) &Urho3D::Light::SetUsePhysicalValues, "todo: docstring", py::arg("enable"))
  .def("SetSpecularIntensity", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetSpecularIntensity, "todo: docstring", py::arg("intensity"))
  .def("SetBrightness", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetBrightness, "todo: docstring", py::arg("brightness"))
  .def("SetRange", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetRange, "todo: docstring", py::arg("range"))
  .def("SetFov", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetFov, "todo: docstring", py::arg("fov"))
  .def("SetAspectRatio", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetAspectRatio, "todo: docstring", py::arg("aspectRatio"))
  .def("SetFadeDistance", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetFadeDistance, "todo: docstring", py::arg("distance"))
  .def("SetShadowFadeDistance", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetShadowFadeDistance, "todo: docstring", py::arg("distance"))
  .def("SetShadowBias", (void (Urho3D::Light::*)(const Urho3D::BiasParameters &)) &Urho3D::Light::SetShadowBias, "todo: docstring", py::arg("parameters"))
  .def("SetShadowCascade", (void (Urho3D::Light::*)(const Urho3D::CascadeParameters &)) &Urho3D::Light::SetShadowCascade, "todo: docstring", py::arg("parameters"))
  .def("SetShadowFocus", (void (Urho3D::Light::*)(const Urho3D::FocusParameters &)) &Urho3D::Light::SetShadowFocus, "todo: docstring", py::arg("parameters"))
  .def("SetShadowIntensity", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetShadowIntensity, "todo: docstring", py::arg("intensity"))
  .def("SetShadowResolution", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetShadowResolution, "todo: docstring", py::arg("resolution"))
  .def("SetShadowNearFarRatio", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetShadowNearFarRatio, "todo: docstring", py::arg("nearFarRatio"))
  .def("SetShadowMaxExtrusion", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetShadowMaxExtrusion, "todo: docstring", py::arg("extrusion"))
  .def("SetRampTexture", (void (Urho3D::Light::*)(Urho3D::Texture *)) &Urho3D::Light::SetRampTexture, "todo: docstring", py::arg("texture"))
  .def("SetShapeTexture", (void (Urho3D::Light::*)(Urho3D::Texture *)) &Urho3D::Light::SetShapeTexture, "todo: docstring", py::arg("texture"))
  .def("GetLightType", (Urho3D::LightType (Urho3D::Light::*)() const) &Urho3D::Light::GetLightType, "todo: docstring")
  .def("GetPerVertex", (bool (Urho3D::Light::*)() const) &Urho3D::Light::GetPerVertex, "todo: docstring")
  .def("GetColor", (const Urho3D::Color & (Urho3D::Light::*)() const) &Urho3D::Light::GetColor, "todo: docstring")
  .def("GetTemperature", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetTemperature, "todo: docstring")
  .def("GetRadius", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetRadius, "todo: docstring")
  .def("GetLength", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetLength, "todo: docstring")
  .def("GetUsePhysicalValues", (bool (Urho3D::Light::*)() const) &Urho3D::Light::GetUsePhysicalValues, "todo: docstring")
  .def("GetColorFromTemperature", (Urho3D::Color (Urho3D::Light::*)() const) &Urho3D::Light::GetColorFromTemperature, "todo: docstring")
  .def("GetSpecularIntensity", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetSpecularIntensity, "todo: docstring")
  .def("GetBrightness", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetBrightness, "todo: docstring")
  .def("GetEffectiveColor", (Urho3D::Color (Urho3D::Light::*)() const) &Urho3D::Light::GetEffectiveColor, "todo: docstring")
  .def("GetEffectiveSpecularIntensity", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetEffectiveSpecularIntensity, "todo: docstring")
  .def("GetRange", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetRange, "todo: docstring")
  .def("GetFov", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetFov, "todo: docstring")
  .def("GetAspectRatio", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetAspectRatio, "todo: docstring")
  .def("GetFadeDistance", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetFadeDistance, "todo: docstring")
  .def("GetShadowFadeDistance", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetShadowFadeDistance, "todo: docstring")
  .def("GetShadowBias", (const Urho3D::BiasParameters & (Urho3D::Light::*)() const) &Urho3D::Light::GetShadowBias, "todo: docstring")
  .def("GetShadowCascade", (const Urho3D::CascadeParameters & (Urho3D::Light::*)() const) &Urho3D::Light::GetShadowCascade, "todo: docstring")
  .def("GetShadowFocus", (const Urho3D::FocusParameters & (Urho3D::Light::*)() const) &Urho3D::Light::GetShadowFocus, "todo: docstring")
  .def("GetShadowIntensity", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetShadowIntensity, "todo: docstring")
  .def("GetShadowResolution", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetShadowResolution, "todo: docstring")
  .def("GetShadowNearFarRatio", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetShadowNearFarRatio, "todo: docstring")
  .def("GetShadowMaxExtrusion", (float (Urho3D::Light::*)() const) &Urho3D::Light::GetShadowMaxExtrusion, "todo: docstring")
  .def("GetRampTexture", (Urho3D::Texture * (Urho3D::Light::*)() const) &Urho3D::Light::GetRampTexture, "todo: docstring")
  .def("GetShapeTexture", (Urho3D::Texture * (Urho3D::Light::*)() const) &Urho3D::Light::GetShapeTexture, "todo: docstring")
  .def("GetFrustum", (Urho3D::Frustum (Urho3D::Light::*)() const) &Urho3D::Light::GetFrustum, "todo: docstring")
  .def("GetViewSpaceFrustum", (Urho3D::Frustum (Urho3D::Light::*)(const Urho3D::Matrix3x4 &) const) &Urho3D::Light::GetViewSpaceFrustum, "todo: docstring", py::arg("view"))
  .def("GetNumShadowSplits", (int (Urho3D::Light::*)() const) &Urho3D::Light::GetNumShadowSplits, "todo: docstring")
  .def("IsNegative", (bool (Urho3D::Light::*)() const) &Urho3D::Light::IsNegative, "todo: docstring")
  .def("SetIntensitySortValue", (void (Urho3D::Light::*)(float)) &Urho3D::Light::SetIntensitySortValue, "todo: docstring", py::arg("distance"))
  .def("SetIntensitySortValue", (void (Urho3D::Light::*)(const Urho3D::BoundingBox &)) &Urho3D::Light::SetIntensitySortValue, "todo: docstring", py::arg("box"))
  //.def("SetLightQueue", (void (Urho3D::Light::*)(Urho3D::LightBatchQueue *)) &Urho3D::Light::SetLightQueue, "todo: docstring", py::arg("queue"))
    //['Urho3D::LightBatchQueue']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetVolumeTransform", (const Urho3D::Matrix3x4 & (Urho3D::Light::*)(Urho3D::Camera *)) &Urho3D::Light::GetVolumeTransform, "todo: docstring", py::arg("camera"))
  //.def("GetLightQueue", (Urho3D::LightBatchQueue * (Urho3D::Light::*)() const) &Urho3D::Light::GetLightQueue, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetIntensityDivisor", (float (Urho3D::Light::*)(float) const) &Urho3D::Light::GetIntensityDivisor, "todo: docstring", py::arg("attenuation")=1.0f)
  .def("SetRampTextureAttr", (void (Urho3D::Light::*)(const Urho3D::ResourceRef &)) &Urho3D::Light::SetRampTextureAttr, "todo: docstring", py::arg("value"))
  .def("SetShapeTextureAttr", (void (Urho3D::Light::*)(const Urho3D::ResourceRef &)) &Urho3D::Light::SetShapeTextureAttr, "todo: docstring", py::arg("value"))
  .def("GetRampTextureAttr", (Urho3D::ResourceRef (Urho3D::Light::*)() const) &Urho3D::Light::GetRampTextureAttr, "todo: docstring")
  .def("GetShapeTextureAttr", (Urho3D::ResourceRef (Urho3D::Light::*)() const) &Urho3D::Light::GetShapeTextureAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Zone(py::class_<Urho3D::Zone, Urho3D::SharedPtr<Urho3D::Zone>, Urho3D::Drawable>& pyclass_Var_Urho3D_Zone)
{
    // Class Zone Implementation
pyclass_Var_Urho3D_Zone
  .def("GetType", (Urho3D::StringHash (Urho3D::Zone::*)() const) &Urho3D::Zone::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Zone::*)() const) &Urho3D::Zone::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Zone::*)() const) &Urho3D::Zone::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Zone", (void (Urho3D::Zone::*)()) &Urho3D::Zone::~Zone, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::Zone::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::Zone::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetBoundingBox", (void (Urho3D::Zone::*)(const Urho3D::BoundingBox &)) &Urho3D::Zone::SetBoundingBox, "todo: docstring", py::arg("box"))
  .def("SetAmbientColor", (void (Urho3D::Zone::*)(const Urho3D::Color &)) &Urho3D::Zone::SetAmbientColor, "todo: docstring", py::arg("color"))
  .def("SetFogColor", (void (Urho3D::Zone::*)(const Urho3D::Color &)) &Urho3D::Zone::SetFogColor, "todo: docstring", py::arg("color"))
  .def("SetFogStart", (void (Urho3D::Zone::*)(float)) &Urho3D::Zone::SetFogStart, "todo: docstring", py::arg("start"))
  .def("SetFogEnd", (void (Urho3D::Zone::*)(float)) &Urho3D::Zone::SetFogEnd, "todo: docstring", py::arg("end"))
  .def("SetFogHeight", (void (Urho3D::Zone::*)(float)) &Urho3D::Zone::SetFogHeight, "todo: docstring", py::arg("height"))
  .def("SetFogHeightScale", (void (Urho3D::Zone::*)(float)) &Urho3D::Zone::SetFogHeightScale, "todo: docstring", py::arg("scale"))
  .def("SetPriority", (void (Urho3D::Zone::*)(int)) &Urho3D::Zone::SetPriority, "todo: docstring", py::arg("priority"))
  .def("SetHeightFog", (void (Urho3D::Zone::*)(bool)) &Urho3D::Zone::SetHeightFog, "todo: docstring", py::arg("enable"))
  .def("SetOverride", (void (Urho3D::Zone::*)(bool)) &Urho3D::Zone::SetOverride, "todo: docstring", py::arg("enable"))
  .def("SetAmbientGradient", (void (Urho3D::Zone::*)(bool)) &Urho3D::Zone::SetAmbientGradient, "todo: docstring", py::arg("enable"))
  .def("SetZoneTexture", (void (Urho3D::Zone::*)(Urho3D::Texture *)) &Urho3D::Zone::SetZoneTexture, "todo: docstring", py::arg("texture"))
  .def("GetInverseWorldTransform", (const Urho3D::Matrix3x4 & (Urho3D::Zone::*)() const) &Urho3D::Zone::GetInverseWorldTransform, "todo: docstring")
  .def("GetAmbientColor", (const Urho3D::Color & (Urho3D::Zone::*)() const) &Urho3D::Zone::GetAmbientColor, "todo: docstring")
  .def("GetAmbientStartColor", (const Urho3D::Color & (Urho3D::Zone::*)()) &Urho3D::Zone::GetAmbientStartColor, "todo: docstring")
  .def("GetAmbientEndColor", (const Urho3D::Color & (Urho3D::Zone::*)()) &Urho3D::Zone::GetAmbientEndColor, "todo: docstring")
  .def("GetFogColor", (const Urho3D::Color & (Urho3D::Zone::*)() const) &Urho3D::Zone::GetFogColor, "todo: docstring")
  .def("GetFogStart", (float (Urho3D::Zone::*)() const) &Urho3D::Zone::GetFogStart, "todo: docstring")
  .def("GetFogEnd", (float (Urho3D::Zone::*)() const) &Urho3D::Zone::GetFogEnd, "todo: docstring")
  .def("GetFogHeight", (float (Urho3D::Zone::*)() const) &Urho3D::Zone::GetFogHeight, "todo: docstring")
  .def("GetFogHeightScale", (float (Urho3D::Zone::*)() const) &Urho3D::Zone::GetFogHeightScale, "todo: docstring")
  .def("GetPriority", (int (Urho3D::Zone::*)() const) &Urho3D::Zone::GetPriority, "todo: docstring")
  .def("GetHeightFog", (bool (Urho3D::Zone::*)() const) &Urho3D::Zone::GetHeightFog, "todo: docstring")
  .def("GetOverride", (bool (Urho3D::Zone::*)() const) &Urho3D::Zone::GetOverride, "todo: docstring")
  .def("GetAmbientGradient", (bool (Urho3D::Zone::*)() const) &Urho3D::Zone::GetAmbientGradient, "todo: docstring")
  .def("GetZoneTexture", (Urho3D::Texture * (Urho3D::Zone::*)() const) &Urho3D::Zone::GetZoneTexture, "todo: docstring")
  .def("IsInside", (bool (Urho3D::Zone::*)(const Urho3D::Vector3 &) const) &Urho3D::Zone::IsInside, "todo: docstring", py::arg("point"))
  .def("SetZoneTextureAttr", (void (Urho3D::Zone::*)(const Urho3D::ResourceRef &)) &Urho3D::Zone::SetZoneTextureAttr, "todo: docstring", py::arg("value"))
  .def("GetZoneTextureAttr", (Urho3D::ResourceRef (Urho3D::Zone::*)() const) &Urho3D::Zone::GetZoneTextureAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Resource(py::class_<Urho3D::Resource, Urho3D::SharedPtr<Urho3D::Resource>, Urho3D::Object>& pyclass_Var_Urho3D_Resource)
{
    // Class Resource Implementation
pyclass_Var_Urho3D_Resource
  .def("GetType", (Urho3D::StringHash (Urho3D::Resource::*)() const) &Urho3D::Resource::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Resource::*)() const) &Urho3D::Resource::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Resource::*)() const) &Urho3D::Resource::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def("Load", (bool (Urho3D::Resource::*)(Urho3D::Deserializer &)) &Urho3D::Resource::Load, "todo: docstring", py::arg("source"))
  .def("BeginLoad", (bool (Urho3D::Resource::*)(Urho3D::Deserializer &)) &Urho3D::Resource::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::Resource::*)()) &Urho3D::Resource::EndLoad, "todo: docstring")
  .def("Save", (bool (Urho3D::Resource::*)(Urho3D::Serializer &) const) &Urho3D::Resource::Save, "todo: docstring", py::arg("dest"))
  .def("LoadFile", (bool (Urho3D::Resource::*)(const Urho3D::String &)) &Urho3D::Resource::LoadFile, "todo: docstring", py::arg("fileName"))
  .def("SaveFile", (bool (Urho3D::Resource::*)(const Urho3D::String &) const) &Urho3D::Resource::SaveFile, "todo: docstring", py::arg("fileName"))
  .def("SetName", (void (Urho3D::Resource::*)(const Urho3D::String &)) &Urho3D::Resource::SetName, "todo: docstring", py::arg("name"))
  .def("SetMemoryUse", (void (Urho3D::Resource::*)(unsigned int)) &Urho3D::Resource::SetMemoryUse, "todo: docstring", py::arg("size"))
  .def("ResetUseTimer", (void (Urho3D::Resource::*)()) &Urho3D::Resource::ResetUseTimer, "todo: docstring")
  .def("SetAsyncLoadState", (void (Urho3D::Resource::*)(Urho3D::AsyncLoadState)) &Urho3D::Resource::SetAsyncLoadState, "todo: docstring", py::arg("newState"))
  .def("GetName", (const Urho3D::String & (Urho3D::Resource::*)() const) &Urho3D::Resource::GetName, "todo: docstring")
  .def("GetNameHash", (Urho3D::StringHash (Urho3D::Resource::*)() const) &Urho3D::Resource::GetNameHash, "todo: docstring")
  .def("GetMemoryUse", (unsigned int (Urho3D::Resource::*)() const) &Urho3D::Resource::GetMemoryUse, "todo: docstring")
  .def("GetUseTimer", (unsigned int (Urho3D::Resource::*)()) &Urho3D::Resource::GetUseTimer, "todo: docstring")
  .def("GetAsyncLoadState", (Urho3D::AsyncLoadState (Urho3D::Resource::*)() const) &Urho3D::Resource::GetAsyncLoadState, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_XMLFile(py::class_<Urho3D::XMLFile, Urho3D::SharedPtr<Urho3D::XMLFile>, Urho3D::Resource>& pyclass_Var_Urho3D_XMLFile)
{
    // Class XMLFile Implementation
pyclass_Var_Urho3D_XMLFile
  .def("GetType", (Urho3D::StringHash (Urho3D::XMLFile::*)() const) &Urho3D::XMLFile::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::XMLFile::*)() const) &Urho3D::XMLFile::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::XMLFile::*)() const) &Urho3D::XMLFile::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~XMLFile", (void (Urho3D::XMLFile::*)()) &Urho3D::XMLFile::~XMLFile, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::XMLFile::*)(Urho3D::Deserializer &)) &Urho3D::XMLFile::BeginLoad, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::XMLFile::*)(Urho3D::Serializer &) const) &Urho3D::XMLFile::Save, "todo: docstring", py::arg("dest"))
  .def("Save", (bool (Urho3D::XMLFile::*)(Urho3D::Serializer &, const Urho3D::String &) const) &Urho3D::XMLFile::Save, "todo: docstring", py::arg("dest"), py::arg("indentation"))
  .def("FromString", (bool (Urho3D::XMLFile::*)(const Urho3D::String &)) &Urho3D::XMLFile::FromString, "todo: docstring", py::arg("source"))
  .def("CreateRoot", (Urho3D::XMLElement (Urho3D::XMLFile::*)(const Urho3D::String &)) &Urho3D::XMLFile::CreateRoot, "todo: docstring", py::arg("name"))
  .def("GetOrCreateRoot", (Urho3D::XMLElement (Urho3D::XMLFile::*)(const Urho3D::String &)) &Urho3D::XMLFile::GetOrCreateRoot, "todo: docstring", py::arg("name"))
  .def("GetRoot", (Urho3D::XMLElement (Urho3D::XMLFile::*)(const Urho3D::String &)) &Urho3D::XMLFile::GetRoot, "todo: docstring", py::arg("name")=String::EMPTY)
  //.def("GetDocument", (pugi::xml_document * (Urho3D::XMLFile::*)() const) &Urho3D::XMLFile::GetDocument, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("ToString", (Urho3D::String (Urho3D::XMLFile::*)(const Urho3D::String &) const) &Urho3D::XMLFile::ToString, "todo: docstring", py::arg("indentation")="\t")
  .def("Patch", (void (Urho3D::XMLFile::*)(Urho3D::XMLFile *)) &Urho3D::XMLFile::Patch, "todo: docstring", py::arg("patchFile"))
  .def("Patch", (void (Urho3D::XMLFile::*)(const Urho3D::XMLElement &)) &Urho3D::XMLFile::Patch, "todo: docstring", py::arg("patchElement"))
// Class Variables:
;
}

void Implement_Urho3D_XPathQuery(py::class_<Urho3D::XPathQuery, Urho3D::ExternalPtr<Urho3D::XPathQuery>>& pyclass_Var_Urho3D_XPathQuery)
{
    // Class XPathQuery Implementation
pyclass_Var_Urho3D_XPathQuery
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::String &, const Urho3D::String &>(), "todo: constructor docstring")
  //.def("~XPathQuery", (void (Urho3D::XPathQuery::*)()) &Urho3D::XPathQuery::~XPathQuery, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Bind", (void (Urho3D::XPathQuery::*)()) &Urho3D::XPathQuery::Bind, "todo: docstring")
  .def("SetVariable", (bool (Urho3D::XPathQuery::*)(const Urho3D::String &, bool)) &Urho3D::XPathQuery::SetVariable, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetVariable", (bool (Urho3D::XPathQuery::*)(const Urho3D::String &, float)) &Urho3D::XPathQuery::SetVariable, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetVariable", (bool (Urho3D::XPathQuery::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::XPathQuery::SetVariable, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetVariable", (bool (Urho3D::XPathQuery::*)(const char *, const char *)) &Urho3D::XPathQuery::SetVariable, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetVariable", (bool (Urho3D::XPathQuery::*)(const Urho3D::String &, const Urho3D::XPathResultSet &)) &Urho3D::XPathQuery::SetVariable, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetQuery", (bool (Urho3D::XPathQuery::*)(const Urho3D::String &, const Urho3D::String &, bool)) &Urho3D::XPathQuery::SetQuery, "todo: docstring", py::arg("queryString"), py::arg("variableString")=String::EMPTY, py::arg("bind")=true)
  .def("Clear", (void (Urho3D::XPathQuery::*)()) &Urho3D::XPathQuery::Clear, "todo: docstring")
  .def("EvaluateToBool", (bool (Urho3D::XPathQuery::*)(const Urho3D::XMLElement &) const) &Urho3D::XPathQuery::EvaluateToBool, "todo: docstring", py::arg("element"))
  .def("EvaluateToFloat", (float (Urho3D::XPathQuery::*)(const Urho3D::XMLElement &) const) &Urho3D::XPathQuery::EvaluateToFloat, "todo: docstring", py::arg("element"))
  .def("EvaluateToString", (Urho3D::String (Urho3D::XPathQuery::*)(const Urho3D::XMLElement &) const) &Urho3D::XPathQuery::EvaluateToString, "todo: docstring", py::arg("element"))
  .def("Evaluate", (Urho3D::XPathResultSet (Urho3D::XPathQuery::*)(const Urho3D::XMLElement &) const) &Urho3D::XPathQuery::Evaluate, "todo: docstring", py::arg("element"))
  .def("GetQuery", (Urho3D::String (Urho3D::XPathQuery::*)() const) &Urho3D::XPathQuery::GetQuery, "todo: docstring")
  //.def("GetXPathQuery", (pugi::xpath_query * (Urho3D::XPathQuery::*)() const) &Urho3D::XPathQuery::GetXPathQuery, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetXPathVariableSet", (pugi::xpath_variable_set * (Urho3D::XPathQuery::*)() const) &Urho3D::XPathQuery::GetXPathVariableSet, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_JSONFile(py::class_<Urho3D::JSONFile, Urho3D::SharedPtr<Urho3D::JSONFile>, Urho3D::Resource>& pyclass_Var_Urho3D_JSONFile)
{
    // Class JSONFile Implementation
pyclass_Var_Urho3D_JSONFile
  .def("GetType", (Urho3D::StringHash (Urho3D::JSONFile::*)() const) &Urho3D::JSONFile::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::JSONFile::*)() const) &Urho3D::JSONFile::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::JSONFile::*)() const) &Urho3D::JSONFile::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~JSONFile", (void (Urho3D::JSONFile::*)()) &Urho3D::JSONFile::~JSONFile, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::JSONFile::*)(Urho3D::Deserializer &)) &Urho3D::JSONFile::BeginLoad, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::JSONFile::*)(Urho3D::Serializer &) const) &Urho3D::JSONFile::Save, "todo: docstring", py::arg("dest"))
  .def("Save", (bool (Urho3D::JSONFile::*)(Urho3D::Serializer &, const Urho3D::String &) const) &Urho3D::JSONFile::Save, "todo: docstring", py::arg("dest"), py::arg("indendation"))
  .def("FromString", (bool (Urho3D::JSONFile::*)(const Urho3D::String &)) &Urho3D::JSONFile::FromString, "todo: docstring", py::arg("source"))
  .def("ToString", (Urho3D::String (Urho3D::JSONFile::*)(const Urho3D::String &) const) &Urho3D::JSONFile::ToString, "todo: docstring", py::arg("indendation")="\t")
  .def("GetRoot", (Urho3D::JSONValue & (Urho3D::JSONFile::*)()) &Urho3D::JSONFile::GetRoot, "todo: docstring")
  .def("GetRoot", (const Urho3D::JSONValue & (Urho3D::JSONFile::*)() const) &Urho3D::JSONFile::GetRoot, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_EventProfiler(py::class_<Urho3D::EventProfiler, Urho3D::SharedPtr<Urho3D::EventProfiler>, Urho3D::Profiler>& pyclass_Var_Urho3D_EventProfiler)
{
    // Class EventProfiler Implementation
pyclass_Var_Urho3D_EventProfiler
  .def("GetType", (Urho3D::StringHash (Urho3D::EventProfiler::*)() const) &Urho3D::EventProfiler::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::EventProfiler::*)() const) &Urho3D::EventProfiler::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::EventProfiler::*)() const) &Urho3D::EventProfiler::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def("BeginBlock", (void (Urho3D::EventProfiler::*)(Urho3D::StringHash)) &Urho3D::EventProfiler::BeginBlock, "todo: docstring", py::arg("eventID"))
// Class Variables:
;
}

void Implement_Urho3D_Font(py::class_<Urho3D::Font, Urho3D::SharedPtr<Urho3D::Font>, Urho3D::Resource>& pyclass_Var_Urho3D_Font)
{
    // Class Font Implementation
pyclass_Var_Urho3D_Font
  .def("GetType", (Urho3D::StringHash (Urho3D::Font::*)() const) &Urho3D::Font::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Font::*)() const) &Urho3D::Font::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Font::*)() const) &Urho3D::Font::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Font", (void (Urho3D::Font::*)()) &Urho3D::Font::~Font, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Font::*)(Urho3D::Deserializer &)) &Urho3D::Font::BeginLoad, "todo: docstring", py::arg("source"))
  .def("SaveXML", (bool (Urho3D::Font::*)(Urho3D::Serializer &, int, bool, const Urho3D::String &)) &Urho3D::Font::SaveXML, "todo: docstring", py::arg("dest"), py::arg("pointSize"), py::arg("usedGlyphs")=false, py::arg("indentation")="\t")
  .def("SetAbsoluteGlyphOffset", (void (Urho3D::Font::*)(const Urho3D::IntVector2 &)) &Urho3D::Font::SetAbsoluteGlyphOffset, "todo: docstring", py::arg("offset"))
  .def("SetScaledGlyphOffset", (void (Urho3D::Font::*)(const Urho3D::Vector2 &)) &Urho3D::Font::SetScaledGlyphOffset, "todo: docstring", py::arg("offset"))
  .def("GetFace", (Urho3D::FontFace * (Urho3D::Font::*)(float)) &Urho3D::Font::GetFace, "todo: docstring", py::arg("pointSize"))
  .def("GetFontType", (Urho3D::FontType (Urho3D::Font::*)() const) &Urho3D::Font::GetFontType, "todo: docstring")
  .def("IsSDFFont", (bool (Urho3D::Font::*)() const) &Urho3D::Font::IsSDFFont, "todo: docstring")
  .def("GetAbsoluteGlyphOffset", (const Urho3D::IntVector2 & (Urho3D::Font::*)() const) &Urho3D::Font::GetAbsoluteGlyphOffset, "todo: docstring")
  .def("GetScaledGlyphOffset", (const Urho3D::Vector2 & (Urho3D::Font::*)() const) &Urho3D::Font::GetScaledGlyphOffset, "todo: docstring")
  .def("GetTotalGlyphOffset", (Urho3D::IntVector2 (Urho3D::Font::*)(float) const) &Urho3D::Font::GetTotalGlyphOffset, "todo: docstring", py::arg("pointSize"))
  .def("ReleaseFaces", (void (Urho3D::Font::*)()) &Urho3D::Font::ReleaseFaces, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_AnimationController(py::class_<Urho3D::AnimationController, Urho3D::SharedPtr<Urho3D::AnimationController>, Urho3D::Component>& pyclass_Var_Urho3D_AnimationController)
{
    // Class AnimationController Implementation
pyclass_Var_Urho3D_AnimationController
  .def("GetType", (Urho3D::StringHash (Urho3D::AnimationController::*)() const) &Urho3D::AnimationController::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::AnimationController::*)() const) &Urho3D::AnimationController::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::AnimationController::*)() const) &Urho3D::AnimationController::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~AnimationController", (void (Urho3D::AnimationController::*)()) &Urho3D::AnimationController::~AnimationController, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::AnimationController::*)()) &Urho3D::AnimationController::OnSetEnabled, "todo: docstring")
  .def("Update", (void (Urho3D::AnimationController::*)(float)) &Urho3D::AnimationController::Update, "todo: docstring", py::arg("timeStep"))
  .def("Play", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, unsigned char, bool, float)) &Urho3D::AnimationController::Play, "todo: docstring", py::arg("name"), py::arg("layer"), py::arg("looped"), py::arg("fadeInTime")=0.0f)
  .def("PlayExclusive", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, unsigned char, bool, float)) &Urho3D::AnimationController::PlayExclusive, "todo: docstring", py::arg("name"), py::arg("layer"), py::arg("looped"), py::arg("fadeTime")=0.0f)
  .def("Stop", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, float)) &Urho3D::AnimationController::Stop, "todo: docstring", py::arg("name"), py::arg("fadeOutTime")=0.0f)
  .def("StopLayer", (void (Urho3D::AnimationController::*)(unsigned char, float)) &Urho3D::AnimationController::StopLayer, "todo: docstring", py::arg("layer"), py::arg("fadeOutTime")=0.0f)
  .def("StopAll", (void (Urho3D::AnimationController::*)(float)) &Urho3D::AnimationController::StopAll, "todo: docstring", py::arg("fadeOutTime")=0.0f)
  .def("Fade", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, float, float)) &Urho3D::AnimationController::Fade, "todo: docstring", py::arg("name"), py::arg("targetWeight"), py::arg("fadeTime"))
  .def("FadeOthers", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, float, float)) &Urho3D::AnimationController::FadeOthers, "todo: docstring", py::arg("name"), py::arg("targetWeight"), py::arg("fadeTime"))
  .def("SetLayer", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, unsigned char)) &Urho3D::AnimationController::SetLayer, "todo: docstring", py::arg("name"), py::arg("layer"))
  .def("SetStartBone", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::AnimationController::SetStartBone, "todo: docstring", py::arg("name"), py::arg("startBoneName"))
  .def("SetTime", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, float)) &Urho3D::AnimationController::SetTime, "todo: docstring", py::arg("name"), py::arg("time"))
  .def("SetWeight", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, float)) &Urho3D::AnimationController::SetWeight, "todo: docstring", py::arg("name"), py::arg("weight"))
  .def("SetLooped", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, bool)) &Urho3D::AnimationController::SetLooped, "todo: docstring", py::arg("name"), py::arg("enable"))
  .def("SetSpeed", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, float)) &Urho3D::AnimationController::SetSpeed, "todo: docstring", py::arg("name"), py::arg("speed"))
  .def("SetAutoFade", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, float)) &Urho3D::AnimationController::SetAutoFade, "todo: docstring", py::arg("name"), py::arg("fadeOutTime"))
  .def("SetRemoveOnCompletion", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, bool)) &Urho3D::AnimationController::SetRemoveOnCompletion, "todo: docstring", py::arg("name"), py::arg("removeOnCompletion"))
  .def("SetBlendMode", (bool (Urho3D::AnimationController::*)(const Urho3D::String &, Urho3D::AnimationBlendMode)) &Urho3D::AnimationController::SetBlendMode, "todo: docstring", py::arg("name"), py::arg("mode"))
  .def("IsPlaying", (bool (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::IsPlaying, "todo: docstring", py::arg("name"))
  .def("IsPlaying", (bool (Urho3D::AnimationController::*)(unsigned char) const) &Urho3D::AnimationController::IsPlaying, "todo: docstring", py::arg("layer"))
  .def("IsFadingIn", (bool (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::IsFadingIn, "todo: docstring", py::arg("name"))
  .def("IsFadingOut", (bool (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::IsFadingOut, "todo: docstring", py::arg("name"))
  .def("IsAtEnd", (bool (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::IsAtEnd, "todo: docstring", py::arg("name"))
  .def("GetLayer", (unsigned char (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetLayer, "todo: docstring", py::arg("name"))
  //.def("GetStartBone", (Urho3D::Bone * (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetStartBone, "todo: docstring", py::arg("name"))
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetStartBoneName", (const Urho3D::String & (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetStartBoneName, "todo: docstring", py::arg("name"))
  .def("GetTime", (float (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetTime, "todo: docstring", py::arg("name"))
  .def("GetWeight", (float (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetWeight, "todo: docstring", py::arg("name"))
  .def("IsLooped", (bool (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::IsLooped, "todo: docstring", py::arg("name"))
  .def("GetBlendMode", (Urho3D::AnimationBlendMode (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetBlendMode, "todo: docstring", py::arg("name"))
  .def("GetLength", (float (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetLength, "todo: docstring", py::arg("name"))
  .def("GetSpeed", (float (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetSpeed, "todo: docstring", py::arg("name"))
  .def("GetFadeTarget", (float (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetFadeTarget, "todo: docstring", py::arg("name"))
  .def("GetFadeTime", (float (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetFadeTime, "todo: docstring", py::arg("name"))
  .def("GetAutoFade", (float (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetAutoFade, "todo: docstring", py::arg("name"))
  .def("GetRemoveOnCompletion", (bool (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetRemoveOnCompletion, "todo: docstring", py::arg("name"))
  .def("GetAnimationState", (Urho3D::AnimationState * (Urho3D::AnimationController::*)(const Urho3D::String &) const) &Urho3D::AnimationController::GetAnimationState, "todo: docstring", py::arg("name"))
  .def("GetAnimationState", (Urho3D::AnimationState * (Urho3D::AnimationController::*)(Urho3D::StringHash) const) &Urho3D::AnimationController::GetAnimationState, "todo: docstring", py::arg("nameHash"))
  //.def("GetAnimations", (const Vector<Urho3D::AnimationControl> & (Urho3D::AnimationController::*)() const) &Urho3D::AnimationController::GetAnimations, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("SetAnimationsAttr", (void (Urho3D::AnimationController::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::AnimationController::SetAnimationsAttr, "todo: docstring", py::arg("value"))
  .def("SetNetAnimationsAttr", (void (Urho3D::AnimationController::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::AnimationController::SetNetAnimationsAttr, "todo: docstring", py::arg("value"))
  .def("SetNodeAnimationStatesAttr", (void (Urho3D::AnimationController::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::AnimationController::SetNodeAnimationStatesAttr, "todo: docstring", py::arg("value"))
  .def("GetAnimationsAttr", (Urho3D::VariantVector (Urho3D::AnimationController::*)() const) &Urho3D::AnimationController::GetAnimationsAttr, "todo: docstring")
  //.def("GetNetAnimationsAttr", (const PODVector<unsigned char> & (Urho3D::AnimationController::*)() const) &Urho3D::AnimationController::GetNetAnimationsAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNodeAnimationStatesAttr", (Urho3D::VariantVector (Urho3D::AnimationController::*)() const) &Urho3D::AnimationController::GetNodeAnimationStatesAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Shader(py::class_<Urho3D::Shader, Urho3D::SharedPtr<Urho3D::Shader>, Urho3D::Resource>& pyclass_Var_Urho3D_Shader)
{
    // Class Shader Implementation
pyclass_Var_Urho3D_Shader
  .def("GetType", (Urho3D::StringHash (Urho3D::Shader::*)() const) &Urho3D::Shader::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Shader::*)() const) &Urho3D::Shader::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Shader::*)() const) &Urho3D::Shader::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Shader", (void (Urho3D::Shader::*)()) &Urho3D::Shader::~Shader, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Shader::*)(Urho3D::Deserializer &)) &Urho3D::Shader::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::Shader::*)()) &Urho3D::Shader::EndLoad, "todo: docstring")
  .def("GetVariation", (Urho3D::ShaderVariation * (Urho3D::Shader::*)(Urho3D::ShaderType, const Urho3D::String &)) &Urho3D::Shader::GetVariation, "todo: docstring", py::arg("type"), py::arg("defines"))
  .def("GetVariation", (Urho3D::ShaderVariation * (Urho3D::Shader::*)(Urho3D::ShaderType, const char *)) &Urho3D::Shader::GetVariation, "todo: docstring", py::arg("type"), py::arg("defines"))
  .def("GetSourceCode", (const Urho3D::String & (Urho3D::Shader::*)(Urho3D::ShaderType) const) &Urho3D::Shader::GetSourceCode, "todo: docstring", py::arg("type"))
  .def("GetTimeStamp", (unsigned int (Urho3D::Shader::*)() const) &Urho3D::Shader::GetTimeStamp, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ParticleEffect(py::class_<Urho3D::ParticleEffect, Urho3D::SharedPtr<Urho3D::ParticleEffect>, Urho3D::Resource>& pyclass_Var_Urho3D_ParticleEffect)
{
    // Class ParticleEffect Implementation
pyclass_Var_Urho3D_ParticleEffect
  .def("GetType", (Urho3D::StringHash (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ParticleEffect", (void (Urho3D::ParticleEffect::*)()) &Urho3D::ParticleEffect::~ParticleEffect, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::ParticleEffect::*)(Urho3D::Deserializer &)) &Urho3D::ParticleEffect::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::ParticleEffect::*)()) &Urho3D::ParticleEffect::EndLoad, "todo: docstring")
  .def("Save", (bool (Urho3D::ParticleEffect::*)(Urho3D::Serializer &) const) &Urho3D::ParticleEffect::Save, "todo: docstring", py::arg("dest"))
  .def("Save", (bool (Urho3D::ParticleEffect::*)(Urho3D::XMLElement &) const) &Urho3D::ParticleEffect::Save, "todo: docstring", py::arg("dest"))
  .def("Load", (bool (Urho3D::ParticleEffect::*)(const Urho3D::XMLElement &)) &Urho3D::ParticleEffect::Load, "todo: docstring", py::arg("source"))
  .def("SetMaterial", (void (Urho3D::ParticleEffect::*)(Urho3D::Material *)) &Urho3D::ParticleEffect::SetMaterial, "todo: docstring", py::arg("material"))
  .def("SetNumParticles", (void (Urho3D::ParticleEffect::*)(unsigned int)) &Urho3D::ParticleEffect::SetNumParticles, "todo: docstring", py::arg("num"))
  .def("SetUpdateInvisible", (void (Urho3D::ParticleEffect::*)(bool)) &Urho3D::ParticleEffect::SetUpdateInvisible, "todo: docstring", py::arg("enable"))
  .def("SetRelative", (void (Urho3D::ParticleEffect::*)(bool)) &Urho3D::ParticleEffect::SetRelative, "todo: docstring", py::arg("enable"))
  .def("SetScaled", (void (Urho3D::ParticleEffect::*)(bool)) &Urho3D::ParticleEffect::SetScaled, "todo: docstring", py::arg("enable"))
  .def("SetSorted", (void (Urho3D::ParticleEffect::*)(bool)) &Urho3D::ParticleEffect::SetSorted, "todo: docstring", py::arg("enable"))
  .def("SetFixedScreenSize", (void (Urho3D::ParticleEffect::*)(bool)) &Urho3D::ParticleEffect::SetFixedScreenSize, "todo: docstring", py::arg("enable"))
  .def("SetAnimationLodBias", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetAnimationLodBias, "todo: docstring", py::arg("lodBias"))
  .def("SetEmitterType", (void (Urho3D::ParticleEffect::*)(Urho3D::EmitterType)) &Urho3D::ParticleEffect::SetEmitterType, "todo: docstring", py::arg("type"))
  .def("SetEmitterSize", (void (Urho3D::ParticleEffect::*)(const Urho3D::Vector3 &)) &Urho3D::ParticleEffect::SetEmitterSize, "todo: docstring", py::arg("size"))
  .def("SetMinDirection", (void (Urho3D::ParticleEffect::*)(const Urho3D::Vector3 &)) &Urho3D::ParticleEffect::SetMinDirection, "todo: docstring", py::arg("direction"))
  .def("SetMaxDirection", (void (Urho3D::ParticleEffect::*)(const Urho3D::Vector3 &)) &Urho3D::ParticleEffect::SetMaxDirection, "todo: docstring", py::arg("direction"))
  .def("SetConstantForce", (void (Urho3D::ParticleEffect::*)(const Urho3D::Vector3 &)) &Urho3D::ParticleEffect::SetConstantForce, "todo: docstring", py::arg("force"))
  .def("SetDampingForce", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetDampingForce, "todo: docstring", py::arg("force"))
  .def("SetActiveTime", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetActiveTime, "todo: docstring", py::arg("time"))
  .def("SetInactiveTime", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetInactiveTime, "todo: docstring", py::arg("time"))
  .def("SetMinEmissionRate", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMinEmissionRate, "todo: docstring", py::arg("rate"))
  .def("SetMaxEmissionRate", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMaxEmissionRate, "todo: docstring", py::arg("rate"))
  .def("SetMinParticleSize", (void (Urho3D::ParticleEffect::*)(const Urho3D::Vector2 &)) &Urho3D::ParticleEffect::SetMinParticleSize, "todo: docstring", py::arg("size"))
  .def("SetMaxParticleSize", (void (Urho3D::ParticleEffect::*)(const Urho3D::Vector2 &)) &Urho3D::ParticleEffect::SetMaxParticleSize, "todo: docstring", py::arg("size"))
  .def("SetMinTimeToLive", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMinTimeToLive, "todo: docstring", py::arg("time"))
  .def("SetMaxTimeToLive", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMaxTimeToLive, "todo: docstring", py::arg("time"))
  .def("SetMinVelocity", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMinVelocity, "todo: docstring", py::arg("velocity"))
  .def("SetMaxVelocity", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMaxVelocity, "todo: docstring", py::arg("velocity"))
  .def("SetMinRotation", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMinRotation, "todo: docstring", py::arg("rotation"))
  .def("SetMaxRotation", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMaxRotation, "todo: docstring", py::arg("rotation"))
  .def("SetMinRotationSpeed", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMinRotationSpeed, "todo: docstring", py::arg("speed"))
  .def("SetMaxRotationSpeed", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetMaxRotationSpeed, "todo: docstring", py::arg("speed"))
  .def("SetSizeAdd", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetSizeAdd, "todo: docstring", py::arg("sizeAdd"))
  .def("SetSizeMul", (void (Urho3D::ParticleEffect::*)(float)) &Urho3D::ParticleEffect::SetSizeMul, "todo: docstring", py::arg("sizeMul"))
  .def("SetFaceCameraMode", (void (Urho3D::ParticleEffect::*)(Urho3D::FaceCameraMode)) &Urho3D::ParticleEffect::SetFaceCameraMode, "todo: docstring", py::arg("mode"))
  .def("AddColorTime", (void (Urho3D::ParticleEffect::*)(const Urho3D::Color &, float)) &Urho3D::ParticleEffect::AddColorTime, "todo: docstring", py::arg("color"), py::arg("time"))
  //.def("AddColorFrame", (void (Urho3D::ParticleEffect::*)(const Urho3D::ColorFrame &)) &Urho3D::ParticleEffect::AddColorFrame, "todo: docstring", py::arg("colorFrame"))
    //['Urho3D::ColorFrame']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("RemoveColorFrame", (void (Urho3D::ParticleEffect::*)(unsigned int)) &Urho3D::ParticleEffect::RemoveColorFrame, "todo: docstring", py::arg("index"))
  //.def("SetColorFrames", (void (Urho3D::ParticleEffect::*)(const Urho3D::Vector<Urho3D::ColorFrame> &)) &Urho3D::ParticleEffect::SetColorFrames, "todo: docstring", py::arg("colorFrames"))
    //['Urho3D::Vector<Urho3D::ColorFrame>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("SetColorFrame", (void (Urho3D::ParticleEffect::*)(unsigned int, const Urho3D::ColorFrame &)) &Urho3D::ParticleEffect::SetColorFrame, "todo: docstring", py::arg("index"), py::arg("colorFrame"))
    //['unsigned int', 'Urho3D::ColorFrame']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetNumColorFrames", (void (Urho3D::ParticleEffect::*)(unsigned int)) &Urho3D::ParticleEffect::SetNumColorFrames, "todo: docstring", py::arg("number"))
  .def("SortColorFrames", (void (Urho3D::ParticleEffect::*)()) &Urho3D::ParticleEffect::SortColorFrames, "todo: docstring")
  .def("AddTextureTime", (void (Urho3D::ParticleEffect::*)(const Urho3D::Rect &, float)) &Urho3D::ParticleEffect::AddTextureTime, "todo: docstring", py::arg("uv"), py::arg("time"))
  //.def("AddTextureFrame", (void (Urho3D::ParticleEffect::*)(const Urho3D::TextureFrame &)) &Urho3D::ParticleEffect::AddTextureFrame, "todo: docstring", py::arg("textureFrame"))
    //['Urho3D::TextureFrame']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("RemoveTextureFrame", (void (Urho3D::ParticleEffect::*)(unsigned int)) &Urho3D::ParticleEffect::RemoveTextureFrame, "todo: docstring", py::arg("index"))
  //.def("SetTextureFrames", (void (Urho3D::ParticleEffect::*)(const Urho3D::Vector<Urho3D::TextureFrame> &)) &Urho3D::ParticleEffect::SetTextureFrames, "todo: docstring", py::arg("textureFrames"))
    //['Urho3D::Vector<Urho3D::TextureFrame>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("SetTextureFrame", (void (Urho3D::ParticleEffect::*)(unsigned int, const Urho3D::TextureFrame &)) &Urho3D::ParticleEffect::SetTextureFrame, "todo: docstring", py::arg("index"), py::arg("textureFrame"))
    //['unsigned int', 'Urho3D::TextureFrame']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetNumTextureFrames", (void (Urho3D::ParticleEffect::*)(unsigned int)) &Urho3D::ParticleEffect::SetNumTextureFrames, "todo: docstring", py::arg("number"))
  .def("SortTextureFrames", (void (Urho3D::ParticleEffect::*)()) &Urho3D::ParticleEffect::SortTextureFrames, "todo: docstring")
  //.def("Clone", (SharedPtr<Urho3D::ParticleEffect> (Urho3D::ParticleEffect::*)(const Urho3D::String &) const) &Urho3D::ParticleEffect::Clone, "todo: docstring", py::arg("cloneName")=String::EMPTY)
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetMaterial", (Urho3D::Material * (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMaterial, "todo: docstring")
  .def("GetNumParticles", (unsigned int (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetNumParticles, "todo: docstring")
  .def("GetUpdateInvisible", (bool (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetUpdateInvisible, "todo: docstring")
  .def("IsRelative", (bool (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::IsRelative, "todo: docstring")
  .def("IsScaled", (bool (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::IsScaled, "todo: docstring")
  .def("IsSorted", (bool (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::IsSorted, "todo: docstring")
  .def("IsFixedScreenSize", (bool (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::IsFixedScreenSize, "todo: docstring")
  .def("GetAnimationLodBias", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetAnimationLodBias, "todo: docstring")
  .def("GetEmitterType", (Urho3D::EmitterType (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetEmitterType, "todo: docstring")
  .def("GetEmitterSize", (const Urho3D::Vector3 & (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetEmitterSize, "todo: docstring")
  .def("GetMinDirection", (const Urho3D::Vector3 & (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMinDirection, "todo: docstring")
  .def("GetMaxDirection", (const Urho3D::Vector3 & (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMaxDirection, "todo: docstring")
  .def("GetConstantForce", (const Urho3D::Vector3 & (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetConstantForce, "todo: docstring")
  .def("GetDampingForce", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetDampingForce, "todo: docstring")
  .def("GetActiveTime", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetActiveTime, "todo: docstring")
  .def("GetInactiveTime", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetInactiveTime, "todo: docstring")
  .def("GetMinEmissionRate", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMinEmissionRate, "todo: docstring")
  .def("GetMaxEmissionRate", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMaxEmissionRate, "todo: docstring")
  .def("GetMinParticleSize", (const Urho3D::Vector2 & (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMinParticleSize, "todo: docstring")
  .def("GetMaxParticleSize", (const Urho3D::Vector2 & (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMaxParticleSize, "todo: docstring")
  .def("GetMinTimeToLive", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMinTimeToLive, "todo: docstring")
  .def("GetMaxTimeToLive", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMaxTimeToLive, "todo: docstring")
  .def("GetMinVelocity", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMinVelocity, "todo: docstring")
  .def("GetMaxVelocity", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMaxVelocity, "todo: docstring")
  .def("GetMinRotation", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMinRotation, "todo: docstring")
  .def("GetMaxRotation", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMaxRotation, "todo: docstring")
  .def("GetMinRotationSpeed", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMinRotationSpeed, "todo: docstring")
  .def("GetMaxRotationSpeed", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetMaxRotationSpeed, "todo: docstring")
  .def("GetSizeAdd", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetSizeAdd, "todo: docstring")
  .def("GetSizeMul", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetSizeMul, "todo: docstring")
  //.def("GetColorFrames", (const Vector<Urho3D::ColorFrame> & (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetColorFrames, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumColorFrames", (unsigned int (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetNumColorFrames, "todo: docstring")
  //.def("GetColorFrame", (const Urho3D::ColorFrame * (Urho3D::ParticleEffect::*)(unsigned int) const) &Urho3D::ParticleEffect::GetColorFrame, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetTextureFrames", (const Vector<Urho3D::TextureFrame> & (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetTextureFrames, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumTextureFrames", (unsigned int (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetNumTextureFrames, "todo: docstring")
  //.def("GetTextureFrame", (const Urho3D::TextureFrame * (Urho3D::ParticleEffect::*)(unsigned int) const) &Urho3D::ParticleEffect::GetTextureFrame, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetFaceCameraMode", (Urho3D::FaceCameraMode (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetFaceCameraMode, "todo: docstring")
  .def("GetRandomDirection", (Urho3D::Vector3 (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetRandomDirection, "todo: docstring")
  .def("GetRandomSize", (Urho3D::Vector2 (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetRandomSize, "todo: docstring")
  .def("GetRandomVelocity", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetRandomVelocity, "todo: docstring")
  .def("GetRandomTimeToLive", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetRandomTimeToLive, "todo: docstring")
  .def("GetRandomRotationSpeed", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetRandomRotationSpeed, "todo: docstring")
  .def("GetRandomRotation", (float (Urho3D::ParticleEffect::*)() const) &Urho3D::ParticleEffect::GetRandomRotation, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_StaticModelGroup(py::class_<Urho3D::StaticModelGroup, Urho3D::SharedPtr<Urho3D::StaticModelGroup>, Urho3D::StaticModel>& pyclass_Var_Urho3D_StaticModelGroup)
{
    // Class StaticModelGroup Implementation
pyclass_Var_Urho3D_StaticModelGroup
  .def("GetType", (Urho3D::StringHash (Urho3D::StaticModelGroup::*)() const) &Urho3D::StaticModelGroup::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::StaticModelGroup::*)() const) &Urho3D::StaticModelGroup::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::StaticModelGroup::*)() const) &Urho3D::StaticModelGroup::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~StaticModelGroup", (void (Urho3D::StaticModelGroup::*)()) &Urho3D::StaticModelGroup::~StaticModelGroup, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::StaticModelGroup::*)()) &Urho3D::StaticModelGroup::ApplyAttributes, "todo: docstring")
  //.def("ProcessRayQuery", (void (Urho3D::StaticModelGroup::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::StaticModelGroup::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::StaticModelGroup::*)(const Urho3D::FrameInfo &)) &Urho3D::StaticModelGroup::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetNumOccluderTriangles", (unsigned int (Urho3D::StaticModelGroup::*)()) &Urho3D::StaticModelGroup::GetNumOccluderTriangles, "todo: docstring")
  .def("DrawOcclusion", (bool (Urho3D::StaticModelGroup::*)(Urho3D::OcclusionBuffer *)) &Urho3D::StaticModelGroup::DrawOcclusion, "todo: docstring", py::arg("buffer"))
  .def("AddInstanceNode", (void (Urho3D::StaticModelGroup::*)(Urho3D::Node *)) &Urho3D::StaticModelGroup::AddInstanceNode, "todo: docstring", py::arg("node"))
  .def("RemoveInstanceNode", (void (Urho3D::StaticModelGroup::*)(Urho3D::Node *)) &Urho3D::StaticModelGroup::RemoveInstanceNode, "todo: docstring", py::arg("node"))
  .def("RemoveAllInstanceNodes", (void (Urho3D::StaticModelGroup::*)()) &Urho3D::StaticModelGroup::RemoveAllInstanceNodes, "todo: docstring")
  .def("GetNumInstanceNodes", (unsigned int (Urho3D::StaticModelGroup::*)() const) &Urho3D::StaticModelGroup::GetNumInstanceNodes, "todo: docstring")
  .def("GetInstanceNode", (Urho3D::Node * (Urho3D::StaticModelGroup::*)(unsigned int) const) &Urho3D::StaticModelGroup::GetInstanceNode, "todo: docstring", py::arg("index"))
  .def("SetNodeIDsAttr", (void (Urho3D::StaticModelGroup::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::StaticModelGroup::SetNodeIDsAttr, "todo: docstring", py::arg("value"))
  .def("GetNodeIDsAttr", (const Urho3D::VariantVector & (Urho3D::StaticModelGroup::*)() const) &Urho3D::StaticModelGroup::GetNodeIDsAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_IKSolver(py::class_<Urho3D::IKSolver, Urho3D::SharedPtr<Urho3D::IKSolver>, Urho3D::Component>& pyclass_Var_Urho3D_IKSolver)
{
    // Class IKSolver Implementation
pyclass_Var_Urho3D_IKSolver
  .def("GetType", (Urho3D::StringHash (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~IKSolver", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::~IKSolver, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("GetAlgorithm", (Urho3D::IKSolver::Algorithm (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetAlgorithm, "todo: docstring")
  .def("SetAlgorithm", (void (Urho3D::IKSolver::*)(Urho3D::IKSolver::Algorithm)) &Urho3D::IKSolver::SetAlgorithm, "todo: docstring", py::arg("algorithm"))
  .def("GetFeature", (bool (Urho3D::IKSolver::*)(Urho3D::IKSolver::Feature) const) &Urho3D::IKSolver::GetFeature, "todo: docstring", py::arg("feature"))
  .def("SetFeature", (void (Urho3D::IKSolver::*)(Urho3D::IKSolver::Feature, bool)) &Urho3D::IKSolver::SetFeature, "todo: docstring", py::arg("feature"), py::arg("enable"))
  .def("GetMaximumIterations", (unsigned int (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetMaximumIterations, "todo: docstring")
  .def("SetMaximumIterations", (void (Urho3D::IKSolver::*)(unsigned int)) &Urho3D::IKSolver::SetMaximumIterations, "todo: docstring", py::arg("iterations"))
  .def("GetTolerance", (float (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetTolerance, "todo: docstring")
  .def("SetTolerance", (void (Urho3D::IKSolver::*)(float)) &Urho3D::IKSolver::SetTolerance, "todo: docstring", py::arg("tolerance"))
  .def("RebuildChainTrees", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::RebuildChainTrees, "todo: docstring")
  .def("RecalculateSegmentLengths", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::RecalculateSegmentLengths, "todo: docstring")
  .def("CalculateJointRotations", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::CalculateJointRotations, "todo: docstring")
  .def("Solve", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::Solve, "todo: docstring")
  .def("ApplyOriginalPoseToScene", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::ApplyOriginalPoseToScene, "todo: docstring")
  .def("ApplySceneToOriginalPose", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::ApplySceneToOriginalPose, "todo: docstring")
  .def("ApplyActivePoseToScene", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::ApplyActivePoseToScene, "todo: docstring")
  .def("ApplySceneToActivePose", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::ApplySceneToActivePose, "todo: docstring")
  .def("ApplyOriginalPoseToActivePose", (void (Urho3D::IKSolver::*)()) &Urho3D::IKSolver::ApplyOriginalPoseToActivePose, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::IKSolver::*)(bool)) &Urho3D::IKSolver::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
  .def("DrawDebugGeometry", (void (Urho3D::IKSolver::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::IKSolver::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("GetJOINT_ROTATIONS", (bool (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetJOINT_ROTATIONS, "todo: docstring")
  .def("GetTARGET_ROTATIONS", (bool (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetTARGET_ROTATIONS, "todo: docstring")
  .def("GetUPDATE_ORIGINAL_POSE", (bool (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetUPDATE_ORIGINAL_POSE, "todo: docstring")
  .def("GetUPDATE_ACTIVE_POSE", (bool (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetUPDATE_ACTIVE_POSE, "todo: docstring")
  .def("GetUSE_ORIGINAL_POSE", (bool (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetUSE_ORIGINAL_POSE, "todo: docstring")
  .def("GetCONSTRAINTS", (bool (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetCONSTRAINTS, "todo: docstring")
  .def("GetAUTO_SOLVE", (bool (Urho3D::IKSolver::*)() const) &Urho3D::IKSolver::GetAUTO_SOLVE, "todo: docstring")
  .def("SetJOINT_ROTATIONS", (void (Urho3D::IKSolver::*)(bool)) &Urho3D::IKSolver::SetJOINT_ROTATIONS, "todo: docstring", py::arg("enable"))
  .def("SetTARGET_ROTATIONS", (void (Urho3D::IKSolver::*)(bool)) &Urho3D::IKSolver::SetTARGET_ROTATIONS, "todo: docstring", py::arg("enable"))
  .def("SetUPDATE_ORIGINAL_POSE", (void (Urho3D::IKSolver::*)(bool)) &Urho3D::IKSolver::SetUPDATE_ORIGINAL_POSE, "todo: docstring", py::arg("enable"))
  .def("SetUPDATE_ACTIVE_POSE", (void (Urho3D::IKSolver::*)(bool)) &Urho3D::IKSolver::SetUPDATE_ACTIVE_POSE, "todo: docstring", py::arg("enable"))
  .def("SetUSE_ORIGINAL_POSE", (void (Urho3D::IKSolver::*)(bool)) &Urho3D::IKSolver::SetUSE_ORIGINAL_POSE, "todo: docstring", py::arg("enable"))
  .def("SetCONSTRAINTS", (void (Urho3D::IKSolver::*)(bool)) &Urho3D::IKSolver::SetCONSTRAINTS, "todo: docstring", py::arg("enable"))
  .def("SetAUTO_SOLVE", (void (Urho3D::IKSolver::*)(bool)) &Urho3D::IKSolver::SetAUTO_SOLVE, "todo: docstring", py::arg("enable"))
// Class Variables:
;
}

void Implement_Urho3D_LuaFile(py::class_<Urho3D::LuaFile, Urho3D::SharedPtr<Urho3D::LuaFile>, Urho3D::Resource>& pyclass_Var_Urho3D_LuaFile)
{
    // Class LuaFile Implementation
pyclass_Var_Urho3D_LuaFile
  .def("GetType", (Urho3D::StringHash (Urho3D::LuaFile::*)() const) &Urho3D::LuaFile::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::LuaFile::*)() const) &Urho3D::LuaFile::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::LuaFile::*)() const) &Urho3D::LuaFile::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~LuaFile", (void (Urho3D::LuaFile::*)()) &Urho3D::LuaFile::~LuaFile, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::LuaFile::*)(Urho3D::Deserializer &)) &Urho3D::LuaFile::BeginLoad, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::LuaFile::*)(Urho3D::Serializer &) const) &Urho3D::LuaFile::Save, "todo: docstring", py::arg("dest"))
  //.def("LoadChunk", (bool (Urho3D::LuaFile::*)(lua_State *)) &Urho3D::LuaFile::LoadChunk, "todo: docstring", py::arg("luaState"))
    //['lua_State']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("LoadAndExecute", (bool (Urho3D::LuaFile::*)(lua_State *)) &Urho3D::LuaFile::LoadAndExecute, "todo: docstring", py::arg("luaState"))
    //['lua_State']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_CrowdManager(py::class_<Urho3D::CrowdManager, Urho3D::SharedPtr<Urho3D::CrowdManager>, Urho3D::Component>& pyclass_Var_Urho3D_CrowdManager)
{
    // Class CrowdManager Implementation
pyclass_Var_Urho3D_CrowdManager
  .def("GetType", (Urho3D::StringHash (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CrowdManager", (void (Urho3D::CrowdManager::*)()) &Urho3D::CrowdManager::~CrowdManager, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::CrowdManager::*)()) &Urho3D::CrowdManager::ApplyAttributes, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::CrowdManager::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::CrowdManager::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("DrawDebugGeometry", (void (Urho3D::CrowdManager::*)(bool)) &Urho3D::CrowdManager::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
  .def("SetCrowdTarget", (void (Urho3D::CrowdManager::*)(const Urho3D::Vector3 &, Urho3D::Node *)) &Urho3D::CrowdManager::SetCrowdTarget, "todo: docstring", py::arg("position"), py::arg("node")=nullptr)
  .def("SetCrowdVelocity", (void (Urho3D::CrowdManager::*)(const Urho3D::Vector3 &, Urho3D::Node *)) &Urho3D::CrowdManager::SetCrowdVelocity, "todo: docstring", py::arg("velocity"), py::arg("node")=nullptr)
  .def("ResetCrowdTarget", (void (Urho3D::CrowdManager::*)(Urho3D::Node *)) &Urho3D::CrowdManager::ResetCrowdTarget, "todo: docstring", py::arg("node")=nullptr)
  .def("SetMaxAgents", (void (Urho3D::CrowdManager::*)(unsigned int)) &Urho3D::CrowdManager::SetMaxAgents, "todo: docstring", py::arg("maxAgents"))
  .def("SetMaxAgentRadius", (void (Urho3D::CrowdManager::*)(float)) &Urho3D::CrowdManager::SetMaxAgentRadius, "todo: docstring", py::arg("maxAgentRadius"))
  .def("SetNavigationMesh", (void (Urho3D::CrowdManager::*)(Urho3D::NavigationMesh *)) &Urho3D::CrowdManager::SetNavigationMesh, "todo: docstring", py::arg("navMesh"))
  .def("SetQueryFilterTypesAttr", (void (Urho3D::CrowdManager::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::CrowdManager::SetQueryFilterTypesAttr, "todo: docstring", py::arg("value"))
  .def("SetIncludeFlags", (void (Urho3D::CrowdManager::*)(unsigned int, unsigned short)) &Urho3D::CrowdManager::SetIncludeFlags, "todo: docstring", py::arg("queryFilterType"), py::arg("flags"))
  .def("SetExcludeFlags", (void (Urho3D::CrowdManager::*)(unsigned int, unsigned short)) &Urho3D::CrowdManager::SetExcludeFlags, "todo: docstring", py::arg("queryFilterType"), py::arg("flags"))
  .def("SetAreaCost", (void (Urho3D::CrowdManager::*)(unsigned int, unsigned int, float)) &Urho3D::CrowdManager::SetAreaCost, "todo: docstring", py::arg("queryFilterType"), py::arg("areaID"), py::arg("cost"))
  .def("SetObstacleAvoidanceTypesAttr", (void (Urho3D::CrowdManager::*)(const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::CrowdManager::SetObstacleAvoidanceTypesAttr, "todo: docstring", py::arg("value"))
  //.def("SetObstacleAvoidanceParams", (void (Urho3D::CrowdManager::*)(unsigned int, const Urho3D::CrowdObstacleAvoidanceParams &)) &Urho3D::CrowdManager::SetObstacleAvoidanceParams, "todo: docstring", py::arg("obstacleAvoidanceType"), py::arg("params"))
    //['unsigned int', 'Urho3D::CrowdObstacleAvoidanceParams']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("GetAgents", (PODVector<Urho3D::CrowdAgent *> (Urho3D::CrowdManager::*)(Urho3D::Node *, bool) const) &Urho3D::CrowdManager::GetAgents, "todo: docstring", py::arg("node")=nullptr, py::arg("inCrowdFilter")=true)
    //['Urho3D::Node', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("FindNearestPoint", (Urho3D::Vector3 (Urho3D::CrowdManager::*)(const Urho3D::Vector3 &, int, unsigned int *)) &Urho3D::CrowdManager::FindNearestPoint, "todo: docstring", py::arg("point"), py::arg("queryFilterType"), py::arg("nearestRef")=nullptr)
  .def("MoveAlongSurface", (Urho3D::Vector3 (Urho3D::CrowdManager::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, int, int)) &Urho3D::CrowdManager::MoveAlongSurface, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("queryFilterType"), py::arg("maxVisited")=3)
  //.def("FindPath", (void (Urho3D::CrowdManager::*)(Urho3D::PODVector<Urho3D::Vector3> &, const Urho3D::Vector3 &, const Urho3D::Vector3 &, int)) &Urho3D::CrowdManager::FindPath, "todo: docstring", py::arg("dest"), py::arg("start"), py::arg("end"), py::arg("queryFilterType"))
    //['Urho3D::PODVector<Urho3D::Vector3>', 'Urho3D::Vector3', 'Urho3D::Vector3', 'int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetRandomPoint", (Urho3D::Vector3 (Urho3D::CrowdManager::*)(int, unsigned int *)) &Urho3D::CrowdManager::GetRandomPoint, "todo: docstring", py::arg("queryFilterType"), py::arg("randomRef")=nullptr)
  .def("GetRandomPointInCircle", (Urho3D::Vector3 (Urho3D::CrowdManager::*)(const Urho3D::Vector3 &, float, int, unsigned int *)) &Urho3D::CrowdManager::GetRandomPointInCircle, "todo: docstring", py::arg("center"), py::arg("radius"), py::arg("queryFilterType"), py::arg("randomRef")=nullptr)
  .def("GetDistanceToWall", (float (Urho3D::CrowdManager::*)(const Urho3D::Vector3 &, float, int, Urho3D::Vector3 *, Urho3D::Vector3 *)) &Urho3D::CrowdManager::GetDistanceToWall, "todo: docstring", py::arg("point"), py::arg("radius"), py::arg("queryFilterType"), py::arg("hitPos")=nullptr, py::arg("hitNormal")=nullptr)
  .def("Raycast", (Urho3D::Vector3 (Urho3D::CrowdManager::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, int, Urho3D::Vector3 *)) &Urho3D::CrowdManager::Raycast, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("queryFilterType"), py::arg("hitNormal")=nullptr)
  .def("GetMaxAgents", (unsigned int (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetMaxAgents, "todo: docstring")
  .def("GetMaxAgentRadius", (float (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetMaxAgentRadius, "todo: docstring")
  .def("GetNavigationMesh", (Urho3D::NavigationMesh * (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetNavigationMesh, "todo: docstring")
  .def("GetNumQueryFilterTypes", (unsigned int (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetNumQueryFilterTypes, "todo: docstring")
  .def("GetNumAreas", (unsigned int (Urho3D::CrowdManager::*)(unsigned int) const) &Urho3D::CrowdManager::GetNumAreas, "todo: docstring", py::arg("queryFilterType"))
  .def("GetQueryFilterTypesAttr", (Urho3D::VariantVector (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetQueryFilterTypesAttr, "todo: docstring")
  .def("GetIncludeFlags", (unsigned short (Urho3D::CrowdManager::*)(unsigned int) const) &Urho3D::CrowdManager::GetIncludeFlags, "todo: docstring", py::arg("queryFilterType"))
  .def("GetExcludeFlags", (unsigned short (Urho3D::CrowdManager::*)(unsigned int) const) &Urho3D::CrowdManager::GetExcludeFlags, "todo: docstring", py::arg("queryFilterType"))
  .def("GetAreaCost", (float (Urho3D::CrowdManager::*)(unsigned int, unsigned int) const) &Urho3D::CrowdManager::GetAreaCost, "todo: docstring", py::arg("queryFilterType"), py::arg("areaID"))
  .def("GetNumObstacleAvoidanceTypes", (unsigned int (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetNumObstacleAvoidanceTypes, "todo: docstring")
  .def("GetObstacleAvoidanceTypesAttr", (Urho3D::VariantVector (Urho3D::CrowdManager::*)() const) &Urho3D::CrowdManager::GetObstacleAvoidanceTypesAttr, "todo: docstring")
  //.def("GetObstacleAvoidanceParams", (const Urho3D::CrowdObstacleAvoidanceParams & (Urho3D::CrowdManager::*)(unsigned int) const) &Urho3D::CrowdManager::GetObstacleAvoidanceParams, "todo: docstring", py::arg("obstacleAvoidanceType"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_DynamicNavigationMesh(py::class_<Urho3D::DynamicNavigationMesh, Urho3D::SharedPtr<Urho3D::DynamicNavigationMesh>, Urho3D::NavigationMesh>& pyclass_Var_Urho3D_DynamicNavigationMesh)
{
    // Class DynamicNavigationMesh Implementation
pyclass_Var_Urho3D_DynamicNavigationMesh
  .def("GetType", (Urho3D::StringHash (Urho3D::DynamicNavigationMesh::*)() const) &Urho3D::DynamicNavigationMesh::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::DynamicNavigationMesh::*)() const) &Urho3D::DynamicNavigationMesh::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::DynamicNavigationMesh::*)() const) &Urho3D::DynamicNavigationMesh::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~DynamicNavigationMesh", (void (Urho3D::DynamicNavigationMesh::*)()) &Urho3D::DynamicNavigationMesh::~DynamicNavigationMesh, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Allocate", (bool (Urho3D::DynamicNavigationMesh::*)(const Urho3D::BoundingBox &, unsigned int)) &Urho3D::DynamicNavigationMesh::Allocate, "todo: docstring", py::arg("boundingBox"), py::arg("maxTiles"))
  .def("Build", (bool (Urho3D::DynamicNavigationMesh::*)()) &Urho3D::DynamicNavigationMesh::Build, "todo: docstring")
  .def("Build", (bool (Urho3D::DynamicNavigationMesh::*)(const Urho3D::BoundingBox &)) &Urho3D::DynamicNavigationMesh::Build, "todo: docstring", py::arg("boundingBox"))
  .def("Build", (bool (Urho3D::DynamicNavigationMesh::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::DynamicNavigationMesh::Build, "todo: docstring", py::arg("from"), py::arg("to"))
  //.def("GetTileData", (PODVector<unsigned char> (Urho3D::DynamicNavigationMesh::*)(const Urho3D::IntVector2 &) const) &Urho3D::DynamicNavigationMesh::GetTileData, "todo: docstring", py::arg("tile"))
    //['Urho3D::IntVector2']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("IsObstacleInTile", (bool (Urho3D::DynamicNavigationMesh::*)(Urho3D::Obstacle *, const Urho3D::IntVector2 &) const) &Urho3D::DynamicNavigationMesh::IsObstacleInTile, "todo: docstring", py::arg("obstacle"), py::arg("tile"))
  .def("AddTile", (bool (Urho3D::DynamicNavigationMesh::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::DynamicNavigationMesh::AddTile, "todo: docstring", py::arg("tileData"))
  .def("RemoveTile", (void (Urho3D::DynamicNavigationMesh::*)(const Urho3D::IntVector2 &)) &Urho3D::DynamicNavigationMesh::RemoveTile, "todo: docstring", py::arg("tile"))
  .def("RemoveAllTiles", (void (Urho3D::DynamicNavigationMesh::*)()) &Urho3D::DynamicNavigationMesh::RemoveAllTiles, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::DynamicNavigationMesh::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::DynamicNavigationMesh::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("DrawDebugGeometry", (void (Urho3D::DynamicNavigationMesh::*)(bool)) &Urho3D::DynamicNavigationMesh::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
  .def("SetNavigationDataAttr", (void (Urho3D::DynamicNavigationMesh::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::DynamicNavigationMesh::SetNavigationDataAttr, "todo: docstring", py::arg("value"))
  //.def("GetNavigationDataAttr", (PODVector<unsigned char> (Urho3D::DynamicNavigationMesh::*)() const) &Urho3D::DynamicNavigationMesh::GetNavigationDataAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("SetMaxObstacles", (void (Urho3D::DynamicNavigationMesh::*)(unsigned int)) &Urho3D::DynamicNavigationMesh::SetMaxObstacles, "todo: docstring", py::arg("maxObstacles"))
  .def("SetMaxLayers", (void (Urho3D::DynamicNavigationMesh::*)(unsigned int)) &Urho3D::DynamicNavigationMesh::SetMaxLayers, "todo: docstring", py::arg("maxLayers"))
  .def("GetMaxObstacles", (unsigned int (Urho3D::DynamicNavigationMesh::*)() const) &Urho3D::DynamicNavigationMesh::GetMaxObstacles, "todo: docstring")
  .def("GetMaxLayers", (unsigned int (Urho3D::DynamicNavigationMesh::*)() const) &Urho3D::DynamicNavigationMesh::GetMaxLayers, "todo: docstring")
  .def("SetDrawObstacles", (void (Urho3D::DynamicNavigationMesh::*)(bool)) &Urho3D::DynamicNavigationMesh::SetDrawObstacles, "todo: docstring", py::arg("enable"))
  .def("GetDrawObstacles", (bool (Urho3D::DynamicNavigationMesh::*)() const) &Urho3D::DynamicNavigationMesh::GetDrawObstacles, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_RigidBody(py::class_<Urho3D::RigidBody, Urho3D::SharedPtr<Urho3D::RigidBody>, Urho3D::Component>& pyclass_Var_Urho3D_RigidBody)
{
    // Class RigidBody Implementation
pyclass_Var_Urho3D_RigidBody
  .def("GetType", (Urho3D::StringHash (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~RigidBody", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::~RigidBody, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::ApplyAttributes, "todo: docstring")
  .def("OnSetEnabled", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::OnSetEnabled, "todo: docstring")
  //.def("getWorldTransform", (void (Urho3D::RigidBody::*)(btTransform &) const) &Urho3D::RigidBody::getWorldTransform, "todo: docstring", py::arg("worldTrans"))
    //['btTransform']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("setWorldTransform", (void (Urho3D::RigidBody::*)(const btTransform &)) &Urho3D::RigidBody::setWorldTransform, "todo: docstring", py::arg("worldTrans"))
    //['btTransform']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("DrawDebugGeometry", (void (Urho3D::RigidBody::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::RigidBody::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetMass", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetMass, "todo: docstring", py::arg("mass"))
  .def("SetPosition", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::SetPosition, "todo: docstring", py::arg("position"))
  .def("SetRotation", (void (Urho3D::RigidBody::*)(const Urho3D::Quaternion &)) &Urho3D::RigidBody::SetRotation, "todo: docstring", py::arg("rotation"))
  .def("SetTransform", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::RigidBody::SetTransform, "todo: docstring", py::arg("position"), py::arg("rotation"))
  .def("SetLinearVelocity", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::SetLinearVelocity, "todo: docstring", py::arg("velocity"))
  .def("SetLinearFactor", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::SetLinearFactor, "todo: docstring", py::arg("factor"))
  .def("SetLinearRestThreshold", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetLinearRestThreshold, "todo: docstring", py::arg("threshold"))
  .def("SetLinearDamping", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetLinearDamping, "todo: docstring", py::arg("damping"))
  .def("SetAngularVelocity", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::SetAngularVelocity, "todo: docstring", py::arg("velocity"))
  .def("SetAngularFactor", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::SetAngularFactor, "todo: docstring", py::arg("factor"))
  .def("SetAngularRestThreshold", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetAngularRestThreshold, "todo: docstring", py::arg("threshold"))
  .def("SetAngularDamping", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetAngularDamping, "todo: docstring", py::arg("damping"))
  .def("SetFriction", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetFriction, "todo: docstring", py::arg("friction"))
  .def("SetAnisotropicFriction", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::SetAnisotropicFriction, "todo: docstring", py::arg("friction"))
  .def("SetRollingFriction", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetRollingFriction, "todo: docstring", py::arg("friction"))
  .def("SetRestitution", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetRestitution, "todo: docstring", py::arg("restitution"))
  .def("SetContactProcessingThreshold", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetContactProcessingThreshold, "todo: docstring", py::arg("threshold"))
  .def("SetCcdRadius", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetCcdRadius, "todo: docstring", py::arg("radius"))
  .def("SetCcdMotionThreshold", (void (Urho3D::RigidBody::*)(float)) &Urho3D::RigidBody::SetCcdMotionThreshold, "todo: docstring", py::arg("threshold"))
  .def("SetUseGravity", (void (Urho3D::RigidBody::*)(bool)) &Urho3D::RigidBody::SetUseGravity, "todo: docstring", py::arg("enable"))
  .def("SetGravityOverride", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::SetGravityOverride, "todo: docstring", py::arg("gravity"))
  .def("SetKinematic", (void (Urho3D::RigidBody::*)(bool)) &Urho3D::RigidBody::SetKinematic, "todo: docstring", py::arg("enable"))
  .def("SetTrigger", (void (Urho3D::RigidBody::*)(bool)) &Urho3D::RigidBody::SetTrigger, "todo: docstring", py::arg("enable"))
  .def("SetCollisionLayer", (void (Urho3D::RigidBody::*)(unsigned int)) &Urho3D::RigidBody::SetCollisionLayer, "todo: docstring", py::arg("layer"))
  .def("SetCollisionMask", (void (Urho3D::RigidBody::*)(unsigned int)) &Urho3D::RigidBody::SetCollisionMask, "todo: docstring", py::arg("mask"))
  .def("SetCollisionLayerAndMask", (void (Urho3D::RigidBody::*)(unsigned int, unsigned int)) &Urho3D::RigidBody::SetCollisionLayerAndMask, "todo: docstring", py::arg("layer"), py::arg("mask"))
  .def("SetCollisionEventMode", (void (Urho3D::RigidBody::*)(Urho3D::CollisionEventMode)) &Urho3D::RigidBody::SetCollisionEventMode, "todo: docstring", py::arg("mode"))
  .def("ApplyForce", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::ApplyForce, "todo: docstring", py::arg("force"))
  .def("ApplyForce", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::RigidBody::ApplyForce, "todo: docstring", py::arg("force"), py::arg("position"))
  .def("ApplyTorque", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::ApplyTorque, "todo: docstring", py::arg("torque"))
  .def("ApplyImpulse", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::ApplyImpulse, "todo: docstring", py::arg("impulse"))
  .def("ApplyImpulse", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::RigidBody::ApplyImpulse, "todo: docstring", py::arg("impulse"), py::arg("position"))
  .def("ApplyTorqueImpulse", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &)) &Urho3D::RigidBody::ApplyTorqueImpulse, "todo: docstring", py::arg("torque"))
  .def("ResetForces", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::ResetForces, "todo: docstring")
  .def("Activate", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::Activate, "todo: docstring")
  .def("ReAddBodyToWorld", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::ReAddBodyToWorld, "todo: docstring")
  .def("DisableMassUpdate", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::DisableMassUpdate, "todo: docstring")
  .def("EnableMassUpdate", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::EnableMassUpdate, "todo: docstring")
  .def("GetPhysicsWorld", (Urho3D::PhysicsWorld * (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetPhysicsWorld, "todo: docstring")
  //.def("GetBody", (btRigidBody * (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetBody, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetCompoundShape", (btCompoundShape * (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetCompoundShape, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetMass", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetMass, "todo: docstring")
  .def("GetPosition", (Urho3D::Vector3 (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetPosition, "todo: docstring")
  .def("GetRotation", (Urho3D::Quaternion (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetRotation, "todo: docstring")
  .def("GetLinearVelocity", (Urho3D::Vector3 (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetLinearVelocity, "todo: docstring")
  .def("GetLinearFactor", (Urho3D::Vector3 (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetLinearFactor, "todo: docstring")
  .def("GetVelocityAtPoint", (Urho3D::Vector3 (Urho3D::RigidBody::*)(const Urho3D::Vector3 &) const) &Urho3D::RigidBody::GetVelocityAtPoint, "todo: docstring", py::arg("position"))
  .def("GetLinearRestThreshold", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetLinearRestThreshold, "todo: docstring")
  .def("GetLinearDamping", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetLinearDamping, "todo: docstring")
  .def("GetAngularVelocity", (Urho3D::Vector3 (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetAngularVelocity, "todo: docstring")
  .def("GetAngularFactor", (Urho3D::Vector3 (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetAngularFactor, "todo: docstring")
  .def("GetAngularRestThreshold", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetAngularRestThreshold, "todo: docstring")
  .def("GetAngularDamping", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetAngularDamping, "todo: docstring")
  .def("GetFriction", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetFriction, "todo: docstring")
  .def("GetAnisotropicFriction", (Urho3D::Vector3 (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetAnisotropicFriction, "todo: docstring")
  .def("GetRollingFriction", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetRollingFriction, "todo: docstring")
  .def("GetRestitution", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetRestitution, "todo: docstring")
  .def("GetContactProcessingThreshold", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetContactProcessingThreshold, "todo: docstring")
  .def("GetCcdRadius", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetCcdRadius, "todo: docstring")
  .def("GetCcdMotionThreshold", (float (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetCcdMotionThreshold, "todo: docstring")
  .def("GetUseGravity", (bool (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetUseGravity, "todo: docstring")
  .def("GetGravityOverride", (const Urho3D::Vector3 & (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetGravityOverride, "todo: docstring")
  .def("GetCenterOfMass", (const Urho3D::Vector3 & (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetCenterOfMass, "todo: docstring")
  .def("IsKinematic", (bool (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::IsKinematic, "todo: docstring")
  .def("IsTrigger", (bool (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::IsTrigger, "todo: docstring")
  .def("IsActive", (bool (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::IsActive, "todo: docstring")
  .def("GetCollisionLayer", (unsigned int (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetCollisionLayer, "todo: docstring")
  .def("GetCollisionMask", (unsigned int (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetCollisionMask, "todo: docstring")
  .def("GetCollisionEventMode", (Urho3D::CollisionEventMode (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetCollisionEventMode, "todo: docstring")
  //.def("GetCollidingBodies", (void (Urho3D::RigidBody::*)(Urho3D::PODVector<Urho3D::RigidBody *> &) const) &Urho3D::RigidBody::GetCollidingBodies, "todo: docstring", py::arg("result"))
    //['Urho3D::PODVector<Urho3D::RigidBody']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("ApplyWorldTransform", (void (Urho3D::RigidBody::*)(const Urho3D::Vector3 &, const Urho3D::Quaternion &)) &Urho3D::RigidBody::ApplyWorldTransform, "todo: docstring", py::arg("newWorldPosition"), py::arg("newWorldRotation"))
  .def("UpdateMass", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::UpdateMass, "todo: docstring")
  .def("UpdateGravity", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::UpdateGravity, "todo: docstring")
  .def("SetNetAngularVelocityAttr", (void (Urho3D::RigidBody::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::RigidBody::SetNetAngularVelocityAttr, "todo: docstring", py::arg("value"))
  //.def("GetNetAngularVelocityAttr", (const PODVector<unsigned char> & (Urho3D::RigidBody::*)() const) &Urho3D::RigidBody::GetNetAngularVelocityAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("AddConstraint", (void (Urho3D::RigidBody::*)(Urho3D::Constraint *)) &Urho3D::RigidBody::AddConstraint, "todo: docstring", py::arg("constraint"))
  .def("RemoveConstraint", (void (Urho3D::RigidBody::*)(Urho3D::Constraint *)) &Urho3D::RigidBody::RemoveConstraint, "todo: docstring", py::arg("constraint"))
  .def("ReleaseBody", (void (Urho3D::RigidBody::*)()) &Urho3D::RigidBody::ReleaseBody, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_SmoothedTransform(py::class_<Urho3D::SmoothedTransform, Urho3D::SharedPtr<Urho3D::SmoothedTransform>, Urho3D::Component>& pyclass_Var_Urho3D_SmoothedTransform)
{
    // Class SmoothedTransform Implementation
pyclass_Var_Urho3D_SmoothedTransform
  .def("GetType", (Urho3D::StringHash (Urho3D::SmoothedTransform::*)() const) &Urho3D::SmoothedTransform::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::SmoothedTransform::*)() const) &Urho3D::SmoothedTransform::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::SmoothedTransform::*)() const) &Urho3D::SmoothedTransform::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~SmoothedTransform", (void (Urho3D::SmoothedTransform::*)()) &Urho3D::SmoothedTransform::~SmoothedTransform, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Update", (void (Urho3D::SmoothedTransform::*)(float, float)) &Urho3D::SmoothedTransform::Update, "todo: docstring", py::arg("constant"), py::arg("squaredSnapThreshold"))
  .def("SetTargetPosition", (void (Urho3D::SmoothedTransform::*)(const Urho3D::Vector3 &)) &Urho3D::SmoothedTransform::SetTargetPosition, "todo: docstring", py::arg("position"))
  .def("SetTargetRotation", (void (Urho3D::SmoothedTransform::*)(const Urho3D::Quaternion &)) &Urho3D::SmoothedTransform::SetTargetRotation, "todo: docstring", py::arg("rotation"))
  .def("SetTargetWorldPosition", (void (Urho3D::SmoothedTransform::*)(const Urho3D::Vector3 &)) &Urho3D::SmoothedTransform::SetTargetWorldPosition, "todo: docstring", py::arg("position"))
  .def("SetTargetWorldRotation", (void (Urho3D::SmoothedTransform::*)(const Urho3D::Quaternion &)) &Urho3D::SmoothedTransform::SetTargetWorldRotation, "todo: docstring", py::arg("rotation"))
  .def("GetTargetPosition", (const Urho3D::Vector3 & (Urho3D::SmoothedTransform::*)() const) &Urho3D::SmoothedTransform::GetTargetPosition, "todo: docstring")
  .def("GetTargetRotation", (const Urho3D::Quaternion & (Urho3D::SmoothedTransform::*)() const) &Urho3D::SmoothedTransform::GetTargetRotation, "todo: docstring")
  .def("GetTargetWorldPosition", (Urho3D::Vector3 (Urho3D::SmoothedTransform::*)() const) &Urho3D::SmoothedTransform::GetTargetWorldPosition, "todo: docstring")
  .def("GetTargetWorldRotation", (Urho3D::Quaternion (Urho3D::SmoothedTransform::*)() const) &Urho3D::SmoothedTransform::GetTargetWorldRotation, "todo: docstring")
  .def("IsInProgress", (bool (Urho3D::SmoothedTransform::*)() const) &Urho3D::SmoothedTransform::IsInProgress, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_UnknownComponent(py::class_<Urho3D::UnknownComponent, Urho3D::SharedPtr<Urho3D::UnknownComponent>, Urho3D::Component>& pyclass_Var_Urho3D_UnknownComponent)
{
    // Class UnknownComponent Implementation
pyclass_Var_Urho3D_UnknownComponent
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def("GetType", (Urho3D::StringHash (Urho3D::UnknownComponent::*)() const) &Urho3D::UnknownComponent::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::UnknownComponent::*)() const) &Urho3D::UnknownComponent::GetTypeName, "todo: docstring")
  //.def("GetAttributes", (const Vector<Urho3D::AttributeInfo> * (Urho3D::UnknownComponent::*)() const) &Urho3D::UnknownComponent::GetAttributes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("Load", (bool (Urho3D::UnknownComponent::*)(Urho3D::Deserializer &)) &Urho3D::UnknownComponent::Load, "todo: docstring", py::arg("source"))
  .def("LoadXML", (bool (Urho3D::UnknownComponent::*)(const Urho3D::XMLElement &)) &Urho3D::UnknownComponent::LoadXML, "todo: docstring", py::arg("source"))
  .def("LoadJSON", (bool (Urho3D::UnknownComponent::*)(const Urho3D::JSONValue &)) &Urho3D::UnknownComponent::LoadJSON, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::UnknownComponent::*)(Urho3D::Serializer &) const) &Urho3D::UnknownComponent::Save, "todo: docstring", py::arg("dest"))
  .def("SaveXML", (bool (Urho3D::UnknownComponent::*)(Urho3D::XMLElement &) const) &Urho3D::UnknownComponent::SaveXML, "todo: docstring", py::arg("dest"))
  .def("SaveJSON", (bool (Urho3D::UnknownComponent::*)(Urho3D::JSONValue &) const) &Urho3D::UnknownComponent::SaveJSON, "todo: docstring", py::arg("dest"))
  .def("SetTypeName", (void (Urho3D::UnknownComponent::*)(const Urho3D::String &)) &Urho3D::UnknownComponent::SetTypeName, "todo: docstring", py::arg("typeName"))
  .def("SetType", (void (Urho3D::UnknownComponent::*)(Urho3D::StringHash)) &Urho3D::UnknownComponent::SetType, "todo: docstring", py::arg("typeHash"))
  //.def("GetXMLAttributes", (const Vector<Urho3D::String> & (Urho3D::UnknownComponent::*)() const) &Urho3D::UnknownComponent::GetXMLAttributes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetBinaryAttributes", (const PODVector<unsigned char> & (Urho3D::UnknownComponent::*)() const) &Urho3D::UnknownComponent::GetBinaryAttributes, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetUseXML", (bool (Urho3D::UnknownComponent::*)() const) &Urho3D::UnknownComponent::GetUseXML, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ProgressBar(py::class_<Urho3D::ProgressBar, Urho3D::SharedPtr<Urho3D::ProgressBar>, Urho3D::BorderImage>& pyclass_Var_Urho3D_ProgressBar)
{
    // Class ProgressBar Implementation
pyclass_Var_Urho3D_ProgressBar
  .def("GetType", (Urho3D::StringHash (Urho3D::ProgressBar::*)() const) &Urho3D::ProgressBar::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ProgressBar::*)() const) &Urho3D::ProgressBar::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ProgressBar::*)() const) &Urho3D::ProgressBar::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ProgressBar", (void (Urho3D::ProgressBar::*)()) &Urho3D::ProgressBar::~ProgressBar, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnResize", (void (Urho3D::ProgressBar::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::ProgressBar::OnResize, "todo: docstring", py::arg("newSize"), py::arg("delta"))
  .def("SetOrientation", (void (Urho3D::ProgressBar::*)(Urho3D::Orientation)) &Urho3D::ProgressBar::SetOrientation, "todo: docstring", py::arg("orientation"))
  .def("SetRange", (void (Urho3D::ProgressBar::*)(float)) &Urho3D::ProgressBar::SetRange, "todo: docstring", py::arg("range"))
  .def("SetValue", (void (Urho3D::ProgressBar::*)(float)) &Urho3D::ProgressBar::SetValue, "todo: docstring", py::arg("value"))
  .def("ChangeValue", (void (Urho3D::ProgressBar::*)(float)) &Urho3D::ProgressBar::ChangeValue, "todo: docstring", py::arg("delta"))
  .def("GetOrientation", (Urho3D::Orientation (Urho3D::ProgressBar::*)() const) &Urho3D::ProgressBar::GetOrientation, "todo: docstring")
  .def("GetRange", (float (Urho3D::ProgressBar::*)() const) &Urho3D::ProgressBar::GetRange, "todo: docstring")
  .def("GetValue", (float (Urho3D::ProgressBar::*)() const) &Urho3D::ProgressBar::GetValue, "todo: docstring")
  .def("GetKnob", (Urho3D::BorderImage * (Urho3D::ProgressBar::*)() const) &Urho3D::ProgressBar::GetKnob, "todo: docstring")
  .def("SetLoadingPercentStyle", (void (Urho3D::ProgressBar::*)(const Urho3D::String &)) &Urho3D::ProgressBar::SetLoadingPercentStyle, "todo: docstring", py::arg("style"))
  .def("GetLoadingPercentStyle", (const Urho3D::String & (Urho3D::ProgressBar::*)() const) &Urho3D::ProgressBar::GetLoadingPercentStyle, "todo: docstring")
  .def("SetShowPercentText", (void (Urho3D::ProgressBar::*)(bool)) &Urho3D::ProgressBar::SetShowPercentText, "todo: docstring", py::arg("enable"))
  .def("GetShowPercentText", (bool (Urho3D::ProgressBar::*)() const) &Urho3D::ProgressBar::GetShowPercentText, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Drawable2D(py::class_<Urho3D::Drawable2D, Urho3D::SharedPtr<Urho3D::Drawable2D>, Urho3D::Drawable>& pyclass_Var_Urho3D_Drawable2D)
{
    // Class Drawable2D Implementation
pyclass_Var_Urho3D_Drawable2D
  .def("GetType", (Urho3D::StringHash (Urho3D::Drawable2D::*)() const) &Urho3D::Drawable2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Drawable2D::*)() const) &Urho3D::Drawable2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Drawable2D::*)() const) &Urho3D::Drawable2D::GetTypeInfo, "todo: docstring")
  //.def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
    // Abstract class Drawable2D -> no init
  //.def("~Drawable2D", (void (Urho3D::Drawable2D::*)()) &Urho3D::Drawable2D::~Drawable2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::Drawable2D::*)()) &Urho3D::Drawable2D::OnSetEnabled, "todo: docstring")
  .def("SetLayer", (void (Urho3D::Drawable2D::*)(int)) &Urho3D::Drawable2D::SetLayer, "todo: docstring", py::arg("layer"))
  .def("SetOrderInLayer", (void (Urho3D::Drawable2D::*)(int)) &Urho3D::Drawable2D::SetOrderInLayer, "todo: docstring", py::arg("orderInLayer"))
  .def("GetLayer", (int (Urho3D::Drawable2D::*)() const) &Urho3D::Drawable2D::GetLayer, "todo: docstring")
  .def("GetOrderInLayer", (int (Urho3D::Drawable2D::*)() const) &Urho3D::Drawable2D::GetOrderInLayer, "todo: docstring")
  //.def("GetSourceBatches", (const Vector<Urho3D::SourceBatch2D> & (Urho3D::Drawable2D::*)()) &Urho3D::Drawable2D::GetSourceBatches, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_StaticSprite2D(py::class_<Urho3D::StaticSprite2D, Urho3D::SharedPtr<Urho3D::StaticSprite2D>, Urho3D::Drawable2D>& pyclass_Var_Urho3D_StaticSprite2D)
{
    // Class StaticSprite2D Implementation
pyclass_Var_Urho3D_StaticSprite2D
  .def("GetType", (Urho3D::StringHash (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~StaticSprite2D", (void (Urho3D::StaticSprite2D::*)()) &Urho3D::StaticSprite2D::~StaticSprite2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetSprite", (void (Urho3D::StaticSprite2D::*)(Urho3D::Sprite2D *)) &Urho3D::StaticSprite2D::SetSprite, "todo: docstring", py::arg("sprite"))
  .def("SetDrawRect", (void (Urho3D::StaticSprite2D::*)(const Urho3D::Rect &)) &Urho3D::StaticSprite2D::SetDrawRect, "todo: docstring", py::arg("rect"))
  .def("SetTextureRect", (void (Urho3D::StaticSprite2D::*)(const Urho3D::Rect &)) &Urho3D::StaticSprite2D::SetTextureRect, "todo: docstring", py::arg("rect"))
  .def("SetBlendMode", (void (Urho3D::StaticSprite2D::*)(Urho3D::BlendMode)) &Urho3D::StaticSprite2D::SetBlendMode, "todo: docstring", py::arg("blendMode"))
  .def("SetFlip", (void (Urho3D::StaticSprite2D::*)(bool, bool, bool)) &Urho3D::StaticSprite2D::SetFlip, "todo: docstring", py::arg("flipX"), py::arg("flipY"), py::arg("swapXY")=false)
  .def("SetFlipX", (void (Urho3D::StaticSprite2D::*)(bool)) &Urho3D::StaticSprite2D::SetFlipX, "todo: docstring", py::arg("flipX"))
  .def("SetFlipY", (void (Urho3D::StaticSprite2D::*)(bool)) &Urho3D::StaticSprite2D::SetFlipY, "todo: docstring", py::arg("flipY"))
  .def("SetSwapXY", (void (Urho3D::StaticSprite2D::*)(bool)) &Urho3D::StaticSprite2D::SetSwapXY, "todo: docstring", py::arg("swapXY"))
  .def("SetColor", (void (Urho3D::StaticSprite2D::*)(const Urho3D::Color &)) &Urho3D::StaticSprite2D::SetColor, "todo: docstring", py::arg("color"))
  .def("SetAlpha", (void (Urho3D::StaticSprite2D::*)(float)) &Urho3D::StaticSprite2D::SetAlpha, "todo: docstring", py::arg("alpha"))
  .def("SetUseHotSpot", (void (Urho3D::StaticSprite2D::*)(bool)) &Urho3D::StaticSprite2D::SetUseHotSpot, "todo: docstring", py::arg("useHotSpot"))
  .def("SetUseDrawRect", (void (Urho3D::StaticSprite2D::*)(bool)) &Urho3D::StaticSprite2D::SetUseDrawRect, "todo: docstring", py::arg("useDrawRect"))
  .def("SetUseTextureRect", (void (Urho3D::StaticSprite2D::*)(bool)) &Urho3D::StaticSprite2D::SetUseTextureRect, "todo: docstring", py::arg("useTextureRect"))
  .def("SetHotSpot", (void (Urho3D::StaticSprite2D::*)(const Urho3D::Vector2 &)) &Urho3D::StaticSprite2D::SetHotSpot, "todo: docstring", py::arg("hotspot"))
  .def("SetCustomMaterial", (void (Urho3D::StaticSprite2D::*)(Urho3D::Material *)) &Urho3D::StaticSprite2D::SetCustomMaterial, "todo: docstring", py::arg("customMaterial"))
  .def("GetSprite", (Urho3D::Sprite2D * (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetSprite, "todo: docstring")
  .def("GetDrawRect", (const Urho3D::Rect & (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetDrawRect, "todo: docstring")
  .def("GetTextureRect", (const Urho3D::Rect & (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetTextureRect, "todo: docstring")
  .def("GetBlendMode", (Urho3D::BlendMode (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetBlendMode, "todo: docstring")
  .def("GetFlipX", (bool (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetFlipX, "todo: docstring")
  .def("GetFlipY", (bool (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetFlipY, "todo: docstring")
  .def("GetSwapXY", (bool (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetSwapXY, "todo: docstring")
  .def("GetColor", (const Urho3D::Color & (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetColor, "todo: docstring")
  .def("GetAlpha", (float (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetAlpha, "todo: docstring")
  .def("GetUseHotSpot", (bool (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetUseHotSpot, "todo: docstring")
  .def("GetUseDrawRect", (bool (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetUseDrawRect, "todo: docstring")
  .def("GetUseTextureRect", (bool (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetUseTextureRect, "todo: docstring")
  .def("GetHotSpot", (const Urho3D::Vector2 & (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetHotSpot, "todo: docstring")
  .def("GetCustomMaterial", (Urho3D::Material * (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetCustomMaterial, "todo: docstring")
  .def("SetSpriteAttr", (void (Urho3D::StaticSprite2D::*)(const Urho3D::ResourceRef &)) &Urho3D::StaticSprite2D::SetSpriteAttr, "todo: docstring", py::arg("value"))
  .def("GetSpriteAttr", (Urho3D::ResourceRef (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetSpriteAttr, "todo: docstring")
  .def("SetCustomMaterialAttr", (void (Urho3D::StaticSprite2D::*)(const Urho3D::ResourceRef &)) &Urho3D::StaticSprite2D::SetCustomMaterialAttr, "todo: docstring", py::arg("value"))
  .def("GetCustomMaterialAttr", (Urho3D::ResourceRef (Urho3D::StaticSprite2D::*)() const) &Urho3D::StaticSprite2D::GetCustomMaterialAttr, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_AnimatedSprite2D(py::class_<Urho3D::AnimatedSprite2D, Urho3D::SharedPtr<Urho3D::AnimatedSprite2D>, Urho3D::StaticSprite2D>& pyclass_Var_Urho3D_AnimatedSprite2D)
{
    // Class AnimatedSprite2D Implementation
pyclass_Var_Urho3D_AnimatedSprite2D
  .def("GetType", (Urho3D::StringHash (Urho3D::AnimatedSprite2D::*)() const) &Urho3D::AnimatedSprite2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::AnimatedSprite2D::*)() const) &Urho3D::AnimatedSprite2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::AnimatedSprite2D::*)() const) &Urho3D::AnimatedSprite2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~AnimatedSprite2D", (void (Urho3D::AnimatedSprite2D::*)()) &Urho3D::AnimatedSprite2D::~AnimatedSprite2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::AnimatedSprite2D::*)()) &Urho3D::AnimatedSprite2D::OnSetEnabled, "todo: docstring")
  .def("SetAnimationSet", (void (Urho3D::AnimatedSprite2D::*)(Urho3D::AnimationSet2D *)) &Urho3D::AnimatedSprite2D::SetAnimationSet, "todo: docstring", py::arg("animationSet"))
  .def("SetEntity", (void (Urho3D::AnimatedSprite2D::*)(const Urho3D::String &)) &Urho3D::AnimatedSprite2D::SetEntity, "todo: docstring", py::arg("entity"))
  //.def("SetAnimation", (void (Urho3D::AnimatedSprite2D::*)(const Urho3D::String &, LoopMode2D)) &Urho3D::AnimatedSprite2D::SetAnimation, "todo: docstring", py::arg("name"), py::arg("loopMode")=LM_DEFAULT)
    //['Urho3D::String', 'LoopMode2D']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("SetLoopMode", (void (Urho3D::AnimatedSprite2D::*)(LoopMode2D)) &Urho3D::AnimatedSprite2D::SetLoopMode, "todo: docstring", py::arg("loopMode"))
    //['LoopMode2D']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetSpeed", (void (Urho3D::AnimatedSprite2D::*)(float)) &Urho3D::AnimatedSprite2D::SetSpeed, "todo: docstring", py::arg("speed"))
  .def("GetAnimationSet", (Urho3D::AnimationSet2D * (Urho3D::AnimatedSprite2D::*)() const) &Urho3D::AnimatedSprite2D::GetAnimationSet, "todo: docstring")
  .def("GetEntity", (const Urho3D::String & (Urho3D::AnimatedSprite2D::*)() const) &Urho3D::AnimatedSprite2D::GetEntity, "todo: docstring")
  .def("GetAnimation", (const Urho3D::String & (Urho3D::AnimatedSprite2D::*)() const) &Urho3D::AnimatedSprite2D::GetAnimation, "todo: docstring")
  //.def("GetLoopMode", (LoopMode2D (Urho3D::AnimatedSprite2D::*)() const) &Urho3D::AnimatedSprite2D::GetLoopMode, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetSpeed", (float (Urho3D::AnimatedSprite2D::*)() const) &Urho3D::AnimatedSprite2D::GetSpeed, "todo: docstring")
  .def("SetAnimationSetAttr", (void (Urho3D::AnimatedSprite2D::*)(const Urho3D::ResourceRef &)) &Urho3D::AnimatedSprite2D::SetAnimationSetAttr, "todo: docstring", py::arg("value"))
  .def("GetAnimationSetAttr", (Urho3D::ResourceRef (Urho3D::AnimatedSprite2D::*)() const) &Urho3D::AnimatedSprite2D::GetAnimationSetAttr, "todo: docstring")
  .def("SetAnimationAttr", (void (Urho3D::AnimatedSprite2D::*)(const Urho3D::String &)) &Urho3D::AnimatedSprite2D::SetAnimationAttr, "todo: docstring", py::arg("name"))
// Class Variables:
;
}

void Implement_Urho3D_CollisionShape2D(py::class_<Urho3D::CollisionShape2D, Urho3D::SharedPtr<Urho3D::CollisionShape2D>, Urho3D::Component>& pyclass_Var_Urho3D_CollisionShape2D)
{
    // Class CollisionShape2D Implementation
pyclass_Var_Urho3D_CollisionShape2D
  .def("GetType", (Urho3D::StringHash (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetTypeInfo, "todo: docstring")
  //.def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
    // Abstract class CollisionShape2D -> no init
  //.def("~CollisionShape2D", (void (Urho3D::CollisionShape2D::*)()) &Urho3D::CollisionShape2D::~CollisionShape2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::CollisionShape2D::*)()) &Urho3D::CollisionShape2D::OnSetEnabled, "todo: docstring")
  .def("SetTrigger", (void (Urho3D::CollisionShape2D::*)(bool)) &Urho3D::CollisionShape2D::SetTrigger, "todo: docstring", py::arg("trigger"))
  .def("SetCategoryBits", (void (Urho3D::CollisionShape2D::*)(int)) &Urho3D::CollisionShape2D::SetCategoryBits, "todo: docstring", py::arg("categoryBits"))
  .def("SetMaskBits", (void (Urho3D::CollisionShape2D::*)(int)) &Urho3D::CollisionShape2D::SetMaskBits, "todo: docstring", py::arg("maskBits"))
  .def("SetGroupIndex", (void (Urho3D::CollisionShape2D::*)(int)) &Urho3D::CollisionShape2D::SetGroupIndex, "todo: docstring", py::arg("groupIndex"))
  .def("SetDensity", (void (Urho3D::CollisionShape2D::*)(float)) &Urho3D::CollisionShape2D::SetDensity, "todo: docstring", py::arg("density"))
  .def("SetFriction", (void (Urho3D::CollisionShape2D::*)(float)) &Urho3D::CollisionShape2D::SetFriction, "todo: docstring", py::arg("friction"))
  .def("SetRestitution", (void (Urho3D::CollisionShape2D::*)(float)) &Urho3D::CollisionShape2D::SetRestitution, "todo: docstring", py::arg("restitution"))
  .def("CreateFixture", (void (Urho3D::CollisionShape2D::*)()) &Urho3D::CollisionShape2D::CreateFixture, "todo: docstring")
  .def("ReleaseFixture", (void (Urho3D::CollisionShape2D::*)()) &Urho3D::CollisionShape2D::ReleaseFixture, "todo: docstring")
  .def("IsTrigger", (bool (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::IsTrigger, "todo: docstring")
  .def("GetCategoryBits", (int (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetCategoryBits, "todo: docstring")
  .def("GetMaskBits", (int (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetMaskBits, "todo: docstring")
  .def("GetGroupIndex", (int (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetGroupIndex, "todo: docstring")
  .def("GetDensity", (float (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetDensity, "todo: docstring")
  .def("GetFriction", (float (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetFriction, "todo: docstring")
  .def("GetRestitution", (float (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetRestitution, "todo: docstring")
  .def("GetMass", (float (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetMass, "todo: docstring")
  .def("GetInertia", (float (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetInertia, "todo: docstring")
  .def("GetMassCenter", (Urho3D::Vector2 (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetMassCenter, "todo: docstring")
  //.def("GetFixture", (b2Fixture * (Urho3D::CollisionShape2D::*)() const) &Urho3D::CollisionShape2D::GetFixture, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_CollisionChain2D(py::class_<Urho3D::CollisionChain2D, Urho3D::SharedPtr<Urho3D::CollisionChain2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionChain2D)
{
    // Class CollisionChain2D Implementation
pyclass_Var_Urho3D_CollisionChain2D
  .def("GetType", (Urho3D::StringHash (Urho3D::CollisionChain2D::*)() const) &Urho3D::CollisionChain2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CollisionChain2D::*)() const) &Urho3D::CollisionChain2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CollisionChain2D::*)() const) &Urho3D::CollisionChain2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CollisionChain2D", (void (Urho3D::CollisionChain2D::*)()) &Urho3D::CollisionChain2D::~CollisionChain2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetLoop", (void (Urho3D::CollisionChain2D::*)(bool)) &Urho3D::CollisionChain2D::SetLoop, "todo: docstring", py::arg("loop"))
  .def("SetVertexCount", (void (Urho3D::CollisionChain2D::*)(unsigned int)) &Urho3D::CollisionChain2D::SetVertexCount, "todo: docstring", py::arg("count"))
  .def("SetVertex", (void (Urho3D::CollisionChain2D::*)(unsigned int, const Urho3D::Vector2 &)) &Urho3D::CollisionChain2D::SetVertex, "todo: docstring", py::arg("index"), py::arg("vertex"))
  //.def("SetVertices", (void (Urho3D::CollisionChain2D::*)(const Urho3D::PODVector<Urho3D::Vector2> &)) &Urho3D::CollisionChain2D::SetVertices, "todo: docstring", py::arg("vertices"))
    //['Urho3D::PODVector<Urho3D::Vector2>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetVerticesAttr", (void (Urho3D::CollisionChain2D::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::CollisionChain2D::SetVerticesAttr, "todo: docstring", py::arg("value"))
  .def("GetLoop", (bool (Urho3D::CollisionChain2D::*)() const) &Urho3D::CollisionChain2D::GetLoop, "todo: docstring")
  .def("GetVertexCount", (unsigned int (Urho3D::CollisionChain2D::*)() const) &Urho3D::CollisionChain2D::GetVertexCount, "todo: docstring")
  .def("GetVertex", (const Urho3D::Vector2 & (Urho3D::CollisionChain2D::*)(unsigned int) const) &Urho3D::CollisionChain2D::GetVertex, "todo: docstring", py::arg("index"))
  //.def("GetVertices", (const PODVector<Urho3D::Vector2> & (Urho3D::CollisionChain2D::*)() const) &Urho3D::CollisionChain2D::GetVertices, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetVerticesAttr", (PODVector<unsigned char> (Urho3D::CollisionChain2D::*)() const) &Urho3D::CollisionChain2D::GetVerticesAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_CollisionEdge2D(py::class_<Urho3D::CollisionEdge2D, Urho3D::SharedPtr<Urho3D::CollisionEdge2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionEdge2D)
{
    // Class CollisionEdge2D Implementation
pyclass_Var_Urho3D_CollisionEdge2D
  .def("GetType", (Urho3D::StringHash (Urho3D::CollisionEdge2D::*)() const) &Urho3D::CollisionEdge2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CollisionEdge2D::*)() const) &Urho3D::CollisionEdge2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CollisionEdge2D::*)() const) &Urho3D::CollisionEdge2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CollisionEdge2D", (void (Urho3D::CollisionEdge2D::*)()) &Urho3D::CollisionEdge2D::~CollisionEdge2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetVertex1", (void (Urho3D::CollisionEdge2D::*)(const Urho3D::Vector2 &)) &Urho3D::CollisionEdge2D::SetVertex1, "todo: docstring", py::arg("vertex"))
  .def("SetVertex2", (void (Urho3D::CollisionEdge2D::*)(const Urho3D::Vector2 &)) &Urho3D::CollisionEdge2D::SetVertex2, "todo: docstring", py::arg("vertex"))
  .def("SetVertices", (void (Urho3D::CollisionEdge2D::*)(const Urho3D::Vector2 &, const Urho3D::Vector2 &)) &Urho3D::CollisionEdge2D::SetVertices, "todo: docstring", py::arg("vertex1"), py::arg("vertex2"))
  .def("GetVertex1", (const Urho3D::Vector2 & (Urho3D::CollisionEdge2D::*)() const) &Urho3D::CollisionEdge2D::GetVertex1, "todo: docstring")
  .def("GetVertex2", (const Urho3D::Vector2 & (Urho3D::CollisionEdge2D::*)() const) &Urho3D::CollisionEdge2D::GetVertex2, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Constraint2D(py::class_<Urho3D::Constraint2D, Urho3D::SharedPtr<Urho3D::Constraint2D>, Urho3D::Component>& pyclass_Var_Urho3D_Constraint2D)
{
    // Class Constraint2D Implementation
pyclass_Var_Urho3D_Constraint2D
  .def("GetType", (Urho3D::StringHash (Urho3D::Constraint2D::*)() const) &Urho3D::Constraint2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Constraint2D::*)() const) &Urho3D::Constraint2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Constraint2D::*)() const) &Urho3D::Constraint2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Constraint2D", (void (Urho3D::Constraint2D::*)()) &Urho3D::Constraint2D::~Constraint2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::Constraint2D::*)()) &Urho3D::Constraint2D::ApplyAttributes, "todo: docstring")
  .def("OnSetEnabled", (void (Urho3D::Constraint2D::*)()) &Urho3D::Constraint2D::OnSetEnabled, "todo: docstring")
  .def("CreateJoint", (void (Urho3D::Constraint2D::*)()) &Urho3D::Constraint2D::CreateJoint, "todo: docstring")
  .def("ReleaseJoint", (void (Urho3D::Constraint2D::*)()) &Urho3D::Constraint2D::ReleaseJoint, "todo: docstring")
  .def("SetOtherBody", (void (Urho3D::Constraint2D::*)(Urho3D::RigidBody2D *)) &Urho3D::Constraint2D::SetOtherBody, "todo: docstring", py::arg("body"))
  .def("SetCollideConnected", (void (Urho3D::Constraint2D::*)(bool)) &Urho3D::Constraint2D::SetCollideConnected, "todo: docstring", py::arg("collideConnected"))
  .def("SetAttachedConstraint", (void (Urho3D::Constraint2D::*)(Urho3D::Constraint2D *)) &Urho3D::Constraint2D::SetAttachedConstraint, "todo: docstring", py::arg("constraint"))
  .def("GetOwnerBody", (Urho3D::RigidBody2D * (Urho3D::Constraint2D::*)() const) &Urho3D::Constraint2D::GetOwnerBody, "todo: docstring")
  .def("GetOtherBody", (Urho3D::RigidBody2D * (Urho3D::Constraint2D::*)() const) &Urho3D::Constraint2D::GetOtherBody, "todo: docstring")
  .def("GetCollideConnected", (bool (Urho3D::Constraint2D::*)() const) &Urho3D::Constraint2D::GetCollideConnected, "todo: docstring")
  .def("GetAttachedConstraint", (Urho3D::Constraint2D * (Urho3D::Constraint2D::*)() const) &Urho3D::Constraint2D::GetAttachedConstraint, "todo: docstring")
  //.def("GetJoint", (b2Joint * (Urho3D::Constraint2D::*)() const) &Urho3D::Constraint2D::GetJoint, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_ConstraintFriction2D(py::class_<Urho3D::ConstraintFriction2D, Urho3D::SharedPtr<Urho3D::ConstraintFriction2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintFriction2D)
{
    // Class ConstraintFriction2D Implementation
pyclass_Var_Urho3D_ConstraintFriction2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintFriction2D::*)() const) &Urho3D::ConstraintFriction2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintFriction2D::*)() const) &Urho3D::ConstraintFriction2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintFriction2D::*)() const) &Urho3D::ConstraintFriction2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintFriction2D", (void (Urho3D::ConstraintFriction2D::*)()) &Urho3D::ConstraintFriction2D::~ConstraintFriction2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetAnchor", (void (Urho3D::ConstraintFriction2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintFriction2D::SetAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetMaxForce", (void (Urho3D::ConstraintFriction2D::*)(float)) &Urho3D::ConstraintFriction2D::SetMaxForce, "todo: docstring", py::arg("maxForce"))
  .def("SetMaxTorque", (void (Urho3D::ConstraintFriction2D::*)(float)) &Urho3D::ConstraintFriction2D::SetMaxTorque, "todo: docstring", py::arg("maxTorque"))
  .def("GetAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintFriction2D::*)() const) &Urho3D::ConstraintFriction2D::GetAnchor, "todo: docstring")
  .def("GetMaxForce", (float (Urho3D::ConstraintFriction2D::*)() const) &Urho3D::ConstraintFriction2D::GetMaxForce, "todo: docstring")
  .def("GetMaxTorque", (float (Urho3D::ConstraintFriction2D::*)() const) &Urho3D::ConstraintFriction2D::GetMaxTorque, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ConstraintMotor2D(py::class_<Urho3D::ConstraintMotor2D, Urho3D::SharedPtr<Urho3D::ConstraintMotor2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintMotor2D)
{
    // Class ConstraintMotor2D Implementation
pyclass_Var_Urho3D_ConstraintMotor2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintMotor2D::*)() const) &Urho3D::ConstraintMotor2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintMotor2D::*)() const) &Urho3D::ConstraintMotor2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintMotor2D::*)() const) &Urho3D::ConstraintMotor2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintMotor2D", (void (Urho3D::ConstraintMotor2D::*)()) &Urho3D::ConstraintMotor2D::~ConstraintMotor2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetLinearOffset", (void (Urho3D::ConstraintMotor2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintMotor2D::SetLinearOffset, "todo: docstring", py::arg("linearOffset"))
  .def("SetAngularOffset", (void (Urho3D::ConstraintMotor2D::*)(float)) &Urho3D::ConstraintMotor2D::SetAngularOffset, "todo: docstring", py::arg("angularOffset"))
  .def("SetMaxForce", (void (Urho3D::ConstraintMotor2D::*)(float)) &Urho3D::ConstraintMotor2D::SetMaxForce, "todo: docstring", py::arg("maxForce"))
  .def("SetMaxTorque", (void (Urho3D::ConstraintMotor2D::*)(float)) &Urho3D::ConstraintMotor2D::SetMaxTorque, "todo: docstring", py::arg("maxTorque"))
  .def("SetCorrectionFactor", (void (Urho3D::ConstraintMotor2D::*)(float)) &Urho3D::ConstraintMotor2D::SetCorrectionFactor, "todo: docstring", py::arg("correctionFactor"))
  .def("GetLinearOffset", (const Urho3D::Vector2 & (Urho3D::ConstraintMotor2D::*)() const) &Urho3D::ConstraintMotor2D::GetLinearOffset, "todo: docstring")
  .def("GetAngularOffset", (float (Urho3D::ConstraintMotor2D::*)() const) &Urho3D::ConstraintMotor2D::GetAngularOffset, "todo: docstring")
  .def("GetMaxForce", (float (Urho3D::ConstraintMotor2D::*)() const) &Urho3D::ConstraintMotor2D::GetMaxForce, "todo: docstring")
  .def("GetMaxTorque", (float (Urho3D::ConstraintMotor2D::*)() const) &Urho3D::ConstraintMotor2D::GetMaxTorque, "todo: docstring")
  .def("GetCorrectionFactor", (float (Urho3D::ConstraintMotor2D::*)() const) &Urho3D::ConstraintMotor2D::GetCorrectionFactor, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ConstraintPrismatic2D(py::class_<Urho3D::ConstraintPrismatic2D, Urho3D::SharedPtr<Urho3D::ConstraintPrismatic2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintPrismatic2D)
{
    // Class ConstraintPrismatic2D Implementation
pyclass_Var_Urho3D_ConstraintPrismatic2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintPrismatic2D", (void (Urho3D::ConstraintPrismatic2D::*)()) &Urho3D::ConstraintPrismatic2D::~ConstraintPrismatic2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetAnchor", (void (Urho3D::ConstraintPrismatic2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintPrismatic2D::SetAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetAxis", (void (Urho3D::ConstraintPrismatic2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintPrismatic2D::SetAxis, "todo: docstring", py::arg("axis"))
  .def("SetEnableLimit", (void (Urho3D::ConstraintPrismatic2D::*)(bool)) &Urho3D::ConstraintPrismatic2D::SetEnableLimit, "todo: docstring", py::arg("enableLimit"))
  .def("SetLowerTranslation", (void (Urho3D::ConstraintPrismatic2D::*)(float)) &Urho3D::ConstraintPrismatic2D::SetLowerTranslation, "todo: docstring", py::arg("lowerTranslation"))
  .def("SetUpperTranslation", (void (Urho3D::ConstraintPrismatic2D::*)(float)) &Urho3D::ConstraintPrismatic2D::SetUpperTranslation, "todo: docstring", py::arg("upperTranslation"))
  .def("SetEnableMotor", (void (Urho3D::ConstraintPrismatic2D::*)(bool)) &Urho3D::ConstraintPrismatic2D::SetEnableMotor, "todo: docstring", py::arg("enableMotor"))
  .def("SetMaxMotorForce", (void (Urho3D::ConstraintPrismatic2D::*)(float)) &Urho3D::ConstraintPrismatic2D::SetMaxMotorForce, "todo: docstring", py::arg("maxMotorForce"))
  .def("SetMotorSpeed", (void (Urho3D::ConstraintPrismatic2D::*)(float)) &Urho3D::ConstraintPrismatic2D::SetMotorSpeed, "todo: docstring", py::arg("motorSpeed"))
  .def("GetAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetAnchor, "todo: docstring")
  .def("GetAxis", (const Urho3D::Vector2 & (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetAxis, "todo: docstring")
  .def("GetEnableLimit", (bool (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetEnableLimit, "todo: docstring")
  .def("GetLowerTranslation", (float (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetLowerTranslation, "todo: docstring")
  .def("GetUpperTranslation", (float (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetUpperTranslation, "todo: docstring")
  .def("GetEnableMotor", (bool (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetEnableMotor, "todo: docstring")
  .def("GetMaxMotorForce", (float (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetMaxMotorForce, "todo: docstring")
  .def("GetMotorSpeed", (float (Urho3D::ConstraintPrismatic2D::*)() const) &Urho3D::ConstraintPrismatic2D::GetMotorSpeed, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ConstraintRevolute2D(py::class_<Urho3D::ConstraintRevolute2D, Urho3D::SharedPtr<Urho3D::ConstraintRevolute2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintRevolute2D)
{
    // Class ConstraintRevolute2D Implementation
pyclass_Var_Urho3D_ConstraintRevolute2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintRevolute2D", (void (Urho3D::ConstraintRevolute2D::*)()) &Urho3D::ConstraintRevolute2D::~ConstraintRevolute2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetAnchor", (void (Urho3D::ConstraintRevolute2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintRevolute2D::SetAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetEnableLimit", (void (Urho3D::ConstraintRevolute2D::*)(bool)) &Urho3D::ConstraintRevolute2D::SetEnableLimit, "todo: docstring", py::arg("enableLimit"))
  .def("SetLowerAngle", (void (Urho3D::ConstraintRevolute2D::*)(float)) &Urho3D::ConstraintRevolute2D::SetLowerAngle, "todo: docstring", py::arg("lowerAngle"))
  .def("SetUpperAngle", (void (Urho3D::ConstraintRevolute2D::*)(float)) &Urho3D::ConstraintRevolute2D::SetUpperAngle, "todo: docstring", py::arg("upperAngle"))
  .def("SetEnableMotor", (void (Urho3D::ConstraintRevolute2D::*)(bool)) &Urho3D::ConstraintRevolute2D::SetEnableMotor, "todo: docstring", py::arg("enableMotor"))
  .def("SetMotorSpeed", (void (Urho3D::ConstraintRevolute2D::*)(float)) &Urho3D::ConstraintRevolute2D::SetMotorSpeed, "todo: docstring", py::arg("motorSpeed"))
  .def("SetMaxMotorTorque", (void (Urho3D::ConstraintRevolute2D::*)(float)) &Urho3D::ConstraintRevolute2D::SetMaxMotorTorque, "todo: docstring", py::arg("maxMotorTorque"))
  .def("GetAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetAnchor, "todo: docstring")
  .def("GetEnableLimit", (bool (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetEnableLimit, "todo: docstring")
  .def("GetLowerAngle", (float (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetLowerAngle, "todo: docstring")
  .def("GetUpperAngle", (float (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetUpperAngle, "todo: docstring")
  .def("GetEnableMotor", (bool (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetEnableMotor, "todo: docstring")
  .def("GetMotorSpeed", (float (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetMotorSpeed, "todo: docstring")
  .def("GetMaxMotorTorque", (float (Urho3D::ConstraintRevolute2D::*)() const) &Urho3D::ConstraintRevolute2D::GetMaxMotorTorque, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ConstraintWeld2D(py::class_<Urho3D::ConstraintWeld2D, Urho3D::SharedPtr<Urho3D::ConstraintWeld2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintWeld2D)
{
    // Class ConstraintWeld2D Implementation
pyclass_Var_Urho3D_ConstraintWeld2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintWeld2D::*)() const) &Urho3D::ConstraintWeld2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintWeld2D::*)() const) &Urho3D::ConstraintWeld2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintWeld2D::*)() const) &Urho3D::ConstraintWeld2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintWeld2D", (void (Urho3D::ConstraintWeld2D::*)()) &Urho3D::ConstraintWeld2D::~ConstraintWeld2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetAnchor", (void (Urho3D::ConstraintWeld2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintWeld2D::SetAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetFrequencyHz", (void (Urho3D::ConstraintWeld2D::*)(float)) &Urho3D::ConstraintWeld2D::SetFrequencyHz, "todo: docstring", py::arg("frequencyHz"))
  .def("SetDampingRatio", (void (Urho3D::ConstraintWeld2D::*)(float)) &Urho3D::ConstraintWeld2D::SetDampingRatio, "todo: docstring", py::arg("dampingRatio"))
  .def("GetAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintWeld2D::*)() const) &Urho3D::ConstraintWeld2D::GetAnchor, "todo: docstring")
  .def("GetFrequencyHz", (float (Urho3D::ConstraintWeld2D::*)() const) &Urho3D::ConstraintWeld2D::GetFrequencyHz, "todo: docstring")
  .def("GetDampingRatio", (float (Urho3D::ConstraintWeld2D::*)() const) &Urho3D::ConstraintWeld2D::GetDampingRatio, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ParticleEffect2D(py::class_<Urho3D::ParticleEffect2D, Urho3D::SharedPtr<Urho3D::ParticleEffect2D>, Urho3D::Resource>& pyclass_Var_Urho3D_ParticleEffect2D)
{
    // Class ParticleEffect2D Implementation
pyclass_Var_Urho3D_ParticleEffect2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ParticleEffect2D", (void (Urho3D::ParticleEffect2D::*)()) &Urho3D::ParticleEffect2D::~ParticleEffect2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::ParticleEffect2D::*)(Urho3D::Deserializer &)) &Urho3D::ParticleEffect2D::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::ParticleEffect2D::*)()) &Urho3D::ParticleEffect2D::EndLoad, "todo: docstring")
  .def("Save", (bool (Urho3D::ParticleEffect2D::*)(Urho3D::Serializer &) const) &Urho3D::ParticleEffect2D::Save, "todo: docstring", py::arg("dest"))
  .def("SetSprite", (void (Urho3D::ParticleEffect2D::*)(Urho3D::Sprite2D *)) &Urho3D::ParticleEffect2D::SetSprite, "todo: docstring", py::arg("sprite"))
  .def("SetSourcePositionVariance", (void (Urho3D::ParticleEffect2D::*)(const Urho3D::Vector2 &)) &Urho3D::ParticleEffect2D::SetSourcePositionVariance, "todo: docstring", py::arg("sourcePositionVariance"))
  .def("SetSpeed", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetSpeed, "todo: docstring", py::arg("speed"))
  .def("SetSpeedVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetSpeedVariance, "todo: docstring", py::arg("speedVariance"))
  .def("SetParticleLifeSpan", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetParticleLifeSpan, "todo: docstring", py::arg("particleLifeSpan"))
  .def("SetParticleLifespanVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetParticleLifespanVariance, "todo: docstring", py::arg("particleLifespanVariance"))
  .def("SetAngle", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetAngle, "todo: docstring", py::arg("angle"))
  .def("SetAngleVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetAngleVariance, "todo: docstring", py::arg("angleVariance"))
  .def("SetGravity", (void (Urho3D::ParticleEffect2D::*)(const Urho3D::Vector2 &)) &Urho3D::ParticleEffect2D::SetGravity, "todo: docstring", py::arg("gravity"))
  .def("SetRadialAcceleration", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetRadialAcceleration, "todo: docstring", py::arg("radialAcceleration"))
  .def("SetTangentialAcceleration", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetTangentialAcceleration, "todo: docstring", py::arg("tangentialAcceleration"))
  .def("SetRadialAccelVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetRadialAccelVariance, "todo: docstring", py::arg("radialAccelVariance"))
  .def("SetTangentialAccelVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetTangentialAccelVariance, "todo: docstring", py::arg("tangentialAccelVariance"))
  .def("SetStartColor", (void (Urho3D::ParticleEffect2D::*)(const Urho3D::Color &)) &Urho3D::ParticleEffect2D::SetStartColor, "todo: docstring", py::arg("startColor"))
  .def("SetStartColorVariance", (void (Urho3D::ParticleEffect2D::*)(const Urho3D::Color &)) &Urho3D::ParticleEffect2D::SetStartColorVariance, "todo: docstring", py::arg("startColorVariance"))
  .def("SetFinishColor", (void (Urho3D::ParticleEffect2D::*)(const Urho3D::Color &)) &Urho3D::ParticleEffect2D::SetFinishColor, "todo: docstring", py::arg("finishColor"))
  .def("SetFinishColorVariance", (void (Urho3D::ParticleEffect2D::*)(const Urho3D::Color &)) &Urho3D::ParticleEffect2D::SetFinishColorVariance, "todo: docstring", py::arg("finishColorVariance"))
  .def("SetMaxParticles", (void (Urho3D::ParticleEffect2D::*)(int)) &Urho3D::ParticleEffect2D::SetMaxParticles, "todo: docstring", py::arg("maxParticles"))
  .def("SetStartParticleSize", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetStartParticleSize, "todo: docstring", py::arg("startParticleSize"))
  .def("SetStartParticleSizeVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetStartParticleSizeVariance, "todo: docstring", py::arg("startParticleSizeVariance"))
  .def("SetFinishParticleSize", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetFinishParticleSize, "todo: docstring", py::arg("finishParticleSize"))
  .def("SetFinishParticleSizeVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetFinishParticleSizeVariance, "todo: docstring", py::arg("finishParticleSizeVariance"))
  .def("SetDuration", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetDuration, "todo: docstring", py::arg("duration"))
  .def("SetEmitterType", (void (Urho3D::ParticleEffect2D::*)(Urho3D::EmitterType2D)) &Urho3D::ParticleEffect2D::SetEmitterType, "todo: docstring", py::arg("emitterType"))
  .def("SetMaxRadius", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetMaxRadius, "todo: docstring", py::arg("maxRadius"))
  .def("SetMaxRadiusVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetMaxRadiusVariance, "todo: docstring", py::arg("maxRadiusVariance"))
  .def("SetMinRadius", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetMinRadius, "todo: docstring", py::arg("minRadius"))
  .def("SetMinRadiusVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetMinRadiusVariance, "todo: docstring", py::arg("minRadiusVariance"))
  .def("SetRotatePerSecond", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetRotatePerSecond, "todo: docstring", py::arg("rotatePerSecond"))
  .def("SetRotatePerSecondVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetRotatePerSecondVariance, "todo: docstring", py::arg("rotatePerSecondVariance"))
  .def("SetBlendMode", (void (Urho3D::ParticleEffect2D::*)(Urho3D::BlendMode)) &Urho3D::ParticleEffect2D::SetBlendMode, "todo: docstring", py::arg("blendMode"))
  .def("SetRotationStart", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetRotationStart, "todo: docstring", py::arg("rotationStart"))
  .def("SetRotationStartVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetRotationStartVariance, "todo: docstring", py::arg("rotationStartVariance"))
  .def("SetRotationEnd", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetRotationEnd, "todo: docstring", py::arg("rotationEnd"))
  .def("SetRotationEndVariance", (void (Urho3D::ParticleEffect2D::*)(float)) &Urho3D::ParticleEffect2D::SetRotationEndVariance, "todo: docstring", py::arg("rotationEndVariance"))
  //.def("Clone", (SharedPtr<Urho3D::ParticleEffect2D> (Urho3D::ParticleEffect2D::*)(const Urho3D::String &) const) &Urho3D::ParticleEffect2D::Clone, "todo: docstring", py::arg("cloneName")=String::EMPTY)
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetSprite", (Urho3D::Sprite2D * (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetSprite, "todo: docstring")
  .def("GetSourcePositionVariance", (const Urho3D::Vector2 & (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetSourcePositionVariance, "todo: docstring")
  .def("GetSpeed", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetSpeed, "todo: docstring")
  .def("GetSpeedVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetSpeedVariance, "todo: docstring")
  .def("GetParticleLifeSpan", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetParticleLifeSpan, "todo: docstring")
  .def("GetParticleLifespanVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetParticleLifespanVariance, "todo: docstring")
  .def("GetAngle", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetAngle, "todo: docstring")
  .def("GetAngleVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetAngleVariance, "todo: docstring")
  .def("GetGravity", (const Urho3D::Vector2 & (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetGravity, "todo: docstring")
  .def("GetRadialAcceleration", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetRadialAcceleration, "todo: docstring")
  .def("GetTangentialAcceleration", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetTangentialAcceleration, "todo: docstring")
  .def("GetRadialAccelVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetRadialAccelVariance, "todo: docstring")
  .def("GetTangentialAccelVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetTangentialAccelVariance, "todo: docstring")
  .def("GetStartColor", (const Urho3D::Color & (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetStartColor, "todo: docstring")
  .def("GetStartColorVariance", (const Urho3D::Color & (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetStartColorVariance, "todo: docstring")
  .def("GetFinishColor", (const Urho3D::Color & (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetFinishColor, "todo: docstring")
  .def("GetFinishColorVariance", (const Urho3D::Color & (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetFinishColorVariance, "todo: docstring")
  .def("GetMaxParticles", (int (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetMaxParticles, "todo: docstring")
  .def("GetStartParticleSize", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetStartParticleSize, "todo: docstring")
  .def("GetStartParticleSizeVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetStartParticleSizeVariance, "todo: docstring")
  .def("GetFinishParticleSize", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetFinishParticleSize, "todo: docstring")
  .def("GetFinishParticleSizeVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetFinishParticleSizeVariance, "todo: docstring")
  .def("GetDuration", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetDuration, "todo: docstring")
  .def("GetEmitterType", (Urho3D::EmitterType2D (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetEmitterType, "todo: docstring")
  .def("GetMaxRadius", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetMaxRadius, "todo: docstring")
  .def("GetMaxRadiusVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetMaxRadiusVariance, "todo: docstring")
  .def("GetMinRadius", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetMinRadius, "todo: docstring")
  .def("GetMinRadiusVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetMinRadiusVariance, "todo: docstring")
  .def("GetRotatePerSecond", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetRotatePerSecond, "todo: docstring")
  .def("GetRotatePerSecondVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetRotatePerSecondVariance, "todo: docstring")
  .def("GetBlendMode", (Urho3D::BlendMode (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetBlendMode, "todo: docstring")
  .def("GetRotationStart", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetRotationStart, "todo: docstring")
  .def("GetRotationStartVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetRotationStartVariance, "todo: docstring")
  .def("GetRotationEnd", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetRotationEnd, "todo: docstring")
  .def("GetRotationEndVariance", (float (Urho3D::ParticleEffect2D::*)() const) &Urho3D::ParticleEffect2D::GetRotationEndVariance, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_StretchableSprite2D(py::class_<Urho3D::StretchableSprite2D, Urho3D::SharedPtr<Urho3D::StretchableSprite2D>, Urho3D::StaticSprite2D>& pyclass_Var_Urho3D_StretchableSprite2D)
{
    // Class StretchableSprite2D Implementation
pyclass_Var_Urho3D_StretchableSprite2D
  .def("GetType", (Urho3D::StringHash (Urho3D::StretchableSprite2D::*)() const) &Urho3D::StretchableSprite2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::StretchableSprite2D::*)() const) &Urho3D::StretchableSprite2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::StretchableSprite2D::*)() const) &Urho3D::StretchableSprite2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def("SetBorder", (void (Urho3D::StretchableSprite2D::*)(const Urho3D::IntRect &)) &Urho3D::StretchableSprite2D::SetBorder, "todo: docstring", py::arg("border"))
  .def("GetBorder", (const Urho3D::IntRect & (Urho3D::StretchableSprite2D::*)() const) &Urho3D::StretchableSprite2D::GetBorder, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_VectorBuffer(py::class_<Urho3D::VectorBuffer, Urho3D::ExternalPtr<Urho3D::VectorBuffer>, Urho3D::AbstractFile>& pyclass_Var_Urho3D_VectorBuffer)
{
    // Class VectorBuffer Implementation
pyclass_Var_Urho3D_VectorBuffer
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::PODVector<unsigned char> &>(), "todo: constructor docstring")
  .def(py::init<const void *, unsigned int>(), "todo: constructor docstring")
  .def(py::init<Urho3D::Deserializer &, unsigned int>(), "todo: constructor docstring")
  .def("Read", (unsigned int (Urho3D::VectorBuffer::*)(void *, unsigned int)) &Urho3D::VectorBuffer::Read, "todo: docstring", py::arg("dest"), py::arg("size"))
  .def("Seek", (unsigned int (Urho3D::VectorBuffer::*)(unsigned int)) &Urho3D::VectorBuffer::Seek, "todo: docstring", py::arg("position"))
  .def("Write", (unsigned int (Urho3D::VectorBuffer::*)(const void *, unsigned int)) &Urho3D::VectorBuffer::Write, "todo: docstring", py::arg("data"), py::arg("size"))
  .def("SetData", (void (Urho3D::VectorBuffer::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::VectorBuffer::SetData, "todo: docstring", py::arg("data"))
  .def("SetData", (void (Urho3D::VectorBuffer::*)(const void *, unsigned int)) &Urho3D::VectorBuffer::SetData, "todo: docstring", py::arg("data"), py::arg("size"))
  .def("SetData", (void (Urho3D::VectorBuffer::*)(Urho3D::Deserializer &, unsigned int)) &Urho3D::VectorBuffer::SetData, "todo: docstring", py::arg("source"), py::arg("size"))
  .def("Clear", (void (Urho3D::VectorBuffer::*)()) &Urho3D::VectorBuffer::Clear, "todo: docstring")
  .def("Resize", (void (Urho3D::VectorBuffer::*)(unsigned int)) &Urho3D::VectorBuffer::Resize, "todo: docstring", py::arg("size"))
  .def("GetData", (const unsigned char * (Urho3D::VectorBuffer::*)() const) &Urho3D::VectorBuffer::GetData, "todo: docstring")
  .def("GetModifiableData", (unsigned char * (Urho3D::VectorBuffer::*)()) &Urho3D::VectorBuffer::GetModifiableData, "todo: docstring")
  //.def("GetBuffer", (const PODVector<unsigned char> & (Urho3D::VectorBuffer::*)() const) &Urho3D::VectorBuffer::GetBuffer, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;
}

void Implement_Urho3D_ValueAnimation(py::class_<Urho3D::ValueAnimation, Urho3D::SharedPtr<Urho3D::ValueAnimation>, Urho3D::Resource>& pyclass_Var_Urho3D_ValueAnimation)
{
    // Class ValueAnimation Implementation
pyclass_Var_Urho3D_ValueAnimation
  .def("GetType", (Urho3D::StringHash (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ValueAnimation", (void (Urho3D::ValueAnimation::*)()) &Urho3D::ValueAnimation::~ValueAnimation, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::ValueAnimation::*)(Urho3D::Deserializer &)) &Urho3D::ValueAnimation::BeginLoad, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::ValueAnimation::*)(Urho3D::Serializer &) const) &Urho3D::ValueAnimation::Save, "todo: docstring", py::arg("dest"))
  .def("LoadXML", (bool (Urho3D::ValueAnimation::*)(const Urho3D::XMLElement &)) &Urho3D::ValueAnimation::LoadXML, "todo: docstring", py::arg("source"))
  .def("SaveXML", (bool (Urho3D::ValueAnimation::*)(Urho3D::XMLElement &) const) &Urho3D::ValueAnimation::SaveXML, "todo: docstring", py::arg("dest"))
  .def("LoadJSON", (bool (Urho3D::ValueAnimation::*)(const Urho3D::JSONValue &)) &Urho3D::ValueAnimation::LoadJSON, "todo: docstring", py::arg("source"))
  .def("SaveJSON", (bool (Urho3D::ValueAnimation::*)(Urho3D::JSONValue &) const) &Urho3D::ValueAnimation::SaveJSON, "todo: docstring", py::arg("dest"))
  .def("SetOwner", (void (Urho3D::ValueAnimation::*)(void *)) &Urho3D::ValueAnimation::SetOwner, "todo: docstring", py::arg("owner"))
  .def("SetInterpolationMethod", (void (Urho3D::ValueAnimation::*)(Urho3D::InterpMethod)) &Urho3D::ValueAnimation::SetInterpolationMethod, "todo: docstring", py::arg("method"))
  .def("SetSplineTension", (void (Urho3D::ValueAnimation::*)(float)) &Urho3D::ValueAnimation::SetSplineTension, "todo: docstring", py::arg("tension"))
  .def("SetValueType", (void (Urho3D::ValueAnimation::*)(Urho3D::VariantType)) &Urho3D::ValueAnimation::SetValueType, "todo: docstring", py::arg("valueType"))
  .def("SetKeyFrame", (bool (Urho3D::ValueAnimation::*)(float, const Urho3D::Variant &)) &Urho3D::ValueAnimation::SetKeyFrame, "todo: docstring", py::arg("time"), py::arg("value"))
  .def("SetEventFrame", (void (Urho3D::ValueAnimation::*)(float, const Urho3D::StringHash &, const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant> &)) &Urho3D::ValueAnimation::SetEventFrame, "todo: docstring", py::arg("time"), py::arg("eventType"), py::arg("eventData")=VariantMap())
  .def("IsValid", (bool (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::IsValid, "todo: docstring")
  .def("GetOwner", (void * (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetOwner, "todo: docstring")
  .def("GetInterpolationMethod", (Urho3D::InterpMethod (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetInterpolationMethod, "todo: docstring")
  .def("GetSplineTension", (float (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetSplineTension, "todo: docstring")
  .def("GetValueType", (Urho3D::VariantType (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetValueType, "todo: docstring")
  .def("GetBeginTime", (float (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetBeginTime, "todo: docstring")
  .def("GetEndTime", (float (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetEndTime, "todo: docstring")
  .def("GetAnimationValue", (Urho3D::Variant (Urho3D::ValueAnimation::*)(float) const) &Urho3D::ValueAnimation::GetAnimationValue, "todo: docstring", py::arg("scaledTime"))
  //.def("GetKeyFrames", (const Vector<Urho3D::VAnimKeyFrame> & (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::GetKeyFrames, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("HasEventFrames", (bool (Urho3D::ValueAnimation::*)() const) &Urho3D::ValueAnimation::HasEventFrames, "todo: docstring")
  //.def("GetEventFrames", (void (Urho3D::ValueAnimation::*)(float, float, Urho3D::PODVector<const Urho3D::VAnimEventFrame *> &) const) &Urho3D::ValueAnimation::GetEventFrames, "todo: docstring", py::arg("beginTime"), py::arg("endTime"), py::arg("eventFrames"))
    //['float', 'float', 'Urho3D::PODVector<const Urho3D::VAnimEventFrame']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
// Class Variables:
;
}

void Implement_Urho3D_File(py::class_<Urho3D::File, Urho3D::SharedPtr<Urho3D::File>, Urho3D::Object, Urho3D::AbstractFile>& pyclass_Var_Urho3D_File)
{
    // Class File Implementation
pyclass_Var_Urho3D_File
  .def("GetType", (Urho3D::StringHash (Urho3D::File::*)() const) &Urho3D::File::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::File::*)() const) &Urho3D::File::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::File::*)() const) &Urho3D::File::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def(py::init<Urho3D::Context *, const Urho3D::String &, Urho3D::FileMode>(), "todo: constructor docstring")
  .def(py::init<Urho3D::Context *, Urho3D::PackageFile *, const Urho3D::String &>(), "todo: constructor docstring")
  //.def("~File", (void (Urho3D::File::*)()) &Urho3D::File::~File, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Read", (unsigned int (Urho3D::File::*)(void *, unsigned int)) &Urho3D::File::Read, "todo: docstring", py::arg("dest"), py::arg("size"))
  .def("Seek", (unsigned int (Urho3D::File::*)(unsigned int)) &Urho3D::File::Seek, "todo: docstring", py::arg("position"))
  .def("Write", (unsigned int (Urho3D::File::*)(const void *, unsigned int)) &Urho3D::File::Write, "todo: docstring", py::arg("data"), py::arg("size"))
  .def("GetName", (const Urho3D::String & (Urho3D::File::*)() const) &Urho3D::File::GetName, "todo: docstring")
  .def("GetChecksum", (unsigned int (Urho3D::File::*)()) &Urho3D::File::GetChecksum, "todo: docstring")
  .def("Open", (bool (Urho3D::File::*)(const Urho3D::String &, Urho3D::FileMode)) &Urho3D::File::Open, "todo: docstring", py::arg("fileName"), py::arg("mode")=FILE_READ)
  .def("Open", (bool (Urho3D::File::*)(Urho3D::PackageFile *, const Urho3D::String &)) &Urho3D::File::Open, "todo: docstring", py::arg("package"), py::arg("fileName"))
  .def("Close", (void (Urho3D::File::*)()) &Urho3D::File::Close, "todo: docstring")
  .def("Flush", (void (Urho3D::File::*)()) &Urho3D::File::Flush, "todo: docstring")
  .def("SetName", (void (Urho3D::File::*)(const Urho3D::String &)) &Urho3D::File::SetName, "todo: docstring", py::arg("name"))
  .def("GetMode", (Urho3D::FileMode (Urho3D::File::*)() const) &Urho3D::File::GetMode, "todo: docstring")
  .def("IsOpen", (bool (Urho3D::File::*)() const) &Urho3D::File::IsOpen, "todo: docstring")
  .def("GetHandle", (void * (Urho3D::File::*)() const) &Urho3D::File::GetHandle, "todo: docstring")
  .def("IsPackaged", (bool (Urho3D::File::*)() const) &Urho3D::File::IsPackaged, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_ResourceWithMetadata(py::class_<Urho3D::ResourceWithMetadata, Urho3D::SharedPtr<Urho3D::ResourceWithMetadata>, Urho3D::Resource>& pyclass_Var_Urho3D_ResourceWithMetadata)
{
    // Class ResourceWithMetadata Implementation
pyclass_Var_Urho3D_ResourceWithMetadata
  .def("GetType", (Urho3D::StringHash (Urho3D::ResourceWithMetadata::*)() const) &Urho3D::ResourceWithMetadata::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ResourceWithMetadata::*)() const) &Urho3D::ResourceWithMetadata::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ResourceWithMetadata::*)() const) &Urho3D::ResourceWithMetadata::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def("AddMetadata", (void (Urho3D::ResourceWithMetadata::*)(const Urho3D::String &, const Urho3D::Variant &)) &Urho3D::ResourceWithMetadata::AddMetadata, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("RemoveMetadata", (void (Urho3D::ResourceWithMetadata::*)(const Urho3D::String &)) &Urho3D::ResourceWithMetadata::RemoveMetadata, "todo: docstring", py::arg("name"))
  .def("RemoveAllMetadata", (void (Urho3D::ResourceWithMetadata::*)()) &Urho3D::ResourceWithMetadata::RemoveAllMetadata, "todo: docstring")
  .def("GetMetadata", (const Urho3D::Variant & (Urho3D::ResourceWithMetadata::*)(const Urho3D::String &) const) &Urho3D::ResourceWithMetadata::GetMetadata, "todo: docstring", py::arg("name"))
  .def("HasMetadata", (bool (Urho3D::ResourceWithMetadata::*)() const) &Urho3D::ResourceWithMetadata::HasMetadata, "todo: docstring")
// Class Variables:
;
}

void Implement_Urho3D_Technique(py::class_<Urho3D::Technique, Urho3D::SharedPtr<Urho3D::Technique>, Urho3D::Resource>& pyclass_Var_Urho3D_Technique)
{
    // Class Technique Implementation
pyclass_Var_Urho3D_Technique
  .def("GetType", (Urho3D::StringHash (Urho3D::Technique::*)() const) &Urho3D::Technique::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Technique::*)() const) &Urho3D::Technique::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Technique::*)() const) &Urho3D::Technique::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Technique", (void (Urho3D::Technique::*)()) &Urho3D::Technique::~Technique, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Technique::*)(Urho3D::Deserializer &)) &Urho3D::Technique::BeginLoad, "todo: docstring", py::arg("source"))
  .def("SetIsDesktop", (void (Urho3D::Technique::*)(bool)) &Urho3D::Technique::SetIsDesktop, "todo: docstring", py::arg("enable"))
  .def("CreatePass", (Urho3D::Pass * (Urho3D::Technique::*)(const Urho3D::String &)) &Urho3D::Technique::CreatePass, "todo: docstring", py::arg("name"))
  .def("RemovePass", (void (Urho3D::Technique::*)(const Urho3D::String &)) &Urho3D::Technique::RemovePass, "todo: docstring", py::arg("name"))
  .def("ReleaseShaders", (void (Urho3D::Technique::*)()) &Urho3D::Technique::ReleaseShaders, "todo: docstring")
  //.def("Clone", (SharedPtr<Urho3D::Technique> (Urho3D::Technique::*)(const Urho3D::String &) const) &Urho3D::Technique::Clone, "todo: docstring", py::arg("cloneName")=String::EMPTY)
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("IsDesktop", (bool (Urho3D::Technique::*)() const) &Urho3D::Technique::IsDesktop, "todo: docstring")
  .def("IsSupported", (bool (Urho3D::Technique::*)() const) &Urho3D::Technique::IsSupported, "todo: docstring")
  .def("HasPass", (bool (Urho3D::Technique::*)(unsigned int) const) &Urho3D::Technique::HasPass, "todo: docstring", py::arg("passIndex"))
  .def("HasPass", (bool (Urho3D::Technique::*)(const Urho3D::String &) const) &Urho3D::Technique::HasPass, "todo: docstring", py::arg("name"))
  .def("GetPass", (Urho3D::Pass * (Urho3D::Technique::*)(unsigned int) const) &Urho3D::Technique::GetPass, "todo: docstring", py::arg("passIndex"))
  .def("GetPass", (Urho3D::Pass * (Urho3D::Technique::*)(const Urho3D::String &) const) &Urho3D::Technique::GetPass, "todo: docstring", py::arg("name"))
  .def("GetSupportedPass", (Urho3D::Pass * (Urho3D::Technique::*)(unsigned int) const) &Urho3D::Technique::GetSupportedPass, "todo: docstring", py::arg("passIndex"))
  .def("GetSupportedPass", (Urho3D::Pass * (Urho3D::Technique::*)(const Urho3D::String &) const) &Urho3D::Technique::GetSupportedPass, "todo: docstring", py::arg("name"))
  .def("GetNumPasses", (unsigned int (Urho3D::Technique::*)() const) &Urho3D::Technique::GetNumPasses, "todo: docstring")
  //.def("GetPassNames", (Vector<Urho3D::String> (Urho3D::Technique::*)() const) &Urho3D::Technique::GetPassNames, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetPasses", (PODVector<Urho3D::Pass *> (Urho3D::Technique::*)() const) &Urho3D::Technique::GetPasses, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("CloneWithDefines", (SharedPtr<Urho3D::Technique> (Urho3D::Technique::*)(const Urho3D::String &, const Urho3D::String &)) &Urho3D::Technique::CloneWithDefines, "todo: docstring", py::arg("vsDefines"), py::arg("psDefines"))
    //['Urho3D::String', 'Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
  .def_readwrite_static("basePassIndex",&Urho3D::Technique::basePassIndex, "todo: var docstring")//unsigned int
  .def_readwrite_static("alphaPassIndex",&Urho3D::Technique::alphaPassIndex, "todo: var docstring")//unsigned int
  .def_readwrite_static("materialPassIndex",&Urho3D::Technique::materialPassIndex, "todo: var docstring")//unsigned int
  .def_readwrite_static("deferredPassIndex",&Urho3D::Technique::deferredPassIndex, "todo: var docstring")//unsigned int
  .def_readwrite_static("lightPassIndex",&Urho3D::Technique::lightPassIndex, "todo: var docstring")//unsigned int
  .def_readwrite_static("litBasePassIndex",&Urho3D::Technique::litBasePassIndex, "todo: var docstring")//unsigned int
  .def_readwrite_static("litAlphaPassIndex",&Urho3D::Technique::litAlphaPassIndex, "todo: var docstring")//unsigned int
  .def_readwrite_static("shadowPassIndex",&Urho3D::Technique::shadowPassIndex, "todo: var docstring")//unsigned int
;
}

void Implement_Urho3D_SoundListener(py::class_<Urho3D::SoundListener, Urho3D::SharedPtr<Urho3D::SoundListener>, Urho3D::Component>& pyclass_Var_Urho3D_SoundListener)
{
    // Class SoundListener Implementation
pyclass_Var_Urho3D_SoundListener
  .def("GetType", (Urho3D::StringHash (Urho3D::SoundListener::*)() const) &Urho3D::SoundListener::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::SoundListener::*)() const) &Urho3D::SoundListener::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::SoundListener::*)() const) &Urho3D::SoundListener::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~SoundListener", (void (Urho3D::SoundListener::*)()) &Urho3D::SoundListener::~SoundListener, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
;
}
