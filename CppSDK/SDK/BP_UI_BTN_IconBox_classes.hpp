#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_BTN_IconBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UI_BTN_IconBox.BP_UI_BTN_IconBox_C
// 0x0CD8 (0x1BD8 - 0x0F00)
class UBP_UI_BTN_IconBox_C final : public UTLUserWidgetActionGuideButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0F00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x0F08(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Press;                                             // 0x0F10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0F18(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                               BP_SIZE;                                           // 0x0F20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_RedDot_C*                        BP_UI_RedDot;                                      // 0x0F28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         BTNSIZE;                                           // 0x0F30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TEX_COMMON_ICONBTN_HOVERLINE_L;                    // 0x0F38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         ICON_SIZE;                                         // 0x0F40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconBoxSize;                                       // 0x0F44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ICON_OFFSET;                                       // 0x0F48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BP_PANEL_SIZE;                                     // 0x0F50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_PANELSIZE_ONOFF;                                // 0x0F58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          BackIMG_TYPE_SET;                                  // 0x0F59(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F5A[0x2];                                      // 0x0F5A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Two_Gold;                                          // 0x0F5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FButtonStyle                           In_Style_NoneFrame;                                // 0x0F60(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           In_Style_Blue;                                     // 0x11D8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           In_Style_Purple;                                   // 0x1450(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           In_Style_Red;                                      // 0x16C8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           In_Style_NoneLineFace;                             // 0x1940(0x0278)(Edit, BlueprintVisible)
	bool                                          HoverOff;                                          // 0x1BB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1BB9[0x7];                                     // 0x1BB9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        Path_HoverTexture;                                 // 0x1BC0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_UI_BTN_IconBox(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void OnUpdateNotification(bool InIsOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_BTN_IconBox_C">();
	}
	static class UBP_UI_BTN_IconBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_BTN_IconBox_C>();
	}
};
static_assert(alignof(UBP_UI_BTN_IconBox_C) == 0x000008, "Wrong alignment on UBP_UI_BTN_IconBox_C");
static_assert(sizeof(UBP_UI_BTN_IconBox_C) == 0x001BD8, "Wrong size on UBP_UI_BTN_IconBox_C");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, UberGraphFrame) == 0x000F00, "Member 'UBP_UI_BTN_IconBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, ShowAnim) == 0x000F08, "Member 'UBP_UI_BTN_IconBox_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, Press) == 0x000F10, "Member 'UBP_UI_BTN_IconBox_C::Press' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, Hover) == 0x000F18, "Member 'UBP_UI_BTN_IconBox_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, BP_SIZE) == 0x000F20, "Member 'UBP_UI_BTN_IconBox_C::BP_SIZE' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, BP_UI_RedDot) == 0x000F28, "Member 'UBP_UI_BTN_IconBox_C::BP_UI_RedDot' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, BTNSIZE) == 0x000F30, "Member 'UBP_UI_BTN_IconBox_C::BTNSIZE' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, TEX_COMMON_ICONBTN_HOVERLINE_L) == 0x000F38, "Member 'UBP_UI_BTN_IconBox_C::TEX_COMMON_ICONBTN_HOVERLINE_L' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, ICON_SIZE) == 0x000F40, "Member 'UBP_UI_BTN_IconBox_C::ICON_SIZE' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, IconBoxSize) == 0x000F44, "Member 'UBP_UI_BTN_IconBox_C::IconBoxSize' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, ICON_OFFSET) == 0x000F48, "Member 'UBP_UI_BTN_IconBox_C::ICON_OFFSET' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, BP_PANEL_SIZE) == 0x000F50, "Member 'UBP_UI_BTN_IconBox_C::BP_PANEL_SIZE' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, BP_PANELSIZE_ONOFF) == 0x000F58, "Member 'UBP_UI_BTN_IconBox_C::BP_PANELSIZE_ONOFF' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, BackIMG_TYPE_SET) == 0x000F59, "Member 'UBP_UI_BTN_IconBox_C::BackIMG_TYPE_SET' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, Two_Gold) == 0x000F5C, "Member 'UBP_UI_BTN_IconBox_C::Two_Gold' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, In_Style_NoneFrame) == 0x000F60, "Member 'UBP_UI_BTN_IconBox_C::In_Style_NoneFrame' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, In_Style_Blue) == 0x0011D8, "Member 'UBP_UI_BTN_IconBox_C::In_Style_Blue' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, In_Style_Purple) == 0x001450, "Member 'UBP_UI_BTN_IconBox_C::In_Style_Purple' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, In_Style_Red) == 0x0016C8, "Member 'UBP_UI_BTN_IconBox_C::In_Style_Red' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, In_Style_NoneLineFace) == 0x001940, "Member 'UBP_UI_BTN_IconBox_C::In_Style_NoneLineFace' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, HoverOff) == 0x001BB8, "Member 'UBP_UI_BTN_IconBox_C::HoverOff' has a wrong offset!");
static_assert(offsetof(UBP_UI_BTN_IconBox_C, Path_HoverTexture) == 0x001BC0, "Member 'UBP_UI_BTN_IconBox_C::Path_HoverTexture' has a wrong offset!");

}

