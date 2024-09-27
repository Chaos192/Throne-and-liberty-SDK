#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_Equip_StatType_Effect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ItemTooltip_Equip_StatType_Effect.BP_ItemTooltip_Equip_StatType_Effect_C
// 0x0020 (0x14C0 - 0x14A0)
class UBP_ItemTooltip_Equip_StatType_Effect_C final : public UTLUserWidgetItemTooltipSetInfoSubText
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLTextBlock*                           TXT_NAME;                                          // 0x14A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Value;                                         // 0x14B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_Effect(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void ___t___0();

	class UObject* GetListItemObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ItemTooltip_Equip_StatType_Effect_C">();
	}
	static class UBP_ItemTooltip_Equip_StatType_Effect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ItemTooltip_Equip_StatType_Effect_C>();
	}
};
static_assert(alignof(UBP_ItemTooltip_Equip_StatType_Effect_C) == 0x000010, "Wrong alignment on UBP_ItemTooltip_Equip_StatType_Effect_C");
static_assert(sizeof(UBP_ItemTooltip_Equip_StatType_Effect_C) == 0x0014C0, "Wrong size on UBP_ItemTooltip_Equip_StatType_Effect_C");
static_assert(offsetof(UBP_ItemTooltip_Equip_StatType_Effect_C, UberGraphFrame) == 0x0014A0, "Member 'UBP_ItemTooltip_Equip_StatType_Effect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_StatType_Effect_C, TXT_NAME) == 0x0014A8, "Member 'UBP_ItemTooltip_Equip_StatType_Effect_C::TXT_NAME' has a wrong offset!");
static_assert(offsetof(UBP_ItemTooltip_Equip_StatType_Effect_C, TXT_Value) == 0x0014B0, "Member 'UBP_ItemTooltip_Equip_StatType_Effect_C::TXT_Value' has a wrong offset!");

}

