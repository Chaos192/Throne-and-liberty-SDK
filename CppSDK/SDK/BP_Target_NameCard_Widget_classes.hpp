#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Target_NameCard_Widget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Target_NameCard_Widget.BP_Target_NameCard_Widget_C
// 0x0190 (0x1920 - 0x1790)
class UBP_Target_NameCard_Widget_C final : public UTLUserWidgetCharacterCardPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Target_NameCard_ConsoleProfile_C*   BP_Target_NameCard_ConsoleProfile;                 // 0x1798(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_WeaponIcon_C*       BP_Target_NameCard_WeaponIcon;                     // 0x17A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_Portrait_C*         BP_Target_NameCare_Portrait_1;                     // 0x17A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Tem_Emblem_C*                       BP_Tem_Emblem;                                     // 0x17B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Tem_KeyGuideGroup_C*                BP_Tem_KeyGuideGroup;                              // 0x17B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_BTN_IconBox_C*                   BP_UI_BTN_IconBox_Copy_Name;                       // 0x17C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_BTN_IconBox_C*                   BP_UI_BTN_IconBox_send;                            // 0x17C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_BTN_PopUp_Close_C*               BP_UI_BTN_PopUp_Close_75;                          // 0x17D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_BTN_Toggle_IconBox_C*            BP_UI_BTN_Toggle_Translation;                      // 0x17D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_BTN_CheckBox_C*                  BP_UI_BTN_WeaponInfo;                              // 0x17E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_BTN_List_TextBox_C*              BP_UI_cancel;                                      // 0x17E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_EditableTextBox_C*               BP_UI_EditableTextBox;                             // 0x17F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_GuildName_Widget_C*              BP_UI_GuildName_Widget;                            // 0x17F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_UI_BTN_List_TextBox_C*              BP_UI_Save;                                        // 0x1800(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           CharacterNameTXT_1;                                // 0x1808(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           ExpValue;                                          // 0x1810(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           GuildActivityValue;                                // 0x1818(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           GuildActivityValue_1;                              // 0x1820(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           GuildActivityValue_2;                              // 0x1828(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       GuildInfo_1;                                       // 0x1830(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Image_PcRelationship;                              // 0x1838(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLGridPanel*                           Level_GridPanel;                                   // 0x1840(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               LvSlot;                                            // 0x1848(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           LvText;                                            // 0x1850(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Offline_1;                                         // 0x1858(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Online_1;                                          // 0x1860(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLOverlay*                             ONOff_1;                                           // 0x1868(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           PVPValue;                                          // 0x1870(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_RankingBTN_C*       RankingBTN_Exp;                                    // 0x1878(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_RankingBTN_C*       RankingBTN_GuildActivity;                          // 0x1880(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Target_NameCard_RankingBTN_C*       RankingBTN_Pvp;                                    // 0x1888(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLUniformGridPanel*                    SeverInfoPanel;                                    // 0x1890(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TEX_POPUPTITLE_PATTERN;                            // 0x1898(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLOverlay*                             TextCondition_Group;                               // 0x18A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLOverlay*                             TextCondition_Group_1;                             // 0x18A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLSizeBox*                             TextMemo_SizeBox;                                  // 0x18B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         TLCanvasPanel_0;                                   // 0x18B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       TLHorizontalBox_72;                                // 0x18C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage;                                           // 0x18C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_1;                                         // 0x18D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_68;                                        // 0x18D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_226;                                       // 0x18E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLMultiLineEditableTextBox*            TLMultiLineEditableTextBox_Condition;              // 0x18E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLMultiLineEditableTextBox*            TLMultiLineEditableTextBox_Memo;                   // 0x18F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLUniformGridPanel*                    TLUniform_Weapon;                                  // 0x18F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLUniformGridPanel*                    TLUniformGuild;                                    // 0x1900(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Txt_ConsoleId;                                     // 0x1908(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       WhisperHolder;                                     // 0x1910(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           ZoneTXT_1;                                         // 0x1918(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Target_NameCard_Widget(int32 EntryPoint);
	void Construct();
	void OnUpdateInteractable(bool bInInteractable);
	void SetActiveServerInfo(bool bActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Target_NameCard_Widget_C">();
	}
	static class UBP_Target_NameCard_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Target_NameCard_Widget_C>();
	}
};
static_assert(alignof(UBP_Target_NameCard_Widget_C) == 0x000010, "Wrong alignment on UBP_Target_NameCard_Widget_C");
static_assert(sizeof(UBP_Target_NameCard_Widget_C) == 0x001920, "Wrong size on UBP_Target_NameCard_Widget_C");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, UberGraphFrame) == 0x001790, "Member 'UBP_Target_NameCard_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_Target_NameCard_ConsoleProfile) == 0x001798, "Member 'UBP_Target_NameCard_Widget_C::BP_Target_NameCard_ConsoleProfile' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_Target_NameCard_WeaponIcon) == 0x0017A0, "Member 'UBP_Target_NameCard_Widget_C::BP_Target_NameCard_WeaponIcon' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_Target_NameCare_Portrait_1) == 0x0017A8, "Member 'UBP_Target_NameCard_Widget_C::BP_Target_NameCare_Portrait_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_Tem_Emblem) == 0x0017B0, "Member 'UBP_Target_NameCard_Widget_C::BP_Tem_Emblem' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_Tem_KeyGuideGroup) == 0x0017B8, "Member 'UBP_Target_NameCard_Widget_C::BP_Tem_KeyGuideGroup' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_UI_BTN_IconBox_Copy_Name) == 0x0017C0, "Member 'UBP_Target_NameCard_Widget_C::BP_UI_BTN_IconBox_Copy_Name' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_UI_BTN_IconBox_send) == 0x0017C8, "Member 'UBP_Target_NameCard_Widget_C::BP_UI_BTN_IconBox_send' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_UI_BTN_PopUp_Close_75) == 0x0017D0, "Member 'UBP_Target_NameCard_Widget_C::BP_UI_BTN_PopUp_Close_75' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_UI_BTN_Toggle_Translation) == 0x0017D8, "Member 'UBP_Target_NameCard_Widget_C::BP_UI_BTN_Toggle_Translation' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_UI_BTN_WeaponInfo) == 0x0017E0, "Member 'UBP_Target_NameCard_Widget_C::BP_UI_BTN_WeaponInfo' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_UI_cancel) == 0x0017E8, "Member 'UBP_Target_NameCard_Widget_C::BP_UI_cancel' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_UI_EditableTextBox) == 0x0017F0, "Member 'UBP_Target_NameCard_Widget_C::BP_UI_EditableTextBox' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_UI_GuildName_Widget) == 0x0017F8, "Member 'UBP_Target_NameCard_Widget_C::BP_UI_GuildName_Widget' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, BP_UI_Save) == 0x001800, "Member 'UBP_Target_NameCard_Widget_C::BP_UI_Save' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, CharacterNameTXT_1) == 0x001808, "Member 'UBP_Target_NameCard_Widget_C::CharacterNameTXT_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, ExpValue) == 0x001810, "Member 'UBP_Target_NameCard_Widget_C::ExpValue' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, GuildActivityValue) == 0x001818, "Member 'UBP_Target_NameCard_Widget_C::GuildActivityValue' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, GuildActivityValue_1) == 0x001820, "Member 'UBP_Target_NameCard_Widget_C::GuildActivityValue_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, GuildActivityValue_2) == 0x001828, "Member 'UBP_Target_NameCard_Widget_C::GuildActivityValue_2' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, GuildInfo_1) == 0x001830, "Member 'UBP_Target_NameCard_Widget_C::GuildInfo_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, Image_PcRelationship) == 0x001838, "Member 'UBP_Target_NameCard_Widget_C::Image_PcRelationship' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, Level_GridPanel) == 0x001840, "Member 'UBP_Target_NameCard_Widget_C::Level_GridPanel' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, LvSlot) == 0x001848, "Member 'UBP_Target_NameCard_Widget_C::LvSlot' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, LvText) == 0x001850, "Member 'UBP_Target_NameCard_Widget_C::LvText' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, Offline_1) == 0x001858, "Member 'UBP_Target_NameCard_Widget_C::Offline_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, Online_1) == 0x001860, "Member 'UBP_Target_NameCard_Widget_C::Online_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, ONOff_1) == 0x001868, "Member 'UBP_Target_NameCard_Widget_C::ONOff_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, PVPValue) == 0x001870, "Member 'UBP_Target_NameCard_Widget_C::PVPValue' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, RankingBTN_Exp) == 0x001878, "Member 'UBP_Target_NameCard_Widget_C::RankingBTN_Exp' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, RankingBTN_GuildActivity) == 0x001880, "Member 'UBP_Target_NameCard_Widget_C::RankingBTN_GuildActivity' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, RankingBTN_Pvp) == 0x001888, "Member 'UBP_Target_NameCard_Widget_C::RankingBTN_Pvp' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, SeverInfoPanel) == 0x001890, "Member 'UBP_Target_NameCard_Widget_C::SeverInfoPanel' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TEX_POPUPTITLE_PATTERN) == 0x001898, "Member 'UBP_Target_NameCard_Widget_C::TEX_POPUPTITLE_PATTERN' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TextCondition_Group) == 0x0018A0, "Member 'UBP_Target_NameCard_Widget_C::TextCondition_Group' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TextCondition_Group_1) == 0x0018A8, "Member 'UBP_Target_NameCard_Widget_C::TextCondition_Group_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TextMemo_SizeBox) == 0x0018B0, "Member 'UBP_Target_NameCard_Widget_C::TextMemo_SizeBox' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLCanvasPanel_0) == 0x0018B8, "Member 'UBP_Target_NameCard_Widget_C::TLCanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLHorizontalBox_72) == 0x0018C0, "Member 'UBP_Target_NameCard_Widget_C::TLHorizontalBox_72' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLImage) == 0x0018C8, "Member 'UBP_Target_NameCard_Widget_C::TLImage' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLImage_1) == 0x0018D0, "Member 'UBP_Target_NameCard_Widget_C::TLImage_1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLImage_68) == 0x0018D8, "Member 'UBP_Target_NameCard_Widget_C::TLImage_68' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLImage_226) == 0x0018E0, "Member 'UBP_Target_NameCard_Widget_C::TLImage_226' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLMultiLineEditableTextBox_Condition) == 0x0018E8, "Member 'UBP_Target_NameCard_Widget_C::TLMultiLineEditableTextBox_Condition' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLMultiLineEditableTextBox_Memo) == 0x0018F0, "Member 'UBP_Target_NameCard_Widget_C::TLMultiLineEditableTextBox_Memo' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLUniform_Weapon) == 0x0018F8, "Member 'UBP_Target_NameCard_Widget_C::TLUniform_Weapon' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, TLUniformGuild) == 0x001900, "Member 'UBP_Target_NameCard_Widget_C::TLUniformGuild' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, Txt_ConsoleId) == 0x001908, "Member 'UBP_Target_NameCard_Widget_C::Txt_ConsoleId' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, WhisperHolder) == 0x001910, "Member 'UBP_Target_NameCard_Widget_C::WhisperHolder' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Widget_C, ZoneTXT_1) == 0x001918, "Member 'UBP_Target_NameCard_Widget_C::ZoneTXT_1' has a wrong offset!");

}

