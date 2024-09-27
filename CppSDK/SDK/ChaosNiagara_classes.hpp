#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosNiagara

#include "Basic.hpp"

#include "ChaosNiagara_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Niagara_classes.hpp"


namespace SDK
{

// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// 0x0200 (0x0238 - 0x0038)
class UNiagaraDataInterfaceChaosDestruction final : public UNiagaraDataInterface
{
public:
	TSet<class AChaosSolverActor*>                ChaosSolverActorSet;                               // 0x0038(0x0050)(Edit, NativeAccessSpecifierPublic)
	EDataSourceTypeEnum                           DataSourceType;                                    // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DataProcessFrequency;                              // 0x008C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxNumberOfDataEntriesToSpawn;                     // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DoSpawn;                                           // 0x0094(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              SpawnMultiplierMinMax;                             // 0x0098(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpawnChance;                                       // 0x00A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ImpulseToSpawnMinMax;                              // 0x00A4(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              SpeedToSpawnMinMax;                                // 0x00AC(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              MassToSpawnMinMax;                                 // 0x00B4(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ExtentMinToSpawnMinMax;                            // 0x00BC(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ExtentMaxToSpawnMinMax;                            // 0x00C4(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              VolumeToSpawnMinMax;                               // 0x00CC(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              SolverTimeToSpawnMinMax;                           // 0x00D4(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SurfaceTypeToSpawn;                                // 0x00DC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELocationFilteringModeEnum                    LocationFilteringMode;                             // 0x00E0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELocationXToSpawnEnum                         LocationXToSpawn;                                  // 0x00E1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E2[0x2];                                       // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              LocationXToSpawnMinMax;                            // 0x00E4(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELocationYToSpawnEnum                         LocationYToSpawn;                                  // 0x00EC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              LocationYToSpawnMinMax;                            // 0x00F0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELocationZToSpawnEnum                         LocationZToSpawn;                                  // 0x00F8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              LocationZToSpawnMinMax;                            // 0x00FC(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDataSortTypeEnum                             DataSortingType;                                   // 0x0104(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGetExternalCollisionData;                         // 0x0105(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DoSpatialHash;                                     // 0x0106(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_107[0x1];                                      // 0x0107(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SpatialHashVolumeMin;                              // 0x0108(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SpatialHashVolumeMax;                              // 0x0114(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SpatialHashVolumeCellSize;                         // 0x0120(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxDataPerCell;                                    // 0x012C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bApplyMaterialsFilter;                             // 0x0130(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class UPhysicalMaterial*>                ChaosBreakingMaterialSet;                          // 0x0138(0x0050)(Edit, NativeAccessSpecifierPublic)
	bool                                          bGetExternalBreakingData;                          // 0x0188(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGetExternalTrailingData;                          // 0x0189(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18A[0x2];                                      // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              RandomPositionMagnitudeMinMax;                     // 0x018C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InheritedVelocityMultiplier;                       // 0x0194(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERandomVelocityGenerationTypeEnum             RandomVelocityGenerationType;                      // 0x0198(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_199[0x3];                                      // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              RandomVelocityMagnitudeMinMax;                     // 0x019C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpreadAngleMax;                                    // 0x01A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                VelocityOffsetMin;                                 // 0x01A8(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                VelocityOffsetMax;                                 // 0x01B4(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              FinalVelocityMagnitudeMinMax;                      // 0x01C0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxLatency;                                        // 0x01C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDebugTypeEnum                                DebugType;                                         // 0x01CC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CD[0x3];                                      // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LastSpawnedPointID;                                // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LastSpawnTime;                                     // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1D8[0x10];                                     // 0x01D8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SolverTime;                                        // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         TimeStampOfLastProcessedData;                      // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1F0[0x48];                                     // 0x01F0(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceChaosDestruction">();
	}
	static class UNiagaraDataInterfaceChaosDestruction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceChaosDestruction>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceChaosDestruction) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceChaosDestruction");
static_assert(sizeof(UNiagaraDataInterfaceChaosDestruction) == 0x000238, "Wrong size on UNiagaraDataInterfaceChaosDestruction");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ChaosSolverActorSet) == 0x000038, "Member 'UNiagaraDataInterfaceChaosDestruction::ChaosSolverActorSet' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSourceType) == 0x000088, "Member 'UNiagaraDataInterfaceChaosDestruction::DataSourceType' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataProcessFrequency) == 0x00008C, "Member 'UNiagaraDataInterfaceChaosDestruction::DataProcessFrequency' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MaxNumberOfDataEntriesToSpawn) == 0x000090, "Member 'UNiagaraDataInterfaceChaosDestruction::MaxNumberOfDataEntriesToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DoSpawn) == 0x000094, "Member 'UNiagaraDataInterfaceChaosDestruction::DoSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpawnMultiplierMinMax) == 0x000098, "Member 'UNiagaraDataInterfaceChaosDestruction::SpawnMultiplierMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpawnChance) == 0x0000A0, "Member 'UNiagaraDataInterfaceChaosDestruction::SpawnChance' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ImpulseToSpawnMinMax) == 0x0000A4, "Member 'UNiagaraDataInterfaceChaosDestruction::ImpulseToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpeedToSpawnMinMax) == 0x0000AC, "Member 'UNiagaraDataInterfaceChaosDestruction::SpeedToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MassToSpawnMinMax) == 0x0000B4, "Member 'UNiagaraDataInterfaceChaosDestruction::MassToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMinToSpawnMinMax) == 0x0000BC, "Member 'UNiagaraDataInterfaceChaosDestruction::ExtentMinToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMaxToSpawnMinMax) == 0x0000C4, "Member 'UNiagaraDataInterfaceChaosDestruction::ExtentMaxToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VolumeToSpawnMinMax) == 0x0000CC, "Member 'UNiagaraDataInterfaceChaosDestruction::VolumeToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SolverTimeToSpawnMinMax) == 0x0000D4, "Member 'UNiagaraDataInterfaceChaosDestruction::SolverTimeToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SurfaceTypeToSpawn) == 0x0000DC, "Member 'UNiagaraDataInterfaceChaosDestruction::SurfaceTypeToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationFilteringMode) == 0x0000E0, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationFilteringMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawn) == 0x0000E1, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationXToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawnMinMax) == 0x0000E4, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationXToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawn) == 0x0000EC, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationYToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawnMinMax) == 0x0000F0, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationYToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawn) == 0x0000F8, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationZToSpawn' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawnMinMax) == 0x0000FC, "Member 'UNiagaraDataInterfaceChaosDestruction::LocationZToSpawnMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSortingType) == 0x000104, "Member 'UNiagaraDataInterfaceChaosDestruction::DataSortingType' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bGetExternalCollisionData) == 0x000105, "Member 'UNiagaraDataInterfaceChaosDestruction::bGetExternalCollisionData' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DoSpatialHash) == 0x000106, "Member 'UNiagaraDataInterfaceChaosDestruction::DoSpatialHash' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMin) == 0x000108, "Member 'UNiagaraDataInterfaceChaosDestruction::SpatialHashVolumeMin' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMax) == 0x000114, "Member 'UNiagaraDataInterfaceChaosDestruction::SpatialHashVolumeMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeCellSize) == 0x000120, "Member 'UNiagaraDataInterfaceChaosDestruction::SpatialHashVolumeCellSize' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MaxDataPerCell) == 0x00012C, "Member 'UNiagaraDataInterfaceChaosDestruction::MaxDataPerCell' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bApplyMaterialsFilter) == 0x000130, "Member 'UNiagaraDataInterfaceChaosDestruction::bApplyMaterialsFilter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ChaosBreakingMaterialSet) == 0x000138, "Member 'UNiagaraDataInterfaceChaosDestruction::ChaosBreakingMaterialSet' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bGetExternalBreakingData) == 0x000188, "Member 'UNiagaraDataInterfaceChaosDestruction::bGetExternalBreakingData' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bGetExternalTrailingData) == 0x000189, "Member 'UNiagaraDataInterfaceChaosDestruction::bGetExternalTrailingData' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomPositionMagnitudeMinMax) == 0x00018C, "Member 'UNiagaraDataInterfaceChaosDestruction::RandomPositionMagnitudeMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, InheritedVelocityMultiplier) == 0x000194, "Member 'UNiagaraDataInterfaceChaosDestruction::InheritedVelocityMultiplier' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityGenerationType) == 0x000198, "Member 'UNiagaraDataInterfaceChaosDestruction::RandomVelocityGenerationType' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityMagnitudeMinMax) == 0x00019C, "Member 'UNiagaraDataInterfaceChaosDestruction::RandomVelocityMagnitudeMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpreadAngleMax) == 0x0001A4, "Member 'UNiagaraDataInterfaceChaosDestruction::SpreadAngleMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMin) == 0x0001A8, "Member 'UNiagaraDataInterfaceChaosDestruction::VelocityOffsetMin' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMax) == 0x0001B4, "Member 'UNiagaraDataInterfaceChaosDestruction::VelocityOffsetMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, FinalVelocityMagnitudeMinMax) == 0x0001C0, "Member 'UNiagaraDataInterfaceChaosDestruction::FinalVelocityMagnitudeMinMax' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MaxLatency) == 0x0001C8, "Member 'UNiagaraDataInterfaceChaosDestruction::MaxLatency' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DebugType) == 0x0001CC, "Member 'UNiagaraDataInterfaceChaosDestruction::DebugType' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LastSpawnedPointID) == 0x0001D0, "Member 'UNiagaraDataInterfaceChaosDestruction::LastSpawnedPointID' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LastSpawnTime) == 0x0001D4, "Member 'UNiagaraDataInterfaceChaosDestruction::LastSpawnTime' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SolverTime) == 0x0001E8, "Member 'UNiagaraDataInterfaceChaosDestruction::SolverTime' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, TimeStampOfLastProcessedData) == 0x0001EC, "Member 'UNiagaraDataInterfaceChaosDestruction::TimeStampOfLastProcessedData' has a wrong offset!");

// Class ChaosNiagara.NiagaraDataInterfacePhysicsField
// 0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfacePhysicsField final : public UNiagaraDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfacePhysicsField">();
	}
	static class UNiagaraDataInterfacePhysicsField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfacePhysicsField>();
	}
};
static_assert(alignof(UNiagaraDataInterfacePhysicsField) == 0x000008, "Wrong alignment on UNiagaraDataInterfacePhysicsField");
static_assert(sizeof(UNiagaraDataInterfacePhysicsField) == 0x000038, "Wrong size on UNiagaraDataInterfacePhysicsField");

}

