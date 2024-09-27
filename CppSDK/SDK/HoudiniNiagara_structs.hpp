#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HoudiniNiagara

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum HoudiniNiagara.EHoudiniPointCacheFileType
// NumValues: 0x0005
enum class EHoudiniPointCacheFileType : uint8
{
	Invalid                                  = 0,
	CSV                                      = 1,
	JSON                                     = 2,
	BJSON                                    = 3,
	EHoudiniPointCacheFileType_MAX           = 4,
};

// Enum HoudiniNiagara.EHoudiniAttributes
// NumValues: 0x000F
enum class EHoudiniAttributes : uint8
{
	HOUDINI_ATTR_BEGIN                       = 0,
	Position                                 = 0,
	Normal                                   = 1,
	Time                                     = 2,
	POINTID                                  = 3,
	LIFE                                     = 4,
	Color                                    = 5,
	Alpha                                    = 6,
	Velocity                                 = 7,
	Type                                     = 8,
	Impulse                                  = 9,
	Age                                      = 10,
	HOUDINI_ATTR_SIZE                        = 11,
	HOUDINI_ATTR_END                         = 10,
	EHoudiniAttributes_MAX                   = 12,
};

// ScriptStruct HoudiniNiagara.PointIndexes
// 0x0010 (0x0010 - 0x0000)
struct FPointIndexes final
{
public:
	TArray<int32>                                 SampleIndexes;                                     // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPointIndexes) == 0x000008, "Wrong alignment on FPointIndexes");
static_assert(sizeof(FPointIndexes) == 0x000010, "Wrong size on FPointIndexes");
static_assert(offsetof(FPointIndexes, SampleIndexes) == 0x000000, "Member 'FPointIndexes::SampleIndexes' has a wrong offset!");

// ScriptStruct HoudiniNiagara.HoudiniEvent
// 0x0048 (0x0048 - 0x0000)
struct FHoudiniEvent final
{
public:
	struct FVector                                Position;                                          // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x000C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Impulse;                                           // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x001C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         POINTID;                                           // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Time;                                              // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LIFE;                                              // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color;                                             // 0x0034(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Type;                                              // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FHoudiniEvent) == 0x000004, "Wrong alignment on FHoudiniEvent");
static_assert(sizeof(FHoudiniEvent) == 0x000048, "Wrong size on FHoudiniEvent");
static_assert(offsetof(FHoudiniEvent, Position) == 0x000000, "Member 'FHoudiniEvent::Position' has a wrong offset!");
static_assert(offsetof(FHoudiniEvent, Normal) == 0x00000C, "Member 'FHoudiniEvent::Normal' has a wrong offset!");
static_assert(offsetof(FHoudiniEvent, Impulse) == 0x000018, "Member 'FHoudiniEvent::Impulse' has a wrong offset!");
static_assert(offsetof(FHoudiniEvent, Velocity) == 0x00001C, "Member 'FHoudiniEvent::Velocity' has a wrong offset!");
static_assert(offsetof(FHoudiniEvent, POINTID) == 0x000028, "Member 'FHoudiniEvent::POINTID' has a wrong offset!");
static_assert(offsetof(FHoudiniEvent, Time) == 0x00002C, "Member 'FHoudiniEvent::Time' has a wrong offset!");
static_assert(offsetof(FHoudiniEvent, LIFE) == 0x000030, "Member 'FHoudiniEvent::LIFE' has a wrong offset!");
static_assert(offsetof(FHoudiniEvent, Color) == 0x000034, "Member 'FHoudiniEvent::Color' has a wrong offset!");
static_assert(offsetof(FHoudiniEvent, Type) == 0x000044, "Member 'FHoudiniEvent::Type' has a wrong offset!");

}

