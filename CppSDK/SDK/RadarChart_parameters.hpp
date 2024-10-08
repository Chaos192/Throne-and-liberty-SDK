#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RadarChart

#include "Basic.hpp"

#include "RadarChart_structs.hpp"


namespace SDK::Params
{

// Function RadarChart.RadarChart.InvalidateMaterial
// 0x0108 (0x0108 - 0x0000)
struct RadarChart_InvalidateMaterial final
{
public:
	struct FRadarChartAppearance                  InAppearance;                                      // 0x0000(0x0108)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChart_InvalidateMaterial) == 0x000008, "Wrong alignment on RadarChart_InvalidateMaterial");
static_assert(sizeof(RadarChart_InvalidateMaterial) == 0x000108, "Wrong size on RadarChart_InvalidateMaterial");
static_assert(offsetof(RadarChart_InvalidateMaterial, InAppearance) == 0x000000, "Member 'RadarChart_InvalidateMaterial::InAppearance' has a wrong offset!");

// Function RadarChart.RadarChart.SetAllValuesData
// 0x0010 (0x0010 - 0x0000)
struct RadarChart_SetAllValuesData final
{
public:
	TArray<struct FRadarChartValueData>           InValues;                                          // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChart_SetAllValuesData) == 0x000008, "Wrong alignment on RadarChart_SetAllValuesData");
static_assert(sizeof(RadarChart_SetAllValuesData) == 0x000010, "Wrong size on RadarChart_SetAllValuesData");
static_assert(offsetof(RadarChart_SetAllValuesData, InValues) == 0x000000, "Member 'RadarChart_SetAllValuesData::InValues' has a wrong offset!");

// Function RadarChart.RadarChart.SetValue
// 0x0008 (0x0008 - 0x0000)
struct RadarChart_SetValue final
{
public:
	uint8                                         ValueLayerIndex;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ValueIndex;                                        // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Value;                                             // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChart_SetValue) == 0x000004, "Wrong alignment on RadarChart_SetValue");
static_assert(sizeof(RadarChart_SetValue) == 0x000008, "Wrong size on RadarChart_SetValue");
static_assert(offsetof(RadarChart_SetValue, ValueLayerIndex) == 0x000000, "Member 'RadarChart_SetValue::ValueLayerIndex' has a wrong offset!");
static_assert(offsetof(RadarChart_SetValue, ValueIndex) == 0x000001, "Member 'RadarChart_SetValue::ValueIndex' has a wrong offset!");
static_assert(offsetof(RadarChart_SetValue, Value) == 0x000004, "Member 'RadarChart_SetValue::Value' has a wrong offset!");

// Function RadarChart.RadarChart.SetValuesDataForLayer
// 0x0120 (0x0120 - 0x0000)
struct RadarChart_SetValuesDataForLayer final
{
public:
	uint8                                         ValueLayerIndex;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRadarChartValueData                   InValues;                                          // 0x0008(0x0118)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChart_SetValuesDataForLayer) == 0x000008, "Wrong alignment on RadarChart_SetValuesDataForLayer");
static_assert(sizeof(RadarChart_SetValuesDataForLayer) == 0x000120, "Wrong size on RadarChart_SetValuesDataForLayer");
static_assert(offsetof(RadarChart_SetValuesDataForLayer, ValueLayerIndex) == 0x000000, "Member 'RadarChart_SetValuesDataForLayer::ValueLayerIndex' has a wrong offset!");
static_assert(offsetof(RadarChart_SetValuesDataForLayer, InValues) == 0x000008, "Member 'RadarChart_SetValuesDataForLayer::InValues' has a wrong offset!");

// Function RadarChart.RadarChart.SetValuesForLayer
// 0x0018 (0x0018 - 0x0000)
struct RadarChart_SetValuesForLayer final
{
public:
	uint8                                         ValueLayerIndex;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 InValues;                                          // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(RadarChart_SetValuesForLayer) == 0x000008, "Wrong alignment on RadarChart_SetValuesForLayer");
static_assert(sizeof(RadarChart_SetValuesForLayer) == 0x000018, "Wrong size on RadarChart_SetValuesForLayer");
static_assert(offsetof(RadarChart_SetValuesForLayer, ValueLayerIndex) == 0x000000, "Member 'RadarChart_SetValuesForLayer::ValueLayerIndex' has a wrong offset!");
static_assert(offsetof(RadarChart_SetValuesForLayer, InValues) == 0x000008, "Member 'RadarChart_SetValuesForLayer::InValues' has a wrong offset!");

}

