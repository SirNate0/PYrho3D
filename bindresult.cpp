
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
void Implement_Class_Bindings_1(py::module& m);

//================================================
// Declare and Implement Enumerations
//================================================
void Implement_Enum_Bindings_1(py::module& m);
void Implement_Enum_Bindings(py::module& m)
{
py::object pyclass_Var_Urho3D_IKEffector = m.attr("IKEffector");
py::object pyclass_Var_Urho3D_IKSolver = m.attr("IKSolver");
py::module& pyclass_Var_Urho3D = m;
py::object pyclass_Var_Urho3D_Spriter = m.attr("Spriter");

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

Implement_Enum_Bindings_1(m);
}

// can do sub-modules, just need to py::import... the other module if it has any required classes first (see Advanced Topics in pybind11 docs)
PYBIND11_MODULE(pyrho3d, m) {
    m.doc() = "Urho3D Python bindings"; // optional module docstring
    assert(false);

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
    //Class declarations moved to other files

    //================================================
    // Implement Classes
    //================================================
    

//Class declarations moved to other files

Implement_Class_Bindings_1(m);



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




//// create context object for us
//Urho3D::SharedPtr<Urho3D::Context> c{new Urho3D::Context()};
//c->AddRef();
////m.add_object("context", py::cast(c));
//m.attr("context") = py::cast(c);
//// Register a callback function that is invoked when the BaseClass object is colelcted
//py::cpp_function cleanup_callback(
//    [m](py::handle weakref) {
//        // perform cleanup here -- this function is called with the GIL held
//        Urho3D::Context* ctx = m.attr("context").cast<Urho3D::Context*>();
//        weakref.dec_ref(); // release weak reference
//    }
//);

//// Create a weak reference with a cleanup callback and initially leak it
//(void) py::weakref(m.attr("Context"), cleanup_callback).release();



// create context object for us
Urho3D::SharedPtr<Urho3D::Context> c{new Urho3D::Context()};
c->AddRef();
// All of these work
m.add_object("context_obj", py::cast(c));
m.attr("context_sp_cast") = py::cast(c);
m.attr("context_sp") = c;
m.attr("context_cast") = py::cast(c.Get());
m.attr("context") = c.Get();
// Register a callback function that is invoked when the BaseClass object is colelcted
py::cpp_function cleanup_callback(
    [m](py::handle weakref) {
        // perform cleanup here -- this function is called with the GIL held
        Urho3D::Context* ctx = m.attr("context").cast<Urho3D::Context*>();
        weakref.dec_ref(); // release weak reference
    }
);
assert(false);

// Create a weak reference with a cleanup callback and initially leak it
(void) py::weakref(m.attr("Context"), cleanup_callback).release();
}


/*{'Urho3D::ShaderVariation': ['@Urho3D::GPUObject'], 'Urho3D::ShaderProgram': ['@Urho3D::GPUObject'], 'Urho3D::IndexBuffer': ['@Urho3D::GPUObject'], 'Urho3D::ConstantBuffer': ['@Urho3D::GPUObject'], 'Urho3D::HttpRequest': ['@Urho3D::Deserializer', '@Urho3D::Thread'], 'Urho3D::RocketSys': ['Rocket::Core::RenderInterface'], 'Urho3D::VertexBuffer': ['@Urho3D::GPUObject'], 'Urho3D::FileWatcher': ['@Urho3D::Thread'], 'Urho3D::LuaScript': ['@Urho3D::LuaScriptEventListener'], 'Urho3D::Octree': ['@Urho3D::Octant'], 'Urho3D::NamedPipe': ['@Urho3D::AbstractFile'], 'Urho3D::LuaScriptInstance': ['@Urho3D::LuaScriptEventListener'], 'Urho3D::PhysicsWorld': ['btIDebugDraw'], d 'b2Draw'],dddd'Urho3D::ScriptInstaddddddnce': ['@Urho3D::ScriptEventListener'], 'Urho3D::RigidBody': ['btMotionState'], 'Urho3D::File': ['@Urho3D::AbstractFile'], 'Urho3D::ScriptFile': ['@Urho3D::ScriptEventListener'], 'Urho3D::Texture': ['@Urho3D::GPUObject']}*/


