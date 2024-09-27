#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillTootip_Option

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_SkillTootip_Option.BP_SkillTootip_Option_C
// 0x0018 (0x0B78 - 0x0B60)
class UBP_SkillTootip_Option_C final : public UTLUserWidgetSkillLevelOption
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLTextBlock*                           Stat_Title;                                        // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Stat_Value;                                        // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillTootip_Option(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillTootip_Option_C">();
	}
	static class UBP_SkillTootip_Option_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SkillTootip_Option_C>();
	}
};
static_assert(alignof(UBP_SkillTootip_Option_C) == 0x000008, "Wrong alignment on UBP_SkillTootip_Option_C");
static_assert(sizeof(UBP_SkillTootip_Option_C) == 0x000B78, "Wrong size on UBP_SkillTootip_Option_C");
static_assert(offsetof(UBP_SkillTootip_Option_C, UberGraphFrame) == 0x000B60, "Member 'UBP_SkillTootip_Option_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SkillTootip_Option_C, Stat_Title) == 0x000B68, "Member 'UBP_SkillTootip_Option_C::Stat_Title' has a wrong offset!");
static_assert(offsetof(UBP_SkillTootip_Option_C, Stat_Value) == 0x000B70, "Member 'UBP_SkillTootip_Option_C::Stat_Value' has a wrong offset!");

}

