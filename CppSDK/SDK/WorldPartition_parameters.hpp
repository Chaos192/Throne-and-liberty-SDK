#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WorldPartition

#include "Basic.hpp"

#include "WorldPartition_structs.hpp"


namespace SDK::Params
{

// Function WorldPartition.ImposterSpritesGenerator.PrepareMaterialToCapture
// 0x0010 (0x0010 - 0x0000)
struct ImposterSpritesGenerator_PrepareMaterialToCapture final
{
public:
	class AStaticMeshActor*                       StaticMeshActor;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ImposterSpritesGenerator_PrepareMaterialToCapture) == 0x000008, "Wrong alignment on ImposterSpritesGenerator_PrepareMaterialToCapture");
static_assert(sizeof(ImposterSpritesGenerator_PrepareMaterialToCapture) == 0x000010, "Wrong size on ImposterSpritesGenerator_PrepareMaterialToCapture");
static_assert(offsetof(ImposterSpritesGenerator_PrepareMaterialToCapture, StaticMeshActor) == 0x000000, "Member 'ImposterSpritesGenerator_PrepareMaterialToCapture::StaticMeshActor' has a wrong offset!");
static_assert(offsetof(ImposterSpritesGenerator_PrepareMaterialToCapture, ReturnValue) == 0x000008, "Member 'ImposterSpritesGenerator_PrepareMaterialToCapture::ReturnValue' has a wrong offset!");

// Function WorldPartition.ImposterSpritesGenerator.TearDown
// 0x0008 (0x0008 - 0x0000)
struct ImposterSpritesGenerator_TearDown final
{
public:
	class UStaticMesh*                            ProcMesh;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ImposterSpritesGenerator_TearDown) == 0x000008, "Wrong alignment on ImposterSpritesGenerator_TearDown");
static_assert(sizeof(ImposterSpritesGenerator_TearDown) == 0x000008, "Wrong size on ImposterSpritesGenerator_TearDown");
static_assert(offsetof(ImposterSpritesGenerator_TearDown, ProcMesh) == 0x000000, "Member 'ImposterSpritesGenerator_TearDown::ProcMesh' has a wrong offset!");

// Function WorldPartition.WorldPartitionSubsystem.IsStreamingCompleted
// 0x0020 (0x0020 - 0x0000)
struct WorldPartitionSubsystem_IsStreamingCompleted final
{
public:
	EWorldPartitionRuntimeCellState               QueryState;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWorldPartitionStreamingQuerySource> QuerySources;                                      // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          bExactState;                                       // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(WorldPartitionSubsystem_IsStreamingCompleted) == 0x000008, "Wrong alignment on WorldPartitionSubsystem_IsStreamingCompleted");
static_assert(sizeof(WorldPartitionSubsystem_IsStreamingCompleted) == 0x000020, "Wrong size on WorldPartitionSubsystem_IsStreamingCompleted");
static_assert(offsetof(WorldPartitionSubsystem_IsStreamingCompleted, QueryState) == 0x000000, "Member 'WorldPartitionSubsystem_IsStreamingCompleted::QueryState' has a wrong offset!");
static_assert(offsetof(WorldPartitionSubsystem_IsStreamingCompleted, QuerySources) == 0x000008, "Member 'WorldPartitionSubsystem_IsStreamingCompleted::QuerySources' has a wrong offset!");
static_assert(offsetof(WorldPartitionSubsystem_IsStreamingCompleted, bExactState) == 0x000018, "Member 'WorldPartitionSubsystem_IsStreamingCompleted::bExactState' has a wrong offset!");
static_assert(offsetof(WorldPartitionSubsystem_IsStreamingCompleted, ReturnValue) == 0x000019, "Member 'WorldPartitionSubsystem_IsStreamingCompleted::ReturnValue' has a wrong offset!");

}

