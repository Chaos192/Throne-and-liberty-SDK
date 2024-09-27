#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Death_Panelty_Tooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Death_Panelty_Tooltip.BP_Death_Panelty_Tooltip_C
// 0x0050 (0x0B90 - 0x0B40)
class UBP_Death_Panelty_Tooltip_C final : public UTLUserWidgetRestorationHudTooltip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       _HIDE_;                                            // 0x0B48(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       _SHOW_;                                            // 0x0B50(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_TooltipPanel_Bg_C*                  BP_Event_TooltipPanel_Bg;                          // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               ICO_Membership;                                    // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Title_TXT;                                         // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       TLHorizontalBox;                                   // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Count;                                         // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_DeScription;                                   // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Title_1;                                       // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Death_Panelty_Tooltip(int32 EntryPoint);
	void OnUpdateMembershipState(bool bActivate);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Death_Panelty_Tooltip_C">();
	}
	static class UBP_Death_Panelty_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Death_Panelty_Tooltip_C>();
	}
};
static_assert(alignof(UBP_Death_Panelty_Tooltip_C) == 0x000008, "Wrong alignment on UBP_Death_Panelty_Tooltip_C");
static_assert(sizeof(UBP_Death_Panelty_Tooltip_C) == 0x000B90, "Wrong size on UBP_Death_Panelty_Tooltip_C");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, UberGraphFrame) == 0x000B40, "Member 'UBP_Death_Panelty_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, _HIDE_) == 0x000B48, "Member 'UBP_Death_Panelty_Tooltip_C::_HIDE_' has a wrong offset!");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, _SHOW_) == 0x000B50, "Member 'UBP_Death_Panelty_Tooltip_C::_SHOW_' has a wrong offset!");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, BP_Event_TooltipPanel_Bg) == 0x000B58, "Member 'UBP_Death_Panelty_Tooltip_C::BP_Event_TooltipPanel_Bg' has a wrong offset!");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, ICO_Membership) == 0x000B60, "Member 'UBP_Death_Panelty_Tooltip_C::ICO_Membership' has a wrong offset!");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, Title_TXT) == 0x000B68, "Member 'UBP_Death_Panelty_Tooltip_C::Title_TXT' has a wrong offset!");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, TLHorizontalBox) == 0x000B70, "Member 'UBP_Death_Panelty_Tooltip_C::TLHorizontalBox' has a wrong offset!");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, TXT_Count) == 0x000B78, "Member 'UBP_Death_Panelty_Tooltip_C::TXT_Count' has a wrong offset!");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, TXT_DeScription) == 0x000B80, "Member 'UBP_Death_Panelty_Tooltip_C::TXT_DeScription' has a wrong offset!");
static_assert(offsetof(UBP_Death_Panelty_Tooltip_C, TXT_Title_1) == 0x000B88, "Member 'UBP_Death_Panelty_Tooltip_C::TXT_Title_1' has a wrong offset!");

}

