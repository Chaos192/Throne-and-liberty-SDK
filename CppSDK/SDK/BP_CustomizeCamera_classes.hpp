#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomizeCamera

#include "Basic.hpp"

#include "TLScene_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CustomizeCamera.BP_CustomizeCamera_C
// 0x0000 (0x0A00 - 0x0A00)
class ABP_CustomizeCamera_C final : public AUnrealCharacterPreviewCameraActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CustomizeCamera_C">();
	}
	static class ABP_CustomizeCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CustomizeCamera_C>();
	}
};
static_assert(alignof(ABP_CustomizeCamera_C) == 0x000010, "Wrong alignment on ABP_CustomizeCamera_C");
static_assert(sizeof(ABP_CustomizeCamera_C) == 0x000A00, "Wrong size on ABP_CustomizeCamera_C");

}

