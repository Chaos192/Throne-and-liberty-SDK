#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Target_NameCard_ContextMenu_Frame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Target_NameCard_ContextMenu_Frame.BP_Target_NameCard_ContextMenu_Frame_C
// 0x00C0 (0x16B0 - 0x15F0)
class UBP_Target_NameCard_ContextMenu_Frame_C final : public UTLUserWidgetContextMenuList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLVerticalBox*                         ActionBox;                                         // 0x15F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWrapBox*                             ActionBTNHolder;                                   // 0x1600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN;                // 0x1608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_1;              // 0x1610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_2;              // 0x1618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_3;              // 0x1620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_4;              // 0x1628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_5;              // 0x1630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_6;              // 0x1638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_7;              // 0x1640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_8;              // 0x1648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_9;              // 0x1650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_10;             // 0x1658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_ContextMenu_BTN_C*  BP_Target_NameCare_ContextMenu_BTN_11;             // 0x1660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWrapBox*                             DefaultBTNHolder;                                  // 0x1668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLVerticalBox*                         PartyBox;                                          // 0x1670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWrapBox*                             PartyBTNHolder;                                    // 0x1678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLVerticalBox*                         SocialBox;                                         // 0x1680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWrapBox*                             SocialBTNHolder;                                   // 0x1688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_LabelTexture;                              // 0x1690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_LabelTexture_1;                            // 0x1698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_LabelTexture_2;                            // 0x16A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLNamedSlot*                           TLNamedSlot_80;                                    // 0x16A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Target_NameCard_ContextMenu_Frame(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Target_NameCard_ContextMenu_Frame_C">();
	}
	static class UBP_Target_NameCard_ContextMenu_Frame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Target_NameCard_ContextMenu_Frame_C>();
	}
};
static_assert(alignof(UBP_Target_NameCard_ContextMenu_Frame_C) == 0x000010, "Wrong alignment on UBP_Target_NameCard_ContextMenu_Frame_C");
static_assert(sizeof(UBP_Target_NameCard_ContextMenu_Frame_C) == 0x0016B0, "Wrong size on UBP_Target_NameCard_ContextMenu_Frame_C");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, UberGraphFrame) == 0x0015F0, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, ActionBox) == 0x0015F8, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::ActionBox' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, ActionBTNHolder) == 0x001600, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::ActionBTNHolder' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN) == 0x001608, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_1) == 0x001610, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_2) == 0x001618, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_2' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_3) == 0x001620, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_3' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_4) == 0x001628, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_4' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_5) == 0x001630, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_5' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_6) == 0x001638, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_6' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_7) == 0x001640, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_7' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_8) == 0x001648, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_8' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_9) == 0x001650, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_9' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_10) == 0x001658, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_10' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, BP_Target_NameCare_ContextMenu_BTN_11) == 0x001660, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::BP_Target_NameCare_ContextMenu_BTN_11' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, DefaultBTNHolder) == 0x001668, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::DefaultBTNHolder' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, PartyBox) == 0x001670, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::PartyBox' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, PartyBTNHolder) == 0x001678, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::PartyBTNHolder' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, SocialBox) == 0x001680, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::SocialBox' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, SocialBTNHolder) == 0x001688, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::SocialBTNHolder' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, TLImage_LabelTexture) == 0x001690, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::TLImage_LabelTexture' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, TLImage_LabelTexture_1) == 0x001698, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::TLImage_LabelTexture_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, TLImage_LabelTexture_2) == 0x0016A0, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::TLImage_LabelTexture_2' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_ContextMenu_Frame_C, TLNamedSlot_80) == 0x0016A8, "Member 'UBP_Target_NameCard_ContextMenu_Frame_C::TLNamedSlot_80' has a wrong offset!");

}

