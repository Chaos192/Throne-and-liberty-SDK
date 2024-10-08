#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_MagicDoll_tooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TLClient_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Bp_MagicDoll_tooltip.Bp_MagicDoll_tooltip_C
// 0x00C8 (0x0C18 - 0x0B50)
class UBp_MagicDoll_tooltip_C final : public UTLUserWidgetMagicDollSlotTooltip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideAnim;                                          // 0x0B58(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0B60(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLSizeBox*                             ActionGuideBox;                                    // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLBorder*                              Border_Guide;                                      // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MagicDoll_tooltip_ItemSlot_C*       BP_MagicDoll_ItemSlot;                             // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MagicDoll_Tooltip_Chance_C*         BP_MagicDoll_Tooltip_Chance;                       // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MagicDoll_Tooltip_Effect_C*         BP_MagicDoll_Tooltip_Effect;                       // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MagicDoll_tooltip_MainStat_C*       BP_MagicDoll_tooltip_MainStat;                     // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MagicDoll_SubStat_C*                BP_MagicDoll_Tooltip_SubStat;                      // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_TooltipPanel_Bg_C*                  BP_TooltipPanel_Bg_C_0;                            // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               SectorLine;                                        // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Desc;                                          // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Guide;                                         // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Level;                                         // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Title_1;                                       // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        StylePath_1;                                       // 0x0BD0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        StylePath_2;                                       // 0x0BE8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        StylePath_3;                                       // 0x0C00(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Bp_MagicDoll_tooltip(int32 EntryPoint);
	void SetGuideTextTextBlockStyle(const EMagicDollGuideType& InGuideType);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bp_MagicDoll_tooltip_C">();
	}
	static class UBp_MagicDoll_tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBp_MagicDoll_tooltip_C>();
	}
};
static_assert(alignof(UBp_MagicDoll_tooltip_C) == 0x000008, "Wrong alignment on UBp_MagicDoll_tooltip_C");
static_assert(sizeof(UBp_MagicDoll_tooltip_C) == 0x000C18, "Wrong size on UBp_MagicDoll_tooltip_C");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, UberGraphFrame) == 0x000B50, "Member 'UBp_MagicDoll_tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, HideAnim) == 0x000B58, "Member 'UBp_MagicDoll_tooltip_C::HideAnim' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, ShowAnim) == 0x000B60, "Member 'UBp_MagicDoll_tooltip_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, ActionGuideBox) == 0x000B68, "Member 'UBp_MagicDoll_tooltip_C::ActionGuideBox' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, Border_Guide) == 0x000B70, "Member 'UBp_MagicDoll_tooltip_C::Border_Guide' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, BP_MagicDoll_ItemSlot) == 0x000B78, "Member 'UBp_MagicDoll_tooltip_C::BP_MagicDoll_ItemSlot' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, BP_MagicDoll_Tooltip_Chance) == 0x000B80, "Member 'UBp_MagicDoll_tooltip_C::BP_MagicDoll_Tooltip_Chance' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, BP_MagicDoll_Tooltip_Effect) == 0x000B88, "Member 'UBp_MagicDoll_tooltip_C::BP_MagicDoll_Tooltip_Effect' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, BP_MagicDoll_tooltip_MainStat) == 0x000B90, "Member 'UBp_MagicDoll_tooltip_C::BP_MagicDoll_tooltip_MainStat' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, BP_MagicDoll_Tooltip_SubStat) == 0x000B98, "Member 'UBp_MagicDoll_tooltip_C::BP_MagicDoll_Tooltip_SubStat' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, BP_TooltipPanel_Bg_C_0) == 0x000BA0, "Member 'UBp_MagicDoll_tooltip_C::BP_TooltipPanel_Bg_C_0' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, SectorLine) == 0x000BA8, "Member 'UBp_MagicDoll_tooltip_C::SectorLine' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, TXT_Desc) == 0x000BB0, "Member 'UBp_MagicDoll_tooltip_C::TXT_Desc' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, TXT_Guide) == 0x000BB8, "Member 'UBp_MagicDoll_tooltip_C::TXT_Guide' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, TXT_Level) == 0x000BC0, "Member 'UBp_MagicDoll_tooltip_C::TXT_Level' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, TXT_Title_1) == 0x000BC8, "Member 'UBp_MagicDoll_tooltip_C::TXT_Title_1' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, StylePath_1) == 0x000BD0, "Member 'UBp_MagicDoll_tooltip_C::StylePath_1' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, StylePath_2) == 0x000BE8, "Member 'UBp_MagicDoll_tooltip_C::StylePath_2' has a wrong offset!");
static_assert(offsetof(UBp_MagicDoll_tooltip_C, StylePath_3) == 0x000C00, "Member 'UBp_MagicDoll_tooltip_C::StylePath_3' has a wrong offset!");

}

