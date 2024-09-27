#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Specialization_Tooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Specialization_Tooltip.BP_Specialization_Tooltip_C
// 0x0048 (0x0B40 - 0x0AF8)
class UBP_Specialization_Tooltip_C final : public UTLUserWidgetSkillTraitTooltip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AF8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLImage*                               TLImage_Icon;                                      // 0x0B00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage_SlotCover;                                 // 0x0B08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_ActionGuide;                                   // 0x0B10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_ActionGuide_1;                                 // 0x0B18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_DeScription;                                   // 0x0B20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_Description_DuplicateGuide;                    // 0x0B28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_PointText;                                     // 0x0B30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           TXT_SkillName;                                     // 0x0B38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Specialization_Tooltip(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Specialization_Tooltip_C">();
	}
	static class UBP_Specialization_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Specialization_Tooltip_C>();
	}
};
static_assert(alignof(UBP_Specialization_Tooltip_C) == 0x000008, "Wrong alignment on UBP_Specialization_Tooltip_C");
static_assert(sizeof(UBP_Specialization_Tooltip_C) == 0x000B40, "Wrong size on UBP_Specialization_Tooltip_C");
static_assert(offsetof(UBP_Specialization_Tooltip_C, UberGraphFrame) == 0x000AF8, "Member 'UBP_Specialization_Tooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Specialization_Tooltip_C, TLImage_Icon) == 0x000B00, "Member 'UBP_Specialization_Tooltip_C::TLImage_Icon' has a wrong offset!");
static_assert(offsetof(UBP_Specialization_Tooltip_C, TLImage_SlotCover) == 0x000B08, "Member 'UBP_Specialization_Tooltip_C::TLImage_SlotCover' has a wrong offset!");
static_assert(offsetof(UBP_Specialization_Tooltip_C, TXT_ActionGuide) == 0x000B10, "Member 'UBP_Specialization_Tooltip_C::TXT_ActionGuide' has a wrong offset!");
static_assert(offsetof(UBP_Specialization_Tooltip_C, TXT_ActionGuide_1) == 0x000B18, "Member 'UBP_Specialization_Tooltip_C::TXT_ActionGuide_1' has a wrong offset!");
static_assert(offsetof(UBP_Specialization_Tooltip_C, TXT_DeScription) == 0x000B20, "Member 'UBP_Specialization_Tooltip_C::TXT_DeScription' has a wrong offset!");
static_assert(offsetof(UBP_Specialization_Tooltip_C, TXT_Description_DuplicateGuide) == 0x000B28, "Member 'UBP_Specialization_Tooltip_C::TXT_Description_DuplicateGuide' has a wrong offset!");
static_assert(offsetof(UBP_Specialization_Tooltip_C, TXT_PointText) == 0x000B30, "Member 'UBP_Specialization_Tooltip_C::TXT_PointText' has a wrong offset!");
static_assert(offsetof(UBP_Specialization_Tooltip_C, TXT_SkillName) == 0x000B38, "Member 'UBP_Specialization_Tooltip_C::TXT_SkillName' has a wrong offset!");

}

