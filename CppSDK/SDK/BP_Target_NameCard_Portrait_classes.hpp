#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Target_NameCard_Portrait

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Target_NameCard_Portrait.BP_Target_NameCard_Portrait_C
// 0x0028 (0x0C90 - 0x0C68)
class UBP_Target_NameCard_Portrait_C final : public UTLUserWidgetIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C68(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Arena_TierTeamIcon_Small1_C*        BP_Arena_TierTeamIcon_Small1;                      // 0x0C70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PCPortrait_C*                       BP_PCPortrait;                                     // 0x0C78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               Player_Frame;                                      // 0x0C80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              TeamIcon_Offset;                                   // 0x0C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Target_NameCard_Portrait(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Target_NameCard_Portrait_C">();
	}
	static class UBP_Target_NameCard_Portrait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Target_NameCard_Portrait_C>();
	}
};
static_assert(alignof(UBP_Target_NameCard_Portrait_C) == 0x000008, "Wrong alignment on UBP_Target_NameCard_Portrait_C");
static_assert(sizeof(UBP_Target_NameCard_Portrait_C) == 0x000C90, "Wrong size on UBP_Target_NameCard_Portrait_C");
static_assert(offsetof(UBP_Target_NameCard_Portrait_C, UberGraphFrame) == 0x000C68, "Member 'UBP_Target_NameCard_Portrait_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Portrait_C, BP_Arena_TierTeamIcon_Small1) == 0x000C70, "Member 'UBP_Target_NameCard_Portrait_C::BP_Arena_TierTeamIcon_Small1' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Portrait_C, BP_PCPortrait) == 0x000C78, "Member 'UBP_Target_NameCard_Portrait_C::BP_PCPortrait' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Portrait_C, Player_Frame) == 0x000C80, "Member 'UBP_Target_NameCard_Portrait_C::Player_Frame' has a wrong offset!");
static_assert(offsetof(UBP_Target_NameCard_Portrait_C, TeamIcon_Offset) == 0x000C88, "Member 'UBP_Target_NameCard_Portrait_C::TeamIcon_Offset' has a wrong offset!");

}

