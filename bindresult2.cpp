

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
void Implement_Enum_Bindings(py::module& m);

// Current binding:
void Implement_Class_Bindings_2(py::module& m)
{
py::module& pyclass_Var_Urho3D = m;

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


Implement_Enum_Bindings(m)

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

// Class ResourceRouter Implementation
pyclass_Var_Urho3D_ResourceRouter
  //.def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
    // Abstract class ResourceRouter -> no init
  .def("Route", (void (Urho3D::ResourceRouter::*)(Urho3D::String &, Urho3D::ResourceRequest)) &Urho3D::ResourceRouter::Route, "todo: docstring", py::arg("name"), py::arg("requestType"))
// Class Variables:
;

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

// Class EventProfiler Implementation
pyclass_Var_Urho3D_EventProfiler
  .def("GetType", (Urho3D::StringHash (Urho3D::EventProfiler::*)() const) &Urho3D::EventProfiler::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::EventProfiler::*)() const) &Urho3D::EventProfiler::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::EventProfiler::*)() const) &Urho3D::EventProfiler::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  .def("BeginBlock", (void (Urho3D::EventProfiler::*)(Urho3D::StringHash)) &Urho3D::EventProfiler::BeginBlock, "todo: docstring", py::arg("eventID"))
// Class Variables:
;

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

// Class ListView Implementation
pyclass_Var_Urho3D_ListView
  .def("GetType", (Urho3D::StringHash (Urho3D::ListView::*)() const) &Urho3D::ListView::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ListView::*)() const) &Urho3D::ListView::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ListView::*)() const) &Urho3D::ListView::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ListView", (void (Urho3D::ListView::*)()) &Urho3D::ListView::~ListView, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("OnKey", (void (Urho3D::ListView::*)(Urho3D::Key, Urho3D::FlagSet<Urho3D::MouseButton, void>, Urho3D::FlagSet<Urho3D::Qualifier, void>)) &Urho3D::ListView::OnKey, "todo: docstring", py::arg("key"), py::arg("buttons"), py::arg("qualifiers"))
    //['Urho3D::Key', 'Urho3D::FlagSet<Urho3D::MouseButton, void>', 'Urho3D::FlagSet<Urho3D::Qualifier, void>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnResize", (void (Urho3D::ListView::*)(const Urho3D::IntVector2 &, const Urho3D::IntVector2 &)) &Urho3D::ListView::OnResize, "todo: docstring", py::arg("newSize"), py::arg("delta"))
  .def("UpdateInternalLayout", (void (Urho3D::ListView::*)()) &Urho3D::ListView::UpdateInternalLayout, "todo: docstring")
  .def("DisableInternalLayoutUpdate", (void (Urho3D::ListView::*)()) &Urho3D::ListView::DisableInternalLayoutUpdate, "todo: docstring")
  .def("EnableInternalLayoutUpdate", (void (Urho3D::ListView::*)()) &Urho3D::ListView::EnableInternalLayoutUpdate, "todo: docstring")
  .def("AddItem", (void (Urho3D::ListView::*)(Urho3D::UIElement *)) &Urho3D::ListView::AddItem, "todo: docstring", py::arg("item"))
  .def("InsertItem", (void (Urho3D::ListView::*)(unsigned int, Urho3D::UIElement *, Urho3D::UIElement *)) &Urho3D::ListView::InsertItem, "todo: docstring", py::arg("index"), py::arg("item"), py::arg("parentItem")=nullptr)
  .def("RemoveItem", (void (Urho3D::ListView::*)(Urho3D::UIElement *, unsigned int)) &Urho3D::ListView::RemoveItem, "todo: docstring", py::arg("item"), py::arg("index")=0)
  .def("RemoveItem", (void (Urho3D::ListView::*)(unsigned int)) &Urho3D::ListView::RemoveItem, "todo: docstring", py::arg("index"))
  .def("RemoveAllItems", (void (Urho3D::ListView::*)()) &Urho3D::ListView::RemoveAllItems, "todo: docstring")
  .def("SetSelection", (void (Urho3D::ListView::*)(unsigned int)) &Urho3D::ListView::SetSelection, "todo: docstring", py::arg("index"))
  //.def("SetSelections", (void (Urho3D::ListView::*)(const Urho3D::PODVector<unsigned int> &)) &Urho3D::ListView::SetSelections, "todo: docstring", py::arg("indices"))
    //['Urho3D::PODVector<unsigned int>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("AddSelection", (void (Urho3D::ListView::*)(unsigned int)) &Urho3D::ListView::AddSelection, "todo: docstring", py::arg("index"))
  .def("RemoveSelection", (void (Urho3D::ListView::*)(unsigned int)) &Urho3D::ListView::RemoveSelection, "todo: docstring", py::arg("index"))
  .def("ToggleSelection", (void (Urho3D::ListView::*)(unsigned int)) &Urho3D::ListView::ToggleSelection, "todo: docstring", py::arg("index"))
  .def("ChangeSelection", (void (Urho3D::ListView::*)(int, bool)) &Urho3D::ListView::ChangeSelection, "todo: docstring", py::arg("delta"), py::arg("additive")=false)
  .def("ClearSelection", (void (Urho3D::ListView::*)()) &Urho3D::ListView::ClearSelection, "todo: docstring")
  .def("SetHighlightMode", (void (Urho3D::ListView::*)(Urho3D::HighlightMode)) &Urho3D::ListView::SetHighlightMode, "todo: docstring", py::arg("mode"))
  .def("SetMultiselect", (void (Urho3D::ListView::*)(bool)) &Urho3D::ListView::SetMultiselect, "todo: docstring", py::arg("enable"))
  .def("SetHierarchyMode", (void (Urho3D::ListView::*)(bool)) &Urho3D::ListView::SetHierarchyMode, "todo: docstring", py::arg("enable"))
  .def("SetBaseIndent", (void (Urho3D::ListView::*)(int)) &Urho3D::ListView::SetBaseIndent, "todo: docstring", py::arg("baseIndent"))
  .def("SetClearSelectionOnDefocus", (void (Urho3D::ListView::*)(bool)) &Urho3D::ListView::SetClearSelectionOnDefocus, "todo: docstring", py::arg("enable"))
  .def("SetSelectOnClickEnd", (void (Urho3D::ListView::*)(bool)) &Urho3D::ListView::SetSelectOnClickEnd, "todo: docstring", py::arg("enable"))
  .def("Expand", (void (Urho3D::ListView::*)(unsigned int, bool, bool)) &Urho3D::ListView::Expand, "todo: docstring", py::arg("index"), py::arg("enable"), py::arg("recursive")=false)
  .def("ToggleExpand", (void (Urho3D::ListView::*)(unsigned int, bool)) &Urho3D::ListView::ToggleExpand, "todo: docstring", py::arg("index"), py::arg("recursive")=false)
  .def("GetNumItems", (unsigned int (Urho3D::ListView::*)() const) &Urho3D::ListView::GetNumItems, "todo: docstring")
  .def("GetItem", (Urho3D::UIElement * (Urho3D::ListView::*)(unsigned int) const) &Urho3D::ListView::GetItem, "todo: docstring", py::arg("index"))
  //.def("GetItems", (PODVector<Urho3D::UIElement *> (Urho3D::ListView::*)() const) &Urho3D::ListView::GetItems, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("FindItem", (unsigned int (Urho3D::ListView::*)(Urho3D::UIElement *) const) &Urho3D::ListView::FindItem, "todo: docstring", py::arg("item"))
  .def("GetSelection", (unsigned int (Urho3D::ListView::*)() const) &Urho3D::ListView::GetSelection, "todo: docstring")
  //.def("GetSelections", (const PODVector<unsigned int> & (Urho3D::ListView::*)() const) &Urho3D::ListView::GetSelections, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("CopySelectedItemsToClipboard", (void (Urho3D::ListView::*)() const) &Urho3D::ListView::CopySelectedItemsToClipboard, "todo: docstring")
  .def("GetSelectedItem", (Urho3D::UIElement * (Urho3D::ListView::*)() const) &Urho3D::ListView::GetSelectedItem, "todo: docstring")
  //.def("GetSelectedItems", (PODVector<Urho3D::UIElement *> (Urho3D::ListView::*)() const) &Urho3D::ListView::GetSelectedItems, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("IsSelected", (bool (Urho3D::ListView::*)(unsigned int) const) &Urho3D::ListView::IsSelected, "todo: docstring", py::arg("index"))
  .def("IsExpanded", (bool (Urho3D::ListView::*)(unsigned int) const) &Urho3D::ListView::IsExpanded, "todo: docstring", py::arg("index"))
  .def("GetHighlightMode", (Urho3D::HighlightMode (Urho3D::ListView::*)() const) &Urho3D::ListView::GetHighlightMode, "todo: docstring")
  .def("GetMultiselect", (bool (Urho3D::ListView::*)() const) &Urho3D::ListView::GetMultiselect, "todo: docstring")
  .def("GetClearSelectionOnDefocus", (bool (Urho3D::ListView::*)() const) &Urho3D::ListView::GetClearSelectionOnDefocus, "todo: docstring")
  .def("GetSelectOnClickEnd", (bool (Urho3D::ListView::*)() const) &Urho3D::ListView::GetSelectOnClickEnd, "todo: docstring")
  .def("GetHierarchyMode", (bool (Urho3D::ListView::*)() const) &Urho3D::ListView::GetHierarchyMode, "todo: docstring")
  .def("GetBaseIndent", (int (Urho3D::ListView::*)() const) &Urho3D::ListView::GetBaseIndent, "todo: docstring")
  .def("EnsureItemVisibility", (void (Urho3D::ListView::*)(unsigned int)) &Urho3D::ListView::EnsureItemVisibility, "todo: docstring", py::arg("index"))
  .def("EnsureItemVisibility", (void (Urho3D::ListView::*)(Urho3D::UIElement *)) &Urho3D::ListView::EnsureItemVisibility, "todo: docstring", py::arg("item"))
// Class Variables:
;

// Class CustomGeometry Implementation
pyclass_Var_Urho3D_CustomGeometry
  .def("GetType", (Urho3D::StringHash (Urho3D::CustomGeometry::*)() const) &Urho3D::CustomGeometry::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CustomGeometry::*)() const) &Urho3D::CustomGeometry::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CustomGeometry::*)() const) &Urho3D::CustomGeometry::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CustomGeometry", (void (Urho3D::CustomGeometry::*)()) &Urho3D::CustomGeometry::~CustomGeometry, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("ProcessRayQuery", (void (Urho3D::CustomGeometry::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::CustomGeometry::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetLodGeometry", (Urho3D::Geometry * (Urho3D::CustomGeometry::*)(unsigned int, unsigned int)) &Urho3D::CustomGeometry::GetLodGeometry, "todo: docstring", py::arg("batchIndex"), py::arg("level"))
  .def("GetNumOccluderTriangles", (unsigned int (Urho3D::CustomGeometry::*)()) &Urho3D::CustomGeometry::GetNumOccluderTriangles, "todo: docstring")
  .def("DrawOcclusion", (bool (Urho3D::CustomGeometry::*)(Urho3D::OcclusionBuffer *)) &Urho3D::CustomGeometry::DrawOcclusion, "todo: docstring", py::arg("buffer"))
  .def("Clear", (void (Urho3D::CustomGeometry::*)()) &Urho3D::CustomGeometry::Clear, "todo: docstring")
  .def("SetNumGeometries", (void (Urho3D::CustomGeometry::*)(unsigned int)) &Urho3D::CustomGeometry::SetNumGeometries, "todo: docstring", py::arg("num"))
  .def("SetDynamic", (void (Urho3D::CustomGeometry::*)(bool)) &Urho3D::CustomGeometry::SetDynamic, "todo: docstring", py::arg("enable"))
  .def("BeginGeometry", (void (Urho3D::CustomGeometry::*)(unsigned int, Urho3D::PrimitiveType)) &Urho3D::CustomGeometry::BeginGeometry, "todo: docstring", py::arg("index"), py::arg("type"))
  .def("DefineVertex", (void (Urho3D::CustomGeometry::*)(const Urho3D::Vector3 &)) &Urho3D::CustomGeometry::DefineVertex, "todo: docstring", py::arg("position"))
  .def("DefineNormal", (void (Urho3D::CustomGeometry::*)(const Urho3D::Vector3 &)) &Urho3D::CustomGeometry::DefineNormal, "todo: docstring", py::arg("normal"))
  .def("DefineColor", (void (Urho3D::CustomGeometry::*)(const Urho3D::Color &)) &Urho3D::CustomGeometry::DefineColor, "todo: docstring", py::arg("color"))
  .def("DefineTexCoord", (void (Urho3D::CustomGeometry::*)(const Urho3D::Vector2 &)) &Urho3D::CustomGeometry::DefineTexCoord, "todo: docstring", py::arg("texCoord"))
  .def("DefineTangent", (void (Urho3D::CustomGeometry::*)(const Urho3D::Vector4 &)) &Urho3D::CustomGeometry::DefineTangent, "todo: docstring", py::arg("tangent"))
  .def("DefineGeometry", (void (Urho3D::CustomGeometry::*)(unsigned int, Urho3D::PrimitiveType, unsigned int, bool, bool, bool, bool)) &Urho3D::CustomGeometry::DefineGeometry, "todo: docstring", py::arg("index"), py::arg("type"), py::arg("numVertices"), py::arg("hasNormals"), py::arg("hasColors"), py::arg("hasTexCoords"), py::arg("hasTangents"))
  .def("Commit", (void (Urho3D::CustomGeometry::*)()) &Urho3D::CustomGeometry::Commit, "todo: docstring")
  .def("SetMaterial", (void (Urho3D::CustomGeometry::*)(Urho3D::Material *)) &Urho3D::CustomGeometry::SetMaterial, "todo: docstring", py::arg("material"))
  .def("SetMaterial", (bool (Urho3D::CustomGeometry::*)(unsigned int, Urho3D::Material *)) &Urho3D::CustomGeometry::SetMaterial, "todo: docstring", py::arg("index"), py::arg("material"))
  .def("GetNumGeometries", (unsigned int (Urho3D::CustomGeometry::*)() const) &Urho3D::CustomGeometry::GetNumGeometries, "todo: docstring")
  .def("GetNumVertices", (unsigned int (Urho3D::CustomGeometry::*)(unsigned int) const) &Urho3D::CustomGeometry::GetNumVertices, "todo: docstring", py::arg("index"))
  .def("IsDynamic", (bool (Urho3D::CustomGeometry::*)() const) &Urho3D::CustomGeometry::IsDynamic, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::CustomGeometry::*)(unsigned int) const) &Urho3D::CustomGeometry::GetMaterial, "todo: docstring", py::arg("index")=0)
  //.def("GetVertices", (Vector<PODVector<Urho3D::CustomGeometryVertex> > & (Urho3D::CustomGeometry::*)()) &Urho3D::CustomGeometry::GetVertices, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetVertex", (Urho3D::CustomGeometryVertex * (Urho3D::CustomGeometry::*)(unsigned int, unsigned int)) &Urho3D::CustomGeometry::GetVertex, "todo: docstring", py::arg("geometryIndex"), py::arg("vertexNum"))
    //['unsigned int', 'unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("SetGeometryDataAttr", (void (Urho3D::CustomGeometry::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::CustomGeometry::SetGeometryDataAttr, "todo: docstring", py::arg("value"))
  .def("SetMaterialsAttr", (void (Urho3D::CustomGeometry::*)(const Urho3D::ResourceRefList &)) &Urho3D::CustomGeometry::SetMaterialsAttr, "todo: docstring", py::arg("value"))
  //.def("GetGeometryDataAttr", (PODVector<unsigned char> (Urho3D::CustomGeometry::*)() const) &Urho3D::CustomGeometry::GetGeometryDataAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetMaterialsAttr", (const Urho3D::ResourceRefList & (Urho3D::CustomGeometry::*)() const) &Urho3D::CustomGeometry::GetMaterialsAttr, "todo: docstring")
// Class Variables:
;

// Class RibbonTrail Implementation
pyclass_Var_Urho3D_RibbonTrail
  .def("GetType", (Urho3D::StringHash (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~RibbonTrail", (void (Urho3D::RibbonTrail::*)()) &Urho3D::RibbonTrail::~RibbonTrail, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  //.def("ProcessRayQuery", (void (Urho3D::RibbonTrail::*)(const Urho3D::RayOctreeQuery &, Urho3D::PODVector<Urho3D::RayQueryResult> &)) &Urho3D::RibbonTrail::ProcessRayQuery, "todo: docstring", py::arg("query"), py::arg("results"))
    //['Urho3D::RayOctreeQuery', 'Urho3D::PODVector<Urho3D::RayQueryResult>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::RibbonTrail::*)()) &Urho3D::RibbonTrail::OnSetEnabled, "todo: docstring")
  //.def("Update", (void (Urho3D::RibbonTrail::*)(const Urho3D::FrameInfo &)) &Urho3D::RibbonTrail::Update, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateBatches", (void (Urho3D::RibbonTrail::*)(const Urho3D::FrameInfo &)) &Urho3D::RibbonTrail::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateGeometry", (void (Urho3D::RibbonTrail::*)(const Urho3D::FrameInfo &)) &Urho3D::RibbonTrail::UpdateGeometry, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetUpdateGeometryType", (Urho3D::UpdateGeometryType (Urho3D::RibbonTrail::*)()) &Urho3D::RibbonTrail::GetUpdateGeometryType, "todo: docstring")
  .def("SetMaterial", (void (Urho3D::RibbonTrail::*)(Urho3D::Material *)) &Urho3D::RibbonTrail::SetMaterial, "todo: docstring", py::arg("material"))
  .def("SetMaterialAttr", (void (Urho3D::RibbonTrail::*)(const Urho3D::ResourceRef &)) &Urho3D::RibbonTrail::SetMaterialAttr, "todo: docstring", py::arg("value"))
  .def("SetVertexDistance", (void (Urho3D::RibbonTrail::*)(float)) &Urho3D::RibbonTrail::SetVertexDistance, "todo: docstring", py::arg("length"))
  .def("SetWidth", (void (Urho3D::RibbonTrail::*)(float)) &Urho3D::RibbonTrail::SetWidth, "todo: docstring", py::arg("width"))
  .def("SetStartColor", (void (Urho3D::RibbonTrail::*)(const Urho3D::Color &)) &Urho3D::RibbonTrail::SetStartColor, "todo: docstring", py::arg("color"))
  .def("SetEndColor", (void (Urho3D::RibbonTrail::*)(const Urho3D::Color &)) &Urho3D::RibbonTrail::SetEndColor, "todo: docstring", py::arg("color"))
  .def("SetStartScale", (void (Urho3D::RibbonTrail::*)(float)) &Urho3D::RibbonTrail::SetStartScale, "todo: docstring", py::arg("startScale"))
  .def("SetEndScale", (void (Urho3D::RibbonTrail::*)(float)) &Urho3D::RibbonTrail::SetEndScale, "todo: docstring", py::arg("endScale"))
  .def("SetTrailType", (void (Urho3D::RibbonTrail::*)(Urho3D::TrailType)) &Urho3D::RibbonTrail::SetTrailType, "todo: docstring", py::arg("type"))
  .def("SetBaseVelocity", (void (Urho3D::RibbonTrail::*)(const Urho3D::Vector3 &)) &Urho3D::RibbonTrail::SetBaseVelocity, "todo: docstring", py::arg("baseVelocity"))
  .def("SetSorted", (void (Urho3D::RibbonTrail::*)(bool)) &Urho3D::RibbonTrail::SetSorted, "todo: docstring", py::arg("enable"))
  .def("SetLifetime", (void (Urho3D::RibbonTrail::*)(float)) &Urho3D::RibbonTrail::SetLifetime, "todo: docstring", py::arg("time"))
  .def("SetEmitting", (void (Urho3D::RibbonTrail::*)(bool)) &Urho3D::RibbonTrail::SetEmitting, "todo: docstring", py::arg("emitting"))
  .def("SetUpdateInvisible", (void (Urho3D::RibbonTrail::*)(bool)) &Urho3D::RibbonTrail::SetUpdateInvisible, "todo: docstring", py::arg("enable"))
  .def("SetTailColumn", (void (Urho3D::RibbonTrail::*)(unsigned int)) &Urho3D::RibbonTrail::SetTailColumn, "todo: docstring", py::arg("tailColumn"))
  .def("SetAnimationLodBias", (void (Urho3D::RibbonTrail::*)(float)) &Urho3D::RibbonTrail::SetAnimationLodBias, "todo: docstring", py::arg("bias"))
  .def("Commit", (void (Urho3D::RibbonTrail::*)()) &Urho3D::RibbonTrail::Commit, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetMaterial, "todo: docstring")
  .def("GetMaterialAttr", (Urho3D::ResourceRef (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetMaterialAttr, "todo: docstring")
  .def("GetVertexDistance", (float (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetVertexDistance, "todo: docstring")
  .def("GetWidth", (float (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetWidth, "todo: docstring")
  .def("GetStartColor", (const Urho3D::Color & (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetStartColor, "todo: docstring")
  .def("GetEndColor", (const Urho3D::Color & (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetEndColor, "todo: docstring")
  .def("GetStartScale", (float (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetStartScale, "todo: docstring")
  .def("GetEndScale", (float (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetEndScale, "todo: docstring")
  .def("IsSorted", (bool (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::IsSorted, "todo: docstring")
  .def("GetLifetime", (float (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetLifetime, "todo: docstring")
  .def("GetAnimationLodBias", (float (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetAnimationLodBias, "todo: docstring")
  .def("GetTrailType", (Urho3D::TrailType (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetTrailType, "todo: docstring")
  .def("GetBaseVelocity", (const Urho3D::Vector3 & (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetBaseVelocity, "todo: docstring")
  .def("GetTailColumn", (unsigned int (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetTailColumn, "todo: docstring")
  .def("IsEmitting", (bool (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::IsEmitting, "todo: docstring")
  .def("GetUpdateInvisible", (bool (Urho3D::RibbonTrail::*)() const) &Urho3D::RibbonTrail::GetUpdateInvisible, "todo: docstring")
// Class Variables:
;

// Class MemoryBuffer Implementation
pyclass_Var_Urho3D_MemoryBuffer
  .def(py::init<void *, unsigned int>(), "todo: constructor docstring")
  .def(py::init<const void *, unsigned int>(), "todo: constructor docstring")
  .def(py::init<Urho3D::PODVector<unsigned char> &>(), "todo: constructor docstring")
  .def(py::init<const Urho3D::PODVector<unsigned char> &>(), "todo: constructor docstring")
  .def("Read", (unsigned int (Urho3D::MemoryBuffer::*)(void *, unsigned int)) &Urho3D::MemoryBuffer::Read, "todo: docstring", py::arg("dest"), py::arg("size"))
  .def("Seek", (unsigned int (Urho3D::MemoryBuffer::*)(unsigned int)) &Urho3D::MemoryBuffer::Seek, "todo: docstring", py::arg("position"))
  .def("Write", (unsigned int (Urho3D::MemoryBuffer::*)(const void *, unsigned int)) &Urho3D::MemoryBuffer::Write, "todo: docstring", py::arg("data"), py::arg("size"))
  .def("GetData", (unsigned char * (Urho3D::MemoryBuffer::*)()) &Urho3D::MemoryBuffer::GetData, "todo: docstring")
  .def("IsReadOnly", (bool (Urho3D::MemoryBuffer::*)()) &Urho3D::MemoryBuffer::IsReadOnly, "todo: docstring")
// Class Variables:
;

// Class OffMeshConnection Implementation
pyclass_Var_Urho3D_OffMeshConnection
  .def("GetType", (Urho3D::StringHash (Urho3D::OffMeshConnection::*)() const) &Urho3D::OffMeshConnection::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::OffMeshConnection::*)() const) &Urho3D::OffMeshConnection::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::OffMeshConnection::*)() const) &Urho3D::OffMeshConnection::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~OffMeshConnection", (void (Urho3D::OffMeshConnection::*)()) &Urho3D::OffMeshConnection::~OffMeshConnection, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::OffMeshConnection::*)()) &Urho3D::OffMeshConnection::ApplyAttributes, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::OffMeshConnection::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::OffMeshConnection::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetEndPoint", (void (Urho3D::OffMeshConnection::*)(Urho3D::Node *)) &Urho3D::OffMeshConnection::SetEndPoint, "todo: docstring", py::arg("node"))
  .def("SetRadius", (void (Urho3D::OffMeshConnection::*)(float)) &Urho3D::OffMeshConnection::SetRadius, "todo: docstring", py::arg("radius"))
  .def("SetBidirectional", (void (Urho3D::OffMeshConnection::*)(bool)) &Urho3D::OffMeshConnection::SetBidirectional, "todo: docstring", py::arg("enabled"))
  .def("SetMask", (void (Urho3D::OffMeshConnection::*)(unsigned int)) &Urho3D::OffMeshConnection::SetMask, "todo: docstring", py::arg("newMask"))
  .def("SetAreaID", (void (Urho3D::OffMeshConnection::*)(unsigned int)) &Urho3D::OffMeshConnection::SetAreaID, "todo: docstring", py::arg("newAreaID"))
  .def("GetEndPoint", (Urho3D::Node * (Urho3D::OffMeshConnection::*)() const) &Urho3D::OffMeshConnection::GetEndPoint, "todo: docstring")
  .def("GetRadius", (float (Urho3D::OffMeshConnection::*)() const) &Urho3D::OffMeshConnection::GetRadius, "todo: docstring")
  .def("IsBidirectional", (bool (Urho3D::OffMeshConnection::*)() const) &Urho3D::OffMeshConnection::IsBidirectional, "todo: docstring")
  .def("GetMask", (unsigned int (Urho3D::OffMeshConnection::*)() const) &Urho3D::OffMeshConnection::GetMask, "todo: docstring")
  .def("GetAreaID", (unsigned int (Urho3D::OffMeshConnection::*)() const) &Urho3D::OffMeshConnection::GetAreaID, "todo: docstring")
// Class Variables:
;

// Class Constraint Implementation
pyclass_Var_Urho3D_Constraint
  .def("GetType", (Urho3D::StringHash (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Constraint", (void (Urho3D::Constraint::*)()) &Urho3D::Constraint::~Constraint, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::Constraint::*)()) &Urho3D::Constraint::ApplyAttributes, "todo: docstring")
  .def("OnSetEnabled", (void (Urho3D::Constraint::*)()) &Urho3D::Constraint::OnSetEnabled, "todo: docstring")
  //.def("GetDependencyNodes", (void (Urho3D::Constraint::*)(Urho3D::PODVector<Urho3D::Node *> &)) &Urho3D::Constraint::GetDependencyNodes, "todo: docstring", py::arg("dest"))
    //['Urho3D::PODVector<Urho3D::Node']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("DrawDebugGeometry", (void (Urho3D::Constraint::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::Constraint::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetConstraintType", (void (Urho3D::Constraint::*)(Urho3D::ConstraintType)) &Urho3D::Constraint::SetConstraintType, "todo: docstring", py::arg("type"))
  .def("SetOtherBody", (void (Urho3D::Constraint::*)(Urho3D::RigidBody *)) &Urho3D::Constraint::SetOtherBody, "todo: docstring", py::arg("body"))
  .def("SetPosition", (void (Urho3D::Constraint::*)(const Urho3D::Vector3 &)) &Urho3D::Constraint::SetPosition, "todo: docstring", py::arg("position"))
  .def("SetRotation", (void (Urho3D::Constraint::*)(const Urho3D::Quaternion &)) &Urho3D::Constraint::SetRotation, "todo: docstring", py::arg("rotation"))
  .def("SetAxis", (void (Urho3D::Constraint::*)(const Urho3D::Vector3 &)) &Urho3D::Constraint::SetAxis, "todo: docstring", py::arg("axis"))
  .def("SetOtherPosition", (void (Urho3D::Constraint::*)(const Urho3D::Vector3 &)) &Urho3D::Constraint::SetOtherPosition, "todo: docstring", py::arg("position"))
  .def("SetOtherRotation", (void (Urho3D::Constraint::*)(const Urho3D::Quaternion &)) &Urho3D::Constraint::SetOtherRotation, "todo: docstring", py::arg("rotation"))
  .def("SetOtherAxis", (void (Urho3D::Constraint::*)(const Urho3D::Vector3 &)) &Urho3D::Constraint::SetOtherAxis, "todo: docstring", py::arg("axis"))
  .def("SetWorldPosition", (void (Urho3D::Constraint::*)(const Urho3D::Vector3 &)) &Urho3D::Constraint::SetWorldPosition, "todo: docstring", py::arg("position"))
  .def("SetHighLimit", (void (Urho3D::Constraint::*)(const Urho3D::Vector2 &)) &Urho3D::Constraint::SetHighLimit, "todo: docstring", py::arg("limit"))
  .def("SetLowLimit", (void (Urho3D::Constraint::*)(const Urho3D::Vector2 &)) &Urho3D::Constraint::SetLowLimit, "todo: docstring", py::arg("limit"))
  .def("SetERP", (void (Urho3D::Constraint::*)(float)) &Urho3D::Constraint::SetERP, "todo: docstring", py::arg("erp"))
  .def("SetCFM", (void (Urho3D::Constraint::*)(float)) &Urho3D::Constraint::SetCFM, "todo: docstring", py::arg("cfm"))
  .def("SetDisableCollision", (void (Urho3D::Constraint::*)(bool)) &Urho3D::Constraint::SetDisableCollision, "todo: docstring", py::arg("disable"))
  .def("GetPhysicsWorld", (Urho3D::PhysicsWorld * (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetPhysicsWorld, "todo: docstring")
  //.def("GetConstraint", (btTypedConstraint * (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetConstraint, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetConstraintType", (Urho3D::ConstraintType (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetConstraintType, "todo: docstring")
  .def("GetOwnBody", (Urho3D::RigidBody * (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetOwnBody, "todo: docstring")
  .def("GetOtherBody", (Urho3D::RigidBody * (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetOtherBody, "todo: docstring")
  .def("GetPosition", (const Urho3D::Vector3 & (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetPosition, "todo: docstring")
  .def("GetRotation", (const Urho3D::Quaternion & (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetRotation, "todo: docstring")
  .def("GetOtherPosition", (const Urho3D::Vector3 & (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetOtherPosition, "todo: docstring")
  .def("GetOtherRotation", (const Urho3D::Quaternion & (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetOtherRotation, "todo: docstring")
  .def("GetWorldPosition", (Urho3D::Vector3 (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetWorldPosition, "todo: docstring")
  .def("GetHighLimit", (const Urho3D::Vector2 & (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetHighLimit, "todo: docstring")
  .def("GetLowLimit", (const Urho3D::Vector2 & (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetLowLimit, "todo: docstring")
  .def("GetERP", (float (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetERP, "todo: docstring")
  .def("GetCFM", (float (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetCFM, "todo: docstring")
  .def("GetDisableCollision", (bool (Urho3D::Constraint::*)() const) &Urho3D::Constraint::GetDisableCollision, "todo: docstring")
  .def("ReleaseConstraint", (void (Urho3D::Constraint::*)()) &Urho3D::Constraint::ReleaseConstraint, "todo: docstring")
  .def("ApplyFrames", (void (Urho3D::Constraint::*)()) &Urho3D::Constraint::ApplyFrames, "todo: docstring")
// Class Variables:
;

// Class FontGlyph Implementation
pyclass_Var_Urho3D_FontGlyph
// Class Variables:
  .def_readwrite("x",&Urho3D::FontGlyph::x_, "todo: var docstring")//short
  .def_readwrite("y",&Urho3D::FontGlyph::y_, "todo: var docstring")//short
  .def_readwrite("texWidth",&Urho3D::FontGlyph::texWidth_, "todo: var docstring")//short
  .def_readwrite("texHeight",&Urho3D::FontGlyph::texHeight_, "todo: var docstring")//short
  .def_readwrite("width",&Urho3D::FontGlyph::width_, "todo: var docstring")//float
  .def_readwrite("height",&Urho3D::FontGlyph::height_, "todo: var docstring")//float
  .def_readwrite("offsetX",&Urho3D::FontGlyph::offsetX_, "todo: var docstring")//float
  .def_readwrite("offsetY",&Urho3D::FontGlyph::offsetY_, "todo: var docstring")//float
  .def_readwrite("advanceX",&Urho3D::FontGlyph::advanceX_, "todo: var docstring")//float
  .def_readwrite("page",&Urho3D::FontGlyph::page_, "todo: var docstring")//unsigned int
  .def_readwrite("used",&Urho3D::FontGlyph::used_, "todo: var docstring")//bool
;

// Class Sprite2D Implementation
pyclass_Var_Urho3D_Sprite2D
  .def("GetType", (Urho3D::StringHash (Urho3D::Sprite2D::*)() const) &Urho3D::Sprite2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Sprite2D::*)() const) &Urho3D::Sprite2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Sprite2D::*)() const) &Urho3D::Sprite2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Sprite2D", (void (Urho3D::Sprite2D::*)()) &Urho3D::Sprite2D::~Sprite2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Sprite2D::*)(Urho3D::Deserializer &)) &Urho3D::Sprite2D::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::Sprite2D::*)()) &Urho3D::Sprite2D::EndLoad, "todo: docstring")
  .def("SetTexture", (void (Urho3D::Sprite2D::*)(Urho3D::Texture2D *)) &Urho3D::Sprite2D::SetTexture, "todo: docstring", py::arg("texture"))
  .def("SetRectangle", (void (Urho3D::Sprite2D::*)(const Urho3D::IntRect &)) &Urho3D::Sprite2D::SetRectangle, "todo: docstring", py::arg("rectangle"))
  .def("SetHotSpot", (void (Urho3D::Sprite2D::*)(const Urho3D::Vector2 &)) &Urho3D::Sprite2D::SetHotSpot, "todo: docstring", py::arg("hotSpot"))
  .def("SetOffset", (void (Urho3D::Sprite2D::*)(const Urho3D::IntVector2 &)) &Urho3D::Sprite2D::SetOffset, "todo: docstring", py::arg("offset"))
  .def("SetTextureEdgeOffset", (void (Urho3D::Sprite2D::*)(float)) &Urho3D::Sprite2D::SetTextureEdgeOffset, "todo: docstring", py::arg("offset"))
  .def("SetSpriteSheet", (void (Urho3D::Sprite2D::*)(Urho3D::SpriteSheet2D *)) &Urho3D::Sprite2D::SetSpriteSheet, "todo: docstring", py::arg("spriteSheet"))
  .def("GetTexture", (Urho3D::Texture2D * (Urho3D::Sprite2D::*)() const) &Urho3D::Sprite2D::GetTexture, "todo: docstring")
  .def("GetRectangle", (const Urho3D::IntRect & (Urho3D::Sprite2D::*)() const) &Urho3D::Sprite2D::GetRectangle, "todo: docstring")
  .def("GetHotSpot", (const Urho3D::Vector2 & (Urho3D::Sprite2D::*)() const) &Urho3D::Sprite2D::GetHotSpot, "todo: docstring")
  .def("GetOffset", (const Urho3D::IntVector2 & (Urho3D::Sprite2D::*)() const) &Urho3D::Sprite2D::GetOffset, "todo: docstring")
  .def("GetTextureEdgeOffset", (float (Urho3D::Sprite2D::*)() const) &Urho3D::Sprite2D::GetTextureEdgeOffset, "todo: docstring")
  .def("GetSpriteSheet", (Urho3D::SpriteSheet2D * (Urho3D::Sprite2D::*)() const) &Urho3D::Sprite2D::GetSpriteSheet, "todo: docstring")
  .def("GetDrawRectangle", (bool (Urho3D::Sprite2D::*)(Urho3D::Rect &, bool, bool) const) &Urho3D::Sprite2D::GetDrawRectangle, "todo: docstring", py::arg("rect"), py::arg("flipX")=false, py::arg("flipY")=false)
  .def("GetDrawRectangle", (bool (Urho3D::Sprite2D::*)(Urho3D::Rect &, const Urho3D::Vector2 &, bool, bool) const) &Urho3D::Sprite2D::GetDrawRectangle, "todo: docstring", py::arg("rect"), py::arg("hotSpot"), py::arg("flipX")=false, py::arg("flipY")=false)
  .def("GetTextureRectangle", (bool (Urho3D::Sprite2D::*)(Urho3D::Rect &, bool, bool) const) &Urho3D::Sprite2D::GetTextureRectangle, "todo: docstring", py::arg("rect"), py::arg("flipX")=false, py::arg("flipY")=false)
// Class Variables:
;

// Class SpriteSheet2D Implementation
pyclass_Var_Urho3D_SpriteSheet2D
  .def("GetType", (Urho3D::StringHash (Urho3D::SpriteSheet2D::*)() const) &Urho3D::SpriteSheet2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::SpriteSheet2D::*)() const) &Urho3D::SpriteSheet2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::SpriteSheet2D::*)() const) &Urho3D::SpriteSheet2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~SpriteSheet2D", (void (Urho3D::SpriteSheet2D::*)()) &Urho3D::SpriteSheet2D::~SpriteSheet2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::SpriteSheet2D::*)(Urho3D::Deserializer &)) &Urho3D::SpriteSheet2D::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::SpriteSheet2D::*)()) &Urho3D::SpriteSheet2D::EndLoad, "todo: docstring")
  .def("SetTexture", (void (Urho3D::SpriteSheet2D::*)(Urho3D::Texture2D *)) &Urho3D::SpriteSheet2D::SetTexture, "todo: docstring", py::arg("texture"))
  .def("DefineSprite", (void (Urho3D::SpriteSheet2D::*)(const Urho3D::String &, const Urho3D::IntRect &, const Urho3D::Vector2 &, const Urho3D::IntVector2 &)) &Urho3D::SpriteSheet2D::DefineSprite, "todo: docstring", py::arg("name"), py::arg("rectangle"), py::arg("hotSpot")=Vector2(0.5f,0.5f), py::arg("offset")=IntVector2::ZERO)
  .def("GetTexture", (Urho3D::Texture2D * (Urho3D::SpriteSheet2D::*)() const) &Urho3D::SpriteSheet2D::GetTexture, "todo: docstring")
  .def("GetSprite", (Urho3D::Sprite2D * (Urho3D::SpriteSheet2D::*)(const Urho3D::String &) const) &Urho3D::SpriteSheet2D::GetSprite, "todo: docstring", py::arg("name"))
  //.def("GetSpriteMapping", (const HashMap<Urho3D::String, SharedPtr<Urho3D::Sprite2D> > & (Urho3D::SpriteSheet2D::*)() const) &Urho3D::SpriteSheet2D::GetSpriteMapping, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;

// Class CollisionCircle2D Implementation
pyclass_Var_Urho3D_CollisionCircle2D
  .def("GetType", (Urho3D::StringHash (Urho3D::CollisionCircle2D::*)() const) &Urho3D::CollisionCircle2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CollisionCircle2D::*)() const) &Urho3D::CollisionCircle2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CollisionCircle2D::*)() const) &Urho3D::CollisionCircle2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CollisionCircle2D", (void (Urho3D::CollisionCircle2D::*)()) &Urho3D::CollisionCircle2D::~CollisionCircle2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetRadius", (void (Urho3D::CollisionCircle2D::*)(float)) &Urho3D::CollisionCircle2D::SetRadius, "todo: docstring", py::arg("radius"))
  .def("SetCenter", (void (Urho3D::CollisionCircle2D::*)(const Urho3D::Vector2 &)) &Urho3D::CollisionCircle2D::SetCenter, "todo: docstring", py::arg("center"))
  .def("SetCenter", (void (Urho3D::CollisionCircle2D::*)(float, float)) &Urho3D::CollisionCircle2D::SetCenter, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("GetRadius", (float (Urho3D::CollisionCircle2D::*)() const) &Urho3D::CollisionCircle2D::GetRadius, "todo: docstring")
  .def("GetCenter", (const Urho3D::Vector2 & (Urho3D::CollisionCircle2D::*)() const) &Urho3D::CollisionCircle2D::GetCenter, "todo: docstring")
// Class Variables:
;

// Class ConstraintDistance2D Implementation
pyclass_Var_Urho3D_ConstraintDistance2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintDistance2D::*)() const) &Urho3D::ConstraintDistance2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintDistance2D::*)() const) &Urho3D::ConstraintDistance2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintDistance2D::*)() const) &Urho3D::ConstraintDistance2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintDistance2D", (void (Urho3D::ConstraintDistance2D::*)()) &Urho3D::ConstraintDistance2D::~ConstraintDistance2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetOwnerBodyAnchor", (void (Urho3D::ConstraintDistance2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintDistance2D::SetOwnerBodyAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetOtherBodyAnchor", (void (Urho3D::ConstraintDistance2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintDistance2D::SetOtherBodyAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetFrequencyHz", (void (Urho3D::ConstraintDistance2D::*)(float)) &Urho3D::ConstraintDistance2D::SetFrequencyHz, "todo: docstring", py::arg("frequencyHz"))
  .def("SetDampingRatio", (void (Urho3D::ConstraintDistance2D::*)(float)) &Urho3D::ConstraintDistance2D::SetDampingRatio, "todo: docstring", py::arg("dampingRatio"))
  .def("SetLength", (void (Urho3D::ConstraintDistance2D::*)(float)) &Urho3D::ConstraintDistance2D::SetLength, "todo: docstring", py::arg("length"))
  .def("GetOwnerBodyAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintDistance2D::*)() const) &Urho3D::ConstraintDistance2D::GetOwnerBodyAnchor, "todo: docstring")
  .def("GetOtherBodyAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintDistance2D::*)() const) &Urho3D::ConstraintDistance2D::GetOtherBodyAnchor, "todo: docstring")
  .def("GetFrequencyHz", (float (Urho3D::ConstraintDistance2D::*)() const) &Urho3D::ConstraintDistance2D::GetFrequencyHz, "todo: docstring")
  .def("GetDampingRatio", (float (Urho3D::ConstraintDistance2D::*)() const) &Urho3D::ConstraintDistance2D::GetDampingRatio, "todo: docstring")
  .def("GetLength", (float (Urho3D::ConstraintDistance2D::*)() const) &Urho3D::ConstraintDistance2D::GetLength, "todo: docstring")
// Class Variables:
;

// Class ConstraintMouse2D Implementation
pyclass_Var_Urho3D_ConstraintMouse2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintMouse2D::*)() const) &Urho3D::ConstraintMouse2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintMouse2D::*)() const) &Urho3D::ConstraintMouse2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintMouse2D::*)() const) &Urho3D::ConstraintMouse2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintMouse2D", (void (Urho3D::ConstraintMouse2D::*)()) &Urho3D::ConstraintMouse2D::~ConstraintMouse2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetTarget", (void (Urho3D::ConstraintMouse2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintMouse2D::SetTarget, "todo: docstring", py::arg("target"))
  .def("SetMaxForce", (void (Urho3D::ConstraintMouse2D::*)(float)) &Urho3D::ConstraintMouse2D::SetMaxForce, "todo: docstring", py::arg("maxForce"))
  .def("SetFrequencyHz", (void (Urho3D::ConstraintMouse2D::*)(float)) &Urho3D::ConstraintMouse2D::SetFrequencyHz, "todo: docstring", py::arg("frequencyHz"))
  .def("SetDampingRatio", (void (Urho3D::ConstraintMouse2D::*)(float)) &Urho3D::ConstraintMouse2D::SetDampingRatio, "todo: docstring", py::arg("dampingRatio"))
  .def("GetTarget", (const Urho3D::Vector2 & (Urho3D::ConstraintMouse2D::*)() const) &Urho3D::ConstraintMouse2D::GetTarget, "todo: docstring")
  .def("GetMaxForce", (float (Urho3D::ConstraintMouse2D::*)() const) &Urho3D::ConstraintMouse2D::GetMaxForce, "todo: docstring")
  .def("GetFrequencyHz", (float (Urho3D::ConstraintMouse2D::*)() const) &Urho3D::ConstraintMouse2D::GetFrequencyHz, "todo: docstring")
  .def("GetDampingRatio", (float (Urho3D::ConstraintMouse2D::*)() const) &Urho3D::ConstraintMouse2D::GetDampingRatio, "todo: docstring")
// Class Variables:
;

// Class ConstraintRope2D Implementation
pyclass_Var_Urho3D_ConstraintRope2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintRope2D::*)() const) &Urho3D::ConstraintRope2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintRope2D::*)() const) &Urho3D::ConstraintRope2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintRope2D::*)() const) &Urho3D::ConstraintRope2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintRope2D", (void (Urho3D::ConstraintRope2D::*)()) &Urho3D::ConstraintRope2D::~ConstraintRope2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetOwnerBodyAnchor", (void (Urho3D::ConstraintRope2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintRope2D::SetOwnerBodyAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetOtherBodyAnchor", (void (Urho3D::ConstraintRope2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintRope2D::SetOtherBodyAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetMaxLength", (void (Urho3D::ConstraintRope2D::*)(float)) &Urho3D::ConstraintRope2D::SetMaxLength, "todo: docstring", py::arg("maxLength"))
  .def("GetOwnerBodyAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintRope2D::*)() const) &Urho3D::ConstraintRope2D::GetOwnerBodyAnchor, "todo: docstring")
  .def("GetOtherBodyAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintRope2D::*)() const) &Urho3D::ConstraintRope2D::GetOtherBodyAnchor, "todo: docstring")
  .def("GetMaxLength", (float (Urho3D::ConstraintRope2D::*)() const) &Urho3D::ConstraintRope2D::GetMaxLength, "todo: docstring")
// Class Variables:
;

// Class ParticleEmitter2D Implementation
pyclass_Var_Urho3D_ParticleEmitter2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ParticleEmitter2D", (void (Urho3D::ParticleEmitter2D::*)()) &Urho3D::ParticleEmitter2D::~ParticleEmitter2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("OnSetEnabled", (void (Urho3D::ParticleEmitter2D::*)()) &Urho3D::ParticleEmitter2D::OnSetEnabled, "todo: docstring")
  .def("SetEffect", (void (Urho3D::ParticleEmitter2D::*)(Urho3D::ParticleEffect2D *)) &Urho3D::ParticleEmitter2D::SetEffect, "todo: docstring", py::arg("effect"))
  .def("SetSprite", (void (Urho3D::ParticleEmitter2D::*)(Urho3D::Sprite2D *)) &Urho3D::ParticleEmitter2D::SetSprite, "todo: docstring", py::arg("sprite"))
  .def("SetBlendMode", (void (Urho3D::ParticleEmitter2D::*)(Urho3D::BlendMode)) &Urho3D::ParticleEmitter2D::SetBlendMode, "todo: docstring", py::arg("blendMode"))
  .def("SetMaxParticles", (void (Urho3D::ParticleEmitter2D::*)(unsigned int)) &Urho3D::ParticleEmitter2D::SetMaxParticles, "todo: docstring", py::arg("maxParticles"))
  .def("SetEmitting", (void (Urho3D::ParticleEmitter2D::*)(bool)) &Urho3D::ParticleEmitter2D::SetEmitting, "todo: docstring", py::arg("enable"))
  .def("GetEffect", (Urho3D::ParticleEffect2D * (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::GetEffect, "todo: docstring")
  .def("GetSprite", (Urho3D::Sprite2D * (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::GetSprite, "todo: docstring")
  .def("GetBlendMode", (Urho3D::BlendMode (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::GetBlendMode, "todo: docstring")
  .def("GetMaxParticles", (unsigned int (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::GetMaxParticles, "todo: docstring")
  .def("SetParticleEffectAttr", (void (Urho3D::ParticleEmitter2D::*)(const Urho3D::ResourceRef &)) &Urho3D::ParticleEmitter2D::SetParticleEffectAttr, "todo: docstring", py::arg("value"))
  .def("GetParticleEffectAttr", (Urho3D::ResourceRef (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::GetParticleEffectAttr, "todo: docstring")
  .def("SetSpriteAttr", (void (Urho3D::ParticleEmitter2D::*)(const Urho3D::ResourceRef &)) &Urho3D::ParticleEmitter2D::SetSpriteAttr, "todo: docstring", py::arg("value"))
  .def("GetSpriteAttr", (Urho3D::ResourceRef (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::GetSpriteAttr, "todo: docstring")
  .def("IsEmitting", (bool (Urho3D::ParticleEmitter2D::*)() const) &Urho3D::ParticleEmitter2D::IsEmitting, "todo: docstring")
// Class Variables:
;

// Class ScriptFile Implementation
pyclass_Var_Urho3D_ScriptFile
  .def("GetType", (Urho3D::StringHash (Urho3D::ScriptFile::*)() const) &Urho3D::ScriptFile::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ScriptFile::*)() const) &Urho3D::ScriptFile::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ScriptFile::*)() const) &Urho3D::ScriptFile::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ScriptFile", (void (Urho3D::ScriptFile::*)()) &Urho3D::ScriptFile::~ScriptFile, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::ScriptFile::*)(Urho3D::Deserializer &)) &Urho3D::ScriptFile::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::ScriptFile::*)()) &Urho3D::ScriptFile::EndLoad, "todo: docstring")
  .def("AddEventHandler", (void (Urho3D::ScriptFile::*)(Urho3D::StringHash, const Urho3D::String &)) &Urho3D::ScriptFile::AddEventHandler, "todo: docstring", py::arg("eventType"), py::arg("handlerName"))
  .def("AddEventHandler", (void (Urho3D::ScriptFile::*)(Urho3D::Object *, Urho3D::StringHash, const Urho3D::String &)) &Urho3D::ScriptFile::AddEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventType"), py::arg("handlerName"))
  .def("RemoveEventHandler", (void (Urho3D::ScriptFile::*)(Urho3D::StringHash)) &Urho3D::ScriptFile::RemoveEventHandler, "todo: docstring", py::arg("eventType"))
  .def("RemoveEventHandler", (void (Urho3D::ScriptFile::*)(Urho3D::Object *, Urho3D::StringHash)) &Urho3D::ScriptFile::RemoveEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventType"))
  .def("RemoveEventHandlers", (void (Urho3D::ScriptFile::*)(Urho3D::Object *)) &Urho3D::ScriptFile::RemoveEventHandlers, "todo: docstring", py::arg("sender"))
  .def("RemoveEventHandlers", (void (Urho3D::ScriptFile::*)()) &Urho3D::ScriptFile::RemoveEventHandlers, "todo: docstring")
  //.def("RemoveEventHandlersExcept", (void (Urho3D::ScriptFile::*)(const Urho3D::PODVector<Urho3D::StringHash> &)) &Urho3D::ScriptFile::RemoveEventHandlersExcept, "todo: docstring", py::arg("exceptions"))
    //['Urho3D::PODVector<Urho3D::StringHash>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("HasEventHandler", (bool (Urho3D::ScriptFile::*)(Urho3D::StringHash) const) &Urho3D::ScriptFile::HasEventHandler, "todo: docstring", py::arg("eventType"))
  .def("HasEventHandler", (bool (Urho3D::ScriptFile::*)(Urho3D::Object *, Urho3D::StringHash) const) &Urho3D::ScriptFile::HasEventHandler, "todo: docstring", py::arg("sender"), py::arg("eventType"))
  .def("Execute", (bool (Urho3D::ScriptFile::*)(const Urho3D::String &, const Urho3D::Vector<Urho3D::Variant> &, Urho3D::Variant *, bool)) &Urho3D::ScriptFile::Execute, "todo: docstring", py::arg("declaration"), py::arg("parameters")=Variant::emptyVariantVector, py::arg("functionReturn")=nullptr, py::arg("unprepare")=true)
  //.def("Execute", (bool (Urho3D::ScriptFile::*)(asIScriptFunction *, const Urho3D::Vector<Urho3D::Variant> &, Urho3D::Variant *, bool)) &Urho3D::ScriptFile::Execute, "todo: docstring", py::arg("function"), py::arg("parameters")=Variant::emptyVariantVector, py::arg("functionReturn")=nullptr, py::arg("unprepare")=true)
    //['asIScriptFunction', 'Urho3D::Vector<Urho3D::Variant>', 'Urho3D::Variant', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("Execute", (bool (Urho3D::ScriptFile::*)(asIScriptObject *, const Urho3D::String &, const Urho3D::Vector<Urho3D::Variant> &, Urho3D::Variant *, bool)) &Urho3D::ScriptFile::Execute, "todo: docstring", py::arg("object"), py::arg("declaration"), py::arg("parameters")=Variant::emptyVariantVector, py::arg("functionReturn")=nullptr, py::arg("unprepare")=true)
    //['asIScriptObject', 'Urho3D::String', 'Urho3D::Vector<Urho3D::Variant>', 'Urho3D::Variant', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("Execute", (bool (Urho3D::ScriptFile::*)(asIScriptObject *, asIScriptFunction *, const Urho3D::Vector<Urho3D::Variant> &, Urho3D::Variant *, bool)) &Urho3D::ScriptFile::Execute, "todo: docstring", py::arg("object"), py::arg("method"), py::arg("parameters")=Variant::emptyVariantVector, py::arg("functionReturn")=nullptr, py::arg("unprepare")=true)
    //['asIScriptObject', 'asIScriptFunction', 'Urho3D::Vector<Urho3D::Variant>', 'Urho3D::Variant', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("DelayedExecute", (void (Urho3D::ScriptFile::*)(float, bool, const Urho3D::String &, const Urho3D::Vector<Urho3D::Variant> &)) &Urho3D::ScriptFile::DelayedExecute, "todo: docstring", py::arg("delay"), py::arg("repeat"), py::arg("declaration"), py::arg("parameters")=Variant::emptyVariantVector)
  .def("ClearDelayedExecute", (void (Urho3D::ScriptFile::*)(const Urho3D::String &)) &Urho3D::ScriptFile::ClearDelayedExecute, "todo: docstring", py::arg("declaration")=String::EMPTY)
  //.def("CreateObject", (asIScriptObject * (Urho3D::ScriptFile::*)(const Urho3D::String &, bool)) &Urho3D::ScriptFile::CreateObject, "todo: docstring", py::arg("className"), py::arg("useInterface")=false)
    //['Urho3D::String', 'bool']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("SaveByteCode", (bool (Urho3D::ScriptFile::*)(Urho3D::Serializer &)) &Urho3D::ScriptFile::SaveByteCode, "todo: docstring", py::arg("dest"))
  //.def("GetScriptModule", (asIScriptModule * (Urho3D::ScriptFile::*)() const) &Urho3D::ScriptFile::GetScriptModule, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetFunction", (asIScriptFunction * (Urho3D::ScriptFile::*)(const Urho3D::String &)) &Urho3D::ScriptFile::GetFunction, "todo: docstring", py::arg("declaration"))
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetMethod", (asIScriptFunction * (Urho3D::ScriptFile::*)(asIScriptObject *, const Urho3D::String &)) &Urho3D::ScriptFile::GetMethod, "todo: docstring", py::arg("object"), py::arg("declaration"))
    //['asIScriptObject', 'Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad True, max ptr 1
  .def("IsCompiled", (bool (Urho3D::ScriptFile::*)() const) &Urho3D::ScriptFile::IsCompiled, "todo: docstring")
  //.def("CleanupEventInvoker", (void (Urho3D::ScriptFile::*)(asIScriptObject *)) &Urho3D::ScriptFile::CleanupEventInvoker, "todo: docstring", py::arg("object"))
    //['asIScriptObject']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
// Class Variables:
;

// Class Sound Implementation
pyclass_Var_Urho3D_Sound
  .def("GetType", (Urho3D::StringHash (Urho3D::Sound::*)() const) &Urho3D::Sound::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Sound::*)() const) &Urho3D::Sound::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Sound::*)() const) &Urho3D::Sound::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Sound", (void (Urho3D::Sound::*)()) &Urho3D::Sound::~Sound, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Sound::*)(Urho3D::Deserializer &)) &Urho3D::Sound::BeginLoad, "todo: docstring", py::arg("source"))
  .def("LoadRaw", (bool (Urho3D::Sound::*)(Urho3D::Deserializer &)) &Urho3D::Sound::LoadRaw, "todo: docstring", py::arg("source"))
  .def("LoadWav", (bool (Urho3D::Sound::*)(Urho3D::Deserializer &)) &Urho3D::Sound::LoadWav, "todo: docstring", py::arg("source"))
  .def("LoadOggVorbis", (bool (Urho3D::Sound::*)(Urho3D::Deserializer &)) &Urho3D::Sound::LoadOggVorbis, "todo: docstring", py::arg("source"))
  .def("SetSize", (void (Urho3D::Sound::*)(unsigned int)) &Urho3D::Sound::SetSize, "todo: docstring", py::arg("dataSize"))
  .def("SetData", (void (Urho3D::Sound::*)(const void *, unsigned int)) &Urho3D::Sound::SetData, "todo: docstring", py::arg("data"), py::arg("dataSize"))
  .def("SetFormat", (void (Urho3D::Sound::*)(unsigned int, bool, bool)) &Urho3D::Sound::SetFormat, "todo: docstring", py::arg("frequency"), py::arg("sixteenBit"), py::arg("stereo"))
  .def("SetLooped", (void (Urho3D::Sound::*)(bool)) &Urho3D::Sound::SetLooped, "todo: docstring", py::arg("enable"))
  .def("SetLoop", (void (Urho3D::Sound::*)(unsigned int, unsigned int)) &Urho3D::Sound::SetLoop, "todo: docstring", py::arg("repeatOffset"), py::arg("endOffset"))
  //.def("GetDecoderStream", (SharedPtr<Urho3D::SoundStream> (Urho3D::Sound::*)() const) &Urho3D::Sound::GetDecoderStream, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetData", (SharedArrayPtr<signed char> (Urho3D::Sound::*)() const) &Urho3D::Sound::GetData, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetStart", (signed char * (Urho3D::Sound::*)() const) &Urho3D::Sound::GetStart, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetRepeat", (signed char * (Urho3D::Sound::*)() const) &Urho3D::Sound::GetRepeat, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetEnd", (signed char * (Urho3D::Sound::*)() const) &Urho3D::Sound::GetEnd, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetLength", (float (Urho3D::Sound::*)() const) &Urho3D::Sound::GetLength, "todo: docstring")
  .def("GetDataSize", (unsigned int (Urho3D::Sound::*)() const) &Urho3D::Sound::GetDataSize, "todo: docstring")
  .def("GetSampleSize", (unsigned int (Urho3D::Sound::*)() const) &Urho3D::Sound::GetSampleSize, "todo: docstring")
  .def("GetFrequency", (float (Urho3D::Sound::*)() const) &Urho3D::Sound::GetFrequency, "todo: docstring")
  .def("GetIntFrequency", (unsigned int (Urho3D::Sound::*)() const) &Urho3D::Sound::GetIntFrequency, "todo: docstring")
  .def("IsLooped", (bool (Urho3D::Sound::*)() const) &Urho3D::Sound::IsLooped, "todo: docstring")
  .def("IsSixteenBit", (bool (Urho3D::Sound::*)() const) &Urho3D::Sound::IsSixteenBit, "todo: docstring")
  .def("IsStereo", (bool (Urho3D::Sound::*)() const) &Urho3D::Sound::IsStereo, "todo: docstring")
  .def("IsCompressed", (bool (Urho3D::Sound::*)() const) &Urho3D::Sound::IsCompressed, "todo: docstring")
  .def("FixInterpolation", (void (Urho3D::Sound::*)()) &Urho3D::Sound::FixInterpolation, "todo: docstring")
// Class Variables:
;

// Class Model Implementation
pyclass_Var_Urho3D_Model
  .def("GetType", (Urho3D::StringHash (Urho3D::Model::*)() const) &Urho3D::Model::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Model::*)() const) &Urho3D::Model::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Model::*)() const) &Urho3D::Model::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Model", (void (Urho3D::Model::*)()) &Urho3D::Model::~Model, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Model::*)(Urho3D::Deserializer &)) &Urho3D::Model::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::Model::*)()) &Urho3D::Model::EndLoad, "todo: docstring")
  .def("Save", (bool (Urho3D::Model::*)(Urho3D::Serializer &) const) &Urho3D::Model::Save, "todo: docstring", py::arg("dest"))
  .def("SetBoundingBox", (void (Urho3D::Model::*)(const Urho3D::BoundingBox &)) &Urho3D::Model::SetBoundingBox, "todo: docstring", py::arg("box"))
  //.def("SetVertexBuffers", (bool (Urho3D::Model::*)(const Urho3D::Vector<Urho3D::SharedPtr<Urho3D::VertexBuffer> > &, const Urho3D::PODVector<unsigned int> &, const Urho3D::PODVector<unsigned int> &)) &Urho3D::Model::SetVertexBuffers, "todo: docstring", py::arg("buffers"), py::arg("morphRangeStarts"), py::arg("morphRangeCounts"))
    //['Urho3D::Vector<Urho3D::SharedPtr<Urho3D::VertexBuffer> >', 'Urho3D::PODVector<unsigned int>', 'Urho3D::PODVector<unsigned int>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("SetIndexBuffers", (bool (Urho3D::Model::*)(const Urho3D::Vector<Urho3D::SharedPtr<Urho3D::IndexBuffer> > &)) &Urho3D::Model::SetIndexBuffers, "todo: docstring", py::arg("buffers"))
    //['Urho3D::Vector<Urho3D::SharedPtr<Urho3D::IndexBuffer> >']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("SetNumGeometries", (void (Urho3D::Model::*)(unsigned int)) &Urho3D::Model::SetNumGeometries, "todo: docstring", py::arg("num"))
  .def("SetNumGeometryLodLevels", (bool (Urho3D::Model::*)(unsigned int, unsigned int)) &Urho3D::Model::SetNumGeometryLodLevels, "todo: docstring", py::arg("index"), py::arg("num"))
  .def("SetGeometry", (bool (Urho3D::Model::*)(unsigned int, unsigned int, Urho3D::Geometry *)) &Urho3D::Model::SetGeometry, "todo: docstring", py::arg("index"), py::arg("lodLevel"), py::arg("geometry"))
  .def("SetGeometryCenter", (bool (Urho3D::Model::*)(unsigned int, const Urho3D::Vector3 &)) &Urho3D::Model::SetGeometryCenter, "todo: docstring", py::arg("index"), py::arg("center"))
  .def("SetSkeleton", (void (Urho3D::Model::*)(const Urho3D::Skeleton &)) &Urho3D::Model::SetSkeleton, "todo: docstring", py::arg("skeleton"))
  //.def("SetGeometryBoneMappings", (void (Urho3D::Model::*)(const Urho3D::Vector<Urho3D::PODVector<unsigned int> > &)) &Urho3D::Model::SetGeometryBoneMappings, "todo: docstring", py::arg("geometryBoneMappings"))
    //['Urho3D::Vector<Urho3D::PODVector<unsigned int> >']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("SetMorphs", (void (Urho3D::Model::*)(const Urho3D::Vector<Urho3D::ModelMorph> &)) &Urho3D::Model::SetMorphs, "todo: docstring", py::arg("morphs"))
    //['Urho3D::Vector<Urho3D::ModelMorph>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("Clone", (SharedPtr<Urho3D::Model> (Urho3D::Model::*)(const Urho3D::String &) const) &Urho3D::Model::Clone, "todo: docstring", py::arg("cloneName")=String::EMPTY)
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetBoundingBox", (const Urho3D::BoundingBox & (Urho3D::Model::*)() const) &Urho3D::Model::GetBoundingBox, "todo: docstring")
  .def("GetSkeleton", (Urho3D::Skeleton & (Urho3D::Model::*)()) &Urho3D::Model::GetSkeleton, "todo: docstring")
  //.def("GetVertexBuffers", (const Vector<SharedPtr<Urho3D::VertexBuffer> > & (Urho3D::Model::*)() const) &Urho3D::Model::GetVertexBuffers, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetIndexBuffers", (const Vector<SharedPtr<Urho3D::IndexBuffer> > & (Urho3D::Model::*)() const) &Urho3D::Model::GetIndexBuffers, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumGeometries", (unsigned int (Urho3D::Model::*)() const) &Urho3D::Model::GetNumGeometries, "todo: docstring")
  .def("GetNumGeometryLodLevels", (unsigned int (Urho3D::Model::*)(unsigned int) const) &Urho3D::Model::GetNumGeometryLodLevels, "todo: docstring", py::arg("index"))
  //.def("GetGeometries", (const Vector<Vector<SharedPtr<Urho3D::Geometry> > > & (Urho3D::Model::*)() const) &Urho3D::Model::GetGeometries, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetGeometryCenters", (const PODVector<Urho3D::Vector3> & (Urho3D::Model::*)() const) &Urho3D::Model::GetGeometryCenters, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetGeometry", (Urho3D::Geometry * (Urho3D::Model::*)(unsigned int, unsigned int) const) &Urho3D::Model::GetGeometry, "todo: docstring", py::arg("index"), py::arg("lodLevel"))
  .def("GetGeometryCenter", (const Urho3D::Vector3 & (Urho3D::Model::*)(unsigned int) const) &Urho3D::Model::GetGeometryCenter, "todo: docstring", py::arg("index"))
  //.def("GetGeometryBoneMappings", (const Vector<PODVector<unsigned int> > & (Urho3D::Model::*)() const) &Urho3D::Model::GetGeometryBoneMappings, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetMorphs", (const Vector<Urho3D::ModelMorph> & (Urho3D::Model::*)() const) &Urho3D::Model::GetMorphs, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumMorphs", (unsigned int (Urho3D::Model::*)() const) &Urho3D::Model::GetNumMorphs, "todo: docstring")
  //.def("GetMorph", (const Urho3D::ModelMorph * (Urho3D::Model::*)(unsigned int) const) &Urho3D::Model::GetMorph, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetMorph", (const Urho3D::ModelMorph * (Urho3D::Model::*)(const Urho3D::String &) const) &Urho3D::Model::GetMorph, "todo: docstring", py::arg("name"))
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  //.def("GetMorph", (const Urho3D::ModelMorph * (Urho3D::Model::*)(Urho3D::StringHash) const) &Urho3D::Model::GetMorph, "todo: docstring", py::arg("nameHash"))
    //['Urho3D::StringHash']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetMorphRangeStart", (unsigned int (Urho3D::Model::*)(unsigned int) const) &Urho3D::Model::GetMorphRangeStart, "todo: docstring", py::arg("bufferIndex"))
  .def("GetMorphRangeCount", (unsigned int (Urho3D::Model::*)(unsigned int) const) &Urho3D::Model::GetMorphRangeCount, "todo: docstring", py::arg("bufferIndex"))
// Class Variables:
;

// Class DropDownList Implementation
pyclass_Var_Urho3D_DropDownList
  .def("GetType", (Urho3D::StringHash (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~DropDownList", (void (Urho3D::DropDownList::*)()) &Urho3D::DropDownList::~DropDownList, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::DropDownList::*)()) &Urho3D::DropDownList::ApplyAttributes, "todo: docstring")
  //.def("GetBatches", (void (Urho3D::DropDownList::*)(Urho3D::PODVector<Urho3D::UIBatch> &, Urho3D::PODVector<float> &, const Urho3D::IntRect &)) &Urho3D::DropDownList::GetBatches, "todo: docstring", py::arg("batches"), py::arg("vertexData"), py::arg("currentScissor"))
    //['Urho3D::PODVector<Urho3D::UIBatch>', 'Urho3D::PODVector<float>', 'Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("OnShowPopup", (void (Urho3D::DropDownList::*)()) &Urho3D::DropDownList::OnShowPopup, "todo: docstring")
  .def("OnHidePopup", (void (Urho3D::DropDownList::*)()) &Urho3D::DropDownList::OnHidePopup, "todo: docstring")
  .def("OnSetEditable", (void (Urho3D::DropDownList::*)()) &Urho3D::DropDownList::OnSetEditable, "todo: docstring")
  .def("AddItem", (void (Urho3D::DropDownList::*)(Urho3D::UIElement *)) &Urho3D::DropDownList::AddItem, "todo: docstring", py::arg("item"))
  .def("InsertItem", (void (Urho3D::DropDownList::*)(unsigned int, Urho3D::UIElement *)) &Urho3D::DropDownList::InsertItem, "todo: docstring", py::arg("index"), py::arg("item"))
  .def("RemoveItem", (void (Urho3D::DropDownList::*)(Urho3D::UIElement *)) &Urho3D::DropDownList::RemoveItem, "todo: docstring", py::arg("item"))
  .def("RemoveItem", (void (Urho3D::DropDownList::*)(unsigned int)) &Urho3D::DropDownList::RemoveItem, "todo: docstring", py::arg("index"))
  .def("RemoveAllItems", (void (Urho3D::DropDownList::*)()) &Urho3D::DropDownList::RemoveAllItems, "todo: docstring")
  .def("SetSelection", (void (Urho3D::DropDownList::*)(unsigned int)) &Urho3D::DropDownList::SetSelection, "todo: docstring", py::arg("index"))
  .def("SetPlaceholderText", (void (Urho3D::DropDownList::*)(const Urho3D::String &)) &Urho3D::DropDownList::SetPlaceholderText, "todo: docstring", py::arg("text"))
  .def("SetResizePopup", (void (Urho3D::DropDownList::*)(bool)) &Urho3D::DropDownList::SetResizePopup, "todo: docstring", py::arg("enable"))
  .def("GetNumItems", (unsigned int (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetNumItems, "todo: docstring")
  .def("GetItem", (Urho3D::UIElement * (Urho3D::DropDownList::*)(unsigned int) const) &Urho3D::DropDownList::GetItem, "todo: docstring", py::arg("index"))
  //.def("GetItems", (PODVector<Urho3D::UIElement *> (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetItems, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetSelection", (unsigned int (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetSelection, "todo: docstring")
  .def("GetSelectedItem", (Urho3D::UIElement * (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetSelectedItem, "todo: docstring")
  .def("GetListView", (Urho3D::ListView * (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetListView, "todo: docstring")
  .def("GetPlaceholder", (Urho3D::UIElement * (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetPlaceholder, "todo: docstring")
  .def("GetPlaceholderText", (const Urho3D::String & (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetPlaceholderText, "todo: docstring")
  .def("GetResizePopup", (bool (Urho3D::DropDownList::*)() const) &Urho3D::DropDownList::GetResizePopup, "todo: docstring")
  .def("SetSelectionAttr", (void (Urho3D::DropDownList::*)(unsigned int)) &Urho3D::DropDownList::SetSelectionAttr, "todo: docstring", py::arg("index"))
// Class Variables:
;

// Class Image Implementation
pyclass_Var_Urho3D_Image
  .def("GetType", (Urho3D::StringHash (Urho3D::Image::*)() const) &Urho3D::Image::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Image::*)() const) &Urho3D::Image::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Image::*)() const) &Urho3D::Image::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Image", (void (Urho3D::Image::*)()) &Urho3D::Image::~Image, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Image::*)(Urho3D::Deserializer &)) &Urho3D::Image::BeginLoad, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::Image::*)(Urho3D::Serializer &) const) &Urho3D::Image::Save, "todo: docstring", py::arg("dest"))
  .def("SaveFile", (bool (Urho3D::Image::*)(const Urho3D::String &) const) &Urho3D::Image::SaveFile, "todo: docstring", py::arg("fileName"))
  .def("SetSize", (bool (Urho3D::Image::*)(int, int, unsigned int)) &Urho3D::Image::SetSize, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("components"))
  .def("SetSize", (bool (Urho3D::Image::*)(int, int, int, unsigned int)) &Urho3D::Image::SetSize, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("depth"), py::arg("components"))
  .def("SetData", (void (Urho3D::Image::*)(const unsigned char *)) &Urho3D::Image::SetData, "todo: docstring", py::arg("pixelData"))
  .def("SetPixel", (void (Urho3D::Image::*)(int, int, const Urho3D::Color &)) &Urho3D::Image::SetPixel, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("color"))
  .def("SetPixel", (void (Urho3D::Image::*)(int, int, int, const Urho3D::Color &)) &Urho3D::Image::SetPixel, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("z"), py::arg("color"))
  .def("SetPixelInt", (void (Urho3D::Image::*)(int, int, unsigned int)) &Urho3D::Image::SetPixelInt, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("uintColor"))
  .def("SetPixelInt", (void (Urho3D::Image::*)(int, int, int, unsigned int)) &Urho3D::Image::SetPixelInt, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("z"), py::arg("uintColor"))
  .def("LoadColorLUT", (bool (Urho3D::Image::*)(Urho3D::Deserializer &)) &Urho3D::Image::LoadColorLUT, "todo: docstring", py::arg("source"))
  .def("FlipHorizontal", (bool (Urho3D::Image::*)()) &Urho3D::Image::FlipHorizontal, "todo: docstring")
  .def("FlipVertical", (bool (Urho3D::Image::*)()) &Urho3D::Image::FlipVertical, "todo: docstring")
  .def("Resize", (bool (Urho3D::Image::*)(int, int)) &Urho3D::Image::Resize, "todo: docstring", py::arg("width"), py::arg("height"))
  .def("Clear", (void (Urho3D::Image::*)(const Urho3D::Color &)) &Urho3D::Image::Clear, "todo: docstring", py::arg("color"))
  .def("ClearInt", (void (Urho3D::Image::*)(unsigned int)) &Urho3D::Image::ClearInt, "todo: docstring", py::arg("uintColor"))
  .def("SaveBMP", (bool (Urho3D::Image::*)(const Urho3D::String &) const) &Urho3D::Image::SaveBMP, "todo: docstring", py::arg("fileName"))
  .def("SavePNG", (bool (Urho3D::Image::*)(const Urho3D::String &) const) &Urho3D::Image::SavePNG, "todo: docstring", py::arg("fileName"))
  .def("SaveTGA", (bool (Urho3D::Image::*)(const Urho3D::String &) const) &Urho3D::Image::SaveTGA, "todo: docstring", py::arg("fileName"))
  .def("SaveJPG", (bool (Urho3D::Image::*)(const Urho3D::String &, int) const) &Urho3D::Image::SaveJPG, "todo: docstring", py::arg("fileName"), py::arg("quality"))
  .def("SaveDDS", (bool (Urho3D::Image::*)(const Urho3D::String &) const) &Urho3D::Image::SaveDDS, "todo: docstring", py::arg("fileName"))
  .def("SaveWEBP", (bool (Urho3D::Image::*)(const Urho3D::String &, float) const) &Urho3D::Image::SaveWEBP, "todo: docstring", py::arg("fileName"), py::arg("compression")=0.0f)
  .def("IsCubemap", (bool (Urho3D::Image::*)() const) &Urho3D::Image::IsCubemap, "todo: docstring")
  .def("IsArray", (bool (Urho3D::Image::*)() const) &Urho3D::Image::IsArray, "todo: docstring")
  .def("IsSRGB", (bool (Urho3D::Image::*)() const) &Urho3D::Image::IsSRGB, "todo: docstring")
  .def("GetPixel", (Urho3D::Color (Urho3D::Image::*)(int, int) const) &Urho3D::Image::GetPixel, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("GetPixel", (Urho3D::Color (Urho3D::Image::*)(int, int, int) const) &Urho3D::Image::GetPixel, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("z"))
  .def("GetPixelInt", (unsigned int (Urho3D::Image::*)(int, int) const) &Urho3D::Image::GetPixelInt, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("GetPixelInt", (unsigned int (Urho3D::Image::*)(int, int, int) const) &Urho3D::Image::GetPixelInt, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("z"))
  .def("GetPixelBilinear", (Urho3D::Color (Urho3D::Image::*)(float, float) const) &Urho3D::Image::GetPixelBilinear, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("GetPixelTrilinear", (Urho3D::Color (Urho3D::Image::*)(float, float, float) const) &Urho3D::Image::GetPixelTrilinear, "todo: docstring", py::arg("x"), py::arg("y"), py::arg("z"))
  .def("GetWidth", (int (Urho3D::Image::*)() const) &Urho3D::Image::GetWidth, "todo: docstring")
  .def("GetHeight", (int (Urho3D::Image::*)() const) &Urho3D::Image::GetHeight, "todo: docstring")
  .def("GetDepth", (int (Urho3D::Image::*)() const) &Urho3D::Image::GetDepth, "todo: docstring")
  .def("GetComponents", (unsigned int (Urho3D::Image::*)() const) &Urho3D::Image::GetComponents, "todo: docstring")
  .def("GetData", (unsigned char * (Urho3D::Image::*)() const) &Urho3D::Image::GetData, "todo: docstring")
  .def("IsCompressed", (bool (Urho3D::Image::*)() const) &Urho3D::Image::IsCompressed, "todo: docstring")
  .def("GetCompressedFormat", (Urho3D::CompressedFormat (Urho3D::Image::*)() const) &Urho3D::Image::GetCompressedFormat, "todo: docstring")
  .def("GetNumCompressedLevels", (unsigned int (Urho3D::Image::*)() const) &Urho3D::Image::GetNumCompressedLevels, "todo: docstring")
  //.def("GetNextLevel", (SharedPtr<Urho3D::Image> (Urho3D::Image::*)() const) &Urho3D::Image::GetNextLevel, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetNextSibling", (SharedPtr<Urho3D::Image> (Urho3D::Image::*)() const) &Urho3D::Image::GetNextSibling, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("ConvertToRGBA", (SharedPtr<Urho3D::Image> (Urho3D::Image::*)() const) &Urho3D::Image::ConvertToRGBA, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetCompressedLevel", (Urho3D::CompressedLevel (Urho3D::Image::*)(unsigned int) const) &Urho3D::Image::GetCompressedLevel, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetSubimage", (Urho3D::Image * (Urho3D::Image::*)(const Urho3D::IntRect &) const) &Urho3D::Image::GetSubimage, "todo: docstring", py::arg("rect"))
  //.def("GetSDLSurface", (SDL_Surface * (Urho3D::Image::*)(const Urho3D::IntRect &) const) &Urho3D::Image::GetSDLSurface, "todo: docstring", py::arg("rect")=IntRect::ZERO)
    //['Urho3D::IntRect']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("PrecalculateLevels", (void (Urho3D::Image::*)()) &Urho3D::Image::PrecalculateLevels, "todo: docstring")
  .def("HasAlphaChannel", (bool (Urho3D::Image::*)() const) &Urho3D::Image::HasAlphaChannel, "todo: docstring")
  .def("SetSubimage", (bool (Urho3D::Image::*)(const Urho3D::Image *, const Urho3D::IntRect &)) &Urho3D::Image::SetSubimage, "todo: docstring", py::arg("image"), py::arg("rect"))
  .def("CleanupLevels", (void (Urho3D::Image::*)()) &Urho3D::Image::CleanupLevels, "todo: docstring")
  //.def("GetLevels", (void (Urho3D::Image::*)(Urho3D::PODVector<Urho3D::Image *> &)) &Urho3D::Image::GetLevels, "todo: docstring", py::arg("levels"))
    //['Urho3D::PODVector<Urho3D::Image']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("GetLevels", (void (Urho3D::Image::*)(Urho3D::PODVector<const Urho3D::Image *> &) const) &Urho3D::Image::GetLevels, "todo: docstring", py::arg("levels"))
    //['Urho3D::PODVector<const Urho3D::Image']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
// Class Variables:
;

// Class Terrain Implementation
pyclass_Var_Urho3D_Terrain
  .def("GetType", (Urho3D::StringHash (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Terrain", (void (Urho3D::Terrain::*)()) &Urho3D::Terrain::~Terrain, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::Terrain::*)()) &Urho3D::Terrain::ApplyAttributes, "todo: docstring")
  .def("OnSetEnabled", (void (Urho3D::Terrain::*)()) &Urho3D::Terrain::OnSetEnabled, "todo: docstring")
  .def("SetPatchSize", (void (Urho3D::Terrain::*)(int)) &Urho3D::Terrain::SetPatchSize, "todo: docstring", py::arg("size"))
  .def("SetSpacing", (void (Urho3D::Terrain::*)(const Urho3D::Vector3 &)) &Urho3D::Terrain::SetSpacing, "todo: docstring", py::arg("spacing"))
  .def("SetMaxLodLevels", (void (Urho3D::Terrain::*)(unsigned int)) &Urho3D::Terrain::SetMaxLodLevels, "todo: docstring", py::arg("levels"))
  .def("SetOcclusionLodLevel", (void (Urho3D::Terrain::*)(unsigned int)) &Urho3D::Terrain::SetOcclusionLodLevel, "todo: docstring", py::arg("level"))
  .def("SetSmoothing", (void (Urho3D::Terrain::*)(bool)) &Urho3D::Terrain::SetSmoothing, "todo: docstring", py::arg("enable"))
  .def("SetHeightMap", (bool (Urho3D::Terrain::*)(Urho3D::Image *)) &Urho3D::Terrain::SetHeightMap, "todo: docstring", py::arg("image"))
  .def("SetMaterial", (void (Urho3D::Terrain::*)(Urho3D::Material *)) &Urho3D::Terrain::SetMaterial, "todo: docstring", py::arg("material"))
  .def("SetNorthNeighbor", (void (Urho3D::Terrain::*)(Urho3D::Terrain *)) &Urho3D::Terrain::SetNorthNeighbor, "todo: docstring", py::arg("north"))
  .def("SetSouthNeighbor", (void (Urho3D::Terrain::*)(Urho3D::Terrain *)) &Urho3D::Terrain::SetSouthNeighbor, "todo: docstring", py::arg("south"))
  .def("SetWestNeighbor", (void (Urho3D::Terrain::*)(Urho3D::Terrain *)) &Urho3D::Terrain::SetWestNeighbor, "todo: docstring", py::arg("west"))
  .def("SetEastNeighbor", (void (Urho3D::Terrain::*)(Urho3D::Terrain *)) &Urho3D::Terrain::SetEastNeighbor, "todo: docstring", py::arg("east"))
  .def("SetNeighbors", (void (Urho3D::Terrain::*)(Urho3D::Terrain *, Urho3D::Terrain *, Urho3D::Terrain *, Urho3D::Terrain *)) &Urho3D::Terrain::SetNeighbors, "todo: docstring", py::arg("north"), py::arg("south"), py::arg("west"), py::arg("east"))
  .def("SetDrawDistance", (void (Urho3D::Terrain::*)(float)) &Urho3D::Terrain::SetDrawDistance, "todo: docstring", py::arg("distance"))
  .def("SetShadowDistance", (void (Urho3D::Terrain::*)(float)) &Urho3D::Terrain::SetShadowDistance, "todo: docstring", py::arg("distance"))
  .def("SetLodBias", (void (Urho3D::Terrain::*)(float)) &Urho3D::Terrain::SetLodBias, "todo: docstring", py::arg("bias"))
  .def("SetViewMask", (void (Urho3D::Terrain::*)(unsigned int)) &Urho3D::Terrain::SetViewMask, "todo: docstring", py::arg("mask"))
  .def("SetLightMask", (void (Urho3D::Terrain::*)(unsigned int)) &Urho3D::Terrain::SetLightMask, "todo: docstring", py::arg("mask"))
  .def("SetShadowMask", (void (Urho3D::Terrain::*)(unsigned int)) &Urho3D::Terrain::SetShadowMask, "todo: docstring", py::arg("mask"))
  .def("SetZoneMask", (void (Urho3D::Terrain::*)(unsigned int)) &Urho3D::Terrain::SetZoneMask, "todo: docstring", py::arg("mask"))
  .def("SetMaxLights", (void (Urho3D::Terrain::*)(unsigned int)) &Urho3D::Terrain::SetMaxLights, "todo: docstring", py::arg("num"))
  .def("SetCastShadows", (void (Urho3D::Terrain::*)(bool)) &Urho3D::Terrain::SetCastShadows, "todo: docstring", py::arg("enable"))
  .def("SetOccluder", (void (Urho3D::Terrain::*)(bool)) &Urho3D::Terrain::SetOccluder, "todo: docstring", py::arg("enable"))
  .def("SetOccludee", (void (Urho3D::Terrain::*)(bool)) &Urho3D::Terrain::SetOccludee, "todo: docstring", py::arg("enable"))
  .def("ApplyHeightMap", (void (Urho3D::Terrain::*)()) &Urho3D::Terrain::ApplyHeightMap, "todo: docstring")
  .def("GetPatchSize", (int (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetPatchSize, "todo: docstring")
  .def("GetSpacing", (const Urho3D::Vector3 & (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetSpacing, "todo: docstring")
  .def("GetNumVertices", (const Urho3D::IntVector2 & (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetNumVertices, "todo: docstring")
  .def("GetNumPatches", (const Urho3D::IntVector2 & (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetNumPatches, "todo: docstring")
  .def("GetMaxLodLevels", (unsigned int (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetMaxLodLevels, "todo: docstring")
  .def("GetOcclusionLodLevel", (unsigned int (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetOcclusionLodLevel, "todo: docstring")
  .def("GetSmoothing", (bool (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetSmoothing, "todo: docstring")
  .def("GetHeightMap", (Urho3D::Image * (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetHeightMap, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetMaterial, "todo: docstring")
  .def("GetPatch", (Urho3D::TerrainPatch * (Urho3D::Terrain::*)(unsigned int) const) &Urho3D::Terrain::GetPatch, "todo: docstring", py::arg("index"))
  .def("GetPatch", (Urho3D::TerrainPatch * (Urho3D::Terrain::*)(int, int) const) &Urho3D::Terrain::GetPatch, "todo: docstring", py::arg("x"), py::arg("z"))
  .def("GetNeighborPatch", (Urho3D::TerrainPatch * (Urho3D::Terrain::*)(int, int) const) &Urho3D::Terrain::GetNeighborPatch, "todo: docstring", py::arg("x"), py::arg("z"))
  .def("GetHeight", (float (Urho3D::Terrain::*)(const Urho3D::Vector3 &) const) &Urho3D::Terrain::GetHeight, "todo: docstring", py::arg("worldPosition"))
  .def("GetNormal", (Urho3D::Vector3 (Urho3D::Terrain::*)(const Urho3D::Vector3 &) const) &Urho3D::Terrain::GetNormal, "todo: docstring", py::arg("worldPosition"))
  .def("WorldToHeightMap", (Urho3D::IntVector2 (Urho3D::Terrain::*)(const Urho3D::Vector3 &) const) &Urho3D::Terrain::WorldToHeightMap, "todo: docstring", py::arg("worldPosition"))
  .def("HeightMapToWorld", (Urho3D::Vector3 (Urho3D::Terrain::*)(const Urho3D::IntVector2 &) const) &Urho3D::Terrain::HeightMapToWorld, "todo: docstring", py::arg("pixelPosition"))
  .def("GetNorthNeighbor", (Urho3D::Terrain * (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetNorthNeighbor, "todo: docstring")
  .def("GetSouthNeighbor", (Urho3D::Terrain * (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetSouthNeighbor, "todo: docstring")
  .def("GetWestNeighbor", (Urho3D::Terrain * (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetWestNeighbor, "todo: docstring")
  .def("GetEastNeighbor", (Urho3D::Terrain * (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetEastNeighbor, "todo: docstring")
  //.def("GetHeightData", (SharedArrayPtr<float> (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetHeightData, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetDrawDistance", (float (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetDrawDistance, "todo: docstring")
  .def("GetShadowDistance", (float (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetShadowDistance, "todo: docstring")
  .def("GetLodBias", (float (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetLodBias, "todo: docstring")
  .def("GetViewMask", (unsigned int (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetViewMask, "todo: docstring")
  .def("GetLightMask", (unsigned int (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetLightMask, "todo: docstring")
  .def("GetShadowMask", (unsigned int (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetShadowMask, "todo: docstring")
  .def("GetZoneMask", (unsigned int (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetZoneMask, "todo: docstring")
  .def("GetMaxLights", (unsigned int (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetMaxLights, "todo: docstring")
  .def("IsVisible", (bool (Urho3D::Terrain::*)() const) &Urho3D::Terrain::IsVisible, "todo: docstring")
  .def("GetCastShadows", (bool (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetCastShadows, "todo: docstring")
  .def("IsOccluder", (bool (Urho3D::Terrain::*)() const) &Urho3D::Terrain::IsOccluder, "todo: docstring")
  .def("IsOccludee", (bool (Urho3D::Terrain::*)() const) &Urho3D::Terrain::IsOccludee, "todo: docstring")
  .def("CreatePatchGeometry", (void (Urho3D::Terrain::*)(Urho3D::TerrainPatch *)) &Urho3D::Terrain::CreatePatchGeometry, "todo: docstring", py::arg("patch"))
  .def("UpdatePatchLod", (void (Urho3D::Terrain::*)(Urho3D::TerrainPatch *)) &Urho3D::Terrain::UpdatePatchLod, "todo: docstring", py::arg("patch"))
  .def("SetHeightMapAttr", (void (Urho3D::Terrain::*)(const Urho3D::ResourceRef &)) &Urho3D::Terrain::SetHeightMapAttr, "todo: docstring", py::arg("value"))
  .def("SetMaterialAttr", (void (Urho3D::Terrain::*)(const Urho3D::ResourceRef &)) &Urho3D::Terrain::SetMaterialAttr, "todo: docstring", py::arg("value"))
  .def("SetPatchSizeAttr", (void (Urho3D::Terrain::*)(int)) &Urho3D::Terrain::SetPatchSizeAttr, "todo: docstring", py::arg("value"))
  .def("SetMaxLodLevelsAttr", (void (Urho3D::Terrain::*)(unsigned int)) &Urho3D::Terrain::SetMaxLodLevelsAttr, "todo: docstring", py::arg("value"))
  .def("SetOcclusionLodLevelAttr", (void (Urho3D::Terrain::*)(unsigned int)) &Urho3D::Terrain::SetOcclusionLodLevelAttr, "todo: docstring", py::arg("value"))
  .def("GetHeightMapAttr", (Urho3D::ResourceRef (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetHeightMapAttr, "todo: docstring")
  .def("GetMaterialAttr", (Urho3D::ResourceRef (Urho3D::Terrain::*)() const) &Urho3D::Terrain::GetMaterialAttr, "todo: docstring")
// Class Variables:
;

// Class CrowdAgent Implementation
pyclass_Var_Urho3D_CrowdAgent
  .def("GetType", (Urho3D::StringHash (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CrowdAgent", (void (Urho3D::CrowdAgent::*)()) &Urho3D::CrowdAgent::~CrowdAgent, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::CrowdAgent::*)()) &Urho3D::CrowdAgent::ApplyAttributes, "todo: docstring")
  .def("OnSetEnabled", (void (Urho3D::CrowdAgent::*)()) &Urho3D::CrowdAgent::OnSetEnabled, "todo: docstring")
  .def("DrawDebugGeometry", (void (Urho3D::CrowdAgent::*)(bool)) &Urho3D::CrowdAgent::DrawDebugGeometry, "todo: docstring", py::arg("depthTest"))
  .def("DrawDebugGeometry", (void (Urho3D::CrowdAgent::*)(Urho3D::DebugRenderer *, bool)) &Urho3D::CrowdAgent::DrawDebugGeometry, "todo: docstring", py::arg("debug"), py::arg("depthTest"))
  .def("SetTargetPosition", (void (Urho3D::CrowdAgent::*)(const Urho3D::Vector3 &)) &Urho3D::CrowdAgent::SetTargetPosition, "todo: docstring", py::arg("position"))
  .def("SetTargetVelocity", (void (Urho3D::CrowdAgent::*)(const Urho3D::Vector3 &)) &Urho3D::CrowdAgent::SetTargetVelocity, "todo: docstring", py::arg("velocity"))
  .def("ResetTarget", (void (Urho3D::CrowdAgent::*)()) &Urho3D::CrowdAgent::ResetTarget, "todo: docstring")
  .def("SetUpdateNodePosition", (void (Urho3D::CrowdAgent::*)(bool)) &Urho3D::CrowdAgent::SetUpdateNodePosition, "todo: docstring", py::arg("unodepos"))
  .def("SetMaxAccel", (void (Urho3D::CrowdAgent::*)(float)) &Urho3D::CrowdAgent::SetMaxAccel, "todo: docstring", py::arg("maxAccel"))
  .def("SetMaxSpeed", (void (Urho3D::CrowdAgent::*)(float)) &Urho3D::CrowdAgent::SetMaxSpeed, "todo: docstring", py::arg("maxSpeed"))
  .def("SetRadius", (void (Urho3D::CrowdAgent::*)(float)) &Urho3D::CrowdAgent::SetRadius, "todo: docstring", py::arg("radius"))
  .def("SetHeight", (void (Urho3D::CrowdAgent::*)(float)) &Urho3D::CrowdAgent::SetHeight, "todo: docstring", py::arg("height"))
  .def("SetQueryFilterType", (void (Urho3D::CrowdAgent::*)(unsigned int)) &Urho3D::CrowdAgent::SetQueryFilterType, "todo: docstring", py::arg("queryFilterType"))
  .def("SetObstacleAvoidanceType", (void (Urho3D::CrowdAgent::*)(unsigned int)) &Urho3D::CrowdAgent::SetObstacleAvoidanceType, "todo: docstring", py::arg("obstacleAvoidanceType"))
  .def("SetNavigationQuality", (void (Urho3D::CrowdAgent::*)(Urho3D::NavigationQuality)) &Urho3D::CrowdAgent::SetNavigationQuality, "todo: docstring", py::arg("val"))
  .def("SetNavigationPushiness", (void (Urho3D::CrowdAgent::*)(Urho3D::NavigationPushiness)) &Urho3D::CrowdAgent::SetNavigationPushiness, "todo: docstring", py::arg("val"))
  .def("GetPosition", (Urho3D::Vector3 (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetPosition, "todo: docstring")
  .def("GetDesiredVelocity", (Urho3D::Vector3 (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetDesiredVelocity, "todo: docstring")
  .def("GetActualVelocity", (Urho3D::Vector3 (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetActualVelocity, "todo: docstring")
  .def("GetTargetPosition", (const Urho3D::Vector3 & (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetTargetPosition, "todo: docstring")
  .def("GetTargetVelocity", (const Urho3D::Vector3 & (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetTargetVelocity, "todo: docstring")
  .def("GetRequestedTargetType", (Urho3D::CrowdAgentRequestedTarget (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetRequestedTargetType, "todo: docstring")
  .def("GetAgentState", (Urho3D::CrowdAgentState (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetAgentState, "todo: docstring")
  .def("GetTargetState", (Urho3D::CrowdAgentTargetState (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetTargetState, "todo: docstring")
  .def("GetUpdateNodePosition", (bool (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetUpdateNodePosition, "todo: docstring")
  .def("GetAgentCrowdId", (int (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetAgentCrowdId, "todo: docstring")
  .def("GetMaxAccel", (float (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetMaxAccel, "todo: docstring")
  .def("GetMaxSpeed", (float (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetMaxSpeed, "todo: docstring")
  .def("GetRadius", (float (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetRadius, "todo: docstring")
  .def("GetHeight", (float (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetHeight, "todo: docstring")
  .def("GetQueryFilterType", (unsigned int (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetQueryFilterType, "todo: docstring")
  .def("GetObstacleAvoidanceType", (unsigned int (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetObstacleAvoidanceType, "todo: docstring")
  .def("GetNavigationQuality", (Urho3D::NavigationQuality (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetNavigationQuality, "todo: docstring")
  .def("GetNavigationPushiness", (Urho3D::NavigationPushiness (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::GetNavigationPushiness, "todo: docstring")
  .def("HasRequestedTarget", (bool (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::HasRequestedTarget, "todo: docstring")
  .def("HasArrived", (bool (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::HasArrived, "todo: docstring")
  .def("IsInCrowd", (bool (Urho3D::CrowdAgent::*)() const) &Urho3D::CrowdAgent::IsInCrowd, "todo: docstring")
// Class Variables:
;

// Class PListFile Implementation
pyclass_Var_Urho3D_PListFile
  .def("GetType", (Urho3D::StringHash (Urho3D::PListFile::*)() const) &Urho3D::PListFile::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::PListFile::*)() const) &Urho3D::PListFile::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::PListFile::*)() const) &Urho3D::PListFile::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~PListFile", (void (Urho3D::PListFile::*)()) &Urho3D::PListFile::~PListFile, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::PListFile::*)(Urho3D::Deserializer &)) &Urho3D::PListFile::BeginLoad, "todo: docstring", py::arg("source"))
  //.def("GetRoot", (const Urho3D::PListValueMap & (Urho3D::PListFile::*)() const) &Urho3D::PListFile::GetRoot, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;

// Class AnimationSet2D Implementation
pyclass_Var_Urho3D_AnimationSet2D
  .def("GetType", (Urho3D::StringHash (Urho3D::AnimationSet2D::*)() const) &Urho3D::AnimationSet2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::AnimationSet2D::*)() const) &Urho3D::AnimationSet2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::AnimationSet2D::*)() const) &Urho3D::AnimationSet2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~AnimationSet2D", (void (Urho3D::AnimationSet2D::*)()) &Urho3D::AnimationSet2D::~AnimationSet2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::AnimationSet2D::*)(Urho3D::Deserializer &)) &Urho3D::AnimationSet2D::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::AnimationSet2D::*)()) &Urho3D::AnimationSet2D::EndLoad, "todo: docstring")
  .def("GetNumAnimations", (unsigned int (Urho3D::AnimationSet2D::*)() const) &Urho3D::AnimationSet2D::GetNumAnimations, "todo: docstring")
  .def("GetAnimation", (Urho3D::String (Urho3D::AnimationSet2D::*)(unsigned int) const) &Urho3D::AnimationSet2D::GetAnimation, "todo: docstring", py::arg("index"))
  .def("HasAnimation", (bool (Urho3D::AnimationSet2D::*)(const Urho3D::String &) const) &Urho3D::AnimationSet2D::HasAnimation, "todo: docstring", py::arg("animationName"))
  .def("GetSprite", (Urho3D::Sprite2D * (Urho3D::AnimationSet2D::*)() const) &Urho3D::AnimationSet2D::GetSprite, "todo: docstring")
  //.def("GetSpriterData", (Spriter::SpriterData * (Urho3D::AnimationSet2D::*)() const) &Urho3D::AnimationSet2D::GetSpriterData, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("GetSpriterFileSprite", (Urho3D::Sprite2D * (Urho3D::AnimationSet2D::*)(int, int) const) &Urho3D::AnimationSet2D::GetSpriterFileSprite, "todo: docstring", py::arg("folderId"), py::arg("fileId"))
// Class Variables:
;

// Class CollisionPolygon2D Implementation
pyclass_Var_Urho3D_CollisionPolygon2D
  .def("GetType", (Urho3D::StringHash (Urho3D::CollisionPolygon2D::*)() const) &Urho3D::CollisionPolygon2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CollisionPolygon2D::*)() const) &Urho3D::CollisionPolygon2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CollisionPolygon2D::*)() const) &Urho3D::CollisionPolygon2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CollisionPolygon2D", (void (Urho3D::CollisionPolygon2D::*)()) &Urho3D::CollisionPolygon2D::~CollisionPolygon2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetVertexCount", (void (Urho3D::CollisionPolygon2D::*)(unsigned int)) &Urho3D::CollisionPolygon2D::SetVertexCount, "todo: docstring", py::arg("count"))
  .def("SetVertex", (void (Urho3D::CollisionPolygon2D::*)(unsigned int, const Urho3D::Vector2 &)) &Urho3D::CollisionPolygon2D::SetVertex, "todo: docstring", py::arg("index"), py::arg("vertex"))
  //.def("SetVertices", (void (Urho3D::CollisionPolygon2D::*)(const Urho3D::PODVector<Urho3D::Vector2> &)) &Urho3D::CollisionPolygon2D::SetVertices, "todo: docstring", py::arg("vertices"))
    //['Urho3D::PODVector<Urho3D::Vector2>']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetVertexCount", (unsigned int (Urho3D::CollisionPolygon2D::*)() const) &Urho3D::CollisionPolygon2D::GetVertexCount, "todo: docstring")
  .def("GetVertex", (const Urho3D::Vector2 & (Urho3D::CollisionPolygon2D::*)(unsigned int) const) &Urho3D::CollisionPolygon2D::GetVertex, "todo: docstring", py::arg("index"))
  //.def("GetVertices", (const PODVector<Urho3D::Vector2> & (Urho3D::CollisionPolygon2D::*)() const) &Urho3D::CollisionPolygon2D::GetVertices, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("SetVerticesAttr", (void (Urho3D::CollisionPolygon2D::*)(const Urho3D::PODVector<unsigned char> &)) &Urho3D::CollisionPolygon2D::SetVerticesAttr, "todo: docstring", py::arg("value"))
  //.def("GetVerticesAttr", (PODVector<unsigned char> (Urho3D::CollisionPolygon2D::*)() const) &Urho3D::CollisionPolygon2D::GetVerticesAttr, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
// Class Variables:
;

// Class ConstraintPulley2D Implementation
pyclass_Var_Urho3D_ConstraintPulley2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintPulley2D::*)() const) &Urho3D::ConstraintPulley2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintPulley2D::*)() const) &Urho3D::ConstraintPulley2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintPulley2D::*)() const) &Urho3D::ConstraintPulley2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintPulley2D", (void (Urho3D::ConstraintPulley2D::*)()) &Urho3D::ConstraintPulley2D::~ConstraintPulley2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetOwnerBodyGroundAnchor", (void (Urho3D::ConstraintPulley2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintPulley2D::SetOwnerBodyGroundAnchor, "todo: docstring", py::arg("groundAnchor"))
  .def("SetOtherBodyGroundAnchor", (void (Urho3D::ConstraintPulley2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintPulley2D::SetOtherBodyGroundAnchor, "todo: docstring", py::arg("groundAnchor"))
  .def("SetOwnerBodyAnchor", (void (Urho3D::ConstraintPulley2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintPulley2D::SetOwnerBodyAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetOtherBodyAnchor", (void (Urho3D::ConstraintPulley2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintPulley2D::SetOtherBodyAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetRatio", (void (Urho3D::ConstraintPulley2D::*)(float)) &Urho3D::ConstraintPulley2D::SetRatio, "todo: docstring", py::arg("ratio"))
  .def("GetOwnerBodyGroundAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintPulley2D::*)() const) &Urho3D::ConstraintPulley2D::GetOwnerBodyGroundAnchor, "todo: docstring")
  .def("GetOtherBodyGroundAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintPulley2D::*)() const) &Urho3D::ConstraintPulley2D::GetOtherBodyGroundAnchor, "todo: docstring")
  .def("GetOwnerBodyAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintPulley2D::*)() const) &Urho3D::ConstraintPulley2D::GetOwnerBodyAnchor, "todo: docstring")
  .def("GetOtherBodyAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintPulley2D::*)() const) &Urho3D::ConstraintPulley2D::GetOtherBodyAnchor, "todo: docstring")
  .def("GetRatio", (float (Urho3D::ConstraintPulley2D::*)() const) &Urho3D::ConstraintPulley2D::GetRatio, "todo: docstring")
// Class Variables:
;

// Class TmxFile2D Implementation
pyclass_Var_Urho3D_TmxFile2D
  .def("GetType", (Urho3D::StringHash (Urho3D::TmxFile2D::*)() const) &Urho3D::TmxFile2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::TmxFile2D::*)() const) &Urho3D::TmxFile2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::TmxFile2D::*)() const) &Urho3D::TmxFile2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~TmxFile2D", (void (Urho3D::TmxFile2D::*)()) &Urho3D::TmxFile2D::~TmxFile2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::TmxFile2D::*)(Urho3D::Deserializer &)) &Urho3D::TmxFile2D::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::TmxFile2D::*)()) &Urho3D::TmxFile2D::EndLoad, "todo: docstring")
  .def("SetInfo", (bool (Urho3D::TmxFile2D::*)(Urho3D::Orientation2D, int, int, float, float)) &Urho3D::TmxFile2D::SetInfo, "todo: docstring", py::arg("orientation"), py::arg("width"), py::arg("height"), py::arg("tileWidth"), py::arg("tileHeight"))
  //.def("AddLayer", (void (Urho3D::TmxFile2D::*)(unsigned int, Urho3D::TmxLayer2D *)) &Urho3D::TmxFile2D::AddLayer, "todo: docstring", py::arg("index"), py::arg("layer"))
    //['unsigned int', 'Urho3D::TmxLayer2D']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  //.def("AddLayer", (void (Urho3D::TmxFile2D::*)(Urho3D::TmxLayer2D *)) &Urho3D::TmxFile2D::AddLayer, "todo: docstring", py::arg("layer"))
    //['Urho3D::TmxLayer2D']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 1
  .def("GetInfo", (const Urho3D::TileMapInfo2D & (Urho3D::TmxFile2D::*)() const) &Urho3D::TmxFile2D::GetInfo, "todo: docstring")
  .def("GetTileSprite", (Urho3D::Sprite2D * (Urho3D::TmxFile2D::*)(unsigned int) const) &Urho3D::TmxFile2D::GetTileSprite, "todo: docstring", py::arg("gid"))
  //.def("GetTileCollisionShapes", (Vector<SharedPtr<Urho3D::TileMapObject2D> > (Urho3D::TmxFile2D::*)(unsigned int) const) &Urho3D::TmxFile2D::GetTileCollisionShapes, "todo: docstring", py::arg("gid"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetTilePropertySet", (Urho3D::PropertySet2D * (Urho3D::TmxFile2D::*)(unsigned int) const) &Urho3D::TmxFile2D::GetTilePropertySet, "todo: docstring", py::arg("gid"))
  .def("GetNumLayers", (unsigned int (Urho3D::TmxFile2D::*)() const) &Urho3D::TmxFile2D::GetNumLayers, "todo: docstring")
  //.def("GetLayer", (const Urho3D::TmxLayer2D * (Urho3D::TmxFile2D::*)(unsigned int) const) &Urho3D::TmxFile2D::GetLayer, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
  .def("SetSpriteTextureEdgeOffset", (void (Urho3D::TmxFile2D::*)(float)) &Urho3D::TmxFile2D::SetSpriteTextureEdgeOffset, "todo: docstring", py::arg("offset"))
  .def("GetSpriteTextureEdgeOffset", (float (Urho3D::TmxFile2D::*)() const) &Urho3D::TmxFile2D::GetSpriteTextureEdgeOffset, "todo: docstring")
// Class Variables:
;

// Class ObjectAnimation Implementation
pyclass_Var_Urho3D_ObjectAnimation
  .def("GetType", (Urho3D::StringHash (Urho3D::ObjectAnimation::*)() const) &Urho3D::ObjectAnimation::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ObjectAnimation::*)() const) &Urho3D::ObjectAnimation::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ObjectAnimation::*)() const) &Urho3D::ObjectAnimation::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ObjectAnimation", (void (Urho3D::ObjectAnimation::*)()) &Urho3D::ObjectAnimation::~ObjectAnimation, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::ObjectAnimation::*)(Urho3D::Deserializer &)) &Urho3D::ObjectAnimation::BeginLoad, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::ObjectAnimation::*)(Urho3D::Serializer &) const) &Urho3D::ObjectAnimation::Save, "todo: docstring", py::arg("dest"))
  .def("LoadXML", (bool (Urho3D::ObjectAnimation::*)(const Urho3D::XMLElement &)) &Urho3D::ObjectAnimation::LoadXML, "todo: docstring", py::arg("source"))
  .def("SaveXML", (bool (Urho3D::ObjectAnimation::*)(Urho3D::XMLElement &) const) &Urho3D::ObjectAnimation::SaveXML, "todo: docstring", py::arg("dest"))
  .def("LoadJSON", (bool (Urho3D::ObjectAnimation::*)(const Urho3D::JSONValue &)) &Urho3D::ObjectAnimation::LoadJSON, "todo: docstring", py::arg("source"))
  .def("SaveJSON", (bool (Urho3D::ObjectAnimation::*)(Urho3D::JSONValue &) const) &Urho3D::ObjectAnimation::SaveJSON, "todo: docstring", py::arg("dest"))
  .def("AddAttributeAnimation", (void (Urho3D::ObjectAnimation::*)(const Urho3D::String &, Urho3D::ValueAnimation *, Urho3D::WrapMode, float)) &Urho3D::ObjectAnimation::AddAttributeAnimation, "todo: docstring", py::arg("name"), py::arg("attributeAnimation"), py::arg("wrapMode")=WM_LOOP, py::arg("speed")=1.0f)
  .def("RemoveAttributeAnimation", (void (Urho3D::ObjectAnimation::*)(const Urho3D::String &)) &Urho3D::ObjectAnimation::RemoveAttributeAnimation, "todo: docstring", py::arg("name"))
  .def("RemoveAttributeAnimation", (void (Urho3D::ObjectAnimation::*)(Urho3D::ValueAnimation *)) &Urho3D::ObjectAnimation::RemoveAttributeAnimation, "todo: docstring", py::arg("attributeAnimation"))
  .def("GetAttributeAnimation", (Urho3D::ValueAnimation * (Urho3D::ObjectAnimation::*)(const Urho3D::String &) const) &Urho3D::ObjectAnimation::GetAttributeAnimation, "todo: docstring", py::arg("name"))
  .def("GetAttributeAnimationWrapMode", (Urho3D::WrapMode (Urho3D::ObjectAnimation::*)(const Urho3D::String &) const) &Urho3D::ObjectAnimation::GetAttributeAnimationWrapMode, "todo: docstring", py::arg("name"))
  .def("GetAttributeAnimationSpeed", (float (Urho3D::ObjectAnimation::*)(const Urho3D::String &) const) &Urho3D::ObjectAnimation::GetAttributeAnimationSpeed, "todo: docstring", py::arg("name"))
  //.def("GetAttributeAnimationInfos", (const HashMap<Urho3D::String, SharedPtr<Urho3D::ValueAnimationInfo> > & (Urho3D::ObjectAnimation::*)() const) &Urho3D::ObjectAnimation::GetAttributeAnimationInfos, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetAttributeAnimationInfo", (Urho3D::ValueAnimationInfo * (Urho3D::ObjectAnimation::*)(const Urho3D::String &) const) &Urho3D::ObjectAnimation::GetAttributeAnimationInfo, "todo: docstring", py::arg("name"))
// Class Variables:
;

// Class Texture Implementation
pyclass_Var_Urho3D_Texture
  .def("GetType", (Urho3D::StringHash (Urho3D::Texture::*)() const) &Urho3D::Texture::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Texture::*)() const) &Urho3D::Texture::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Texture::*)() const) &Urho3D::Texture::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Texture", (void (Urho3D::Texture::*)()) &Urho3D::Texture::~Texture, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetNumLevels", (void (Urho3D::Texture::*)(unsigned int)) &Urho3D::Texture::SetNumLevels, "todo: docstring", py::arg("levels"))
  .def("SetFilterMode", (void (Urho3D::Texture::*)(Urho3D::TextureFilterMode)) &Urho3D::Texture::SetFilterMode, "todo: docstring", py::arg("mode"))
  .def("SetAddressMode", (void (Urho3D::Texture::*)(Urho3D::TextureCoordinate, Urho3D::TextureAddressMode)) &Urho3D::Texture::SetAddressMode, "todo: docstring", py::arg("coord"), py::arg("mode"))
  .def("SetAnisotropy", (void (Urho3D::Texture::*)(unsigned int)) &Urho3D::Texture::SetAnisotropy, "todo: docstring", py::arg("level"))
  .def("SetShadowCompare", (void (Urho3D::Texture::*)(bool)) &Urho3D::Texture::SetShadowCompare, "todo: docstring", py::arg("enable"))
  .def("SetBorderColor", (void (Urho3D::Texture::*)(const Urho3D::Color &)) &Urho3D::Texture::SetBorderColor, "todo: docstring", py::arg("color"))
  .def("SetSRGB", (void (Urho3D::Texture::*)(bool)) &Urho3D::Texture::SetSRGB, "todo: docstring", py::arg("enable"))
  .def("SetBackupTexture", (void (Urho3D::Texture::*)(Urho3D::Texture *)) &Urho3D::Texture::SetBackupTexture, "todo: docstring", py::arg("texture"))
  .def("SetMipsToSkip", (void (Urho3D::Texture::*)(Urho3D::MaterialQuality, int)) &Urho3D::Texture::SetMipsToSkip, "todo: docstring", py::arg("quality"), py::arg("toSkip"))
  .def("GetFormat", (unsigned int (Urho3D::Texture::*)() const) &Urho3D::Texture::GetFormat, "todo: docstring")
  .def("IsCompressed", (bool (Urho3D::Texture::*)() const) &Urho3D::Texture::IsCompressed, "todo: docstring")
  .def("GetLevels", (unsigned int (Urho3D::Texture::*)() const) &Urho3D::Texture::GetLevels, "todo: docstring")
  .def("GetWidth", (int (Urho3D::Texture::*)() const) &Urho3D::Texture::GetWidth, "todo: docstring")
  .def("GetHeight", (int (Urho3D::Texture::*)() const) &Urho3D::Texture::GetHeight, "todo: docstring")
  .def("GetDepth", (int (Urho3D::Texture::*)() const) &Urho3D::Texture::GetDepth, "todo: docstring")
  .def("GetFilterMode", (Urho3D::TextureFilterMode (Urho3D::Texture::*)() const) &Urho3D::Texture::GetFilterMode, "todo: docstring")
  .def("GetAddressMode", (Urho3D::TextureAddressMode (Urho3D::Texture::*)(Urho3D::TextureCoordinate) const) &Urho3D::Texture::GetAddressMode, "todo: docstring", py::arg("coord"))
  .def("GetAnisotropy", (unsigned int (Urho3D::Texture::*)() const) &Urho3D::Texture::GetAnisotropy, "todo: docstring")
  .def("GetShadowCompare", (bool (Urho3D::Texture::*)() const) &Urho3D::Texture::GetShadowCompare, "todo: docstring")
  .def("GetBorderColor", (const Urho3D::Color & (Urho3D::Texture::*)() const) &Urho3D::Texture::GetBorderColor, "todo: docstring")
  .def("GetSRGB", (bool (Urho3D::Texture::*)() const) &Urho3D::Texture::GetSRGB, "todo: docstring")
  .def("GetMultiSample", (int (Urho3D::Texture::*)() const) &Urho3D::Texture::GetMultiSample, "todo: docstring")
  .def("GetAutoResolve", (bool (Urho3D::Texture::*)() const) &Urho3D::Texture::GetAutoResolve, "todo: docstring")
  .def("IsResolveDirty", (bool (Urho3D::Texture::*)() const) &Urho3D::Texture::IsResolveDirty, "todo: docstring")
  .def("GetLevelsDirty", (bool (Urho3D::Texture::*)() const) &Urho3D::Texture::GetLevelsDirty, "todo: docstring")
  .def("GetBackupTexture", (Urho3D::Texture * (Urho3D::Texture::*)() const) &Urho3D::Texture::GetBackupTexture, "todo: docstring")
  .def("GetMipsToSkip", (int (Urho3D::Texture::*)(Urho3D::MaterialQuality) const) &Urho3D::Texture::GetMipsToSkip, "todo: docstring", py::arg("quality"))
  .def("GetLevelWidth", (int (Urho3D::Texture::*)(unsigned int) const) &Urho3D::Texture::GetLevelWidth, "todo: docstring", py::arg("level"))
  .def("GetLevelHeight", (int (Urho3D::Texture::*)(unsigned int) const) &Urho3D::Texture::GetLevelHeight, "todo: docstring", py::arg("level"))
  .def("GetLevelDepth", (int (Urho3D::Texture::*)(unsigned int) const) &Urho3D::Texture::GetLevelDepth, "todo: docstring", py::arg("level"))
  .def("GetUsage", (Urho3D::TextureUsage (Urho3D::Texture::*)() const) &Urho3D::Texture::GetUsage, "todo: docstring")
  .def("GetDataSize", (unsigned int (Urho3D::Texture::*)(int, int) const) &Urho3D::Texture::GetDataSize, "todo: docstring", py::arg("width"), py::arg("height"))
  .def("GetDataSize", (unsigned int (Urho3D::Texture::*)(int, int, int) const) &Urho3D::Texture::GetDataSize, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("depth"))
  .def("GetRowDataSize", (unsigned int (Urho3D::Texture::*)(int) const) &Urho3D::Texture::GetRowDataSize, "todo: docstring", py::arg("width"))
  .def("GetComponents", (unsigned int (Urho3D::Texture::*)() const) &Urho3D::Texture::GetComponents, "todo: docstring")
  .def("GetParametersDirty", (bool (Urho3D::Texture::*)() const) &Urho3D::Texture::GetParametersDirty, "todo: docstring")
  .def("SetParameters", (void (Urho3D::Texture::*)(Urho3D::XMLFile *)) &Urho3D::Texture::SetParameters, "todo: docstring", py::arg("file"))
  .def("SetParameters", (void (Urho3D::Texture::*)(const Urho3D::XMLElement &)) &Urho3D::Texture::SetParameters, "todo: docstring", py::arg("element"))
  .def("SetParametersDirty", (void (Urho3D::Texture::*)()) &Urho3D::Texture::SetParametersDirty, "todo: docstring")
  .def("UpdateParameters", (void (Urho3D::Texture::*)()) &Urho3D::Texture::UpdateParameters, "todo: docstring")
  .def("GetShaderResourceView", (void * (Urho3D::Texture::*)() const) &Urho3D::Texture::GetShaderResourceView, "todo: docstring")
  .def("GetSampler", (void * (Urho3D::Texture::*)() const) &Urho3D::Texture::GetSampler, "todo: docstring")
  .def("GetResolveTexture", (void * (Urho3D::Texture::*)() const) &Urho3D::Texture::GetResolveTexture, "todo: docstring")
  .def("GetTarget", (unsigned int (Urho3D::Texture::*)() const) &Urho3D::Texture::GetTarget, "todo: docstring")
  .def("GetSRGBFormat", (unsigned int (Urho3D::Texture::*)(unsigned int)) &Urho3D::Texture::GetSRGBFormat, "todo: docstring", py::arg("format"))
  .def("SetResolveDirty", (void (Urho3D::Texture::*)(bool)) &Urho3D::Texture::SetResolveDirty, "todo: docstring", py::arg("enable"))
  .def("SetLevelsDirty", (void (Urho3D::Texture::*)()) &Urho3D::Texture::SetLevelsDirty, "todo: docstring")
  .def("RegenerateLevels", (void (Urho3D::Texture::*)()) &Urho3D::Texture::RegenerateLevels, "todo: docstring")
// Class Variables:
;

// Class TextureCube Implementation
pyclass_Var_Urho3D_TextureCube
  .def("GetType", (Urho3D::StringHash (Urho3D::TextureCube::*)() const) &Urho3D::TextureCube::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::TextureCube::*)() const) &Urho3D::TextureCube::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::TextureCube::*)() const) &Urho3D::TextureCube::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~TextureCube", (void (Urho3D::TextureCube::*)()) &Urho3D::TextureCube::~TextureCube, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::TextureCube::*)(Urho3D::Deserializer &)) &Urho3D::TextureCube::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::TextureCube::*)()) &Urho3D::TextureCube::EndLoad, "todo: docstring")
  .def("OnDeviceLost", (void (Urho3D::TextureCube::*)()) &Urho3D::TextureCube::OnDeviceLost, "todo: docstring")
  .def("OnDeviceReset", (void (Urho3D::TextureCube::*)()) &Urho3D::TextureCube::OnDeviceReset, "todo: docstring")
  .def("Release", (void (Urho3D::TextureCube::*)()) &Urho3D::TextureCube::Release, "todo: docstring")
  .def("SetSize", (bool (Urho3D::TextureCube::*)(int, unsigned int, Urho3D::TextureUsage, int)) &Urho3D::TextureCube::SetSize, "todo: docstring", py::arg("size"), py::arg("format"), py::arg("usage")=TEXTURE_STATIC, py::arg("multiSample")=1)
  .def("SetData", (bool (Urho3D::TextureCube::*)(Urho3D::CubeMapFace, unsigned int, int, int, int, int, const void *)) &Urho3D::TextureCube::SetData, "todo: docstring", py::arg("face"), py::arg("level"), py::arg("x"), py::arg("y"), py::arg("width"), py::arg("height"), py::arg("data"))
  .def("SetData", (bool (Urho3D::TextureCube::*)(Urho3D::CubeMapFace, Urho3D::Deserializer &)) &Urho3D::TextureCube::SetData, "todo: docstring", py::arg("face"), py::arg("source"))
  .def("SetData", (bool (Urho3D::TextureCube::*)(Urho3D::CubeMapFace, Urho3D::Image *, bool)) &Urho3D::TextureCube::SetData, "todo: docstring", py::arg("face"), py::arg("image"), py::arg("useAlpha")=false)
  .def("GetData", (bool (Urho3D::TextureCube::*)(Urho3D::CubeMapFace, unsigned int, void *) const) &Urho3D::TextureCube::GetData, "todo: docstring", py::arg("face"), py::arg("level"), py::arg("dest"))
  //.def("GetImage", (SharedPtr<Urho3D::Image> (Urho3D::TextureCube::*)(Urho3D::CubeMapFace) const) &Urho3D::TextureCube::GetImage, "todo: docstring", py::arg("face"))
    //['Urho3D::CubeMapFace']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetRenderSurface", (Urho3D::RenderSurface * (Urho3D::TextureCube::*)(Urho3D::CubeMapFace) const) &Urho3D::TextureCube::GetRenderSurface, "todo: docstring", py::arg("face"))
// Class Variables:
;

// Class Texture2DArray Implementation
pyclass_Var_Urho3D_Texture2DArray
  .def("GetType", (Urho3D::StringHash (Urho3D::Texture2DArray::*)() const) &Urho3D::Texture2DArray::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Texture2DArray::*)() const) &Urho3D::Texture2DArray::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Texture2DArray::*)() const) &Urho3D::Texture2DArray::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Texture2DArray", (void (Urho3D::Texture2DArray::*)()) &Urho3D::Texture2DArray::~Texture2DArray, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Texture2DArray::*)(Urho3D::Deserializer &)) &Urho3D::Texture2DArray::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::Texture2DArray::*)()) &Urho3D::Texture2DArray::EndLoad, "todo: docstring")
  .def("OnDeviceLost", (void (Urho3D::Texture2DArray::*)()) &Urho3D::Texture2DArray::OnDeviceLost, "todo: docstring")
  .def("OnDeviceReset", (void (Urho3D::Texture2DArray::*)()) &Urho3D::Texture2DArray::OnDeviceReset, "todo: docstring")
  .def("Release", (void (Urho3D::Texture2DArray::*)()) &Urho3D::Texture2DArray::Release, "todo: docstring")
  .def("SetLayers", (void (Urho3D::Texture2DArray::*)(unsigned int)) &Urho3D::Texture2DArray::SetLayers, "todo: docstring", py::arg("layers"))
  .def("SetSize", (bool (Urho3D::Texture2DArray::*)(unsigned int, int, int, unsigned int, Urho3D::TextureUsage)) &Urho3D::Texture2DArray::SetSize, "todo: docstring", py::arg("layers"), py::arg("width"), py::arg("height"), py::arg("format"), py::arg("usage")=TEXTURE_STATIC)
  .def("SetData", (bool (Urho3D::Texture2DArray::*)(unsigned int, unsigned int, int, int, int, int, const void *)) &Urho3D::Texture2DArray::SetData, "todo: docstring", py::arg("layer"), py::arg("level"), py::arg("x"), py::arg("y"), py::arg("width"), py::arg("height"), py::arg("data"))
  .def("SetData", (bool (Urho3D::Texture2DArray::*)(unsigned int, Urho3D::Deserializer &)) &Urho3D::Texture2DArray::SetData, "todo: docstring", py::arg("layer"), py::arg("source"))
  .def("SetData", (bool (Urho3D::Texture2DArray::*)(unsigned int, Urho3D::Image *, bool)) &Urho3D::Texture2DArray::SetData, "todo: docstring", py::arg("layer"), py::arg("image"), py::arg("useAlpha")=false)
  .def("GetLayers", (unsigned int (Urho3D::Texture2DArray::*)() const) &Urho3D::Texture2DArray::GetLayers, "todo: docstring")
  .def("GetData", (bool (Urho3D::Texture2DArray::*)(unsigned int, unsigned int, void *) const) &Urho3D::Texture2DArray::GetData, "todo: docstring", py::arg("layer"), py::arg("level"), py::arg("dest"))
  .def("GetRenderSurface", (Urho3D::RenderSurface * (Urho3D::Texture2DArray::*)() const) &Urho3D::Texture2DArray::GetRenderSurface, "todo: docstring")
// Class Variables:
;

// Class NetworkPriority Implementation
pyclass_Var_Urho3D_NetworkPriority
  .def("GetType", (Urho3D::StringHash (Urho3D::NetworkPriority::*)() const) &Urho3D::NetworkPriority::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::NetworkPriority::*)() const) &Urho3D::NetworkPriority::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::NetworkPriority::*)() const) &Urho3D::NetworkPriority::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~NetworkPriority", (void (Urho3D::NetworkPriority::*)()) &Urho3D::NetworkPriority::~NetworkPriority, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetBasePriority", (void (Urho3D::NetworkPriority::*)(float)) &Urho3D::NetworkPriority::SetBasePriority, "todo: docstring", py::arg("priority"))
  .def("SetDistanceFactor", (void (Urho3D::NetworkPriority::*)(float)) &Urho3D::NetworkPriority::SetDistanceFactor, "todo: docstring", py::arg("factor"))
  .def("SetMinPriority", (void (Urho3D::NetworkPriority::*)(float)) &Urho3D::NetworkPriority::SetMinPriority, "todo: docstring", py::arg("priority"))
  .def("SetAlwaysUpdateOwner", (void (Urho3D::NetworkPriority::*)(bool)) &Urho3D::NetworkPriority::SetAlwaysUpdateOwner, "todo: docstring", py::arg("enable"))
  .def("GetBasePriority", (float (Urho3D::NetworkPriority::*)() const) &Urho3D::NetworkPriority::GetBasePriority, "todo: docstring")
  .def("GetDistanceFactor", (float (Urho3D::NetworkPriority::*)() const) &Urho3D::NetworkPriority::GetDistanceFactor, "todo: docstring")
  .def("GetMinPriority", (float (Urho3D::NetworkPriority::*)() const) &Urho3D::NetworkPriority::GetMinPriority, "todo: docstring")
  .def("GetAlwaysUpdateOwner", (bool (Urho3D::NetworkPriority::*)() const) &Urho3D::NetworkPriority::GetAlwaysUpdateOwner, "todo: docstring")
  .def("CheckUpdate", (bool (Urho3D::NetworkPriority::*)(float, float &)) &Urho3D::NetworkPriority::CheckUpdate, "todo: docstring", py::arg("distance"), py::arg("accumulator"))
// Class Variables:
;

// Class CollisionBox2D Implementation
pyclass_Var_Urho3D_CollisionBox2D
  .def("GetType", (Urho3D::StringHash (Urho3D::CollisionBox2D::*)() const) &Urho3D::CollisionBox2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::CollisionBox2D::*)() const) &Urho3D::CollisionBox2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::CollisionBox2D::*)() const) &Urho3D::CollisionBox2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~CollisionBox2D", (void (Urho3D::CollisionBox2D::*)()) &Urho3D::CollisionBox2D::~CollisionBox2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetSize", (void (Urho3D::CollisionBox2D::*)(const Urho3D::Vector2 &)) &Urho3D::CollisionBox2D::SetSize, "todo: docstring", py::arg("size"))
  .def("SetSize", (void (Urho3D::CollisionBox2D::*)(float, float)) &Urho3D::CollisionBox2D::SetSize, "todo: docstring", py::arg("width"), py::arg("height"))
  .def("SetCenter", (void (Urho3D::CollisionBox2D::*)(const Urho3D::Vector2 &)) &Urho3D::CollisionBox2D::SetCenter, "todo: docstring", py::arg("center"))
  .def("SetCenter", (void (Urho3D::CollisionBox2D::*)(float, float)) &Urho3D::CollisionBox2D::SetCenter, "todo: docstring", py::arg("x"), py::arg("y"))
  .def("SetAngle", (void (Urho3D::CollisionBox2D::*)(float)) &Urho3D::CollisionBox2D::SetAngle, "todo: docstring", py::arg("angle"))
  .def("GetSize", (const Urho3D::Vector2 & (Urho3D::CollisionBox2D::*)() const) &Urho3D::CollisionBox2D::GetSize, "todo: docstring")
  .def("GetCenter", (const Urho3D::Vector2 & (Urho3D::CollisionBox2D::*)() const) &Urho3D::CollisionBox2D::GetCenter, "todo: docstring")
  .def("GetAngle", (float (Urho3D::CollisionBox2D::*)() const) &Urho3D::CollisionBox2D::GetAngle, "todo: docstring")
// Class Variables:
;

// Class ConstraintWheel2D Implementation
pyclass_Var_Urho3D_ConstraintWheel2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintWheel2D", (void (Urho3D::ConstraintWheel2D::*)()) &Urho3D::ConstraintWheel2D::~ConstraintWheel2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetAnchor", (void (Urho3D::ConstraintWheel2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintWheel2D::SetAnchor, "todo: docstring", py::arg("anchor"))
  .def("SetAxis", (void (Urho3D::ConstraintWheel2D::*)(const Urho3D::Vector2 &)) &Urho3D::ConstraintWheel2D::SetAxis, "todo: docstring", py::arg("axis"))
  .def("SetEnableMotor", (void (Urho3D::ConstraintWheel2D::*)(bool)) &Urho3D::ConstraintWheel2D::SetEnableMotor, "todo: docstring", py::arg("enableMotor"))
  .def("SetMaxMotorTorque", (void (Urho3D::ConstraintWheel2D::*)(float)) &Urho3D::ConstraintWheel2D::SetMaxMotorTorque, "todo: docstring", py::arg("maxMotorTorque"))
  .def("SetMotorSpeed", (void (Urho3D::ConstraintWheel2D::*)(float)) &Urho3D::ConstraintWheel2D::SetMotorSpeed, "todo: docstring", py::arg("motorSpeed"))
  .def("SetFrequencyHz", (void (Urho3D::ConstraintWheel2D::*)(float)) &Urho3D::ConstraintWheel2D::SetFrequencyHz, "todo: docstring", py::arg("frequencyHz"))
  .def("SetDampingRatio", (void (Urho3D::ConstraintWheel2D::*)(float)) &Urho3D::ConstraintWheel2D::SetDampingRatio, "todo: docstring", py::arg("dampingRatio"))
  .def("GetAnchor", (const Urho3D::Vector2 & (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetAnchor, "todo: docstring")
  .def("GetAxis", (const Urho3D::Vector2 & (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetAxis, "todo: docstring")
  .def("GetEnableMotor", (bool (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetEnableMotor, "todo: docstring")
  .def("GetMaxMotorTorque", (float (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetMaxMotorTorque, "todo: docstring")
  .def("GetMotorSpeed", (float (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetMotorSpeed, "todo: docstring")
  .def("GetFrequencyHz", (float (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetFrequencyHz, "todo: docstring")
  .def("GetDampingRatio", (float (Urho3D::ConstraintWheel2D::*)() const) &Urho3D::ConstraintWheel2D::GetDampingRatio, "todo: docstring")
// Class Variables:
;

// Class Material Implementation
pyclass_Var_Urho3D_Material
  .def("GetType", (Urho3D::StringHash (Urho3D::Material::*)() const) &Urho3D::Material::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Material::*)() const) &Urho3D::Material::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Material::*)() const) &Urho3D::Material::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Material", (void (Urho3D::Material::*)()) &Urho3D::Material::~Material, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Material::*)(Urho3D::Deserializer &)) &Urho3D::Material::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::Material::*)()) &Urho3D::Material::EndLoad, "todo: docstring")
  .def("Save", (bool (Urho3D::Material::*)(Urho3D::Serializer &) const) &Urho3D::Material::Save, "todo: docstring", py::arg("dest"))
  .def("Load", (bool (Urho3D::Material::*)(const Urho3D::XMLElement &)) &Urho3D::Material::Load, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::Material::*)(Urho3D::XMLElement &) const) &Urho3D::Material::Save, "todo: docstring", py::arg("dest"))
  .def("Load", (bool (Urho3D::Material::*)(const Urho3D::JSONValue &)) &Urho3D::Material::Load, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::Material::*)(Urho3D::JSONValue &) const) &Urho3D::Material::Save, "todo: docstring", py::arg("dest"))
  .def("SetNumTechniques", (void (Urho3D::Material::*)(unsigned int)) &Urho3D::Material::SetNumTechniques, "todo: docstring", py::arg("num"))
  .def("SetTechnique", (void (Urho3D::Material::*)(unsigned int, Urho3D::Technique *, Urho3D::MaterialQuality, float)) &Urho3D::Material::SetTechnique, "todo: docstring", py::arg("index"), py::arg("tech"), py::arg("qualityLevel")=QUALITY_LOW, py::arg("lodDistance")=0.0f)
  .def("SetVertexShaderDefines", (void (Urho3D::Material::*)(const Urho3D::String &)) &Urho3D::Material::SetVertexShaderDefines, "todo: docstring", py::arg("defines"))
  .def("SetPixelShaderDefines", (void (Urho3D::Material::*)(const Urho3D::String &)) &Urho3D::Material::SetPixelShaderDefines, "todo: docstring", py::arg("defines"))
  .def("SetShaderParameter", (void (Urho3D::Material::*)(const Urho3D::String &, const Urho3D::Variant &)) &Urho3D::Material::SetShaderParameter, "todo: docstring", py::arg("name"), py::arg("value"))
  .def("SetShaderParameterAnimation", (void (Urho3D::Material::*)(const Urho3D::String &, Urho3D::ValueAnimation *, Urho3D::WrapMode, float)) &Urho3D::Material::SetShaderParameterAnimation, "todo: docstring", py::arg("name"), py::arg("animation"), py::arg("wrapMode")=WM_LOOP, py::arg("speed")=1.0f)
  .def("SetShaderParameterAnimationWrapMode", (void (Urho3D::Material::*)(const Urho3D::String &, Urho3D::WrapMode)) &Urho3D::Material::SetShaderParameterAnimationWrapMode, "todo: docstring", py::arg("name"), py::arg("wrapMode"))
  .def("SetShaderParameterAnimationSpeed", (void (Urho3D::Material::*)(const Urho3D::String &, float)) &Urho3D::Material::SetShaderParameterAnimationSpeed, "todo: docstring", py::arg("name"), py::arg("speed"))
  .def("SetTexture", (void (Urho3D::Material::*)(Urho3D::TextureUnit, Urho3D::Texture *)) &Urho3D::Material::SetTexture, "todo: docstring", py::arg("unit"), py::arg("texture"))
  .def("SetUVTransform", (void (Urho3D::Material::*)(const Urho3D::Vector2 &, float, const Urho3D::Vector2 &)) &Urho3D::Material::SetUVTransform, "todo: docstring", py::arg("offset"), py::arg("rotation"), py::arg("repeat"))
  .def("SetUVTransform", (void (Urho3D::Material::*)(const Urho3D::Vector2 &, float, float)) &Urho3D::Material::SetUVTransform, "todo: docstring", py::arg("offset"), py::arg("rotation"), py::arg("repeat"))
  .def("SetCullMode", (void (Urho3D::Material::*)(Urho3D::CullMode)) &Urho3D::Material::SetCullMode, "todo: docstring", py::arg("mode"))
  .def("SetShadowCullMode", (void (Urho3D::Material::*)(Urho3D::CullMode)) &Urho3D::Material::SetShadowCullMode, "todo: docstring", py::arg("mode"))
  .def("SetFillMode", (void (Urho3D::Material::*)(Urho3D::FillMode)) &Urho3D::Material::SetFillMode, "todo: docstring", py::arg("mode"))
  .def("SetDepthBias", (void (Urho3D::Material::*)(const Urho3D::BiasParameters &)) &Urho3D::Material::SetDepthBias, "todo: docstring", py::arg("parameters"))
  .def("SetAlphaToCoverage", (void (Urho3D::Material::*)(bool)) &Urho3D::Material::SetAlphaToCoverage, "todo: docstring", py::arg("enable"))
  .def("SetLineAntiAlias", (void (Urho3D::Material::*)(bool)) &Urho3D::Material::SetLineAntiAlias, "todo: docstring", py::arg("enable"))
  .def("SetRenderOrder", (void (Urho3D::Material::*)(unsigned char)) &Urho3D::Material::SetRenderOrder, "todo: docstring", py::arg("order"))
  .def("SetOcclusion", (void (Urho3D::Material::*)(bool)) &Urho3D::Material::SetOcclusion, "todo: docstring", py::arg("enable"))
  .def("SetScene", (void (Urho3D::Material::*)(Urho3D::Scene *)) &Urho3D::Material::SetScene, "todo: docstring", py::arg("scene"))
  .def("RemoveShaderParameter", (void (Urho3D::Material::*)(const Urho3D::String &)) &Urho3D::Material::RemoveShaderParameter, "todo: docstring", py::arg("name"))
  .def("ReleaseShaders", (void (Urho3D::Material::*)()) &Urho3D::Material::ReleaseShaders, "todo: docstring")
  //.def("Clone", (SharedPtr<Urho3D::Material> (Urho3D::Material::*)(const Urho3D::String &) const) &Urho3D::Material::Clone, "todo: docstring", py::arg("cloneName")=String::EMPTY)
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("SortTechniques", (void (Urho3D::Material::*)()) &Urho3D::Material::SortTechniques, "todo: docstring")
  .def("MarkForAuxView", (void (Urho3D::Material::*)(unsigned int)) &Urho3D::Material::MarkForAuxView, "todo: docstring", py::arg("frameNumber"))
  .def("GetNumTechniques", (unsigned int (Urho3D::Material::*)() const) &Urho3D::Material::GetNumTechniques, "todo: docstring")
  //.def("GetTechniques", (const Vector<Urho3D::TechniqueEntry> & (Urho3D::Material::*)() const) &Urho3D::Material::GetTechniques, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  //.def("GetTechniqueEntry", (const Urho3D::TechniqueEntry & (Urho3D::Material::*)(unsigned int) const) &Urho3D::Material::GetTechniqueEntry, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetTechnique", (Urho3D::Technique * (Urho3D::Material::*)(unsigned int) const) &Urho3D::Material::GetTechnique, "todo: docstring", py::arg("index"))
  .def("GetPass", (Urho3D::Pass * (Urho3D::Material::*)(unsigned int, const Urho3D::String &) const) &Urho3D::Material::GetPass, "todo: docstring", py::arg("index"), py::arg("passName"))
  .def("GetTexture", (Urho3D::Texture * (Urho3D::Material::*)(Urho3D::TextureUnit) const) &Urho3D::Material::GetTexture, "todo: docstring", py::arg("unit"))
  //.def("GetTextures", (const HashMap<Urho3D::TextureUnit, SharedPtr<Urho3D::Texture> > & (Urho3D::Material::*)() const) &Urho3D::Material::GetTextures, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetVertexShaderDefines", (const Urho3D::String & (Urho3D::Material::*)() const) &Urho3D::Material::GetVertexShaderDefines, "todo: docstring")
  .def("GetPixelShaderDefines", (const Urho3D::String & (Urho3D::Material::*)() const) &Urho3D::Material::GetPixelShaderDefines, "todo: docstring")
  .def("GetShaderParameter", (const Urho3D::Variant & (Urho3D::Material::*)(const Urho3D::String &) const) &Urho3D::Material::GetShaderParameter, "todo: docstring", py::arg("name"))
  .def("GetShaderParameterAnimation", (Urho3D::ValueAnimation * (Urho3D::Material::*)(const Urho3D::String &) const) &Urho3D::Material::GetShaderParameterAnimation, "todo: docstring", py::arg("name"))
  .def("GetShaderParameterAnimationWrapMode", (Urho3D::WrapMode (Urho3D::Material::*)(const Urho3D::String &) const) &Urho3D::Material::GetShaderParameterAnimationWrapMode, "todo: docstring", py::arg("name"))
  .def("GetShaderParameterAnimationSpeed", (float (Urho3D::Material::*)(const Urho3D::String &) const) &Urho3D::Material::GetShaderParameterAnimationSpeed, "todo: docstring", py::arg("name"))
  //.def("GetShaderParameters", (const HashMap<Urho3D::StringHash, Urho3D::MaterialShaderParameter> & (Urho3D::Material::*)() const) &Urho3D::Material::GetShaderParameters, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetCullMode", (Urho3D::CullMode (Urho3D::Material::*)() const) &Urho3D::Material::GetCullMode, "todo: docstring")
  .def("GetShadowCullMode", (Urho3D::CullMode (Urho3D::Material::*)() const) &Urho3D::Material::GetShadowCullMode, "todo: docstring")
  .def("GetFillMode", (Urho3D::FillMode (Urho3D::Material::*)() const) &Urho3D::Material::GetFillMode, "todo: docstring")
  .def("GetDepthBias", (const Urho3D::BiasParameters & (Urho3D::Material::*)() const) &Urho3D::Material::GetDepthBias, "todo: docstring")
  .def("GetAlphaToCoverage", (bool (Urho3D::Material::*)() const) &Urho3D::Material::GetAlphaToCoverage, "todo: docstring")
  .def("GetLineAntiAlias", (bool (Urho3D::Material::*)() const) &Urho3D::Material::GetLineAntiAlias, "todo: docstring")
  .def("GetRenderOrder", (unsigned char (Urho3D::Material::*)() const) &Urho3D::Material::GetRenderOrder, "todo: docstring")
  .def("GetAuxViewFrameNumber", (unsigned int (Urho3D::Material::*)() const) &Urho3D::Material::GetAuxViewFrameNumber, "todo: docstring")
  .def("GetOcclusion", (bool (Urho3D::Material::*)() const) &Urho3D::Material::GetOcclusion, "todo: docstring")
  .def("GetSpecular", (bool (Urho3D::Material::*)() const) &Urho3D::Material::GetSpecular, "todo: docstring")
  .def("GetScene", (Urho3D::Scene * (Urho3D::Material::*)() const) &Urho3D::Material::GetScene, "todo: docstring")
  .def("GetShaderParameterHash", (unsigned int (Urho3D::Material::*)() const) &Urho3D::Material::GetShaderParameterHash, "todo: docstring")
// Class Variables:
;

// Class Animation Implementation
pyclass_Var_Urho3D_Animation
  .def("GetType", (Urho3D::StringHash (Urho3D::Animation::*)() const) &Urho3D::Animation::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Animation::*)() const) &Urho3D::Animation::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Animation::*)() const) &Urho3D::Animation::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Animation", (void (Urho3D::Animation::*)()) &Urho3D::Animation::~Animation, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Animation::*)(Urho3D::Deserializer &)) &Urho3D::Animation::BeginLoad, "todo: docstring", py::arg("source"))
  .def("Save", (bool (Urho3D::Animation::*)(Urho3D::Serializer &) const) &Urho3D::Animation::Save, "todo: docstring", py::arg("dest"))
  .def("SetAnimationName", (void (Urho3D::Animation::*)(const Urho3D::String &)) &Urho3D::Animation::SetAnimationName, "todo: docstring", py::arg("name"))
  .def("SetLength", (void (Urho3D::Animation::*)(float)) &Urho3D::Animation::SetLength, "todo: docstring", py::arg("length"))
  .def("CreateTrack", (Urho3D::AnimationTrack * (Urho3D::Animation::*)(const Urho3D::String &)) &Urho3D::Animation::CreateTrack, "todo: docstring", py::arg("name"))
  .def("RemoveTrack", (bool (Urho3D::Animation::*)(const Urho3D::String &)) &Urho3D::Animation::RemoveTrack, "todo: docstring", py::arg("name"))
  .def("RemoveAllTracks", (void (Urho3D::Animation::*)()) &Urho3D::Animation::RemoveAllTracks, "todo: docstring")
  //.def("SetTrigger", (void (Urho3D::Animation::*)(unsigned int, const Urho3D::AnimationTriggerPoint &)) &Urho3D::Animation::SetTrigger, "todo: docstring", py::arg("index"), py::arg("trigger"))
    //['unsigned int', 'Urho3D::AnimationTriggerPoint']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("AddTrigger", (void (Urho3D::Animation::*)(const Urho3D::AnimationTriggerPoint &)) &Urho3D::Animation::AddTrigger, "todo: docstring", py::arg("trigger"))
    //['Urho3D::AnimationTriggerPoint']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("AddTrigger", (void (Urho3D::Animation::*)(float, bool, const Urho3D::Variant &)) &Urho3D::Animation::AddTrigger, "todo: docstring", py::arg("time"), py::arg("timeIsNormalized"), py::arg("data"))
  .def("RemoveTrigger", (void (Urho3D::Animation::*)(unsigned int)) &Urho3D::Animation::RemoveTrigger, "todo: docstring", py::arg("index"))
  .def("RemoveAllTriggers", (void (Urho3D::Animation::*)()) &Urho3D::Animation::RemoveAllTriggers, "todo: docstring")
  .def("SetNumTriggers", (void (Urho3D::Animation::*)(unsigned int)) &Urho3D::Animation::SetNumTriggers, "todo: docstring", py::arg("num"))
  //.def("Clone", (SharedPtr<Urho3D::Animation> (Urho3D::Animation::*)(const Urho3D::String &) const) &Urho3D::Animation::Clone, "todo: docstring", py::arg("cloneName")=String::EMPTY)
    //['Urho3D::String']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetAnimationName", (const Urho3D::String & (Urho3D::Animation::*)() const) &Urho3D::Animation::GetAnimationName, "todo: docstring")
  .def("GetAnimationNameHash", (Urho3D::StringHash (Urho3D::Animation::*)() const) &Urho3D::Animation::GetAnimationNameHash, "todo: docstring")
  .def("GetLength", (float (Urho3D::Animation::*)() const) &Urho3D::Animation::GetLength, "todo: docstring")
  //.def("GetTracks", (const HashMap<Urho3D::StringHash, Urho3D::AnimationTrack> & (Urho3D::Animation::*)() const) &Urho3D::Animation::GetTracks, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumTracks", (unsigned int (Urho3D::Animation::*)() const) &Urho3D::Animation::GetNumTracks, "todo: docstring")
  .def("GetTrack", (Urho3D::AnimationTrack * (Urho3D::Animation::*)(unsigned int)) &Urho3D::Animation::GetTrack, "todo: docstring", py::arg("index"))
  .def("GetTrack", (Urho3D::AnimationTrack * (Urho3D::Animation::*)(const Urho3D::String &)) &Urho3D::Animation::GetTrack, "todo: docstring", py::arg("name"))
  .def("GetTrack", (Urho3D::AnimationTrack * (Urho3D::Animation::*)(Urho3D::StringHash)) &Urho3D::Animation::GetTrack, "todo: docstring", py::arg("nameHash"))
  //.def("GetTriggers", (const Vector<Urho3D::AnimationTriggerPoint> & (Urho3D::Animation::*)() const) &Urho3D::Animation::GetTriggers, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetNumTriggers", (unsigned int (Urho3D::Animation::*)() const) &Urho3D::Animation::GetNumTriggers, "todo: docstring")
  //.def("GetTrigger", (Urho3D::AnimationTriggerPoint * (Urho3D::Animation::*)(unsigned int)) &Urho3D::Animation::GetTrigger, "todo: docstring", py::arg("index"))
    //['unsigned int']; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 1
// Class Variables:
;

// Class Text3D Implementation
pyclass_Var_Urho3D_Text3D
  .def("GetType", (Urho3D::StringHash (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Text3D", (void (Urho3D::Text3D::*)()) &Urho3D::Text3D::~Text3D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("ApplyAttributes", (void (Urho3D::Text3D::*)()) &Urho3D::Text3D::ApplyAttributes, "todo: docstring")
  //.def("UpdateBatches", (void (Urho3D::Text3D::*)(const Urho3D::FrameInfo &)) &Urho3D::Text3D::UpdateBatches, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  //.def("UpdateGeometry", (void (Urho3D::Text3D::*)(const Urho3D::FrameInfo &)) &Urho3D::Text3D::UpdateGeometry, "todo: docstring", py::arg("frame"))
    //['Urho3D::FrameInfo']; op False, ctor False, dtor False, variadic False, deleted False, ret bad False, param bad True, max ptr 0
  .def("GetUpdateGeometryType", (Urho3D::UpdateGeometryType (Urho3D::Text3D::*)()) &Urho3D::Text3D::GetUpdateGeometryType, "todo: docstring")
  .def("SetFont", (bool (Urho3D::Text3D::*)(const Urho3D::String &, float)) &Urho3D::Text3D::SetFont, "todo: docstring", py::arg("fontName"), py::arg("size")=DEFAULT_FONT_SIZE)
  .def("SetFont", (bool (Urho3D::Text3D::*)(Urho3D::Font *, float)) &Urho3D::Text3D::SetFont, "todo: docstring", py::arg("font"), py::arg("size")=DEFAULT_FONT_SIZE)
  .def("SetFontSize", (bool (Urho3D::Text3D::*)(float)) &Urho3D::Text3D::SetFontSize, "todo: docstring", py::arg("size"))
  .def("SetMaterial", (void (Urho3D::Text3D::*)(Urho3D::Material *)) &Urho3D::Text3D::SetMaterial, "todo: docstring", py::arg("material"))
  .def("SetText", (void (Urho3D::Text3D::*)(const Urho3D::String &)) &Urho3D::Text3D::SetText, "todo: docstring", py::arg("text"))
  .def("SetAlignment", (void (Urho3D::Text3D::*)(Urho3D::HorizontalAlignment, Urho3D::VerticalAlignment)) &Urho3D::Text3D::SetAlignment, "todo: docstring", py::arg("hAlign"), py::arg("vAlign"))
  .def("SetHorizontalAlignment", (void (Urho3D::Text3D::*)(Urho3D::HorizontalAlignment)) &Urho3D::Text3D::SetHorizontalAlignment, "todo: docstring", py::arg("align"))
  .def("SetVerticalAlignment", (void (Urho3D::Text3D::*)(Urho3D::VerticalAlignment)) &Urho3D::Text3D::SetVerticalAlignment, "todo: docstring", py::arg("align"))
  .def("SetTextAlignment", (void (Urho3D::Text3D::*)(Urho3D::HorizontalAlignment)) &Urho3D::Text3D::SetTextAlignment, "todo: docstring", py::arg("align"))
  .def("SetRowSpacing", (void (Urho3D::Text3D::*)(float)) &Urho3D::Text3D::SetRowSpacing, "todo: docstring", py::arg("spacing"))
  .def("SetWordwrap", (void (Urho3D::Text3D::*)(bool)) &Urho3D::Text3D::SetWordwrap, "todo: docstring", py::arg("enable"))
  .def("SetTextEffect", (void (Urho3D::Text3D::*)(Urho3D::TextEffect)) &Urho3D::Text3D::SetTextEffect, "todo: docstring", py::arg("textEffect"))
  .def("SetEffectShadowOffset", (void (Urho3D::Text3D::*)(const Urho3D::IntVector2 &)) &Urho3D::Text3D::SetEffectShadowOffset, "todo: docstring", py::arg("offset"))
  .def("SetEffectStrokeThickness", (void (Urho3D::Text3D::*)(int)) &Urho3D::Text3D::SetEffectStrokeThickness, "todo: docstring", py::arg("thickness"))
  .def("SetEffectRoundStroke", (void (Urho3D::Text3D::*)(bool)) &Urho3D::Text3D::SetEffectRoundStroke, "todo: docstring", py::arg("roundStroke"))
  .def("SetEffectColor", (void (Urho3D::Text3D::*)(const Urho3D::Color &)) &Urho3D::Text3D::SetEffectColor, "todo: docstring", py::arg("effectColor"))
  .def("SetEffectDepthBias", (void (Urho3D::Text3D::*)(float)) &Urho3D::Text3D::SetEffectDepthBias, "todo: docstring", py::arg("bias"))
  .def("SetWidth", (void (Urho3D::Text3D::*)(int)) &Urho3D::Text3D::SetWidth, "todo: docstring", py::arg("width"))
  .def("SetColor", (void (Urho3D::Text3D::*)(const Urho3D::Color &)) &Urho3D::Text3D::SetColor, "todo: docstring", py::arg("color"))
  .def("SetColor", (void (Urho3D::Text3D::*)(Urho3D::Corner, const Urho3D::Color &)) &Urho3D::Text3D::SetColor, "todo: docstring", py::arg("corner"), py::arg("color"))
  .def("SetOpacity", (void (Urho3D::Text3D::*)(float)) &Urho3D::Text3D::SetOpacity, "todo: docstring", py::arg("opacity"))
  .def("SetFixedScreenSize", (void (Urho3D::Text3D::*)(bool)) &Urho3D::Text3D::SetFixedScreenSize, "todo: docstring", py::arg("enable"))
  .def("SetFaceCameraMode", (void (Urho3D::Text3D::*)(Urho3D::FaceCameraMode)) &Urho3D::Text3D::SetFaceCameraMode, "todo: docstring", py::arg("mode"))
  .def("GetFont", (Urho3D::Font * (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetFont, "todo: docstring")
  .def("GetFontSize", (float (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetFontSize, "todo: docstring")
  .def("GetMaterial", (Urho3D::Material * (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetMaterial, "todo: docstring")
  .def("GetText", (const Urho3D::String & (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetText, "todo: docstring")
  .def("GetTextAlignment", (Urho3D::HorizontalAlignment (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetTextAlignment, "todo: docstring")
  .def("GetHorizontalAlignment", (Urho3D::HorizontalAlignment (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetHorizontalAlignment, "todo: docstring")
  .def("GetVerticalAlignment", (Urho3D::VerticalAlignment (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetVerticalAlignment, "todo: docstring")
  .def("GetRowSpacing", (float (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetRowSpacing, "todo: docstring")
  .def("GetWordwrap", (bool (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetWordwrap, "todo: docstring")
  .def("GetTextEffect", (Urho3D::TextEffect (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetTextEffect, "todo: docstring")
  .def("GetEffectShadowOffset", (const Urho3D::IntVector2 & (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetEffectShadowOffset, "todo: docstring")
  .def("GetEffectStrokeThickness", (int (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetEffectStrokeThickness, "todo: docstring")
  .def("GetEffectRoundStroke", (bool (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetEffectRoundStroke, "todo: docstring")
  .def("GetEffectColor", (const Urho3D::Color & (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetEffectColor, "todo: docstring")
  .def("GetEffectDepthBias", (float (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetEffectDepthBias, "todo: docstring")
  .def("GetWidth", (int (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetWidth, "todo: docstring")
  .def("GetHeight", (int (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetHeight, "todo: docstring")
  .def("GetRowHeight", (int (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetRowHeight, "todo: docstring")
  .def("GetNumRows", (unsigned int (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetNumRows, "todo: docstring")
  .def("GetNumChars", (unsigned int (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetNumChars, "todo: docstring")
  .def("GetRowWidth", (int (Urho3D::Text3D::*)(unsigned int) const) &Urho3D::Text3D::GetRowWidth, "todo: docstring", py::arg("index"))
  .def("GetCharPosition", (Urho3D::Vector2 (Urho3D::Text3D::*)(unsigned int)) &Urho3D::Text3D::GetCharPosition, "todo: docstring", py::arg("index"))
  .def("GetCharSize", (Urho3D::Vector2 (Urho3D::Text3D::*)(unsigned int)) &Urho3D::Text3D::GetCharSize, "todo: docstring", py::arg("index"))
  .def("GetColor", (const Urho3D::Color & (Urho3D::Text3D::*)(Urho3D::Corner) const) &Urho3D::Text3D::GetColor, "todo: docstring", py::arg("corner"))
  .def("GetOpacity", (float (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetOpacity, "todo: docstring")
  .def("IsFixedScreenSize", (bool (Urho3D::Text3D::*)() const) &Urho3D::Text3D::IsFixedScreenSize, "todo: docstring")
  .def("GetFaceCameraMode", (Urho3D::FaceCameraMode (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetFaceCameraMode, "todo: docstring")
  .def("SetFontAttr", (void (Urho3D::Text3D::*)(const Urho3D::ResourceRef &)) &Urho3D::Text3D::SetFontAttr, "todo: docstring", py::arg("value"))
  .def("GetFontAttr", (Urho3D::ResourceRef (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetFontAttr, "todo: docstring")
  .def("SetMaterialAttr", (void (Urho3D::Text3D::*)(const Urho3D::ResourceRef &)) &Urho3D::Text3D::SetMaterialAttr, "todo: docstring", py::arg("value"))
  .def("GetMaterialAttr", (Urho3D::ResourceRef (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetMaterialAttr, "todo: docstring")
  .def("SetTextAttr", (void (Urho3D::Text3D::*)(const Urho3D::String &)) &Urho3D::Text3D::SetTextAttr, "todo: docstring", py::arg("value"))
  .def("GetTextAttr", (Urho3D::String (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetTextAttr, "todo: docstring")
  .def("GetColorAttr", (const Urho3D::Color & (Urho3D::Text3D::*)() const) &Urho3D::Text3D::GetColorAttr, "todo: docstring")
// Class Variables:
;

// Class Texture2D Implementation
pyclass_Var_Urho3D_Texture2D
  .def("GetType", (Urho3D::StringHash (Urho3D::Texture2D::*)() const) &Urho3D::Texture2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Texture2D::*)() const) &Urho3D::Texture2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Texture2D::*)() const) &Urho3D::Texture2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Texture2D", (void (Urho3D::Texture2D::*)()) &Urho3D::Texture2D::~Texture2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Texture2D::*)(Urho3D::Deserializer &)) &Urho3D::Texture2D::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::Texture2D::*)()) &Urho3D::Texture2D::EndLoad, "todo: docstring")
  .def("OnDeviceLost", (void (Urho3D::Texture2D::*)()) &Urho3D::Texture2D::OnDeviceLost, "todo: docstring")
  .def("OnDeviceReset", (void (Urho3D::Texture2D::*)()) &Urho3D::Texture2D::OnDeviceReset, "todo: docstring")
  .def("Release", (void (Urho3D::Texture2D::*)()) &Urho3D::Texture2D::Release, "todo: docstring")
  .def("SetSize", (bool (Urho3D::Texture2D::*)(int, int, unsigned int, Urho3D::TextureUsage, int, bool)) &Urho3D::Texture2D::SetSize, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("format"), py::arg("usage")=TEXTURE_STATIC, py::arg("multiSample")=1, py::arg("autoResolve")=true)
  .def("SetData", (bool (Urho3D::Texture2D::*)(unsigned int, int, int, int, int, const void *)) &Urho3D::Texture2D::SetData, "todo: docstring", py::arg("level"), py::arg("x"), py::arg("y"), py::arg("width"), py::arg("height"), py::arg("data"))
  .def("SetData", (bool (Urho3D::Texture2D::*)(Urho3D::Image *, bool)) &Urho3D::Texture2D::SetData, "todo: docstring", py::arg("image"), py::arg("useAlpha")=false)
  .def("GetData", (bool (Urho3D::Texture2D::*)(unsigned int, void *) const) &Urho3D::Texture2D::GetData, "todo: docstring", py::arg("level"), py::arg("dest"))
  .def("GetImage", (bool (Urho3D::Texture2D::*)(Urho3D::Image &) const) &Urho3D::Texture2D::GetImage, "todo: docstring", py::arg("image"))
  //.def("GetImage", (SharedPtr<Urho3D::Image> (Urho3D::Texture2D::*)() const) &Urho3D::Texture2D::GetImage, "todo: docstring")
    //[]; op False, ctor False, dtor False, variadic False, deleted False, ret bad True, param bad False, max ptr 0
  .def("GetRenderSurface", (Urho3D::RenderSurface * (Urho3D::Texture2D::*)() const) &Urho3D::Texture2D::GetRenderSurface, "todo: docstring")
// Class Variables:
;

// Class ConstraintGear2D Implementation
pyclass_Var_Urho3D_ConstraintGear2D
  .def("GetType", (Urho3D::StringHash (Urho3D::ConstraintGear2D::*)() const) &Urho3D::ConstraintGear2D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::ConstraintGear2D::*)() const) &Urho3D::ConstraintGear2D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::ConstraintGear2D::*)() const) &Urho3D::ConstraintGear2D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~ConstraintGear2D", (void (Urho3D::ConstraintGear2D::*)()) &Urho3D::ConstraintGear2D::~ConstraintGear2D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("SetOwnerConstraint", (void (Urho3D::ConstraintGear2D::*)(Urho3D::Constraint2D *)) &Urho3D::ConstraintGear2D::SetOwnerConstraint, "todo: docstring", py::arg("constraint"))
  .def("SetOtherConstraint", (void (Urho3D::ConstraintGear2D::*)(Urho3D::Constraint2D *)) &Urho3D::ConstraintGear2D::SetOtherConstraint, "todo: docstring", py::arg("constraint"))
  .def("SetRatio", (void (Urho3D::ConstraintGear2D::*)(float)) &Urho3D::ConstraintGear2D::SetRatio, "todo: docstring", py::arg("ratio"))
  .def("GetOwnerConstraint", (Urho3D::Constraint2D * (Urho3D::ConstraintGear2D::*)() const) &Urho3D::ConstraintGear2D::GetOwnerConstraint, "todo: docstring")
  .def("GetOtherConstraint", (Urho3D::Constraint2D * (Urho3D::ConstraintGear2D::*)() const) &Urho3D::ConstraintGear2D::GetOtherConstraint, "todo: docstring")
  .def("GetRatio", (float (Urho3D::ConstraintGear2D::*)() const) &Urho3D::ConstraintGear2D::GetRatio, "todo: docstring")
// Class Variables:
;

// Class Texture3D Implementation
pyclass_Var_Urho3D_Texture3D
  .def("GetType", (Urho3D::StringHash (Urho3D::Texture3D::*)() const) &Urho3D::Texture3D::GetType, "todo: docstring")
  .def("GetTypeName", (const Urho3D::String & (Urho3D::Texture3D::*)() const) &Urho3D::Texture3D::GetTypeName, "todo: docstring")
  .def("GetTypeInfo", (const Urho3D::TypeInfo * (Urho3D::Texture3D::*)() const) &Urho3D::Texture3D::GetTypeInfo, "todo: docstring")
  .def(py::init<Urho3D::Context *>(), "todo: constructor docstring")
  //.def("~Texture3D", (void (Urho3D::Texture3D::*)()) &Urho3D::Texture3D::~Texture3D, "todo: docstring")
    //[]; op False, ctor False, dtor True, variadic False, deleted False, ret bad False, param bad False, max ptr 0
  .def("BeginLoad", (bool (Urho3D::Texture3D::*)(Urho3D::Deserializer &)) &Urho3D::Texture3D::BeginLoad, "todo: docstring", py::arg("source"))
  .def("EndLoad", (bool (Urho3D::Texture3D::*)()) &Urho3D::Texture3D::EndLoad, "todo: docstring")
  .def("OnDeviceLost", (void (Urho3D::Texture3D::*)()) &Urho3D::Texture3D::OnDeviceLost, "todo: docstring")
  .def("OnDeviceReset", (void (Urho3D::Texture3D::*)()) &Urho3D::Texture3D::OnDeviceReset, "todo: docstring")
  .def("Release", (void (Urho3D::Texture3D::*)()) &Urho3D::Texture3D::Release, "todo: docstring")
  .def("SetSize", (bool (Urho3D::Texture3D::*)(int, int, int, unsigned int, Urho3D::TextureUsage)) &Urho3D::Texture3D::SetSize, "todo: docstring", py::arg("width"), py::arg("height"), py::arg("depth"), py::arg("format"), py::arg("usage")=TEXTURE_STATIC)
  .def("SetData", (bool (Urho3D::Texture3D::*)(unsigned int, int, int, int, int, int, int, const void *)) &Urho3D::Texture3D::SetData, "todo: docstring", py::arg("level"), py::arg("x"), py::arg("y"), py::arg("z"), py::arg("width"), py::arg("height"), py::arg("depth"), py::arg("data"))
  .def("SetData", (bool (Urho3D::Texture3D::*)(Urho3D::Image *, bool)) &Urho3D::Texture3D::SetData, "todo: docstring", py::arg("image"), py::arg("useAlpha")=false)
  .def("GetData", (bool (Urho3D::Texture3D::*)(unsigned int, void *) const) &Urho3D::Texture3D::GetData, "todo: docstring", py::arg("level"), py::arg("dest"))
// Class Variables:
;


}
