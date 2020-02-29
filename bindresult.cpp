
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


#include <Urho3D/Urho3DAll.h>

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
// Declare the holder types shared and weak ptr
//================================================
// TODO: Consider global hashmap of pointers for external pointer, then we could mark it as safe from raw ptr.
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::ExternalPtr<T>, false);
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::SharedPtr<T>, true);
PYBIND11_DECLARE_HOLDER_TYPE(T, Urho3D::WeakPtr<T>, true);

//================================================
// Implement Classes
//================================================
void Implement_Urho3D_HashBase(py::class_<Urho3D::HashBase, Urho3D::ExternalPtr<Urho3D::HashBase>>& pyclass_Var_Urho3D_HashBase)

void Implement_Urho3D_WString(py::class_<Urho3D::WString, Urho3D::ExternalPtr<Urho3D::WString>>& pyclass_Var_Urho3D_WString)

void Implement_Urho3D_StringHashRegister(py::class_<Urho3D::StringHashRegister, Urho3D::ExternalPtr<Urho3D::StringHashRegister>>& pyclass_Var_Urho3D_StringHashRegister)

void Implement_Urho3D_StringFactory(py::class_<Urho3D::StringFactory, Urho3D::ExternalPtr<Urho3D::StringFactory>>& pyclass_Var_Urho3D_StringFactory)

void Implement_Urho3D_MutexLock(py::class_<Urho3D::MutexLock, Urho3D::ExternalPtr<Urho3D::MutexLock>>& pyclass_Var_Urho3D_MutexLock)

void Implement_Urho3D_RefCounted(py::class_<Urho3D::RefCounted, Urho3D::SharedPtr<Urho3D::RefCounted>>& pyclass_Var_Urho3D_RefCounted)

void Implement_Urho3D_Vector2(py::class_<Urho3D::Vector2, Urho3D::ExternalPtr<Urho3D::Vector2>>& pyclass_Var_Urho3D_Vector2)

void Implement_Urho3D_Vector3(py::class_<Urho3D::Vector3, Urho3D::ExternalPtr<Urho3D::Vector3>>& pyclass_Var_Urho3D_Vector3)

void Implement_Urho3D_Color(py::class_<Urho3D::Color, Urho3D::ExternalPtr<Urho3D::Color>>& pyclass_Var_Urho3D_Color)

void Implement_Urho3D_Quaternion(py::class_<Urho3D::Quaternion, Urho3D::ExternalPtr<Urho3D::Quaternion>>& pyclass_Var_Urho3D_Quaternion)

void Implement_Urho3D_Matrix4(py::class_<Urho3D::Matrix4, Urho3D::ExternalPtr<Urho3D::Matrix4>>& pyclass_Var_Urho3D_Matrix4)

void Implement_Urho3D_IntRect(py::class_<Urho3D::IntRect, Urho3D::ExternalPtr<Urho3D::IntRect>>& pyclass_Var_Urho3D_IntRect)

void Implement_Urho3D_ResourceRef(py::class_<Urho3D::ResourceRef, Urho3D::ExternalPtr<Urho3D::ResourceRef>>& pyclass_Var_Urho3D_ResourceRef)

void Implement_Urho3D_Context(py::class_<Urho3D::Context, Urho3D::SharedPtr<Urho3D::Context>, Urho3D::RefCounted>& pyclass_Var_Urho3D_Context)

void Implement_Urho3D_TypeInfo(py::class_<Urho3D::TypeInfo, Urho3D::ExternalPtr<Urho3D::TypeInfo>>& pyclass_Var_Urho3D_TypeInfo)

void Implement_Urho3D_ObjectFactory(py::class_<Urho3D::ObjectFactory, Urho3D::SharedPtr<Urho3D::ObjectFactory>, Urho3D::RefCounted>& pyclass_Var_Urho3D_ObjectFactory)

void Implement_Urho3D_ScriptEventListener(py::class_<Urho3D::ScriptEventListener, Urho3D::ExternalPtr<Urho3D::ScriptEventListener>>& pyclass_Var_Urho3D_ScriptEventListener)

void Implement_Urho3D_AttributeAccessor(py::class_<Urho3D::AttributeAccessor, Urho3D::SharedPtr<Urho3D::AttributeAccessor>, Urho3D::RefCounted>& pyclass_Var_Urho3D_AttributeAccessor)

void Implement_Urho3D_Deserializer(py::class_<Urho3D::Deserializer, Urho3D::ExternalPtr<Urho3D::Deserializer>>& pyclass_Var_Urho3D_Deserializer)

void Implement_Urho3D_XMLElement(py::class_<Urho3D::XMLElement, Urho3D::ExternalPtr<Urho3D::XMLElement>>& pyclass_Var_Urho3D_XMLElement)

void Implement_Urho3D_DirtyBits(py::class_<Urho3D::DirtyBits, Urho3D::ExternalPtr<Urho3D::DirtyBits>>& pyclass_Var_Urho3D_DirtyBits)

void Implement_Urho3D_ReplicationState(py::class_<Urho3D::ReplicationState, Urho3D::ExternalPtr<Urho3D::ReplicationState>>& pyclass_Var_Urho3D_ReplicationState)

void Implement_Urho3D_ValueAnimationInfo(py::class_<Urho3D::ValueAnimationInfo, Urho3D::SharedPtr<Urho3D::ValueAnimationInfo>, Urho3D::RefCounted>& pyclass_Var_Urho3D_ValueAnimationInfo)

void Implement_Urho3D_ComponentReplicationState(py::class_<Urho3D::ComponentReplicationState, Urho3D::ExternalPtr<Urho3D::ComponentReplicationState>, Urho3D::ReplicationState>& pyclass_Var_Urho3D_ComponentReplicationState)

void Implement_Urho3D_SoundStream(py::class_<Urho3D::SoundStream, Urho3D::SharedPtr<Urho3D::SoundStream>, Urho3D::RefCounted>& pyclass_Var_Urho3D_SoundStream)

void Implement_Urho3D_EventReceiverGroup(py::class_<Urho3D::EventReceiverGroup, Urho3D::SharedPtr<Urho3D::EventReceiverGroup>, Urho3D::RefCounted>& pyclass_Var_Urho3D_EventReceiverGroup)

void Implement_Urho3D_Polyhedron(py::class_<Urho3D::Polyhedron, Urho3D::ExternalPtr<Urho3D::Polyhedron>>& pyclass_Var_Urho3D_Polyhedron)

void Implement_Urho3D_Sphere(py::class_<Urho3D::Sphere, Urho3D::ExternalPtr<Urho3D::Sphere>>& pyclass_Var_Urho3D_Sphere)

void Implement_Urho3D_Octant(py::class_<Urho3D::Octant, Urho3D::ExternalPtr<Urho3D::Octant>>& pyclass_Var_Urho3D_Octant)

void Implement_Urho3D_RayQueryResult(py::class_<Urho3D::RayQueryResult, Urho3D::ExternalPtr<Urho3D::RayQueryResult>>& pyclass_Var_Urho3D_RayQueryResult)

void Implement_Urho3D_GPUObject(py::class_<Urho3D::GPUObject, Urho3D::ExternalPtr<Urho3D::GPUObject>>& pyclass_Var_Urho3D_GPUObject)

void Implement_Urho3D_HiresTimer(py::class_<Urho3D::HiresTimer, Urho3D::ExternalPtr<Urho3D::HiresTimer>>& pyclass_Var_Urho3D_HiresTimer)

void Implement_Urho3D_SceneResolver(py::class_<Urho3D::SceneResolver, Urho3D::ExternalPtr<Urho3D::SceneResolver>>& pyclass_Var_Urho3D_SceneResolver)

void Implement_Urho3D_NodeImpl(py::class_<Urho3D::NodeImpl, Urho3D::ExternalPtr<Urho3D::NodeImpl>>& pyclass_Var_Urho3D_NodeImpl)

void Implement_Urho3D_XPathResultSet(py::class_<Urho3D::XPathResultSet, Urho3D::ExternalPtr<Urho3D::XPathResultSet>>& pyclass_Var_Urho3D_XPathResultSet)

void Implement_Urho3D_BiasParameters(py::class_<Urho3D::BiasParameters, Urho3D::ExternalPtr<Urho3D::BiasParameters>>& pyclass_Var_Urho3D_BiasParameters)

void Implement_Urho3D_FocusParameters(py::class_<Urho3D::FocusParameters, Urho3D::ExternalPtr<Urho3D::FocusParameters>>& pyclass_Var_Urho3D_FocusParameters)

void Implement_Urho3D_UIBatch(py::class_<Urho3D::UIBatch, Urho3D::ExternalPtr<Urho3D::UIBatch>>& pyclass_Var_Urho3D_UIBatch)

void Implement_Urho3D_BufferedSoundStream(py::class_<Urho3D::BufferedSoundStream, Urho3D::SharedPtr<Urho3D::BufferedSoundStream>, Urho3D::SoundStream>& pyclass_Var_Urho3D_BufferedSoundStream)

void Implement_Urho3D_Condition(py::class_<Urho3D::Condition, Urho3D::ExternalPtr<Urho3D::Condition>>& pyclass_Var_Urho3D_Condition)

void Implement_Urho3D_ProfilerBlock(py::class_<Urho3D::ProfilerBlock, Urho3D::ExternalPtr<Urho3D::ProfilerBlock>>& pyclass_Var_Urho3D_ProfilerBlock)

void Implement_Urho3D_AutoProfileBlock(py::class_<Urho3D::AutoProfileBlock, Urho3D::ExternalPtr<Urho3D::AutoProfileBlock>>& pyclass_Var_Urho3D_AutoProfileBlock)

void Implement_Urho3D_Spline(py::class_<Urho3D::Spline, Urho3D::ExternalPtr<Urho3D::Spline>>& pyclass_Var_Urho3D_Spline)

void Implement_Urho3D_Skeleton(py::class_<Urho3D::Skeleton, Urho3D::ExternalPtr<Urho3D::Skeleton>>& pyclass_Var_Urho3D_Skeleton)

void Implement_Urho3D_AnimationState(py::class_<Urho3D::AnimationState, Urho3D::SharedPtr<Urho3D::AnimationState>, Urho3D::RefCounted>& pyclass_Var_Urho3D_AnimationState)

void Implement_Urho3D_AnimationTrack(py::class_<Urho3D::AnimationTrack, Urho3D::ExternalPtr<Urho3D::AnimationTrack>>& pyclass_Var_Urho3D_AnimationTrack)

void Implement_Urho3D_ShaderVariation(py::class_<Urho3D::ShaderVariation, Urho3D::SharedPtr<Urho3D::ShaderVariation>, Urho3D::RefCounted, Urho3D::GPUObject>& pyclass_Var_Urho3D_ShaderVariation)

void Implement_Urho3D_Billboard(py::class_<Urho3D::Billboard, Urho3D::ExternalPtr<Urho3D::Billboard>>& pyclass_Var_Urho3D_Billboard)

void Implement_Urho3D_Ray(py::class_<Urho3D::Ray, Urho3D::ExternalPtr<Urho3D::Ray>>& pyclass_Var_Urho3D_Ray)

void Implement_Urho3D_RenderSurface(py::class_<Urho3D::RenderSurface, Urho3D::SharedPtr<Urho3D::RenderSurface>, Urho3D::RefCounted>& pyclass_Var_Urho3D_RenderSurface)

void Implement_Urho3D_ShaderProgram(py::class_<Urho3D::ShaderProgram, Urho3D::SharedPtr<Urho3D::ShaderProgram>, Urho3D::RefCounted, Urho3D::GPUObject>& pyclass_Var_Urho3D_ShaderProgram)

void Implement_Urho3D_OctreeQuery(py::class_<Urho3D::OctreeQuery, Urho3D::ExternalPtr<Urho3D::OctreeQuery>>& pyclass_Var_Urho3D_OctreeQuery)

void Implement_Urho3D_SphereOctreeQuery(py::class_<Urho3D::SphereOctreeQuery, Urho3D::ExternalPtr<Urho3D::SphereOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_SphereOctreeQuery)

void Implement_Urho3D_FrustumOctreeQuery(py::class_<Urho3D::FrustumOctreeQuery, Urho3D::ExternalPtr<Urho3D::FrustumOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_FrustumOctreeQuery)

void Implement_Urho3D_AllContentOctreeQuery(py::class_<Urho3D::AllContentOctreeQuery, Urho3D::ExternalPtr<Urho3D::AllContentOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_AllContentOctreeQuery)

void Implement_Urho3D_RenderTargetInfo(py::class_<Urho3D::RenderTargetInfo, Urho3D::ExternalPtr<Urho3D::RenderTargetInfo>>& pyclass_Var_Urho3D_RenderTargetInfo)

void Implement_Urho3D_RenderPath(py::class_<Urho3D::RenderPath, Urho3D::SharedPtr<Urho3D::RenderPath>, Urho3D::RefCounted>& pyclass_Var_Urho3D_RenderPath)

void Implement_Urho3D_TrailPoint(py::class_<Urho3D::TrailPoint, Urho3D::ExternalPtr<Urho3D::TrailPoint>>& pyclass_Var_Urho3D_TrailPoint)

void Implement_Urho3D_Controls(py::class_<Urho3D::Controls, Urho3D::ExternalPtr<Urho3D::Controls>>& pyclass_Var_Urho3D_Controls)

void Implement_Urho3D_LuaFunction(py::class_<Urho3D::LuaFunction, Urho3D::SharedPtr<Urho3D::LuaFunction>, Urho3D::RefCounted>& pyclass_Var_Urho3D_LuaFunction)

void Implement_Urho3D_AreaAllocator(py::class_<Urho3D::AreaAllocator, Urho3D::ExternalPtr<Urho3D::AreaAllocator>>& pyclass_Var_Urho3D_AreaAllocator)

void Implement_Urho3D_NavBuildData(py::class_<Urho3D::NavBuildData, Urho3D::ExternalPtr<Urho3D::NavBuildData>>& pyclass_Var_Urho3D_NavBuildData)

void Implement_Urho3D_NavAreaStub(py::class_<Urho3D::NavAreaStub, Urho3D::ExternalPtr<Urho3D::NavAreaStub>>& pyclass_Var_Urho3D_NavAreaStub)

void Implement_Urho3D_SceneReplicationState(py::class_<Urho3D::SceneReplicationState, Urho3D::ExternalPtr<Urho3D::SceneReplicationState>, Urho3D::ReplicationState>& pyclass_Var_Urho3D_SceneReplicationState)

void Implement_Urho3D_PhysicsRaycastResult(py::class_<Urho3D::PhysicsRaycastResult, Urho3D::ExternalPtr<Urho3D::PhysicsRaycastResult>>& pyclass_Var_Urho3D_PhysicsRaycastResult)

void Implement_Urho3D_PListValue(py::class_<Urho3D::PListValue, Urho3D::ExternalPtr<Urho3D::PListValue>>& pyclass_Var_Urho3D_PListValue)

void Implement_Urho3D_FontFace(py::class_<Urho3D::FontFace, Urho3D::SharedPtr<Urho3D::FontFace>, Urho3D::RefCounted>& pyclass_Var_Urho3D_FontFace)

void Implement_Urho3D_FontFaceBitmap(py::class_<Urho3D::FontFaceBitmap, Urho3D::SharedPtr<Urho3D::FontFaceBitmap>, Urho3D::FontFace>& pyclass_Var_Urho3D_FontFaceBitmap)

void Implement_Urho3D_PhysicsRaycastResult2D(py::class_<Urho3D::PhysicsRaycastResult2D, Urho3D::ExternalPtr<Urho3D::PhysicsRaycastResult2D>>& pyclass_Var_Urho3D_PhysicsRaycastResult2D)

void Implement_Urho3D_TileMapInfo2D(py::class_<Urho3D::TileMapInfo2D, Urho3D::ExternalPtr<Urho3D::TileMapInfo2D>>& pyclass_Var_Urho3D_TileMapInfo2D)

void Implement_Urho3D_Tile2D(py::class_<Urho3D::Tile2D, Urho3D::SharedPtr<Urho3D::Tile2D>, Urho3D::RefCounted>& pyclass_Var_Urho3D_Tile2D)

void Implement_Urho3D_ListBase(py::class_<Urho3D::ListBase, Urho3D::ExternalPtr<Urho3D::ListBase>>& pyclass_Var_Urho3D_ListBase)

void Implement_Urho3D_StringHash(py::class_<Urho3D::StringHash, Urho3D::ExternalPtr<Urho3D::StringHash>>& pyclass_Var_Urho3D_StringHash)

void Implement_Urho3D_Mutex(py::class_<Urho3D::Mutex, Urho3D::ExternalPtr<Urho3D::Mutex>>& pyclass_Var_Urho3D_Mutex)

void Implement_Urho3D_IntVector2(py::class_<Urho3D::IntVector2, Urho3D::ExternalPtr<Urho3D::IntVector2>>& pyclass_Var_Urho3D_IntVector2)

void Implement_Urho3D_Vector4(py::class_<Urho3D::Vector4, Urho3D::ExternalPtr<Urho3D::Vector4>>& pyclass_Var_Urho3D_Vector4)

void Implement_Urho3D_Matrix3x4(py::class_<Urho3D::Matrix3x4, Urho3D::ExternalPtr<Urho3D::Matrix3x4>>& pyclass_Var_Urho3D_Matrix3x4)

void Implement_Urho3D_Variant(py::class_<Urho3D::Variant, Urho3D::ExternalPtr<Urho3D::Variant>>& pyclass_Var_Urho3D_Variant)

void Implement_Urho3D_ResourceRefList(py::class_<Urho3D::ResourceRefList, Urho3D::ExternalPtr<Urho3D::ResourceRefList>>& pyclass_Var_Urho3D_ResourceRefList)

void Implement_Urho3D_Object(py::class_<Urho3D::Object, Urho3D::SharedPtr<Urho3D::Object>, Urho3D::RefCounted>& pyclass_Var_Urho3D_Object)

void Implement_Urho3D_Script(py::class_<Urho3D::Script, Urho3D::SharedPtr<Urho3D::Script>, Urho3D::Object>& pyclass_Var_Urho3D_Script)

void Implement_Urho3D_Connection(py::class_<Urho3D::Connection, Urho3D::SharedPtr<Urho3D::Connection>, Urho3D::Object>& pyclass_Var_Urho3D_Connection)

void Implement_Urho3D_JSONValue(py::class_<Urho3D::JSONValue, Urho3D::ExternalPtr<Urho3D::JSONValue>>& pyclass_Var_Urho3D_JSONValue)

void Implement_Urho3D_Audio(py::class_<Urho3D::Audio, Urho3D::SharedPtr<Urho3D::Audio>, Urho3D::Object>& pyclass_Var_Urho3D_Audio)

void Implement_Urho3D_VertexElement(py::class_<Urho3D::VertexElement, Urho3D::ExternalPtr<Urho3D::VertexElement>>& pyclass_Var_Urho3D_VertexElement)

void Implement_Urho3D_BoundingBox(py::class_<Urho3D::BoundingBox, Urho3D::ExternalPtr<Urho3D::BoundingBox>>& pyclass_Var_Urho3D_BoundingBox)

void Implement_Urho3D_Geometry(py::class_<Urho3D::Geometry, Urho3D::SharedPtr<Urho3D::Geometry>, Urho3D::Object>& pyclass_Var_Urho3D_Geometry)

void Implement_Urho3D_OcclusionBuffer(py::class_<Urho3D::OcclusionBuffer, Urho3D::SharedPtr<Urho3D::OcclusionBuffer>, Urho3D::Object>& pyclass_Var_Urho3D_OcclusionBuffer)

void Implement_Urho3D_SourceBatch(py::class_<Urho3D::SourceBatch, Urho3D::ExternalPtr<Urho3D::SourceBatch>>& pyclass_Var_Urho3D_SourceBatch)

void Implement_Urho3D_Graphics(py::class_<Urho3D::Graphics, Urho3D::SharedPtr<Urho3D::Graphics>, Urho3D::Object>& pyclass_Var_Urho3D_Graphics)

void Implement_Urho3D_Time(py::class_<Urho3D::Time, Urho3D::SharedPtr<Urho3D::Time>, Urho3D::Object>& pyclass_Var_Urho3D_Time)

void Implement_Urho3D_PackageFile(py::class_<Urho3D::PackageFile, Urho3D::SharedPtr<Urho3D::PackageFile>, Urho3D::Object>& pyclass_Var_Urho3D_PackageFile)

void Implement_Urho3D_NodeReplicationState(py::class_<Urho3D::NodeReplicationState, Urho3D::ExternalPtr<Urho3D::NodeReplicationState>, Urho3D::ReplicationState>& pyclass_Var_Urho3D_NodeReplicationState)

void Implement_Urho3D_Plane(py::class_<Urho3D::Plane, Urho3D::ExternalPtr<Urho3D::Plane>>& pyclass_Var_Urho3D_Plane)

void Implement_Urho3D_Pass(py::class_<Urho3D::Pass, Urho3D::SharedPtr<Urho3D::Pass>, Urho3D::RefCounted>& pyclass_Var_Urho3D_Pass)

void Implement_Urho3D_ResourceCache(py::class_<Urho3D::ResourceCache, Urho3D::SharedPtr<Urho3D::ResourceCache>, Urho3D::Object>& pyclass_Var_Urho3D_ResourceCache)

void Implement_Urho3D_ScriptEventInvoker(py::class_<Urho3D::ScriptEventInvoker, Urho3D::SharedPtr<Urho3D::ScriptEventInvoker>, Urho3D::Object>& pyclass_Var_Urho3D_ScriptEventInvoker)

void Implement_Urho3D_OggVorbisSoundStream(py::class_<Urho3D::OggVorbisSoundStream, Urho3D::SharedPtr<Urho3D::OggVorbisSoundStream>, Urho3D::SoundStream>& pyclass_Var_Urho3D_OggVorbisSoundStream)

void Implement_Urho3D_Thread(py::class_<Urho3D::Thread, Urho3D::ExternalPtr<Urho3D::Thread>>& pyclass_Var_Urho3D_Thread)

void Implement_Urho3D_EventProfilerBlock(py::class_<Urho3D::EventProfilerBlock, Urho3D::ExternalPtr<Urho3D::EventProfilerBlock>, Urho3D::ProfilerBlock>& pyclass_Var_Urho3D_EventProfilerBlock)

void Implement_Urho3D_WorkQueue(py::class_<Urho3D::WorkQueue, Urho3D::SharedPtr<Urho3D::WorkQueue>, Urho3D::Object>& pyclass_Var_Urho3D_WorkQueue)

void Implement_Urho3D_DebugHud(py::class_<Urho3D::DebugHud, Urho3D::SharedPtr<Urho3D::DebugHud>, Urho3D::Object>& pyclass_Var_Urho3D_DebugHud)

void Implement_Urho3D_Application(py::class_<Urho3D::Application, PyApplication, Urho3D::SharedPtr<Urho3D::Application>, Urho3D::Object>& pyclass_Var_Urho3D_Application)

void Implement_Urho3D_IndexBuffer(py::class_<Urho3D::IndexBuffer, Urho3D::SharedPtr<Urho3D::IndexBuffer>, Urho3D::Object, Urho3D::GPUObject>& pyclass_Var_Urho3D_IndexBuffer)

void Implement_Urho3D_AnimationControl(py::class_<Urho3D::AnimationControl, Urho3D::ExternalPtr<Urho3D::AnimationControl>>& pyclass_Var_Urho3D_AnimationControl)

void Implement_Urho3D_View(py::class_<Urho3D::View, Urho3D::SharedPtr<Urho3D::View>, Urho3D::Object>& pyclass_Var_Urho3D_View)

void Implement_Urho3D_ConstantBuffer(py::class_<Urho3D::ConstantBuffer, Urho3D::SharedPtr<Urho3D::ConstantBuffer>, Urho3D::Object, Urho3D::GPUObject>& pyclass_Var_Urho3D_ConstantBuffer)

void Implement_Urho3D_Renderer(py::class_<Urho3D::Renderer, Urho3D::SharedPtr<Urho3D::Renderer>, Urho3D::Object>& pyclass_Var_Urho3D_Renderer)

void Implement_Urho3D_ShaderPrecache(py::class_<Urho3D::ShaderPrecache, Urho3D::SharedPtr<Urho3D::ShaderPrecache>, Urho3D::Object>& pyclass_Var_Urho3D_ShaderPrecache)

void Implement_Urho3D_PointOctreeQuery(py::class_<Urho3D::PointOctreeQuery, Urho3D::ExternalPtr<Urho3D::PointOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_PointOctreeQuery)

void Implement_Urho3D_OctreeQueryResult(py::class_<Urho3D::OctreeQueryResult, Urho3D::ExternalPtr<Urho3D::OctreeQueryResult>>& pyclass_Var_Urho3D_OctreeQueryResult)

void Implement_Urho3D_RenderPathCommand(py::class_<Urho3D::RenderPathCommand, Urho3D::ExternalPtr<Urho3D::RenderPathCommand>>& pyclass_Var_Urho3D_RenderPathCommand)

void Implement_Urho3D_FileSystem(py::class_<Urho3D::FileSystem, Urho3D::SharedPtr<Urho3D::FileSystem>, Urho3D::Object>& pyclass_Var_Urho3D_FileSystem)

void Implement_Urho3D_CursorShapeInfo(py::class_<Urho3D::CursorShapeInfo, Urho3D::ExternalPtr<Urho3D::CursorShapeInfo>>& pyclass_Var_Urho3D_CursorShapeInfo)

void Implement_Urho3D_LuaScriptEventListener(py::class_<Urho3D::LuaScriptEventListener, Urho3D::ExternalPtr<Urho3D::LuaScriptEventListener>>& pyclass_Var_Urho3D_LuaScriptEventListener)

void Implement_Urho3D_NavigationPathPoint(py::class_<Urho3D::NavigationPathPoint, Urho3D::ExternalPtr<Urho3D::NavigationPathPoint>>& pyclass_Var_Urho3D_NavigationPathPoint)

void Implement_Urho3D_HttpRequest(py::class_<Urho3D::HttpRequest, Urho3D::SharedPtr<Urho3D::HttpRequest>, Urho3D::RefCounted, Urho3D::Deserializer, Urho3D::Thread>& pyclass_Var_Urho3D_HttpRequest)

void Implement_Urho3D_Localization(py::class_<Urho3D::Localization, Urho3D::SharedPtr<Urho3D::Localization>, Urho3D::Object>& pyclass_Var_Urho3D_Localization)

void Implement_Urho3D_RocketSys(py::class_<Urho3D::RocketSys, Urho3D::SharedPtr<Urho3D::RocketSys>, Urho3D::Object>& pyclass_Var_Urho3D_RocketSys)

void Implement_Urho3D_FileSelector(py::class_<Urho3D::FileSelector, Urho3D::SharedPtr<Urho3D::FileSelector>, Urho3D::Object>& pyclass_Var_Urho3D_FileSelector)

void Implement_Urho3D_FontFaceFreeType(py::class_<Urho3D::FontFaceFreeType, Urho3D::SharedPtr<Urho3D::FontFaceFreeType>, Urho3D::FontFace>& pyclass_Var_Urho3D_FontFaceFreeType)

void Implement_Urho3D_MessageBox(py::class_<Urho3D::MessageBox, Urho3D::SharedPtr<Urho3D::MessageBox>, Urho3D::Object>& pyclass_Var_Urho3D_MessageBox)

void Implement_Urho3D_UI(py::class_<Urho3D::UI, Urho3D::SharedPtr<Urho3D::UI>, Urho3D::Object>& pyclass_Var_Urho3D_UI)

void Implement_Urho3D_PropertySet2D(py::class_<Urho3D::PropertySet2D, Urho3D::SharedPtr<Urho3D::PropertySet2D>, Urho3D::RefCounted>& pyclass_Var_Urho3D_PropertySet2D)

void Implement_Urho3D_VectorBase(py::class_<Urho3D::VectorBase, Urho3D::ExternalPtr<Urho3D::VectorBase>>& pyclass_Var_Urho3D_VectorBase)

void Implement_Urho3D_LinkedListNode(py::class_<Urho3D::LinkedListNode, Urho3D::ExternalPtr<Urho3D::LinkedListNode>>& pyclass_Var_Urho3D_LinkedListNode)

void Implement_Urho3D_Matrix3(py::class_<Urho3D::Matrix3, Urho3D::ExternalPtr<Urho3D::Matrix3>>& pyclass_Var_Urho3D_Matrix3)

void Implement_Urho3D_EventHandler(py::class_<Urho3D::EventHandler, Urho3D::ExternalPtr<Urho3D::EventHandler>, Urho3D::LinkedListNode>& pyclass_Var_Urho3D_EventHandler)

void Implement_Urho3D_Serializable(py::class_<Urho3D::Serializable, Urho3D::SharedPtr<Urho3D::Serializable>, Urho3D::Object>& pyclass_Var_Urho3D_Serializable)

void Implement_Urho3D_NetworkState(py::class_<Urho3D::NetworkState, Urho3D::ExternalPtr<Urho3D::NetworkState>>& pyclass_Var_Urho3D_NetworkState)

void Implement_Urho3D_Animatable(py::class_<Urho3D::Animatable, Urho3D::SharedPtr<Urho3D::Animatable>, Urho3D::Serializable>& pyclass_Var_Urho3D_Animatable)

void Implement_Urho3D_Node(py::class_<Urho3D::Node, Urho3D::SharedPtr<Urho3D::Node>, Urho3D::Animatable>& pyclass_Var_Urho3D_Node)

void Implement_Urho3D_Frustum(py::class_<Urho3D::Frustum, Urho3D::ExternalPtr<Urho3D::Frustum>>& pyclass_Var_Urho3D_Frustum)

void Implement_Urho3D_RayOctreeQuery(py::class_<Urho3D::RayOctreeQuery, Urho3D::ExternalPtr<Urho3D::RayOctreeQuery>>& pyclass_Var_Urho3D_RayOctreeQuery)

void Implement_Urho3D_Timer(py::class_<Urho3D::Timer, Urho3D::ExternalPtr<Urho3D::Timer>>& pyclass_Var_Urho3D_Timer)

void Implement_Urho3D_Log(py::class_<Urho3D::Log, Urho3D::SharedPtr<Urho3D::Log>, Urho3D::Object>& pyclass_Var_Urho3D_Log)

void Implement_Urho3D_CascadeParameters(py::class_<Urho3D::CascadeParameters, Urho3D::ExternalPtr<Urho3D::CascadeParameters>>& pyclass_Var_Urho3D_CascadeParameters)

void Implement_Urho3D_UIElement(py::class_<Urho3D::UIElement, Urho3D::SharedPtr<Urho3D::UIElement>, Urho3D::Animatable>& pyclass_Var_Urho3D_UIElement)

void Implement_Urho3D_BorderImage(py::class_<Urho3D::BorderImage, Urho3D::SharedPtr<Urho3D::BorderImage>, Urho3D::UIElement>& pyclass_Var_Urho3D_BorderImage)

void Implement_Urho3D_Profiler(py::class_<Urho3D::Profiler, Urho3D::SharedPtr<Urho3D::Profiler>, Urho3D::Object>& pyclass_Var_Urho3D_Profiler)

void Implement_Urho3D_Console(py::class_<Urho3D::Console, Urho3D::SharedPtr<Urho3D::Console>, Urho3D::Object>& pyclass_Var_Urho3D_Console)

void Implement_Urho3D_Button(py::class_<Urho3D::Button, Urho3D::SharedPtr<Urho3D::Button>, Urho3D::BorderImage>& pyclass_Var_Urho3D_Button)

void Implement_Urho3D_LineEdit(py::class_<Urho3D::LineEdit, Urho3D::SharedPtr<Urho3D::LineEdit>, Urho3D::BorderImage>& pyclass_Var_Urho3D_LineEdit)

void Implement_Urho3D_VertexBuffer(py::class_<Urho3D::VertexBuffer, Urho3D::SharedPtr<Urho3D::VertexBuffer>, Urho3D::Object, Urho3D::GPUObject>& pyclass_Var_Urho3D_VertexBuffer)

void Implement_Urho3D_BoxOctreeQuery(py::class_<Urho3D::BoxOctreeQuery, Urho3D::ExternalPtr<Urho3D::BoxOctreeQuery>, Urho3D::OctreeQuery>& pyclass_Var_Urho3D_BoxOctreeQuery)

void Implement_Urho3D_Viewport(py::class_<Urho3D::Viewport, Urho3D::SharedPtr<Urho3D::Viewport>, Urho3D::Object>& pyclass_Var_Urho3D_Viewport)

void Implement_Urho3D_FileWatcher(py::class_<Urho3D::FileWatcher, Urho3D::SharedPtr<Urho3D::FileWatcher>, Urho3D::Object, Urho3D::Thread>& pyclass_Var_Urho3D_FileWatcher)

void Implement_Urho3D_Input(py::class_<Urho3D::Input, Urho3D::SharedPtr<Urho3D::Input>, Urho3D::Object>& pyclass_Var_Urho3D_Input)

void Implement_Urho3D_LuaScript(py::class_<Urho3D::LuaScript, Urho3D::SharedPtr<Urho3D::LuaScript>, Urho3D::Object, Urho3D::LuaScriptEventListener>& pyclass_Var_Urho3D_LuaScript)

void Implement_Urho3D_Matrix2(py::class_<Urho3D::Matrix2, Urho3D::ExternalPtr<Urho3D::Matrix2>>& pyclass_Var_Urho3D_Matrix2)

void Implement_Urho3D_Network(py::class_<Urho3D::Network, Urho3D::SharedPtr<Urho3D::Network>, Urho3D::Object>& pyclass_Var_Urho3D_Network)

void Implement_Urho3D_CheckBox(py::class_<Urho3D::CheckBox, Urho3D::SharedPtr<Urho3D::CheckBox>, Urho3D::BorderImage>& pyclass_Var_Urho3D_CheckBox)

void Implement_Urho3D_Window(py::class_<Urho3D::Window, Urho3D::SharedPtr<Urho3D::Window>, Urho3D::BorderImage>& pyclass_Var_Urho3D_Window)

void Implement_Urho3D_ScrollBar(py::class_<Urho3D::ScrollBar, Urho3D::SharedPtr<Urho3D::ScrollBar>, Urho3D::BorderImage>& pyclass_Var_Urho3D_ScrollBar)

void Implement_Urho3D_UISelectable(py::class_<Urho3D::UISelectable, Urho3D::SharedPtr<Urho3D::UISelectable>, Urho3D::UIElement>& pyclass_Var_Urho3D_UISelectable)

void Implement_Urho3D_Slider(py::class_<Urho3D::Slider, Urho3D::SharedPtr<Urho3D::Slider>, Urho3D::BorderImage>& pyclass_Var_Urho3D_Slider)

void Implement_Urho3D_ToolTip(py::class_<Urho3D::ToolTip, Urho3D::SharedPtr<Urho3D::ToolTip>, Urho3D::UIElement>& pyclass_Var_Urho3D_ToolTip)

void Implement_Urho3D_View3D(py::class_<Urho3D::View3D, Urho3D::SharedPtr<Urho3D::View3D>, Urho3D::Window>& pyclass_Var_Urho3D_View3D)

void Implement_Urho3D_TileMapObject2D(py::class_<Urho3D::TileMapObject2D, Urho3D::SharedPtr<Urho3D::TileMapObject2D>, Urho3D::RefCounted>& pyclass_Var_Urho3D_TileMapObject2D)

void Implement_Urho3D_CScriptDictValue(py::class_<Urho3D::CScriptDictValue, Urho3D::ExternalPtr<Urho3D::CScriptDictValue>>& pyclass_Var_Urho3D_CScriptDictValue)

void Implement_Urho3D_Rect(py::class_<Urho3D::Rect, Urho3D::ExternalPtr<Urho3D::Rect>>& pyclass_Var_Urho3D_Rect)

void Implement_Urho3D_ResourceRouter(py::class_<Urho3D::ResourceRouter, Urho3D::SharedPtr<Urho3D::ResourceRouter>, Urho3D::Object>& pyclass_Var_Urho3D_ResourceRouter)

void Implement_Urho3D_Serializer(py::class_<Urho3D::Serializer, Urho3D::ExternalPtr<Urho3D::Serializer>>& pyclass_Var_Urho3D_Serializer)

void Implement_Urho3D_Component(py::class_<Urho3D::Component, Urho3D::SharedPtr<Urho3D::Component>, Urho3D::Animatable>& pyclass_Var_Urho3D_Component)

void Implement_Urho3D_SoundSource(py::class_<Urho3D::SoundSource, Urho3D::SharedPtr<Urho3D::SoundSource>, Urho3D::Component>& pyclass_Var_Urho3D_SoundSource)

void Implement_Urho3D_Drawable(py::class_<Urho3D::Drawable, Urho3D::SharedPtr<Urho3D::Drawable>, Urho3D::Component>& pyclass_Var_Urho3D_Drawable)

void Implement_Urho3D_StaticModel(py::class_<Urho3D::StaticModel, Urho3D::SharedPtr<Urho3D::StaticModel>, Urho3D::Drawable>& pyclass_Var_Urho3D_StaticModel)

void Implement_Urho3D_AbstractFile(py::class_<Urho3D::AbstractFile, Urho3D::ExternalPtr<Urho3D::AbstractFile>, Urho3D::Deserializer, Urho3D::Serializer>& pyclass_Var_Urho3D_AbstractFile)

void Implement_Urho3D_Cursor(py::class_<Urho3D::Cursor, Urho3D::SharedPtr<Urho3D::Cursor>, Urho3D::BorderImage>& pyclass_Var_Urho3D_Cursor)

void Implement_Urho3D_SoundSource3D(py::class_<Urho3D::SoundSource3D, Urho3D::SharedPtr<Urho3D::SoundSource3D>, Urho3D::SoundSource>& pyclass_Var_Urho3D_SoundSource3D)

void Implement_Urho3D_Engine(py::class_<Urho3D::Engine, Urho3D::SharedPtr<Urho3D::Engine>, Urho3D::Object>& pyclass_Var_Urho3D_Engine)

void Implement_Urho3D_Text(py::class_<Urho3D::Text, Urho3D::SharedPtr<Urho3D::Text>, Urho3D::UISelectable>& pyclass_Var_Urho3D_Text)

void Implement_Urho3D_AnimatedModel(py::class_<Urho3D::AnimatedModel, Urho3D::SharedPtr<Urho3D::AnimatedModel>, Urho3D::StaticModel>& pyclass_Var_Urho3D_AnimatedModel)

void Implement_Urho3D_BillboardSet(py::class_<Urho3D::BillboardSet, Urho3D::SharedPtr<Urho3D::BillboardSet>, Urho3D::Drawable>& pyclass_Var_Urho3D_BillboardSet)

void Implement_Urho3D_DecalSet(py::class_<Urho3D::DecalSet, Urho3D::SharedPtr<Urho3D::DecalSet>, Urho3D::Drawable>& pyclass_Var_Urho3D_DecalSet)

void Implement_Urho3D_Octree(py::class_<Urho3D::Octree, Urho3D::SharedPtr<Urho3D::Octree>, Urho3D::Component, Urho3D::Octant>& pyclass_Var_Urho3D_Octree)

void Implement_Urho3D_ParticleEmitter(py::class_<Urho3D::ParticleEmitter, Urho3D::SharedPtr<Urho3D::ParticleEmitter>, Urho3D::BillboardSet>& pyclass_Var_Urho3D_ParticleEmitter)

void Implement_Urho3D_Skybox(py::class_<Urho3D::Skybox, Urho3D::SharedPtr<Urho3D::Skybox>, Urho3D::StaticModel>& pyclass_Var_Urho3D_Skybox)

void Implement_Urho3D_TerrainPatch(py::class_<Urho3D::TerrainPatch, Urho3D::SharedPtr<Urho3D::TerrainPatch>, Urho3D::Drawable>& pyclass_Var_Urho3D_TerrainPatch)

void Implement_Urho3D_IKConstraint(py::class_<Urho3D::IKConstraint, Urho3D::SharedPtr<Urho3D::IKConstraint>, Urho3D::Component>& pyclass_Var_Urho3D_IKConstraint)

void Implement_Urho3D_IKEffector(py::class_<Urho3D::IKEffector, Urho3D::SharedPtr<Urho3D::IKEffector>, Urho3D::Component>& pyclass_Var_Urho3D_IKEffector)

void Implement_Urho3D_NamedPipe(py::class_<Urho3D::NamedPipe, Urho3D::SharedPtr<Urho3D::NamedPipe>, Urho3D::Object, Urho3D::AbstractFile>& pyclass_Var_Urho3D_NamedPipe)

void Implement_Urho3D_LuaScriptInstance(py::class_<Urho3D::LuaScriptInstance, Urho3D::SharedPtr<Urho3D::LuaScriptInstance>, Urho3D::Component, Urho3D::LuaScriptEventListener>& pyclass_Var_Urho3D_LuaScriptInstance)

void Implement_Urho3D_NavigationMesh(py::class_<Urho3D::NavigationMesh, Urho3D::SharedPtr<Urho3D::NavigationMesh>, Urho3D::Component>& pyclass_Var_Urho3D_NavigationMesh)

void Implement_Urho3D_NavArea(py::class_<Urho3D::NavArea, Urho3D::SharedPtr<Urho3D::NavArea>, Urho3D::Component>& pyclass_Var_Urho3D_NavArea)

void Implement_Urho3D_Obstacle(py::class_<Urho3D::Obstacle, Urho3D::SharedPtr<Urho3D::Obstacle>, Urho3D::Component>& pyclass_Var_Urho3D_Obstacle)

void Implement_Urho3D_Navigable(py::class_<Urho3D::Navigable, Urho3D::SharedPtr<Urho3D::Navigable>, Urho3D::Component>& pyclass_Var_Urho3D_Navigable)

void Implement_Urho3D_PhysicsWorld(py::class_<Urho3D::PhysicsWorld, Urho3D::SharedPtr<Urho3D::PhysicsWorld>, Urho3D::Component>& pyclass_Var_Urho3D_PhysicsWorld)

void Implement_Urho3D_CollisionShape(py::class_<Urho3D::CollisionShape, Urho3D::SharedPtr<Urho3D::CollisionShape>, Urho3D::Component>& pyclass_Var_Urho3D_CollisionShape)

void Implement_Urho3D_LogicComponent(py::class_<Urho3D::LogicComponent, Urho3D::SharedPtr<Urho3D::LogicComponent>, Urho3D::Component>& pyclass_Var_Urho3D_LogicComponent)

void Implement_Urho3D_RaycastVehicle(py::class_<Urho3D::RaycastVehicle, Urho3D::SharedPtr<Urho3D::RaycastVehicle>, Urho3D::LogicComponent>& pyclass_Var_Urho3D_RaycastVehicle)

void Implement_Urho3D_SplinePath(py::class_<Urho3D::SplinePath, Urho3D::SharedPtr<Urho3D::SplinePath>, Urho3D::Component>& pyclass_Var_Urho3D_SplinePath)

void Implement_Urho3D_Menu(py::class_<Urho3D::Menu, Urho3D::SharedPtr<Urho3D::Menu>, Urho3D::Button>& pyclass_Var_Urho3D_Menu)

void Implement_Urho3D_ScrollView(py::class_<Urho3D::ScrollView, Urho3D::SharedPtr<Urho3D::ScrollView>, Urho3D::UIElement>& pyclass_Var_Urho3D_ScrollView)

void Implement_Urho3D_Sprite(py::class_<Urho3D::Sprite, Urho3D::SharedPtr<Urho3D::Sprite>, Urho3D::UIElement>& pyclass_Var_Urho3D_Sprite)

void Implement_Urho3D_UIComponent(py::class_<Urho3D::UIComponent, Urho3D::SharedPtr<Urho3D::UIComponent>, Urho3D::Component>& pyclass_Var_Urho3D_UIComponent)

void Implement_Urho3D_Renderer2D(py::class_<Urho3D::Renderer2D, Urho3D::SharedPtr<Urho3D::Renderer2D>, Urho3D::Drawable>& pyclass_Var_Urho3D_Renderer2D)

void Implement_Urho3D_RigidBody2D(py::class_<Urho3D::RigidBody2D, Urho3D::SharedPtr<Urho3D::RigidBody2D>, Urho3D::Component>& pyclass_Var_Urho3D_RigidBody2D)

void Implement_Urho3D_PhysicsWorld2D(py::class_<Urho3D::PhysicsWorld2D, Urho3D::SharedPtr<Urho3D::PhysicsWorld2D>, Urho3D::Component>& pyclass_Var_Urho3D_PhysicsWorld2D)

void Implement_Urho3D_TileMapLayer2D(py::class_<Urho3D::TileMapLayer2D, Urho3D::SharedPtr<Urho3D::TileMapLayer2D>, Urho3D::Component>& pyclass_Var_Urho3D_TileMapLayer2D)

void Implement_Urho3D_TileMap2D(py::class_<Urho3D::TileMap2D, Urho3D::SharedPtr<Urho3D::TileMap2D>, Urho3D::Component>& pyclass_Var_Urho3D_TileMap2D)

void Implement_Urho3D_IntVector3(py::class_<Urho3D::IntVector3, Urho3D::ExternalPtr<Urho3D::IntVector3>>& pyclass_Var_Urho3D_IntVector3)

void Implement_Urho3D_Scene(py::class_<Urho3D::Scene, Urho3D::SharedPtr<Urho3D::Scene>, Urho3D::Node>& pyclass_Var_Urho3D_Scene)

void Implement_Urho3D_ScriptInstance(py::class_<Urho3D::ScriptInstance, Urho3D::SharedPtr<Urho3D::ScriptInstance>, Urho3D::Component, Urho3D::ScriptEventListener>& pyclass_Var_Urho3D_ScriptInstance)

void Implement_Urho3D_DebugRenderer(py::class_<Urho3D::DebugRenderer, Urho3D::SharedPtr<Urho3D::DebugRenderer>, Urho3D::Component>& pyclass_Var_Urho3D_DebugRenderer)

void Implement_Urho3D_Camera(py::class_<Urho3D::Camera, Urho3D::SharedPtr<Urho3D::Camera>, Urho3D::Component>& pyclass_Var_Urho3D_Camera)

void Implement_Urho3D_Light(py::class_<Urho3D::Light, Urho3D::SharedPtr<Urho3D::Light>, Urho3D::Drawable>& pyclass_Var_Urho3D_Light)

void Implement_Urho3D_Zone(py::class_<Urho3D::Zone, Urho3D::SharedPtr<Urho3D::Zone>, Urho3D::Drawable>& pyclass_Var_Urho3D_Zone)

void Implement_Urho3D_Resource(py::class_<Urho3D::Resource, Urho3D::SharedPtr<Urho3D::Resource>, Urho3D::Object>& pyclass_Var_Urho3D_Resource)

void Implement_Urho3D_XMLFile(py::class_<Urho3D::XMLFile, Urho3D::SharedPtr<Urho3D::XMLFile>, Urho3D::Resource>& pyclass_Var_Urho3D_XMLFile)

void Implement_Urho3D_XPathQuery(py::class_<Urho3D::XPathQuery, Urho3D::ExternalPtr<Urho3D::XPathQuery>>& pyclass_Var_Urho3D_XPathQuery)

void Implement_Urho3D_JSONFile(py::class_<Urho3D::JSONFile, Urho3D::SharedPtr<Urho3D::JSONFile>, Urho3D::Resource>& pyclass_Var_Urho3D_JSONFile)

void Implement_Urho3D_EventProfiler(py::class_<Urho3D::EventProfiler, Urho3D::SharedPtr<Urho3D::EventProfiler>, Urho3D::Profiler>& pyclass_Var_Urho3D_EventProfiler)

void Implement_Urho3D_Font(py::class_<Urho3D::Font, Urho3D::SharedPtr<Urho3D::Font>, Urho3D::Resource>& pyclass_Var_Urho3D_Font)

void Implement_Urho3D_AnimationController(py::class_<Urho3D::AnimationController, Urho3D::SharedPtr<Urho3D::AnimationController>, Urho3D::Component>& pyclass_Var_Urho3D_AnimationController)

void Implement_Urho3D_Shader(py::class_<Urho3D::Shader, Urho3D::SharedPtr<Urho3D::Shader>, Urho3D::Resource>& pyclass_Var_Urho3D_Shader)

void Implement_Urho3D_ParticleEffect(py::class_<Urho3D::ParticleEffect, Urho3D::SharedPtr<Urho3D::ParticleEffect>, Urho3D::Resource>& pyclass_Var_Urho3D_ParticleEffect)

void Implement_Urho3D_StaticModelGroup(py::class_<Urho3D::StaticModelGroup, Urho3D::SharedPtr<Urho3D::StaticModelGroup>, Urho3D::StaticModel>& pyclass_Var_Urho3D_StaticModelGroup)

void Implement_Urho3D_IKSolver(py::class_<Urho3D::IKSolver, Urho3D::SharedPtr<Urho3D::IKSolver>, Urho3D::Component>& pyclass_Var_Urho3D_IKSolver)

void Implement_Urho3D_LuaFile(py::class_<Urho3D::LuaFile, Urho3D::SharedPtr<Urho3D::LuaFile>, Urho3D::Resource>& pyclass_Var_Urho3D_LuaFile)

void Implement_Urho3D_CrowdManager(py::class_<Urho3D::CrowdManager, Urho3D::SharedPtr<Urho3D::CrowdManager>, Urho3D::Component>& pyclass_Var_Urho3D_CrowdManager)

void Implement_Urho3D_DynamicNavigationMesh(py::class_<Urho3D::DynamicNavigationMesh, Urho3D::SharedPtr<Urho3D::DynamicNavigationMesh>, Urho3D::NavigationMesh>& pyclass_Var_Urho3D_DynamicNavigationMesh)

void Implement_Urho3D_RigidBody(py::class_<Urho3D::RigidBody, Urho3D::SharedPtr<Urho3D::RigidBody>, Urho3D::Component>& pyclass_Var_Urho3D_RigidBody)

void Implement_Urho3D_SmoothedTransform(py::class_<Urho3D::SmoothedTransform, Urho3D::SharedPtr<Urho3D::SmoothedTransform>, Urho3D::Component>& pyclass_Var_Urho3D_SmoothedTransform)

void Implement_Urho3D_UnknownComponent(py::class_<Urho3D::UnknownComponent, Urho3D::SharedPtr<Urho3D::UnknownComponent>, Urho3D::Component>& pyclass_Var_Urho3D_UnknownComponent)

void Implement_Urho3D_ProgressBar(py::class_<Urho3D::ProgressBar, Urho3D::SharedPtr<Urho3D::ProgressBar>, Urho3D::BorderImage>& pyclass_Var_Urho3D_ProgressBar)

void Implement_Urho3D_Drawable2D(py::class_<Urho3D::Drawable2D, Urho3D::SharedPtr<Urho3D::Drawable2D>, Urho3D::Drawable>& pyclass_Var_Urho3D_Drawable2D)

void Implement_Urho3D_StaticSprite2D(py::class_<Urho3D::StaticSprite2D, Urho3D::SharedPtr<Urho3D::StaticSprite2D>, Urho3D::Drawable2D>& pyclass_Var_Urho3D_StaticSprite2D)

void Implement_Urho3D_AnimatedSprite2D(py::class_<Urho3D::AnimatedSprite2D, Urho3D::SharedPtr<Urho3D::AnimatedSprite2D>, Urho3D::StaticSprite2D>& pyclass_Var_Urho3D_AnimatedSprite2D)

void Implement_Urho3D_CollisionShape2D(py::class_<Urho3D::CollisionShape2D, Urho3D::SharedPtr<Urho3D::CollisionShape2D>, Urho3D::Component>& pyclass_Var_Urho3D_CollisionShape2D)

void Implement_Urho3D_CollisionChain2D(py::class_<Urho3D::CollisionChain2D, Urho3D::SharedPtr<Urho3D::CollisionChain2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionChain2D)

void Implement_Urho3D_CollisionEdge2D(py::class_<Urho3D::CollisionEdge2D, Urho3D::SharedPtr<Urho3D::CollisionEdge2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionEdge2D)

void Implement_Urho3D_Constraint2D(py::class_<Urho3D::Constraint2D, Urho3D::SharedPtr<Urho3D::Constraint2D>, Urho3D::Component>& pyclass_Var_Urho3D_Constraint2D)

void Implement_Urho3D_ConstraintFriction2D(py::class_<Urho3D::ConstraintFriction2D, Urho3D::SharedPtr<Urho3D::ConstraintFriction2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintFriction2D)

void Implement_Urho3D_ConstraintMotor2D(py::class_<Urho3D::ConstraintMotor2D, Urho3D::SharedPtr<Urho3D::ConstraintMotor2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintMotor2D)

void Implement_Urho3D_ConstraintPrismatic2D(py::class_<Urho3D::ConstraintPrismatic2D, Urho3D::SharedPtr<Urho3D::ConstraintPrismatic2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintPrismatic2D)

void Implement_Urho3D_ConstraintRevolute2D(py::class_<Urho3D::ConstraintRevolute2D, Urho3D::SharedPtr<Urho3D::ConstraintRevolute2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintRevolute2D)

void Implement_Urho3D_ConstraintWeld2D(py::class_<Urho3D::ConstraintWeld2D, Urho3D::SharedPtr<Urho3D::ConstraintWeld2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintWeld2D)

void Implement_Urho3D_ParticleEffect2D(py::class_<Urho3D::ParticleEffect2D, Urho3D::SharedPtr<Urho3D::ParticleEffect2D>, Urho3D::Resource>& pyclass_Var_Urho3D_ParticleEffect2D)

void Implement_Urho3D_StretchableSprite2D(py::class_<Urho3D::StretchableSprite2D, Urho3D::SharedPtr<Urho3D::StretchableSprite2D>, Urho3D::StaticSprite2D>& pyclass_Var_Urho3D_StretchableSprite2D)

void Implement_Urho3D_VectorBuffer(py::class_<Urho3D::VectorBuffer, Urho3D::ExternalPtr<Urho3D::VectorBuffer>, Urho3D::AbstractFile>& pyclass_Var_Urho3D_VectorBuffer)

void Implement_Urho3D_ValueAnimation(py::class_<Urho3D::ValueAnimation, Urho3D::SharedPtr<Urho3D::ValueAnimation>, Urho3D::Resource>& pyclass_Var_Urho3D_ValueAnimation)

void Implement_Urho3D_File(py::class_<Urho3D::File, Urho3D::SharedPtr<Urho3D::File>, Urho3D::Object, Urho3D::AbstractFile>& pyclass_Var_Urho3D_File)

void Implement_Urho3D_ResourceWithMetadata(py::class_<Urho3D::ResourceWithMetadata, Urho3D::SharedPtr<Urho3D::ResourceWithMetadata>, Urho3D::Resource>& pyclass_Var_Urho3D_ResourceWithMetadata)

void Implement_Urho3D_Technique(py::class_<Urho3D::Technique, Urho3D::SharedPtr<Urho3D::Technique>, Urho3D::Resource>& pyclass_Var_Urho3D_Technique)

void Implement_Urho3D_SoundListener(py::class_<Urho3D::SoundListener, Urho3D::SharedPtr<Urho3D::SoundListener>, Urho3D::Component>& pyclass_Var_Urho3D_SoundListener)

void Implement_Urho3D_ListView(py::class_<Urho3D::ListView, Urho3D::SharedPtr<Urho3D::ListView>, Urho3D::ScrollView>& pyclass_Var_Urho3D_ListView)

void Implement_Urho3D_CustomGeometry(py::class_<Urho3D::CustomGeometry, Urho3D::SharedPtr<Urho3D::CustomGeometry>, Urho3D::Drawable>& pyclass_Var_Urho3D_CustomGeometry)

void Implement_Urho3D_RibbonTrail(py::class_<Urho3D::RibbonTrail, Urho3D::SharedPtr<Urho3D::RibbonTrail>, Urho3D::Drawable>& pyclass_Var_Urho3D_RibbonTrail)

void Implement_Urho3D_MemoryBuffer(py::class_<Urho3D::MemoryBuffer, Urho3D::ExternalPtr<Urho3D::MemoryBuffer>, Urho3D::AbstractFile>& pyclass_Var_Urho3D_MemoryBuffer)

void Implement_Urho3D_OffMeshConnection(py::class_<Urho3D::OffMeshConnection, Urho3D::SharedPtr<Urho3D::OffMeshConnection>, Urho3D::Component>& pyclass_Var_Urho3D_OffMeshConnection)

void Implement_Urho3D_Constraint(py::class_<Urho3D::Constraint, Urho3D::SharedPtr<Urho3D::Constraint>, Urho3D::Component>& pyclass_Var_Urho3D_Constraint)

void Implement_Urho3D_FontGlyph(py::class_<Urho3D::FontGlyph, Urho3D::ExternalPtr<Urho3D::FontGlyph>>& pyclass_Var_Urho3D_FontGlyph)

void Implement_Urho3D_Sprite2D(py::class_<Urho3D::Sprite2D, Urho3D::SharedPtr<Urho3D::Sprite2D>, Urho3D::Resource>& pyclass_Var_Urho3D_Sprite2D)

void Implement_Urho3D_SpriteSheet2D(py::class_<Urho3D::SpriteSheet2D, Urho3D::SharedPtr<Urho3D::SpriteSheet2D>, Urho3D::Resource>& pyclass_Var_Urho3D_SpriteSheet2D)

void Implement_Urho3D_CollisionCircle2D(py::class_<Urho3D::CollisionCircle2D, Urho3D::SharedPtr<Urho3D::CollisionCircle2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionCircle2D)

void Implement_Urho3D_ConstraintDistance2D(py::class_<Urho3D::ConstraintDistance2D, Urho3D::SharedPtr<Urho3D::ConstraintDistance2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintDistance2D)

void Implement_Urho3D_ConstraintMouse2D(py::class_<Urho3D::ConstraintMouse2D, Urho3D::SharedPtr<Urho3D::ConstraintMouse2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintMouse2D)

void Implement_Urho3D_ConstraintRope2D(py::class_<Urho3D::ConstraintRope2D, Urho3D::SharedPtr<Urho3D::ConstraintRope2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintRope2D)

void Implement_Urho3D_ParticleEmitter2D(py::class_<Urho3D::ParticleEmitter2D, Urho3D::SharedPtr<Urho3D::ParticleEmitter2D>, Urho3D::Drawable2D>& pyclass_Var_Urho3D_ParticleEmitter2D)

void Implement_Urho3D_ScriptFile(py::class_<Urho3D::ScriptFile, Urho3D::SharedPtr<Urho3D::ScriptFile>, Urho3D::Resource, Urho3D::ScriptEventListener>& pyclass_Var_Urho3D_ScriptFile)

void Implement_Urho3D_Sound(py::class_<Urho3D::Sound, Urho3D::SharedPtr<Urho3D::Sound>, Urho3D::ResourceWithMetadata>& pyclass_Var_Urho3D_Sound)

void Implement_Urho3D_Model(py::class_<Urho3D::Model, Urho3D::SharedPtr<Urho3D::Model>, Urho3D::ResourceWithMetadata>& pyclass_Var_Urho3D_Model)

void Implement_Urho3D_DropDownList(py::class_<Urho3D::DropDownList, Urho3D::SharedPtr<Urho3D::DropDownList>, Urho3D::Menu>& pyclass_Var_Urho3D_DropDownList)

void Implement_Urho3D_Image(py::class_<Urho3D::Image, Urho3D::SharedPtr<Urho3D::Image>, Urho3D::Resource>& pyclass_Var_Urho3D_Image)

void Implement_Urho3D_Terrain(py::class_<Urho3D::Terrain, Urho3D::SharedPtr<Urho3D::Terrain>, Urho3D::Component>& pyclass_Var_Urho3D_Terrain)

void Implement_Urho3D_CrowdAgent(py::class_<Urho3D::CrowdAgent, Urho3D::SharedPtr<Urho3D::CrowdAgent>, Urho3D::Component>& pyclass_Var_Urho3D_CrowdAgent)

void Implement_Urho3D_PListFile(py::class_<Urho3D::PListFile, Urho3D::SharedPtr<Urho3D::PListFile>, Urho3D::Resource>& pyclass_Var_Urho3D_PListFile)

void Implement_Urho3D_AnimationSet2D(py::class_<Urho3D::AnimationSet2D, Urho3D::SharedPtr<Urho3D::AnimationSet2D>, Urho3D::Resource>& pyclass_Var_Urho3D_AnimationSet2D)

void Implement_Urho3D_CollisionPolygon2D(py::class_<Urho3D::CollisionPolygon2D, Urho3D::SharedPtr<Urho3D::CollisionPolygon2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionPolygon2D)

void Implement_Urho3D_ConstraintPulley2D(py::class_<Urho3D::ConstraintPulley2D, Urho3D::SharedPtr<Urho3D::ConstraintPulley2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintPulley2D)

void Implement_Urho3D_TmxFile2D(py::class_<Urho3D::TmxFile2D, Urho3D::SharedPtr<Urho3D::TmxFile2D>, Urho3D::Resource>& pyclass_Var_Urho3D_TmxFile2D)

void Implement_Urho3D_ObjectAnimation(py::class_<Urho3D::ObjectAnimation, Urho3D::SharedPtr<Urho3D::ObjectAnimation>, Urho3D::Resource>& pyclass_Var_Urho3D_ObjectAnimation)

void Implement_Urho3D_Texture(py::class_<Urho3D::Texture, Urho3D::SharedPtr<Urho3D::Texture>, Urho3D::ResourceWithMetadata, Urho3D::GPUObject>& pyclass_Var_Urho3D_Texture)

void Implement_Urho3D_TextureCube(py::class_<Urho3D::TextureCube, Urho3D::SharedPtr<Urho3D::TextureCube>, Urho3D::Texture>& pyclass_Var_Urho3D_TextureCube)

void Implement_Urho3D_Texture2DArray(py::class_<Urho3D::Texture2DArray, Urho3D::SharedPtr<Urho3D::Texture2DArray>, Urho3D::Texture>& pyclass_Var_Urho3D_Texture2DArray)

void Implement_Urho3D_NetworkPriority(py::class_<Urho3D::NetworkPriority, Urho3D::SharedPtr<Urho3D::NetworkPriority>, Urho3D::Component>& pyclass_Var_Urho3D_NetworkPriority)

void Implement_Urho3D_CollisionBox2D(py::class_<Urho3D::CollisionBox2D, Urho3D::SharedPtr<Urho3D::CollisionBox2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionBox2D)

void Implement_Urho3D_ConstraintWheel2D(py::class_<Urho3D::ConstraintWheel2D, Urho3D::SharedPtr<Urho3D::ConstraintWheel2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintWheel2D)

void Implement_Urho3D_Material(py::class_<Urho3D::Material, Urho3D::SharedPtr<Urho3D::Material>, Urho3D::Resource>& pyclass_Var_Urho3D_Material)

void Implement_Urho3D_Animation(py::class_<Urho3D::Animation, Urho3D::SharedPtr<Urho3D::Animation>, Urho3D::ResourceWithMetadata>& pyclass_Var_Urho3D_Animation)

void Implement_Urho3D_Text3D(py::class_<Urho3D::Text3D, Urho3D::SharedPtr<Urho3D::Text3D>, Urho3D::Drawable>& pyclass_Var_Urho3D_Text3D)

void Implement_Urho3D_Texture2D(py::class_<Urho3D::Texture2D, Urho3D::SharedPtr<Urho3D::Texture2D>, Urho3D::Texture>& pyclass_Var_Urho3D_Texture2D)

void Implement_Urho3D_ConstraintGear2D(py::class_<Urho3D::ConstraintGear2D, Urho3D::SharedPtr<Urho3D::ConstraintGear2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintGear2D)

void Implement_Urho3D_Texture3D(py::class_<Urho3D::Texture3D, Urho3D::SharedPtr<Urho3D::Texture3D>, Urho3D::Texture>& pyclass_Var_Urho3D_Texture3D)

// can do sub-modules, just need to py::import... the other module if it has any required classes first (see Advanced Topics in pybind11 docs)
PYBIND11_MODULE(pyrho3d, m) {
    m.doc() = "Urho3D Python bindings"; // optional module docstring


    //================================================
    // Declare Namespaces
    //================================================
    // Export global namespace
auto pyclass_Var_ = m;

// Export Urho3D namespace as a class
auto pyclass_Var_Urho3D = m;

// Export Urho3D::AttributeMetadata namespace as a class
class PythonBindingsFakeModule_Urho3D_AttributeMetadata {};
auto pyclass_Var_Urho3D_AttributeMetadata = py::class_<PythonBindingsFakeModule_Urho3D_AttributeMetadata>(m, "AttributeMetadata");

// Export Urho3D::SoundFinished namespace as a class
class PythonBindingsFakeModule_Urho3D_SoundFinished {};
auto pyclass_Var_Urho3D_SoundFinished = py::class_<PythonBindingsFakeModule_Urho3D_SoundFinished>(m, "SoundFinished");

// Export Urho3D::BeginFrame namespace as a class
class PythonBindingsFakeModule_Urho3D_BeginFrame {};
auto pyclass_Var_Urho3D_BeginFrame = py::class_<PythonBindingsFakeModule_Urho3D_BeginFrame>(m, "BeginFrame");

// Export Urho3D::Update namespace as a class
class PythonBindingsFakeModule_Urho3D_Update {};
auto pyclass_Var_Urho3D_Update = py::class_<PythonBindingsFakeModule_Urho3D_Update>(m, "Update");

// Export Urho3D::PostUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_PostUpdate {};
auto pyclass_Var_Urho3D_PostUpdate = py::class_<PythonBindingsFakeModule_Urho3D_PostUpdate>(m, "PostUpdate");

// Export Urho3D::RenderUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_RenderUpdate {};
auto pyclass_Var_Urho3D_RenderUpdate = py::class_<PythonBindingsFakeModule_Urho3D_RenderUpdate>(m, "RenderUpdate");

// Export Urho3D::PostRenderUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_PostRenderUpdate {};
auto pyclass_Var_Urho3D_PostRenderUpdate = py::class_<PythonBindingsFakeModule_Urho3D_PostRenderUpdate>(m, "PostRenderUpdate");

// Export Urho3D::EndFrame namespace as a class
class PythonBindingsFakeModule_Urho3D_EndFrame {};
auto pyclass_Var_Urho3D_EndFrame = py::class_<PythonBindingsFakeModule_Urho3D_EndFrame>(m, "EndFrame");

// Export Urho3D::WorkItemCompleted namespace as a class
class PythonBindingsFakeModule_Urho3D_WorkItemCompleted {};
auto pyclass_Var_Urho3D_WorkItemCompleted = py::class_<PythonBindingsFakeModule_Urho3D_WorkItemCompleted>(m, "WorkItemCompleted");

// Export Urho3D::ConsoleCommand namespace as a class
class PythonBindingsFakeModule_Urho3D_ConsoleCommand {};
auto pyclass_Var_Urho3D_ConsoleCommand = py::class_<PythonBindingsFakeModule_Urho3D_ConsoleCommand>(m, "ConsoleCommand");

// Export Urho3D::BoneHierarchyCreated namespace as a class
class PythonBindingsFakeModule_Urho3D_BoneHierarchyCreated {};
auto pyclass_Var_Urho3D_BoneHierarchyCreated = py::class_<PythonBindingsFakeModule_Urho3D_BoneHierarchyCreated>(m, "BoneHierarchyCreated");

// Export Urho3D::AnimationTrigger namespace as a class
class PythonBindingsFakeModule_Urho3D_AnimationTrigger {};
auto pyclass_Var_Urho3D_AnimationTrigger = py::class_<PythonBindingsFakeModule_Urho3D_AnimationTrigger>(m, "AnimationTrigger");

// Export Urho3D::AnimationFinished namespace as a class
class PythonBindingsFakeModule_Urho3D_AnimationFinished {};
auto pyclass_Var_Urho3D_AnimationFinished = py::class_<PythonBindingsFakeModule_Urho3D_AnimationFinished>(m, "AnimationFinished");

// Export Urho3D::ParticleEffectFinished namespace as a class
class PythonBindingsFakeModule_Urho3D_ParticleEffectFinished {};
auto pyclass_Var_Urho3D_ParticleEffectFinished = py::class_<PythonBindingsFakeModule_Urho3D_ParticleEffectFinished>(m, "ParticleEffectFinished");

// Export Urho3D::TerrainCreated namespace as a class
class PythonBindingsFakeModule_Urho3D_TerrainCreated {};
auto pyclass_Var_Urho3D_TerrainCreated = py::class_<PythonBindingsFakeModule_Urho3D_TerrainCreated>(m, "TerrainCreated");

// Export Urho3D::ScreenMode namespace as a class
class PythonBindingsFakeModule_Urho3D_ScreenMode {};
auto pyclass_Var_Urho3D_ScreenMode = py::class_<PythonBindingsFakeModule_Urho3D_ScreenMode>(m, "ScreenMode");

// Export Urho3D::WindowPos namespace as a class
class PythonBindingsFakeModule_Urho3D_WindowPos {};
auto pyclass_Var_Urho3D_WindowPos = py::class_<PythonBindingsFakeModule_Urho3D_WindowPos>(m, "WindowPos");

// Export Urho3D::RenderSurfaceUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_RenderSurfaceUpdate {};
auto pyclass_Var_Urho3D_RenderSurfaceUpdate = py::class_<PythonBindingsFakeModule_Urho3D_RenderSurfaceUpdate>(m, "RenderSurfaceUpdate");

// Export Urho3D::BeginRendering namespace as a class
class PythonBindingsFakeModule_Urho3D_BeginRendering {};
auto pyclass_Var_Urho3D_BeginRendering = py::class_<PythonBindingsFakeModule_Urho3D_BeginRendering>(m, "BeginRendering");

// Export Urho3D::EndRendering namespace as a class
class PythonBindingsFakeModule_Urho3D_EndRendering {};
auto pyclass_Var_Urho3D_EndRendering = py::class_<PythonBindingsFakeModule_Urho3D_EndRendering>(m, "EndRendering");

// Export Urho3D::BeginViewUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_BeginViewUpdate {};
auto pyclass_Var_Urho3D_BeginViewUpdate = py::class_<PythonBindingsFakeModule_Urho3D_BeginViewUpdate>(m, "BeginViewUpdate");

// Export Urho3D::EndViewUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_EndViewUpdate {};
auto pyclass_Var_Urho3D_EndViewUpdate = py::class_<PythonBindingsFakeModule_Urho3D_EndViewUpdate>(m, "EndViewUpdate");

// Export Urho3D::BeginViewRender namespace as a class
class PythonBindingsFakeModule_Urho3D_BeginViewRender {};
auto pyclass_Var_Urho3D_BeginViewRender = py::class_<PythonBindingsFakeModule_Urho3D_BeginViewRender>(m, "BeginViewRender");

// Export Urho3D::ViewBuffersReady namespace as a class
class PythonBindingsFakeModule_Urho3D_ViewBuffersReady {};
auto pyclass_Var_Urho3D_ViewBuffersReady = py::class_<PythonBindingsFakeModule_Urho3D_ViewBuffersReady>(m, "ViewBuffersReady");

// Export Urho3D::ViewGlobalShaderParameters namespace as a class
class PythonBindingsFakeModule_Urho3D_ViewGlobalShaderParameters {};
auto pyclass_Var_Urho3D_ViewGlobalShaderParameters = py::class_<PythonBindingsFakeModule_Urho3D_ViewGlobalShaderParameters>(m, "ViewGlobalShaderParameters");

// Export Urho3D::EndViewRender namespace as a class
class PythonBindingsFakeModule_Urho3D_EndViewRender {};
auto pyclass_Var_Urho3D_EndViewRender = py::class_<PythonBindingsFakeModule_Urho3D_EndViewRender>(m, "EndViewRender");

// Export Urho3D::EndAllViewsRender namespace as a class
class PythonBindingsFakeModule_Urho3D_EndAllViewsRender {};
auto pyclass_Var_Urho3D_EndAllViewsRender = py::class_<PythonBindingsFakeModule_Urho3D_EndAllViewsRender>(m, "EndAllViewsRender");

// Export Urho3D::RenderPathEvent namespace as a class
class PythonBindingsFakeModule_Urho3D_RenderPathEvent {};
auto pyclass_Var_Urho3D_RenderPathEvent = py::class_<PythonBindingsFakeModule_Urho3D_RenderPathEvent>(m, "RenderPathEvent");

// Export Urho3D::DeviceLost namespace as a class
class PythonBindingsFakeModule_Urho3D_DeviceLost {};
auto pyclass_Var_Urho3D_DeviceLost = py::class_<PythonBindingsFakeModule_Urho3D_DeviceLost>(m, "DeviceLost");

// Export Urho3D::DeviceReset namespace as a class
class PythonBindingsFakeModule_Urho3D_DeviceReset {};
auto pyclass_Var_Urho3D_DeviceReset = py::class_<PythonBindingsFakeModule_Urho3D_DeviceReset>(m, "DeviceReset");

// Export Urho3D::IKEffectorTargetChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_IKEffectorTargetChanged {};
auto pyclass_Var_Urho3D_IKEffectorTargetChanged = py::class_<PythonBindingsFakeModule_Urho3D_IKEffectorTargetChanged>(m, "IKEffectorTargetChanged");

// Export Urho3D::LogMessage namespace as a class
class PythonBindingsFakeModule_Urho3D_LogMessage {};
auto pyclass_Var_Urho3D_LogMessage = py::class_<PythonBindingsFakeModule_Urho3D_LogMessage>(m, "LogMessage");

// Export Urho3D::AsyncExecFinished namespace as a class
class PythonBindingsFakeModule_Urho3D_AsyncExecFinished {};
auto pyclass_Var_Urho3D_AsyncExecFinished = py::class_<PythonBindingsFakeModule_Urho3D_AsyncExecFinished>(m, "AsyncExecFinished");

// Export Urho3D::MouseButtonDown namespace as a class
class PythonBindingsFakeModule_Urho3D_MouseButtonDown {};
auto pyclass_Var_Urho3D_MouseButtonDown = py::class_<PythonBindingsFakeModule_Urho3D_MouseButtonDown>(m, "MouseButtonDown");

// Export Urho3D::MouseButtonUp namespace as a class
class PythonBindingsFakeModule_Urho3D_MouseButtonUp {};
auto pyclass_Var_Urho3D_MouseButtonUp = py::class_<PythonBindingsFakeModule_Urho3D_MouseButtonUp>(m, "MouseButtonUp");

// Export Urho3D::MouseMove namespace as a class
class PythonBindingsFakeModule_Urho3D_MouseMove {};
auto pyclass_Var_Urho3D_MouseMove = py::class_<PythonBindingsFakeModule_Urho3D_MouseMove>(m, "MouseMove");

// Export Urho3D::MouseWheel namespace as a class
class PythonBindingsFakeModule_Urho3D_MouseWheel {};
auto pyclass_Var_Urho3D_MouseWheel = py::class_<PythonBindingsFakeModule_Urho3D_MouseWheel>(m, "MouseWheel");

// Export Urho3D::KeyDown namespace as a class
class PythonBindingsFakeModule_Urho3D_KeyDown {};
auto pyclass_Var_Urho3D_KeyDown = py::class_<PythonBindingsFakeModule_Urho3D_KeyDown>(m, "KeyDown");

// Export Urho3D::KeyUp namespace as a class
class PythonBindingsFakeModule_Urho3D_KeyUp {};
auto pyclass_Var_Urho3D_KeyUp = py::class_<PythonBindingsFakeModule_Urho3D_KeyUp>(m, "KeyUp");

// Export Urho3D::TextInput namespace as a class
class PythonBindingsFakeModule_Urho3D_TextInput {};
auto pyclass_Var_Urho3D_TextInput = py::class_<PythonBindingsFakeModule_Urho3D_TextInput>(m, "TextInput");

// Export Urho3D::TextEditing namespace as a class
class PythonBindingsFakeModule_Urho3D_TextEditing {};
auto pyclass_Var_Urho3D_TextEditing = py::class_<PythonBindingsFakeModule_Urho3D_TextEditing>(m, "TextEditing");

// Export Urho3D::JoystickConnected namespace as a class
class PythonBindingsFakeModule_Urho3D_JoystickConnected {};
auto pyclass_Var_Urho3D_JoystickConnected = py::class_<PythonBindingsFakeModule_Urho3D_JoystickConnected>(m, "JoystickConnected");

// Export Urho3D::JoystickDisconnected namespace as a class
class PythonBindingsFakeModule_Urho3D_JoystickDisconnected {};
auto pyclass_Var_Urho3D_JoystickDisconnected = py::class_<PythonBindingsFakeModule_Urho3D_JoystickDisconnected>(m, "JoystickDisconnected");

// Export Urho3D::JoystickButtonDown namespace as a class
class PythonBindingsFakeModule_Urho3D_JoystickButtonDown {};
auto pyclass_Var_Urho3D_JoystickButtonDown = py::class_<PythonBindingsFakeModule_Urho3D_JoystickButtonDown>(m, "JoystickButtonDown");

// Export Urho3D::JoystickButtonUp namespace as a class
class PythonBindingsFakeModule_Urho3D_JoystickButtonUp {};
auto pyclass_Var_Urho3D_JoystickButtonUp = py::class_<PythonBindingsFakeModule_Urho3D_JoystickButtonUp>(m, "JoystickButtonUp");

// Export Urho3D::JoystickAxisMove namespace as a class
class PythonBindingsFakeModule_Urho3D_JoystickAxisMove {};
auto pyclass_Var_Urho3D_JoystickAxisMove = py::class_<PythonBindingsFakeModule_Urho3D_JoystickAxisMove>(m, "JoystickAxisMove");

// Export Urho3D::JoystickHatMove namespace as a class
class PythonBindingsFakeModule_Urho3D_JoystickHatMove {};
auto pyclass_Var_Urho3D_JoystickHatMove = py::class_<PythonBindingsFakeModule_Urho3D_JoystickHatMove>(m, "JoystickHatMove");

// Export Urho3D::TouchBegin namespace as a class
class PythonBindingsFakeModule_Urho3D_TouchBegin {};
auto pyclass_Var_Urho3D_TouchBegin = py::class_<PythonBindingsFakeModule_Urho3D_TouchBegin>(m, "TouchBegin");

// Export Urho3D::TouchEnd namespace as a class
class PythonBindingsFakeModule_Urho3D_TouchEnd {};
auto pyclass_Var_Urho3D_TouchEnd = py::class_<PythonBindingsFakeModule_Urho3D_TouchEnd>(m, "TouchEnd");

// Export Urho3D::TouchMove namespace as a class
class PythonBindingsFakeModule_Urho3D_TouchMove {};
auto pyclass_Var_Urho3D_TouchMove = py::class_<PythonBindingsFakeModule_Urho3D_TouchMove>(m, "TouchMove");

// Export Urho3D::GestureRecorded namespace as a class
class PythonBindingsFakeModule_Urho3D_GestureRecorded {};
auto pyclass_Var_Urho3D_GestureRecorded = py::class_<PythonBindingsFakeModule_Urho3D_GestureRecorded>(m, "GestureRecorded");

// Export Urho3D::GestureInput namespace as a class
class PythonBindingsFakeModule_Urho3D_GestureInput {};
auto pyclass_Var_Urho3D_GestureInput = py::class_<PythonBindingsFakeModule_Urho3D_GestureInput>(m, "GestureInput");

// Export Urho3D::MultiGesture namespace as a class
class PythonBindingsFakeModule_Urho3D_MultiGesture {};
auto pyclass_Var_Urho3D_MultiGesture = py::class_<PythonBindingsFakeModule_Urho3D_MultiGesture>(m, "MultiGesture");

// Export Urho3D::DropFile namespace as a class
class PythonBindingsFakeModule_Urho3D_DropFile {};
auto pyclass_Var_Urho3D_DropFile = py::class_<PythonBindingsFakeModule_Urho3D_DropFile>(m, "DropFile");

// Export Urho3D::InputFocus namespace as a class
class PythonBindingsFakeModule_Urho3D_InputFocus {};
auto pyclass_Var_Urho3D_InputFocus = py::class_<PythonBindingsFakeModule_Urho3D_InputFocus>(m, "InputFocus");

// Export Urho3D::MouseVisibleChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_MouseVisibleChanged {};
auto pyclass_Var_Urho3D_MouseVisibleChanged = py::class_<PythonBindingsFakeModule_Urho3D_MouseVisibleChanged>(m, "MouseVisibleChanged");

// Export Urho3D::MouseModeChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_MouseModeChanged {};
auto pyclass_Var_Urho3D_MouseModeChanged = py::class_<PythonBindingsFakeModule_Urho3D_MouseModeChanged>(m, "MouseModeChanged");

// Export Urho3D::ExitRequested namespace as a class
class PythonBindingsFakeModule_Urho3D_ExitRequested {};
auto pyclass_Var_Urho3D_ExitRequested = py::class_<PythonBindingsFakeModule_Urho3D_ExitRequested>(m, "ExitRequested");

// Export Urho3D::SDLRawInput namespace as a class
class PythonBindingsFakeModule_Urho3D_SDLRawInput {};
auto pyclass_Var_Urho3D_SDLRawInput = py::class_<PythonBindingsFakeModule_Urho3D_SDLRawInput>(m, "SDLRawInput");

// Export Urho3D::InputBegin namespace as a class
class PythonBindingsFakeModule_Urho3D_InputBegin {};
auto pyclass_Var_Urho3D_InputBegin = py::class_<PythonBindingsFakeModule_Urho3D_InputBegin>(m, "InputBegin");

// Export Urho3D::InputEnd namespace as a class
class PythonBindingsFakeModule_Urho3D_InputEnd {};
auto pyclass_Var_Urho3D_InputEnd = py::class_<PythonBindingsFakeModule_Urho3D_InputEnd>(m, "InputEnd");

// Export Urho3D::NavigationMeshRebuilt namespace as a class
class PythonBindingsFakeModule_Urho3D_NavigationMeshRebuilt {};
auto pyclass_Var_Urho3D_NavigationMeshRebuilt = py::class_<PythonBindingsFakeModule_Urho3D_NavigationMeshRebuilt>(m, "NavigationMeshRebuilt");

// Export Urho3D::NavigationAreaRebuilt namespace as a class
class PythonBindingsFakeModule_Urho3D_NavigationAreaRebuilt {};
auto pyclass_Var_Urho3D_NavigationAreaRebuilt = py::class_<PythonBindingsFakeModule_Urho3D_NavigationAreaRebuilt>(m, "NavigationAreaRebuilt");

// Export Urho3D::NavigationTileAdded namespace as a class
class PythonBindingsFakeModule_Urho3D_NavigationTileAdded {};
auto pyclass_Var_Urho3D_NavigationTileAdded = py::class_<PythonBindingsFakeModule_Urho3D_NavigationTileAdded>(m, "NavigationTileAdded");

// Export Urho3D::NavigationTileRemoved namespace as a class
class PythonBindingsFakeModule_Urho3D_NavigationTileRemoved {};
auto pyclass_Var_Urho3D_NavigationTileRemoved = py::class_<PythonBindingsFakeModule_Urho3D_NavigationTileRemoved>(m, "NavigationTileRemoved");

// Export Urho3D::NavigationAllTilesRemoved namespace as a class
class PythonBindingsFakeModule_Urho3D_NavigationAllTilesRemoved {};
auto pyclass_Var_Urho3D_NavigationAllTilesRemoved = py::class_<PythonBindingsFakeModule_Urho3D_NavigationAllTilesRemoved>(m, "NavigationAllTilesRemoved");

// Export Urho3D::CrowdAgentFormation namespace as a class
class PythonBindingsFakeModule_Urho3D_CrowdAgentFormation {};
auto pyclass_Var_Urho3D_CrowdAgentFormation = py::class_<PythonBindingsFakeModule_Urho3D_CrowdAgentFormation>(m, "CrowdAgentFormation");

// Export Urho3D::CrowdAgentNodeFormation namespace as a class
class PythonBindingsFakeModule_Urho3D_CrowdAgentNodeFormation {};
auto pyclass_Var_Urho3D_CrowdAgentNodeFormation = py::class_<PythonBindingsFakeModule_Urho3D_CrowdAgentNodeFormation>(m, "CrowdAgentNodeFormation");

// Export Urho3D::CrowdAgentReposition namespace as a class
class PythonBindingsFakeModule_Urho3D_CrowdAgentReposition {};
auto pyclass_Var_Urho3D_CrowdAgentReposition = py::class_<PythonBindingsFakeModule_Urho3D_CrowdAgentReposition>(m, "CrowdAgentReposition");

// Export Urho3D::CrowdAgentNodeReposition namespace as a class
class PythonBindingsFakeModule_Urho3D_CrowdAgentNodeReposition {};
auto pyclass_Var_Urho3D_CrowdAgentNodeReposition = py::class_<PythonBindingsFakeModule_Urho3D_CrowdAgentNodeReposition>(m, "CrowdAgentNodeReposition");

// Export Urho3D::CrowdAgentFailure namespace as a class
class PythonBindingsFakeModule_Urho3D_CrowdAgentFailure {};
auto pyclass_Var_Urho3D_CrowdAgentFailure = py::class_<PythonBindingsFakeModule_Urho3D_CrowdAgentFailure>(m, "CrowdAgentFailure");

// Export Urho3D::CrowdAgentNodeFailure namespace as a class
class PythonBindingsFakeModule_Urho3D_CrowdAgentNodeFailure {};
auto pyclass_Var_Urho3D_CrowdAgentNodeFailure = py::class_<PythonBindingsFakeModule_Urho3D_CrowdAgentNodeFailure>(m, "CrowdAgentNodeFailure");

// Export Urho3D::CrowdAgentStateChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_CrowdAgentStateChanged {};
auto pyclass_Var_Urho3D_CrowdAgentStateChanged = py::class_<PythonBindingsFakeModule_Urho3D_CrowdAgentStateChanged>(m, "CrowdAgentStateChanged");

// Export Urho3D::CrowdAgentNodeStateChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_CrowdAgentNodeStateChanged {};
auto pyclass_Var_Urho3D_CrowdAgentNodeStateChanged = py::class_<PythonBindingsFakeModule_Urho3D_CrowdAgentNodeStateChanged>(m, "CrowdAgentNodeStateChanged");

// Export Urho3D::NavigationObstacleAdded namespace as a class
class PythonBindingsFakeModule_Urho3D_NavigationObstacleAdded {};
auto pyclass_Var_Urho3D_NavigationObstacleAdded = py::class_<PythonBindingsFakeModule_Urho3D_NavigationObstacleAdded>(m, "NavigationObstacleAdded");

// Export Urho3D::NavigationObstacleRemoved namespace as a class
class PythonBindingsFakeModule_Urho3D_NavigationObstacleRemoved {};
auto pyclass_Var_Urho3D_NavigationObstacleRemoved = py::class_<PythonBindingsFakeModule_Urho3D_NavigationObstacleRemoved>(m, "NavigationObstacleRemoved");

// Export Urho3D::ServerConnected namespace as a class
class PythonBindingsFakeModule_Urho3D_ServerConnected {};
auto pyclass_Var_Urho3D_ServerConnected = py::class_<PythonBindingsFakeModule_Urho3D_ServerConnected>(m, "ServerConnected");

// Export Urho3D::ServerDisconnected namespace as a class
class PythonBindingsFakeModule_Urho3D_ServerDisconnected {};
auto pyclass_Var_Urho3D_ServerDisconnected = py::class_<PythonBindingsFakeModule_Urho3D_ServerDisconnected>(m, "ServerDisconnected");

// Export Urho3D::ConnectFailed namespace as a class
class PythonBindingsFakeModule_Urho3D_ConnectFailed {};
auto pyclass_Var_Urho3D_ConnectFailed = py::class_<PythonBindingsFakeModule_Urho3D_ConnectFailed>(m, "ConnectFailed");

// Export Urho3D::ConnectionInProgress namespace as a class
class PythonBindingsFakeModule_Urho3D_ConnectionInProgress {};
auto pyclass_Var_Urho3D_ConnectionInProgress = py::class_<PythonBindingsFakeModule_Urho3D_ConnectionInProgress>(m, "ConnectionInProgress");

// Export Urho3D::ClientConnected namespace as a class
class PythonBindingsFakeModule_Urho3D_ClientConnected {};
auto pyclass_Var_Urho3D_ClientConnected = py::class_<PythonBindingsFakeModule_Urho3D_ClientConnected>(m, "ClientConnected");

// Export Urho3D::ClientDisconnected namespace as a class
class PythonBindingsFakeModule_Urho3D_ClientDisconnected {};
auto pyclass_Var_Urho3D_ClientDisconnected = py::class_<PythonBindingsFakeModule_Urho3D_ClientDisconnected>(m, "ClientDisconnected");

// Export Urho3D::ClientIdentity namespace as a class
class PythonBindingsFakeModule_Urho3D_ClientIdentity {};
auto pyclass_Var_Urho3D_ClientIdentity = py::class_<PythonBindingsFakeModule_Urho3D_ClientIdentity>(m, "ClientIdentity");

// Export Urho3D::ClientSceneLoaded namespace as a class
class PythonBindingsFakeModule_Urho3D_ClientSceneLoaded {};
auto pyclass_Var_Urho3D_ClientSceneLoaded = py::class_<PythonBindingsFakeModule_Urho3D_ClientSceneLoaded>(m, "ClientSceneLoaded");

// Export Urho3D::NetworkMessage namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkMessage {};
auto pyclass_Var_Urho3D_NetworkMessage = py::class_<PythonBindingsFakeModule_Urho3D_NetworkMessage>(m, "NetworkMessage");

// Export Urho3D::NetworkUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkUpdate {};
auto pyclass_Var_Urho3D_NetworkUpdate = py::class_<PythonBindingsFakeModule_Urho3D_NetworkUpdate>(m, "NetworkUpdate");

// Export Urho3D::NetworkUpdateSent namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkUpdateSent {};
auto pyclass_Var_Urho3D_NetworkUpdateSent = py::class_<PythonBindingsFakeModule_Urho3D_NetworkUpdateSent>(m, "NetworkUpdateSent");

// Export Urho3D::NetworkSceneLoadFailed namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkSceneLoadFailed {};
auto pyclass_Var_Urho3D_NetworkSceneLoadFailed = py::class_<PythonBindingsFakeModule_Urho3D_NetworkSceneLoadFailed>(m, "NetworkSceneLoadFailed");

// Export Urho3D::RemoteEventData namespace as a class
class PythonBindingsFakeModule_Urho3D_RemoteEventData {};
auto pyclass_Var_Urho3D_RemoteEventData = py::class_<PythonBindingsFakeModule_Urho3D_RemoteEventData>(m, "RemoteEventData");

// Export Urho3D::NetworkBanned namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkBanned {};
auto pyclass_Var_Urho3D_NetworkBanned = py::class_<PythonBindingsFakeModule_Urho3D_NetworkBanned>(m, "NetworkBanned");

// Export Urho3D::NetworkInvalidPassword namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkInvalidPassword {};
auto pyclass_Var_Urho3D_NetworkInvalidPassword = py::class_<PythonBindingsFakeModule_Urho3D_NetworkInvalidPassword>(m, "NetworkInvalidPassword");

// Export Urho3D::NetworkHostDiscovered namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkHostDiscovered {};
auto pyclass_Var_Urho3D_NetworkHostDiscovered = py::class_<PythonBindingsFakeModule_Urho3D_NetworkHostDiscovered>(m, "NetworkHostDiscovered");

// Export Urho3D::NetworkNatPunchtroughSucceeded namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkNatPunchtroughSucceeded {};
auto pyclass_Var_Urho3D_NetworkNatPunchtroughSucceeded = py::class_<PythonBindingsFakeModule_Urho3D_NetworkNatPunchtroughSucceeded>(m, "NetworkNatPunchtroughSucceeded");

// Export Urho3D::NetworkNatPunchtroughFailed namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkNatPunchtroughFailed {};
auto pyclass_Var_Urho3D_NetworkNatPunchtroughFailed = py::class_<PythonBindingsFakeModule_Urho3D_NetworkNatPunchtroughFailed>(m, "NetworkNatPunchtroughFailed");

// Export Urho3D::NetworkNatMasterConnectionFailed namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkNatMasterConnectionFailed {};
auto pyclass_Var_Urho3D_NetworkNatMasterConnectionFailed = py::class_<PythonBindingsFakeModule_Urho3D_NetworkNatMasterConnectionFailed>(m, "NetworkNatMasterConnectionFailed");

// Export Urho3D::NetworkNatMasterConnectionSucceeded namespace as a class
class PythonBindingsFakeModule_Urho3D_NetworkNatMasterConnectionSucceeded {};
auto pyclass_Var_Urho3D_NetworkNatMasterConnectionSucceeded = py::class_<PythonBindingsFakeModule_Urho3D_NetworkNatMasterConnectionSucceeded>(m, "NetworkNatMasterConnectionSucceeded");

// Export Urho3D::PhysicsPreStep namespace as a class
class PythonBindingsFakeModule_Urho3D_PhysicsPreStep {};
auto pyclass_Var_Urho3D_PhysicsPreStep = py::class_<PythonBindingsFakeModule_Urho3D_PhysicsPreStep>(m, "PhysicsPreStep");

// Export Urho3D::PhysicsPostStep namespace as a class
class PythonBindingsFakeModule_Urho3D_PhysicsPostStep {};
auto pyclass_Var_Urho3D_PhysicsPostStep = py::class_<PythonBindingsFakeModule_Urho3D_PhysicsPostStep>(m, "PhysicsPostStep");

// Export Urho3D::PhysicsCollisionStart namespace as a class
class PythonBindingsFakeModule_Urho3D_PhysicsCollisionStart {};
auto pyclass_Var_Urho3D_PhysicsCollisionStart = py::class_<PythonBindingsFakeModule_Urho3D_PhysicsCollisionStart>(m, "PhysicsCollisionStart");

// Export Urho3D::PhysicsCollision namespace as a class
class PythonBindingsFakeModule_Urho3D_PhysicsCollision {};
auto pyclass_Var_Urho3D_PhysicsCollision = py::class_<PythonBindingsFakeModule_Urho3D_PhysicsCollision>(m, "PhysicsCollision");

// Export Urho3D::PhysicsCollisionEnd namespace as a class
class PythonBindingsFakeModule_Urho3D_PhysicsCollisionEnd {};
auto pyclass_Var_Urho3D_PhysicsCollisionEnd = py::class_<PythonBindingsFakeModule_Urho3D_PhysicsCollisionEnd>(m, "PhysicsCollisionEnd");

// Export Urho3D::NodeCollisionStart namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeCollisionStart {};
auto pyclass_Var_Urho3D_NodeCollisionStart = py::class_<PythonBindingsFakeModule_Urho3D_NodeCollisionStart>(m, "NodeCollisionStart");

// Export Urho3D::NodeCollision namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeCollision {};
auto pyclass_Var_Urho3D_NodeCollision = py::class_<PythonBindingsFakeModule_Urho3D_NodeCollision>(m, "NodeCollision");

// Export Urho3D::NodeCollisionEnd namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeCollisionEnd {};
auto pyclass_Var_Urho3D_NodeCollisionEnd = py::class_<PythonBindingsFakeModule_Urho3D_NodeCollisionEnd>(m, "NodeCollisionEnd");

// Export Urho3D::ReloadStarted namespace as a class
class PythonBindingsFakeModule_Urho3D_ReloadStarted {};
auto pyclass_Var_Urho3D_ReloadStarted = py::class_<PythonBindingsFakeModule_Urho3D_ReloadStarted>(m, "ReloadStarted");

// Export Urho3D::ReloadFinished namespace as a class
class PythonBindingsFakeModule_Urho3D_ReloadFinished {};
auto pyclass_Var_Urho3D_ReloadFinished = py::class_<PythonBindingsFakeModule_Urho3D_ReloadFinished>(m, "ReloadFinished");

// Export Urho3D::ReloadFailed namespace as a class
class PythonBindingsFakeModule_Urho3D_ReloadFailed {};
auto pyclass_Var_Urho3D_ReloadFailed = py::class_<PythonBindingsFakeModule_Urho3D_ReloadFailed>(m, "ReloadFailed");

// Export Urho3D::FileChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_FileChanged {};
auto pyclass_Var_Urho3D_FileChanged = py::class_<PythonBindingsFakeModule_Urho3D_FileChanged>(m, "FileChanged");

// Export Urho3D::LoadFailed namespace as a class
class PythonBindingsFakeModule_Urho3D_LoadFailed {};
auto pyclass_Var_Urho3D_LoadFailed = py::class_<PythonBindingsFakeModule_Urho3D_LoadFailed>(m, "LoadFailed");

// Export Urho3D::ResourceNotFound namespace as a class
class PythonBindingsFakeModule_Urho3D_ResourceNotFound {};
auto pyclass_Var_Urho3D_ResourceNotFound = py::class_<PythonBindingsFakeModule_Urho3D_ResourceNotFound>(m, "ResourceNotFound");

// Export Urho3D::UnknownResourceType namespace as a class
class PythonBindingsFakeModule_Urho3D_UnknownResourceType {};
auto pyclass_Var_Urho3D_UnknownResourceType = py::class_<PythonBindingsFakeModule_Urho3D_UnknownResourceType>(m, "UnknownResourceType");

// Export Urho3D::ResourceBackgroundLoaded namespace as a class
class PythonBindingsFakeModule_Urho3D_ResourceBackgroundLoaded {};
auto pyclass_Var_Urho3D_ResourceBackgroundLoaded = py::class_<PythonBindingsFakeModule_Urho3D_ResourceBackgroundLoaded>(m, "ResourceBackgroundLoaded");

// Export Urho3D::ChangeLanguage namespace as a class
class PythonBindingsFakeModule_Urho3D_ChangeLanguage {};
auto pyclass_Var_Urho3D_ChangeLanguage = py::class_<PythonBindingsFakeModule_Urho3D_ChangeLanguage>(m, "ChangeLanguage");

// Export Urho3D::SceneUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_SceneUpdate {};
auto pyclass_Var_Urho3D_SceneUpdate = py::class_<PythonBindingsFakeModule_Urho3D_SceneUpdate>(m, "SceneUpdate");

// Export Urho3D::SceneSubsystemUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_SceneSubsystemUpdate {};
auto pyclass_Var_Urho3D_SceneSubsystemUpdate = py::class_<PythonBindingsFakeModule_Urho3D_SceneSubsystemUpdate>(m, "SceneSubsystemUpdate");

// Export Urho3D::UpdateSmoothing namespace as a class
class PythonBindingsFakeModule_Urho3D_UpdateSmoothing {};
auto pyclass_Var_Urho3D_UpdateSmoothing = py::class_<PythonBindingsFakeModule_Urho3D_UpdateSmoothing>(m, "UpdateSmoothing");

// Export Urho3D::SceneDrawableUpdateFinished namespace as a class
class PythonBindingsFakeModule_Urho3D_SceneDrawableUpdateFinished {};
auto pyclass_Var_Urho3D_SceneDrawableUpdateFinished = py::class_<PythonBindingsFakeModule_Urho3D_SceneDrawableUpdateFinished>(m, "SceneDrawableUpdateFinished");

// Export Urho3D::TargetPositionChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_TargetPositionChanged {};
auto pyclass_Var_Urho3D_TargetPositionChanged = py::class_<PythonBindingsFakeModule_Urho3D_TargetPositionChanged>(m, "TargetPositionChanged");

// Export Urho3D::TargetRotationChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_TargetRotationChanged {};
auto pyclass_Var_Urho3D_TargetRotationChanged = py::class_<PythonBindingsFakeModule_Urho3D_TargetRotationChanged>(m, "TargetRotationChanged");

// Export Urho3D::AttributeAnimationUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_AttributeAnimationUpdate {};
auto pyclass_Var_Urho3D_AttributeAnimationUpdate = py::class_<PythonBindingsFakeModule_Urho3D_AttributeAnimationUpdate>(m, "AttributeAnimationUpdate");

// Export Urho3D::AttributeAnimationAdded namespace as a class
class PythonBindingsFakeModule_Urho3D_AttributeAnimationAdded {};
auto pyclass_Var_Urho3D_AttributeAnimationAdded = py::class_<PythonBindingsFakeModule_Urho3D_AttributeAnimationAdded>(m, "AttributeAnimationAdded");

// Export Urho3D::AttributeAnimationRemoved namespace as a class
class PythonBindingsFakeModule_Urho3D_AttributeAnimationRemoved {};
auto pyclass_Var_Urho3D_AttributeAnimationRemoved = py::class_<PythonBindingsFakeModule_Urho3D_AttributeAnimationRemoved>(m, "AttributeAnimationRemoved");

// Export Urho3D::ScenePostUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_ScenePostUpdate {};
auto pyclass_Var_Urho3D_ScenePostUpdate = py::class_<PythonBindingsFakeModule_Urho3D_ScenePostUpdate>(m, "ScenePostUpdate");

// Export Urho3D::AsyncLoadProgress namespace as a class
class PythonBindingsFakeModule_Urho3D_AsyncLoadProgress {};
auto pyclass_Var_Urho3D_AsyncLoadProgress = py::class_<PythonBindingsFakeModule_Urho3D_AsyncLoadProgress>(m, "AsyncLoadProgress");

// Export Urho3D::AsyncLoadFinished namespace as a class
class PythonBindingsFakeModule_Urho3D_AsyncLoadFinished {};
auto pyclass_Var_Urho3D_AsyncLoadFinished = py::class_<PythonBindingsFakeModule_Urho3D_AsyncLoadFinished>(m, "AsyncLoadFinished");

// Export Urho3D::NodeAdded namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeAdded {};
auto pyclass_Var_Urho3D_NodeAdded = py::class_<PythonBindingsFakeModule_Urho3D_NodeAdded>(m, "NodeAdded");

// Export Urho3D::NodeRemoved namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeRemoved {};
auto pyclass_Var_Urho3D_NodeRemoved = py::class_<PythonBindingsFakeModule_Urho3D_NodeRemoved>(m, "NodeRemoved");

// Export Urho3D::ComponentAdded namespace as a class
class PythonBindingsFakeModule_Urho3D_ComponentAdded {};
auto pyclass_Var_Urho3D_ComponentAdded = py::class_<PythonBindingsFakeModule_Urho3D_ComponentAdded>(m, "ComponentAdded");

// Export Urho3D::ComponentRemoved namespace as a class
class PythonBindingsFakeModule_Urho3D_ComponentRemoved {};
auto pyclass_Var_Urho3D_ComponentRemoved = py::class_<PythonBindingsFakeModule_Urho3D_ComponentRemoved>(m, "ComponentRemoved");

// Export Urho3D::NodeNameChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeNameChanged {};
auto pyclass_Var_Urho3D_NodeNameChanged = py::class_<PythonBindingsFakeModule_Urho3D_NodeNameChanged>(m, "NodeNameChanged");

// Export Urho3D::NodeEnabledChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeEnabledChanged {};
auto pyclass_Var_Urho3D_NodeEnabledChanged = py::class_<PythonBindingsFakeModule_Urho3D_NodeEnabledChanged>(m, "NodeEnabledChanged");

// Export Urho3D::NodeTagAdded namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeTagAdded {};
auto pyclass_Var_Urho3D_NodeTagAdded = py::class_<PythonBindingsFakeModule_Urho3D_NodeTagAdded>(m, "NodeTagAdded");

// Export Urho3D::NodeTagRemoved namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeTagRemoved {};
auto pyclass_Var_Urho3D_NodeTagRemoved = py::class_<PythonBindingsFakeModule_Urho3D_NodeTagRemoved>(m, "NodeTagRemoved");

// Export Urho3D::ComponentEnabledChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_ComponentEnabledChanged {};
auto pyclass_Var_Urho3D_ComponentEnabledChanged = py::class_<PythonBindingsFakeModule_Urho3D_ComponentEnabledChanged>(m, "ComponentEnabledChanged");

// Export Urho3D::TemporaryChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_TemporaryChanged {};
auto pyclass_Var_Urho3D_TemporaryChanged = py::class_<PythonBindingsFakeModule_Urho3D_TemporaryChanged>(m, "TemporaryChanged");

// Export Urho3D::NodeCloned namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeCloned {};
auto pyclass_Var_Urho3D_NodeCloned = py::class_<PythonBindingsFakeModule_Urho3D_NodeCloned>(m, "NodeCloned");

// Export Urho3D::ComponentCloned namespace as a class
class PythonBindingsFakeModule_Urho3D_ComponentCloned {};
auto pyclass_Var_Urho3D_ComponentCloned = py::class_<PythonBindingsFakeModule_Urho3D_ComponentCloned>(m, "ComponentCloned");

// Export Urho3D::InterceptNetworkUpdate namespace as a class
class PythonBindingsFakeModule_Urho3D_InterceptNetworkUpdate {};
auto pyclass_Var_Urho3D_InterceptNetworkUpdate = py::class_<PythonBindingsFakeModule_Urho3D_InterceptNetworkUpdate>(m, "InterceptNetworkUpdate");

// Export Urho3D::UIMouseClick namespace as a class
class PythonBindingsFakeModule_Urho3D_UIMouseClick {};
auto pyclass_Var_Urho3D_UIMouseClick = py::class_<PythonBindingsFakeModule_Urho3D_UIMouseClick>(m, "UIMouseClick");

// Export Urho3D::UIMouseClickEnd namespace as a class
class PythonBindingsFakeModule_Urho3D_UIMouseClickEnd {};
auto pyclass_Var_Urho3D_UIMouseClickEnd = py::class_<PythonBindingsFakeModule_Urho3D_UIMouseClickEnd>(m, "UIMouseClickEnd");

// Export Urho3D::UIMouseDoubleClick namespace as a class
class PythonBindingsFakeModule_Urho3D_UIMouseDoubleClick {};
auto pyclass_Var_Urho3D_UIMouseDoubleClick = py::class_<PythonBindingsFakeModule_Urho3D_UIMouseDoubleClick>(m, "UIMouseDoubleClick");

// Export Urho3D::Click namespace as a class
class PythonBindingsFakeModule_Urho3D_Click {};
auto pyclass_Var_Urho3D_Click = py::class_<PythonBindingsFakeModule_Urho3D_Click>(m, "Click");

// Export Urho3D::ClickEnd namespace as a class
class PythonBindingsFakeModule_Urho3D_ClickEnd {};
auto pyclass_Var_Urho3D_ClickEnd = py::class_<PythonBindingsFakeModule_Urho3D_ClickEnd>(m, "ClickEnd");

// Export Urho3D::DoubleClick namespace as a class
class PythonBindingsFakeModule_Urho3D_DoubleClick {};
auto pyclass_Var_Urho3D_DoubleClick = py::class_<PythonBindingsFakeModule_Urho3D_DoubleClick>(m, "DoubleClick");

// Export Urho3D::DragDropTest namespace as a class
class PythonBindingsFakeModule_Urho3D_DragDropTest {};
auto pyclass_Var_Urho3D_DragDropTest = py::class_<PythonBindingsFakeModule_Urho3D_DragDropTest>(m, "DragDropTest");

// Export Urho3D::DragDropFinish namespace as a class
class PythonBindingsFakeModule_Urho3D_DragDropFinish {};
auto pyclass_Var_Urho3D_DragDropFinish = py::class_<PythonBindingsFakeModule_Urho3D_DragDropFinish>(m, "DragDropFinish");

// Export Urho3D::FocusChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_FocusChanged {};
auto pyclass_Var_Urho3D_FocusChanged = py::class_<PythonBindingsFakeModule_Urho3D_FocusChanged>(m, "FocusChanged");

// Export Urho3D::NameChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_NameChanged {};
auto pyclass_Var_Urho3D_NameChanged = py::class_<PythonBindingsFakeModule_Urho3D_NameChanged>(m, "NameChanged");

// Export Urho3D::Resized namespace as a class
class PythonBindingsFakeModule_Urho3D_Resized {};
auto pyclass_Var_Urho3D_Resized = py::class_<PythonBindingsFakeModule_Urho3D_Resized>(m, "Resized");

// Export Urho3D::Positioned namespace as a class
class PythonBindingsFakeModule_Urho3D_Positioned {};
auto pyclass_Var_Urho3D_Positioned = py::class_<PythonBindingsFakeModule_Urho3D_Positioned>(m, "Positioned");

// Export Urho3D::VisibleChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_VisibleChanged {};
auto pyclass_Var_Urho3D_VisibleChanged = py::class_<PythonBindingsFakeModule_Urho3D_VisibleChanged>(m, "VisibleChanged");

// Export Urho3D::Focused namespace as a class
class PythonBindingsFakeModule_Urho3D_Focused {};
auto pyclass_Var_Urho3D_Focused = py::class_<PythonBindingsFakeModule_Urho3D_Focused>(m, "Focused");

// Export Urho3D::Defocused namespace as a class
class PythonBindingsFakeModule_Urho3D_Defocused {};
auto pyclass_Var_Urho3D_Defocused = py::class_<PythonBindingsFakeModule_Urho3D_Defocused>(m, "Defocused");

// Export Urho3D::LayoutUpdated namespace as a class
class PythonBindingsFakeModule_Urho3D_LayoutUpdated {};
auto pyclass_Var_Urho3D_LayoutUpdated = py::class_<PythonBindingsFakeModule_Urho3D_LayoutUpdated>(m, "LayoutUpdated");

// Export Urho3D::Pressed namespace as a class
class PythonBindingsFakeModule_Urho3D_Pressed {};
auto pyclass_Var_Urho3D_Pressed = py::class_<PythonBindingsFakeModule_Urho3D_Pressed>(m, "Pressed");

// Export Urho3D::Released namespace as a class
class PythonBindingsFakeModule_Urho3D_Released {};
auto pyclass_Var_Urho3D_Released = py::class_<PythonBindingsFakeModule_Urho3D_Released>(m, "Released");

// Export Urho3D::Toggled namespace as a class
class PythonBindingsFakeModule_Urho3D_Toggled {};
auto pyclass_Var_Urho3D_Toggled = py::class_<PythonBindingsFakeModule_Urho3D_Toggled>(m, "Toggled");

// Export Urho3D::SliderChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_SliderChanged {};
auto pyclass_Var_Urho3D_SliderChanged = py::class_<PythonBindingsFakeModule_Urho3D_SliderChanged>(m, "SliderChanged");

// Export Urho3D::SliderPaged namespace as a class
class PythonBindingsFakeModule_Urho3D_SliderPaged {};
auto pyclass_Var_Urho3D_SliderPaged = py::class_<PythonBindingsFakeModule_Urho3D_SliderPaged>(m, "SliderPaged");

// Export Urho3D::ProgressBarChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_ProgressBarChanged {};
auto pyclass_Var_Urho3D_ProgressBarChanged = py::class_<PythonBindingsFakeModule_Urho3D_ProgressBarChanged>(m, "ProgressBarChanged");

// Export Urho3D::ScrollBarChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_ScrollBarChanged {};
auto pyclass_Var_Urho3D_ScrollBarChanged = py::class_<PythonBindingsFakeModule_Urho3D_ScrollBarChanged>(m, "ScrollBarChanged");

// Export Urho3D::ViewChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_ViewChanged {};
auto pyclass_Var_Urho3D_ViewChanged = py::class_<PythonBindingsFakeModule_Urho3D_ViewChanged>(m, "ViewChanged");

// Export Urho3D::ModalChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_ModalChanged {};
auto pyclass_Var_Urho3D_ModalChanged = py::class_<PythonBindingsFakeModule_Urho3D_ModalChanged>(m, "ModalChanged");

// Export Urho3D::TextEntry namespace as a class
class PythonBindingsFakeModule_Urho3D_TextEntry {};
auto pyclass_Var_Urho3D_TextEntry = py::class_<PythonBindingsFakeModule_Urho3D_TextEntry>(m, "TextEntry");

// Export Urho3D::TextChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_TextChanged {};
auto pyclass_Var_Urho3D_TextChanged = py::class_<PythonBindingsFakeModule_Urho3D_TextChanged>(m, "TextChanged");

// Export Urho3D::TextFinished namespace as a class
class PythonBindingsFakeModule_Urho3D_TextFinished {};
auto pyclass_Var_Urho3D_TextFinished = py::class_<PythonBindingsFakeModule_Urho3D_TextFinished>(m, "TextFinished");

// Export Urho3D::MenuSelected namespace as a class
class PythonBindingsFakeModule_Urho3D_MenuSelected {};
auto pyclass_Var_Urho3D_MenuSelected = py::class_<PythonBindingsFakeModule_Urho3D_MenuSelected>(m, "MenuSelected");

// Export Urho3D::ItemSelected namespace as a class
class PythonBindingsFakeModule_Urho3D_ItemSelected {};
auto pyclass_Var_Urho3D_ItemSelected = py::class_<PythonBindingsFakeModule_Urho3D_ItemSelected>(m, "ItemSelected");

// Export Urho3D::ItemDeselected namespace as a class
class PythonBindingsFakeModule_Urho3D_ItemDeselected {};
auto pyclass_Var_Urho3D_ItemDeselected = py::class_<PythonBindingsFakeModule_Urho3D_ItemDeselected>(m, "ItemDeselected");

// Export Urho3D::SelectionChanged namespace as a class
class PythonBindingsFakeModule_Urho3D_SelectionChanged {};
auto pyclass_Var_Urho3D_SelectionChanged = py::class_<PythonBindingsFakeModule_Urho3D_SelectionChanged>(m, "SelectionChanged");

// Export Urho3D::ItemClicked namespace as a class
class PythonBindingsFakeModule_Urho3D_ItemClicked {};
auto pyclass_Var_Urho3D_ItemClicked = py::class_<PythonBindingsFakeModule_Urho3D_ItemClicked>(m, "ItemClicked");

// Export Urho3D::ItemDoubleClicked namespace as a class
class PythonBindingsFakeModule_Urho3D_ItemDoubleClicked {};
auto pyclass_Var_Urho3D_ItemDoubleClicked = py::class_<PythonBindingsFakeModule_Urho3D_ItemDoubleClicked>(m, "ItemDoubleClicked");

// Export Urho3D::UnhandledKey namespace as a class
class PythonBindingsFakeModule_Urho3D_UnhandledKey {};
auto pyclass_Var_Urho3D_UnhandledKey = py::class_<PythonBindingsFakeModule_Urho3D_UnhandledKey>(m, "UnhandledKey");

// Export Urho3D::FileSelected namespace as a class
class PythonBindingsFakeModule_Urho3D_FileSelected {};
auto pyclass_Var_Urho3D_FileSelected = py::class_<PythonBindingsFakeModule_Urho3D_FileSelected>(m, "FileSelected");

// Export Urho3D::MessageACK namespace as a class
class PythonBindingsFakeModule_Urho3D_MessageACK {};
auto pyclass_Var_Urho3D_MessageACK = py::class_<PythonBindingsFakeModule_Urho3D_MessageACK>(m, "MessageACK");

// Export Urho3D::ElementAdded namespace as a class
class PythonBindingsFakeModule_Urho3D_ElementAdded {};
auto pyclass_Var_Urho3D_ElementAdded = py::class_<PythonBindingsFakeModule_Urho3D_ElementAdded>(m, "ElementAdded");

// Export Urho3D::ElementRemoved namespace as a class
class PythonBindingsFakeModule_Urho3D_ElementRemoved {};
auto pyclass_Var_Urho3D_ElementRemoved = py::class_<PythonBindingsFakeModule_Urho3D_ElementRemoved>(m, "ElementRemoved");

// Export Urho3D::HoverBegin namespace as a class
class PythonBindingsFakeModule_Urho3D_HoverBegin {};
auto pyclass_Var_Urho3D_HoverBegin = py::class_<PythonBindingsFakeModule_Urho3D_HoverBegin>(m, "HoverBegin");

// Export Urho3D::HoverEnd namespace as a class
class PythonBindingsFakeModule_Urho3D_HoverEnd {};
auto pyclass_Var_Urho3D_HoverEnd = py::class_<PythonBindingsFakeModule_Urho3D_HoverEnd>(m, "HoverEnd");

// Export Urho3D::DragBegin namespace as a class
class PythonBindingsFakeModule_Urho3D_DragBegin {};
auto pyclass_Var_Urho3D_DragBegin = py::class_<PythonBindingsFakeModule_Urho3D_DragBegin>(m, "DragBegin");

// Export Urho3D::DragMove namespace as a class
class PythonBindingsFakeModule_Urho3D_DragMove {};
auto pyclass_Var_Urho3D_DragMove = py::class_<PythonBindingsFakeModule_Urho3D_DragMove>(m, "DragMove");

// Export Urho3D::DragEnd namespace as a class
class PythonBindingsFakeModule_Urho3D_DragEnd {};
auto pyclass_Var_Urho3D_DragEnd = py::class_<PythonBindingsFakeModule_Urho3D_DragEnd>(m, "DragEnd");

// Export Urho3D::DragCancel namespace as a class
class PythonBindingsFakeModule_Urho3D_DragCancel {};
auto pyclass_Var_Urho3D_DragCancel = py::class_<PythonBindingsFakeModule_Urho3D_DragCancel>(m, "DragCancel");

// Export Urho3D::UIDropFile namespace as a class
class PythonBindingsFakeModule_Urho3D_UIDropFile {};
auto pyclass_Var_Urho3D_UIDropFile = py::class_<PythonBindingsFakeModule_Urho3D_UIDropFile>(m, "UIDropFile");

// Export Urho3D::Spriter namespace as a class
class PythonBindingsFakeModule_Urho3D_Spriter {};
auto pyclass_Var_Urho3D_Spriter = py::class_<PythonBindingsFakeModule_Urho3D_Spriter>(m, "Spriter");

// Export Urho3D::PhysicsUpdateContact2D namespace as a class
class PythonBindingsFakeModule_Urho3D_PhysicsUpdateContact2D {};
auto pyclass_Var_Urho3D_PhysicsUpdateContact2D = py::class_<PythonBindingsFakeModule_Urho3D_PhysicsUpdateContact2D>(m, "PhysicsUpdateContact2D");

// Export Urho3D::PhysicsBeginContact2D namespace as a class
class PythonBindingsFakeModule_Urho3D_PhysicsBeginContact2D {};
auto pyclass_Var_Urho3D_PhysicsBeginContact2D = py::class_<PythonBindingsFakeModule_Urho3D_PhysicsBeginContact2D>(m, "PhysicsBeginContact2D");

// Export Urho3D::PhysicsEndContact2D namespace as a class
class PythonBindingsFakeModule_Urho3D_PhysicsEndContact2D {};
auto pyclass_Var_Urho3D_PhysicsEndContact2D = py::class_<PythonBindingsFakeModule_Urho3D_PhysicsEndContact2D>(m, "PhysicsEndContact2D");

// Export Urho3D::NodeUpdateContact2D namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeUpdateContact2D {};
auto pyclass_Var_Urho3D_NodeUpdateContact2D = py::class_<PythonBindingsFakeModule_Urho3D_NodeUpdateContact2D>(m, "NodeUpdateContact2D");

// Export Urho3D::NodeBeginContact2D namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeBeginContact2D {};
auto pyclass_Var_Urho3D_NodeBeginContact2D = py::class_<PythonBindingsFakeModule_Urho3D_NodeBeginContact2D>(m, "NodeBeginContact2D");

// Export Urho3D::NodeEndContact2D namespace as a class
class PythonBindingsFakeModule_Urho3D_NodeEndContact2D {};
auto pyclass_Var_Urho3D_NodeEndContact2D = py::class_<PythonBindingsFakeModule_Urho3D_NodeEndContact2D>(m, "NodeEndContact2D");

// Export Urho3D::ParticlesEnd namespace as a class
class PythonBindingsFakeModule_Urho3D_ParticlesEnd {};
auto pyclass_Var_Urho3D_ParticlesEnd = py::class_<PythonBindingsFakeModule_Urho3D_ParticlesEnd>(m, "ParticlesEnd");

// Export Urho3D::ParticlesDuration namespace as a class
class PythonBindingsFakeModule_Urho3D_ParticlesDuration {};
auto pyclass_Var_Urho3D_ParticlesDuration = py::class_<PythonBindingsFakeModule_Urho3D_ParticlesDuration>(m, "ParticlesDuration");

// Export pugi namespace as a class
class PythonBindingsFakeModule_pugi {};
auto pyclass_Var_pugi = py::class_<PythonBindingsFakeModule_pugi>(m, "pugi");

// Export SLNet namespace as a class
class PythonBindingsFakeModule_SLNet {};
auto pyclass_Var_SLNet = py::class_<PythonBindingsFakeModule_SLNet>(m, "SLNet");

// Export Rocket namespace as a class
class PythonBindingsFakeModule_Rocket {};
auto pyclass_Var_Rocket = py::class_<PythonBindingsFakeModule_Rocket>(m, "Rocket");

// Export Rocket::Core namespace as a class
class PythonBindingsFakeModule_Rocket_Core {};
auto pyclass_Var_Rocket_Core = py::class_<PythonBindingsFakeModule_Rocket_Core>(pyclass_Var_Rocket, "Core");

// Export Rocket::Core::Math namespace as a class
class PythonBindingsFakeModule_Rocket_Core_Math {};
auto pyclass_Var_Rocket_Core_Math = py::class_<PythonBindingsFakeModule_Rocket_Core_Math>(pyclass_Var_Rocket_Core, "Math");

// Export Rocket::Core::Input namespace as a class
class PythonBindingsFakeModule_Rocket_Core_Input {};
auto pyclass_Var_Rocket_Core_Input = py::class_<PythonBindingsFakeModule_Rocket_Core_Input>(pyclass_Var_Rocket_Core, "Input");

// Export Rocket::Core::Font namespace as a class
class PythonBindingsFakeModule_Rocket_Core_Font {};
auto pyclass_Var_Rocket_Core_Font = py::class_<PythonBindingsFakeModule_Rocket_Core_Font>(pyclass_Var_Rocket_Core, "Font");


    //================================================
    // MANUAL:
    //================================================
    // Bind Container classes
    auto pyclass_Var_Urho3D_Vector__int_ = py::bind_Vector<Urho3D::Vector<int>>(pyclass_Var_Urho3D,"Vector_int");

    auto pyclass_Var_Urho3D_Vector__unsigned_char_ = py::bind_Vector<Urho3D::PODVector<unsigned char>>(pyclass_Var_Urho3D,"ByteVector");

    auto pyclass_Var_Urho3D_VariantVector = py::bind_Vector<Urho3D::Vector<Variant>>(pyclass_Var_Urho3D,"VariantVector");

    auto pyclass_Var_Urho3D_StringVector = py::bind_Vector<Urho3D::StringVector>(pyclass_Var_Urho3D,"StringVector");
    
    auto pyclass_Var_Urho3D_VariantMap = py::bind_Map<Urho3D::VariantMap>(pyclass_Var_Urho3D,"VariantMap");

    auto pyclass_Var_Urho3D_StringMap = py::bind_Map<Urho3D::StringMap>(pyclass_Var_Urho3D,"StringMap");


    //================================================
    // Declare Classes
    //================================================
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
// Type Urho3D::VertexBuffer Registrations
auto pyclass_Var_Urho3D_VertexBuffer = py::class_<Urho3D::VertexBuffer, Urho3D::SharedPtr<Urho3D::VertexBuffer>, Urho3D::Object, Urho3D::GPUObject>(pyclass_Var_Urho3D, "VertexBuffer", "test doc");
// Type Urho3D::BoxOctreeQuery Registrations
auto pyclass_Var_Urho3D_BoxOctreeQuery = py::class_<Urho3D::BoxOctreeQuery, Urho3D::ExternalPtr<Urho3D::BoxOctreeQuery>, Urho3D::OctreeQuery>(pyclass_Var_Urho3D, "BoxOctreeQuery", "test doc");
// Type Urho3D::Viewport Registrations
auto pyclass_Var_Urho3D_Viewport = py::class_<Urho3D::Viewport, Urho3D::SharedPtr<Urho3D::Viewport>, Urho3D::Object>(pyclass_Var_Urho3D, "Viewport", "test doc");
// Type Urho3D::FileWatcher Registrations
auto pyclass_Var_Urho3D_FileWatcher = py::class_<Urho3D::FileWatcher, Urho3D::SharedPtr<Urho3D::FileWatcher>, Urho3D::Object, Urho3D::Thread>(pyclass_Var_Urho3D, "FileWatcher", "test doc");
// Type Urho3D::Input Registrations
auto pyclass_Var_Urho3D_Input = py::class_<Urho3D::Input, Urho3D::SharedPtr<Urho3D::Input>, Urho3D::Object>(pyclass_Var_Urho3D, "Input", "test doc");
// Type Urho3D::LuaScript Registrations
auto pyclass_Var_Urho3D_LuaScript = py::class_<Urho3D::LuaScript, Urho3D::SharedPtr<Urho3D::LuaScript>, Urho3D::Object, Urho3D::LuaScriptEventListener>(pyclass_Var_Urho3D, "LuaScript", "test doc");
// Type Urho3D::Matrix2 Registrations
auto pyclass_Var_Urho3D_Matrix2 = py::class_<Urho3D::Matrix2, Urho3D::ExternalPtr<Urho3D::Matrix2>>(pyclass_Var_Urho3D, "Matrix2", "test doc");
// Type Urho3D::Network Registrations
auto pyclass_Var_Urho3D_Network = py::class_<Urho3D::Network, Urho3D::SharedPtr<Urho3D::Network>, Urho3D::Object>(pyclass_Var_Urho3D, "Network", "test doc");
// Type Urho3D::CheckBox Registrations
auto pyclass_Var_Urho3D_CheckBox = py::class_<Urho3D::CheckBox, Urho3D::SharedPtr<Urho3D::CheckBox>, Urho3D::BorderImage>(pyclass_Var_Urho3D, "CheckBox", "test doc");
// Type Urho3D::Window Registrations
auto pyclass_Var_Urho3D_Window = py::class_<Urho3D::Window, Urho3D::SharedPtr<Urho3D::Window>, Urho3D::BorderImage>(pyclass_Var_Urho3D, "Window", "test doc");
// Type Urho3D::ScrollBar Registrations
auto pyclass_Var_Urho3D_ScrollBar = py::class_<Urho3D::ScrollBar, Urho3D::SharedPtr<Urho3D::ScrollBar>, Urho3D::BorderImage>(pyclass_Var_Urho3D, "ScrollBar", "test doc");
// Type Urho3D::UISelectable Registrations
auto pyclass_Var_Urho3D_UISelectable = py::class_<Urho3D::UISelectable, Urho3D::SharedPtr<Urho3D::UISelectable>, Urho3D::UIElement>(pyclass_Var_Urho3D, "UISelectable", "test doc");
// Type Urho3D::Slider Registrations
auto pyclass_Var_Urho3D_Slider = py::class_<Urho3D::Slider, Urho3D::SharedPtr<Urho3D::Slider>, Urho3D::BorderImage>(pyclass_Var_Urho3D, "Slider", "test doc");
// Type Urho3D::ToolTip Registrations
auto pyclass_Var_Urho3D_ToolTip = py::class_<Urho3D::ToolTip, Urho3D::SharedPtr<Urho3D::ToolTip>, Urho3D::UIElement>(pyclass_Var_Urho3D, "ToolTip", "test doc");
// Type Urho3D::View3D Registrations
auto pyclass_Var_Urho3D_View3D = py::class_<Urho3D::View3D, Urho3D::SharedPtr<Urho3D::View3D>, Urho3D::Window>(pyclass_Var_Urho3D, "View3D", "test doc");
// Type Urho3D::TileMapObject2D Registrations
auto pyclass_Var_Urho3D_TileMapObject2D = py::class_<Urho3D::TileMapObject2D, Urho3D::SharedPtr<Urho3D::TileMapObject2D>, Urho3D::RefCounted>(pyclass_Var_Urho3D, "TileMapObject2D", "test doc");
// Type Urho3D::CScriptDictValue Registrations
auto pyclass_Var_Urho3D_CScriptDictValue = py::class_<Urho3D::CScriptDictValue, Urho3D::ExternalPtr<Urho3D::CScriptDictValue>>(pyclass_Var_Urho3D, "CScriptDictValue", "test doc");
// Type Urho3D::Rect Registrations
auto pyclass_Var_Urho3D_Rect = py::class_<Urho3D::Rect, Urho3D::ExternalPtr<Urho3D::Rect>>(pyclass_Var_Urho3D, "Rect", "test doc");
// Type Urho3D::ResourceRouter Registrations
auto pyclass_Var_Urho3D_ResourceRouter = py::class_<Urho3D::ResourceRouter, Urho3D::SharedPtr<Urho3D::ResourceRouter>, Urho3D::Object>(pyclass_Var_Urho3D, "ResourceRouter", "test doc");
// Type Urho3D::Serializer Registrations
auto pyclass_Var_Urho3D_Serializer = py::class_<Urho3D::Serializer, Urho3D::ExternalPtr<Urho3D::Serializer>>(pyclass_Var_Urho3D, "Serializer", "test doc");
// Type Urho3D::Component Registrations
auto pyclass_Var_Urho3D_Component = py::class_<Urho3D::Component, Urho3D::SharedPtr<Urho3D::Component>, Urho3D::Animatable>(pyclass_Var_Urho3D, "Component", "test doc");
// Type Urho3D::SoundSource Registrations
auto pyclass_Var_Urho3D_SoundSource = py::class_<Urho3D::SoundSource, Urho3D::SharedPtr<Urho3D::SoundSource>, Urho3D::Component>(pyclass_Var_Urho3D, "SoundSource", "test doc");
// Type Urho3D::Drawable Registrations
auto pyclass_Var_Urho3D_Drawable = py::class_<Urho3D::Drawable, Urho3D::SharedPtr<Urho3D::Drawable>, Urho3D::Component>(pyclass_Var_Urho3D, "Drawable", "test doc");
// Type Urho3D::StaticModel Registrations
auto pyclass_Var_Urho3D_StaticModel = py::class_<Urho3D::StaticModel, Urho3D::SharedPtr<Urho3D::StaticModel>, Urho3D::Drawable>(pyclass_Var_Urho3D, "StaticModel", "test doc");
// Type Urho3D::AbstractFile Registrations
auto pyclass_Var_Urho3D_AbstractFile = py::class_<Urho3D::AbstractFile, Urho3D::ExternalPtr<Urho3D::AbstractFile>, Urho3D::Deserializer, Urho3D::Serializer>(pyclass_Var_Urho3D, "AbstractFile", "test doc");
// Type Urho3D::Cursor Registrations
auto pyclass_Var_Urho3D_Cursor = py::class_<Urho3D::Cursor, Urho3D::SharedPtr<Urho3D::Cursor>, Urho3D::BorderImage>(pyclass_Var_Urho3D, "Cursor", "test doc");
// Type Urho3D::SoundSource3D Registrations
auto pyclass_Var_Urho3D_SoundSource3D = py::class_<Urho3D::SoundSource3D, Urho3D::SharedPtr<Urho3D::SoundSource3D>, Urho3D::SoundSource>(pyclass_Var_Urho3D, "SoundSource3D", "test doc");
// Type Urho3D::Engine Registrations
auto pyclass_Var_Urho3D_Engine = py::class_<Urho3D::Engine, Urho3D::SharedPtr<Urho3D::Engine>, Urho3D::Object>(pyclass_Var_Urho3D, "Engine", "test doc");
// Type Urho3D::Text Registrations
auto pyclass_Var_Urho3D_Text = py::class_<Urho3D::Text, Urho3D::SharedPtr<Urho3D::Text>, Urho3D::UISelectable>(pyclass_Var_Urho3D, "Text", "test doc");
// Type Urho3D::AnimatedModel Registrations
auto pyclass_Var_Urho3D_AnimatedModel = py::class_<Urho3D::AnimatedModel, Urho3D::SharedPtr<Urho3D::AnimatedModel>, Urho3D::StaticModel>(pyclass_Var_Urho3D, "AnimatedModel", "test doc");
// Type Urho3D::BillboardSet Registrations
auto pyclass_Var_Urho3D_BillboardSet = py::class_<Urho3D::BillboardSet, Urho3D::SharedPtr<Urho3D::BillboardSet>, Urho3D::Drawable>(pyclass_Var_Urho3D, "BillboardSet", "test doc");
// Type Urho3D::DecalSet Registrations
auto pyclass_Var_Urho3D_DecalSet = py::class_<Urho3D::DecalSet, Urho3D::SharedPtr<Urho3D::DecalSet>, Urho3D::Drawable>(pyclass_Var_Urho3D, "DecalSet", "test doc");
// Type Urho3D::Octree Registrations
auto pyclass_Var_Urho3D_Octree = py::class_<Urho3D::Octree, Urho3D::SharedPtr<Urho3D::Octree>, Urho3D::Component, Urho3D::Octant>(pyclass_Var_Urho3D, "Octree", "test doc");
// Type Urho3D::ParticleEmitter Registrations
auto pyclass_Var_Urho3D_ParticleEmitter = py::class_<Urho3D::ParticleEmitter, Urho3D::SharedPtr<Urho3D::ParticleEmitter>, Urho3D::BillboardSet>(pyclass_Var_Urho3D, "ParticleEmitter", "test doc");
// Type Urho3D::Skybox Registrations
auto pyclass_Var_Urho3D_Skybox = py::class_<Urho3D::Skybox, Urho3D::SharedPtr<Urho3D::Skybox>, Urho3D::StaticModel>(pyclass_Var_Urho3D, "Skybox", "test doc");
// Type Urho3D::TerrainPatch Registrations
auto pyclass_Var_Urho3D_TerrainPatch = py::class_<Urho3D::TerrainPatch, Urho3D::SharedPtr<Urho3D::TerrainPatch>, Urho3D::Drawable>(pyclass_Var_Urho3D, "TerrainPatch", "test doc");
// Type Urho3D::IKConstraint Registrations
auto pyclass_Var_Urho3D_IKConstraint = py::class_<Urho3D::IKConstraint, Urho3D::SharedPtr<Urho3D::IKConstraint>, Urho3D::Component>(pyclass_Var_Urho3D, "IKConstraint", "test doc");
// Type Urho3D::IKEffector Registrations
auto pyclass_Var_Urho3D_IKEffector = py::class_<Urho3D::IKEffector, Urho3D::SharedPtr<Urho3D::IKEffector>, Urho3D::Component>(pyclass_Var_Urho3D, "IKEffector", "test doc");
// Type Urho3D::NamedPipe Registrations
auto pyclass_Var_Urho3D_NamedPipe = py::class_<Urho3D::NamedPipe, Urho3D::SharedPtr<Urho3D::NamedPipe>, Urho3D::Object, Urho3D::AbstractFile>(pyclass_Var_Urho3D, "NamedPipe", "test doc");
// Type Urho3D::LuaScriptInstance Registrations
auto pyclass_Var_Urho3D_LuaScriptInstance = py::class_<Urho3D::LuaScriptInstance, Urho3D::SharedPtr<Urho3D::LuaScriptInstance>, Urho3D::Component, Urho3D::LuaScriptEventListener>(pyclass_Var_Urho3D, "LuaScriptInstance", "test doc");
// Type Urho3D::NavigationMesh Registrations
auto pyclass_Var_Urho3D_NavigationMesh = py::class_<Urho3D::NavigationMesh, Urho3D::SharedPtr<Urho3D::NavigationMesh>, Urho3D::Component>(pyclass_Var_Urho3D, "NavigationMesh", "test doc");
// Type Urho3D::NavArea Registrations
auto pyclass_Var_Urho3D_NavArea = py::class_<Urho3D::NavArea, Urho3D::SharedPtr<Urho3D::NavArea>, Urho3D::Component>(pyclass_Var_Urho3D, "NavArea", "test doc");
// Type Urho3D::Obstacle Registrations
auto pyclass_Var_Urho3D_Obstacle = py::class_<Urho3D::Obstacle, Urho3D::SharedPtr<Urho3D::Obstacle>, Urho3D::Component>(pyclass_Var_Urho3D, "Obstacle", "test doc");
// Type Urho3D::Navigable Registrations
auto pyclass_Var_Urho3D_Navigable = py::class_<Urho3D::Navigable, Urho3D::SharedPtr<Urho3D::Navigable>, Urho3D::Component>(pyclass_Var_Urho3D, "Navigable", "test doc");
// Type Urho3D::PhysicsWorld Registrations
auto pyclass_Var_Urho3D_PhysicsWorld = py::class_<Urho3D::PhysicsWorld, Urho3D::SharedPtr<Urho3D::PhysicsWorld>, Urho3D::Component>(pyclass_Var_Urho3D, "PhysicsWorld", "test doc");
// Type Urho3D::CollisionShape Registrations
auto pyclass_Var_Urho3D_CollisionShape = py::class_<Urho3D::CollisionShape, Urho3D::SharedPtr<Urho3D::CollisionShape>, Urho3D::Component>(pyclass_Var_Urho3D, "CollisionShape", "test doc");
// Type Urho3D::LogicComponent Registrations
auto pyclass_Var_Urho3D_LogicComponent = py::class_<Urho3D::LogicComponent, Urho3D::SharedPtr<Urho3D::LogicComponent>, Urho3D::Component>(pyclass_Var_Urho3D, "LogicComponent", "test doc");
// Type Urho3D::RaycastVehicle Registrations
auto pyclass_Var_Urho3D_RaycastVehicle = py::class_<Urho3D::RaycastVehicle, Urho3D::SharedPtr<Urho3D::RaycastVehicle>, Urho3D::LogicComponent>(pyclass_Var_Urho3D, "RaycastVehicle", "test doc");
// Type Urho3D::SplinePath Registrations
auto pyclass_Var_Urho3D_SplinePath = py::class_<Urho3D::SplinePath, Urho3D::SharedPtr<Urho3D::SplinePath>, Urho3D::Component>(pyclass_Var_Urho3D, "SplinePath", "test doc");
// Type Urho3D::Menu Registrations
auto pyclass_Var_Urho3D_Menu = py::class_<Urho3D::Menu, Urho3D::SharedPtr<Urho3D::Menu>, Urho3D::Button>(pyclass_Var_Urho3D, "Menu", "test doc");
// Type Urho3D::ScrollView Registrations
auto pyclass_Var_Urho3D_ScrollView = py::class_<Urho3D::ScrollView, Urho3D::SharedPtr<Urho3D::ScrollView>, Urho3D::UIElement>(pyclass_Var_Urho3D, "ScrollView", "test doc");
// Type Urho3D::Sprite Registrations
auto pyclass_Var_Urho3D_Sprite = py::class_<Urho3D::Sprite, Urho3D::SharedPtr<Urho3D::Sprite>, Urho3D::UIElement>(pyclass_Var_Urho3D, "Sprite", "test doc");
// Type Urho3D::UIComponent Registrations
auto pyclass_Var_Urho3D_UIComponent = py::class_<Urho3D::UIComponent, Urho3D::SharedPtr<Urho3D::UIComponent>, Urho3D::Component>(pyclass_Var_Urho3D, "UIComponent", "test doc");
// Type Urho3D::Renderer2D Registrations
auto pyclass_Var_Urho3D_Renderer2D = py::class_<Urho3D::Renderer2D, Urho3D::SharedPtr<Urho3D::Renderer2D>, Urho3D::Drawable>(pyclass_Var_Urho3D, "Renderer2D", "test doc");
// Type Urho3D::RigidBody2D Registrations
auto pyclass_Var_Urho3D_RigidBody2D = py::class_<Urho3D::RigidBody2D, Urho3D::SharedPtr<Urho3D::RigidBody2D>, Urho3D::Component>(pyclass_Var_Urho3D, "RigidBody2D", "test doc");
// Type Urho3D::PhysicsWorld2D Registrations
auto pyclass_Var_Urho3D_PhysicsWorld2D = py::class_<Urho3D::PhysicsWorld2D, Urho3D::SharedPtr<Urho3D::PhysicsWorld2D>, Urho3D::Component>(pyclass_Var_Urho3D, "PhysicsWorld2D", "test doc");
// Type Urho3D::TileMapLayer2D Registrations
auto pyclass_Var_Urho3D_TileMapLayer2D = py::class_<Urho3D::TileMapLayer2D, Urho3D::SharedPtr<Urho3D::TileMapLayer2D>, Urho3D::Component>(pyclass_Var_Urho3D, "TileMapLayer2D", "test doc");
// Type Urho3D::TileMap2D Registrations
auto pyclass_Var_Urho3D_TileMap2D = py::class_<Urho3D::TileMap2D, Urho3D::SharedPtr<Urho3D::TileMap2D>, Urho3D::Component>(pyclass_Var_Urho3D, "TileMap2D", "test doc");
// Type Urho3D::IntVector3 Registrations
auto pyclass_Var_Urho3D_IntVector3 = py::class_<Urho3D::IntVector3, Urho3D::ExternalPtr<Urho3D::IntVector3>>(pyclass_Var_Urho3D, "IntVector3", "test doc");
// Type Urho3D::Scene Registrations
auto pyclass_Var_Urho3D_Scene = py::class_<Urho3D::Scene, Urho3D::SharedPtr<Urho3D::Scene>, Urho3D::Node>(pyclass_Var_Urho3D, "Scene", "test doc");
// Type Urho3D::ScriptInstance Registrations
auto pyclass_Var_Urho3D_ScriptInstance = py::class_<Urho3D::ScriptInstance, Urho3D::SharedPtr<Urho3D::ScriptInstance>, Urho3D::Component, Urho3D::ScriptEventListener>(pyclass_Var_Urho3D, "ScriptInstance", "test doc");
// Type Urho3D::DebugRenderer Registrations
auto pyclass_Var_Urho3D_DebugRenderer = py::class_<Urho3D::DebugRenderer, Urho3D::SharedPtr<Urho3D::DebugRenderer>, Urho3D::Component>(pyclass_Var_Urho3D, "DebugRenderer", "test doc");
// Type Urho3D::Camera Registrations
auto pyclass_Var_Urho3D_Camera = py::class_<Urho3D::Camera, Urho3D::SharedPtr<Urho3D::Camera>, Urho3D::Component>(pyclass_Var_Urho3D, "Camera", "test doc");
// Type Urho3D::Light Registrations
auto pyclass_Var_Urho3D_Light = py::class_<Urho3D::Light, Urho3D::SharedPtr<Urho3D::Light>, Urho3D::Drawable>(pyclass_Var_Urho3D, "Light", "test doc");
// Type Urho3D::Zone Registrations
auto pyclass_Var_Urho3D_Zone = py::class_<Urho3D::Zone, Urho3D::SharedPtr<Urho3D::Zone>, Urho3D::Drawable>(pyclass_Var_Urho3D, "Zone", "test doc");
// Type Urho3D::Resource Registrations
auto pyclass_Var_Urho3D_Resource = py::class_<Urho3D::Resource, Urho3D::SharedPtr<Urho3D::Resource>, Urho3D::Object>(pyclass_Var_Urho3D, "Resource", "test doc");
// Type Urho3D::XMLFile Registrations
auto pyclass_Var_Urho3D_XMLFile = py::class_<Urho3D::XMLFile, Urho3D::SharedPtr<Urho3D::XMLFile>, Urho3D::Resource>(pyclass_Var_Urho3D, "XMLFile", "test doc");
// Type Urho3D::XPathQuery Registrations
auto pyclass_Var_Urho3D_XPathQuery = py::class_<Urho3D::XPathQuery, Urho3D::ExternalPtr<Urho3D::XPathQuery>>(pyclass_Var_Urho3D, "XPathQuery", "test doc");
// Type Urho3D::JSONFile Registrations
auto pyclass_Var_Urho3D_JSONFile = py::class_<Urho3D::JSONFile, Urho3D::SharedPtr<Urho3D::JSONFile>, Urho3D::Resource>(pyclass_Var_Urho3D, "JSONFile", "test doc");
// Type Urho3D::EventProfiler Registrations
auto pyclass_Var_Urho3D_EventProfiler = py::class_<Urho3D::EventProfiler, Urho3D::SharedPtr<Urho3D::EventProfiler>, Urho3D::Profiler>(pyclass_Var_Urho3D, "EventProfiler", "test doc");
// Type Urho3D::Font Registrations
auto pyclass_Var_Urho3D_Font = py::class_<Urho3D::Font, Urho3D::SharedPtr<Urho3D::Font>, Urho3D::Resource>(pyclass_Var_Urho3D, "Font", "test doc");
// Type Urho3D::AnimationController Registrations
auto pyclass_Var_Urho3D_AnimationController = py::class_<Urho3D::AnimationController, Urho3D::SharedPtr<Urho3D::AnimationController>, Urho3D::Component>(pyclass_Var_Urho3D, "AnimationController", "test doc");
// Type Urho3D::Shader Registrations
auto pyclass_Var_Urho3D_Shader = py::class_<Urho3D::Shader, Urho3D::SharedPtr<Urho3D::Shader>, Urho3D::Resource>(pyclass_Var_Urho3D, "Shader", "test doc");
// Type Urho3D::ParticleEffect Registrations
auto pyclass_Var_Urho3D_ParticleEffect = py::class_<Urho3D::ParticleEffect, Urho3D::SharedPtr<Urho3D::ParticleEffect>, Urho3D::Resource>(pyclass_Var_Urho3D, "ParticleEffect", "test doc");
// Type Urho3D::StaticModelGroup Registrations
auto pyclass_Var_Urho3D_StaticModelGroup = py::class_<Urho3D::StaticModelGroup, Urho3D::SharedPtr<Urho3D::StaticModelGroup>, Urho3D::StaticModel>(pyclass_Var_Urho3D, "StaticModelGroup", "test doc");
// Type Urho3D::IKSolver Registrations
auto pyclass_Var_Urho3D_IKSolver = py::class_<Urho3D::IKSolver, Urho3D::SharedPtr<Urho3D::IKSolver>, Urho3D::Component>(pyclass_Var_Urho3D, "IKSolver", "test doc");
// Type Urho3D::LuaFile Registrations
auto pyclass_Var_Urho3D_LuaFile = py::class_<Urho3D::LuaFile, Urho3D::SharedPtr<Urho3D::LuaFile>, Urho3D::Resource>(pyclass_Var_Urho3D, "LuaFile", "test doc");
// Type Urho3D::CrowdManager Registrations
auto pyclass_Var_Urho3D_CrowdManager = py::class_<Urho3D::CrowdManager, Urho3D::SharedPtr<Urho3D::CrowdManager>, Urho3D::Component>(pyclass_Var_Urho3D, "CrowdManager", "test doc");
// Type Urho3D::DynamicNavigationMesh Registrations
auto pyclass_Var_Urho3D_DynamicNavigationMesh = py::class_<Urho3D::DynamicNavigationMesh, Urho3D::SharedPtr<Urho3D::DynamicNavigationMesh>, Urho3D::NavigationMesh>(pyclass_Var_Urho3D, "DynamicNavigationMesh", "test doc");
// Type Urho3D::RigidBody Registrations
auto pyclass_Var_Urho3D_RigidBody = py::class_<Urho3D::RigidBody, Urho3D::SharedPtr<Urho3D::RigidBody>, Urho3D::Component>(pyclass_Var_Urho3D, "RigidBody", "test doc");
// Type Urho3D::SmoothedTransform Registrations
auto pyclass_Var_Urho3D_SmoothedTransform = py::class_<Urho3D::SmoothedTransform, Urho3D::SharedPtr<Urho3D::SmoothedTransform>, Urho3D::Component>(pyclass_Var_Urho3D, "SmoothedTransform", "test doc");
// Type Urho3D::UnknownComponent Registrations
auto pyclass_Var_Urho3D_UnknownComponent = py::class_<Urho3D::UnknownComponent, Urho3D::SharedPtr<Urho3D::UnknownComponent>, Urho3D::Component>(pyclass_Var_Urho3D, "UnknownComponent", "test doc");
// Type Urho3D::ProgressBar Registrations
auto pyclass_Var_Urho3D_ProgressBar = py::class_<Urho3D::ProgressBar, Urho3D::SharedPtr<Urho3D::ProgressBar>, Urho3D::BorderImage>(pyclass_Var_Urho3D, "ProgressBar", "test doc");
// Type Urho3D::Drawable2D Registrations
auto pyclass_Var_Urho3D_Drawable2D = py::class_<Urho3D::Drawable2D, Urho3D::SharedPtr<Urho3D::Drawable2D>, Urho3D::Drawable>(pyclass_Var_Urho3D, "Drawable2D", "test doc");
// Type Urho3D::StaticSprite2D Registrations
auto pyclass_Var_Urho3D_StaticSprite2D = py::class_<Urho3D::StaticSprite2D, Urho3D::SharedPtr<Urho3D::StaticSprite2D>, Urho3D::Drawable2D>(pyclass_Var_Urho3D, "StaticSprite2D", "test doc");
// Type Urho3D::AnimatedSprite2D Registrations
auto pyclass_Var_Urho3D_AnimatedSprite2D = py::class_<Urho3D::AnimatedSprite2D, Urho3D::SharedPtr<Urho3D::AnimatedSprite2D>, Urho3D::StaticSprite2D>(pyclass_Var_Urho3D, "AnimatedSprite2D", "test doc");
// Type Urho3D::CollisionShape2D Registrations
auto pyclass_Var_Urho3D_CollisionShape2D = py::class_<Urho3D::CollisionShape2D, Urho3D::SharedPtr<Urho3D::CollisionShape2D>, Urho3D::Component>(pyclass_Var_Urho3D, "CollisionShape2D", "test doc");
// Type Urho3D::CollisionChain2D Registrations
auto pyclass_Var_Urho3D_CollisionChain2D = py::class_<Urho3D::CollisionChain2D, Urho3D::SharedPtr<Urho3D::CollisionChain2D>, Urho3D::CollisionShape2D>(pyclass_Var_Urho3D, "CollisionChain2D", "test doc");
// Type Urho3D::CollisionEdge2D Registrations
auto pyclass_Var_Urho3D_CollisionEdge2D = py::class_<Urho3D::CollisionEdge2D, Urho3D::SharedPtr<Urho3D::CollisionEdge2D>, Urho3D::CollisionShape2D>(pyclass_Var_Urho3D, "CollisionEdge2D", "test doc");
// Type Urho3D::Constraint2D Registrations
auto pyclass_Var_Urho3D_Constraint2D = py::class_<Urho3D::Constraint2D, Urho3D::SharedPtr<Urho3D::Constraint2D>, Urho3D::Component>(pyclass_Var_Urho3D, "Constraint2D", "test doc");
// Type Urho3D::ConstraintFriction2D Registrations
auto pyclass_Var_Urho3D_ConstraintFriction2D = py::class_<Urho3D::ConstraintFriction2D, Urho3D::SharedPtr<Urho3D::ConstraintFriction2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintFriction2D", "test doc");
// Type Urho3D::ConstraintMotor2D Registrations
auto pyclass_Var_Urho3D_ConstraintMotor2D = py::class_<Urho3D::ConstraintMotor2D, Urho3D::SharedPtr<Urho3D::ConstraintMotor2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintMotor2D", "test doc");
// Type Urho3D::ConstraintPrismatic2D Registrations
auto pyclass_Var_Urho3D_ConstraintPrismatic2D = py::class_<Urho3D::ConstraintPrismatic2D, Urho3D::SharedPtr<Urho3D::ConstraintPrismatic2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintPrismatic2D", "test doc");
// Type Urho3D::ConstraintRevolute2D Registrations
auto pyclass_Var_Urho3D_ConstraintRevolute2D = py::class_<Urho3D::ConstraintRevolute2D, Urho3D::SharedPtr<Urho3D::ConstraintRevolute2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintRevolute2D", "test doc");
// Type Urho3D::ConstraintWeld2D Registrations
auto pyclass_Var_Urho3D_ConstraintWeld2D = py::class_<Urho3D::ConstraintWeld2D, Urho3D::SharedPtr<Urho3D::ConstraintWeld2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintWeld2D", "test doc");
// Type Urho3D::ParticleEffect2D Registrations
auto pyclass_Var_Urho3D_ParticleEffect2D = py::class_<Urho3D::ParticleEffect2D, Urho3D::SharedPtr<Urho3D::ParticleEffect2D>, Urho3D::Resource>(pyclass_Var_Urho3D, "ParticleEffect2D", "test doc");
// Type Urho3D::StretchableSprite2D Registrations
auto pyclass_Var_Urho3D_StretchableSprite2D = py::class_<Urho3D::StretchableSprite2D, Urho3D::SharedPtr<Urho3D::StretchableSprite2D>, Urho3D::StaticSprite2D>(pyclass_Var_Urho3D, "StretchableSprite2D", "test doc");
// Type Urho3D::VectorBuffer Registrations
auto pyclass_Var_Urho3D_VectorBuffer = py::class_<Urho3D::VectorBuffer, Urho3D::ExternalPtr<Urho3D::VectorBuffer>, Urho3D::AbstractFile>(pyclass_Var_Urho3D, "VectorBuffer", "test doc");
// Type Urho3D::ValueAnimation Registrations
auto pyclass_Var_Urho3D_ValueAnimation = py::class_<Urho3D::ValueAnimation, Urho3D::SharedPtr<Urho3D::ValueAnimation>, Urho3D::Resource>(pyclass_Var_Urho3D, "ValueAnimation", "test doc");
// Type Urho3D::File Registrations
auto pyclass_Var_Urho3D_File = py::class_<Urho3D::File, Urho3D::SharedPtr<Urho3D::File>, Urho3D::Object, Urho3D::AbstractFile>(pyclass_Var_Urho3D, "File", "test doc");
// Type Urho3D::ResourceWithMetadata Registrations
auto pyclass_Var_Urho3D_ResourceWithMetadata = py::class_<Urho3D::ResourceWithMetadata, Urho3D::SharedPtr<Urho3D::ResourceWithMetadata>, Urho3D::Resource>(pyclass_Var_Urho3D, "ResourceWithMetadata", "test doc");
// Type Urho3D::Technique Registrations
auto pyclass_Var_Urho3D_Technique = py::class_<Urho3D::Technique, Urho3D::SharedPtr<Urho3D::Technique>, Urho3D::Resource>(pyclass_Var_Urho3D, "Technique", "test doc");
// Type Urho3D::SoundListener Registrations
auto pyclass_Var_Urho3D_SoundListener = py::class_<Urho3D::SoundListener, Urho3D::SharedPtr<Urho3D::SoundListener>, Urho3D::Component>(pyclass_Var_Urho3D, "SoundListener", "test doc");
// Type Urho3D::ListView Registrations
auto pyclass_Var_Urho3D_ListView = py::class_<Urho3D::ListView, Urho3D::SharedPtr<Urho3D::ListView>, Urho3D::ScrollView>(pyclass_Var_Urho3D, "ListView", "test doc");
// Type Urho3D::CustomGeometry Registrations
auto pyclass_Var_Urho3D_CustomGeometry = py::class_<Urho3D::CustomGeometry, Urho3D::SharedPtr<Urho3D::CustomGeometry>, Urho3D::Drawable>(pyclass_Var_Urho3D, "CustomGeometry", "test doc");
// Type Urho3D::RibbonTrail Registrations
auto pyclass_Var_Urho3D_RibbonTrail = py::class_<Urho3D::RibbonTrail, Urho3D::SharedPtr<Urho3D::RibbonTrail>, Urho3D::Drawable>(pyclass_Var_Urho3D, "RibbonTrail", "test doc");
// Type Urho3D::MemoryBuffer Registrations
auto pyclass_Var_Urho3D_MemoryBuffer = py::class_<Urho3D::MemoryBuffer, Urho3D::ExternalPtr<Urho3D::MemoryBuffer>, Urho3D::AbstractFile>(pyclass_Var_Urho3D, "MemoryBuffer", "test doc");
// Type Urho3D::OffMeshConnection Registrations
auto pyclass_Var_Urho3D_OffMeshConnection = py::class_<Urho3D::OffMeshConnection, Urho3D::SharedPtr<Urho3D::OffMeshConnection>, Urho3D::Component>(pyclass_Var_Urho3D, "OffMeshConnection", "test doc");
// Type Urho3D::Constraint Registrations
auto pyclass_Var_Urho3D_Constraint = py::class_<Urho3D::Constraint, Urho3D::SharedPtr<Urho3D::Constraint>, Urho3D::Component>(pyclass_Var_Urho3D, "Constraint", "test doc");
// Type Urho3D::FontGlyph Registrations
auto pyclass_Var_Urho3D_FontGlyph = py::class_<Urho3D::FontGlyph, Urho3D::ExternalPtr<Urho3D::FontGlyph>>(pyclass_Var_Urho3D, "FontGlyph", "test doc");
// Type Urho3D::Sprite2D Registrations
auto pyclass_Var_Urho3D_Sprite2D = py::class_<Urho3D::Sprite2D, Urho3D::SharedPtr<Urho3D::Sprite2D>, Urho3D::Resource>(pyclass_Var_Urho3D, "Sprite2D", "test doc");
// Type Urho3D::SpriteSheet2D Registrations
auto pyclass_Var_Urho3D_SpriteSheet2D = py::class_<Urho3D::SpriteSheet2D, Urho3D::SharedPtr<Urho3D::SpriteSheet2D>, Urho3D::Resource>(pyclass_Var_Urho3D, "SpriteSheet2D", "test doc");
// Type Urho3D::CollisionCircle2D Registrations
auto pyclass_Var_Urho3D_CollisionCircle2D = py::class_<Urho3D::CollisionCircle2D, Urho3D::SharedPtr<Urho3D::CollisionCircle2D>, Urho3D::CollisionShape2D>(pyclass_Var_Urho3D, "CollisionCircle2D", "test doc");
// Type Urho3D::ConstraintDistance2D Registrations
auto pyclass_Var_Urho3D_ConstraintDistance2D = py::class_<Urho3D::ConstraintDistance2D, Urho3D::SharedPtr<Urho3D::ConstraintDistance2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintDistance2D", "test doc");
// Type Urho3D::ConstraintMouse2D Registrations
auto pyclass_Var_Urho3D_ConstraintMouse2D = py::class_<Urho3D::ConstraintMouse2D, Urho3D::SharedPtr<Urho3D::ConstraintMouse2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintMouse2D", "test doc");
// Type Urho3D::ConstraintRope2D Registrations
auto pyclass_Var_Urho3D_ConstraintRope2D = py::class_<Urho3D::ConstraintRope2D, Urho3D::SharedPtr<Urho3D::ConstraintRope2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintRope2D", "test doc");
// Type Urho3D::ParticleEmitter2D Registrations
auto pyclass_Var_Urho3D_ParticleEmitter2D = py::class_<Urho3D::ParticleEmitter2D, Urho3D::SharedPtr<Urho3D::ParticleEmitter2D>, Urho3D::Drawable2D>(pyclass_Var_Urho3D, "ParticleEmitter2D", "test doc");
// Type Urho3D::ScriptFile Registrations
auto pyclass_Var_Urho3D_ScriptFile = py::class_<Urho3D::ScriptFile, Urho3D::SharedPtr<Urho3D::ScriptFile>, Urho3D::Resource, Urho3D::ScriptEventListener>(pyclass_Var_Urho3D, "ScriptFile", "test doc");
// Type Urho3D::Sound Registrations
auto pyclass_Var_Urho3D_Sound = py::class_<Urho3D::Sound, Urho3D::SharedPtr<Urho3D::Sound>, Urho3D::ResourceWithMetadata>(pyclass_Var_Urho3D, "Sound", "test doc");
// Type Urho3D::Model Registrations
auto pyclass_Var_Urho3D_Model = py::class_<Urho3D::Model, Urho3D::SharedPtr<Urho3D::Model>, Urho3D::ResourceWithMetadata>(pyclass_Var_Urho3D, "Model", "test doc");
// Type Urho3D::DropDownList Registrations
auto pyclass_Var_Urho3D_DropDownList = py::class_<Urho3D::DropDownList, Urho3D::SharedPtr<Urho3D::DropDownList>, Urho3D::Menu>(pyclass_Var_Urho3D, "DropDownList", "test doc");
// Type Urho3D::Image Registrations
auto pyclass_Var_Urho3D_Image = py::class_<Urho3D::Image, Urho3D::SharedPtr<Urho3D::Image>, Urho3D::Resource>(pyclass_Var_Urho3D, "Image", "test doc");
// Type Urho3D::Terrain Registrations
auto pyclass_Var_Urho3D_Terrain = py::class_<Urho3D::Terrain, Urho3D::SharedPtr<Urho3D::Terrain>, Urho3D::Component>(pyclass_Var_Urho3D, "Terrain", "test doc");
// Type Urho3D::CrowdAgent Registrations
auto pyclass_Var_Urho3D_CrowdAgent = py::class_<Urho3D::CrowdAgent, Urho3D::SharedPtr<Urho3D::CrowdAgent>, Urho3D::Component>(pyclass_Var_Urho3D, "CrowdAgent", "test doc");
// Type Urho3D::PListFile Registrations
auto pyclass_Var_Urho3D_PListFile = py::class_<Urho3D::PListFile, Urho3D::SharedPtr<Urho3D::PListFile>, Urho3D::Resource>(pyclass_Var_Urho3D, "PListFile", "test doc");
// Type Urho3D::AnimationSet2D Registrations
auto pyclass_Var_Urho3D_AnimationSet2D = py::class_<Urho3D::AnimationSet2D, Urho3D::SharedPtr<Urho3D::AnimationSet2D>, Urho3D::Resource>(pyclass_Var_Urho3D, "AnimationSet2D", "test doc");
// Type Urho3D::CollisionPolygon2D Registrations
auto pyclass_Var_Urho3D_CollisionPolygon2D = py::class_<Urho3D::CollisionPolygon2D, Urho3D::SharedPtr<Urho3D::CollisionPolygon2D>, Urho3D::CollisionShape2D>(pyclass_Var_Urho3D, "CollisionPolygon2D", "test doc");
// Type Urho3D::ConstraintPulley2D Registrations
auto pyclass_Var_Urho3D_ConstraintPulley2D = py::class_<Urho3D::ConstraintPulley2D, Urho3D::SharedPtr<Urho3D::ConstraintPulley2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintPulley2D", "test doc");
// Type Urho3D::TmxFile2D Registrations
auto pyclass_Var_Urho3D_TmxFile2D = py::class_<Urho3D::TmxFile2D, Urho3D::SharedPtr<Urho3D::TmxFile2D>, Urho3D::Resource>(pyclass_Var_Urho3D, "TmxFile2D", "test doc");
// Type Urho3D::ObjectAnimation Registrations
auto pyclass_Var_Urho3D_ObjectAnimation = py::class_<Urho3D::ObjectAnimation, Urho3D::SharedPtr<Urho3D::ObjectAnimation>, Urho3D::Resource>(pyclass_Var_Urho3D, "ObjectAnimation", "test doc");
// Type Urho3D::Texture Registrations
auto pyclass_Var_Urho3D_Texture = py::class_<Urho3D::Texture, Urho3D::SharedPtr<Urho3D::Texture>, Urho3D::ResourceWithMetadata, Urho3D::GPUObject>(pyclass_Var_Urho3D, "Texture", "test doc");
// Type Urho3D::TextureCube Registrations
auto pyclass_Var_Urho3D_TextureCube = py::class_<Urho3D::TextureCube, Urho3D::SharedPtr<Urho3D::TextureCube>, Urho3D::Texture>(pyclass_Var_Urho3D, "TextureCube", "test doc");
// Type Urho3D::Texture2DArray Registrations
auto pyclass_Var_Urho3D_Texture2DArray = py::class_<Urho3D::Texture2DArray, Urho3D::SharedPtr<Urho3D::Texture2DArray>, Urho3D::Texture>(pyclass_Var_Urho3D, "Texture2DArray", "test doc");
// Type Urho3D::NetworkPriority Registrations
auto pyclass_Var_Urho3D_NetworkPriority = py::class_<Urho3D::NetworkPriority, Urho3D::SharedPtr<Urho3D::NetworkPriority>, Urho3D::Component>(pyclass_Var_Urho3D, "NetworkPriority", "test doc");
// Type Urho3D::CollisionBox2D Registrations
auto pyclass_Var_Urho3D_CollisionBox2D = py::class_<Urho3D::CollisionBox2D, Urho3D::SharedPtr<Urho3D::CollisionBox2D>, Urho3D::CollisionShape2D>(pyclass_Var_Urho3D, "CollisionBox2D", "test doc");
// Type Urho3D::ConstraintWheel2D Registrations
auto pyclass_Var_Urho3D_ConstraintWheel2D = py::class_<Urho3D::ConstraintWheel2D, Urho3D::SharedPtr<Urho3D::ConstraintWheel2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintWheel2D", "test doc");
// Type Urho3D::Material Registrations
auto pyclass_Var_Urho3D_Material = py::class_<Urho3D::Material, Urho3D::SharedPtr<Urho3D::Material>, Urho3D::Resource>(pyclass_Var_Urho3D, "Material", "test doc");
// Type Urho3D::Animation Registrations
auto pyclass_Var_Urho3D_Animation = py::class_<Urho3D::Animation, Urho3D::SharedPtr<Urho3D::Animation>, Urho3D::ResourceWithMetadata>(pyclass_Var_Urho3D, "Animation", "test doc");
// Type Urho3D::Text3D Registrations
auto pyclass_Var_Urho3D_Text3D = py::class_<Urho3D::Text3D, Urho3D::SharedPtr<Urho3D::Text3D>, Urho3D::Drawable>(pyclass_Var_Urho3D, "Text3D", "test doc");
// Type Urho3D::Texture2D Registrations
auto pyclass_Var_Urho3D_Texture2D = py::class_<Urho3D::Texture2D, Urho3D::SharedPtr<Urho3D::Texture2D>, Urho3D::Texture>(pyclass_Var_Urho3D, "Texture2D", "test doc");
// Type Urho3D::ConstraintGear2D Registrations
auto pyclass_Var_Urho3D_ConstraintGear2D = py::class_<Urho3D::ConstraintGear2D, Urho3D::SharedPtr<Urho3D::ConstraintGear2D>, Urho3D::Constraint2D>(pyclass_Var_Urho3D, "ConstraintGear2D", "test doc");
// Type Urho3D::Texture3D Registrations
auto pyclass_Var_Urho3D_Texture3D = py::class_<Urho3D::Texture3D, Urho3D::SharedPtr<Urho3D::Texture3D>, Urho3D::Texture>(pyclass_Var_Urho3D, "Texture3D", "test doc");

    //================================================
    // Declare and Implement Enumerations
    //================================================
    // Enum Urho3D::Spriter::ObjectType Registrations
auto pyclass_Var_Urho3D_Spriter_ObjectType = py::enum_<Urho3D::Spriter::ObjectType>(pyclass_Var_Urho3D_Spriter, "ObjectType", py::arithmetic(), "test doc")
  .value("BONE", Urho3D::Spriter::ObjectType::BONE)
  .value("SPRITE", Urho3D::Spriter::ObjectType::SPRITE)
  .export_values()
;

// Enum Urho3D::Spriter::CurveType Registrations
auto pyclass_Var_Urho3D_Spriter_CurveType = py::enum_<Urho3D::Spriter::CurveType>(pyclass_Var_Urho3D_Spriter, "CurveType", py::arithmetic(), "test doc")
  .value("INSTANT", Urho3D::Spriter::CurveType::INSTANT)
  .value("LINEAR", Urho3D::Spriter::CurveType::LINEAR)
  .value("QUADRATIC", Urho3D::Spriter::CurveType::QUADRATIC)
  .value("CUBIC", Urho3D::Spriter::CurveType::CUBIC)
  .export_values()
;

// Enum Urho3D::Spriter::LoopMode Registrations
auto pyclass_Var_Urho3D_Spriter_LoopMode = py::enum_<Urho3D::Spriter::LoopMode>(pyclass_Var_Urho3D_Spriter, "LoopMode", py::arithmetic(), "test doc")
  .value("Default", Urho3D::Spriter::LoopMode::Default)
  .value("ForceLooped", Urho3D::Spriter::LoopMode::ForceLooped)
  .value("ForceClamped", Urho3D::Spriter::LoopMode::ForceClamped)
  .export_values()
;

// Enum Urho3D::IKSolver::Algorithm Registrations
auto pyclass_Var_Urho3D_IKSolver_Algorithm = py::enum_<Urho3D::IKSolver::Algorithm>(pyclass_Var_Urho3D_IKSolver, "Algorithm", py::arithmetic(), "test doc")
  .value("ONE_BONE", Urho3D::IKSolver::Algorithm::ONE_BONE)
  .value("TWO_BONE", Urho3D::IKSolver::Algorithm::TWO_BONE)
  .value("FABRIK", Urho3D::IKSolver::Algorithm::FABRIK)
  .export_values()
;

// Enum Urho3D::IKSolver::Feature Registrations
auto pyclass_Var_Urho3D_IKSolver_Feature = py::enum_<Urho3D::IKSolver::Feature>(pyclass_Var_Urho3D_IKSolver, "Feature", py::arithmetic(), "test doc")
  .value("JOINT_ROTATIONS", Urho3D::IKSolver::Feature::JOINT_ROTATIONS)
  .value("TARGET_ROTATIONS", Urho3D::IKSolver::Feature::TARGET_ROTATIONS)
  .value("UPDATE_ORIGINAL_POSE", Urho3D::IKSolver::Feature::UPDATE_ORIGINAL_POSE)
  .value("UPDATE_ACTIVE_POSE", Urho3D::IKSolver::Feature::UPDATE_ACTIVE_POSE)
  .value("USE_ORIGINAL_POSE", Urho3D::IKSolver::Feature::USE_ORIGINAL_POSE)
  .value("CONSTRAINTS", Urho3D::IKSolver::Feature::CONSTRAINTS)
  .value("AUTO_SOLVE", Urho3D::IKSolver::Feature::AUTO_SOLVE)
  .export_values()
;

// Enum Urho3D::IKEffector::Feature Registrations
auto pyclass_Var_Urho3D_IKEffector_Feature = py::enum_<Urho3D::IKEffector::Feature>(pyclass_Var_Urho3D_IKEffector, "Feature", py::arithmetic(), "test doc")
  .value("WEIGHT_NLERP", Urho3D::IKEffector::Feature::WEIGHT_NLERP)
  .value("INHERIT_PARENT_ROTATION", Urho3D::IKEffector::Feature::INHERIT_PARENT_ROTATION)
  .export_values()
;

// Enum Urho3D::Intersection Registrations
auto pyclass_Var_Urho3D_Intersection = py::enum_<Urho3D::Intersection>(pyclass_Var_Urho3D, "Intersection", py::arithmetic(), "test doc")
  .value("OUTSIDE", Urho3D::Intersection::OUTSIDE)
  .value("INTERSECTS", Urho3D::Intersection::INTERSECTS)
  .value("INSIDE", Urho3D::Intersection::INSIDE)
  .export_values()
;

// Enum Urho3D::VariantType Registrations
auto pyclass_Var_Urho3D_VariantType = py::enum_<Urho3D::VariantType>(pyclass_Var_Urho3D, "VariantType", py::arithmetic(), "test doc")
  .value("VAR_NONE", Urho3D::VariantType::VAR_NONE)
  .value("VAR_INT", Urho3D::VariantType::VAR_INT)
  .value("VAR_BOOL", Urho3D::VariantType::VAR_BOOL)
  .value("VAR_FLOAT", Urho3D::VariantType::VAR_FLOAT)
  .value("VAR_VECTOR2", Urho3D::VariantType::VAR_VECTOR2)
  .value("VAR_VECTOR3", Urho3D::VariantType::VAR_VECTOR3)
  .value("VAR_VECTOR4", Urho3D::VariantType::VAR_VECTOR4)
  .value("VAR_QUATERNION", Urho3D::VariantType::VAR_QUATERNION)
  .value("VAR_COLOR", Urho3D::VariantType::VAR_COLOR)
  .value("VAR_STRING", Urho3D::VariantType::VAR_STRING)
  .value("VAR_BUFFER", Urho3D::VariantType::VAR_BUFFER)
  .value("VAR_VOIDPTR", Urho3D::VariantType::VAR_VOIDPTR)
  .value("VAR_RESOURCEREF", Urho3D::VariantType::VAR_RESOURCEREF)
  .value("VAR_RESOURCEREFLIST", Urho3D::VariantType::VAR_RESOURCEREFLIST)
  .value("VAR_VARIANTVECTOR", Urho3D::VariantType::VAR_VARIANTVECTOR)
  .value("VAR_VARIANTMAP", Urho3D::VariantType::VAR_VARIANTMAP)
  .value("VAR_INTRECT", Urho3D::VariantType::VAR_INTRECT)
  .value("VAR_INTVECTOR2", Urho3D::VariantType::VAR_INTVECTOR2)
  .value("VAR_PTR", Urho3D::VariantType::VAR_PTR)
  .value("VAR_MATRIX3", Urho3D::VariantType::VAR_MATRIX3)
  .value("VAR_MATRIX3X4", Urho3D::VariantType::VAR_MATRIX3X4)
  .value("VAR_MATRIX4", Urho3D::VariantType::VAR_MATRIX4)
  .value("VAR_DOUBLE", Urho3D::VariantType::VAR_DOUBLE)
  .value("VAR_STRINGVECTOR", Urho3D::VariantType::VAR_STRINGVECTOR)
  .value("VAR_RECT", Urho3D::VariantType::VAR_RECT)
  .value("VAR_INTVECTOR3", Urho3D::VariantType::VAR_INTVECTOR3)
  .value("VAR_INT64", Urho3D::VariantType::VAR_INT64)
  .value("VAR_CUSTOM_HEAP", Urho3D::VariantType::VAR_CUSTOM_HEAP)
  .value("VAR_CUSTOM_STACK", Urho3D::VariantType::VAR_CUSTOM_STACK)
  .value("MAX_VAR_TYPES", Urho3D::VariantType::MAX_VAR_TYPES)
  .export_values()
;

// Enum Urho3D::DumpMode Registrations
auto pyclass_Var_Urho3D_DumpMode = py::enum_<Urho3D::DumpMode>(pyclass_Var_Urho3D, "DumpMode", py::arithmetic(), "test doc")
  .value("DOXYGEN", Urho3D::DumpMode::DOXYGEN)
  .value("C_HEADER", Urho3D::DumpMode::C_HEADER)
  .value("MAX_DUMP_MODES", Urho3D::DumpMode::MAX_DUMP_MODES)
  .export_values()
;

// Enum Urho3D::AttributeMode Registrations
auto pyclass_Var_Urho3D_AttributeMode = py::enum_<Urho3D::AttributeMode>(pyclass_Var_Urho3D, "AttributeMode", py::arithmetic(), "test doc")
  .value("AM_EDIT", Urho3D::AttributeMode::AM_EDIT)
  .value("AM_FILE", Urho3D::AttributeMode::AM_FILE)
  .value("AM_NET", Urho3D::AttributeMode::AM_NET)
  .value("AM_DEFAULT", Urho3D::AttributeMode::AM_DEFAULT)
  .value("AM_LATESTDATA", Urho3D::AttributeMode::AM_LATESTDATA)
  .value("AM_NOEDIT", Urho3D::AttributeMode::AM_NOEDIT)
  .value("AM_NODEID", Urho3D::AttributeMode::AM_NODEID)
  .value("AM_COMPONENTID", Urho3D::AttributeMode::AM_COMPONENTID)
  .value("AM_NODEIDVECTOR", Urho3D::AttributeMode::AM_NODEIDVECTOR)
  .value("AM_FILEREADONLY", Urho3D::AttributeMode::AM_FILEREADONLY)
  .export_values()
;

// Enum Urho3D::WrapMode Registrations
auto pyclass_Var_Urho3D_WrapMode = py::enum_<Urho3D::WrapMode>(pyclass_Var_Urho3D, "WrapMode", py::arithmetic(), "test doc")
  .value("WM_LOOP", Urho3D::WrapMode::WM_LOOP)
  .value("WM_ONCE", Urho3D::WrapMode::WM_ONCE)
  .value("WM_CLAMP", Urho3D::WrapMode::WM_CLAMP)
  .export_values()
;

// Enum Urho3D::AutoRemoveMode Registrations
auto pyclass_Var_Urho3D_AutoRemoveMode = py::enum_<Urho3D::AutoRemoveMode>(pyclass_Var_Urho3D, "AutoRemoveMode", py::arithmetic(), "test doc")
  .value("REMOVE_DISABLED", Urho3D::AutoRemoveMode::REMOVE_DISABLED)
  .value("REMOVE_COMPONENT", Urho3D::AutoRemoveMode::REMOVE_COMPONENT)
  .value("REMOVE_NODE", Urho3D::AutoRemoveMode::REMOVE_NODE)
  .export_values()
;

// Enum Urho3D::ScriptInstanceMethod Registrations
auto pyclass_Var_Urho3D_ScriptInstanceMethod = py::enum_<Urho3D::ScriptInstanceMethod>(pyclass_Var_Urho3D, "ScriptInstanceMethod", py::arithmetic(), "test doc")
  .value("METHOD_START", Urho3D::ScriptInstanceMethod::METHOD_START)
  .value("METHOD_STOP", Urho3D::ScriptInstanceMethod::METHOD_STOP)
  .value("METHOD_DELAYEDSTART", Urho3D::ScriptInstanceMethod::METHOD_DELAYEDSTART)
  .value("METHOD_UPDATE", Urho3D::ScriptInstanceMethod::METHOD_UPDATE)
  .value("METHOD_POSTUPDATE", Urho3D::ScriptInstanceMethod::METHOD_POSTUPDATE)
  .value("METHOD_FIXEDUPDATE", Urho3D::ScriptInstanceMethod::METHOD_FIXEDUPDATE)
  .value("METHOD_FIXEDPOSTUPDATE", Urho3D::ScriptInstanceMethod::METHOD_FIXEDPOSTUPDATE)
  .value("METHOD_LOAD", Urho3D::ScriptInstanceMethod::METHOD_LOAD)
  .value("METHOD_SAVE", Urho3D::ScriptInstanceMethod::METHOD_SAVE)
  .value("METHOD_READNETWORKUPDATE", Urho3D::ScriptInstanceMethod::METHOD_READNETWORKUPDATE)
  .value("METHOD_WRITENETWORKUPDATE", Urho3D::ScriptInstanceMethod::METHOD_WRITENETWORKUPDATE)
  .value("METHOD_APPLYATTRIBUTES", Urho3D::ScriptInstanceMethod::METHOD_APPLYATTRIBUTES)
  .value("METHOD_TRANSFORMCHANGED", Urho3D::ScriptInstanceMethod::METHOD_TRANSFORMCHANGED)
  .value("MAX_SCRIPT_METHODS", Urho3D::ScriptInstanceMethod::MAX_SCRIPT_METHODS)
  .export_values()
;

// Enum Urho3D::PrimitiveType Registrations
auto pyclass_Var_Urho3D_PrimitiveType = py::enum_<Urho3D::PrimitiveType>(pyclass_Var_Urho3D, "PrimitiveType", py::arithmetic(), "test doc")
  .value("TRIANGLE_LIST", Urho3D::PrimitiveType::TRIANGLE_LIST)
  .value("LINE_LIST", Urho3D::PrimitiveType::LINE_LIST)
  .value("POINT_LIST", Urho3D::PrimitiveType::POINT_LIST)
  .value("TRIANGLE_STRIP", Urho3D::PrimitiveType::TRIANGLE_STRIP)
  .value("LINE_STRIP", Urho3D::PrimitiveType::LINE_STRIP)
  .value("TRIANGLE_FAN", Urho3D::PrimitiveType::TRIANGLE_FAN)
  .export_values()
;

// Enum Urho3D::GeometryType Registrations
auto pyclass_Var_Urho3D_GeometryType = py::enum_<Urho3D::GeometryType>(pyclass_Var_Urho3D, "GeometryType", py::arithmetic(), "test doc")
  .value("GEOM_STATIC", Urho3D::GeometryType::GEOM_STATIC)
  .value("GEOM_SKINNED", Urho3D::GeometryType::GEOM_SKINNED)
  .value("GEOM_INSTANCED", Urho3D::GeometryType::GEOM_INSTANCED)
  .value("GEOM_BILLBOARD", Urho3D::GeometryType::GEOM_BILLBOARD)
  .value("GEOM_DIRBILLBOARD", Urho3D::GeometryType::GEOM_DIRBILLBOARD)
  .value("GEOM_TRAIL_FACE_CAMERA", Urho3D::GeometryType::GEOM_TRAIL_FACE_CAMERA)
  .value("GEOM_TRAIL_BONE", Urho3D::GeometryType::GEOM_TRAIL_BONE)
  .value("MAX_GEOMETRYTYPES", Urho3D::GeometryType::MAX_GEOMETRYTYPES)
  .value("GEOM_STATIC_NOINSTANCING", Urho3D::GeometryType::GEOM_STATIC_NOINSTANCING)
  .export_values()
;

// Enum Urho3D::BlendMode Registrations
auto pyclass_Var_Urho3D_BlendMode = py::enum_<Urho3D::BlendMode>(pyclass_Var_Urho3D, "BlendMode", py::arithmetic(), "test doc")
  .value("BLEND_REPLACE", Urho3D::BlendMode::BLEND_REPLACE)
  .value("BLEND_ADD", Urho3D::BlendMode::BLEND_ADD)
  .value("BLEND_MULTIPLY", Urho3D::BlendMode::BLEND_MULTIPLY)
  .value("BLEND_ALPHA", Urho3D::BlendMode::BLEND_ALPHA)
  .value("BLEND_ADDALPHA", Urho3D::BlendMode::BLEND_ADDALPHA)
  .value("BLEND_PREMULALPHA", Urho3D::BlendMode::BLEND_PREMULALPHA)
  .value("BLEND_INVDESTALPHA", Urho3D::BlendMode::BLEND_INVDESTALPHA)
  .value("BLEND_SUBTRACT", Urho3D::BlendMode::BLEND_SUBTRACT)
  .value("BLEND_SUBTRACTALPHA", Urho3D::BlendMode::BLEND_SUBTRACTALPHA)
  .value("MAX_BLENDMODES", Urho3D::BlendMode::MAX_BLENDMODES)
  .export_values()
;

// Enum Urho3D::CompareMode Registrations
auto pyclass_Var_Urho3D_CompareMode = py::enum_<Urho3D::CompareMode>(pyclass_Var_Urho3D, "CompareMode", py::arithmetic(), "test doc")
  .value("CMP_ALWAYS", Urho3D::CompareMode::CMP_ALWAYS)
  .value("CMP_EQUAL", Urho3D::CompareMode::CMP_EQUAL)
  .value("CMP_NOTEQUAL", Urho3D::CompareMode::CMP_NOTEQUAL)
  .value("CMP_LESS", Urho3D::CompareMode::CMP_LESS)
  .value("CMP_LESSEQUAL", Urho3D::CompareMode::CMP_LESSEQUAL)
  .value("CMP_GREATER", Urho3D::CompareMode::CMP_GREATER)
  .value("CMP_GREATEREQUAL", Urho3D::CompareMode::CMP_GREATEREQUAL)
  .value("MAX_COMPAREMODES", Urho3D::CompareMode::MAX_COMPAREMODES)
  .export_values()
;

// Enum Urho3D::CullMode Registrations
auto pyclass_Var_Urho3D_CullMode = py::enum_<Urho3D::CullMode>(pyclass_Var_Urho3D, "CullMode", py::arithmetic(), "test doc")
  .value("CULL_NONE", Urho3D::CullMode::CULL_NONE)
  .value("CULL_CCW", Urho3D::CullMode::CULL_CCW)
  .value("CULL_CW", Urho3D::CullMode::CULL_CW)
  .value("MAX_CULLMODES", Urho3D::CullMode::MAX_CULLMODES)
  .export_values()
;

// Enum Urho3D::FillMode Registrations
auto pyclass_Var_Urho3D_FillMode = py::enum_<Urho3D::FillMode>(pyclass_Var_Urho3D, "FillMode", py::arithmetic(), "test doc")
  .value("FILL_SOLID", Urho3D::FillMode::FILL_SOLID)
  .value("FILL_WIREFRAME", Urho3D::FillMode::FILL_WIREFRAME)
  .value("FILL_POINT", Urho3D::FillMode::FILL_POINT)
  .export_values()
;

// Enum Urho3D::StencilOp Registrations
auto pyclass_Var_Urho3D_StencilOp = py::enum_<Urho3D::StencilOp>(pyclass_Var_Urho3D, "StencilOp", py::arithmetic(), "test doc")
  .value("OP_KEEP", Urho3D::StencilOp::OP_KEEP)
  .value("OP_ZERO", Urho3D::StencilOp::OP_ZERO)
  .value("OP_REF", Urho3D::StencilOp::OP_REF)
  .value("OP_INCR", Urho3D::StencilOp::OP_INCR)
  .value("OP_DECR", Urho3D::StencilOp::OP_DECR)
  .export_values()
;

// Enum Urho3D::LockState Registrations
auto pyclass_Var_Urho3D_LockState = py::enum_<Urho3D::LockState>(pyclass_Var_Urho3D, "LockState", py::arithmetic(), "test doc")
  .value("LOCK_NONE", Urho3D::LockState::LOCK_NONE)
  .value("LOCK_HARDWARE", Urho3D::LockState::LOCK_HARDWARE)
  .value("LOCK_SHADOW", Urho3D::LockState::LOCK_SHADOW)
  .value("LOCK_SCRATCH", Urho3D::LockState::LOCK_SCRATCH)
  .export_values()
;

// Enum Urho3D::LegacyVertexElement Registrations
auto pyclass_Var_Urho3D_LegacyVertexElement = py::enum_<Urho3D::LegacyVertexElement>(pyclass_Var_Urho3D, "LegacyVertexElement", py::arithmetic(), "test doc")
  .value("ELEMENT_POSITION", Urho3D::LegacyVertexElement::ELEMENT_POSITION)
  .value("ELEMENT_NORMAL", Urho3D::LegacyVertexElement::ELEMENT_NORMAL)
  .value("ELEMENT_COLOR", Urho3D::LegacyVertexElement::ELEMENT_COLOR)
  .value("ELEMENT_TEXCOORD1", Urho3D::LegacyVertexElement::ELEMENT_TEXCOORD1)
  .value("ELEMENT_TEXCOORD2", Urho3D::LegacyVertexElement::ELEMENT_TEXCOORD2)
  .value("ELEMENT_CUBETEXCOORD1", Urho3D::LegacyVertexElement::ELEMENT_CUBETEXCOORD1)
  .value("ELEMENT_CUBETEXCOORD2", Urho3D::LegacyVertexElement::ELEMENT_CUBETEXCOORD2)
  .value("ELEMENT_TANGENT", Urho3D::LegacyVertexElement::ELEMENT_TANGENT)
  .value("ELEMENT_BLENDWEIGHTS", Urho3D::LegacyVertexElement::ELEMENT_BLENDWEIGHTS)
  .value("ELEMENT_BLENDINDICES", Urho3D::LegacyVertexElement::ELEMENT_BLENDINDICES)
  .value("ELEMENT_INSTANCEMATRIX1", Urho3D::LegacyVertexElement::ELEMENT_INSTANCEMATRIX1)
  .value("ELEMENT_INSTANCEMATRIX2", Urho3D::LegacyVertexElement::ELEMENT_INSTANCEMATRIX2)
  .value("ELEMENT_INSTANCEMATRIX3", Urho3D::LegacyVertexElement::ELEMENT_INSTANCEMATRIX3)
  .value("ELEMENT_OBJECTINDEX", Urho3D::LegacyVertexElement::ELEMENT_OBJECTINDEX)
  .value("MAX_LEGACY_VERTEX_ELEMENTS", Urho3D::LegacyVertexElement::MAX_LEGACY_VERTEX_ELEMENTS)
  .export_values()
;

// Enum Urho3D::VertexElementType Registrations
auto pyclass_Var_Urho3D_VertexElementType = py::enum_<Urho3D::VertexElementType>(pyclass_Var_Urho3D, "VertexElementType", py::arithmetic(), "test doc")
  .value("TYPE_INT", Urho3D::VertexElementType::TYPE_INT)
  .value("TYPE_FLOAT", Urho3D::VertexElementType::TYPE_FLOAT)
  .value("TYPE_VECTOR2", Urho3D::VertexElementType::TYPE_VECTOR2)
  .value("TYPE_VECTOR3", Urho3D::VertexElementType::TYPE_VECTOR3)
  .value("TYPE_VECTOR4", Urho3D::VertexElementType::TYPE_VECTOR4)
  .value("TYPE_UBYTE4", Urho3D::VertexElementType::TYPE_UBYTE4)
  .value("TYPE_UBYTE4_NORM", Urho3D::VertexElementType::TYPE_UBYTE4_NORM)
  .value("MAX_VERTEX_ELEMENT_TYPES", Urho3D::VertexElementType::MAX_VERTEX_ELEMENT_TYPES)
  .export_values()
;

// Enum Urho3D::VertexElementSemantic Registrations
auto pyclass_Var_Urho3D_VertexElementSemantic = py::enum_<Urho3D::VertexElementSemantic>(pyclass_Var_Urho3D, "VertexElementSemantic", py::arithmetic(), "test doc")
  .value("SEM_POSITION", Urho3D::VertexElementSemantic::SEM_POSITION)
  .value("SEM_NORMAL", Urho3D::VertexElementSemantic::SEM_NORMAL)
  .value("SEM_BINORMAL", Urho3D::VertexElementSemantic::SEM_BINORMAL)
  .value("SEM_TANGENT", Urho3D::VertexElementSemantic::SEM_TANGENT)
  .value("SEM_TEXCOORD", Urho3D::VertexElementSemantic::SEM_TEXCOORD)
  .value("SEM_COLOR", Urho3D::VertexElementSemantic::SEM_COLOR)
  .value("SEM_BLENDWEIGHTS", Urho3D::VertexElementSemantic::SEM_BLENDWEIGHTS)
  .value("SEM_BLENDINDICES", Urho3D::VertexElementSemantic::SEM_BLENDINDICES)
  .value("SEM_OBJECTINDEX", Urho3D::VertexElementSemantic::SEM_OBJECTINDEX)
  .value("MAX_VERTEX_ELEMENT_SEMANTICS", Urho3D::VertexElementSemantic::MAX_VERTEX_ELEMENT_SEMANTICS)
  .export_values()
;

// Enum Urho3D::TextureFilterMode Registrations
auto pyclass_Var_Urho3D_TextureFilterMode = py::enum_<Urho3D::TextureFilterMode>(pyclass_Var_Urho3D, "TextureFilterMode", py::arithmetic(), "test doc")
  .value("FILTER_NEAREST", Urho3D::TextureFilterMode::FILTER_NEAREST)
  .value("FILTER_BILINEAR", Urho3D::TextureFilterMode::FILTER_BILINEAR)
  .value("FILTER_TRILINEAR", Urho3D::TextureFilterMode::FILTER_TRILINEAR)
  .value("FILTER_ANISOTROPIC", Urho3D::TextureFilterMode::FILTER_ANISOTROPIC)
  .value("FILTER_NEAREST_ANISOTROPIC", Urho3D::TextureFilterMode::FILTER_NEAREST_ANISOTROPIC)
  .value("FILTER_DEFAULT", Urho3D::TextureFilterMode::FILTER_DEFAULT)
  .value("MAX_FILTERMODES", Urho3D::TextureFilterMode::MAX_FILTERMODES)
  .export_values()
;

// Enum Urho3D::TextureAddressMode Registrations
auto pyclass_Var_Urho3D_TextureAddressMode = py::enum_<Urho3D::TextureAddressMode>(pyclass_Var_Urho3D, "TextureAddressMode", py::arithmetic(), "test doc")
  .value("ADDRESS_WRAP", Urho3D::TextureAddressMode::ADDRESS_WRAP)
  .value("ADDRESS_MIRROR", Urho3D::TextureAddressMode::ADDRESS_MIRROR)
  .value("ADDRESS_CLAMP", Urho3D::TextureAddressMode::ADDRESS_CLAMP)
  .value("ADDRESS_BORDER", Urho3D::TextureAddressMode::ADDRESS_BORDER)
  .value("MAX_ADDRESSMODES", Urho3D::TextureAddressMode::MAX_ADDRESSMODES)
  .export_values()
;

// Enum Urho3D::TextureCoordinate Registrations
auto pyclass_Var_Urho3D_TextureCoordinate = py::enum_<Urho3D::TextureCoordinate>(pyclass_Var_Urho3D, "TextureCoordinate", py::arithmetic(), "test doc")
  .value("COORD_U", Urho3D::TextureCoordinate::COORD_U)
  .value("COORD_V", Urho3D::TextureCoordinate::COORD_V)
  .value("COORD_W", Urho3D::TextureCoordinate::COORD_W)
  .value("MAX_COORDS", Urho3D::TextureCoordinate::MAX_COORDS)
  .export_values()
;

// Enum Urho3D::TextureUsage Registrations
auto pyclass_Var_Urho3D_TextureUsage = py::enum_<Urho3D::TextureUsage>(pyclass_Var_Urho3D, "TextureUsage", py::arithmetic(), "test doc")
  .value("TEXTURE_STATIC", Urho3D::TextureUsage::TEXTURE_STATIC)
  .value("TEXTURE_DYNAMIC", Urho3D::TextureUsage::TEXTURE_DYNAMIC)
  .value("TEXTURE_RENDERTARGET", Urho3D::TextureUsage::TEXTURE_RENDERTARGET)
  .value("TEXTURE_DEPTHSTENCIL", Urho3D::TextureUsage::TEXTURE_DEPTHSTENCIL)
  .export_values()
;

// Enum Urho3D::CubeMapFace Registrations
auto pyclass_Var_Urho3D_CubeMapFace = py::enum_<Urho3D::CubeMapFace>(pyclass_Var_Urho3D, "CubeMapFace", py::arithmetic(), "test doc")
  .value("FACE_POSITIVE_X", Urho3D::CubeMapFace::FACE_POSITIVE_X)
  .value("FACE_NEGATIVE_X", Urho3D::CubeMapFace::FACE_NEGATIVE_X)
  .value("FACE_POSITIVE_Y", Urho3D::CubeMapFace::FACE_POSITIVE_Y)
  .value("FACE_NEGATIVE_Y", Urho3D::CubeMapFace::FACE_NEGATIVE_Y)
  .value("FACE_POSITIVE_Z", Urho3D::CubeMapFace::FACE_POSITIVE_Z)
  .value("FACE_NEGATIVE_Z", Urho3D::CubeMapFace::FACE_NEGATIVE_Z)
  .value("MAX_CUBEMAP_FACES", Urho3D::CubeMapFace::MAX_CUBEMAP_FACES)
  .export_values()
;

// Enum Urho3D::CubeMapLayout Registrations
auto pyclass_Var_Urho3D_CubeMapLayout = py::enum_<Urho3D::CubeMapLayout>(pyclass_Var_Urho3D, "CubeMapLayout", py::arithmetic(), "test doc")
  .value("CML_HORIZONTAL", Urho3D::CubeMapLayout::CML_HORIZONTAL)
  .value("CML_HORIZONTALNVIDIA", Urho3D::CubeMapLayout::CML_HORIZONTALNVIDIA)
  .value("CML_HORIZONTALCROSS", Urho3D::CubeMapLayout::CML_HORIZONTALCROSS)
  .value("CML_VERTICALCROSS", Urho3D::CubeMapLayout::CML_VERTICALCROSS)
  .value("CML_BLENDER", Urho3D::CubeMapLayout::CML_BLENDER)
  .export_values()
;

// Enum Urho3D::RenderSurfaceUpdateMode Registrations
auto pyclass_Var_Urho3D_RenderSurfaceUpdateMode = py::enum_<Urho3D::RenderSurfaceUpdateMode>(pyclass_Var_Urho3D, "RenderSurfaceUpdateMode", py::arithmetic(), "test doc")
  .value("SURFACE_MANUALUPDATE", Urho3D::RenderSurfaceUpdateMode::SURFACE_MANUALUPDATE)
  .value("SURFACE_UPDATEVISIBLE", Urho3D::RenderSurfaceUpdateMode::SURFACE_UPDATEVISIBLE)
  .value("SURFACE_UPDATEALWAYS", Urho3D::RenderSurfaceUpdateMode::SURFACE_UPDATEALWAYS)
  .export_values()
;

// Enum Urho3D::ShaderType Registrations
auto pyclass_Var_Urho3D_ShaderType = py::enum_<Urho3D::ShaderType>(pyclass_Var_Urho3D, "ShaderType", py::arithmetic(), "test doc")
  .value("VS", Urho3D::ShaderType::VS)
  .value("PS", Urho3D::ShaderType::PS)
  .export_values()
;

// Enum Urho3D::ShaderParameterGroup Registrations
auto pyclass_Var_Urho3D_ShaderParameterGroup = py::enum_<Urho3D::ShaderParameterGroup>(pyclass_Var_Urho3D, "ShaderParameterGroup", py::arithmetic(), "test doc")
  .value("SP_FRAME", Urho3D::ShaderParameterGroup::SP_FRAME)
  .value("SP_CAMERA", Urho3D::ShaderParameterGroup::SP_CAMERA)
  .value("SP_ZONE", Urho3D::ShaderParameterGroup::SP_ZONE)
  .value("SP_LIGHT", Urho3D::ShaderParameterGroup::SP_LIGHT)
  .value("SP_MATERIAL", Urho3D::ShaderParameterGroup::SP_MATERIAL)
  .value("SP_OBJECT", Urho3D::ShaderParameterGroup::SP_OBJECT)
  .value("SP_CUSTOM", Urho3D::ShaderParameterGroup::SP_CUSTOM)
  .value("MAX_SHADER_PARAMETER_GROUPS", Urho3D::ShaderParameterGroup::MAX_SHADER_PARAMETER_GROUPS)
  .export_values()
;

// Enum Urho3D::TextureUnit Registrations
auto pyclass_Var_Urho3D_TextureUnit = py::enum_<Urho3D::TextureUnit>(pyclass_Var_Urho3D, "TextureUnit", py::arithmetic(), "test doc")
  .value("TU_DIFFUSE", Urho3D::TextureUnit::TU_DIFFUSE)
  .value("TU_ALBEDOBUFFER", Urho3D::TextureUnit::TU_ALBEDOBUFFER)
  .value("TU_NORMAL", Urho3D::TextureUnit::TU_NORMAL)
  .value("TU_NORMALBUFFER", Urho3D::TextureUnit::TU_NORMALBUFFER)
  .value("TU_SPECULAR", Urho3D::TextureUnit::TU_SPECULAR)
  .value("TU_EMISSIVE", Urho3D::TextureUnit::TU_EMISSIVE)
  .value("TU_ENVIRONMENT", Urho3D::TextureUnit::TU_ENVIRONMENT)
  .value("TU_VOLUMEMAP", Urho3D::TextureUnit::TU_VOLUMEMAP)
  .value("TU_CUSTOM1", Urho3D::TextureUnit::TU_CUSTOM1)
  .value("TU_CUSTOM2", Urho3D::TextureUnit::TU_CUSTOM2)
  .value("TU_LIGHTRAMP", Urho3D::TextureUnit::TU_LIGHTRAMP)
  .value("TU_LIGHTSHAPE", Urho3D::TextureUnit::TU_LIGHTSHAPE)
  .value("TU_SHADOWMAP", Urho3D::TextureUnit::TU_SHADOWMAP)
  .value("TU_FACESELECT", Urho3D::TextureUnit::TU_FACESELECT)
  .value("TU_INDIRECTION", Urho3D::TextureUnit::TU_INDIRECTION)
  .value("TU_DEPTHBUFFER", Urho3D::TextureUnit::TU_DEPTHBUFFER)
  .value("TU_LIGHTBUFFER", Urho3D::TextureUnit::TU_LIGHTBUFFER)
  .value("TU_ZONE", Urho3D::TextureUnit::TU_ZONE)
  .value("MAX_MATERIAL_TEXTURE_UNITS", Urho3D::TextureUnit::MAX_MATERIAL_TEXTURE_UNITS)
  .value("MAX_TEXTURE_UNITS", Urho3D::TextureUnit::MAX_TEXTURE_UNITS)
  .export_values()
;

// Enum Urho3D::FaceCameraMode Registrations
auto pyclass_Var_Urho3D_FaceCameraMode = py::enum_<Urho3D::FaceCameraMode>(pyclass_Var_Urho3D, "FaceCameraMode", py::arithmetic(), "test doc")
  .value("FC_NONE", Urho3D::FaceCameraMode::FC_NONE)
  .value("FC_ROTATE_XYZ", Urho3D::FaceCameraMode::FC_ROTATE_XYZ)
  .value("FC_ROTATE_Y", Urho3D::FaceCameraMode::FC_ROTATE_Y)
  .value("FC_LOOKAT_XYZ", Urho3D::FaceCameraMode::FC_LOOKAT_XYZ)
  .value("FC_LOOKAT_Y", Urho3D::FaceCameraMode::FC_LOOKAT_Y)
  .value("FC_LOOKAT_MIXED", Urho3D::FaceCameraMode::FC_LOOKAT_MIXED)
  .value("FC_DIRECTION", Urho3D::FaceCameraMode::FC_DIRECTION)
  .export_values()
;

// Enum Urho3D::ShadowQuality Registrations
auto pyclass_Var_Urho3D_ShadowQuality = py::enum_<Urho3D::ShadowQuality>(pyclass_Var_Urho3D, "ShadowQuality", py::arithmetic(), "test doc")
  .value("SHADOWQUALITY_SIMPLE_16BIT", Urho3D::ShadowQuality::SHADOWQUALITY_SIMPLE_16BIT)
  .value("SHADOWQUALITY_SIMPLE_24BIT", Urho3D::ShadowQuality::SHADOWQUALITY_SIMPLE_24BIT)
  .value("SHADOWQUALITY_PCF_16BIT", Urho3D::ShadowQuality::SHADOWQUALITY_PCF_16BIT)
  .value("SHADOWQUALITY_PCF_24BIT", Urho3D::ShadowQuality::SHADOWQUALITY_PCF_24BIT)
  .value("SHADOWQUALITY_VSM", Urho3D::ShadowQuality::SHADOWQUALITY_VSM)
  .value("SHADOWQUALITY_BLUR_VSM", Urho3D::ShadowQuality::SHADOWQUALITY_BLUR_VSM)
  .export_values()
;

// Enum Urho3D::MaterialQuality Registrations
auto pyclass_Var_Urho3D_MaterialQuality = py::enum_<Urho3D::MaterialQuality>(pyclass_Var_Urho3D, "MaterialQuality", py::arithmetic(), "test doc")
  .value("QUALITY_LOW", Urho3D::MaterialQuality::QUALITY_LOW)
  .value("QUALITY_MEDIUM", Urho3D::MaterialQuality::QUALITY_MEDIUM)
  .value("QUALITY_HIGH", Urho3D::MaterialQuality::QUALITY_HIGH)
  .value("QUALITY_MAX", Urho3D::MaterialQuality::QUALITY_MAX)
  .export_values()
;

// Enum Urho3D::ClearTarget Registrations
auto pyclass_Var_Urho3D_ClearTarget = py::enum_<Urho3D::ClearTarget>(pyclass_Var_Urho3D, "ClearTarget", py::arithmetic(), "test doc")
  .value("CLEAR_COLOR", Urho3D::ClearTarget::CLEAR_COLOR)
  .value("CLEAR_DEPTH", Urho3D::ClearTarget::CLEAR_DEPTH)
  .value("CLEAR_STENCIL", Urho3D::ClearTarget::CLEAR_STENCIL)
  .export_values()
;

// Enum Urho3D::VertexMask Registrations
auto pyclass_Var_Urho3D_VertexMask = py::enum_<Urho3D::VertexMask>(pyclass_Var_Urho3D, "VertexMask", py::arithmetic(), "test doc")
  .value("MASK_NONE", Urho3D::VertexMask::MASK_NONE)
  .value("MASK_POSITION", Urho3D::VertexMask::MASK_POSITION)
  .value("MASK_NORMAL", Urho3D::VertexMask::MASK_NORMAL)
  .value("MASK_COLOR", Urho3D::VertexMask::MASK_COLOR)
  .value("MASK_TEXCOORD1", Urho3D::VertexMask::MASK_TEXCOORD1)
  .value("MASK_TEXCOORD2", Urho3D::VertexMask::MASK_TEXCOORD2)
  .value("MASK_CUBETEXCOORD1", Urho3D::VertexMask::MASK_CUBETEXCOORD1)
  .value("MASK_CUBETEXCOORD2", Urho3D::VertexMask::MASK_CUBETEXCOORD2)
  .value("MASK_TANGENT", Urho3D::VertexMask::MASK_TANGENT)
  .value("MASK_BLENDWEIGHTS", Urho3D::VertexMask::MASK_BLENDWEIGHTS)
  .value("MASK_BLENDINDICES", Urho3D::VertexMask::MASK_BLENDINDICES)
  .value("MASK_INSTANCEMATRIX1", Urho3D::VertexMask::MASK_INSTANCEMATRIX1)
  .value("MASK_INSTANCEMATRIX2", Urho3D::VertexMask::MASK_INSTANCEMATRIX2)
  .value("MASK_INSTANCEMATRIX3", Urho3D::VertexMask::MASK_INSTANCEMATRIX3)
  .value("MASK_OBJECTINDEX", Urho3D::VertexMask::MASK_OBJECTINDEX)
  .export_values()
;

// Enum Urho3D::UpdateGeometryType Registrations
auto pyclass_Var_Urho3D_UpdateGeometryType = py::enum_<Urho3D::UpdateGeometryType>(pyclass_Var_Urho3D, "UpdateGeometryType", py::arithmetic(), "test doc")
  .value("UPDATE_NONE", Urho3D::UpdateGeometryType::UPDATE_NONE)
  .value("UPDATE_MAIN_THREAD", Urho3D::UpdateGeometryType::UPDATE_MAIN_THREAD)
  .value("UPDATE_WORKER_THREAD", Urho3D::UpdateGeometryType::UPDATE_WORKER_THREAD)
  .export_values()
;

// Enum Urho3D::JSONValueType Registrations
auto pyclass_Var_Urho3D_JSONValueType = py::enum_<Urho3D::JSONValueType>(pyclass_Var_Urho3D, "JSONValueType", py::arithmetic(), "test doc")
  .value("JSON_NULL", Urho3D::JSONValueType::JSON_NULL)
  .value("JSON_BOOL", Urho3D::JSONValueType::JSON_BOOL)
  .value("JSON_NUMBER", Urho3D::JSONValueType::JSON_NUMBER)
  .value("JSON_STRING", Urho3D::JSONValueType::JSON_STRING)
  .value("JSON_ARRAY", Urho3D::JSONValueType::JSON_ARRAY)
  .value("JSON_OBJECT", Urho3D::JSONValueType::JSON_OBJECT)
  .export_values()
;

// Enum Urho3D::JSONNumberType Registrations
auto pyclass_Var_Urho3D_JSONNumberType = py::enum_<Urho3D::JSONNumberType>(pyclass_Var_Urho3D, "JSONNumberType", py::arithmetic(), "test doc")
  .value("JSONNT_NAN", Urho3D::JSONNumberType::JSONNT_NAN)
  .value("JSONNT_INT", Urho3D::JSONNumberType::JSONNT_INT)
  .value("JSONNT_UINT", Urho3D::JSONNumberType::JSONNT_UINT)
  .value("JSONNT_FLOAT_DOUBLE", Urho3D::JSONNumberType::JSONNT_FLOAT_DOUBLE)
  .export_values()
;

// Enum Urho3D::AsyncLoadState Registrations
auto pyclass_Var_Urho3D_AsyncLoadState = py::enum_<Urho3D::AsyncLoadState>(pyclass_Var_Urho3D, "AsyncLoadState", py::arithmetic(), "test doc")
  .value("ASYNC_DONE", Urho3D::AsyncLoadState::ASYNC_DONE)
  .value("ASYNC_QUEUED", Urho3D::AsyncLoadState::ASYNC_QUEUED)
  .value("ASYNC_LOADING", Urho3D::AsyncLoadState::ASYNC_LOADING)
  .value("ASYNC_SUCCESS", Urho3D::AsyncLoadState::ASYNC_SUCCESS)
  .value("ASYNC_FAIL", Urho3D::AsyncLoadState::ASYNC_FAIL)
  .export_values()
;

// Enum Urho3D::FileMode Registrations
auto pyclass_Var_Urho3D_FileMode = py::enum_<Urho3D::FileMode>(pyclass_Var_Urho3D, "FileMode", py::arithmetic(), "test doc")
  .value("FILE_READ", Urho3D::FileMode::FILE_READ)
  .value("FILE_WRITE", Urho3D::FileMode::FILE_WRITE)
  .value("FILE_READWRITE", Urho3D::FileMode::FILE_READWRITE)
  .export_values()
;

// Enum Urho3D::CreateMode Registrations
auto pyclass_Var_Urho3D_CreateMode = py::enum_<Urho3D::CreateMode>(pyclass_Var_Urho3D, "CreateMode", py::arithmetic(), "test doc")
  .value("REPLICATED", Urho3D::CreateMode::REPLICATED)
  .value("LOCAL", Urho3D::CreateMode::LOCAL)
  .export_values()
;

// Enum Urho3D::TransformSpace Registrations
auto pyclass_Var_Urho3D_TransformSpace = py::enum_<Urho3D::TransformSpace>(pyclass_Var_Urho3D, "TransformSpace", py::arithmetic(), "test doc")
  .value("TS_LOCAL", Urho3D::TransformSpace::TS_LOCAL)
  .value("TS_PARENT", Urho3D::TransformSpace::TS_PARENT)
  .value("TS_WORLD", Urho3D::TransformSpace::TS_WORLD)
  .export_values()
;

// Enum Urho3D::MouseButton Registrations
auto pyclass_Var_Urho3D_MouseButton = py::enum_<Urho3D::MouseButton>(pyclass_Var_Urho3D, "MouseButton", py::arithmetic(), "test doc")
  .value("MOUSEB_NONE", Urho3D::MouseButton::MOUSEB_NONE)
  .value("MOUSEB_LEFT", Urho3D::MouseButton::MOUSEB_LEFT)
  .value("MOUSEB_MIDDLE", Urho3D::MouseButton::MOUSEB_MIDDLE)
  .value("MOUSEB_RIGHT", Urho3D::MouseButton::MOUSEB_RIGHT)
  .value("MOUSEB_X1", Urho3D::MouseButton::MOUSEB_X1)
  .value("MOUSEB_X2", Urho3D::MouseButton::MOUSEB_X2)
  .value("MOUSEB_ANY", Urho3D::MouseButton::MOUSEB_ANY)
  .export_values()
;

// Enum Urho3D::Qualifier Registrations
auto pyclass_Var_Urho3D_Qualifier = py::enum_<Urho3D::Qualifier>(pyclass_Var_Urho3D, "Qualifier", py::arithmetic(), "test doc")
  .value("QUAL_NONE", Urho3D::Qualifier::QUAL_NONE)
  .value("QUAL_SHIFT", Urho3D::Qualifier::QUAL_SHIFT)
  .value("QUAL_CTRL", Urho3D::Qualifier::QUAL_CTRL)
  .value("QUAL_ALT", Urho3D::Qualifier::QUAL_ALT)
  .value("QUAL_ANY", Urho3D::Qualifier::QUAL_ANY)
  .export_values()
;

// Enum Urho3D::Key Registrations
auto pyclass_Var_Urho3D_Key = py::enum_<Urho3D::Key>(pyclass_Var_Urho3D, "Key", py::arithmetic(), "test doc")
  .value("KEY_UNKNOWN", Urho3D::Key::KEY_UNKNOWN)
  .value("KEY_A", Urho3D::Key::KEY_A)
  .value("KEY_B", Urho3D::Key::KEY_B)
  .value("KEY_C", Urho3D::Key::KEY_C)
  .value("KEY_D", Urho3D::Key::KEY_D)
  .value("KEY_E", Urho3D::Key::KEY_E)
  .value("KEY_F", Urho3D::Key::KEY_F)
  .value("KEY_G", Urho3D::Key::KEY_G)
  .value("KEY_H", Urho3D::Key::KEY_H)
  .value("KEY_I", Urho3D::Key::KEY_I)
  .value("KEY_J", Urho3D::Key::KEY_J)
  .value("KEY_K", Urho3D::Key::KEY_K)
  .value("KEY_L", Urho3D::Key::KEY_L)
  .value("KEY_M", Urho3D::Key::KEY_M)
  .value("KEY_N", Urho3D::Key::KEY_N)
  .value("KEY_O", Urho3D::Key::KEY_O)
  .value("KEY_P", Urho3D::Key::KEY_P)
  .value("KEY_Q", Urho3D::Key::KEY_Q)
  .value("KEY_R", Urho3D::Key::KEY_R)
  .value("KEY_S", Urho3D::Key::KEY_S)
  .value("KEY_T", Urho3D::Key::KEY_T)
  .value("KEY_U", Urho3D::Key::KEY_U)
  .value("KEY_V", Urho3D::Key::KEY_V)
  .value("KEY_W", Urho3D::Key::KEY_W)
  .value("KEY_X", Urho3D::Key::KEY_X)
  .value("KEY_Y", Urho3D::Key::KEY_Y)
  .value("KEY_Z", Urho3D::Key::KEY_Z)
  .value("KEY_0", Urho3D::Key::KEY_0)
  .value("KEY_1", Urho3D::Key::KEY_1)
  .value("KEY_2", Urho3D::Key::KEY_2)
  .value("KEY_3", Urho3D::Key::KEY_3)
  .value("KEY_4", Urho3D::Key::KEY_4)
  .value("KEY_5", Urho3D::Key::KEY_5)
  .value("KEY_6", Urho3D::Key::KEY_6)
  .value("KEY_7", Urho3D::Key::KEY_7)
  .value("KEY_8", Urho3D::Key::KEY_8)
  .value("KEY_9", Urho3D::Key::KEY_9)
  .value("KEY_BACKSPACE", Urho3D::Key::KEY_BACKSPACE)
  .value("KEY_TAB", Urho3D::Key::KEY_TAB)
  .value("KEY_RETURN", Urho3D::Key::KEY_RETURN)
  .value("KEY_RETURN2", Urho3D::Key::KEY_RETURN2)
  .value("KEY_KP_ENTER", Urho3D::Key::KEY_KP_ENTER)
  .value("KEY_SHIFT", Urho3D::Key::KEY_SHIFT)
  .value("KEY_CTRL", Urho3D::Key::KEY_CTRL)
  .value("KEY_ALT", Urho3D::Key::KEY_ALT)
  .value("KEY_GUI", Urho3D::Key::KEY_GUI)
  .value("KEY_PAUSE", Urho3D::Key::KEY_PAUSE)
  .value("KEY_CAPSLOCK", Urho3D::Key::KEY_CAPSLOCK)
  .value("KEY_ESCAPE", Urho3D::Key::KEY_ESCAPE)
  .value("KEY_SPACE", Urho3D::Key::KEY_SPACE)
  .value("KEY_PAGEUP", Urho3D::Key::KEY_PAGEUP)
  .value("KEY_PAGEDOWN", Urho3D::Key::KEY_PAGEDOWN)
  .value("KEY_END", Urho3D::Key::KEY_END)
  .value("KEY_HOME", Urho3D::Key::KEY_HOME)
  .value("KEY_LEFT", Urho3D::Key::KEY_LEFT)
  .value("KEY_UP", Urho3D::Key::KEY_UP)
  .value("KEY_RIGHT", Urho3D::Key::KEY_RIGHT)
  .value("KEY_DOWN", Urho3D::Key::KEY_DOWN)
  .value("KEY_SELECT", Urho3D::Key::KEY_SELECT)
  .value("KEY_PRINTSCREEN", Urho3D::Key::KEY_PRINTSCREEN)
  .value("KEY_INSERT", Urho3D::Key::KEY_INSERT)
  .value("KEY_DELETE", Urho3D::Key::KEY_DELETE)
  .value("KEY_LGUI", Urho3D::Key::KEY_LGUI)
  .value("KEY_RGUI", Urho3D::Key::KEY_RGUI)
  .value("KEY_APPLICATION", Urho3D::Key::KEY_APPLICATION)
  .value("KEY_KP_0", Urho3D::Key::KEY_KP_0)
  .value("KEY_KP_1", Urho3D::Key::KEY_KP_1)
  .value("KEY_KP_2", Urho3D::Key::KEY_KP_2)
  .value("KEY_KP_3", Urho3D::Key::KEY_KP_3)
  .value("KEY_KP_4", Urho3D::Key::KEY_KP_4)
  .value("KEY_KP_5", Urho3D::Key::KEY_KP_5)
  .value("KEY_KP_6", Urho3D::Key::KEY_KP_6)
  .value("KEY_KP_7", Urho3D::Key::KEY_KP_7)
  .value("KEY_KP_8", Urho3D::Key::KEY_KP_8)
  .value("KEY_KP_9", Urho3D::Key::KEY_KP_9)
  .value("KEY_KP_MULTIPLY", Urho3D::Key::KEY_KP_MULTIPLY)
  .value("KEY_KP_PLUS", Urho3D::Key::KEY_KP_PLUS)
  .value("KEY_KP_MINUS", Urho3D::Key::KEY_KP_MINUS)
  .value("KEY_KP_PERIOD", Urho3D::Key::KEY_KP_PERIOD)
  .value("KEY_KP_DIVIDE", Urho3D::Key::KEY_KP_DIVIDE)
  .value("KEY_F1", Urho3D::Key::KEY_F1)
  .value("KEY_F2", Urho3D::Key::KEY_F2)
  .value("KEY_F3", Urho3D::Key::KEY_F3)
  .value("KEY_F4", Urho3D::Key::KEY_F4)
  .value("KEY_F5", Urho3D::Key::KEY_F5)
  .value("KEY_F6", Urho3D::Key::KEY_F6)
  .value("KEY_F7", Urho3D::Key::KEY_F7)
  .value("KEY_F8", Urho3D::Key::KEY_F8)
  .value("KEY_F9", Urho3D::Key::KEY_F9)
  .value("KEY_F10", Urho3D::Key::KEY_F10)
  .value("KEY_F11", Urho3D::Key::KEY_F11)
  .value("KEY_F12", Urho3D::Key::KEY_F12)
  .value("KEY_F13", Urho3D::Key::KEY_F13)
  .value("KEY_F14", Urho3D::Key::KEY_F14)
  .value("KEY_F15", Urho3D::Key::KEY_F15)
  .value("KEY_F16", Urho3D::Key::KEY_F16)
  .value("KEY_F17", Urho3D::Key::KEY_F17)
  .value("KEY_F18", Urho3D::Key::KEY_F18)
  .value("KEY_F19", Urho3D::Key::KEY_F19)
  .value("KEY_F20", Urho3D::Key::KEY_F20)
  .value("KEY_F21", Urho3D::Key::KEY_F21)
  .value("KEY_F22", Urho3D::Key::KEY_F22)
  .value("KEY_F23", Urho3D::Key::KEY_F23)
  .value("KEY_F24", Urho3D::Key::KEY_F24)
  .value("KEY_NUMLOCKCLEAR", Urho3D::Key::KEY_NUMLOCKCLEAR)
  .value("KEY_SCROLLLOCK", Urho3D::Key::KEY_SCROLLLOCK)
  .value("KEY_LSHIFT", Urho3D::Key::KEY_LSHIFT)
  .value("KEY_RSHIFT", Urho3D::Key::KEY_RSHIFT)
  .value("KEY_LCTRL", Urho3D::Key::KEY_LCTRL)
  .value("KEY_RCTRL", Urho3D::Key::KEY_RCTRL)
  .value("KEY_LALT", Urho3D::Key::KEY_LALT)
  .value("KEY_RALT", Urho3D::Key::KEY_RALT)
  .value("KEY_AC_BACK", Urho3D::Key::KEY_AC_BACK)
  .value("KEY_AC_BOOKMARKS", Urho3D::Key::KEY_AC_BOOKMARKS)
  .value("KEY_AC_FORWARD", Urho3D::Key::KEY_AC_FORWARD)
  .value("KEY_AC_HOME", Urho3D::Key::KEY_AC_HOME)
  .value("KEY_AC_REFRESH", Urho3D::Key::KEY_AC_REFRESH)
  .value("KEY_AC_SEARCH", Urho3D::Key::KEY_AC_SEARCH)
  .value("KEY_AC_STOP", Urho3D::Key::KEY_AC_STOP)
  .value("KEY_AGAIN", Urho3D::Key::KEY_AGAIN)
  .value("KEY_ALTERASE", Urho3D::Key::KEY_ALTERASE)
  .value("KEY_AMPERSAND", Urho3D::Key::KEY_AMPERSAND)
  .value("KEY_ASTERISK", Urho3D::Key::KEY_ASTERISK)
  .value("KEY_AT", Urho3D::Key::KEY_AT)
  .value("KEY_AUDIOMUTE", Urho3D::Key::KEY_AUDIOMUTE)
  .value("KEY_AUDIONEXT", Urho3D::Key::KEY_AUDIONEXT)
  .value("KEY_AUDIOPLAY", Urho3D::Key::KEY_AUDIOPLAY)
  .value("KEY_AUDIOPREV", Urho3D::Key::KEY_AUDIOPREV)
  .value("KEY_AUDIOSTOP", Urho3D::Key::KEY_AUDIOSTOP)
  .value("KEY_BACKQUOTE", Urho3D::Key::KEY_BACKQUOTE)
  .value("KEY_BACKSLASH", Urho3D::Key::KEY_BACKSLASH)
  .value("KEY_BRIGHTNESSDOWN", Urho3D::Key::KEY_BRIGHTNESSDOWN)
  .value("KEY_BRIGHTNESSUP", Urho3D::Key::KEY_BRIGHTNESSUP)
  .value("KEY_CALCULATOR", Urho3D::Key::KEY_CALCULATOR)
  .value("KEY_CANCEL", Urho3D::Key::KEY_CANCEL)
  .value("KEY_CARET", Urho3D::Key::KEY_CARET)
  .value("KEY_CLEAR", Urho3D::Key::KEY_CLEAR)
  .value("KEY_CLEARAGAIN", Urho3D::Key::KEY_CLEARAGAIN)
  .value("KEY_COLON", Urho3D::Key::KEY_COLON)
  .value("KEY_COMMA", Urho3D::Key::KEY_COMMA)
  .value("KEY_COMPUTER", Urho3D::Key::KEY_COMPUTER)
  .value("KEY_COPY", Urho3D::Key::KEY_COPY)
  .value("KEY_CRSEL", Urho3D::Key::KEY_CRSEL)
  .value("KEY_CURRENCYSUBUNIT", Urho3D::Key::KEY_CURRENCYSUBUNIT)
  .value("KEY_CURRENCYUNIT", Urho3D::Key::KEY_CURRENCYUNIT)
  .value("KEY_CUT", Urho3D::Key::KEY_CUT)
  .value("KEY_DECIMALSEPARATOR", Urho3D::Key::KEY_DECIMALSEPARATOR)
  .value("KEY_DISPLAYSWITCH", Urho3D::Key::KEY_DISPLAYSWITCH)
  .value("KEY_DOLLAR", Urho3D::Key::KEY_DOLLAR)
  .value("KEY_EJECT", Urho3D::Key::KEY_EJECT)
  .value("KEY_EQUALS", Urho3D::Key::KEY_EQUALS)
  .value("KEY_EXCLAIM", Urho3D::Key::KEY_EXCLAIM)
  .value("KEY_EXSEL", Urho3D::Key::KEY_EXSEL)
  .value("KEY_FIND", Urho3D::Key::KEY_FIND)
  .value("KEY_GREATER", Urho3D::Key::KEY_GREATER)
  .value("KEY_HASH", Urho3D::Key::KEY_HASH)
  .value("KEY_HELP", Urho3D::Key::KEY_HELP)
  .value("KEY_KBDILLUMDOWN", Urho3D::Key::KEY_KBDILLUMDOWN)
  .value("KEY_KBDILLUMTOGGLE", Urho3D::Key::KEY_KBDILLUMTOGGLE)
  .value("KEY_KBDILLUMUP", Urho3D::Key::KEY_KBDILLUMUP)
  .value("KEY_KP_00", Urho3D::Key::KEY_KP_00)
  .value("KEY_KP_000", Urho3D::Key::KEY_KP_000)
  .value("KEY_KP_A", Urho3D::Key::KEY_KP_A)
  .value("KEY_KP_AMPERSAND", Urho3D::Key::KEY_KP_AMPERSAND)
  .value("KEY_KP_AT", Urho3D::Key::KEY_KP_AT)
  .value("KEY_KP_B", Urho3D::Key::KEY_KP_B)
  .value("KEY_KP_BACKSPACE", Urho3D::Key::KEY_KP_BACKSPACE)
  .value("KEY_KP_BINARY", Urho3D::Key::KEY_KP_BINARY)
  .value("KEY_KP_C", Urho3D::Key::KEY_KP_C)
  .value("KEY_KP_CLEAR", Urho3D::Key::KEY_KP_CLEAR)
  .value("KEY_KP_CLEARENTRY", Urho3D::Key::KEY_KP_CLEARENTRY)
  .value("KEY_KP_COLON", Urho3D::Key::KEY_KP_COLON)
  .value("KEY_KP_COMMA", Urho3D::Key::KEY_KP_COMMA)
  .value("KEY_KP_D", Urho3D::Key::KEY_KP_D)
  .value("KEY_KP_DBLAMPERSAND", Urho3D::Key::KEY_KP_DBLAMPERSAND)
  .value("KEY_KP_DBLVERTICALBAR", Urho3D::Key::KEY_KP_DBLVERTICALBAR)
  .value("KEY_KP_DECIMAL", Urho3D::Key::KEY_KP_DECIMAL)
  .value("KEY_KP_E", Urho3D::Key::KEY_KP_E)
  .value("KEY_KP_EQUALS", Urho3D::Key::KEY_KP_EQUALS)
  .value("KEY_KP_EQUALSAS400", Urho3D::Key::KEY_KP_EQUALSAS400)
  .value("KEY_KP_EXCLAM", Urho3D::Key::KEY_KP_EXCLAM)
  .value("KEY_KP_F", Urho3D::Key::KEY_KP_F)
  .value("KEY_KP_GREATER", Urho3D::Key::KEY_KP_GREATER)
  .value("KEY_KP_HASH", Urho3D::Key::KEY_KP_HASH)
  .value("KEY_KP_HEXADECIMAL", Urho3D::Key::KEY_KP_HEXADECIMAL)
  .value("KEY_KP_LEFTBRACE", Urho3D::Key::KEY_KP_LEFTBRACE)
  .value("KEY_KP_LEFTPAREN", Urho3D::Key::KEY_KP_LEFTPAREN)
  .value("KEY_KP_LESS", Urho3D::Key::KEY_KP_LESS)
  .value("KEY_KP_MEMADD", Urho3D::Key::KEY_KP_MEMADD)
  .value("KEY_KP_MEMCLEAR", Urho3D::Key::KEY_KP_MEMCLEAR)
  .value("KEY_KP_MEMDIVIDE", Urho3D::Key::KEY_KP_MEMDIVIDE)
  .value("KEY_KP_MEMMULTIPLY", Urho3D::Key::KEY_KP_MEMMULTIPLY)
  .value("KEY_KP_MEMRECALL", Urho3D::Key::KEY_KP_MEMRECALL)
  .value("KEY_KP_MEMSTORE", Urho3D::Key::KEY_KP_MEMSTORE)
  .value("KEY_KP_MEMSUBTRACT", Urho3D::Key::KEY_KP_MEMSUBTRACT)
  .value("KEY_KP_OCTAL", Urho3D::Key::KEY_KP_OCTAL)
  .value("KEY_KP_PERCENT", Urho3D::Key::KEY_KP_PERCENT)
  .value("KEY_KP_PLUSMINUS", Urho3D::Key::KEY_KP_PLUSMINUS)
  .value("KEY_KP_POWER", Urho3D::Key::KEY_KP_POWER)
  .value("KEY_KP_RIGHTBRACE", Urho3D::Key::KEY_KP_RIGHTBRACE)
  .value("KEY_KP_RIGHTPAREN", Urho3D::Key::KEY_KP_RIGHTPAREN)
  .value("KEY_KP_SPACE", Urho3D::Key::KEY_KP_SPACE)
  .value("KEY_KP_TAB", Urho3D::Key::KEY_KP_TAB)
  .value("KEY_KP_VERTICALBAR", Urho3D::Key::KEY_KP_VERTICALBAR)
  .value("KEY_KP_XOR", Urho3D::Key::KEY_KP_XOR)
  .value("KEY_LEFTBRACKET", Urho3D::Key::KEY_LEFTBRACKET)
  .value("KEY_LEFTPAREN", Urho3D::Key::KEY_LEFTPAREN)
  .value("KEY_LESS", Urho3D::Key::KEY_LESS)
  .value("KEY_MAIL", Urho3D::Key::KEY_MAIL)
  .value("KEY_MEDIASELECT", Urho3D::Key::KEY_MEDIASELECT)
  .value("KEY_MENU", Urho3D::Key::KEY_MENU)
  .value("KEY_MINUS", Urho3D::Key::KEY_MINUS)
  .value("KEY_MODE", Urho3D::Key::KEY_MODE)
  .value("KEY_MUTE", Urho3D::Key::KEY_MUTE)
  .value("KEY_OPER", Urho3D::Key::KEY_OPER)
  .value("KEY_OUT", Urho3D::Key::KEY_OUT)
  .value("KEY_PASTE", Urho3D::Key::KEY_PASTE)
  .value("KEY_PERCENT", Urho3D::Key::KEY_PERCENT)
  .value("KEY_PERIOD", Urho3D::Key::KEY_PERIOD)
  .value("KEY_PLUS", Urho3D::Key::KEY_PLUS)
  .value("KEY_POWER", Urho3D::Key::KEY_POWER)
  .value("KEY_PRIOR", Urho3D::Key::KEY_PRIOR)
  .value("KEY_QUESTION", Urho3D::Key::KEY_QUESTION)
  .value("KEY_QUOTE", Urho3D::Key::KEY_QUOTE)
  .value("KEY_QUOTEDBL", Urho3D::Key::KEY_QUOTEDBL)
  .value("KEY_RIGHTBRACKET", Urho3D::Key::KEY_RIGHTBRACKET)
  .value("KEY_RIGHTPAREN", Urho3D::Key::KEY_RIGHTPAREN)
  .value("KEY_SEMICOLON", Urho3D::Key::KEY_SEMICOLON)
  .value("KEY_SEPARATOR", Urho3D::Key::KEY_SEPARATOR)
  .value("KEY_SLASH", Urho3D::Key::KEY_SLASH)
  .value("KEY_SLEEP", Urho3D::Key::KEY_SLEEP)
  .value("KEY_STOP", Urho3D::Key::KEY_STOP)
  .value("KEY_SYSREQ", Urho3D::Key::KEY_SYSREQ)
  .value("KEY_THOUSANDSSEPARATOR", Urho3D::Key::KEY_THOUSANDSSEPARATOR)
  .value("KEY_UNDERSCORE", Urho3D::Key::KEY_UNDERSCORE)
  .value("KEY_UNDO", Urho3D::Key::KEY_UNDO)
  .value("KEY_VOLUMEDOWN", Urho3D::Key::KEY_VOLUMEDOWN)
  .value("KEY_VOLUMEUP", Urho3D::Key::KEY_VOLUMEUP)
  .value("KEY_WWW", Urho3D::Key::KEY_WWW)
  .export_values()
;

// Enum Urho3D::Scancode Registrations
auto pyclass_Var_Urho3D_Scancode = py::enum_<Urho3D::Scancode>(pyclass_Var_Urho3D, "Scancode", py::arithmetic(), "test doc")
  .value("SCANCODE_UNKNOWN", Urho3D::Scancode::SCANCODE_UNKNOWN)
  .value("SCANCODE_CTRL", Urho3D::Scancode::SCANCODE_CTRL)
  .value("SCANCODE_SHIFT", Urho3D::Scancode::SCANCODE_SHIFT)
  .value("SCANCODE_ALT", Urho3D::Scancode::SCANCODE_ALT)
  .value("SCANCODE_GUI", Urho3D::Scancode::SCANCODE_GUI)
  .value("SCANCODE_A", Urho3D::Scancode::SCANCODE_A)
  .value("SCANCODE_B", Urho3D::Scancode::SCANCODE_B)
  .value("SCANCODE_C", Urho3D::Scancode::SCANCODE_C)
  .value("SCANCODE_D", Urho3D::Scancode::SCANCODE_D)
  .value("SCANCODE_E", Urho3D::Scancode::SCANCODE_E)
  .value("SCANCODE_F", Urho3D::Scancode::SCANCODE_F)
  .value("SCANCODE_G", Urho3D::Scancode::SCANCODE_G)
  .value("SCANCODE_H", Urho3D::Scancode::SCANCODE_H)
  .value("SCANCODE_I", Urho3D::Scancode::SCANCODE_I)
  .value("SCANCODE_J", Urho3D::Scancode::SCANCODE_J)
  .value("SCANCODE_K", Urho3D::Scancode::SCANCODE_K)
  .value("SCANCODE_L", Urho3D::Scancode::SCANCODE_L)
  .value("SCANCODE_M", Urho3D::Scancode::SCANCODE_M)
  .value("SCANCODE_N", Urho3D::Scancode::SCANCODE_N)
  .value("SCANCODE_O", Urho3D::Scancode::SCANCODE_O)
  .value("SCANCODE_P", Urho3D::Scancode::SCANCODE_P)
  .value("SCANCODE_Q", Urho3D::Scancode::SCANCODE_Q)
  .value("SCANCODE_R", Urho3D::Scancode::SCANCODE_R)
  .value("SCANCODE_S", Urho3D::Scancode::SCANCODE_S)
  .value("SCANCODE_T", Urho3D::Scancode::SCANCODE_T)
  .value("SCANCODE_U", Urho3D::Scancode::SCANCODE_U)
  .value("SCANCODE_V", Urho3D::Scancode::SCANCODE_V)
  .value("SCANCODE_W", Urho3D::Scancode::SCANCODE_W)
  .value("SCANCODE_X", Urho3D::Scancode::SCANCODE_X)
  .value("SCANCODE_Y", Urho3D::Scancode::SCANCODE_Y)
  .value("SCANCODE_Z", Urho3D::Scancode::SCANCODE_Z)
  .value("SCANCODE_1", Urho3D::Scancode::SCANCODE_1)
  .value("SCANCODE_2", Urho3D::Scancode::SCANCODE_2)
  .value("SCANCODE_3", Urho3D::Scancode::SCANCODE_3)
  .value("SCANCODE_4", Urho3D::Scancode::SCANCODE_4)
  .value("SCANCODE_5", Urho3D::Scancode::SCANCODE_5)
  .value("SCANCODE_6", Urho3D::Scancode::SCANCODE_6)
  .value("SCANCODE_7", Urho3D::Scancode::SCANCODE_7)
  .value("SCANCODE_8", Urho3D::Scancode::SCANCODE_8)
  .value("SCANCODE_9", Urho3D::Scancode::SCANCODE_9)
  .value("SCANCODE_0", Urho3D::Scancode::SCANCODE_0)
  .value("SCANCODE_RETURN", Urho3D::Scancode::SCANCODE_RETURN)
  .value("SCANCODE_ESCAPE", Urho3D::Scancode::SCANCODE_ESCAPE)
  .value("SCANCODE_BACKSPACE", Urho3D::Scancode::SCANCODE_BACKSPACE)
  .value("SCANCODE_TAB", Urho3D::Scancode::SCANCODE_TAB)
  .value("SCANCODE_SPACE", Urho3D::Scancode::SCANCODE_SPACE)
  .value("SCANCODE_MINUS", Urho3D::Scancode::SCANCODE_MINUS)
  .value("SCANCODE_EQUALS", Urho3D::Scancode::SCANCODE_EQUALS)
  .value("SCANCODE_LEFTBRACKET", Urho3D::Scancode::SCANCODE_LEFTBRACKET)
  .value("SCANCODE_RIGHTBRACKET", Urho3D::Scancode::SCANCODE_RIGHTBRACKET)
  .value("SCANCODE_BACKSLASH", Urho3D::Scancode::SCANCODE_BACKSLASH)
  .value("SCANCODE_NONUSHASH", Urho3D::Scancode::SCANCODE_NONUSHASH)
  .value("SCANCODE_SEMICOLON", Urho3D::Scancode::SCANCODE_SEMICOLON)
  .value("SCANCODE_APOSTROPHE", Urho3D::Scancode::SCANCODE_APOSTROPHE)
  .value("SCANCODE_GRAVE", Urho3D::Scancode::SCANCODE_GRAVE)
  .value("SCANCODE_COMMA", Urho3D::Scancode::SCANCODE_COMMA)
  .value("SCANCODE_PERIOD", Urho3D::Scancode::SCANCODE_PERIOD)
  .value("SCANCODE_SLASH", Urho3D::Scancode::SCANCODE_SLASH)
  .value("SCANCODE_CAPSLOCK", Urho3D::Scancode::SCANCODE_CAPSLOCK)
  .value("SCANCODE_F1", Urho3D::Scancode::SCANCODE_F1)
  .value("SCANCODE_F2", Urho3D::Scancode::SCANCODE_F2)
  .value("SCANCODE_F3", Urho3D::Scancode::SCANCODE_F3)
  .value("SCANCODE_F4", Urho3D::Scancode::SCANCODE_F4)
  .value("SCANCODE_F5", Urho3D::Scancode::SCANCODE_F5)
  .value("SCANCODE_F6", Urho3D::Scancode::SCANCODE_F6)
  .value("SCANCODE_F7", Urho3D::Scancode::SCANCODE_F7)
  .value("SCANCODE_F8", Urho3D::Scancode::SCANCODE_F8)
  .value("SCANCODE_F9", Urho3D::Scancode::SCANCODE_F9)
  .value("SCANCODE_F10", Urho3D::Scancode::SCANCODE_F10)
  .value("SCANCODE_F11", Urho3D::Scancode::SCANCODE_F11)
  .value("SCANCODE_F12", Urho3D::Scancode::SCANCODE_F12)
  .value("SCANCODE_PRINTSCREEN", Urho3D::Scancode::SCANCODE_PRINTSCREEN)
  .value("SCANCODE_SCROLLLOCK", Urho3D::Scancode::SCANCODE_SCROLLLOCK)
  .value("SCANCODE_PAUSE", Urho3D::Scancode::SCANCODE_PAUSE)
  .value("SCANCODE_INSERT", Urho3D::Scancode::SCANCODE_INSERT)
  .value("SCANCODE_HOME", Urho3D::Scancode::SCANCODE_HOME)
  .value("SCANCODE_PAGEUP", Urho3D::Scancode::SCANCODE_PAGEUP)
  .value("SCANCODE_DELETE", Urho3D::Scancode::SCANCODE_DELETE)
  .value("SCANCODE_END", Urho3D::Scancode::SCANCODE_END)
  .value("SCANCODE_PAGEDOWN", Urho3D::Scancode::SCANCODE_PAGEDOWN)
  .value("SCANCODE_RIGHT", Urho3D::Scancode::SCANCODE_RIGHT)
  .value("SCANCODE_LEFT", Urho3D::Scancode::SCANCODE_LEFT)
  .value("SCANCODE_DOWN", Urho3D::Scancode::SCANCODE_DOWN)
  .value("SCANCODE_UP", Urho3D::Scancode::SCANCODE_UP)
  .value("SCANCODE_NUMLOCKCLEAR", Urho3D::Scancode::SCANCODE_NUMLOCKCLEAR)
  .value("SCANCODE_KP_DIVIDE", Urho3D::Scancode::SCANCODE_KP_DIVIDE)
  .value("SCANCODE_KP_MULTIPLY", Urho3D::Scancode::SCANCODE_KP_MULTIPLY)
  .value("SCANCODE_KP_MINUS", Urho3D::Scancode::SCANCODE_KP_MINUS)
  .value("SCANCODE_KP_PLUS", Urho3D::Scancode::SCANCODE_KP_PLUS)
  .value("SCANCODE_KP_ENTER", Urho3D::Scancode::SCANCODE_KP_ENTER)
  .value("SCANCODE_KP_1", Urho3D::Scancode::SCANCODE_KP_1)
  .value("SCANCODE_KP_2", Urho3D::Scancode::SCANCODE_KP_2)
  .value("SCANCODE_KP_3", Urho3D::Scancode::SCANCODE_KP_3)
  .value("SCANCODE_KP_4", Urho3D::Scancode::SCANCODE_KP_4)
  .value("SCANCODE_KP_5", Urho3D::Scancode::SCANCODE_KP_5)
  .value("SCANCODE_KP_6", Urho3D::Scancode::SCANCODE_KP_6)
  .value("SCANCODE_KP_7", Urho3D::Scancode::SCANCODE_KP_7)
  .value("SCANCODE_KP_8", Urho3D::Scancode::SCANCODE_KP_8)
  .value("SCANCODE_KP_9", Urho3D::Scancode::SCANCODE_KP_9)
  .value("SCANCODE_KP_0", Urho3D::Scancode::SCANCODE_KP_0)
  .value("SCANCODE_KP_PERIOD", Urho3D::Scancode::SCANCODE_KP_PERIOD)
  .value("SCANCODE_NONUSBACKSLASH", Urho3D::Scancode::SCANCODE_NONUSBACKSLASH)
  .value("SCANCODE_APPLICATION", Urho3D::Scancode::SCANCODE_APPLICATION)
  .value("SCANCODE_POWER", Urho3D::Scancode::SCANCODE_POWER)
  .value("SCANCODE_KP_EQUALS", Urho3D::Scancode::SCANCODE_KP_EQUALS)
  .value("SCANCODE_F13", Urho3D::Scancode::SCANCODE_F13)
  .value("SCANCODE_F14", Urho3D::Scancode::SCANCODE_F14)
  .value("SCANCODE_F15", Urho3D::Scancode::SCANCODE_F15)
  .value("SCANCODE_F16", Urho3D::Scancode::SCANCODE_F16)
  .value("SCANCODE_F17", Urho3D::Scancode::SCANCODE_F17)
  .value("SCANCODE_F18", Urho3D::Scancode::SCANCODE_F18)
  .value("SCANCODE_F19", Urho3D::Scancode::SCANCODE_F19)
  .value("SCANCODE_F20", Urho3D::Scancode::SCANCODE_F20)
  .value("SCANCODE_F21", Urho3D::Scancode::SCANCODE_F21)
  .value("SCANCODE_F22", Urho3D::Scancode::SCANCODE_F22)
  .value("SCANCODE_F23", Urho3D::Scancode::SCANCODE_F23)
  .value("SCANCODE_F24", Urho3D::Scancode::SCANCODE_F24)
  .value("SCANCODE_EXECUTE", Urho3D::Scancode::SCANCODE_EXECUTE)
  .value("SCANCODE_HELP", Urho3D::Scancode::SCANCODE_HELP)
  .value("SCANCODE_MENU", Urho3D::Scancode::SCANCODE_MENU)
  .value("SCANCODE_SELECT", Urho3D::Scancode::SCANCODE_SELECT)
  .value("SCANCODE_STOP", Urho3D::Scancode::SCANCODE_STOP)
  .value("SCANCODE_AGAIN", Urho3D::Scancode::SCANCODE_AGAIN)
  .value("SCANCODE_UNDO", Urho3D::Scancode::SCANCODE_UNDO)
  .value("SCANCODE_CUT", Urho3D::Scancode::SCANCODE_CUT)
  .value("SCANCODE_COPY", Urho3D::Scancode::SCANCODE_COPY)
  .value("SCANCODE_PASTE", Urho3D::Scancode::SCANCODE_PASTE)
  .value("SCANCODE_FIND", Urho3D::Scancode::SCANCODE_FIND)
  .value("SCANCODE_MUTE", Urho3D::Scancode::SCANCODE_MUTE)
  .value("SCANCODE_VOLUMEUP", Urho3D::Scancode::SCANCODE_VOLUMEUP)
  .value("SCANCODE_VOLUMEDOWN", Urho3D::Scancode::SCANCODE_VOLUMEDOWN)
  .value("SCANCODE_KP_COMMA", Urho3D::Scancode::SCANCODE_KP_COMMA)
  .value("SCANCODE_KP_EQUALSAS400", Urho3D::Scancode::SCANCODE_KP_EQUALSAS400)
  .value("SCANCODE_INTERNATIONAL1", Urho3D::Scancode::SCANCODE_INTERNATIONAL1)
  .value("SCANCODE_INTERNATIONAL2", Urho3D::Scancode::SCANCODE_INTERNATIONAL2)
  .value("SCANCODE_INTERNATIONAL3", Urho3D::Scancode::SCANCODE_INTERNATIONAL3)
  .value("SCANCODE_INTERNATIONAL4", Urho3D::Scancode::SCANCODE_INTERNATIONAL4)
  .value("SCANCODE_INTERNATIONAL5", Urho3D::Scancode::SCANCODE_INTERNATIONAL5)
  .value("SCANCODE_INTERNATIONAL6", Urho3D::Scancode::SCANCODE_INTERNATIONAL6)
  .value("SCANCODE_INTERNATIONAL7", Urho3D::Scancode::SCANCODE_INTERNATIONAL7)
  .value("SCANCODE_INTERNATIONAL8", Urho3D::Scancode::SCANCODE_INTERNATIONAL8)
  .value("SCANCODE_INTERNATIONAL9", Urho3D::Scancode::SCANCODE_INTERNATIONAL9)
  .value("SCANCODE_LANG1", Urho3D::Scancode::SCANCODE_LANG1)
  .value("SCANCODE_LANG2", Urho3D::Scancode::SCANCODE_LANG2)
  .value("SCANCODE_LANG3", Urho3D::Scancode::SCANCODE_LANG3)
  .value("SCANCODE_LANG4", Urho3D::Scancode::SCANCODE_LANG4)
  .value("SCANCODE_LANG5", Urho3D::Scancode::SCANCODE_LANG5)
  .value("SCANCODE_LANG6", Urho3D::Scancode::SCANCODE_LANG6)
  .value("SCANCODE_LANG7", Urho3D::Scancode::SCANCODE_LANG7)
  .value("SCANCODE_LANG8", Urho3D::Scancode::SCANCODE_LANG8)
  .value("SCANCODE_LANG9", Urho3D::Scancode::SCANCODE_LANG9)
  .value("SCANCODE_ALTERASE", Urho3D::Scancode::SCANCODE_ALTERASE)
  .value("SCANCODE_SYSREQ", Urho3D::Scancode::SCANCODE_SYSREQ)
  .value("SCANCODE_CANCEL", Urho3D::Scancode::SCANCODE_CANCEL)
  .value("SCANCODE_CLEAR", Urho3D::Scancode::SCANCODE_CLEAR)
  .value("SCANCODE_PRIOR", Urho3D::Scancode::SCANCODE_PRIOR)
  .value("SCANCODE_RETURN2", Urho3D::Scancode::SCANCODE_RETURN2)
  .value("SCANCODE_SEPARATOR", Urho3D::Scancode::SCANCODE_SEPARATOR)
  .value("SCANCODE_OUT", Urho3D::Scancode::SCANCODE_OUT)
  .value("SCANCODE_OPER", Urho3D::Scancode::SCANCODE_OPER)
  .value("SCANCODE_CLEARAGAIN", Urho3D::Scancode::SCANCODE_CLEARAGAIN)
  .value("SCANCODE_CRSEL", Urho3D::Scancode::SCANCODE_CRSEL)
  .value("SCANCODE_EXSEL", Urho3D::Scancode::SCANCODE_EXSEL)
  .value("SCANCODE_KP_00", Urho3D::Scancode::SCANCODE_KP_00)
  .value("SCANCODE_KP_000", Urho3D::Scancode::SCANCODE_KP_000)
  .value("SCANCODE_THOUSANDSSEPARATOR", Urho3D::Scancode::SCANCODE_THOUSANDSSEPARATOR)
  .value("SCANCODE_DECIMALSEPARATOR", Urho3D::Scancode::SCANCODE_DECIMALSEPARATOR)
  .value("SCANCODE_CURRENCYUNIT", Urho3D::Scancode::SCANCODE_CURRENCYUNIT)
  .value("SCANCODE_CURRENCYSUBUNIT", Urho3D::Scancode::SCANCODE_CURRENCYSUBUNIT)
  .value("SCANCODE_KP_LEFTPAREN", Urho3D::Scancode::SCANCODE_KP_LEFTPAREN)
  .value("SCANCODE_KP_RIGHTPAREN", Urho3D::Scancode::SCANCODE_KP_RIGHTPAREN)
  .value("SCANCODE_KP_LEFTBRACE", Urho3D::Scancode::SCANCODE_KP_LEFTBRACE)
  .value("SCANCODE_KP_RIGHTBRACE", Urho3D::Scancode::SCANCODE_KP_RIGHTBRACE)
  .value("SCANCODE_KP_TAB", Urho3D::Scancode::SCANCODE_KP_TAB)
  .value("SCANCODE_KP_BACKSPACE", Urho3D::Scancode::SCANCODE_KP_BACKSPACE)
  .value("SCANCODE_KP_A", Urho3D::Scancode::SCANCODE_KP_A)
  .value("SCANCODE_KP_B", Urho3D::Scancode::SCANCODE_KP_B)
  .value("SCANCODE_KP_C", Urho3D::Scancode::SCANCODE_KP_C)
  .value("SCANCODE_KP_D", Urho3D::Scancode::SCANCODE_KP_D)
  .value("SCANCODE_KP_E", Urho3D::Scancode::SCANCODE_KP_E)
  .value("SCANCODE_KP_F", Urho3D::Scancode::SCANCODE_KP_F)
  .value("SCANCODE_KP_XOR", Urho3D::Scancode::SCANCODE_KP_XOR)
  .value("SCANCODE_KP_POWER", Urho3D::Scancode::SCANCODE_KP_POWER)
  .value("SCANCODE_KP_PERCENT", Urho3D::Scancode::SCANCODE_KP_PERCENT)
  .value("SCANCODE_KP_LESS", Urho3D::Scancode::SCANCODE_KP_LESS)
  .value("SCANCODE_KP_GREATER", Urho3D::Scancode::SCANCODE_KP_GREATER)
  .value("SCANCODE_KP_AMPERSAND", Urho3D::Scancode::SCANCODE_KP_AMPERSAND)
  .value("SCANCODE_KP_DBLAMPERSAND", Urho3D::Scancode::SCANCODE_KP_DBLAMPERSAND)
  .value("SCANCODE_KP_VERTICALBAR", Urho3D::Scancode::SCANCODE_KP_VERTICALBAR)
  .value("SCANCODE_KP_DBLVERTICALBAR", Urho3D::Scancode::SCANCODE_KP_DBLVERTICALBAR)
  .value("SCANCODE_KP_COLON", Urho3D::Scancode::SCANCODE_KP_COLON)
  .value("SCANCODE_KP_HASH", Urho3D::Scancode::SCANCODE_KP_HASH)
  .value("SCANCODE_KP_SPACE", Urho3D::Scancode::SCANCODE_KP_SPACE)
  .value("SCANCODE_KP_AT", Urho3D::Scancode::SCANCODE_KP_AT)
  .value("SCANCODE_KP_EXCLAM", Urho3D::Scancode::SCANCODE_KP_EXCLAM)
  .value("SCANCODE_KP_MEMSTORE", Urho3D::Scancode::SCANCODE_KP_MEMSTORE)
  .value("SCANCODE_KP_MEMRECALL", Urho3D::Scancode::SCANCODE_KP_MEMRECALL)
  .value("SCANCODE_KP_MEMCLEAR", Urho3D::Scancode::SCANCODE_KP_MEMCLEAR)
  .value("SCANCODE_KP_MEMADD", Urho3D::Scancode::SCANCODE_KP_MEMADD)
  .value("SCANCODE_KP_MEMSUBTRACT", Urho3D::Scancode::SCANCODE_KP_MEMSUBTRACT)
  .value("SCANCODE_KP_MEMMULTIPLY", Urho3D::Scancode::SCANCODE_KP_MEMMULTIPLY)
  .value("SCANCODE_KP_MEMDIVIDE", Urho3D::Scancode::SCANCODE_KP_MEMDIVIDE)
  .value("SCANCODE_KP_PLUSMINUS", Urho3D::Scancode::SCANCODE_KP_PLUSMINUS)
  .value("SCANCODE_KP_CLEAR", Urho3D::Scancode::SCANCODE_KP_CLEAR)
  .value("SCANCODE_KP_CLEARENTRY", Urho3D::Scancode::SCANCODE_KP_CLEARENTRY)
  .value("SCANCODE_KP_BINARY", Urho3D::Scancode::SCANCODE_KP_BINARY)
  .value("SCANCODE_KP_OCTAL", Urho3D::Scancode::SCANCODE_KP_OCTAL)
  .value("SCANCODE_KP_DECIMAL", Urho3D::Scancode::SCANCODE_KP_DECIMAL)
  .value("SCANCODE_KP_HEXADECIMAL", Urho3D::Scancode::SCANCODE_KP_HEXADECIMAL)
  .value("SCANCODE_LCTRL", Urho3D::Scancode::SCANCODE_LCTRL)
  .value("SCANCODE_LSHIFT", Urho3D::Scancode::SCANCODE_LSHIFT)
  .value("SCANCODE_LALT", Urho3D::Scancode::SCANCODE_LALT)
  .value("SCANCODE_LGUI", Urho3D::Scancode::SCANCODE_LGUI)
  .value("SCANCODE_RCTRL", Urho3D::Scancode::SCANCODE_RCTRL)
  .value("SCANCODE_RSHIFT", Urho3D::Scancode::SCANCODE_RSHIFT)
  .value("SCANCODE_RALT", Urho3D::Scancode::SCANCODE_RALT)
  .value("SCANCODE_RGUI", Urho3D::Scancode::SCANCODE_RGUI)
  .value("SCANCODE_MODE", Urho3D::Scancode::SCANCODE_MODE)
  .value("SCANCODE_AUDIONEXT", Urho3D::Scancode::SCANCODE_AUDIONEXT)
  .value("SCANCODE_AUDIOPREV", Urho3D::Scancode::SCANCODE_AUDIOPREV)
  .value("SCANCODE_AUDIOSTOP", Urho3D::Scancode::SCANCODE_AUDIOSTOP)
  .value("SCANCODE_AUDIOPLAY", Urho3D::Scancode::SCANCODE_AUDIOPLAY)
  .value("SCANCODE_AUDIOMUTE", Urho3D::Scancode::SCANCODE_AUDIOMUTE)
  .value("SCANCODE_MEDIASELECT", Urho3D::Scancode::SCANCODE_MEDIASELECT)
  .value("SCANCODE_WWW", Urho3D::Scancode::SCANCODE_WWW)
  .value("SCANCODE_MAIL", Urho3D::Scancode::SCANCODE_MAIL)
  .value("SCANCODE_CALCULATOR", Urho3D::Scancode::SCANCODE_CALCULATOR)
  .value("SCANCODE_COMPUTER", Urho3D::Scancode::SCANCODE_COMPUTER)
  .value("SCANCODE_AC_SEARCH", Urho3D::Scancode::SCANCODE_AC_SEARCH)
  .value("SCANCODE_AC_HOME", Urho3D::Scancode::SCANCODE_AC_HOME)
  .value("SCANCODE_AC_BACK", Urho3D::Scancode::SCANCODE_AC_BACK)
  .value("SCANCODE_AC_FORWARD", Urho3D::Scancode::SCANCODE_AC_FORWARD)
  .value("SCANCODE_AC_STOP", Urho3D::Scancode::SCANCODE_AC_STOP)
  .value("SCANCODE_AC_REFRESH", Urho3D::Scancode::SCANCODE_AC_REFRESH)
  .value("SCANCODE_AC_BOOKMARKS", Urho3D::Scancode::SCANCODE_AC_BOOKMARKS)
  .value("SCANCODE_BRIGHTNESSDOWN", Urho3D::Scancode::SCANCODE_BRIGHTNESSDOWN)
  .value("SCANCODE_BRIGHTNESSUP", Urho3D::Scancode::SCANCODE_BRIGHTNESSUP)
  .value("SCANCODE_DISPLAYSWITCH", Urho3D::Scancode::SCANCODE_DISPLAYSWITCH)
  .value("SCANCODE_KBDILLUMTOGGLE", Urho3D::Scancode::SCANCODE_KBDILLUMTOGGLE)
  .value("SCANCODE_KBDILLUMDOWN", Urho3D::Scancode::SCANCODE_KBDILLUMDOWN)
  .value("SCANCODE_KBDILLUMUP", Urho3D::Scancode::SCANCODE_KBDILLUMUP)
  .value("SCANCODE_EJECT", Urho3D::Scancode::SCANCODE_EJECT)
  .value("SCANCODE_SLEEP", Urho3D::Scancode::SCANCODE_SLEEP)
  .value("SCANCODE_APP1", Urho3D::Scancode::SCANCODE_APP1)
  .value("SCANCODE_APP2", Urho3D::Scancode::SCANCODE_APP2)
  .export_values()
;

// Enum Urho3D::HatPosition Registrations
auto pyclass_Var_Urho3D_HatPosition = py::enum_<Urho3D::HatPosition>(pyclass_Var_Urho3D, "HatPosition", py::arithmetic(), "test doc")
  .value("HAT_CENTER", Urho3D::HatPosition::HAT_CENTER)
  .value("HAT_UP", Urho3D::HatPosition::HAT_UP)
  .value("HAT_RIGHT", Urho3D::HatPosition::HAT_RIGHT)
  .value("HAT_DOWN", Urho3D::HatPosition::HAT_DOWN)
  .value("HAT_LEFT", Urho3D::HatPosition::HAT_LEFT)
  .export_values()
;

// Enum Urho3D::ControllerButton Registrations
auto pyclass_Var_Urho3D_ControllerButton = py::enum_<Urho3D::ControllerButton>(pyclass_Var_Urho3D, "ControllerButton", py::arithmetic(), "test doc")
  .value("CONTROLLER_BUTTON_A", Urho3D::ControllerButton::CONTROLLER_BUTTON_A)
  .value("CONTROLLER_BUTTON_B", Urho3D::ControllerButton::CONTROLLER_BUTTON_B)
  .value("CONTROLLER_BUTTON_X", Urho3D::ControllerButton::CONTROLLER_BUTTON_X)
  .value("CONTROLLER_BUTTON_Y", Urho3D::ControllerButton::CONTROLLER_BUTTON_Y)
  .value("CONTROLLER_BUTTON_BACK", Urho3D::ControllerButton::CONTROLLER_BUTTON_BACK)
  .value("CONTROLLER_BUTTON_GUIDE", Urho3D::ControllerButton::CONTROLLER_BUTTON_GUIDE)
  .value("CONTROLLER_BUTTON_START", Urho3D::ControllerButton::CONTROLLER_BUTTON_START)
  .value("CONTROLLER_BUTTON_LEFTSTICK", Urho3D::ControllerButton::CONTROLLER_BUTTON_LEFTSTICK)
  .value("CONTROLLER_BUTTON_RIGHTSTICK", Urho3D::ControllerButton::CONTROLLER_BUTTON_RIGHTSTICK)
  .value("CONTROLLER_BUTTON_LEFTSHOULDER", Urho3D::ControllerButton::CONTROLLER_BUTTON_LEFTSHOULDER)
  .value("CONTROLLER_BUTTON_RIGHTSHOULDER", Urho3D::ControllerButton::CONTROLLER_BUTTON_RIGHTSHOULDER)
  .value("CONTROLLER_BUTTON_DPAD_UP", Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_UP)
  .value("CONTROLLER_BUTTON_DPAD_DOWN", Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_DOWN)
  .value("CONTROLLER_BUTTON_DPAD_LEFT", Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_LEFT)
  .value("CONTROLLER_BUTTON_DPAD_RIGHT", Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_RIGHT)
  .export_values()
;

// Enum Urho3D::ControllerAxis Registrations
auto pyclass_Var_Urho3D_ControllerAxis = py::enum_<Urho3D::ControllerAxis>(pyclass_Var_Urho3D, "ControllerAxis", py::arithmetic(), "test doc")
  .value("CONTROLLER_AXIS_LEFTX", Urho3D::ControllerAxis::CONTROLLER_AXIS_LEFTX)
  .value("CONTROLLER_AXIS_LEFTY", Urho3D::ControllerAxis::CONTROLLER_AXIS_LEFTY)
  .value("CONTROLLER_AXIS_RIGHTX", Urho3D::ControllerAxis::CONTROLLER_AXIS_RIGHTX)
  .value("CONTROLLER_AXIS_RIGHTY", Urho3D::ControllerAxis::CONTROLLER_AXIS_RIGHTY)
  .value("CONTROLLER_AXIS_TRIGGERLEFT", Urho3D::ControllerAxis::CONTROLLER_AXIS_TRIGGERLEFT)
  .value("CONTROLLER_AXIS_TRIGGERRIGHT", Urho3D::ControllerAxis::CONTROLLER_AXIS_TRIGGERRIGHT)
  .export_values()
;

// Enum Urho3D::FrustumPlane Registrations
auto pyclass_Var_Urho3D_FrustumPlane = py::enum_<Urho3D::FrustumPlane>(pyclass_Var_Urho3D, "FrustumPlane", py::arithmetic(), "test doc")
  .value("PLANE_NEAR", Urho3D::FrustumPlane::PLANE_NEAR)
  .value("PLANE_LEFT", Urho3D::FrustumPlane::PLANE_LEFT)
  .value("PLANE_RIGHT", Urho3D::FrustumPlane::PLANE_RIGHT)
  .value("PLANE_UP", Urho3D::FrustumPlane::PLANE_UP)
  .value("PLANE_DOWN", Urho3D::FrustumPlane::PLANE_DOWN)
  .value("PLANE_FAR", Urho3D::FrustumPlane::PLANE_FAR)
  .export_values()
;

// Enum Urho3D::LightType Registrations
auto pyclass_Var_Urho3D_LightType = py::enum_<Urho3D::LightType>(pyclass_Var_Urho3D, "LightType", py::arithmetic(), "test doc")
  .value("LIGHT_DIRECTIONAL", Urho3D::LightType::LIGHT_DIRECTIONAL)
  .value("LIGHT_SPOT", Urho3D::LightType::LIGHT_SPOT)
  .value("LIGHT_POINT", Urho3D::LightType::LIGHT_POINT)
  .export_values()
;

// Enum Urho3D::HorizontalAlignment Registrations
auto pyclass_Var_Urho3D_HorizontalAlignment = py::enum_<Urho3D::HorizontalAlignment>(pyclass_Var_Urho3D, "HorizontalAlignment", py::arithmetic(), "test doc")
  .value("HA_LEFT", Urho3D::HorizontalAlignment::HA_LEFT)
  .value("HA_CENTER", Urho3D::HorizontalAlignment::HA_CENTER)
  .value("HA_RIGHT", Urho3D::HorizontalAlignment::HA_RIGHT)
  .value("HA_CUSTOM", Urho3D::HorizontalAlignment::HA_CUSTOM)
  .export_values()
;

// Enum Urho3D::VerticalAlignment Registrations
auto pyclass_Var_Urho3D_VerticalAlignment = py::enum_<Urho3D::VerticalAlignment>(pyclass_Var_Urho3D, "VerticalAlignment", py::arithmetic(), "test doc")
  .value("VA_TOP", Urho3D::VerticalAlignment::VA_TOP)
  .value("VA_CENTER", Urho3D::VerticalAlignment::VA_CENTER)
  .value("VA_BOTTOM", Urho3D::VerticalAlignment::VA_BOTTOM)
  .value("VA_CUSTOM", Urho3D::VerticalAlignment::VA_CUSTOM)
  .export_values()
;

// Enum Urho3D::Corner Registrations
auto pyclass_Var_Urho3D_Corner = py::enum_<Urho3D::Corner>(pyclass_Var_Urho3D, "Corner", py::arithmetic(), "test doc")
  .value("C_TOPLEFT", Urho3D::Corner::C_TOPLEFT)
  .value("C_TOPRIGHT", Urho3D::Corner::C_TOPRIGHT)
  .value("C_BOTTOMLEFT", Urho3D::Corner::C_BOTTOMLEFT)
  .value("C_BOTTOMRIGHT", Urho3D::Corner::C_BOTTOMRIGHT)
  .value("MAX_UIELEMENT_CORNERS", Urho3D::Corner::MAX_UIELEMENT_CORNERS)
  .export_values()
;

// Enum Urho3D::Orientation Registrations
auto pyclass_Var_Urho3D_Orientation = py::enum_<Urho3D::Orientation>(pyclass_Var_Urho3D, "Orientation", py::arithmetic(), "test doc")
  .value("O_HORIZONTAL", Urho3D::Orientation::O_HORIZONTAL)
  .value("O_VERTICAL", Urho3D::Orientation::O_VERTICAL)
  .export_values()
;

// Enum Urho3D::FocusMode Registrations
auto pyclass_Var_Urho3D_FocusMode = py::enum_<Urho3D::FocusMode>(pyclass_Var_Urho3D, "FocusMode", py::arithmetic(), "test doc")
  .value("FM_NOTFOCUSABLE", Urho3D::FocusMode::FM_NOTFOCUSABLE)
  .value("FM_RESETFOCUS", Urho3D::FocusMode::FM_RESETFOCUS)
  .value("FM_FOCUSABLE", Urho3D::FocusMode::FM_FOCUSABLE)
  .value("FM_FOCUSABLE_DEFOCUSABLE", Urho3D::FocusMode::FM_FOCUSABLE_DEFOCUSABLE)
  .export_values()
;

// Enum Urho3D::LayoutMode Registrations
auto pyclass_Var_Urho3D_LayoutMode = py::enum_<Urho3D::LayoutMode>(pyclass_Var_Urho3D, "LayoutMode", py::arithmetic(), "test doc")
  .value("LM_FREE", Urho3D::LayoutMode::LM_FREE)
  .value("LM_HORIZONTAL", Urho3D::LayoutMode::LM_HORIZONTAL)
  .value("LM_VERTICAL", Urho3D::LayoutMode::LM_VERTICAL)
  .export_values()
;

// Enum Urho3D::TraversalMode Registrations
auto pyclass_Var_Urho3D_TraversalMode = py::enum_<Urho3D::TraversalMode>(pyclass_Var_Urho3D, "TraversalMode", py::arithmetic(), "test doc")
  .value("TM_BREADTH_FIRST", Urho3D::TraversalMode::TM_BREADTH_FIRST)
  .value("TM_DEPTH_FIRST", Urho3D::TraversalMode::TM_DEPTH_FIRST)
  .export_values()
;

// Enum Urho3D::DragAndDropMode Registrations
auto pyclass_Var_Urho3D_DragAndDropMode = py::enum_<Urho3D::DragAndDropMode>(pyclass_Var_Urho3D, "DragAndDropMode", py::arithmetic(), "test doc")
  .value("DD_DISABLED", Urho3D::DragAndDropMode::DD_DISABLED)
  .value("DD_SOURCE", Urho3D::DragAndDropMode::DD_SOURCE)
  .value("DD_TARGET", Urho3D::DragAndDropMode::DD_TARGET)
  .value("DD_SOURCE_AND_TARGET", Urho3D::DragAndDropMode::DD_SOURCE_AND_TARGET)
  .export_values()
;

// Enum Urho3D::InterpolationMode Registrations
auto pyclass_Var_Urho3D_InterpolationMode = py::enum_<Urho3D::InterpolationMode>(pyclass_Var_Urho3D, "InterpolationMode", py::arithmetic(), "test doc")
  .value("BEZIER_CURVE", Urho3D::InterpolationMode::BEZIER_CURVE)
  .value("CATMULL_ROM_CURVE", Urho3D::InterpolationMode::CATMULL_ROM_CURVE)
  .value("LINEAR_CURVE", Urho3D::InterpolationMode::LINEAR_CURVE)
  .value("CATMULL_ROM_FULL_CURVE", Urho3D::InterpolationMode::CATMULL_ROM_FULL_CURVE)
  .export_values()
;

// Enum Urho3D::BoneCollisionShape Registrations
auto pyclass_Var_Urho3D_BoneCollisionShape = py::enum_<Urho3D::BoneCollisionShape>(pyclass_Var_Urho3D, "BoneCollisionShape", py::arithmetic(), "test doc")
  .value("BONECOLLISION_NONE", Urho3D::BoneCollisionShape::BONECOLLISION_NONE)
  .value("BONECOLLISION_SPHERE", Urho3D::BoneCollisionShape::BONECOLLISION_SPHERE)
  .value("BONECOLLISION_BOX", Urho3D::BoneCollisionShape::BONECOLLISION_BOX)
  .export_values()
;

// Enum Urho3D::AnimationChannel Registrations
auto pyclass_Var_Urho3D_AnimationChannel = py::enum_<Urho3D::AnimationChannel>(pyclass_Var_Urho3D, "AnimationChannel", py::arithmetic(), "test doc")
  .value("CHANNEL_NONE", Urho3D::AnimationChannel::CHANNEL_NONE)
  .value("CHANNEL_POSITION", Urho3D::AnimationChannel::CHANNEL_POSITION)
  .value("CHANNEL_ROTATION", Urho3D::AnimationChannel::CHANNEL_ROTATION)
  .value("CHANNEL_SCALE", Urho3D::AnimationChannel::CHANNEL_SCALE)
  .export_values()
;

// Enum Urho3D::AnimationBlendMode Registrations
auto pyclass_Var_Urho3D_AnimationBlendMode = py::enum_<Urho3D::AnimationBlendMode>(pyclass_Var_Urho3D, "AnimationBlendMode", py::arithmetic(), "test doc")
  .value("ABM_LERP", Urho3D::AnimationBlendMode::ABM_LERP)
  .value("ABM_ADDITIVE", Urho3D::AnimationBlendMode::ABM_ADDITIVE)
  .export_values()
;

// Enum Urho3D::ViewOverride Registrations
auto pyclass_Var_Urho3D_ViewOverride = py::enum_<Urho3D::ViewOverride>(pyclass_Var_Urho3D, "ViewOverride", py::arithmetic(), "test doc")
  .value("VO_NONE", Urho3D::ViewOverride::VO_NONE)
  .value("VO_LOW_MATERIAL_QUALITY", Urho3D::ViewOverride::VO_LOW_MATERIAL_QUALITY)
  .value("VO_DISABLE_SHADOWS", Urho3D::ViewOverride::VO_DISABLE_SHADOWS)
  .value("VO_DISABLE_OCCLUSION", Urho3D::ViewOverride::VO_DISABLE_OCCLUSION)
  .export_values()
;

// Enum Urho3D::CompressedFormat Registrations
auto pyclass_Var_Urho3D_CompressedFormat = py::enum_<Urho3D::CompressedFormat>(pyclass_Var_Urho3D, "CompressedFormat", py::arithmetic(), "test doc")
  .value("CF_NONE", Urho3D::CompressedFormat::CF_NONE)
  .value("CF_RGBA", Urho3D::CompressedFormat::CF_RGBA)
  .value("CF_DXT1", Urho3D::CompressedFormat::CF_DXT1)
  .value("CF_DXT3", Urho3D::CompressedFormat::CF_DXT3)
  .value("CF_DXT5", Urho3D::CompressedFormat::CF_DXT5)
  .value("CF_ETC1", Urho3D::CompressedFormat::CF_ETC1)
  .value("CF_PVRTC_RGB_2BPP", Urho3D::CompressedFormat::CF_PVRTC_RGB_2BPP)
  .value("CF_PVRTC_RGBA_2BPP", Urho3D::CompressedFormat::CF_PVRTC_RGBA_2BPP)
  .value("CF_PVRTC_RGB_4BPP", Urho3D::CompressedFormat::CF_PVRTC_RGB_4BPP)
  .value("CF_PVRTC_RGBA_4BPP", Urho3D::CompressedFormat::CF_PVRTC_RGBA_4BPP)
  .export_values()
;

// Enum Urho3D::RayQueryLevel Registrations
auto pyclass_Var_Urho3D_RayQueryLevel = py::enum_<Urho3D::RayQueryLevel>(pyclass_Var_Urho3D, "RayQueryLevel", py::arithmetic(), "test doc")
  .value("RAY_AABB", Urho3D::RayQueryLevel::RAY_AABB)
  .value("RAY_OBB", Urho3D::RayQueryLevel::RAY_OBB)
  .value("RAY_TRIANGLE", Urho3D::RayQueryLevel::RAY_TRIANGLE)
  .value("RAY_TRIANGLE_UV", Urho3D::RayQueryLevel::RAY_TRIANGLE_UV)
  .export_values()
;

// Enum Urho3D::EmitterType Registrations
auto pyclass_Var_Urho3D_EmitterType = py::enum_<Urho3D::EmitterType>(pyclass_Var_Urho3D, "EmitterType", py::arithmetic(), "test doc")
  .value("EMITTER_SPHERE", Urho3D::EmitterType::EMITTER_SPHERE)
  .value("EMITTER_BOX", Urho3D::EmitterType::EMITTER_BOX)
  .value("EMITTER_SPHEREVOLUME", Urho3D::EmitterType::EMITTER_SPHEREVOLUME)
  .value("EMITTER_CYLINDER", Urho3D::EmitterType::EMITTER_CYLINDER)
  .value("EMITTER_RING", Urho3D::EmitterType::EMITTER_RING)
  .export_values()
;

// Enum Urho3D::RenderCommandType Registrations
auto pyclass_Var_Urho3D_RenderCommandType = py::enum_<Urho3D::RenderCommandType>(pyclass_Var_Urho3D, "RenderCommandType", py::arithmetic(), "test doc")
  .value("CMD_NONE", Urho3D::RenderCommandType::CMD_NONE)
  .value("CMD_CLEAR", Urho3D::RenderCommandType::CMD_CLEAR)
  .value("CMD_SCENEPASS", Urho3D::RenderCommandType::CMD_SCENEPASS)
  .value("CMD_QUAD", Urho3D::RenderCommandType::CMD_QUAD)
  .value("CMD_FORWARDLIGHTS", Urho3D::RenderCommandType::CMD_FORWARDLIGHTS)
  .value("CMD_LIGHTVOLUMES", Urho3D::RenderCommandType::CMD_LIGHTVOLUMES)
  .value("CMD_RENDERUI", Urho3D::RenderCommandType::CMD_RENDERUI)
  .value("CMD_SENDEVENT", Urho3D::RenderCommandType::CMD_SENDEVENT)
  .export_values()
;

// Enum Urho3D::RenderCommandSortMode Registrations
auto pyclass_Var_Urho3D_RenderCommandSortMode = py::enum_<Urho3D::RenderCommandSortMode>(pyclass_Var_Urho3D, "RenderCommandSortMode", py::arithmetic(), "test doc")
  .value("SORT_FRONTTOBACK", Urho3D::RenderCommandSortMode::SORT_FRONTTOBACK)
  .value("SORT_BACKTOFRONT", Urho3D::RenderCommandSortMode::SORT_BACKTOFRONT)
  .export_values()
;

// Enum Urho3D::RenderTargetSizeMode Registrations
auto pyclass_Var_Urho3D_RenderTargetSizeMode = py::enum_<Urho3D::RenderTargetSizeMode>(pyclass_Var_Urho3D, "RenderTargetSizeMode", py::arithmetic(), "test doc")
  .value("SIZE_ABSOLUTE", Urho3D::RenderTargetSizeMode::SIZE_ABSOLUTE)
  .value("SIZE_VIEWPORTDIVISOR", Urho3D::RenderTargetSizeMode::SIZE_VIEWPORTDIVISOR)
  .value("SIZE_VIEWPORTMULTIPLIER", Urho3D::RenderTargetSizeMode::SIZE_VIEWPORTMULTIPLIER)
  .export_values()
;

// Enum Urho3D::LightVSVariation Registrations
auto pyclass_Var_Urho3D_LightVSVariation = py::enum_<Urho3D::LightVSVariation>(pyclass_Var_Urho3D, "LightVSVariation", py::arithmetic(), "test doc")
  .value("LVS_DIR", Urho3D::LightVSVariation::LVS_DIR)
  .value("LVS_SPOT", Urho3D::LightVSVariation::LVS_SPOT)
  .value("LVS_POINT", Urho3D::LightVSVariation::LVS_POINT)
  .value("LVS_SHADOW", Urho3D::LightVSVariation::LVS_SHADOW)
  .value("LVS_SPOTSHADOW", Urho3D::LightVSVariation::LVS_SPOTSHADOW)
  .value("LVS_POINTSHADOW", Urho3D::LightVSVariation::LVS_POINTSHADOW)
  .value("LVS_SHADOWNORMALOFFSET", Urho3D::LightVSVariation::LVS_SHADOWNORMALOFFSET)
  .value("LVS_SPOTSHADOWNORMALOFFSET", Urho3D::LightVSVariation::LVS_SPOTSHADOWNORMALOFFSET)
  .value("LVS_POINTSHADOWNORMALOFFSET", Urho3D::LightVSVariation::LVS_POINTSHADOWNORMALOFFSET)
  .value("MAX_LIGHT_VS_VARIATIONS", Urho3D::LightVSVariation::MAX_LIGHT_VS_VARIATIONS)
  .export_values()
;

// Enum Urho3D::VertexLightVSVariation Registrations
auto pyclass_Var_Urho3D_VertexLightVSVariation = py::enum_<Urho3D::VertexLightVSVariation>(pyclass_Var_Urho3D, "VertexLightVSVariation", py::arithmetic(), "test doc")
  .value("VLVS_NOLIGHTS", Urho3D::VertexLightVSVariation::VLVS_NOLIGHTS)
  .value("VLVS_1LIGHT", Urho3D::VertexLightVSVariation::VLVS_1LIGHT)
  .value("VLVS_2LIGHTS", Urho3D::VertexLightVSVariation::VLVS_2LIGHTS)
  .value("VLVS_3LIGHTS", Urho3D::VertexLightVSVariation::VLVS_3LIGHTS)
  .value("VLVS_4LIGHTS", Urho3D::VertexLightVSVariation::VLVS_4LIGHTS)
  .value("MAX_VERTEXLIGHT_VS_VARIATIONS", Urho3D::VertexLightVSVariation::MAX_VERTEXLIGHT_VS_VARIATIONS)
  .export_values()
;

// Enum Urho3D::LightPSVariation Registrations
auto pyclass_Var_Urho3D_LightPSVariation = py::enum_<Urho3D::LightPSVariation>(pyclass_Var_Urho3D, "LightPSVariation", py::arithmetic(), "test doc")
  .value("LPS_NONE", Urho3D::LightPSVariation::LPS_NONE)
  .value("LPS_SPOT", Urho3D::LightPSVariation::LPS_SPOT)
  .value("LPS_POINT", Urho3D::LightPSVariation::LPS_POINT)
  .value("LPS_POINTMASK", Urho3D::LightPSVariation::LPS_POINTMASK)
  .value("LPS_SPEC", Urho3D::LightPSVariation::LPS_SPEC)
  .value("LPS_SPOTSPEC", Urho3D::LightPSVariation::LPS_SPOTSPEC)
  .value("LPS_POINTSPEC", Urho3D::LightPSVariation::LPS_POINTSPEC)
  .value("LPS_POINTMASKSPEC", Urho3D::LightPSVariation::LPS_POINTMASKSPEC)
  .value("LPS_SHADOW", Urho3D::LightPSVariation::LPS_SHADOW)
  .value("LPS_SPOTSHADOW", Urho3D::LightPSVariation::LPS_SPOTSHADOW)
  .value("LPS_POINTSHADOW", Urho3D::LightPSVariation::LPS_POINTSHADOW)
  .value("LPS_POINTMASKSHADOW", Urho3D::LightPSVariation::LPS_POINTMASKSHADOW)
  .value("LPS_SHADOWSPEC", Urho3D::LightPSVariation::LPS_SHADOWSPEC)
  .value("LPS_SPOTSHADOWSPEC", Urho3D::LightPSVariation::LPS_SPOTSHADOWSPEC)
  .value("LPS_POINTSHADOWSPEC", Urho3D::LightPSVariation::LPS_POINTSHADOWSPEC)
  .value("LPS_POINTMASKSHADOWSPEC", Urho3D::LightPSVariation::LPS_POINTMASKSHADOWSPEC)
  .value("MAX_LIGHT_PS_VARIATIONS", Urho3D::LightPSVariation::MAX_LIGHT_PS_VARIATIONS)
  .export_values()
;

// Enum Urho3D::DeferredLightVSVariation Registrations
auto pyclass_Var_Urho3D_DeferredLightVSVariation = py::enum_<Urho3D::DeferredLightVSVariation>(pyclass_Var_Urho3D, "DeferredLightVSVariation", py::arithmetic(), "test doc")
  .value("DLVS_NONE", Urho3D::DeferredLightVSVariation::DLVS_NONE)
  .value("DLVS_DIR", Urho3D::DeferredLightVSVariation::DLVS_DIR)
  .value("DLVS_ORTHO", Urho3D::DeferredLightVSVariation::DLVS_ORTHO)
  .value("DLVS_ORTHODIR", Urho3D::DeferredLightVSVariation::DLVS_ORTHODIR)
  .value("MAX_DEFERRED_LIGHT_VS_VARIATIONS", Urho3D::DeferredLightVSVariation::MAX_DEFERRED_LIGHT_VS_VARIATIONS)
  .export_values()
;

// Enum Urho3D::DeferredLightPSVariation Registrations
auto pyclass_Var_Urho3D_DeferredLightPSVariation = py::enum_<Urho3D::DeferredLightPSVariation>(pyclass_Var_Urho3D, "DeferredLightPSVariation", py::arithmetic(), "test doc")
  .value("DLPS_NONE", Urho3D::DeferredLightPSVariation::DLPS_NONE)
  .value("DLPS_SPOT", Urho3D::DeferredLightPSVariation::DLPS_SPOT)
  .value("DLPS_POINT", Urho3D::DeferredLightPSVariation::DLPS_POINT)
  .value("DLPS_POINTMASK", Urho3D::DeferredLightPSVariation::DLPS_POINTMASK)
  .value("DLPS_SPEC", Urho3D::DeferredLightPSVariation::DLPS_SPEC)
  .value("DLPS_SPOTSPEC", Urho3D::DeferredLightPSVariation::DLPS_SPOTSPEC)
  .value("DLPS_POINTSPEC", Urho3D::DeferredLightPSVariation::DLPS_POINTSPEC)
  .value("DLPS_POINTMASKSPEC", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSPEC)
  .value("DLPS_SHADOW", Urho3D::DeferredLightPSVariation::DLPS_SHADOW)
  .value("DLPS_SPOTSHADOW", Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOW)
  .value("DLPS_POINTSHADOW", Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOW)
  .value("DLPS_POINTMASKSHADOW", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOW)
  .value("DLPS_SHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_SHADOWSPEC)
  .value("DLPS_SPOTSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOWSPEC)
  .value("DLPS_POINTSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOWSPEC)
  .value("DLPS_POINTMASKSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOWSPEC)
  .value("DLPS_SHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_SHADOWNORMALOFFSET)
  .value("DLPS_SPOTSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOWNORMALOFFSET)
  .value("DLPS_POINTSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOWNORMALOFFSET)
  .value("DLPS_POINTMASKSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOWNORMALOFFSET)
  .value("DLPS_SHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_SHADOWSPECNORMALOFFSET)
  .value("DLPS_SPOTSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOWSPECNORMALOFFSET)
  .value("DLPS_POINTSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOWSPECNORMALOFFSET)
  .value("DLPS_POINTMASKSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOWSPECNORMALOFFSET)
  .value("DLPS_ORTHO", Urho3D::DeferredLightPSVariation::DLPS_ORTHO)
  .value("DLPS_ORTHOSPOT", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOT)
  .value("DLPS_ORTHOPOINT", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINT)
  .value("DLPS_ORTHOPOINTMASK", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASK)
  .value("DLPS_ORTHOSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPEC)
  .value("DLPS_ORTHOSPOTSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSPEC)
  .value("DLPS_ORTHOPOINTSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSPEC)
  .value("DLPS_ORTHOPOINTMASKSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSPEC)
  .value("DLPS_ORTHOSHADOW", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOW)
  .value("DLPS_ORTHOSPOTSHADOW", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOW)
  .value("DLPS_ORTHOPOINTSHADOW", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOW)
  .value("DLPS_ORTHOPOINTMASKSHADOW", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOW)
  .value("DLPS_ORTHOSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOWSPEC)
  .value("DLPS_ORTHOSPOTSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOWSPEC)
  .value("DLPS_ORTHOPOINTSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOWSPEC)
  .value("DLPS_ORTHOPOINTMASKSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOWSPEC)
  .value("DLPS_ORTHOSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOWNORMALOFFSET)
  .value("DLPS_ORTHOSPOTSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOWNORMALOFFSET)
  .value("DLPS_ORTHOPOINTSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOWNORMALOFFSET)
  .value("DLPS_ORTHOPOINTMASKSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOWNORMALOFFSET)
  .value("DLPS_ORTHOSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOWSPECNORMALOFFSET)
  .value("DLPS_ORTHOSPOTSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOWSPECNORMALOFFSET)
  .value("DLPS_ORTHOPOINTSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOWSPECNORMALOFFSET)
  .value("DLPS_ORTHOPOINTMASKSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOWSPECNORMALOFFSET)
  .value("MAX_DEFERRED_LIGHT_PS_VARIATIONS", Urho3D::DeferredLightPSVariation::MAX_DEFERRED_LIGHT_PS_VARIATIONS)
  .export_values()
;

// Enum Urho3D::TrailType Registrations
auto pyclass_Var_Urho3D_TrailType = py::enum_<Urho3D::TrailType>(pyclass_Var_Urho3D, "TrailType", py::arithmetic(), "test doc")
  .value("TT_FACE_CAMERA", Urho3D::TrailType::TT_FACE_CAMERA)
  .value("TT_BONE", Urho3D::TrailType::TT_BONE)
  .export_values()
;

// Enum Urho3D::PassLightingMode Registrations
auto pyclass_Var_Urho3D_PassLightingMode = py::enum_<Urho3D::PassLightingMode>(pyclass_Var_Urho3D, "PassLightingMode", py::arithmetic(), "test doc")
  .value("LIGHTING_UNLIT", Urho3D::PassLightingMode::LIGHTING_UNLIT)
  .value("LIGHTING_PERVERTEX", Urho3D::PassLightingMode::LIGHTING_PERVERTEX)
  .value("LIGHTING_PERPIXEL", Urho3D::PassLightingMode::LIGHTING_PERPIXEL)
  .export_values()
;

// Enum Urho3D::LoadMode Registrations
auto pyclass_Var_Urho3D_LoadMode = py::enum_<Urho3D::LoadMode>(pyclass_Var_Urho3D, "LoadMode", py::arithmetic(), "test doc")
  .value("LOAD_RESOURCES_ONLY", Urho3D::LoadMode::LOAD_RESOURCES_ONLY)
  .value("LOAD_SCENE", Urho3D::LoadMode::LOAD_SCENE)
  .value("LOAD_SCENE_AND_RESOURCES", Urho3D::LoadMode::LOAD_SCENE_AND_RESOURCES)
  .export_values()
;

// Enum Urho3D::CursorShape Registrations
auto pyclass_Var_Urho3D_CursorShape = py::enum_<Urho3D::CursorShape>(pyclass_Var_Urho3D, "CursorShape", py::arithmetic(), "test doc")
  .value("CS_NORMAL", Urho3D::CursorShape::CS_NORMAL)
  .value("CS_IBEAM", Urho3D::CursorShape::CS_IBEAM)
  .value("CS_CROSS", Urho3D::CursorShape::CS_CROSS)
  .value("CS_RESIZEVERTICAL", Urho3D::CursorShape::CS_RESIZEVERTICAL)
  .value("CS_RESIZEDIAGONAL_TOPRIGHT", Urho3D::CursorShape::CS_RESIZEDIAGONAL_TOPRIGHT)
  .value("CS_RESIZEHORIZONTAL", Urho3D::CursorShape::CS_RESIZEHORIZONTAL)
  .value("CS_RESIZEDIAGONAL_TOPLEFT", Urho3D::CursorShape::CS_RESIZEDIAGONAL_TOPLEFT)
  .value("CS_RESIZE_ALL", Urho3D::CursorShape::CS_RESIZE_ALL)
  .value("CS_ACCEPTDROP", Urho3D::CursorShape::CS_ACCEPTDROP)
  .value("CS_REJECTDROP", Urho3D::CursorShape::CS_REJECTDROP)
  .value("CS_BUSY", Urho3D::CursorShape::CS_BUSY)
  .value("CS_BUSY_ARROW", Urho3D::CursorShape::CS_BUSY_ARROW)
  .value("CS_MAX_SHAPES", Urho3D::CursorShape::CS_MAX_SHAPES)
  .export_values()
;

// Enum Urho3D::MouseMode Registrations
auto pyclass_Var_Urho3D_MouseMode = py::enum_<Urho3D::MouseMode>(pyclass_Var_Urho3D, "MouseMode", py::arithmetic(), "test doc")
  .value("MM_ABSOLUTE", Urho3D::MouseMode::MM_ABSOLUTE)
  .value("MM_RELATIVE", Urho3D::MouseMode::MM_RELATIVE)
  .value("MM_WRAP", Urho3D::MouseMode::MM_WRAP)
  .value("MM_FREE", Urho3D::MouseMode::MM_FREE)
  .value("MM_INVALID", Urho3D::MouseMode::MM_INVALID)
  .export_values()
;

// Enum Urho3D::LuaScriptObjectMethod Registrations
auto pyclass_Var_Urho3D_LuaScriptObjectMethod = py::enum_<Urho3D::LuaScriptObjectMethod>(pyclass_Var_Urho3D, "LuaScriptObjectMethod", py::arithmetic(), "test doc")
  .value("LSOM_START", Urho3D::LuaScriptObjectMethod::LSOM_START)
  .value("LSOM_STOP", Urho3D::LuaScriptObjectMethod::LSOM_STOP)
  .value("LSOM_DELAYEDSTART", Urho3D::LuaScriptObjectMethod::LSOM_DELAYEDSTART)
  .value("LSOM_UPDATE", Urho3D::LuaScriptObjectMethod::LSOM_UPDATE)
  .value("LSOM_POSTUPDATE", Urho3D::LuaScriptObjectMethod::LSOM_POSTUPDATE)
  .value("LSOM_FIXEDUPDATE", Urho3D::LuaScriptObjectMethod::LSOM_FIXEDUPDATE)
  .value("LSOM_FIXEDPOSTUPDATE", Urho3D::LuaScriptObjectMethod::LSOM_FIXEDPOSTUPDATE)
  .value("LSOM_LOAD", Urho3D::LuaScriptObjectMethod::LSOM_LOAD)
  .value("LSOM_SAVE", Urho3D::LuaScriptObjectMethod::LSOM_SAVE)
  .value("LSOM_READNETWORKUPDATE", Urho3D::LuaScriptObjectMethod::LSOM_READNETWORKUPDATE)
  .value("LSOM_WRITENETWORKUPDATE", Urho3D::LuaScriptObjectMethod::LSOM_WRITENETWORKUPDATE)
  .value("LSOM_APPLYATTRIBUTES", Urho3D::LuaScriptObjectMethod::LSOM_APPLYATTRIBUTES)
  .value("LSOM_TRANSFORMCHANGED", Urho3D::LuaScriptObjectMethod::LSOM_TRANSFORMCHANGED)
  .value("MAX_LUA_SCRIPT_OBJECT_METHODS", Urho3D::LuaScriptObjectMethod::MAX_LUA_SCRIPT_OBJECT_METHODS)
  .export_values()
;

// Enum Urho3D::CrowdAgentRequestedTarget Registrations
auto pyclass_Var_Urho3D_CrowdAgentRequestedTarget = py::enum_<Urho3D::CrowdAgentRequestedTarget>(pyclass_Var_Urho3D, "CrowdAgentRequestedTarget", py::arithmetic(), "test doc")
  .value("CA_REQUESTEDTARGET_NONE", Urho3D::CrowdAgentRequestedTarget::CA_REQUESTEDTARGET_NONE)
  .value("CA_REQUESTEDTARGET_POSITION", Urho3D::CrowdAgentRequestedTarget::CA_REQUESTEDTARGET_POSITION)
  .value("CA_REQUESTEDTARGET_VELOCITY", Urho3D::CrowdAgentRequestedTarget::CA_REQUESTEDTARGET_VELOCITY)
  .export_values()
;

// Enum Urho3D::CrowdAgentTargetState Registrations
auto pyclass_Var_Urho3D_CrowdAgentTargetState = py::enum_<Urho3D::CrowdAgentTargetState>(pyclass_Var_Urho3D, "CrowdAgentTargetState", py::arithmetic(), "test doc")
  .value("CA_TARGET_NONE", Urho3D::CrowdAgentTargetState::CA_TARGET_NONE)
  .value("CA_TARGET_FAILED", Urho3D::CrowdAgentTargetState::CA_TARGET_FAILED)
  .value("CA_TARGET_VALID", Urho3D::CrowdAgentTargetState::CA_TARGET_VALID)
  .value("CA_TARGET_REQUESTING", Urho3D::CrowdAgentTargetState::CA_TARGET_REQUESTING)
  .value("CA_TARGET_WAITINGFORQUEUE", Urho3D::CrowdAgentTargetState::CA_TARGET_WAITINGFORQUEUE)
  .value("CA_TARGET_WAITINGFORPATH", Urho3D::CrowdAgentTargetState::CA_TARGET_WAITINGFORPATH)
  .value("CA_TARGET_VELOCITY", Urho3D::CrowdAgentTargetState::CA_TARGET_VELOCITY)
  .export_values()
;

// Enum Urho3D::CrowdAgentState Registrations
auto pyclass_Var_Urho3D_CrowdAgentState = py::enum_<Urho3D::CrowdAgentState>(pyclass_Var_Urho3D, "CrowdAgentState", py::arithmetic(), "test doc")
  .value("CA_STATE_INVALID", Urho3D::CrowdAgentState::CA_STATE_INVALID)
  .value("CA_STATE_WALKING", Urho3D::CrowdAgentState::CA_STATE_WALKING)
  .value("CA_STATE_OFFMESH", Urho3D::CrowdAgentState::CA_STATE_OFFMESH)
  .export_values()
;

// Enum Urho3D::NavigationQuality Registrations
auto pyclass_Var_Urho3D_NavigationQuality = py::enum_<Urho3D::NavigationQuality>(pyclass_Var_Urho3D, "NavigationQuality", py::arithmetic(), "test doc")
  .value("NAVIGATIONQUALITY_LOW", Urho3D::NavigationQuality::NAVIGATIONQUALITY_LOW)
  .value("NAVIGATIONQUALITY_MEDIUM", Urho3D::NavigationQuality::NAVIGATIONQUALITY_MEDIUM)
  .value("NAVIGATIONQUALITY_HIGH", Urho3D::NavigationQuality::NAVIGATIONQUALITY_HIGH)
  .export_values()
;

// Enum Urho3D::NavigationPushiness Registrations
auto pyclass_Var_Urho3D_NavigationPushiness = py::enum_<Urho3D::NavigationPushiness>(pyclass_Var_Urho3D, "NavigationPushiness", py::arithmetic(), "test doc")
  .value("NAVIGATIONPUSHINESS_LOW", Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_LOW)
  .value("NAVIGATIONPUSHINESS_MEDIUM", Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_MEDIUM)
  .value("NAVIGATIONPUSHINESS_HIGH", Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_HIGH)
  .value("NAVIGATIONPUSHINESS_NONE", Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_NONE)
  .export_values()
;

// Enum Urho3D::NavmeshPartitionType Registrations
auto pyclass_Var_Urho3D_NavmeshPartitionType = py::enum_<Urho3D::NavmeshPartitionType>(pyclass_Var_Urho3D, "NavmeshPartitionType", py::arithmetic(), "test doc")
  .value("NAVMESH_PARTITION_WATERSHED", Urho3D::NavmeshPartitionType::NAVMESH_PARTITION_WATERSHED)
  .value("NAVMESH_PARTITION_MONOTONE", Urho3D::NavmeshPartitionType::NAVMESH_PARTITION_MONOTONE)
  .export_values()
;

// Enum Urho3D::NavigationPathPointFlag Registrations
auto pyclass_Var_Urho3D_NavigationPathPointFlag = py::enum_<Urho3D::NavigationPathPointFlag>(pyclass_Var_Urho3D, "NavigationPathPointFlag", py::arithmetic(), "test doc")
  .value("NAVPATHFLAG_NONE", Urho3D::NavigationPathPointFlag::NAVPATHFLAG_NONE)
  .value("NAVPATHFLAG_START", Urho3D::NavigationPathPointFlag::NAVPATHFLAG_START)
  .value("NAVPATHFLAG_END", Urho3D::NavigationPathPointFlag::NAVPATHFLAG_END)
  .value("NAVPATHFLAG_OFF_MESH", Urho3D::NavigationPathPointFlag::NAVPATHFLAG_OFF_MESH)
  .export_values()
;

// Enum Urho3D::ObserverPositionSendMode Registrations
auto pyclass_Var_Urho3D_ObserverPositionSendMode = py::enum_<Urho3D::ObserverPositionSendMode>(pyclass_Var_Urho3D, "ObserverPositionSendMode", py::arithmetic(), "test doc")
  .value("OPSM_NONE", Urho3D::ObserverPositionSendMode::OPSM_NONE)
  .value("OPSM_POSITION", Urho3D::ObserverPositionSendMode::OPSM_POSITION)
  .value("OPSM_POSITION_ROTATION", Urho3D::ObserverPositionSendMode::OPSM_POSITION_ROTATION)
  .export_values()
;

// Enum Urho3D::HttpRequestState Registrations
auto pyclass_Var_Urho3D_HttpRequestState = py::enum_<Urho3D::HttpRequestState>(pyclass_Var_Urho3D, "HttpRequestState", py::arithmetic(), "test doc")
  .value("HTTP_INITIALIZING", Urho3D::HttpRequestState::HTTP_INITIALIZING)
  .value("HTTP_ERROR", Urho3D::HttpRequestState::HTTP_ERROR)
  .value("HTTP_OPEN", Urho3D::HttpRequestState::HTTP_OPEN)
  .value("HTTP_CLOSED", Urho3D::HttpRequestState::HTTP_CLOSED)
  .export_values()
;

// Enum Urho3D::ShapeType Registrations
auto pyclass_Var_Urho3D_ShapeType = py::enum_<Urho3D::ShapeType>(pyclass_Var_Urho3D, "ShapeType", py::arithmetic(), "test doc")
  .value("SHAPE_BOX", Urho3D::ShapeType::SHAPE_BOX)
  .value("SHAPE_SPHERE", Urho3D::ShapeType::SHAPE_SPHERE)
  .value("SHAPE_STATICPLANE", Urho3D::ShapeType::SHAPE_STATICPLANE)
  .value("SHAPE_CYLINDER", Urho3D::ShapeType::SHAPE_CYLINDER)
  .value("SHAPE_CAPSULE", Urho3D::ShapeType::SHAPE_CAPSULE)
  .value("SHAPE_CONE", Urho3D::ShapeType::SHAPE_CONE)
  .value("SHAPE_TRIANGLEMESH", Urho3D::ShapeType::SHAPE_TRIANGLEMESH)
  .value("SHAPE_CONVEXHULL", Urho3D::ShapeType::SHAPE_CONVEXHULL)
  .value("SHAPE_TERRAIN", Urho3D::ShapeType::SHAPE_TERRAIN)
  .value("SHAPE_GIMPACTMESH", Urho3D::ShapeType::SHAPE_GIMPACTMESH)
  .export_values()
;

// Enum Urho3D::ConstraintType Registrations
auto pyclass_Var_Urho3D_ConstraintType = py::enum_<Urho3D::ConstraintType>(pyclass_Var_Urho3D, "ConstraintType", py::arithmetic(), "test doc")
  .value("CONSTRAINT_POINT", Urho3D::ConstraintType::CONSTRAINT_POINT)
  .value("CONSTRAINT_HINGE", Urho3D::ConstraintType::CONSTRAINT_HINGE)
  .value("CONSTRAINT_SLIDER", Urho3D::ConstraintType::CONSTRAINT_SLIDER)
  .value("CONSTRAINT_CONETWIST", Urho3D::ConstraintType::CONSTRAINT_CONETWIST)
  .export_values()
;

// Enum Urho3D::UpdateEvent Registrations
auto pyclass_Var_Urho3D_UpdateEvent = py::enum_<Urho3D::UpdateEvent>(pyclass_Var_Urho3D, "UpdateEvent", py::arithmetic(), "test doc")
  .value("USE_NO_EVENT", Urho3D::UpdateEvent::USE_NO_EVENT)
  .value("USE_UPDATE", Urho3D::UpdateEvent::USE_UPDATE)
  .value("USE_POSTUPDATE", Urho3D::UpdateEvent::USE_POSTUPDATE)
  .value("USE_FIXEDUPDATE", Urho3D::UpdateEvent::USE_FIXEDUPDATE)
  .value("USE_FIXEDPOSTUPDATE", Urho3D::UpdateEvent::USE_FIXEDPOSTUPDATE)
  .export_values()
;

// Enum Urho3D::CollisionEventMode Registrations
auto pyclass_Var_Urho3D_CollisionEventMode = py::enum_<Urho3D::CollisionEventMode>(pyclass_Var_Urho3D, "CollisionEventMode", py::arithmetic(), "test doc")
  .value("COLLISION_NEVER", Urho3D::CollisionEventMode::COLLISION_NEVER)
  .value("COLLISION_ACTIVE", Urho3D::CollisionEventMode::COLLISION_ACTIVE)
  .value("COLLISION_ALWAYS", Urho3D::CollisionEventMode::COLLISION_ALWAYS)
  .export_values()
;

// Enum Urho3D::PListValueType Registrations
auto pyclass_Var_Urho3D_PListValueType = py::enum_<Urho3D::PListValueType>(pyclass_Var_Urho3D, "PListValueType", py::arithmetic(), "test doc")
  .value("PLVT_NONE", Urho3D::PListValueType::PLVT_NONE)
  .value("PLVT_INT", Urho3D::PListValueType::PLVT_INT)
  .value("PLVT_BOOL", Urho3D::PListValueType::PLVT_BOOL)
  .value("PLVT_FLOAT", Urho3D::PListValueType::PLVT_FLOAT)
  .value("PLVT_STRING", Urho3D::PListValueType::PLVT_STRING)
  .value("PLVT_VALUEMAP", Urho3D::PListValueType::PLVT_VALUEMAP)
  .value("PLVT_VALUEVECTOR", Urho3D::PListValueType::PLVT_VALUEVECTOR)
  .export_values()
;

// Enum Urho3D::ResourceRequest Registrations
auto pyclass_Var_Urho3D_ResourceRequest = py::enum_<Urho3D::ResourceRequest>(pyclass_Var_Urho3D, "ResourceRequest", py::arithmetic(), "test doc")
  .value("RESOURCE_CHECKEXISTS", Urho3D::ResourceRequest::RESOURCE_CHECKEXISTS)
  .value("RESOURCE_GETFILE", Urho3D::ResourceRequest::RESOURCE_GETFILE)
  .export_values()
;

// Enum Urho3D::SmoothingType Registrations
auto pyclass_Var_Urho3D_SmoothingType = py::enum_<Urho3D::SmoothingType>(pyclass_Var_Urho3D, "SmoothingType", py::arithmetic(), "test doc")
  .value("SMOOTH_NONE", Urho3D::SmoothingType::SMOOTH_NONE)
  .value("SMOOTH_POSITION", Urho3D::SmoothingType::SMOOTH_POSITION)
  .value("SMOOTH_ROTATION", Urho3D::SmoothingType::SMOOTH_ROTATION)
  .export_values()
;

// Enum Urho3D::InterpMethod Registrations
auto pyclass_Var_Urho3D_InterpMethod = py::enum_<Urho3D::InterpMethod>(pyclass_Var_Urho3D, "InterpMethod", py::arithmetic(), "test doc")
  .value("IM_NONE", Urho3D::InterpMethod::IM_NONE)
  .value("IM_LINEAR", Urho3D::InterpMethod::IM_LINEAR)
  .value("IM_SPLINE", Urho3D::InterpMethod::IM_SPLINE)
  .export_values()
;

// Enum Urho3D::FontType Registrations
auto pyclass_Var_Urho3D_FontType = py::enum_<Urho3D::FontType>(pyclass_Var_Urho3D, "FontType", py::arithmetic(), "test doc")
  .value("FONT_NONE", Urho3D::FontType::FONT_NONE)
  .value("FONT_FREETYPE", Urho3D::FontType::FONT_FREETYPE)
  .value("FONT_BITMAP", Urho3D::FontType::FONT_BITMAP)
  .value("MAX_FONT_TYPES", Urho3D::FontType::MAX_FONT_TYPES)
  .export_values()
;

// Enum Urho3D::HighlightMode Registrations
auto pyclass_Var_Urho3D_HighlightMode = py::enum_<Urho3D::HighlightMode>(pyclass_Var_Urho3D, "HighlightMode", py::arithmetic(), "test doc")
  .value("HM_NEVER", Urho3D::HighlightMode::HM_NEVER)
  .value("HM_FOCUS", Urho3D::HighlightMode::HM_FOCUS)
  .value("HM_ALWAYS", Urho3D::HighlightMode::HM_ALWAYS)
  .export_values()
;

// Enum Urho3D::TextEffect Registrations
auto pyclass_Var_Urho3D_TextEffect = py::enum_<Urho3D::TextEffect>(pyclass_Var_Urho3D, "TextEffect", py::arithmetic(), "test doc")
  .value("TE_NONE", Urho3D::TextEffect::TE_NONE)
  .value("TE_SHADOW", Urho3D::TextEffect::TE_SHADOW)
  .value("TE_STROKE", Urho3D::TextEffect::TE_STROKE)
  .export_values()
;

// Enum Urho3D::FontHintLevel Registrations
auto pyclass_Var_Urho3D_FontHintLevel = py::enum_<Urho3D::FontHintLevel>(pyclass_Var_Urho3D, "FontHintLevel", py::arithmetic(), "test doc")
  .value("FONT_HINT_LEVEL_NONE", Urho3D::FontHintLevel::FONT_HINT_LEVEL_NONE)
  .value("FONT_HINT_LEVEL_LIGHT", Urho3D::FontHintLevel::FONT_HINT_LEVEL_LIGHT)
  .value("FONT_HINT_LEVEL_NORMAL", Urho3D::FontHintLevel::FONT_HINT_LEVEL_NORMAL)
  .export_values()
;

// Enum Urho3D::WindowDragMode Registrations
auto pyclass_Var_Urho3D_WindowDragMode = py::enum_<Urho3D::WindowDragMode>(pyclass_Var_Urho3D, "WindowDragMode", py::arithmetic(), "test doc")
  .value("DRAG_NONE", Urho3D::WindowDragMode::DRAG_NONE)
  .value("DRAG_MOVE", Urho3D::WindowDragMode::DRAG_MOVE)
  .value("DRAG_RESIZE_TOPLEFT", Urho3D::WindowDragMode::DRAG_RESIZE_TOPLEFT)
  .value("DRAG_RESIZE_TOP", Urho3D::WindowDragMode::DRAG_RESIZE_TOP)
  .value("DRAG_RESIZE_TOPRIGHT", Urho3D::WindowDragMode::DRAG_RESIZE_TOPRIGHT)
  .value("DRAG_RESIZE_RIGHT", Urho3D::WindowDragMode::DRAG_RESIZE_RIGHT)
  .value("DRAG_RESIZE_BOTTOMRIGHT", Urho3D::WindowDragMode::DRAG_RESIZE_BOTTOMRIGHT)
  .value("DRAG_RESIZE_BOTTOM", Urho3D::WindowDragMode::DRAG_RESIZE_BOTTOM)
  .value("DRAG_RESIZE_BOTTOMLEFT", Urho3D::WindowDragMode::DRAG_RESIZE_BOTTOMLEFT)
  .value("DRAG_RESIZE_LEFT", Urho3D::WindowDragMode::DRAG_RESIZE_LEFT)
  .export_values()
;

// Enum Urho3D::EmitterType2D Registrations
auto pyclass_Var_Urho3D_EmitterType2D = py::enum_<Urho3D::EmitterType2D>(pyclass_Var_Urho3D, "EmitterType2D", py::arithmetic(), "test doc")
  .value("EMITTER_TYPE_GRAVITY", Urho3D::EmitterType2D::EMITTER_TYPE_GRAVITY)
  .value("EMITTER_TYPE_RADIAL", Urho3D::EmitterType2D::EMITTER_TYPE_RADIAL)
  .export_values()
;

// Enum Urho3D::BodyType2D Registrations
auto pyclass_Var_Urho3D_BodyType2D = py::enum_<Urho3D::BodyType2D>(pyclass_Var_Urho3D, "BodyType2D", py::arithmetic(), "test doc")
  .value("BT_STATIC", Urho3D::BodyType2D::BT_STATIC)
  .value("BT_KINEMATIC", Urho3D::BodyType2D::BT_KINEMATIC)
  .value("BT_DYNAMIC", Urho3D::BodyType2D::BT_DYNAMIC)
  .export_values()
;

// Enum Urho3D::Orientation2D Registrations
auto pyclass_Var_Urho3D_Orientation2D = py::enum_<Urho3D::Orientation2D>(pyclass_Var_Urho3D, "Orientation2D", py::arithmetic(), "test doc")
  .value("O_ORTHOGONAL", Urho3D::Orientation2D::O_ORTHOGONAL)
  .value("O_ISOMETRIC", Urho3D::Orientation2D::O_ISOMETRIC)
  .value("O_STAGGERED", Urho3D::Orientation2D::O_STAGGERED)
  .value("O_HEXAGONAL", Urho3D::Orientation2D::O_HEXAGONAL)
  .export_values()
;

// Enum Urho3D::TileMapLayerType2D Registrations
auto pyclass_Var_Urho3D_TileMapLayerType2D = py::enum_<Urho3D::TileMapLayerType2D>(pyclass_Var_Urho3D, "TileMapLayerType2D", py::arithmetic(), "test doc")
  .value("LT_TILE_LAYER", Urho3D::TileMapLayerType2D::LT_TILE_LAYER)
  .value("LT_OBJECT_GROUP", Urho3D::TileMapLayerType2D::LT_OBJECT_GROUP)
  .value("LT_IMAGE_LAYER", Urho3D::TileMapLayerType2D::LT_IMAGE_LAYER)
  .value("LT_INVALID", Urho3D::TileMapLayerType2D::LT_INVALID)
  .export_values()
;

// Enum Urho3D::TileMapObjectType2D Registrations
auto pyclass_Var_Urho3D_TileMapObjectType2D = py::enum_<Urho3D::TileMapObjectType2D>(pyclass_Var_Urho3D, "TileMapObjectType2D", py::arithmetic(), "test doc")
  .value("OT_RECTANGLE", Urho3D::TileMapObjectType2D::OT_RECTANGLE)
  .value("OT_ELLIPSE", Urho3D::TileMapObjectType2D::OT_ELLIPSE)
  .value("OT_POLYGON", Urho3D::TileMapObjectType2D::OT_POLYGON)
  .value("OT_POLYLINE", Urho3D::TileMapObjectType2D::OT_POLYLINE)
  .value("OT_TILE", Urho3D::TileMapObjectType2D::OT_TILE)
  .value("OT_INVALID", Urho3D::TileMapObjectType2D::OT_INVALID)
  .export_values()
;

    //================================================
    // Implement Classes
    //================================================
    Implement_Urho3D_HashBase(pyclass_Var_Urho3D_HashBase);
Implement_Urho3D_WString(pyclass_Var_Urho3D_WString);
Implement_Urho3D_StringHashRegister(pyclass_Var_Urho3D_StringHashRegister);
Implement_Urho3D_StringFactory(pyclass_Var_Urho3D_StringFactory);
Implement_Urho3D_MutexLock(pyclass_Var_Urho3D_MutexLock);
Implement_Urho3D_RefCounted(pyclass_Var_Urho3D_RefCounted);
Implement_Urho3D_Vector2(pyclass_Var_Urho3D_Vector2);
Implement_Urho3D_Vector3(pyclass_Var_Urho3D_Vector3);
Implement_Urho3D_Color(pyclass_Var_Urho3D_Color);
Implement_Urho3D_Quaternion(pyclass_Var_Urho3D_Quaternion);
Implement_Urho3D_Matrix4(pyclass_Var_Urho3D_Matrix4);
Implement_Urho3D_IntRect(pyclass_Var_Urho3D_IntRect);
Implement_Urho3D_ResourceRef(pyclass_Var_Urho3D_ResourceRef);
Implement_Urho3D_Context(pyclass_Var_Urho3D_Context);
Implement_Urho3D_TypeInfo(pyclass_Var_Urho3D_TypeInfo);
Implement_Urho3D_ObjectFactory(pyclass_Var_Urho3D_ObjectFactory);
Implement_Urho3D_ScriptEventListener(pyclass_Var_Urho3D_ScriptEventListener);
Implement_Urho3D_AttributeAccessor(pyclass_Var_Urho3D_AttributeAccessor);
Implement_Urho3D_Deserializer(pyclass_Var_Urho3D_Deserializer);
Implement_Urho3D_XMLElement(pyclass_Var_Urho3D_XMLElement);
Implement_Urho3D_DirtyBits(pyclass_Var_Urho3D_DirtyBits);
Implement_Urho3D_ReplicationState(pyclass_Var_Urho3D_ReplicationState);
Implement_Urho3D_ValueAnimationInfo(pyclass_Var_Urho3D_ValueAnimationInfo);
Implement_Urho3D_ComponentReplicationState(pyclass_Var_Urho3D_ComponentReplicationState);
Implement_Urho3D_SoundStream(pyclass_Var_Urho3D_SoundStream);
Implement_Urho3D_EventReceiverGroup(pyclass_Var_Urho3D_EventReceiverGroup);
Implement_Urho3D_Polyhedron(pyclass_Var_Urho3D_Polyhedron);
Implement_Urho3D_Sphere(pyclass_Var_Urho3D_Sphere);
Implement_Urho3D_Octant(pyclass_Var_Urho3D_Octant);
Implement_Urho3D_RayQueryResult(pyclass_Var_Urho3D_RayQueryResult);
Implement_Urho3D_GPUObject(pyclass_Var_Urho3D_GPUObject);
Implement_Urho3D_HiresTimer(pyclass_Var_Urho3D_HiresTimer);
Implement_Urho3D_SceneResolver(pyclass_Var_Urho3D_SceneResolver);
Implement_Urho3D_NodeImpl(pyclass_Var_Urho3D_NodeImpl);
Implement_Urho3D_XPathResultSet(pyclass_Var_Urho3D_XPathResultSet);
Implement_Urho3D_BiasParameters(pyclass_Var_Urho3D_BiasParameters);
Implement_Urho3D_FocusParameters(pyclass_Var_Urho3D_FocusParameters);
Implement_Urho3D_UIBatch(pyclass_Var_Urho3D_UIBatch);
Implement_Urho3D_BufferedSoundStream(pyclass_Var_Urho3D_BufferedSoundStream);
Implement_Urho3D_Condition(pyclass_Var_Urho3D_Condition);
Implement_Urho3D_ProfilerBlock(pyclass_Var_Urho3D_ProfilerBlock);
Implement_Urho3D_AutoProfileBlock(pyclass_Var_Urho3D_AutoProfileBlock);
Implement_Urho3D_Spline(pyclass_Var_Urho3D_Spline);
Implement_Urho3D_Skeleton(pyclass_Var_Urho3D_Skeleton);
Implement_Urho3D_AnimationState(pyclass_Var_Urho3D_AnimationState);
Implement_Urho3D_AnimationTrack(pyclass_Var_Urho3D_AnimationTrack);
Implement_Urho3D_ShaderVariation(pyclass_Var_Urho3D_ShaderVariation);
Implement_Urho3D_Billboard(pyclass_Var_Urho3D_Billboard);
Implement_Urho3D_Ray(pyclass_Var_Urho3D_Ray);
Implement_Urho3D_RenderSurface(pyclass_Var_Urho3D_RenderSurface);
Implement_Urho3D_ShaderProgram(pyclass_Var_Urho3D_ShaderProgram);
Implement_Urho3D_OctreeQuery(pyclass_Var_Urho3D_OctreeQuery);
Implement_Urho3D_SphereOctreeQuery(pyclass_Var_Urho3D_SphereOctreeQuery);
Implement_Urho3D_FrustumOctreeQuery(pyclass_Var_Urho3D_FrustumOctreeQuery);
Implement_Urho3D_AllContentOctreeQuery(pyclass_Var_Urho3D_AllContentOctreeQuery);
Implement_Urho3D_RenderTargetInfo(pyclass_Var_Urho3D_RenderTargetInfo);
Implement_Urho3D_RenderPath(pyclass_Var_Urho3D_RenderPath);
Implement_Urho3D_TrailPoint(pyclass_Var_Urho3D_TrailPoint);
Implement_Urho3D_Controls(pyclass_Var_Urho3D_Controls);
Implement_Urho3D_LuaFunction(pyclass_Var_Urho3D_LuaFunction);
Implement_Urho3D_AreaAllocator(pyclass_Var_Urho3D_AreaAllocator);
Implement_Urho3D_NavBuildData(pyclass_Var_Urho3D_NavBuildData);
Implement_Urho3D_NavAreaStub(pyclass_Var_Urho3D_NavAreaStub);
Implement_Urho3D_SceneReplicationState(pyclass_Var_Urho3D_SceneReplicationState);
Implement_Urho3D_PhysicsRaycastResult(pyclass_Var_Urho3D_PhysicsRaycastResult);
Implement_Urho3D_PListValue(pyclass_Var_Urho3D_PListValue);
Implement_Urho3D_FontFace(pyclass_Var_Urho3D_FontFace);
Implement_Urho3D_FontFaceBitmap(pyclass_Var_Urho3D_FontFaceBitmap);
Implement_Urho3D_PhysicsRaycastResult2D(pyclass_Var_Urho3D_PhysicsRaycastResult2D);
Implement_Urho3D_TileMapInfo2D(pyclass_Var_Urho3D_TileMapInfo2D);
Implement_Urho3D_Tile2D(pyclass_Var_Urho3D_Tile2D);
Implement_Urho3D_ListBase(pyclass_Var_Urho3D_ListBase);
Implement_Urho3D_StringHash(pyclass_Var_Urho3D_StringHash);
Implement_Urho3D_Mutex(pyclass_Var_Urho3D_Mutex);
Implement_Urho3D_IntVector2(pyclass_Var_Urho3D_IntVector2);
Implement_Urho3D_Vector4(pyclass_Var_Urho3D_Vector4);
Implement_Urho3D_Matrix3x4(pyclass_Var_Urho3D_Matrix3x4);
Implement_Urho3D_Variant(pyclass_Var_Urho3D_Variant);
Implement_Urho3D_ResourceRefList(pyclass_Var_Urho3D_ResourceRefList);
Implement_Urho3D_Object(pyclass_Var_Urho3D_Object);
Implement_Urho3D_Script(pyclass_Var_Urho3D_Script);
Implement_Urho3D_Connection(pyclass_Var_Urho3D_Connection);
Implement_Urho3D_JSONValue(pyclass_Var_Urho3D_JSONValue);
Implement_Urho3D_Audio(pyclass_Var_Urho3D_Audio);
Implement_Urho3D_VertexElement(pyclass_Var_Urho3D_VertexElement);
Implement_Urho3D_BoundingBox(pyclass_Var_Urho3D_BoundingBox);
Implement_Urho3D_Geometry(pyclass_Var_Urho3D_Geometry);
Implement_Urho3D_OcclusionBuffer(pyclass_Var_Urho3D_OcclusionBuffer);
Implement_Urho3D_SourceBatch(pyclass_Var_Urho3D_SourceBatch);
Implement_Urho3D_Graphics(pyclass_Var_Urho3D_Graphics);
Implement_Urho3D_Time(pyclass_Var_Urho3D_Time);
Implement_Urho3D_PackageFile(pyclass_Var_Urho3D_PackageFile);
Implement_Urho3D_NodeReplicationState(pyclass_Var_Urho3D_NodeReplicationState);
Implement_Urho3D_Plane(pyclass_Var_Urho3D_Plane);
Implement_Urho3D_Pass(pyclass_Var_Urho3D_Pass);
Implement_Urho3D_ResourceCache(pyclass_Var_Urho3D_ResourceCache);
Implement_Urho3D_ScriptEventInvoker(pyclass_Var_Urho3D_ScriptEventInvoker);
Implement_Urho3D_OggVorbisSoundStream(pyclass_Var_Urho3D_OggVorbisSoundStream);
Implement_Urho3D_Thread(pyclass_Var_Urho3D_Thread);
Implement_Urho3D_EventProfilerBlock(pyclass_Var_Urho3D_EventProfilerBlock);
Implement_Urho3D_WorkQueue(pyclass_Var_Urho3D_WorkQueue);
Implement_Urho3D_DebugHud(pyclass_Var_Urho3D_DebugHud);
Implement_Urho3D_Application(pyclass_Var_Urho3D_Application);
Implement_Urho3D_IndexBuffer(pyclass_Var_Urho3D_IndexBuffer);
Implement_Urho3D_AnimationControl(pyclass_Var_Urho3D_AnimationControl);
Implement_Urho3D_View(pyclass_Var_Urho3D_View);
Implement_Urho3D_ConstantBuffer(pyclass_Var_Urho3D_ConstantBuffer);
Implement_Urho3D_Renderer(pyclass_Var_Urho3D_Renderer);
Implement_Urho3D_ShaderPrecache(pyclass_Var_Urho3D_ShaderPrecache);
Implement_Urho3D_PointOctreeQuery(pyclass_Var_Urho3D_PointOctreeQuery);
Implement_Urho3D_OctreeQueryResult(pyclass_Var_Urho3D_OctreeQueryResult);
Implement_Urho3D_RenderPathCommand(pyclass_Var_Urho3D_RenderPathCommand);
Implement_Urho3D_FileSystem(pyclass_Var_Urho3D_FileSystem);
Implement_Urho3D_CursorShapeInfo(pyclass_Var_Urho3D_CursorShapeInfo);
Implement_Urho3D_LuaScriptEventListener(pyclass_Var_Urho3D_LuaScriptEventListener);
Implement_Urho3D_NavigationPathPoint(pyclass_Var_Urho3D_NavigationPathPoint);
Implement_Urho3D_HttpRequest(pyclass_Var_Urho3D_HttpRequest);
Implement_Urho3D_Localization(pyclass_Var_Urho3D_Localization);
Implement_Urho3D_RocketSys(pyclass_Var_Urho3D_RocketSys);
Implement_Urho3D_FileSelector(pyclass_Var_Urho3D_FileSelector);
Implement_Urho3D_FontFaceFreeType(pyclass_Var_Urho3D_FontFaceFreeType);
Implement_Urho3D_MessageBox(pyclass_Var_Urho3D_MessageBox);
Implement_Urho3D_UI(pyclass_Var_Urho3D_UI);
Implement_Urho3D_PropertySet2D(pyclass_Var_Urho3D_PropertySet2D);
Implement_Urho3D_VectorBase(pyclass_Var_Urho3D_VectorBase);
Implement_Urho3D_LinkedListNode(pyclass_Var_Urho3D_LinkedListNode);
Implement_Urho3D_Matrix3(pyclass_Var_Urho3D_Matrix3);
Implement_Urho3D_EventHandler(pyclass_Var_Urho3D_EventHandler);
Implement_Urho3D_Serializable(pyclass_Var_Urho3D_Serializable);
Implement_Urho3D_NetworkState(pyclass_Var_Urho3D_NetworkState);
Implement_Urho3D_Animatable(pyclass_Var_Urho3D_Animatable);
Implement_Urho3D_Node(pyclass_Var_Urho3D_Node);
Implement_Urho3D_Frustum(pyclass_Var_Urho3D_Frustum);
Implement_Urho3D_RayOctreeQuery(pyclass_Var_Urho3D_RayOctreeQuery);
Implement_Urho3D_Timer(pyclass_Var_Urho3D_Timer);
Implement_Urho3D_Log(pyclass_Var_Urho3D_Log);
Implement_Urho3D_CascadeParameters(pyclass_Var_Urho3D_CascadeParameters);
Implement_Urho3D_UIElement(pyclass_Var_Urho3D_UIElement);
Implement_Urho3D_BorderImage(pyclass_Var_Urho3D_BorderImage);
Implement_Urho3D_Profiler(pyclass_Var_Urho3D_Profiler);
Implement_Urho3D_Console(pyclass_Var_Urho3D_Console);
Implement_Urho3D_Button(pyclass_Var_Urho3D_Button);
Implement_Urho3D_LineEdit(pyclass_Var_Urho3D_LineEdit);
Implement_Urho3D_VertexBuffer(pyclass_Var_Urho3D_VertexBuffer);
Implement_Urho3D_BoxOctreeQuery(pyclass_Var_Urho3D_BoxOctreeQuery);
Implement_Urho3D_Viewport(pyclass_Var_Urho3D_Viewport);
Implement_Urho3D_FileWatcher(pyclass_Var_Urho3D_FileWatcher);
Implement_Urho3D_Input(pyclass_Var_Urho3D_Input);
Implement_Urho3D_LuaScript(pyclass_Var_Urho3D_LuaScript);
Implement_Urho3D_Matrix2(pyclass_Var_Urho3D_Matrix2);
Implement_Urho3D_Network(pyclass_Var_Urho3D_Network);
Implement_Urho3D_CheckBox(pyclass_Var_Urho3D_CheckBox);
Implement_Urho3D_Window(pyclass_Var_Urho3D_Window);
Implement_Urho3D_ScrollBar(pyclass_Var_Urho3D_ScrollBar);
Implement_Urho3D_UISelectable(pyclass_Var_Urho3D_UISelectable);
Implement_Urho3D_Slider(pyclass_Var_Urho3D_Slider);
Implement_Urho3D_ToolTip(pyclass_Var_Urho3D_ToolTip);
Implement_Urho3D_View3D(pyclass_Var_Urho3D_View3D);
Implement_Urho3D_TileMapObject2D(pyclass_Var_Urho3D_TileMapObject2D);
Implement_Urho3D_CScriptDictValue(pyclass_Var_Urho3D_CScriptDictValue);
Implement_Urho3D_Rect(pyclass_Var_Urho3D_Rect);
Implement_Urho3D_ResourceRouter(pyclass_Var_Urho3D_ResourceRouter);
Implement_Urho3D_Serializer(pyclass_Var_Urho3D_Serializer);
Implement_Urho3D_Component(pyclass_Var_Urho3D_Component);
Implement_Urho3D_SoundSource(pyclass_Var_Urho3D_SoundSource);
Implement_Urho3D_Drawable(pyclass_Var_Urho3D_Drawable);
Implement_Urho3D_StaticModel(pyclass_Var_Urho3D_StaticModel);
Implement_Urho3D_AbstractFile(pyclass_Var_Urho3D_AbstractFile);
Implement_Urho3D_Cursor(pyclass_Var_Urho3D_Cursor);
Implement_Urho3D_SoundSource3D(pyclass_Var_Urho3D_SoundSource3D);
Implement_Urho3D_Engine(pyclass_Var_Urho3D_Engine);
Implement_Urho3D_Text(pyclass_Var_Urho3D_Text);
Implement_Urho3D_AnimatedModel(pyclass_Var_Urho3D_AnimatedModel);
Implement_Urho3D_BillboardSet(pyclass_Var_Urho3D_BillboardSet);
Implement_Urho3D_DecalSet(pyclass_Var_Urho3D_DecalSet);
Implement_Urho3D_Octree(pyclass_Var_Urho3D_Octree);
Implement_Urho3D_ParticleEmitter(pyclass_Var_Urho3D_ParticleEmitter);
Implement_Urho3D_Skybox(pyclass_Var_Urho3D_Skybox);
Implement_Urho3D_TerrainPatch(pyclass_Var_Urho3D_TerrainPatch);
Implement_Urho3D_IKConstraint(pyclass_Var_Urho3D_IKConstraint);
Implement_Urho3D_IKEffector(pyclass_Var_Urho3D_IKEffector);
Implement_Urho3D_NamedPipe(pyclass_Var_Urho3D_NamedPipe);
Implement_Urho3D_LuaScriptInstance(pyclass_Var_Urho3D_LuaScriptInstance);
Implement_Urho3D_NavigationMesh(pyclass_Var_Urho3D_NavigationMesh);
Implement_Urho3D_NavArea(pyclass_Var_Urho3D_NavArea);
Implement_Urho3D_Obstacle(pyclass_Var_Urho3D_Obstacle);
Implement_Urho3D_Navigable(pyclass_Var_Urho3D_Navigable);
Implement_Urho3D_PhysicsWorld(pyclass_Var_Urho3D_PhysicsWorld);
Implement_Urho3D_CollisionShape(pyclass_Var_Urho3D_CollisionShape);
Implement_Urho3D_LogicComponent(pyclass_Var_Urho3D_LogicComponent);
Implement_Urho3D_RaycastVehicle(pyclass_Var_Urho3D_RaycastVehicle);
Implement_Urho3D_SplinePath(pyclass_Var_Urho3D_SplinePath);
Implement_Urho3D_Menu(pyclass_Var_Urho3D_Menu);
Implement_Urho3D_ScrollView(pyclass_Var_Urho3D_ScrollView);
Implement_Urho3D_Sprite(pyclass_Var_Urho3D_Sprite);
Implement_Urho3D_UIComponent(pyclass_Var_Urho3D_UIComponent);
Implement_Urho3D_Renderer2D(pyclass_Var_Urho3D_Renderer2D);
Implement_Urho3D_RigidBody2D(pyclass_Var_Urho3D_RigidBody2D);
Implement_Urho3D_PhysicsWorld2D(pyclass_Var_Urho3D_PhysicsWorld2D);
Implement_Urho3D_TileMapLayer2D(pyclass_Var_Urho3D_TileMapLayer2D);
Implement_Urho3D_TileMap2D(pyclass_Var_Urho3D_TileMap2D);
Implement_Urho3D_IntVector3(pyclass_Var_Urho3D_IntVector3);
Implement_Urho3D_Scene(pyclass_Var_Urho3D_Scene);
Implement_Urho3D_ScriptInstance(pyclass_Var_Urho3D_ScriptInstance);
Implement_Urho3D_DebugRenderer(pyclass_Var_Urho3D_DebugRenderer);
Implement_Urho3D_Camera(pyclass_Var_Urho3D_Camera);
Implement_Urho3D_Light(pyclass_Var_Urho3D_Light);
Implement_Urho3D_Zone(pyclass_Var_Urho3D_Zone);
Implement_Urho3D_Resource(pyclass_Var_Urho3D_Resource);
Implement_Urho3D_XMLFile(pyclass_Var_Urho3D_XMLFile);
Implement_Urho3D_XPathQuery(pyclass_Var_Urho3D_XPathQuery);
Implement_Urho3D_JSONFile(pyclass_Var_Urho3D_JSONFile);
Implement_Urho3D_EventProfiler(pyclass_Var_Urho3D_EventProfiler);
Implement_Urho3D_Font(pyclass_Var_Urho3D_Font);
Implement_Urho3D_AnimationController(pyclass_Var_Urho3D_AnimationController);
Implement_Urho3D_Shader(pyclass_Var_Urho3D_Shader);
Implement_Urho3D_ParticleEffect(pyclass_Var_Urho3D_ParticleEffect);
Implement_Urho3D_StaticModelGroup(pyclass_Var_Urho3D_StaticModelGroup);
Implement_Urho3D_IKSolver(pyclass_Var_Urho3D_IKSolver);
Implement_Urho3D_LuaFile(pyclass_Var_Urho3D_LuaFile);
Implement_Urho3D_CrowdManager(pyclass_Var_Urho3D_CrowdManager);
Implement_Urho3D_DynamicNavigationMesh(pyclass_Var_Urho3D_DynamicNavigationMesh);
Implement_Urho3D_RigidBody(pyclass_Var_Urho3D_RigidBody);
Implement_Urho3D_SmoothedTransform(pyclass_Var_Urho3D_SmoothedTransform);
Implement_Urho3D_UnknownComponent(pyclass_Var_Urho3D_UnknownComponent);
Implement_Urho3D_ProgressBar(pyclass_Var_Urho3D_ProgressBar);
Implement_Urho3D_Drawable2D(pyclass_Var_Urho3D_Drawable2D);
Implement_Urho3D_StaticSprite2D(pyclass_Var_Urho3D_StaticSprite2D);
Implement_Urho3D_AnimatedSprite2D(pyclass_Var_Urho3D_AnimatedSprite2D);
Implement_Urho3D_CollisionShape2D(pyclass_Var_Urho3D_CollisionShape2D);
Implement_Urho3D_CollisionChain2D(pyclass_Var_Urho3D_CollisionChain2D);
Implement_Urho3D_CollisionEdge2D(pyclass_Var_Urho3D_CollisionEdge2D);
Implement_Urho3D_Constraint2D(pyclass_Var_Urho3D_Constraint2D);
Implement_Urho3D_ConstraintFriction2D(pyclass_Var_Urho3D_ConstraintFriction2D);
Implement_Urho3D_ConstraintMotor2D(pyclass_Var_Urho3D_ConstraintMotor2D);
Implement_Urho3D_ConstraintPrismatic2D(pyclass_Var_Urho3D_ConstraintPrismatic2D);
Implement_Urho3D_ConstraintRevolute2D(pyclass_Var_Urho3D_ConstraintRevolute2D);
Implement_Urho3D_ConstraintWeld2D(pyclass_Var_Urho3D_ConstraintWeld2D);
Implement_Urho3D_ParticleEffect2D(pyclass_Var_Urho3D_ParticleEffect2D);
Implement_Urho3D_StretchableSprite2D(pyclass_Var_Urho3D_StretchableSprite2D);
Implement_Urho3D_VectorBuffer(pyclass_Var_Urho3D_VectorBuffer);
Implement_Urho3D_ValueAnimation(pyclass_Var_Urho3D_ValueAnimation);
Implement_Urho3D_File(pyclass_Var_Urho3D_File);
Implement_Urho3D_ResourceWithMetadata(pyclass_Var_Urho3D_ResourceWithMetadata);
Implement_Urho3D_Technique(pyclass_Var_Urho3D_Technique);
Implement_Urho3D_SoundListener(pyclass_Var_Urho3D_SoundListener);
Implement_Urho3D_ListView(pyclass_Var_Urho3D_ListView);
Implement_Urho3D_CustomGeometry(pyclass_Var_Urho3D_CustomGeometry);
Implement_Urho3D_RibbonTrail(pyclass_Var_Urho3D_RibbonTrail);
Implement_Urho3D_MemoryBuffer(pyclass_Var_Urho3D_MemoryBuffer);
Implement_Urho3D_OffMeshConnection(pyclass_Var_Urho3D_OffMeshConnection);
Implement_Urho3D_Constraint(pyclass_Var_Urho3D_Constraint);
Implement_Urho3D_FontGlyph(pyclass_Var_Urho3D_FontGlyph);
Implement_Urho3D_Sprite2D(pyclass_Var_Urho3D_Sprite2D);
Implement_Urho3D_SpriteSheet2D(pyclass_Var_Urho3D_SpriteSheet2D);
Implement_Urho3D_CollisionCircle2D(pyclass_Var_Urho3D_CollisionCircle2D);
Implement_Urho3D_ConstraintDistance2D(pyclass_Var_Urho3D_ConstraintDistance2D);
Implement_Urho3D_ConstraintMouse2D(pyclass_Var_Urho3D_ConstraintMouse2D);
Implement_Urho3D_ConstraintRope2D(pyclass_Var_Urho3D_ConstraintRope2D);
Implement_Urho3D_ParticleEmitter2D(pyclass_Var_Urho3D_ParticleEmitter2D);
Implement_Urho3D_ScriptFile(pyclass_Var_Urho3D_ScriptFile);
Implement_Urho3D_Sound(pyclass_Var_Urho3D_Sound);
Implement_Urho3D_Model(pyclass_Var_Urho3D_Model);
Implement_Urho3D_DropDownList(pyclass_Var_Urho3D_DropDownList);
Implement_Urho3D_Image(pyclass_Var_Urho3D_Image);
Implement_Urho3D_Terrain(pyclass_Var_Urho3D_Terrain);
Implement_Urho3D_CrowdAgent(pyclass_Var_Urho3D_CrowdAgent);
Implement_Urho3D_PListFile(pyclass_Var_Urho3D_PListFile);
Implement_Urho3D_AnimationSet2D(pyclass_Var_Urho3D_AnimationSet2D);
Implement_Urho3D_CollisionPolygon2D(pyclass_Var_Urho3D_CollisionPolygon2D);
Implement_Urho3D_ConstraintPulley2D(pyclass_Var_Urho3D_ConstraintPulley2D);
Implement_Urho3D_TmxFile2D(pyclass_Var_Urho3D_TmxFile2D);
Implement_Urho3D_ObjectAnimation(pyclass_Var_Urho3D_ObjectAnimation);
Implement_Urho3D_Texture(pyclass_Var_Urho3D_Texture);
Implement_Urho3D_TextureCube(pyclass_Var_Urho3D_TextureCube);
Implement_Urho3D_Texture2DArray(pyclass_Var_Urho3D_Texture2DArray);
Implement_Urho3D_NetworkPriority(pyclass_Var_Urho3D_NetworkPriority);
Implement_Urho3D_CollisionBox2D(pyclass_Var_Urho3D_CollisionBox2D);
Implement_Urho3D_ConstraintWheel2D(pyclass_Var_Urho3D_ConstraintWheel2D);
Implement_Urho3D_Material(pyclass_Var_Urho3D_Material);
Implement_Urho3D_Animation(pyclass_Var_Urho3D_Animation);
Implement_Urho3D_Text3D(pyclass_Var_Urho3D_Text3D);
Implement_Urho3D_Texture2D(pyclass_Var_Urho3D_Texture2D);
Implement_Urho3D_ConstraintGear2D(pyclass_Var_Urho3D_ConstraintGear2D);
Implement_Urho3D_Texture3D(pyclass_Var_Urho3D_Texture3D);

    //================================================
    // Implement Namespaces
    //================================================
    pyclass_Var_Urho3D
  .def("MakeHash", (unsigned int (*)(void *)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  .def("MakeHash", (unsigned int (*)(const void *)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  .def("MakeHash", (unsigned int (*)(const long long &)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  .def("MakeHash", (unsigned int (*)(const unsigned long long &)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  .def("MakeHash", (unsigned int (*)(const int &)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  .def("MakeHash", (unsigned int (*)(const unsigned int &)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  //.def("MakeHash", (unsigned int (*)(const short &)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
    //['short']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("MakeHash", (unsigned int (*)(const unsigned short &)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  .def("MakeHash", (unsigned int (*)(const char &)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  .def("MakeHash", (unsigned int (*)(const unsigned char &)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  .def("Swap", (void (*)(Urho3D::String &, Urho3D::String &)) &Urho3D::Swap, "todo: docstring", py::arg("first"), py::arg("second"))
  .def("Swap", (void (*)(Urho3D::VectorBase &, Urho3D::VectorBase &)) &Urho3D::Swap, "todo: docstring", py::arg("first"), py::arg("second"))
  .def("Swap", (void (*)(Urho3D::ListBase &, Urho3D::ListBase &)) &Urho3D::Swap, "todo: docstring", py::arg("first"), py::arg("second"))
  .def("Swap", (void (*)(Urho3D::HashBase &, Urho3D::HashBase &)) &Urho3D::Swap, "todo: docstring", py::arg("first"), py::arg("second"))
  // Operator Urho3D::String operator+(const char * lhs=None, const Urho3D::String & rhs=None) implemented in Urho3D::String
  // Operator Urho3D::String operator+(const wchar_t * lhs=None, const Urho3D::String & rhs=None) implemented in Urho3D::String
  .def("FloatToRawIntBits", (unsigned int (*)(float)) &Urho3D::FloatToRawIntBits, "todo: docstring", py::arg("value"))
  .def("IsPowerOfTwo", (bool (*)(unsigned int)) &Urho3D::IsPowerOfTwo, "todo: docstring", py::arg("value"))
  .def("NextPowerOfTwo", (unsigned int (*)(unsigned int)) &Urho3D::NextPowerOfTwo, "todo: docstring", py::arg("value"))
  .def("LogBaseTwo", (unsigned int (*)(unsigned int)) &Urho3D::LogBaseTwo, "todo: docstring", py::arg("value"))
  .def("CountSetBits", (unsigned int (*)(unsigned int)) &Urho3D::CountSetBits, "todo: docstring", py::arg("value"))
  .def("SDBMHash", (unsigned int (*)(unsigned int, unsigned char)) &Urho3D::SDBMHash, "todo: docstring", py::arg("hash"), py::arg("c"))
  .def("Random", (float (*)()) &Urho3D::Random, "todo: docstring")
  .def("Random", (float (*)(float)) &Urho3D::Random, "todo: docstring", py::arg("range"))
  .def("Random", (float (*)(float, float)) &Urho3D::Random, "todo: docstring", py::arg("min"), py::arg("max"))
  .def("Random", (int (*)(int)) &Urho3D::Random, "todo: docstring", py::arg("range"))
  .def("Random", (int (*)(int, int)) &Urho3D::Random, "todo: docstring", py::arg("min"), py::arg("max"))
  .def("RandomNormal", (float (*)(float, float)) &Urho3D::RandomNormal, "todo: docstring", py::arg("meanValue"), py::arg("variance"))
  .def("FloatToHalf", (unsigned short (*)(float)) &Urho3D::FloatToHalf, "todo: docstring", py::arg("value"))
  .def("HalfToFloat", (float (*)(unsigned short)) &Urho3D::HalfToFloat, "todo: docstring", py::arg("value"))
  // Operator Urho3D::Vector2 operator*(float lhs=None, const Urho3D::Vector2 & rhs=None) implemented in Urho3D::Vector2
  // Operator Urho3D::IntVector2 operator*(int lhs=None, const Urho3D::IntVector2 & rhs=None) implemented in Urho3D::IntVector2
  .def("VectorLerp", (Urho3D::Vector2 (*)(const Urho3D::Vector2 &, const Urho3D::Vector2 &, const Urho3D::Vector2 &)) &Urho3D::VectorLerp, "todo: docstring", py::arg("lhs"), py::arg("rhs"), py::arg("t"))
  .def("VectorMin", (Urho3D::Vector2 (*)(const Urho3D::Vector2 &, const Urho3D::Vector2 &)) &Urho3D::VectorMin, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("VectorMax", (Urho3D::Vector2 (*)(const Urho3D::Vector2 &, const Urho3D::Vector2 &)) &Urho3D::VectorMax, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("VectorFloor", (Urho3D::Vector2 (*)(const Urho3D::Vector2 &)) &Urho3D::VectorFloor, "todo: docstring", py::arg("vec"))
  .def("VectorRound", (Urho3D::Vector2 (*)(const Urho3D::Vector2 &)) &Urho3D::VectorRound, "todo: docstring", py::arg("vec"))
  .def("VectorCeil", (Urho3D::Vector2 (*)(const Urho3D::Vector2 &)) &Urho3D::VectorCeil, "todo: docstring", py::arg("vec"))
  .def("VectorFloorToInt", (Urho3D::IntVector2 (*)(const Urho3D::Vector2 &)) &Urho3D::VectorFloorToInt, "todo: docstring", py::arg("vec"))
  .def("VectorRoundToInt", (Urho3D::IntVector2 (*)(const Urho3D::Vector2 &)) &Urho3D::VectorRoundToInt, "todo: docstring", py::arg("vec"))
  .def("VectorCeilToInt", (Urho3D::IntVector2 (*)(const Urho3D::Vector2 &)) &Urho3D::VectorCeilToInt, "todo: docstring", py::arg("vec"))
  .def("VectorMin", (Urho3D::IntVector2 (*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::VectorMin, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("VectorMax", (Urho3D::IntVector2 (*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::VectorMax, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("StableRandom", (float (*)(const Urho3D::Vector2 &)) &Urho3D::StableRandom, "todo: docstring", py::arg("seed"))
  .def("StableRandom", (float (*)(float)) &Urho3D::StableRandom, "todo: docstring", py::arg("seed"))
  // Operator Urho3D::Vector3 operator*(float lhs=None, const Urho3D::Vector3 & rhs=None) implemented in Urho3D::Vector3
  // Operator Urho3D::IntVector3 operator*(int lhs=None, const Urho3D::IntVector3 & rhs=None) implemented in Urho3D::IntVector3
  .def("VectorLerp", (Urho3D::Vector3 (*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::VectorLerp, "todo: docstring", py::arg("lhs"), py::arg("rhs"), py::arg("t"))
  .def("VectorMin", (Urho3D::Vector3 (*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::VectorMin, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("VectorMax", (Urho3D::Vector3 (*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::VectorMax, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("VectorFloor", (Urho3D::Vector3 (*)(const Urho3D::Vector3 &)) &Urho3D::VectorFloor, "todo: docstring", py::arg("vec"))
  .def("VectorRound", (Urho3D::Vector3 (*)(const Urho3D::Vector3 &)) &Urho3D::VectorRound, "todo: docstring", py::arg("vec"))
  .def("VectorCeil", (Urho3D::Vector3 (*)(const Urho3D::Vector3 &)) &Urho3D::VectorCeil, "todo: docstring", py::arg("vec"))
  .def("VectorFloorToInt", (Urho3D::IntVector3 (*)(const Urho3D::Vector3 &)) &Urho3D::VectorFloorToInt, "todo: docstring", py::arg("vec"))
  .def("VectorRoundToInt", (Urho3D::IntVector3 (*)(const Urho3D::Vector3 &)) &Urho3D::VectorRoundToInt, "todo: docstring", py::arg("vec"))
  .def("VectorCeilToInt", (Urho3D::IntVector3 (*)(const Urho3D::Vector3 &)) &Urho3D::VectorCeilToInt, "todo: docstring", py::arg("vec"))
  .def("VectorMin", (Urho3D::IntVector3 (*)(const Urho3D::IntVector3 &, const Urho3D::IntVector3 &)) &Urho3D::VectorMin, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("VectorMax", (Urho3D::IntVector3 (*)(const Urho3D::IntVector3 &, const Urho3D::IntVector3 &)) &Urho3D::VectorMax, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("StableRandom", (float (*)(const Urho3D::Vector3 &)) &Urho3D::StableRandom, "todo: docstring", py::arg("seed"))
  // Operator Urho3D::Vector4 operator*(float lhs=None, const Urho3D::Vector4 & rhs=None) implemented in Urho3D::Vector4
  .def("VectorLerp", (Urho3D::Vector4 (*)(const Urho3D::Vector4 &, const Urho3D::Vector4 &, const Urho3D::Vector4 &)) &Urho3D::VectorLerp, "todo: docstring", py::arg("lhs"), py::arg("rhs"), py::arg("t"))
  .def("VectorMin", (Urho3D::Vector4 (*)(const Urho3D::Vector4 &, const Urho3D::Vector4 &)) &Urho3D::VectorMin, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("VectorMax", (Urho3D::Vector4 (*)(const Urho3D::Vector4 &, const Urho3D::Vector4 &)) &Urho3D::VectorMax, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("VectorFloor", (Urho3D::Vector4 (*)(const Urho3D::Vector4 &)) &Urho3D::VectorFloor, "todo: docstring", py::arg("vec"))
  .def("VectorRound", (Urho3D::Vector4 (*)(const Urho3D::Vector4 &)) &Urho3D::VectorRound, "todo: docstring", py::arg("vec"))
  .def("VectorCeil", (Urho3D::Vector4 (*)(const Urho3D::Vector4 &)) &Urho3D::VectorCeil, "todo: docstring", py::arg("vec"))
  // Operator Urho3D::Color operator*(float lhs=None, const Urho3D::Color & rhs=None) implemented in Urho3D::Color
  // Operator Urho3D::Matrix3 operator*(float lhs=None, const Urho3D::Matrix3 & rhs=None) implemented in Urho3D::Matrix3
  // Operator Urho3D::Matrix4 operator*(float lhs=None, const Urho3D::Matrix4 & rhs=None) implemented in Urho3D::Matrix4
  // Operator Urho3D::Matrix3x4 operator*(float lhs=None, const Urho3D::Matrix3x4 & rhs=None) implemented in Urho3D::Matrix3x4
  .def("CompareDrawables", (bool (*)(Urho3D::Drawable *, Urho3D::Drawable *)) &Urho3D::CompareDrawables, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("GetResourceName", (const Urho3D::String & (*)(Urho3D::Resource *)) &Urho3D::GetResourceName, "todo: docstring", py::arg("resource"))
  .def("GetResourceType", (Urho3D::StringHash (*)(Urho3D::Resource *, Urho3D::StringHash)) &Urho3D::GetResourceType, "todo: docstring", py::arg("resource"), py::arg("defaultType"))
  .def("GetResourceRef", (Urho3D::ResourceRef (*)(Urho3D::Resource *, Urho3D::StringHash)) &Urho3D::GetResourceRef, "todo: docstring", py::arg("resource"), py::arg("defaultType"))
  .def("FromString", (const char * (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::String (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (bool (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (float (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (double (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (int (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (unsigned int (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Color (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::IntRect (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::IntVector2 (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::IntVector3 (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Quaternion (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Rect (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Vector2 (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Vector3 (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Vector4 (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Variant (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Matrix3 (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Matrix3x4 (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("FromString", (Urho3D::Matrix4 (*)(const char *)) &Urho3D::FromString, "todo: docstring", py::arg("source"))
  .def("CompareLights", (bool (*)(Urho3D::Light *, Urho3D::Light *)) &Urho3D::CompareLights, "todo: docstring", py::arg("lhs"), py::arg("rhs"))
  .def("MakeHash", (unsigned int (*)(const Urho3D::TextureUnit &)) &Urho3D::MakeHash, "todo: docstring", py::arg("value"))
  // Operator Urho3D::Matrix2 operator*(float lhs=None, const Urho3D::Matrix2 & rhs=None) implemented in Urho3D::Matrix2
  //.def("ToBtVector3", (btVector3 (*)(const Urho3D::Vector3 &)) &Urho3D::ToBtVector3, "todo: docstring", py::arg("vector"))
    //['Urho3D::Vector3']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("ToBtQuaternion", (btQuaternion (*)(const Urho3D::Quaternion &)) &Urho3D::ToBtQuaternion, "todo: docstring", py::arg("quaternion"))
    //['Urho3D::Quaternion']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("ToVector3", (Urho3D::Vector3 (*)(const btVector3 &)) &Urho3D::ToVector3, "todo: docstring", py::arg("vector"))
    //['btVector3']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("ToQuaternion", (Urho3D::Quaternion (*)(const btQuaternion &)) &Urho3D::ToQuaternion, "todo: docstring", py::arg("quaternion"))
    //['btQuaternion']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("HasWorldScaleChanged", (bool (*)(const Urho3D::Vector3 &, const Urho3D::Vector3 &)) &Urho3D::HasWorldScaleChanged, "todo: docstring", py::arg("oldWorldScale"), py::arg("newWorldScale"))
  //.def("ToColor", (Urho3D::Color (*)(const b2Color &)) &Urho3D::ToColor, "todo: docstring", py::arg("color"))
    //['b2Color']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("ToB2Vec2", (b2Vec2 (*)(const Urho3D::Vector2 &)) &Urho3D::ToB2Vec2, "todo: docstring", py::arg("vector"))
    //['Urho3D::Vector2']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("ToVector2", (Urho3D::Vector2 (*)(const b2Vec2 &)) &Urho3D::ToVector2, "todo: docstring", py::arg("vec2"))
    //['b2Vec2']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("ToB2Vec2", (b2Vec2 (*)(const Urho3D::Vector3 &)) &Urho3D::ToB2Vec2, "todo: docstring", py::arg("vector"))
    //['Urho3D::Vector3']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("ToVector3", (Urho3D::Vector3 (*)(const b2Vec2 &)) &Urho3D::ToVector3, "todo: docstring", py::arg("vec2"))
    //['b2Vec2']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
;


    //================================================
    // MANUAL:
    //================================================
    // Turn on implicit conversions
    py::implicitly_convertible<bool, Urho3D::Variant>();
    py::implicitly_convertible<int, Urho3D::Variant>();
    py::implicitly_convertible<float, Urho3D::Variant>();
    py::implicitly_convertible<Urho3D::String, Urho3D::Variant>();
    py::implicitly_convertible<Urho3D::String, Urho3D::StringHash>();

/*
{'btVector3': [(btVector3 operator+(const btVector3 & v1=None, const btVector3 & v2=None), False), (btVector3 operator*(const btVector3 & v1=None, const btVector3 & v2=None), False), (btVector3 operator-(const btVector3 & v1=None, const btVector3 & v2=None), False), (btVector3 operator-(const btVector3 & v=None), False), (btVector3 operator*(const btVector3 & v=None, const float & s=None), False), (btVector3 operator*(const float & s=None, const btVector3 & v=None), True), (btVector3 operator/(const btVector3 & v=None, const float & s=None), False), (btVector3 operator/(const btVector3 & v1=None, const btVector3 & v2=None), False), (btQuaternion operator*(const btVector3 & w=None, const btQuaternion & q=None), False), (btVector3 operator*(const btVector3 & v=None, const btMatrix3x3 & m=None), False)], 'btQuaternion': [(btQuaternion operator*(const btQuaternion & q1=None, const btQuaternion & q2=None), False), (btQuaternion operator*(const btQuaternion & q=None, const btVector3 & w=None), False)], 'btMatrix3x3': [(btMatrix3x3 operator*(const btMatrix3x3 & m=None, const float & k=None), False), (btMatrix3x3 operator+(const btMatrix3x3 & m1=None, const btMatrix3x3 & m2=None), False), (btMatrix3x3 operator-(const btMatrix3x3 & m1=None, const btMatrix3x3 & m2=None), False), (btVector3 operator*(const btMatrix3x3 & m=None, const btVector3 & v=None), False), (btMatrix3x3 operator*(const btMatrix3x3 & m1=None, const btMatrix3x3 & m2=None), False), (bool operator==(const btMatrix3x3 & m1=None, const btMatrix3x3 & m2=None), False)], 'btTransform': [(bool operator==(const btTransform & t1=None, const btTransform & t2=None), False)], 'b2Vec2': [(b2Vec2 operator+(const b2Vec2 & a=None, const b2Vec2 & b=None), False), (b2Vec2 operator-(const b2Vec2 & a=None, const b2Vec2 & b=None), False), (b2Vec2 operator*(float s=None, const b2Vec2 & a=None), True), (bool operator==(const b2Vec2 & a=None, const b2Vec2 & b=None), False), (bool operator!=(const b2Vec2 & a=None, const b2Vec2 & b=None), False)], 'b2Vec3': [(b2Vec3 operator*(float s=None, const b2Vec3 & a=None), True), (b2Vec3 operator+(const b2Vec3 & a=None, const b2Vec3 & b=None), False), (b2Vec3 operator-(const b2Vec3 & a=None, const b2Vec3 & b=None), False)], 'b2Mat22': [(b2Mat22 operator+(const b2Mat22 & A=None, const b2Mat22 & B=None), False)], 'Urho3D::String': [(Urho3D::String operator+(const char * lhs=None, const Urho3D::String & rhs=None), True), (Urho3D::String operator+(const wchar_t * lhs=None, const Urho3D::String & rhs=None), True)], 'Urho3D::Vector2': [(Urho3D::Vector2 operator*(float lhs=None, const Urho3D::Vector2 & rhs=None), True)], 'Urho3D::IntVector2': [(Urho3D::IntVector2 operator*(int lhs=None, const Urho3D::IntVector2 & rhs=None), True)], 'Urho3D::Vector3': [(Urho3D::Vector3 operator*(float lhs=None, const Urho3D::Vector3 & rhs=None), True)], 'Urho3D::IntVector3': [(Urho3D::IntVector3 operator*(int lhs=None, const Urho3D::IntVector3 & rhs=None), True)], 'Urho3D::Vector4': [(Urho3D::Vector4 operator*(float lhs=None, const Urho3D::Vector4 & rhs=None), True)], 'Urho3D::Color': [(Urho3D::Color operator*(float lhs=None, const Urho3D::Color & rhs=None), True)], 'Urho3D::Matrix3': [(Urho3D::Matrix3 operator*(float lhs=None, const Urho3D::Matrix3 & rhs=None), True)], 'Urho3D::Matrix4': [(Urho3D::Matrix4 operator*(float lhs=None, const Urho3D::Matrix4 & rhs=None), True)], 'Urho3D::Matrix3x4': [(Urho3D::Matrix3x4 operator*(float lhs=None, const Urho3D::Matrix3x4 & rhs=None), True)], 'Urho3D::Matrix2': [(Urho3D::Matrix2 operator*(float lhs=None, const Urho3D::Matrix2 & rhs=None), True)]}
*/




// create context object for us
Urho3D::SharedPtr<Urho3D::Context> c = new Urho3D::Context();
c.AddRef()
m.add_object("context", c);
// Register a callback function that is invoked when the BaseClass object is colelcted
py::cpp_function cleanup_callback(
    [](py::handle weakref) {
        // perform cleanup here -- this function is called with the GIL held
        //m.attr("context");
        weakref.dec_ref(); // release weak reference
    }
);

// Create a weak reference with a cleanup callback and initially leak it
(void) py::weakref(m.attr("Context"), cleanup_callback).release();

}


/*{'Urho3D::ShaderVariation': ['@Urho3D::GPUObject'], 'Urho3D::ShaderProgram': ['@Urho3D::GPUObject'], 'Urho3D::IndexBuffer': ['@Urho3D::GPUObject'], 'Urho3D::ConstantBuffer': ['@Urho3D::GPUObject'], 'Urho3D::HttpRequest': ['@Urho3D::Deserializer', '@Urho3D::Thread'], 'Urho3D::RocketSys': ['Rocket::Core::RenderInterface'], 'Urho3D::VertexBuffer': ['@Urho3D::GPUObject'], 'Urho3D::FileWatcher': ['@Urho3D::Thread'], 'Urho3D::LuaScript': ['@Urho3D::LuaScriptEventListener'], 'Urho3D::Octree': ['@Urho3D::Octant'], 'Urho3D::NamedPipe': ['@Urho3D::AbstractFile'], 'Urho3D::LuaScriptInstance': ['@Urho3D::LuaScriptEventListener'], 'Urho3D::PhysicsWorld': ['btIDebugDraw'], 'Urho3D::PhysicsWorld2D': ['b2ContactListener', 'b2Draw'], 'Urho3D::ScriptInstance': ['@Urho3D::ScriptEventListener'], 'Urho3D::RigidBody': ['btMotionState'], 'Urho3D::File': ['@Urho3D::AbstractFile'], 'Urho3D::ScriptFile': ['@Urho3D::ScriptEventListener'], 'Urho3D::Texture': ['@Urho3D::GPUObject']}*/


