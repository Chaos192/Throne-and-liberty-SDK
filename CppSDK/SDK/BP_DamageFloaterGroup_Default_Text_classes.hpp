#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DamageFloaterGroup_Default_Text

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TLClient_classes.hpp"
#include "TLScheme_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_DamageFloaterGroup_Default_Text.BP_DamageFloaterGroup_Default_Text_C
// 0x00A0 (0x0DA8 - 0x0D08)
class UBP_DamageFloaterGroup_Default_Text_C final : public UTLUserWidgetFloater
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D08(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Resist_MyPC;                                       // 0x0D10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Resist_Default;                                    // 0x0D18(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Immune_Default;                                    // 0x0D20(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Absorb_MyPC;                                       // 0x0D28(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Absorb_Default;                                    // 0x0D30(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Miss_MyPC;                                         // 0x0D38(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Miss_Default;                                      // 0x0D40(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                               IconAbnormal;                                      // 0x0D48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               IconSector;                                        // 0x0D50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         Offset_Panel;                                      // 0x0D58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Pos_Panel;                                         // 0x0D60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Rot_Panel;                                         // 0x0D68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Txt_DamageType;                                    // 0x0D70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSoftObjectPath>                Path_Miss_TextStyleSet;                            // 0x0D78(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSoftObjectPath>                Path_Absorb_TextStyleSet;                          // 0x0D88(0x0010)(Edit, BlueprintVisible)
	TArray<struct FSoftObjectPath>                Path_Immune_TextStyleSet;                          // 0x0D98(0x0010)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BP_DamageFloaterGroup_Default_Text(int32 EntryPoint);
	void Construct();
	void OnEmit(bool bInPrimeSkill, EHpAbnormalStatus AbnormalStatus, bool bInSuccessByAccuracy, EFloaterCategory FloaterCategory, bool IsMyPc);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DamageFloaterGroup_Default_Text_C">();
	}
	static class UBP_DamageFloaterGroup_Default_Text_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DamageFloaterGroup_Default_Text_C>();
	}
};
static_assert(alignof(UBP_DamageFloaterGroup_Default_Text_C) == 0x000008, "Wrong alignment on UBP_DamageFloaterGroup_Default_Text_C");
static_assert(sizeof(UBP_DamageFloaterGroup_Default_Text_C) == 0x000DA8, "Wrong size on UBP_DamageFloaterGroup_Default_Text_C");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, UberGraphFrame) == 0x000D08, "Member 'UBP_DamageFloaterGroup_Default_Text_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Resist_MyPC) == 0x000D10, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Resist_MyPC' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Resist_Default) == 0x000D18, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Resist_Default' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Immune_Default) == 0x000D20, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Immune_Default' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Absorb_MyPC) == 0x000D28, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Absorb_MyPC' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Absorb_Default) == 0x000D30, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Absorb_Default' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Miss_MyPC) == 0x000D38, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Miss_MyPC' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Miss_Default) == 0x000D40, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Miss_Default' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, IconAbnormal) == 0x000D48, "Member 'UBP_DamageFloaterGroup_Default_Text_C::IconAbnormal' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, IconSector) == 0x000D50, "Member 'UBP_DamageFloaterGroup_Default_Text_C::IconSector' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Offset_Panel) == 0x000D58, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Offset_Panel' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Pos_Panel) == 0x000D60, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Pos_Panel' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Rot_Panel) == 0x000D68, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Rot_Panel' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Txt_DamageType) == 0x000D70, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Txt_DamageType' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Path_Miss_TextStyleSet) == 0x000D78, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Path_Miss_TextStyleSet' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Path_Absorb_TextStyleSet) == 0x000D88, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Path_Absorb_TextStyleSet' has a wrong offset!");
static_assert(offsetof(UBP_DamageFloaterGroup_Default_Text_C, Path_Immune_TextStyleSet) == 0x000D98, "Member 'UBP_DamageFloaterGroup_Default_Text_C::Path_Immune_TextStyleSet' has a wrong offset!");

}

