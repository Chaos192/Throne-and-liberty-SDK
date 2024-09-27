#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeadUI_DropFo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_HeadUI_DropFo.BP_HeadUI_DropFo_C
// 0x0018 (0x0B68 - 0x0B50)
class UBP_HeadUI_DropFo_C final : public UTLUserWidgetHeadUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Nameplate_DropFo_C*                 BP_Nameplate_DropFo;                               // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         TLCanvasPanel_0;                                   // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HeadUI_DropFo(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HeadUI_DropFo_C">();
	}
	static class UBP_HeadUI_DropFo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HeadUI_DropFo_C>();
	}
};
static_assert(alignof(UBP_HeadUI_DropFo_C) == 0x000008, "Wrong alignment on UBP_HeadUI_DropFo_C");
static_assert(sizeof(UBP_HeadUI_DropFo_C) == 0x000B68, "Wrong size on UBP_HeadUI_DropFo_C");
static_assert(offsetof(UBP_HeadUI_DropFo_C, UberGraphFrame) == 0x000B50, "Member 'UBP_HeadUI_DropFo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_HeadUI_DropFo_C, BP_Nameplate_DropFo) == 0x000B58, "Member 'UBP_HeadUI_DropFo_C::BP_Nameplate_DropFo' has a wrong offset!");
static_assert(offsetof(UBP_HeadUI_DropFo_C, TLCanvasPanel_0) == 0x000B60, "Member 'UBP_HeadUI_DropFo_C::TLCanvasPanel_0' has a wrong offset!");

}

