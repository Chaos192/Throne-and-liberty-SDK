#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HudComponentPC

#include "Basic.hpp"

#include "TLClient_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HudComponentPC.BP_HudComponentPC_C
// 0x0000 (0x0108 - 0x0108)
class UBP_HudComponentPC_C final : public UTLHudComponentConditionObjectPc
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HudComponentPC_C">();
	}
	static class UBP_HudComponentPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HudComponentPC_C>();
	}
};
static_assert(alignof(UBP_HudComponentPC_C) == 0x000008, "Wrong alignment on UBP_HudComponentPC_C");
static_assert(sizeof(UBP_HudComponentPC_C) == 0x000108, "Wrong size on UBP_HudComponentPC_C");

}

