#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tutorial_Master04

#include "Basic.hpp"

#include "TLScheme_structs.hpp"


namespace SDK::Params
{

// Function Tutorial_Master04.Tutorial_Master04_C.ExecuteUbergraph_Tutorial_Master04
// 0x004C (0x004C - 0x0000)
struct Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName TutorialTableId, bool bSkip)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InActivate)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EWeaponCategory WeaponCategory, int32 UIPriority)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_TutorialTableId;                // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSkip;                          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InActivate;                     // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTutorialComplete_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EWeaponCategory                               K2Node_CustomEvent_WeaponCategory;                 // 0x0041(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_UIPriority;                     // 0x0044(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04) == 0x000004, "Wrong alignment on Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04");
static_assert(sizeof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04) == 0x00004C, "Wrong size on Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, EntryPoint) == 0x000000, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::EntryPoint' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, K2Node_CustomEvent_TutorialTableId) == 0x000034, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::K2Node_CustomEvent_TutorialTableId' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, K2Node_CustomEvent_bSkip) == 0x00003C, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::K2Node_CustomEvent_bSkip' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00003D, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x00003E, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, K2Node_CustomEvent_InActivate) == 0x00003F, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::K2Node_CustomEvent_InActivate' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, CallFunc_IsTutorialComplete_ReturnValue) == 0x000040, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::CallFunc_IsTutorialComplete_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, K2Node_CustomEvent_WeaponCategory) == 0x000041, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::K2Node_CustomEvent_WeaponCategory' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, K2Node_CustomEvent_UIPriority) == 0x000044, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::K2Node_CustomEvent_UIPriority' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000048, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04, K2Node_SwitchEnum_CmpSuccess) == 0x000049, "Member 'Tutorial_Master04_C_ExecuteUbergraph_Tutorial_Master04::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function Tutorial_Master04.Tutorial_Master04_C.�@t��_0
// 0x0008 (0x0008 - 0x0000)
struct Tutorial_Master04_C____t___0 final
{
public:
	EWeaponCategory                               WeaponCategory;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UIPriority;                                        // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Tutorial_Master04_C____t___0) == 0x000004, "Wrong alignment on Tutorial_Master04_C____t___0");
static_assert(sizeof(Tutorial_Master04_C____t___0) == 0x000008, "Wrong size on Tutorial_Master04_C____t___0");
static_assert(offsetof(Tutorial_Master04_C____t___0, WeaponCategory) == 0x000000, "Member 'Tutorial_Master04_C____t___0::WeaponCategory' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C____t___0, UIPriority) == 0x000004, "Member 'Tutorial_Master04_C____t___0::UIPriority' has a wrong offset!");

// Function Tutorial_Master04.Tutorial_Master04_C.OnEventPartyActivate_Event_0
// 0x0001 (0x0001 - 0x0000)
struct Tutorial_Master04_C_OnEventPartyActivate_Event_0 final
{
public:
	bool                                          InActivate;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tutorial_Master04_C_OnEventPartyActivate_Event_0) == 0x000001, "Wrong alignment on Tutorial_Master04_C_OnEventPartyActivate_Event_0");
static_assert(sizeof(Tutorial_Master04_C_OnEventPartyActivate_Event_0) == 0x000001, "Wrong size on Tutorial_Master04_C_OnEventPartyActivate_Event_0");
static_assert(offsetof(Tutorial_Master04_C_OnEventPartyActivate_Event_0, InActivate) == 0x000000, "Member 'Tutorial_Master04_C_OnEventPartyActivate_Event_0::InActivate' has a wrong offset!");

// Function Tutorial_Master04.Tutorial_Master04_C.OnEventCompleteTutorial_Event_0
// 0x000C (0x000C - 0x0000)
struct Tutorial_Master04_C_OnEventCompleteTutorial_Event_0 final
{
public:
	class FName                                   TutorialTableId;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkip;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Tutorial_Master04_C_OnEventCompleteTutorial_Event_0) == 0x000004, "Wrong alignment on Tutorial_Master04_C_OnEventCompleteTutorial_Event_0");
static_assert(sizeof(Tutorial_Master04_C_OnEventCompleteTutorial_Event_0) == 0x00000C, "Wrong size on Tutorial_Master04_C_OnEventCompleteTutorial_Event_0");
static_assert(offsetof(Tutorial_Master04_C_OnEventCompleteTutorial_Event_0, TutorialTableId) == 0x000000, "Member 'Tutorial_Master04_C_OnEventCompleteTutorial_Event_0::TutorialTableId' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_OnEventCompleteTutorial_Event_0, bSkip) == 0x000008, "Member 'Tutorial_Master04_C_OnEventCompleteTutorial_Event_0::bSkip' has a wrong offset!");

// Function Tutorial_Master04.Tutorial_Master04_C.TLMap pt0 ��
// 0x0140 (0x0140 - 0x0000)
struct Tutorial_Master04_C_TLMap_pt0___ final
{
public:
	class FName                                   CheckRowName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CheckName;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CheckUID;                                          // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTLSchemeMap                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x0028(0x0100)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Tutorial_Master04_C_TLMap_pt0___) == 0x000008, "Wrong alignment on Tutorial_Master04_C_TLMap_pt0___");
static_assert(sizeof(Tutorial_Master04_C_TLMap_pt0___) == 0x000140, "Wrong size on Tutorial_Master04_C_TLMap_pt0___");
static_assert(offsetof(Tutorial_Master04_C_TLMap_pt0___, CheckRowName) == 0x000000, "Member 'Tutorial_Master04_C_TLMap_pt0___::CheckRowName' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLMap_pt0___, CheckName) == 0x000008, "Member 'Tutorial_Master04_C_TLMap_pt0___::CheckName' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLMap_pt0___, CheckUID) == 0x000010, "Member 'Tutorial_Master04_C_TLMap_pt0___::CheckUID' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLMap_pt0___, CallFunc_Conv_NameToString_ReturnValue) == 0x000018, "Member 'Tutorial_Master04_C_TLMap_pt0___::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLMap_pt0___, CallFunc_GetDataTableRowFromName_OutRow) == 0x000028, "Member 'Tutorial_Master04_C_TLMap_pt0___::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLMap_pt0___, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000128, "Member 'Tutorial_Master04_C_TLMap_pt0___::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLMap_pt0___, CallFunc_Concat_StrStr_ReturnValue) == 0x000130, "Member 'Tutorial_Master04_C_TLMap_pt0___::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function Tutorial_Master04.Tutorial_Master04_C.TLEventEffect pt0 ��
// 0x0298 (0x0298 - 0x0000)
struct Tutorial_Master04_C_TLEventEffect_pt0___ final
{
public:
	class FName                                   CheckRowName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CheckName;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTLEventEffect                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0260)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Tutorial_Master04_C_TLEventEffect_pt0___) == 0x000008, "Wrong alignment on Tutorial_Master04_C_TLEventEffect_pt0___");
static_assert(sizeof(Tutorial_Master04_C_TLEventEffect_pt0___) == 0x000298, "Wrong size on Tutorial_Master04_C_TLEventEffect_pt0___");
static_assert(offsetof(Tutorial_Master04_C_TLEventEffect_pt0___, CheckRowName) == 0x000000, "Member 'Tutorial_Master04_C_TLEventEffect_pt0___::CheckRowName' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLEventEffect_pt0___, CheckName) == 0x000008, "Member 'Tutorial_Master04_C_TLEventEffect_pt0___::CheckName' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLEventEffect_pt0___, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'Tutorial_Master04_C_TLEventEffect_pt0___::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLEventEffect_pt0___, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000270, "Member 'Tutorial_Master04_C_TLEventEffect_pt0___::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLEventEffect_pt0___, CallFunc_Conv_NameToString_ReturnValue) == 0x000278, "Member 'Tutorial_Master04_C_TLEventEffect_pt0___::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Tutorial_Master04_C_TLEventEffect_pt0___, CallFunc_Concat_StrStr_ReturnValue) == 0x000288, "Member 'Tutorial_Master04_C_TLEventEffect_pt0___::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

}

