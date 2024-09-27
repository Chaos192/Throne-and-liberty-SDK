#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DropDown_List_Btn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_DropDown_List_Btn.BP_DropDown_List_BTN_C
// 0x0050 (0x1118 - 0x10C8)
class UBP_DropDown_List_BTN_C final : public UTLUserWidgetContextMenuBtn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x10C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Unhover;                                           // 0x10D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x10D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UnCheck;                                           // 0x10E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Check;                                             // 0x10E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       _HIDE_;                                            // 0x10F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       _SHOW_;                                            // 0x10F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_UI_Slot_Texture_C*                  BP_UI_Slot_Nomal;                                  // 0x1100(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               ImageCheck;                                        // 0x1108(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               ImageHover;                                        // 0x1110(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DropDown_List_BTN(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DropDown_List_BTN_C">();
	}
	static class UBP_DropDown_List_BTN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DropDown_List_BTN_C>();
	}
};
static_assert(alignof(UBP_DropDown_List_BTN_C) == 0x000008, "Wrong alignment on UBP_DropDown_List_BTN_C");
static_assert(sizeof(UBP_DropDown_List_BTN_C) == 0x001118, "Wrong size on UBP_DropDown_List_BTN_C");
static_assert(offsetof(UBP_DropDown_List_BTN_C, UberGraphFrame) == 0x0010C8, "Member 'UBP_DropDown_List_BTN_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_List_BTN_C, Unhover) == 0x0010D0, "Member 'UBP_DropDown_List_BTN_C::Unhover' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_List_BTN_C, Hover) == 0x0010D8, "Member 'UBP_DropDown_List_BTN_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_List_BTN_C, UnCheck) == 0x0010E0, "Member 'UBP_DropDown_List_BTN_C::UnCheck' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_List_BTN_C, Check) == 0x0010E8, "Member 'UBP_DropDown_List_BTN_C::Check' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_List_BTN_C, _HIDE_) == 0x0010F0, "Member 'UBP_DropDown_List_BTN_C::_HIDE_' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_List_BTN_C, _SHOW_) == 0x0010F8, "Member 'UBP_DropDown_List_BTN_C::_SHOW_' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_List_BTN_C, BP_UI_Slot_Nomal) == 0x001100, "Member 'UBP_DropDown_List_BTN_C::BP_UI_Slot_Nomal' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_List_BTN_C, ImageCheck) == 0x001108, "Member 'UBP_DropDown_List_BTN_C::ImageCheck' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_List_BTN_C, ImageHover) == 0x001110, "Member 'UBP_DropDown_List_BTN_C::ImageHover' has a wrong offset!");

}

