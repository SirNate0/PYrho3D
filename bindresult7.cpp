

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
void Implement_Urho3D_ListView(py::class_<Urho3D::ListView, Urho3D::SharedPtr<Urho3D::ListView>, Urho3D::ScrollView>& pyclass_Var_Urho3D_ListView)
{
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
}

void Implement_Urho3D_CustomGeometry(py::class_<Urho3D::CustomGeometry, Urho3D::SharedPtr<Urho3D::CustomGeometry>, Urho3D::Drawable>& pyclass_Var_Urho3D_CustomGeometry)
{
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
}

void Implement_Urho3D_RibbonTrail(py::class_<Urho3D::RibbonTrail, Urho3D::SharedPtr<Urho3D::RibbonTrail>, Urho3D::Drawable>& pyclass_Var_Urho3D_RibbonTrail)
{
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
}

void Implement_Urho3D_MemoryBuffer(py::class_<Urho3D::MemoryBuffer, Urho3D::ExternalPtr<Urho3D::MemoryBuffer>, Urho3D::AbstractFile>& pyclass_Var_Urho3D_MemoryBuffer)
{
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
}

void Implement_Urho3D_OffMeshConnection(py::class_<Urho3D::OffMeshConnection, Urho3D::SharedPtr<Urho3D::OffMeshConnection>, Urho3D::Component>& pyclass_Var_Urho3D_OffMeshConnection)
{
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
}

void Implement_Urho3D_Constraint(py::class_<Urho3D::Constraint, Urho3D::SharedPtr<Urho3D::Constraint>, Urho3D::Component>& pyclass_Var_Urho3D_Constraint)
{
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
}

void Implement_Urho3D_FontGlyph(py::class_<Urho3D::FontGlyph, Urho3D::ExternalPtr<Urho3D::FontGlyph>>& pyclass_Var_Urho3D_FontGlyph)
{
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
}

void Implement_Urho3D_Sprite2D(py::class_<Urho3D::Sprite2D, Urho3D::SharedPtr<Urho3D::Sprite2D>, Urho3D::Resource>& pyclass_Var_Urho3D_Sprite2D)
{
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
}

void Implement_Urho3D_SpriteSheet2D(py::class_<Urho3D::SpriteSheet2D, Urho3D::SharedPtr<Urho3D::SpriteSheet2D>, Urho3D::Resource>& pyclass_Var_Urho3D_SpriteSheet2D)
{
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
}

void Implement_Urho3D_CollisionCircle2D(py::class_<Urho3D::CollisionCircle2D, Urho3D::SharedPtr<Urho3D::CollisionCircle2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionCircle2D)
{
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
}

void Implement_Urho3D_ConstraintDistance2D(py::class_<Urho3D::ConstraintDistance2D, Urho3D::SharedPtr<Urho3D::ConstraintDistance2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintDistance2D)
{
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
}

void Implement_Urho3D_ConstraintMouse2D(py::class_<Urho3D::ConstraintMouse2D, Urho3D::SharedPtr<Urho3D::ConstraintMouse2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintMouse2D)
{
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
}

void Implement_Urho3D_ConstraintRope2D(py::class_<Urho3D::ConstraintRope2D, Urho3D::SharedPtr<Urho3D::ConstraintRope2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintRope2D)
{
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
}

void Implement_Urho3D_ParticleEmitter2D(py::class_<Urho3D::ParticleEmitter2D, Urho3D::SharedPtr<Urho3D::ParticleEmitter2D>, Urho3D::Drawable2D>& pyclass_Var_Urho3D_ParticleEmitter2D)
{
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
}

void Implement_Urho3D_ScriptFile(py::class_<Urho3D::ScriptFile, Urho3D::SharedPtr<Urho3D::ScriptFile>, Urho3D::Resource, Urho3D::ScriptEventListener>& pyclass_Var_Urho3D_ScriptFile)
{
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
}

void Implement_Urho3D_Sound(py::class_<Urho3D::Sound, Urho3D::SharedPtr<Urho3D::Sound>, Urho3D::ResourceWithMetadata>& pyclass_Var_Urho3D_Sound)
{
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
}

void Implement_Urho3D_Model(py::class_<Urho3D::Model, Urho3D::SharedPtr<Urho3D::Model>, Urho3D::ResourceWithMetadata>& pyclass_Var_Urho3D_Model)
{
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
}

void Implement_Urho3D_DropDownList(py::class_<Urho3D::DropDownList, Urho3D::SharedPtr<Urho3D::DropDownList>, Urho3D::Menu>& pyclass_Var_Urho3D_DropDownList)
{
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
}

void Implement_Urho3D_Image(py::class_<Urho3D::Image, Urho3D::SharedPtr<Urho3D::Image>, Urho3D::Resource>& pyclass_Var_Urho3D_Image)
{
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
}

void Implement_Urho3D_Terrain(py::class_<Urho3D::Terrain, Urho3D::SharedPtr<Urho3D::Terrain>, Urho3D::Component>& pyclass_Var_Urho3D_Terrain)
{
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
}

void Implement_Urho3D_CrowdAgent(py::class_<Urho3D::CrowdAgent, Urho3D::SharedPtr<Urho3D::CrowdAgent>, Urho3D::Component>& pyclass_Var_Urho3D_CrowdAgent)
{
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
}

void Implement_Urho3D_PListFile(py::class_<Urho3D::PListFile, Urho3D::SharedPtr<Urho3D::PListFile>, Urho3D::Resource>& pyclass_Var_Urho3D_PListFile)
{
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
}

void Implement_Urho3D_AnimationSet2D(py::class_<Urho3D::AnimationSet2D, Urho3D::SharedPtr<Urho3D::AnimationSet2D>, Urho3D::Resource>& pyclass_Var_Urho3D_AnimationSet2D)
{
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
}

void Implement_Urho3D_CollisionPolygon2D(py::class_<Urho3D::CollisionPolygon2D, Urho3D::SharedPtr<Urho3D::CollisionPolygon2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionPolygon2D)
{
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
}

void Implement_Urho3D_ConstraintPulley2D(py::class_<Urho3D::ConstraintPulley2D, Urho3D::SharedPtr<Urho3D::ConstraintPulley2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintPulley2D)
{
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
}

void Implement_Urho3D_TmxFile2D(py::class_<Urho3D::TmxFile2D, Urho3D::SharedPtr<Urho3D::TmxFile2D>, Urho3D::Resource>& pyclass_Var_Urho3D_TmxFile2D)
{
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
}

void Implement_Urho3D_ObjectAnimation(py::class_<Urho3D::ObjectAnimation, Urho3D::SharedPtr<Urho3D::ObjectAnimation>, Urho3D::Resource>& pyclass_Var_Urho3D_ObjectAnimation)
{
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
}

void Implement_Urho3D_Texture(py::class_<Urho3D::Texture, Urho3D::SharedPtr<Urho3D::Texture>, Urho3D::ResourceWithMetadata, Urho3D::GPUObject>& pyclass_Var_Urho3D_Texture)
{
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
}

void Implement_Urho3D_TextureCube(py::class_<Urho3D::TextureCube, Urho3D::SharedPtr<Urho3D::TextureCube>, Urho3D::Texture>& pyclass_Var_Urho3D_TextureCube)
{
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
}

void Implement_Urho3D_Texture2DArray(py::class_<Urho3D::Texture2DArray, Urho3D::SharedPtr<Urho3D::Texture2DArray>, Urho3D::Texture>& pyclass_Var_Urho3D_Texture2DArray)
{
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
}

void Implement_Urho3D_NetworkPriority(py::class_<Urho3D::NetworkPriority, Urho3D::SharedPtr<Urho3D::NetworkPriority>, Urho3D::Component>& pyclass_Var_Urho3D_NetworkPriority)
{
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
}

void Implement_Urho3D_CollisionBox2D(py::class_<Urho3D::CollisionBox2D, Urho3D::SharedPtr<Urho3D::CollisionBox2D>, Urho3D::CollisionShape2D>& pyclass_Var_Urho3D_CollisionBox2D)
{
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
}

void Implement_Urho3D_ConstraintWheel2D(py::class_<Urho3D::ConstraintWheel2D, Urho3D::SharedPtr<Urho3D::ConstraintWheel2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintWheel2D)
{
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
}

void Implement_Urho3D_Material(py::class_<Urho3D::Material, Urho3D::SharedPtr<Urho3D::Material>, Urho3D::Resource>& pyclass_Var_Urho3D_Material)
{
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
}

void Implement_Urho3D_Animation(py::class_<Urho3D::Animation, Urho3D::SharedPtr<Urho3D::Animation>, Urho3D::ResourceWithMetadata>& pyclass_Var_Urho3D_Animation)
{
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
}

void Implement_Urho3D_Text3D(py::class_<Urho3D::Text3D, Urho3D::SharedPtr<Urho3D::Text3D>, Urho3D::Drawable>& pyclass_Var_Urho3D_Text3D)
{
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
}

void Implement_Urho3D_Texture2D(py::class_<Urho3D::Texture2D, Urho3D::SharedPtr<Urho3D::Texture2D>, Urho3D::Texture>& pyclass_Var_Urho3D_Texture2D)
{
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
}

void Implement_Urho3D_ConstraintGear2D(py::class_<Urho3D::ConstraintGear2D, Urho3D::SharedPtr<Urho3D::ConstraintGear2D>, Urho3D::Constraint2D>& pyclass_Var_Urho3D_ConstraintGear2D)
{
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
}

void Implement_Urho3D_Texture3D(py::class_<Urho3D::Texture3D, Urho3D::SharedPtr<Urho3D::Texture3D>, Urho3D::Texture>& pyclass_Var_Urho3D_Texture3D)
{
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




