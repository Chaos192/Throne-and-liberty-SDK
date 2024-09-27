#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_BTN_Toggle_OnlyIcon_NoColor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UI_BTN_Toggle_OnlyIcon_NoColor.BP_UI_BTN_Toggle_OnlyIcon_NoColor_C
// 0x0048 (0x1040 - 0x0FF8)
class UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C final : public UTLUserWidgetCheckButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FF8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Check;                                             // 0x1000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Press;                                             // 0x1008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x1010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLSizeBox*                             BTN_Size;                                          // 0x1018(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         BTNHolder;                                         // 0x1020(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          RedButton_On;                                      // 0x1028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1029[0x3];                                     // 0x1029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BTN_Size_width;                                    // 0x102C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BTN_Size_Height;                                   // 0x1030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Offset_Value;                                      // 0x1034(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RoundBox_On;                                       // 0x103C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          FocusHoverUsed;                                    // 0x103D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_UI_BTN_Toggle_OnlyIcon_NoColor(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_BTN_Toggle_OnlyIcon_NoColor_C">();
	}
	static class UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C>();
	}
};
static_assert(alignof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C) == 0x000008, "Wrong alignment on UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C");
static_assert(sizeof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C) == 0x001040, "Wrong size on UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, UberGraphFrame) == 0x000FF8, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, Check) == 0x001000, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::Check' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, Press) == 0x001008, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::Press' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, Hover) == 0x001010, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, BTN_Size) == 0x001018, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::BTN_Size' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, BTNHolder) == 0x001020, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::BTNHolder' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, RedButton_On) == 0x001028, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::RedButton_On' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, BTN_Size_width) == 0x00102C, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::BTN_Size_width' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, BTN_Size_Height) == 0x001030, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::BTN_Size_Height' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, Offset_Value) == 0x001034, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::Offset_Value' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, RoundBox_On) == 0x00103C, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::RoundBox_On' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C, FocusHoverUsed) == 0x00103D, "Member 'UBP_UI_BTN_Toggle_OnlyIcon_NoColor_C::FocusHoverUsed' has a wrong offset!");

}

