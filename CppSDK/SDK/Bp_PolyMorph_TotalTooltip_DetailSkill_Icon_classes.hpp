#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_PolyMorph_TotalTooltip_DetailSkill_Icon

#include "Basic.hpp"

#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Bp_PolyMorph_TotalTooltip_DetailSkill_Icon.Bp_PolyMorph_TotalTooltip_DetailSkill_Icon_C
// 0x0020 (0x0AA0 - 0x0A80)
class UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C final : public UTLUserWidget
{
public:
	class UWidgetAnimation*                       Dimmed;                                            // 0x0A80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                               SkillFrame;                                        // 0x0A88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               SkillIcon;                                         // 0x0A90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               SkillIcon_Background;                              // 0x0A98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetInfo(const struct FSoftObjectPath& Icon, bool bIsActive_, bool bIsUnveiled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bp_PolyMorph_TotalTooltip_DetailSkill_Icon_C">();
	}
	static class UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C>();
	}
};
static_assert(alignof(UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C) == 0x000008, "Wrong alignment on UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C");
static_assert(sizeof(UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C) == 0x000AA0, "Wrong size on UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C");
static_assert(offsetof(UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C, Dimmed) == 0x000A80, "Member 'UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C::Dimmed' has a wrong offset!");
static_assert(offsetof(UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C, SkillFrame) == 0x000A88, "Member 'UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C::SkillFrame' has a wrong offset!");
static_assert(offsetof(UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C, SkillIcon) == 0x000A90, "Member 'UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C::SkillIcon' has a wrong offset!");
static_assert(offsetof(UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C, SkillIcon_Background) == 0x000A98, "Member 'UBp_PolyMorph_TotalTooltip_DetailSkill_Icon_C::SkillIcon_Background' has a wrong offset!");

}

