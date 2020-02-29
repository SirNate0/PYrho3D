

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
extern const auto& RIGHT_FORWARD_UP = Urho3D::RaycastVehicle::RIGHT_FORWARD_UP;


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
// Declare the holder types shared and weak ptr
//================================================
// TODO: Consider global hashmap of pointers for external pointer, then we could mark it as safe from raw ptr.
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::ExternalPtr<T>, false);
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::SharedPtr<T>, true);
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::WeakPtr<T>, true);


//================================================
// Implement Classes
//================================================

// Next binding:
void Implement_Class_Bindings_2(py::module& m);

// Current binding:
void Implement_Class_Bindings_1(py::module& m)
{
py::module& pyclass_Var_Urho3D = m;

// Type Urho3D::HashBase Registrations
auto pyclass_Var_Urho3D_HashBase = py::class_<Urho3D::HashBase, Urho3D::ExternalPtr<Urho3D::HashBase>>(pyclass_Var_Urho3D, "HashBase", "test doc");
// Type Urho3D::WString Registrations
auto pyclass_Var_Urho3D_WString = py::class_<Urho3D::WString, Urho3D::ExternalPtr<Urho3D::WString>>(pyclass_Var_Urho3D, "WString", "test doc");
// Type Urho3D::StringHashRegister Registrations
auto pyclass_Var_Urho3D_StringHashRegister = py::class_<Urho3D::StringHashRegister, Urho3D::ExternalPtr<Urho3D::StringHashRegister>>(pyclass_Var_Urho3D, "StringHashRegister", "test doc");
// Type Urho3D::StringFactory Registrations
auto pyclass_Var_Urho3D_StringFactory = py::class_<Urho3D::StringFactory, Urho3D::ExternalPtr<Urho3D::StringFactory>>(pyclass_Var_Urho3D, "StringFactory", "test doc");
// Type Urho3D::MutexLock Registrations
auto pyclass_Var_Urho3D_MutexLock = py::class_<Urho3D::MutexLock, Urho3D::ExternalPtr<Urho3D::MutexLock>>(pyclass_Var_Urho3D, "MutexLock", "test doc");
// Type Urho3D::RefCounted Registrations
auto pyclass_Var_Urho3D_RefCounted = py::class_<Urho3D::RefCounted, Urho3D::SharedPtr<Urho3D::RefCounted>>(pyclass_Var_Urho3D, "RefCounted", "test doc");
// Type Urho3D::Vector2 Registrations
auto pyclass_Var_Urho3D_Vector2 = py::class_<Urho3D::Vector2, Urho3D::ExternalPtr<Urho3D::Vector2>>(pyclass_Var_Urho3D, "Vector2", "test doc");
// Type Urho3D::Vector3 Registrations
auto pyclass_Var_Urho3D_Vector3 = py::class_<Urho3D::Vector3, Urho3D::ExternalPtr<Urho3D::Vector3>>(pyclass_Var_Urho3D, "Vector3", "test doc");
// Type Urho3D::Color Registrations
auto pyclass_Var_Urho3D_Color = py::class_<Urho3D::Color, Urho3D::ExternalPtr<Urho3D::Color>>(pyclass_Var_Urho3D, "Color", "test doc");
// Type Urho3D::Quaternion Registrations
auto pyclass_Var_Urho3D_Quaternion = py::class_<Urho3D::Quaternion, Urho3D::ExternalPtr<Urho3D::Quaternion>>(pyclass_Var_Urho3D, "Quaternion", "test doc");
// Type Urho3D::Matrix4 Registrations
auto pyclass_Var_Urho3D_Matrix4 = py::class_<Urho3D::Matrix4, Urho3D::ExternalPtr<Urho3D::Matrix4>>(pyclass_Var_Urho3D, "Matrix4", "test doc");
// Type Urho3D::IntRect Registrations
auto pyclass_Var_Urho3D_IntRect = py::class_<Urho3D::IntRect, Urho3D::ExternalPtr<Urho3D::IntRect>>(pyclass_Var_Urho3D, "IntRect", "test doc");
// Type Urho3D::ResourceRef Registrations
auto pyclass_Var_Urho3D_ResourceRef = py::class_<Urho3D::ResourceRef, Urho3D::ExternalPtr<Urho3D::ResourceRef>>(pyclass_Var_Urho3D, "ResourceRef", "test doc");
// Type Urho3D::Context Registrations
auto pyclass_Var_Urho3D_Context = py::class_<Urho3D::Context, Urho3D::SharedPtr<Urho3D::Context>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "Context", "test doc");
// Type Urho3D::TypeInfo Registrations
auto pyclass_Var_Urho3D_TypeInfo = py::class_<Urho3D::TypeInfo, Urho3D::ExternalPtr<Urho3D::TypeInfo>>(pyclass_Var_Urho3D, "TypeInfo", "test doc");
// Type Urho3D::ObjectFactory Registrations
auto pyclass_Var_Urho3D_ObjectFactory = py::class_<Urho3D::ObjectFactory, Urho3D::SharedPtr<Urho3D::ObjectFactory>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "ObjectFactory", "test doc");
// Type Urho3D::ScriptEventListener Registrations
auto pyclass_Var_Urho3D_ScriptEventListener = py::class_<Urho3D::ScriptEventListener, Urho3D::ExternalPtr<Urho3D::ScriptEventListener>>(pyclass_Var_Urho3D, "ScriptEventListener", "test doc");
// Type Urho3D::AttributeAccessor Registrations
auto pyclass_Var_Urho3D_AttributeAccessor = py::class_<Urho3D::AttributeAccessor, Urho3D::SharedPtr<Urho3D::AttributeAccessor>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "AttributeAccessor", "test doc");
// Type Urho3D::Deserializer Registrations
auto pyclass_Var_Urho3D_Deserializer = py::class_<Urho3D::Deserializer, Urho3D::ExternalPtr<Urho3D::Deserializer>>(pyclass_Var_Urho3D, "Deserializer", "test doc");
// Type Urho3D::XMLElement Registrations
auto pyclass_Var_Urho3D_XMLElement = py::class_<Urho3D::XMLElement, Urho3D::ExternalPtr<Urho3D::XMLElement>>(pyclass_Var_Urho3D, "XMLElement", "test doc");
// Type Urho3D::DirtyBits Registrations
auto pyclass_Var_Urho3D_DirtyBits = py::class_<Urho3D::DirtyBits, Urho3D::ExternalPtr<Urho3D::DirtyBits>>(pyclass_Var_Urho3D, "DirtyBits", "test doc");
// Type Urho3D::ReplicationState Registrations
auto pyclass_Var_Urho3D_ReplicationState = py::class_<Urho3D::ReplicationState, Urho3D::ExternalPtr<Urho3D::ReplicationState>>(pyclass_Var_Urho3D, "ReplicationState", "test doc");
// Type Urho3D::ValueAnimationInfo Registrations
auto pyclass_Var_Urho3D_ValueAnimationInfo = py::class_<Urho3D::ValueAnimationInfo, Urho3D::SharedPtr<Urho3D::ValueAnimationInfo>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "ValueAnimationInfo", "test doc");
// Type Urho3D::ComponentReplicationState Registrations
auto pyclass_Var_Urho3D_ComponentReplicationState = py::class_<Urho3D::ComponentReplicationState, Urho3D::ExternalPtr<Urho3D::ComponentReplicationState>, Urho3D::ReplicationState>(pyclass_Var_Urho3D, "ComponentReplicationState", "test doc");
// Type Urho3D::SoundStream Registrations
auto pyclass_Var_Urho3D_SoundStream = py::class_<Urho3D::SoundStream, Urho3D::SharedPtr<Urho3D::SoundStream>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "SoundStream", "test doc");
// Type Urho3D::EventReceiverGroup Registrations
auto pyclass_Var_Urho3D_EventReceiverGroup = py::class_<Urho3D::EventReceiverGroup, Urho3D::SharedPtr<Urho3D::EventReceiverGroup>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "EventReceiverGroup", "test doc");
// Type Urho3D::Polyhedron Registrations
auto pyclass_Var_Urho3D_Polyhedron = py::class_<Urho3D::Polyhedron, Urho3D::ExternalPtr<Urho3D::Polyhedron>>(pyclass_Var_Urho3D, "Polyhedron", "test doc");
// Type Urho3D::Sphere Registrations
auto pyclass_Var_Urho3D_Sphere = py::class_<Urho3D::Sphere, Urho3D::ExternalPtr<Urho3D::Sphere>>(pyclass_Var_Urho3D, "Sphere", "test doc");
// Type Urho3D::Octant Registrations
auto pyclass_Var_Urho3D_Octant = py::class_<Urho3D::Octant, Urho3D::ExternalPtr<Urho3D::Octant>>(pyclass_Var_Urho3D, "Octant", "test doc");
// Type Urho3D::RayQueryResult Registrations
auto pyclass_Var_Urho3D_RayQueryResult = py::class_<Urho3D::RayQueryResult, Urho3D::ExternalPtr<Urho3D::RayQueryResult>>(pyclass_Var_Urho3D, "RayQueryResult", "test doc");
// Type Urho3D::GPUObject Registrations
auto pyclass_Var_Urho3D_GPUObject = py::class_<Urho3D::GPUObject, Urho3D::ExternalPtr<Urho3D::GPUObject>>(pyclass_Var_Urho3D, "GPUObject", "test doc");
// Type Urho3D::HiresTimer Registrations
auto pyclass_Var_Urho3D_HiresTimer = py::class_<Urho3D::HiresTimer, Urho3D::ExternalPtr<Urho3D::HiresTimer>>(pyclass_Var_Urho3D, "HiresTimer", "test doc");
// Type Urho3D::SceneResolver Registrations
auto pyclass_Var_Urho3D_SceneResolver = py::class_<Urho3D::SceneResolver, Urho3D::ExternalPtr<Urho3D::SceneResolver>>(pyclass_Var_Urho3D, "SceneResolver", "test doc");
// Type Urho3D::NodeImpl Registrations
auto pyclass_Var_Urho3D_NodeImpl = py::class_<Urho3D::NodeImpl, Urho3D::ExternalPtr<Urho3D::NodeImpl>>(pyclass_Var_Urho3D, "NodeImpl", "test doc");
// Type Urho3D::XPathResultSet Registrations
auto pyclass_Var_Urho3D_XPathResultSet = py::class_<Urho3D::XPathResultSet, Urho3D::ExternalPtr<Urho3D::XPathResultSet>>(pyclass_Var_Urho3D, "XPathResultSet", "test doc");
// Type Urho3D::BiasParameters Registrations
auto pyclass_Var_Urho3D_BiasParameters = py::class_<Urho3D::BiasParameters, Urho3D::ExternalPtr<Urho3D::BiasParameters>>(pyclass_Var_Urho3D, "BiasParameters", "test doc");
// Type Urho3D::FocusParameters Registrations
auto pyclass_Var_Urho3D_FocusParameters = py::class_<Urho3D::FocusParameters, Urho3D::ExternalPtr<Urho3D::FocusParameters>>(pyclass_Var_Urho3D, "FocusParameters", "test doc");
// Type Urho3D::UIBatch Registrations
auto pyclass_Var_Urho3D_UIBatch = py::class_<Urho3D::UIBatch, Urho3D::ExternalPtr<Urho3D::UIBatch>>(pyclass_Var_Urho3D, "UIBatch", "test doc");
// Type Urho3D::BufferedSoundStream Registrations
auto pyclass_Var_Urho3D_BufferedSoundStream = py::class_<Urho3D::BufferedSoundStream, Urho3D::SharedPtr<Urho3D::BufferedSoundStream>, Urho3D::SoundStream>(pyclass_Var_Urho3D, "BufferedSoundStream", "test doc");
// Type Urho3D::Condition Registrations
auto pyclass_Var_Urho3D_Condition = py::class_<Urho3D::Condition, Urho3D::ExternalPtr<Urho3D::Condition>>(pyclass_Var_Urho3D, "Condition", "test doc");
// Type Urho3D::ProfilerBlock Registrations
auto pyclass_Var_Urho3D_ProfilerBlock = py::class_<Urho3D::ProfilerBlock, Urho3D::ExternalPtr<Urho3D::ProfilerBlock>>(pyclass_Var_Urho3D, "ProfilerBlock", "test doc");
// Type Urho3D::AutoProfileBlock Registrations
auto pyclass_Var_Urho3D_AutoProfileBlock = py::class_<Urho3D::AutoProfileBlock, Urho3D::ExternalPtr<Urho3D::AutoProfileBlock>>(pyclass_Var_Urho3D, "AutoProfileBlock", "test doc");
// Type Urho3D::Spline Registrations
auto pyclass_Var_Urho3D_Spline = py::class_<Urho3D::Spline, Urho3D::ExternalPtr<Urho3D::Spline>>(pyclass_Var_Urho3D, "Spline", "test doc");
// Type Urho3D::Skeleton Registrations
auto pyclass_Var_Urho3D_Skeleton = py::class_<Urho3D::Skeleton, Urho3D::ExternalPtr<Urho3D::Skeleton>>(pyclass_Var_Urho3D, "Skeleton", "test doc");
// Type Urho3D::AnimationState Registrations
auto pyclass_Var_Urho3D_AnimationState = py::class_<Urho3D::AnimationState, Urho3D::SharedPtr<Urho3D::AnimationState>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "AnimationState", "test doc");
// Type Urho3D::AnimationTrack Registrations
auto pyclass_Var_Urho3D_AnimationTrack = py::class_<Urho3D::AnimationTrack, Urho3D::ExternalPtr<Urho3D::AnimationTrack>>(pyclass_Var_Urho3D, "AnimationTrack", "test doc");
// Type Urho3D::ShaderVariation Registrations
auto pyclass_Var_Urho3D_ShaderVariation = py::class_<Urho3D::ShaderVariation, Urho3D::SharedPtr<Urho3D::ShaderVariation>, Urho3D::RefCounted, Urho3D::GPUObject>(pyclass_Var_Urho3D, "ShaderVariation", "test doc");
// Type Urho3D::Billboard Registrations
auto pyclass_Var_Urho3D_Billboard = py::class_<Urho3D::Billboard, Urho3D::ExternalPtr<Urho3D::Billboard>>(pyclass_Var_Urho3D, "Billboard", "test doc");
// Type Urho3D::Ray Registrations
auto pyclass_Var_Urho3D_Ray = py::class_<Urho3D::Ray, Urho3D::ExternalPtr<Urho3D::Ray>>(pyclass_Var_Urho3D, "Ray", "test doc");
// Type Urho3D::RenderSurface Registrations
auto pyclass_Var_Urho3D_RenderSurface = py::class_<Urho3D::RenderSurface, Urho3D::SharedPtr<Urho3D::RenderSurface>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "RenderSurface", "test doc");
// Type Urho3D::ShaderProgram Registrations
auto pyclass_Var_Urho3D_ShaderProgram = py::class_<Urho3D::ShaderProgram, Urho3D::SharedPtr<Urho3D::ShaderProgram>, Urho3D::RefCounted, Urho3D::GPUObject>(pyclass_Var_Urho3D, "ShaderProgram", "test doc");
// Type Urho3D::OctreeQuery Registrations
auto pyclass_Var_Urho3D_OctreeQuery = py::class_<Urho3D::OctreeQuery, Urho3D::ExternalPtr<Urho3D::OctreeQuery>>(pyclass_Var_Urho3D, "OctreeQuery", "test doc");
// Type Urho3D::SphereOctreeQuery Registrations
auto pyclass_Var_Urho3D_SphereOctreeQuery = py::class_<Urho3D::SphereOctreeQuery, Urho3D::ExternalPtr<Urho3D::SphereOctreeQuery>, Urho3D::OctreeQuery>(pyclass_Var_Urho3D, "SphereOctreeQuery", "test doc");
// Type Urho3D::FrustumOctreeQuery Registrations
auto pyclass_Var_Urho3D_FrustumOctreeQuery = py::class_<Urho3D::FrustumOctreeQuery, Urho3D::ExternalPtr<Urho3D::FrustumOctreeQuery>, Urho3D::OctreeQuery>(pyclass_Var_Urho3D, "FrustumOctreeQuery", "test doc");
// Type Urho3D::AllContentOctreeQuery Registrations
auto pyclass_Var_Urho3D_AllContentOctreeQuery = py::class_<Urho3D::AllContentOctreeQuery, Urho3D::ExternalPtr<Urho3D::AllContentOctreeQuery>, Urho3D::OctreeQuery>(pyclass_Var_Urho3D, "AllContentOctreeQuery", "test doc");
// Type Urho3D::RenderTargetInfo Registrations
auto pyclass_Var_Urho3D_RenderTargetInfo = py::class_<Urho3D::RenderTargetInfo, Urho3D::ExternalPtr<Urho3D::RenderTargetInfo>>(pyclass_Var_Urho3D, "RenderTargetInfo", "test doc");
// Type Urho3D::RenderPath Registrations
auto pyclass_Var_Urho3D_RenderPath = py::class_<Urho3D::RenderPath, Urho3D::SharedPtr<Urho3D::RenderPath>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "RenderPath", "test doc");
// Type Urho3D::TrailPoint Registrations
auto pyclass_Var_Urho3D_TrailPoint = py::class_<Urho3D::TrailPoint, Urho3D::ExternalPtr<Urho3D::TrailPoint>>(pyclass_Var_Urho3D, "TrailPoint", "test doc");
// Type Urho3D::Controls Registrations
auto pyclass_Var_Urho3D_Controls = py::class_<Urho3D::Controls, Urho3D::ExternalPtr<Urho3D::Controls>>(pyclass_Var_Urho3D, "Controls", "test doc");
// Type Urho3D::LuaFunction Registrations
auto pyclass_Var_Urho3D_LuaFunction = py::class_<Urho3D::LuaFunction, Urho3D::SharedPtr<Urho3D::LuaFunction>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "LuaFunction", "test doc");
// Type Urho3D::AreaAllocator Registrations
auto pyclass_Var_Urho3D_AreaAllocator = py::class_<Urho3D::AreaAllocator, Urho3D::ExternalPtr<Urho3D::AreaAllocator>>(pyclass_Var_Urho3D, "AreaAllocator", "test doc");
// Type Urho3D::NavBuildData Registrations
auto pyclass_Var_Urho3D_NavBuildData = py::class_<Urho3D::NavBuildData, Urho3D::ExternalPtr<Urho3D::NavBuildData>>(pyclass_Var_Urho3D, "NavBuildData", "test doc");
// Type Urho3D::NavAreaStub Registrations
auto pyclass_Var_Urho3D_NavAreaStub = py::class_<Urho3D::NavAreaStub, Urho3D::ExternalPtr<Urho3D::NavAreaStub>>(pyclass_Var_Urho3D, "NavAreaStub", "test doc");
// Type Urho3D::SceneReplicationState Registrations
auto pyclass_Var_Urho3D_SceneReplicationState = py::class_<Urho3D::SceneReplicationState, Urho3D::ExternalPtr<Urho3D::SceneReplicationState>, Urho3D::ReplicationState>(pyclass_Var_Urho3D, "SceneReplicationState", "test doc");
// Type Urho3D::PhysicsRaycastResult Registrations
auto pyclass_Var_Urho3D_PhysicsRaycastResult = py::class_<Urho3D::PhysicsRaycastResult, Urho3D::ExternalPtr<Urho3D::PhysicsRaycastResult>>(pyclass_Var_Urho3D, "PhysicsRaycastResult", "test doc");
// Type Urho3D::PListValue Registrations
auto pyclass_Var_Urho3D_PListValue = py::class_<Urho3D::PListValue, Urho3D::ExternalPtr<Urho3D::PListValue>>(pyclass_Var_Urho3D, "PListValue", "test doc");
// Type Urho3D::FontFace Registrations
auto pyclass_Var_Urho3D_FontFace = py::class_<Urho3D::FontFace, Urho3D::SharedPtr<Urho3D::FontFace>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "FontFace", "test doc");
// Type Urho3D::FontFaceBitmap Registrations
auto pyclass_Var_Urho3D_FontFaceBitmap = py::class_<Urho3D::FontFaceBitmap, Urho3D::SharedPtr<Urho3D::FontFaceBitmap>, Urho3D::FontFace>(pyclass_Var_Urho3D, "FontFaceBitmap", "test doc");
// Type Urho3D::PhysicsRaycastResult2D Registrations
auto pyclass_Var_Urho3D_PhysicsRaycastResult2D = py::class_<Urho3D::PhysicsRaycastResult2D, Urho3D::ExternalPtr<Urho3D::PhysicsRaycastResult2D>>(pyclass_Var_Urho3D, "PhysicsRaycastResult2D", "test doc");
// Type Urho3D::TileMapInfo2D Registrations
auto pyclass_Var_Urho3D_TileMapInfo2D = py::class_<Urho3D::TileMapInfo2D, Urho3D::ExternalPtr<Urho3D::TileMapInfo2D>>(pyclass_Var_Urho3D, "TileMapInfo2D", "test doc");
// Type Urho3D::Tile2D Registrations
auto pyclass_Var_Urho3D_Tile2D = py::class_<Urho3D::Tile2D, Urho3D::SharedPtr<Urho3D::Tile2D>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "Tile2D", "test doc");
// Type Urho3D::ListBase Registrations
auto pyclass_Var_Urho3D_ListBase = py::class_<Urho3D::ListBase, Urho3D::ExternalPtr<Urho3D::ListBase>>(pyclass_Var_Urho3D, "ListBase", "test doc");
// Type Urho3D::StringHash Registrations
auto pyclass_Var_Urho3D_StringHash = py::class_<Urho3D::StringHash, Urho3D::ExternalPtr<Urho3D::StringHash>>(pyclass_Var_Urho3D, "StringHash", "test doc");
// Type Urho3D::Mutex Registrations
auto pyclass_Var_Urho3D_Mutex = py::class_<Urho3D::Mutex, Urho3D::ExternalPtr<Urho3D::Mutex>>(pyclass_Var_Urho3D, "Mutex", "test doc");
// Type Urho3D::IntVector2 Registrations
auto pyclass_Var_Urho3D_IntVector2 = py::class_<Urho3D::IntVector2, Urho3D::ExternalPtr<Urho3D::IntVector2>>(pyclass_Var_Urho3D, "IntVector2", "test doc");
// Type Urho3D::Vector4 Registrations
auto pyclass_Var_Urho3D_Vector4 = py::class_<Urho3D::Vector4, Urho3D::ExternalPtr<Urho3D::Vector4>>(pyclass_Var_Urho3D, "Vector4", "test doc");
// Type Urho3D::Matrix3x4 Registrations
auto pyclass_Var_Urho3D_Matrix3x4 = py::class_<Urho3D::Matrix3x4, Urho3D::ExternalPtr<Urho3D::Matrix3x4>>(pyclass_Var_Urho3D, "Matrix3x4", "test doc");
// Type Urho3D::Variant Registrations
auto pyclass_Var_Urho3D_Variant = py::class_<Urho3D::Variant, Urho3D::ExternalPtr<Urho3D::Variant>>(pyclass_Var_Urho3D, "Variant", "test doc");
// Type Urho3D::ResourceRefList Registrations
auto pyclass_Var_Urho3D_ResourceRefList = py::class_<Urho3D::ResourceRefList, Urho3D::ExternalPtr<Urho3D::ResourceRefList>>(pyclass_Var_Urho3D, "ResourceRefList", "test doc");
// Type Urho3D::Object Registrations
auto pyclass_Var_Urho3D_Object = py::class_<Urho3D::Object, Urho3D::SharedPtr<Urho3D::Object>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "Object", "test doc");
// Type Urho3D::Script Registrations
auto pyclass_Var_Urho3D_Script = py::class_<Urho3D::Script, Urho3D::SharedPtr<Urho3D::Script>, Urho3D::Object>(pyclass_Var_Urho3D, "Script", "test doc");
// Type Urho3D::Connection Registrations
auto pyclass_Var_Urho3D_Connection = py::class_<Urho3D::Connection, Urho3D::SharedPtr<Urho3D::Connection>, Urho3D::Object>(pyclass_Var_Urho3D, "Connection", "test doc");
// Type Urho3D::JSONValue Registrations
auto pyclass_Var_Urho3D_JSONValue = py::class_<Urho3D::JSONValue, Urho3D::ExternalPtr<Urho3D::JSONValue>>(pyclass_Var_Urho3D, "JSONValue", "test doc");
// Type Urho3D::Audio Registrations
auto pyclass_Var_Urho3D_Audio = py::class_<Urho3D::Audio, Urho3D::SharedPtr<Urho3D::Audio>, Urho3D::Object>(pyclass_Var_Urho3D, "Audio", "test doc");
// Type Urho3D::VertexElement Registrations
auto pyclass_Var_Urho3D_VertexElement = py::class_<Urho3D::VertexElement, Urho3D::ExternalPtr<Urho3D::VertexElement>>(pyclass_Var_Urho3D, "VertexElement", "test doc");
// Type Urho3D::BoundingBox Registrations
auto pyclass_Var_Urho3D_BoundingBox = py::class_<Urho3D::BoundingBox, Urho3D::ExternalPtr<Urho3D::BoundingBox>>(pyclass_Var_Urho3D, "BoundingBox", "test doc");
// Type Urho3D::Geometry Registrations
auto pyclass_Var_Urho3D_Geometry = py::class_<Urho3D::Geometry, Urho3D::SharedPtr<Urho3D::Geometry>, Urho3D::Object>(pyclass_Var_Urho3D, "Geometry", "test doc");
// Type Urho3D::OcclusionBuffer Registrations
auto pyclass_Var_Urho3D_OcclusionBuffer = py::class_<Urho3D::OcclusionBuffer, Urho3D::SharedPtr<Urho3D::OcclusionBuffer>, Urho3D::Object>(pyclass_Var_Urho3D, "OcclusionBuffer", "test doc");
// Type Urho3D::SourceBatch Registrations
auto pyclass_Var_Urho3D_SourceBatch = py::class_<Urho3D::SourceBatch, Urho3D::ExternalPtr<Urho3D::SourceBatch>>(pyclass_Var_Urho3D, "SourceBatch", "test doc");
// Type Urho3D::Graphics Registrations
auto pyclass_Var_Urho3D_Graphics = py::class_<Urho3D::Graphics, Urho3D::SharedPtr<Urho3D::Graphics>, Urho3D::Object>(pyclass_Var_Urho3D, "Graphics", "test doc");
// Type Urho3D::Time Registrations
auto pyclass_Var_Urho3D_Time = py::class_<Urho3D::Time, Urho3D::SharedPtr<Urho3D::Time>, Urho3D::Object>(pyclass_Var_Urho3D, "Time", "test doc");
// Type Urho3D::PackageFile Registrations
auto pyclass_Var_Urho3D_PackageFile = py::class_<Urho3D::PackageFile, Urho3D::SharedPtr<Urho3D::PackageFile>, Urho3D::Object>(pyclass_Var_Urho3D, "PackageFile", "test doc");
// Type Urho3D::NodeReplicationState Registrations
auto pyclass_Var_Urho3D_NodeReplicationState = py::class_<Urho3D::NodeReplicationState, Urho3D::ExternalPtr<Urho3D::NodeReplicationState>, Urho3D::ReplicationState>(pyclass_Var_Urho3D, "NodeReplicationState", "test doc");
// Type Urho3D::Plane Registrations
auto pyclass_Var_Urho3D_Plane = py::class_<Urho3D::Plane, Urho3D::ExternalPtr<Urho3D::Plane>>(pyclass_Var_Urho3D, "Plane", "test doc");
// Type Urho3D::Pass Registrations
auto pyclass_Var_Urho3D_Pass = py::class_<Urho3D::Pass, Urho3D::SharedPtr<Urho3D::Pass>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "Pass", "test doc");
// Type Urho3D::ResourceCache Registrations
auto pyclass_Var_Urho3D_ResourceCache = py::class_<Urho3D::ResourceCache, Urho3D::SharedPtr<Urho3D::ResourceCache>, Urho3D::Object>(pyclass_Var_Urho3D, "ResourceCache", "test doc");
// Type Urho3D::ScriptEventInvoker Registrations
auto pyclass_Var_Urho3D_ScriptEventInvoker = py::class_<Urho3D::ScriptEventInvoker, Urho3D::SharedPtr<Urho3D::ScriptEventInvoker>, Urho3D::Object>(pyclass_Var_Urho3D, "ScriptEventInvoker", "test doc");
// Type Urho3D::OggVorbisSoundStream Registrations
auto pyclass_Var_Urho3D_OggVorbisSoundStream = py::class_<Urho3D::OggVorbisSoundStream, Urho3D::SharedPtr<Urho3D::OggVorbisSoundStream>, Urho3D::SoundStream>(pyclass_Var_Urho3D, "OggVorbisSoundStream", "test doc");
// Type Urho3D::Thread Registrations
auto pyclass_Var_Urho3D_Thread = py::class_<Urho3D::Thread, Urho3D::ExternalPtr<Urho3D::Thread>>(pyclass_Var_Urho3D, "Thread", "test doc");
// Type Urho3D::EventProfilerBlock Registrations
auto pyclass_Var_Urho3D_EventProfilerBlock = py::class_<Urho3D::EventProfilerBlock, Urho3D::ExternalPtr<Urho3D::EventProfilerBlock>, Urho3D::ProfilerBlock>(pyclass_Var_Urho3D, "EventProfilerBlock", "test doc");
// Type Urho3D::WorkQueue Registrations
auto pyclass_Var_Urho3D_WorkQueue = py::class_<Urho3D::WorkQueue, Urho3D::SharedPtr<Urho3D::WorkQueue>, Urho3D::Object>(pyclass_Var_Urho3D, "WorkQueue", "test doc");
// Type Urho3D::DebugHud Registrations
auto pyclass_Var_Urho3D_DebugHud = py::class_<Urho3D::DebugHud, Urho3D::SharedPtr<Urho3D::DebugHud>, Urho3D::Object>(pyclass_Var_Urho3D, "DebugHud", "test doc");
// Type Urho3D::Application Registrations
auto pyclass_Var_Urho3D_Application = py::class_<Urho3D::Application, PyApplication, Urho3D::SharedPtr<Urho3D::Application>, Urho3D::Object>(pyclass_Var_Urho3D, "Application", "test doc");
// Type Urho3D::IndexBuffer Registrations
auto pyclass_Var_Urho3D_IndexBuffer = py::class_<Urho3D::IndexBuffer, Urho3D::SharedPtr<Urho3D::IndexBuffer>, Urho3D::Object, Urho3D::GPUObject>(pyclass_Var_Urho3D, "IndexBuffer", "test doc");
// Type Urho3D::AnimationControl Registrations
auto pyclass_Var_Urho3D_AnimationControl = py::class_<Urho3D::AnimationControl, Urho3D::ExternalPtr<Urho3D::AnimationControl>>(pyclass_Var_Urho3D, "AnimationControl", "test doc");
// Type Urho3D::View Registrations
auto pyclass_Var_Urho3D_View = py::class_<Urho3D::View, Urho3D::SharedPtr<Urho3D::View>, Urho3D::Object>(pyclass_Var_Urho3D, "View", "test doc");
// Type Urho3D::ConstantBuffer Registrations
auto pyclass_Var_Urho3D_ConstantBuffer = py::class_<Urho3D::ConstantBuffer, Urho3D::SharedPtr<Urho3D::ConstantBuffer>, Urho3D::Object, Urho3D::GPUObject>(pyclass_Var_Urho3D, "ConstantBuffer", "test doc");
// Type Urho3D::Renderer Registrations
auto pyclass_Var_Urho3D_Renderer = py::class_<Urho3D::Renderer, Urho3D::SharedPtr<Urho3D::Renderer>, Urho3D::Object>(pyclass_Var_Urho3D, "Renderer", "test doc");
// Type Urho3D::ShaderPrecache Registrations
auto pyclass_Var_Urho3D_ShaderPrecache = py::class_<Urho3D::ShaderPrecache, Urho3D::SharedPtr<Urho3D::ShaderPrecache>, Urho3D::Object>(pyclass_Var_Urho3D, "ShaderPrecache", "test doc");
// Type Urho3D::PointOctreeQuery Registrations
auto pyclass_Var_Urho3D_PointOctreeQuery = py::class_<Urho3D::PointOctreeQuery, Urho3D::ExternalPtr<Urho3D::PointOctreeQuery>, Urho3D::OctreeQuery>(pyclass_Var_Urho3D, "PointOctreeQuery", "test doc");
// Type Urho3D::OctreeQueryResult Registrations
auto pyclass_Var_Urho3D_OctreeQueryResult = py::class_<Urho3D::OctreeQueryResult, Urho3D::ExternalPtr<Urho3D::OctreeQueryResult>>(pyclass_Var_Urho3D, "OctreeQueryResult", "test doc");
// Type Urho3D::RenderPathCommand Registrations
auto pyclass_Var_Urho3D_RenderPathCommand = py::class_<Urho3D::RenderPathCommand, Urho3D::ExternalPtr<Urho3D::RenderPathCommand>>(pyclass_Var_Urho3D, "RenderPathCommand", "test doc");
// Type Urho3D::FileSystem Registrations
auto pyclass_Var_Urho3D_FileSystem = py::class_<Urho3D::FileSystem, Urho3D::SharedPtr<Urho3D::FileSystem>, Urho3D::Object>(pyclass_Var_Urho3D, "FileSystem", "test doc");
// Type Urho3D::CursorShapeInfo Registrations
auto pyclass_Var_Urho3D_CursorShapeInfo = py::class_<Urho3D::CursorShapeInfo, Urho3D::ExternalPtr<Urho3D::CursorShapeInfo>>(pyclass_Var_Urho3D, "CursorShapeInfo", "test doc");
// Type Urho3D::LuaScriptEventListener Registrations
auto pyclass_Var_Urho3D_LuaScriptEventListener = py::class_<Urho3D::LuaScriptEventListener, Urho3D::ExternalPtr<Urho3D::LuaScriptEventListener>>(pyclass_Var_Urho3D, "LuaScriptEventListener", "test doc");
// Type Urho3D::NavigationPathPoint Registrations
auto pyclass_Var_Urho3D_NavigationPathPoint = py::class_<Urho3D::NavigationPathPoint, Urho3D::ExternalPtr<Urho3D::NavigationPathPoint>>(pyclass_Var_Urho3D, "NavigationPathPoint", "test doc");
// Type Urho3D::HttpRequest Registrations
auto pyclass_Var_Urho3D_HttpRequest = py::class_<Urho3D::HttpRequest, Urho3D::SharedPtr<Urho3D::HttpRequest>, Urho3D::RefCounted, Urho3D::Deserializer, Urho3D::Thread>(pyclass_Var_Urho3D, "HttpRequest", "test doc");
// Type Urho3D::Localization Registrations
auto pyclass_Var_Urho3D_Localization = py::class_<Urho3D::Localization, Urho3D::SharedPtr<Urho3D::Localization>, Urho3D::Object>(pyclass_Var_Urho3D, "Localization", "test doc");
// Type Urho3D::RocketSys Registrations
auto pyclass_Var_Urho3D_RocketSys = py::class_<Urho3D::RocketSys, Urho3D::SharedPtr<Urho3D::RocketSys>, Urho3D::Object>(pyclass_Var_Urho3D, "RocketSys", "test doc");
// Type Urho3D::FileSelector Registrations
auto pyclass_Var_Urho3D_FileSelector = py::class_<Urho3D::FileSelector, Urho3D::SharedPtr<Urho3D::FileSelector>, Urho3D::Object>(pyclass_Var_Urho3D, "FileSelector", "test doc");
// Type Urho3D::FontFaceFreeType Registrations
auto pyclass_Var_Urho3D_FontFaceFreeType = py::class_<Urho3D::FontFaceFreeType, Urho3D::SharedPtr<Urho3D::FontFaceFreeType>, Urho3D::FontFace>(pyclass_Var_Urho3D, "FontFaceFreeType", "test doc");
// Type Urho3D::MessageBox Registrations
auto pyclass_Var_Urho3D_MessageBox = py::class_<Urho3D::MessageBox, Urho3D::SharedPtr<Urho3D::MessageBox>, Urho3D::Object>(pyclass_Var_Urho3D, "MessageBox", "test doc");
// Type Urho3D::UI Registrations
auto pyclass_Var_Urho3D_UI = py::class_<Urho3D::UI, Urho3D::SharedPtr<Urho3D::UI>, Urho3D::Object>(pyclass_Var_Urho3D, "UI", "test doc");
// Type Urho3D::PropertySet2D Registrations
auto pyclass_Var_Urho3D_PropertySet2D = py::class_<Urho3D::PropertySet2D, Urho3D::SharedPtr<Urho3D::PropertySet2D>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "PropertySet2D", "test doc");
// Type Urho3D::VectorBase Registrations
auto pyclass_Var_Urho3D_VectorBase = py::class_<Urho3D::VectorBase, Urho3D::ExternalPtr<Urho3D::VectorBase>>(pyclass_Var_Urho3D, "VectorBase", "test doc");
// Type Urho3D::LinkedListNode Registrations
auto pyclass_Var_Urho3D_LinkedListNode = py::class_<Urho3D::LinkedListNode, Urho3D::ExternalPtr<Urho3D::LinkedListNode>>(pyclass_Var_Urho3D, "LinkedListNode", "test doc");
// Type Urho3D::Matrix3 Registrations
auto pyclass_Var_Urho3D_Matrix3 = py::class_<Urho3D::Matrix3, Urho3D::ExternalPtr<Urho3D::Matrix3>>(pyclass_Var_Urho3D, "Matrix3", "test doc");
// Type Urho3D::EventHandler Registrations
auto pyclass_Var_Urho3D_EventHandler = py::class_<Urho3D::EventHandler, Urho3D::ExternalPtr<Urho3D::EventHandler>, Urho3D::LinkedListNode>(pyclass_Var_Urho3D, "EventHandler", "test doc");
// Type Urho3D::Serializable Registrations
auto pyclass_Var_Urho3D_Serializable = py::class_<Urho3D::Serializable, Urho3D::SharedPtr<Urho3D::Serializable>, Urho3D::Object>(pyclass_Var_Urho3D, "Serializable", "test doc");
// Type Urho3D::NetworkState Registrations
auto pyclass_Var_Urho3D_NetworkState = py::class_<Urho3D::NetworkState, Urho3D::ExternalPtr<Urho3D::NetworkState>>(pyclass_Var_Urho3D, "NetworkState", "test doc");
// Type Urho3D::Animatable Registrations
auto pyclass_Var_Urho3D_Animatable = py::class_<Urho3D::Animatable, Urho3D::SharedPtr<Urho3D::Animatable>, Urho3D::Serializable>(pyclass_Var_Urho3D, "Animatable", "test doc");
// Type Urho3D::Node Registrations
auto pyclass_Var_Urho3D_Node = py::class_<Urho3D::Node, Urho3D::SharedPtr<Urho3D::Node>, Urho3D::Animatable>(pyclass_Var_Urho3D, "Node", "test doc");
// Type Urho3D::Frustum Registrations
auto pyclass_Var_Urho3D_Frustum = py::class_<Urho3D::Frustum, Urho3D::ExternalPtr<Urho3D::Frustum>>(pyclass_Var_Urho3D, "Frustum", "test doc");
// Type Urho3D::RayOctreeQuery Registrations
auto pyclass_Var_Urho3D_RayOctreeQuery = py::class_<Urho3D::RayOctreeQuery, Urho3D::ExternalPtr<Urho3D::RayOctreeQuery>>(pyclass_Var_Urho3D, "RayOctreeQuery", "test doc");
// Type Urho3D::Timer Registrations
auto pyclass_Var_Urho3D_Timer = py::class_<Urho3D::Timer, Urho3D::ExternalPtr<Urho3D::Timer>>(pyclass_Var_Urho3D, "Timer", "test doc");
// Type Urho3D::Log Registrations
auto pyclass_Var_Urho3D_Log = py::class_<Urho3D::Log, Urho3D::SharedPtr<Urho3D::Log>, Urho3D::Object>(pyclass_Var_Urho3D, "Log", "test doc");
// Type Urho3D::CascadeParameters Registrations
auto pyclass_Var_Urho3D_CascadeParameters = py::class_<Urho3D::CascadeParameters, Urho3D::ExternalPtr<Urho3D::CascadeParameters>>(pyclass_Var_Urho3D, "CascadeParameters", "test doc");
// Type Urho3D::UIElement Registrations
auto pyclass_Var_Urho3D_UIElement = py::class_<Urho3D::UIElement, Urho3D::SharedPtr<Urho3D::UIElement>, Urho3D::Animatable>(pyclass_Var_Urho3D, "UIElement", "test doc");
// Type Urho3D::BorderImage Registrations
auto pyclass_Var_Urho3D_BorderImage = py::class_<Urho3D::BorderImage, Urho3D::SharedPtr<Urho3D::BorderImage>, Urho3D::UIElement>(pyclass_Var_Urho3D, "BorderImage", "test doc");
// Type Urho3D::Profiler Registrations
auto pyclass_Var_Urho3D_Profiler = py::class_<Urho3D::Profiler, Urho3D::SharedPtr<Urho3D::Profiler>, Urho3D::Object>(pyclass_Var_Urho3D, "Profiler", "test doc");
// Type Urho3D::Console Registrations
auto pyclass_Var_Urho3D_Console = py::class_<Urho3D::Console, Urho3D::SharedPtr<Urho3D::Console>, Urho3D::Object>(pyclass_Var_Urho3D, "Console", "test doc");
// Type Urho3D::Button Registrations
auto pyclass_Var_Urho3D_Button = py::class_<Urho3D::Button, Urho3D::SharedPtr<Urho3D::Button>, Urho3D::BorderImage>(pyclass_Var_Urho3D, "Button", "test doc");
// Type Urho3D::LineEdit Registrations
auto pyclass_Var_Urho3D_LineEdit = py::class_<Urho3D::LineEdit, Urho3D::SharedPtr<Urho3D::LineEdit>, Urho3D::BorderImage>(pyclass_Var_Urho3D, "LineEdit", "test doc");

Implement_Class_Bindings_2(m);

// Class HashBase Implementation
pyclass_Var_Urho3D_HashBase
  .def(py::init<>(), "todo: constructor docstring")
  .def("Swap", (void (Urho3D::HashBase::*)(Urho3D::HashBase &)) &Urho3D::HashBase::Swap, "todo: docstring", py::arg("rhs"))
  .def("Size", (unsigned int (Urho3D::HashBase::*)() const) &Urho3D::HashBase::Size, "todo: docstring")
  .def("NumBuckets", (unsigned int (Urho3D::HashBase::*)() const) &Urho3D::HashBase::NumBuckets, "todo: docstring")
  .def("Empty", (bool (Urho3D::HashBase::*)() const) &Urho3D::HashBase::Empty, "todo: docstring")
// Class Variables:
;

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

// Class StringFactory Implementation
pyclass_Var_Urho3D_StringFactory
  .def("GetStringConstant", (const void * (Urho3D::StringFactory::*)(const char *, unsigned int)) &Urho3D::StringFactory::GetStringConstant, "todo: docstring", py::arg("data"), py::arg("length"))
  .def("ReleaseStringConstant", (int (Urho3D::StringFactory::*)(const void *)) &Urho3D::StringFactory::ReleaseStringConstant, "todo: docstring", py::arg("str"))
  .def("GetRawStringData", (int (Urho3D::StringFactory::*)(const void *, char *, unsigned int *) const) &Urho3D::StringFactory::GetRawStringData, "todo: docstring", py::arg("str"), py::arg("data"), py::arg("length"))
// Class Variables:
;

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

// Class AttributeAccessor Implementation
pyclass_Var_Urho3D_AttributeAccessor
  .def("Get", (void (Urho3D::AttributeAccessor::*)(const Urho3D::Serializable *, Urho3D::Variant &) const) &Urho3D::AttributeAccessor::Get, "todo: docstring", py::arg("ptr"), py::arg("dest"))
  .def("Set", (void (Urho3D::AttributeAccessor::*)(Urho3D::Serializable *, const Urho3D::Variant &)) &Urho3D::AttributeAccessor::Set, "todo: docstring", py::arg("ptr"), py::arg("src"))
// Class Variables:
;

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
  //.def_readonly_static("EMPTY",&Urho3D::XMLElement::EMPTY, "todo: var docstring")//const Urho3D::XMLElement
;

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
  //.def_readwrite("data",&Urho3D::DirtyBits::data_, "todo: var docstring")//unsigned char [8]
  .def_readwrite("count",&Urho3D::DirtyBits::count_, "todo: var docstring")//unsigned char
;

// Class ReplicationState Implementation
pyclass_Var_Urho3D_ReplicationState
// Class Variables:
  //.def_readwrite("connection",&Urho3D::ReplicationState::connection_, "todo: var docstring")//Urho3D::Connection *
;

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

// Class ComponentReplicationState Implementation
pyclass_Var_Urho3D_ComponentReplicationState
// Class Variables:
  //.def_readwrite("nodeState",&Urho3D::ComponentReplicationState::nodeState_, "todo: var docstring")//Urho3D::NodeReplicationState *
  .def_readwrite("component",&Urho3D::ComponentReplicationState::component_, "todo: var docstring")//Urho3D::WeakPtr<Urho3D::Component>
  .def_readwrite("dirtyAttributes",&Urho3D::ComponentReplicationState::dirtyAttributes_, "todo: var docstring")//Urho3D::DirtyBits
;

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

// Class EventReceiverGroup Implementation
pyclass_Var_Urho3D_EventReceiverGroup
  .def(py::init<>(), "todo: constructor docstring")
  .def("BeginSendEvent", (void (Urho3D::EventReceiverGroup::*)()) &Urho3D::EventReceiverGroup::BeginSendEvent, "todo: docstring")
  .def("EndSendEvent", (void (Urho3D::EventReceiverGroup::*)()) &Urho3D::EventReceiverGroup::EndSendEvent, "todo: docstring")
  .def("Add", (void (Urho3D::EventReceiverGroup::*)(Urho3D::Object *)) &Urho3D::EventReceiverGroup::Add, "todo: docstring", py::arg("object"))
  .def("Remove", (void (Urho3D::EventReceiverGroup::*)(Urho3D::Object *)) &Urho3D::EventReceiverGroup::Remove, "todo: docstring", py::arg("object"))
// Class Variables:
  //.def_readwrite("receivers",&Urho3D::EventReceiverGroup::receivers_, "todo: var docstring")//Urho3D::PODVector<Urho3D::Object *>
;

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
  //.def_readwrite("drawable",&Urho3D::RayQueryResult::drawable_, "todo: var docstring")//Urho3D::Drawable *
  //.def_readwrite("node",&Urho3D::RayQueryResult::node_, "todo: var docstring")//Urho3D::Node *
  .def_readwrite("subObject",&Urho3D::RayQueryResult::subObject_, "todo: var docstring")//unsigned int
;

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

// Class HiresTimer Implementation
pyclass_Var_Urho3D_HiresTimer
  .def(py::init<>(), "todo: constructor docstring")
  .def("GetUSec", (long long (Urho3D::HiresTimer::*)(bool)) &Urho3D::HiresTimer::GetUSec, "todo: docstring", py::arg("reset"))
  .def("Reset", (void (Urho3D::HiresTimer::*)()) &Urho3D::HiresTimer::Reset, "todo: docstring")
// Class Variables:
;

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

// Class NodeImpl Implementation
pyclass_Var_Urho3D_NodeImpl
// Class Variables:
  //.def_readwrite("dependencyNodes",&Urho3D::NodeImpl::dependencyNodes_, "todo: var docstring")//Urho3D::PODVector<Urho3D::Node *>
  //.def_readwrite("owner",&Urho3D::NodeImpl::owner_, "todo: var docstring")//Urho3D::Connection *
  .def_readwrite("name",&Urho3D::NodeImpl::name_, "todo: var docstring")//Urho3D::String
  .def_readwrite("tags",&Urho3D::NodeImpl::tags_, "todo: var docstring")//Urho3D::Vector<Urho3D::String>
  .def_readwrite("nameHash",&Urho3D::NodeImpl::nameHash_, "todo: var docstring")//Urho3D::StringHash
  .def_readwrite("attrBuffer",&Urho3D::NodeImpl::attrBuffer_, "todo: var docstring")//Urho3D::VectorBuffer
  .def_readwrite("basePath",&Urho3D::NodeImpl::basePath_, "todo: var docstring")//Urho3D::String
;

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
  //.def_readwrite("element",&Urho3D::UIBatch::element_, "todo: var docstring")//Urho3D::UIElement *
  .def_readwrite("blendMode",&Urho3D::UIBatch::blendMode_, "todo: var docstring")//Urho3D::BlendMode
  .def_readwrite("scissor",&Urho3D::UIBatch::scissor_, "todo: var docstring")//Urho3D::IntRect
  //.def_readwrite("texture",&Urho3D::UIBatch::texture_, "todo: var docstring")//Urho3D::Texture *
  .def_readwrite("invTextureSize",&Urho3D::UIBatch::invTextureSize_, "todo: var docstring")//Urho3D::Vector2
  //.def_readwrite("vertexData",&Urho3D::UIBatch::vertexData_, "todo: var docstring")//Urho3D::PODVector<float> *
  .def_readwrite("vertexStart",&Urho3D::UIBatch::vertexStart_, "todo: var docstring")//unsigned int
  .def_readwrite("vertexEnd",&Urho3D::UIBatch::vertexEnd_, "todo: var docstring")//unsigned int
  .def_readwrite("color",&Urho3D::UIBatch::color_, "todo: var docstring")//unsigned int
  .def_readwrite("useGradient",&Urho3D::UIBatch::useGradient_, "todo: var docstring")//bool
  //.def_readwrite("custom_material",&Urho3D::UIBatch::custom_material_, "todo: var docstring")//Urho3D::Material *
  .def_readwrite_static("posAdjust",&Urho3D::UIBatch::posAdjust, "todo: var docstring")//Urho3D::Vector3
;

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

// Class Condition Implementation
pyclass_Var_Urho3D_Condition
  .def(py::init<>(), "todo: constructor docstring")
  //.def("~Condition", (void (Urho3D::Condition::*)()) &Urho3D::Condition::~Condition, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("Set", (void (Urho3D::Condition::*)()) &Urho3D::Condition::Set, "todo: docstring")
  .def("Wait", (void (Urho3D::Condition::*)()) &Urho3D::Condition::Wait, "todo: docstring")
// Class Variables:
;

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
  //.def_readwrite("name",&Urho3D::ProfilerBlock::name_, "todo: var docstring")//char *
  .def_readwrite("timer",&Urho3D::ProfilerBlock::timer_, "todo: var docstring")//Urho3D::HiresTimer
  .def_readwrite("time",&Urho3D::ProfilerBlock::time_, "todo: var docstring")//long long
  .def_readwrite("maxTime",&Urho3D::ProfilerBlock::maxTime_, "todo: var docstring")//long long
  .def_readwrite("count",&Urho3D::ProfilerBlock::count_, "todo: var docstring")//unsigned int
  //.def_readwrite("parent",&Urho3D::ProfilerBlock::parent_, "todo: var docstring")//Urho3D::ProfilerBlock *
  //.def_readwrite("children",&Urho3D::ProfilerBlock::children_, "todo: var docstring")//Urho3D::PODVector<Urho3D::ProfilerBlock *>
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

// Class AutoProfileBlock Implementation
pyclass_Var_Urho3D_AutoProfileBlock
  .def(py::init<Urho3D::Profiler *, const char *>(), "todo: constructor docstring")
  //.def("~AutoProfileBlock", (void (Urho3D::AutoProfileBlock::*)()) &Urho3D::AutoProfileBlock::~AutoProfileBlock, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
;

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
  //.def_readwrite_static("elementSemanticNames",&Urho3D::ShaderVariation::elementSemanticNames, "todo: var docstring")//const char *[]
;

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
  //.def_readwrite("result",&Urho3D::OctreeQuery::result_, "todo: var docstring")//Urho3D::PODVector<Urho3D::Drawable *> &
  .def_readwrite("drawableFlags",&Urho3D::OctreeQuery::drawableFlags_, "todo: var docstring")//unsigned char
  .def_readwrite("viewMask",&Urho3D::OctreeQuery::viewMask_, "todo: var docstring")//unsigned int
;

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

// Class AllContentOctreeQuery Implementation
pyclass_Var_Urho3D_AllContentOctreeQuery
  //.def(py::init<Urho3D::PODVector<Urho3D::Drawable *> &, unsigned char, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::PODVector<Urho3D::Drawable', 'unsigned char', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("TestOctant", (Urho3D::Intersection (Urho3D::AllContentOctreeQuery::*)(const Urho3D::BoundingBox &, bool)) &Urho3D::AllContentOctreeQuery::TestOctant, "todo: docstring", py::arg("box"), py::arg("inside"))
  //.def("TestDrawables", (void (Urho3D::AllContentOctreeQuery::*)(Urho3D::Drawable **, Urho3D::Drawable **, bool)) &Urho3D::AllContentOctreeQuery::TestDrawables, "todo: docstring", py::arg("start"), py::arg("end"), py::arg("inside"))
    //['Urho3D::Drawable', 'Urho3D::Drawable', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 2
// Class Variables:
;

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

// Class TrailPoint Implementation
pyclass_Var_Urho3D_TrailPoint
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::Vector3 &, const Urho3D::Vector3 &>(), "todo: constructor docstring")
// Class Variables:
  .def_readwrite("position",&Urho3D::TrailPoint::position_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("forward",&Urho3D::TrailPoint::forward_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("parentPos",&Urho3D::TrailPoint::parentPos_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("elapsedLength",&Urho3D::TrailPoint::elapsedLength_, "todo: var docstring")//float
  //.def_readwrite("next",&Urho3D::TrailPoint::next_, "todo: var docstring")//Urho3D::TrailPoint *
  .def_readwrite("lifetime",&Urho3D::TrailPoint::lifetime_, "todo: var docstring")//float
  .def_readwrite("sortDistance",&Urho3D::TrailPoint::sortDistance_, "todo: var docstring")//float
;

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
  //.def_readwrite("ctx",&Urho3D::NavBuildData::ctx_, "todo: var docstring")//rcContext *
  //.def_readwrite("heightField",&Urho3D::NavBuildData::heightField_, "todo: var docstring")//rcHeightfield *
  //.def_readwrite("compactHeightField",&Urho3D::NavBuildData::compactHeightField_, "todo: var docstring")//rcCompactHeightfield *
  .def_readwrite("navAreas",&Urho3D::NavBuildData::navAreas_, "todo: var docstring")//Urho3D::PODVector<Urho3D::NavAreaStub>
;

// Class NavAreaStub Implementation
pyclass_Var_Urho3D_NavAreaStub
// Class Variables:
  .def_readwrite("bounds",&Urho3D::NavAreaStub::bounds_, "todo: var docstring")//Urho3D::BoundingBox
  .def_readwrite("areaID",&Urho3D::NavAreaStub::areaID_, "todo: var docstring")//unsigned char
;

// Class SceneReplicationState Implementation
pyclass_Var_Urho3D_SceneReplicationState
  .def("Clear", (void (Urho3D::SceneReplicationState::*)()) &Urho3D::SceneReplicationState::Clear, "todo: docstring")
// Class Variables:
  .def_readwrite("nodeStates",&Urho3D::SceneReplicationState::nodeStates_, "todo: var docstring")//Urho3D::HashMap<unsigned int, Urho3D::NodeReplicationState>
  .def_readwrite("dirtyNodes",&Urho3D::SceneReplicationState::dirtyNodes_, "todo: var docstring")//Urho3D::HashSet<unsigned int>
;

// Class PhysicsRaycastResult Implementation
pyclass_Var_Urho3D_PhysicsRaycastResult
  .def(py::self != Urho3D::PhysicsRaycastResult(), "todo: docstring")
    //['Urho3D::PhysicsRaycastResult']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("position",&Urho3D::PhysicsRaycastResult::position_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("normal",&Urho3D::PhysicsRaycastResult::normal_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("distance",&Urho3D::PhysicsRaycastResult::distance_, "todo: var docstring")//float
  .def_readwrite("hitFraction",&Urho3D::PhysicsRaycastResult::hitFraction_, "todo: var docstring")//float
  //.def_readwrite("body",&Urho3D::PhysicsRaycastResult::body_, "todo: var docstring")//Urho3D::RigidBody *
;

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

// Class PhysicsRaycastResult2D Implementation
pyclass_Var_Urho3D_PhysicsRaycastResult2D
  .def(py::self != Urho3D::PhysicsRaycastResult2D(), "todo: docstring")
    //['Urho3D::PhysicsRaycastResult2D']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  .def_readwrite("position",&Urho3D::PhysicsRaycastResult2D::position_, "todo: var docstring")//Urho3D::Vector2
  .def_readwrite("normal",&Urho3D::PhysicsRaycastResult2D::normal_, "todo: var docstring")//Urho3D::Vector2
  .def_readwrite("distance",&Urho3D::PhysicsRaycastResult2D::distance_, "todo: var docstring")//float
  //.def_readwrite("body",&Urho3D::PhysicsRaycastResult2D::body_, "todo: var docstring")//Urho3D::RigidBody2D *
;

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

// Class ListBase Implementation
pyclass_Var_Urho3D_ListBase
  .def(py::init<>(), "todo: constructor docstring")
  .def("Swap", (void (Urho3D::ListBase::*)(Urho3D::ListBase &)) &Urho3D::ListBase::Swap, "todo: docstring", py::arg("rhs"))
// Class Variables:
;

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
  //.def_readonly_static("EMPTY",&Urho3D::Variant::EMPTY, "todo: var docstring")//const Urho3D::Variant
  .def_readonly_static("emptyBuffer",&Urho3D::Variant::emptyBuffer, "todo: var docstring")//const Urho3D::PODVector<unsigned char>
  .def_readonly_static("emptyResourceRef",&Urho3D::Variant::emptyResourceRef, "todo: var docstring")//const Urho3D::ResourceRef
  .def_readonly_static("emptyResourceRefList",&Urho3D::Variant::emptyResourceRefList, "todo: var docstring")//const Urho3D::ResourceRefList
  .def_readonly_static("emptyVariantMap",&Urho3D::Variant::emptyVariantMap, "todo: var docstring")//const Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>
  .def_readonly_static("emptyVariantVector",&Urho3D::Variant::emptyVariantVector, "todo: var docstring")//const Urho3D::Vector<Urho3D::Variant>
  .def_readonly_static("emptyStringVector",&Urho3D::Variant::emptyStringVector, "todo: var docstring")//const Urho3D::Vector<Urho3D::String>
;

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
  //.def_readonly_static("EMPTY",&Urho3D::JSONValue::EMPTY, "todo: var docstring")//const Urho3D::JSONValue
  .def_readonly_static("emptyArray",&Urho3D::JSONValue::emptyArray, "todo: var docstring")//const Urho3D::Vector<Urho3D::JSONValue>
  .def_readonly_static("emptyObject",&Urho3D::JSONValue::emptyObject, "todo: var docstring")//const Urho3D::HashMap<Urho3D::String, Urho3D::JSONValue>
;

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
  //.def_readwrite("geometry",&Urho3D::SourceBatch::geometry_, "todo: var docstring")//Urho3D::Geometry *
  .def_readwrite("material",&Urho3D::SourceBatch::material_, "todo: var docstring")//Urho3D::SharedPtr<Urho3D::Material>
  //.def_readwrite("worldTransform",&Urho3D::SourceBatch::worldTransform_, "todo: var docstring")//const Urho3D::Matrix3x4 *
  .def_readwrite("numWorldTransforms",&Urho3D::SourceBatch::numWorldTransforms_, "todo: var docstring")//unsigned int
  //.def_readwrite("instancingData",&Urho3D::SourceBatch::instancingData_, "todo: var docstring")//void *
  .def_readwrite("geometryType",&Urho3D::SourceBatch::geometryType_, "todo: var docstring")//Urho3D::GeometryType
;

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

// Class NodeReplicationState Implementation
pyclass_Var_Urho3D_NodeReplicationState
// Class Variables:
  //.def_readwrite("sceneState",&Urho3D::NodeReplicationState::sceneState_, "todo: var docstring")//Urho3D::SceneReplicationState *
  .def_readwrite("node",&Urho3D::NodeReplicationState::node_, "todo: var docstring")//Urho3D::WeakPtr<Urho3D::Node>
  .def_readwrite("dirtyAttributes",&Urho3D::NodeReplicationState::dirtyAttributes_, "todo: var docstring")//Urho3D::DirtyBits
  .def_readwrite("dirtyVars",&Urho3D::NodeReplicationState::dirtyVars_, "todo: var docstring")//Urho3D::HashSet<Urho3D::StringHash>
  .def_readwrite("componentStates",&Urho3D::NodeReplicationState::componentStates_, "todo: var docstring")//Urho3D::HashMap<unsigned int, Urho3D::ComponentReplicationState>
  .def_readwrite("priorityAcc",&Urho3D::NodeReplicationState::priorityAcc_, "todo: var docstring")//float
  .def_readwrite("markedDirty",&Urho3D::NodeReplicationState::markedDirty_, "todo: var docstring")//bool
;

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

// Class EventProfilerBlock Implementation
pyclass_Var_Urho3D_EventProfilerBlock
  .def(py::init<Urho3D::EventProfilerBlock *, Urho3D::StringHash>(), "todo: constructor docstring")
  .def("GetChild", (Urho3D::EventProfilerBlock * (Urho3D::EventProfilerBlock::*)(Urho3D::StringHash)) &Urho3D::EventProfilerBlock::GetChild, "todo: docstring", py::arg("eventID"))
// Class Variables:
  .def_readwrite("eventID",&Urho3D::EventProfilerBlock::eventID_, "todo: var docstring")//Urho3D::StringHash
;

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

// Class OctreeQueryResult Implementation
pyclass_Var_Urho3D_OctreeQueryResult
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::self != Urho3D::OctreeQueryResult(), "todo: docstring")
    //['Urho3D::OctreeQueryResult']; op !=, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad False, max ptr 0
// Class Variables:
  //.def_readwrite("drawable",&Urho3D::OctreeQueryResult::drawable_, "todo: var docstring")//Urho3D::Drawable *
  //.def_readwrite("node",&Urho3D::OctreeQueryResult::node_, "todo: var docstring")//Urho3D::Node *
;

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
  //.def_readwrite("textureNames",&Urho3D::RenderPathCommand::textureNames_, "todo: var docstring")//Urho3D::String [16]
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

// Class CursorShapeInfo Implementation
pyclass_Var_Urho3D_CursorShapeInfo
  .def(py::init<>(), "todo: constructor docstring")
  .def(py::init<int>(), "todo: constructor docstring")
// Class Variables:
  .def_readwrite("image",&Urho3D::CursorShapeInfo::image_, "todo: var docstring")//Urho3D::SharedPtr<Urho3D::Image>
  .def_readwrite("texture",&Urho3D::CursorShapeInfo::texture_, "todo: var docstring")//Urho3D::SharedPtr<Urho3D::Texture>
  .def_readwrite("imageRect",&Urho3D::CursorShapeInfo::imageRect_, "todo: var docstring")//Urho3D::IntRect
  .def_readwrite("hotSpot",&Urho3D::CursorShapeInfo::hotSpot_, "todo: var docstring")//Urho3D::IntVector2
  //.def_readwrite("osCursor",&Urho3D::CursorShapeInfo::osCursor_, "todo: var docstring")//SDL_Cursor *
  .def_readwrite("systemDefined",&Urho3D::CursorShapeInfo::systemDefined_, "todo: var docstring")//bool
  .def_readwrite("systemCursor",&Urho3D::CursorShapeInfo::systemCursor_, "todo: var docstring")//int
;

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

// Class NavigationPathPoint Implementation
pyclass_Var_Urho3D_NavigationPathPoint
// Class Variables:
  .def_readwrite("position",&Urho3D::NavigationPathPoint::position_, "todo: var docstring")//Urho3D::Vector3
  .def_readwrite("flag",&Urho3D::NavigationPathPoint::flag_, "todo: var docstring")//Urho3D::NavigationPathPointFlag
  .def_readwrite("areaID",&Urho3D::NavigationPathPoint::areaID_, "todo: var docstring")//unsigned char
;

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

// Class VectorBase Implementation
pyclass_Var_Urho3D_VectorBase
  .def(py::init<>(), "todo: constructor docstring")
  .def("Swap", (void (Urho3D::VectorBase::*)(Urho3D::VectorBase &)) &Urho3D::VectorBase::Swap, "todo: docstring", py::arg("rhs"))
// Class Variables:
;

// Class LinkedListNode Implementation
pyclass_Var_Urho3D_LinkedListNode
  .def(py::init<>(), "todo: constructor docstring")
// Class Variables:
  //.def_readwrite("next",&Urho3D::LinkedListNode::next_, "todo: var docstring")//Urho3D::LinkedListNode *
;

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

// Class NetworkState Implementation
pyclass_Var_Urho3D_NetworkState
// Class Variables:
  //.def_readwrite("attributes",&Urho3D::NetworkState::attributes_, "todo: var docstring")//const Urho3D::Vector<Urho3D::AttributeInfo> *
  .def_readwrite("currentValues",&Urho3D::NetworkState::currentValues_, "todo: var docstring")//Urho3D::Vector<Urho3D::Variant>
  .def_readwrite("previousValues",&Urho3D::NetworkState::previousValues_, "todo: var docstring")//Urho3D::Vector<Urho3D::Variant>
  //.def_readwrite("replicationStates",&Urho3D::NetworkState::replicationStates_, "todo: var docstring")//Urho3D::PODVector<Urho3D::ReplicationState *>
  .def_readwrite("previousVars",&Urho3D::NetworkState::previousVars_, "todo: var docstring")//Urho3D::HashMap<Urho3D::StringHash, Urho3D::Variant>
  .def_readwrite("interceptMask",&Urho3D::NetworkState::interceptMask_, "todo: var docstring")//unsigned long long
;

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
  //.def_readwrite("planes",&Urho3D::Frustum::planes_, "todo: var docstring")//Urho3D::Plane [6]
  //.def_readwrite("vertices",&Urho3D::Frustum::vertices_, "todo: var docstring")//Urho3D::Vector3 [8]
;

// Class RayOctreeQuery Implementation
pyclass_Var_Urho3D_RayOctreeQuery
  //.def(py::init<Urho3D::PODVector<Urho3D::RayQueryResult> &, const Urho3D::Ray &, Urho3D::RayQueryLevel, float, unsigned char, unsigned int>(), "todo: constructor docstring")
    //['Urho3D::PODVector<Urho3D::RayQueryResult>', 'Urho3D::Ray', 'Urho3D::RayQueryLevel', 'float', 'unsigned char', 'unsigned int']; op False, ctor True, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def(py::init<const Urho3D::RayOctreeQuery &>(), "todo: constructor docstring")
    //['Urho3D::RayOctreeQuery']; op False, ctor True, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
  //  .def(py::self = Urho3D::RayOctreeQuery(), "todo: docstring").def("__assign__", (Urho3D::RayOctreeQuery & (Urho3D::RayOctreeQuery::*)(const Urho3D::RayOctreeQuery &)) &Urho3D::RayOctreeQuery::operator=, py::operator, "todo: operator docstring. Switch to py: :self ops.")
    //['Urho3D::RayOctreeQuery']; op =, ctor False, dtor False, variadic False, deleted True, ret bad False, param bad False, max ptr 0
// Class Variables:
  //.def_readwrite("result",&Urho3D::RayOctreeQuery::result_, "todo: var docstring")//Urho3D::PODVector<Urho3D::RayQueryResult> &
  .def_readwrite("ray",&Urho3D::RayOctreeQuery::ray_, "todo: var docstring")//Urho3D::Ray
  .def_readwrite("drawableFlags",&Urho3D::RayOctreeQuery::drawableFlags_, "todo: var docstring")//unsigned char
  .def_readwrite("viewMask",&Urho3D::RayOctreeQuery::viewMask_, "todo: var docstring")//unsigned int
  .def_readwrite("maxDistance",&Urho3D::RayOctreeQuery::maxDistance_, "todo: var docstring")//float
  .def_readwrite("level",&Urho3D::RayOctreeQuery::level_, "todo: var docstring")//Urho3D::RayQueryLevel
;

// Class Timer Implementation
pyclass_Var_Urho3D_Timer
  .def(py::init<>(), "todo: constructor docstring")
  .def("GetMSec", (unsigned int (Urho3D::Timer::*)(bool)) &Urho3D::Timer::GetMSec, "todo: docstring", py::arg("reset"))
  .def("Reset", (void (Urho3D::Timer::*)()) &Urho3D::Timer::Reset, "todo: docstring")
// Class Variables:
;

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
