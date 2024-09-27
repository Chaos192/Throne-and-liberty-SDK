#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MRMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// 0x0008 (0x0008 - 0x0000)
struct MeshReconstructorBase_ConnectMRMesh final
{
public:
	class UMRMeshComponent*                       Mesh;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshReconstructorBase_ConnectMRMesh) == 0x000008, "Wrong alignment on MeshReconstructorBase_ConnectMRMesh");
static_assert(sizeof(MeshReconstructorBase_ConnectMRMesh) == 0x000008, "Wrong size on MeshReconstructorBase_ConnectMRMesh");
static_assert(offsetof(MeshReconstructorBase_ConnectMRMesh, Mesh) == 0x000000, "Member 'MeshReconstructorBase_ConnectMRMesh::Mesh' has a wrong offset!");

// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// 0x0001 (0x0001 - 0x0000)
struct MeshReconstructorBase_IsReconstructionPaused final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshReconstructorBase_IsReconstructionPaused) == 0x000001, "Wrong alignment on MeshReconstructorBase_IsReconstructionPaused");
static_assert(sizeof(MeshReconstructorBase_IsReconstructionPaused) == 0x000001, "Wrong size on MeshReconstructorBase_IsReconstructionPaused");
static_assert(offsetof(MeshReconstructorBase_IsReconstructionPaused, ReturnValue) == 0x000000, "Member 'MeshReconstructorBase_IsReconstructionPaused::ReturnValue' has a wrong offset!");

// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// 0x0001 (0x0001 - 0x0000)
struct MeshReconstructorBase_IsReconstructionStarted final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshReconstructorBase_IsReconstructionStarted) == 0x000001, "Wrong alignment on MeshReconstructorBase_IsReconstructionStarted");
static_assert(sizeof(MeshReconstructorBase_IsReconstructionStarted) == 0x000001, "Wrong size on MeshReconstructorBase_IsReconstructionStarted");
static_assert(offsetof(MeshReconstructorBase_IsReconstructionStarted, ReturnValue) == 0x000000, "Member 'MeshReconstructorBase_IsReconstructionStarted::ReturnValue' has a wrong offset!");

// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
// 0x0008 (0x0008 - 0x0000)
struct MockDataMeshTrackerComponent_ConnectMRMesh final
{
public:
	class UMRMeshComponent*                       InMRMeshPtr;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MockDataMeshTrackerComponent_ConnectMRMesh) == 0x000008, "Wrong alignment on MockDataMeshTrackerComponent_ConnectMRMesh");
static_assert(sizeof(MockDataMeshTrackerComponent_ConnectMRMesh) == 0x000008, "Wrong size on MockDataMeshTrackerComponent_ConnectMRMesh");
static_assert(offsetof(MockDataMeshTrackerComponent_ConnectMRMesh, InMRMeshPtr) == 0x000000, "Member 'MockDataMeshTrackerComponent_ConnectMRMesh::InMRMeshPtr' has a wrong offset!");

// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
// 0x0008 (0x0008 - 0x0000)
struct MockDataMeshTrackerComponent_DisconnectMRMesh final
{
public:
	class UMRMeshComponent*                       InMRMeshPtr;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MockDataMeshTrackerComponent_DisconnectMRMesh) == 0x000008, "Wrong alignment on MockDataMeshTrackerComponent_DisconnectMRMesh");
static_assert(sizeof(MockDataMeshTrackerComponent_DisconnectMRMesh) == 0x000008, "Wrong size on MockDataMeshTrackerComponent_DisconnectMRMesh");
static_assert(offsetof(MockDataMeshTrackerComponent_DisconnectMRMesh, InMRMeshPtr) == 0x000000, "Member 'MockDataMeshTrackerComponent_DisconnectMRMesh::InMRMeshPtr' has a wrong offset!");

// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
// 0x0048 (0x0048 - 0x0000)
struct MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        Vertices;                                          // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                 Triangles;                                         // 0x0018(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        Normals;                                           // 0x0028(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                 Confidence;                                        // 0x0038(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature) == 0x000008, "Wrong alignment on MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature");
static_assert(sizeof(MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature) == 0x000048, "Wrong size on MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature");
static_assert(offsetof(MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature, Index_0) == 0x000000, "Member 'MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature::Index_0' has a wrong offset!");
static_assert(offsetof(MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature, Vertices) == 0x000008, "Member 'MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature::Vertices' has a wrong offset!");
static_assert(offsetof(MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature, Triangles) == 0x000018, "Member 'MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature::Triangles' has a wrong offset!");
static_assert(offsetof(MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature, Normals) == 0x000028, "Member 'MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature::Normals' has a wrong offset!");
static_assert(offsetof(MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature, Confidence) == 0x000038, "Member 'MockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature::Confidence' has a wrong offset!");

// Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_SetEnableMeshOcclusion final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MRMeshComponent_SetEnableMeshOcclusion) == 0x000001, "Wrong alignment on MRMeshComponent_SetEnableMeshOcclusion");
static_assert(sizeof(MRMeshComponent_SetEnableMeshOcclusion) == 0x000001, "Wrong size on MRMeshComponent_SetEnableMeshOcclusion");
static_assert(offsetof(MRMeshComponent_SetEnableMeshOcclusion, bEnable) == 0x000000, "Member 'MRMeshComponent_SetEnableMeshOcclusion::bEnable' has a wrong offset!");

// Function MRMesh.MRMeshComponent.SetUseWireframe
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_SetUseWireframe final
{
public:
	bool                                          bUseWireframe;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MRMeshComponent_SetUseWireframe) == 0x000001, "Wrong alignment on MRMeshComponent_SetUseWireframe");
static_assert(sizeof(MRMeshComponent_SetUseWireframe) == 0x000001, "Wrong size on MRMeshComponent_SetUseWireframe");
static_assert(offsetof(MRMeshComponent_SetUseWireframe, bUseWireframe) == 0x000000, "Member 'MRMeshComponent_SetUseWireframe::bUseWireframe' has a wrong offset!");

// Function MRMesh.MRMeshComponent.SetWireframeColor
// 0x0010 (0x0010 - 0x0000)
struct MRMeshComponent_SetWireframeColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MRMeshComponent_SetWireframeColor) == 0x000004, "Wrong alignment on MRMeshComponent_SetWireframeColor");
static_assert(sizeof(MRMeshComponent_SetWireframeColor) == 0x000010, "Wrong size on MRMeshComponent_SetWireframeColor");
static_assert(offsetof(MRMeshComponent_SetWireframeColor, InColor) == 0x000000, "Member 'MRMeshComponent_SetWireframeColor::InColor' has a wrong offset!");

// Function MRMesh.MRMeshComponent.SetWireframeMaterial
// 0x0008 (0x0008 - 0x0000)
struct MRMeshComponent_SetWireframeMaterial final
{
public:
	class UMaterialInterface*                     InMaterial;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MRMeshComponent_SetWireframeMaterial) == 0x000008, "Wrong alignment on MRMeshComponent_SetWireframeMaterial");
static_assert(sizeof(MRMeshComponent_SetWireframeMaterial) == 0x000008, "Wrong size on MRMeshComponent_SetWireframeMaterial");
static_assert(offsetof(MRMeshComponent_SetWireframeMaterial, InMaterial) == 0x000000, "Member 'MRMeshComponent_SetWireframeMaterial::InMaterial' has a wrong offset!");

// Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_GetEnableMeshOcclusion final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MRMeshComponent_GetEnableMeshOcclusion) == 0x000001, "Wrong alignment on MRMeshComponent_GetEnableMeshOcclusion");
static_assert(sizeof(MRMeshComponent_GetEnableMeshOcclusion) == 0x000001, "Wrong size on MRMeshComponent_GetEnableMeshOcclusion");
static_assert(offsetof(MRMeshComponent_GetEnableMeshOcclusion, ReturnValue) == 0x000000, "Member 'MRMeshComponent_GetEnableMeshOcclusion::ReturnValue' has a wrong offset!");

// Function MRMesh.MRMeshComponent.GetUseWireframe
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_GetUseWireframe final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MRMeshComponent_GetUseWireframe) == 0x000001, "Wrong alignment on MRMeshComponent_GetUseWireframe");
static_assert(sizeof(MRMeshComponent_GetUseWireframe) == 0x000001, "Wrong size on MRMeshComponent_GetUseWireframe");
static_assert(offsetof(MRMeshComponent_GetUseWireframe, ReturnValue) == 0x000000, "Member 'MRMeshComponent_GetUseWireframe::ReturnValue' has a wrong offset!");

// Function MRMesh.MRMeshComponent.GetWireframeColor
// 0x0010 (0x0010 - 0x0000)
struct MRMeshComponent_GetWireframeColor final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MRMeshComponent_GetWireframeColor) == 0x000004, "Wrong alignment on MRMeshComponent_GetWireframeColor");
static_assert(sizeof(MRMeshComponent_GetWireframeColor) == 0x000010, "Wrong size on MRMeshComponent_GetWireframeColor");
static_assert(offsetof(MRMeshComponent_GetWireframeColor, ReturnValue) == 0x000000, "Member 'MRMeshComponent_GetWireframeColor::ReturnValue' has a wrong offset!");

// Function MRMesh.MRMeshComponent.IsConnected
// 0x0001 (0x0001 - 0x0000)
struct MRMeshComponent_IsConnected final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MRMeshComponent_IsConnected) == 0x000001, "Wrong alignment on MRMeshComponent_IsConnected");
static_assert(sizeof(MRMeshComponent_IsConnected) == 0x000001, "Wrong size on MRMeshComponent_IsConnected");
static_assert(offsetof(MRMeshComponent_IsConnected, ReturnValue) == 0x000000, "Member 'MRMeshComponent_IsConnected::ReturnValue' has a wrong offset!");

}

