#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Interactable_Mark

#include "Basic.hpp"

#include "TLScheme_structs.hpp"


namespace SDK::Params
{

// Function BP_Interactable_Mark.BP_Interactable_Mark_C.ExecuteUbergraph_BP_Interactable_Mark
// 0x0128 (0x0128 - 0x0000)
struct BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECastingEndReason                             K2Node_Event_CastingEndReason;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInMyPcCasting_1;                     // 0x0005(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInShowCooperateNum_1;                // 0x0006(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInMyPcCasting;                       // 0x0007(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInCooperative;                       // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInShowCooperateNum;                  // 0x0009(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetOpacity_self_CastInput;                // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_1;              // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_2;              // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PlayAnimationLoopInUserWidget_ReturnValue; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_3;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_3;              // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_4;              // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_5;              // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_6;              // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_7;              // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_4;       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_5;       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_6;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_8;              // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_9;              // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UTLUserWidgetInteractionCondition*> K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ReferenceParm, ContainsInstancedReference)
	ETLUIPlatform                                 CallFunc_GetUIPlatform_ReturnValue;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark) == 0x000008, "Wrong alignment on BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark");
static_assert(sizeof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark) == 0x000128, "Wrong size on BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, EntryPoint) == 0x000000, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, K2Node_Event_CastingEndReason) == 0x000004, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::K2Node_Event_CastingEndReason' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, K2Node_Event_bInMyPcCasting_1) == 0x000005, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::K2Node_Event_bInMyPcCasting_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, K2Node_Event_bInShowCooperateNum_1) == 0x000006, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::K2Node_Event_bInShowCooperateNum_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, K2Node_Event_bInMyPcCasting) == 0x000007, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::K2Node_Event_bInMyPcCasting' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, K2Node_Event_bInCooperative) == 0x000008, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::K2Node_Event_bInCooperative' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, K2Node_Event_bInShowCooperateNum) == 0x000009, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::K2Node_Event_bInShowCooperateNum' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, K2Node_SwitchEnum_CmpSuccess) == 0x00000A, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetOpacity_self_CastInput) == 0x000010, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetOpacity_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput) == 0x000020, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput_1) == 0x000030, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput_2) == 0x000040, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimationLoopInUserWidget_ReturnValue) == 0x000050, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimationLoopInUserWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimationForward_ReturnValue) == 0x000058, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000060, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000068, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000070, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimationForward_ReturnValue_3) == 0x000078, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimationForward_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput_3) == 0x000080, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput_3' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput_4) == 0x000090, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput_4' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput_5) == 0x0000A0, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput_5' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput_6) == 0x0000B0, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput_6' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput_7) == 0x0000C0, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput_7' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimation_ReturnValue) == 0x0000D0, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimationForward_ReturnValue_4) == 0x0000D8, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimationForward_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimationForward_ReturnValue_5) == 0x0000E0, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimationForward_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_PlayAnimationForward_ReturnValue_6) == 0x0000E8, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_PlayAnimationForward_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput_8) == 0x0000F0, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput_8' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_SetVisible_self_CastInput_9) == 0x000100, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_SetVisible_self_CastInput_9' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, K2Node_MakeArray_Array) == 0x000110, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, CallFunc_GetUIPlatform_ReturnValue) == 0x000120, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::CallFunc_GetUIPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark, K2Node_SwitchEnum_CmpSuccess_1) == 0x000121, "Member 'BP_Interactable_Mark_C_ExecuteUbergraph_BP_Interactable_Mark::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

// Function BP_Interactable_Mark.BP_Interactable_Mark_C.OnCastingStart
// 0x0003 (0x0003 - 0x0000)
struct BP_Interactable_Mark_C_OnCastingStart final
{
public:
	bool                                          bInMyPcCasting;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInCooperative;                                    // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInShowCooperateNum;                               // 0x0002(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Interactable_Mark_C_OnCastingStart) == 0x000001, "Wrong alignment on BP_Interactable_Mark_C_OnCastingStart");
static_assert(sizeof(BP_Interactable_Mark_C_OnCastingStart) == 0x000003, "Wrong size on BP_Interactable_Mark_C_OnCastingStart");
static_assert(offsetof(BP_Interactable_Mark_C_OnCastingStart, bInMyPcCasting) == 0x000000, "Member 'BP_Interactable_Mark_C_OnCastingStart::bInMyPcCasting' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_OnCastingStart, bInCooperative) == 0x000001, "Member 'BP_Interactable_Mark_C_OnCastingStart::bInCooperative' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_OnCastingStart, bInShowCooperateNum) == 0x000002, "Member 'BP_Interactable_Mark_C_OnCastingStart::bInShowCooperateNum' has a wrong offset!");

// Function BP_Interactable_Mark.BP_Interactable_Mark_C.OnCastingEnd
// 0x0003 (0x0003 - 0x0000)
struct BP_Interactable_Mark_C_OnCastingEnd final
{
public:
	ECastingEndReason                             CastingEndReason;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInMyPcCasting;                                    // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInShowCooperateNum;                               // 0x0002(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Interactable_Mark_C_OnCastingEnd) == 0x000001, "Wrong alignment on BP_Interactable_Mark_C_OnCastingEnd");
static_assert(sizeof(BP_Interactable_Mark_C_OnCastingEnd) == 0x000003, "Wrong size on BP_Interactable_Mark_C_OnCastingEnd");
static_assert(offsetof(BP_Interactable_Mark_C_OnCastingEnd, CastingEndReason) == 0x000000, "Member 'BP_Interactable_Mark_C_OnCastingEnd::CastingEndReason' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_OnCastingEnd, bInMyPcCasting) == 0x000001, "Member 'BP_Interactable_Mark_C_OnCastingEnd::bInMyPcCasting' has a wrong offset!");
static_assert(offsetof(BP_Interactable_Mark_C_OnCastingEnd, bInShowCooperateNum) == 0x000002, "Member 'BP_Interactable_Mark_C_OnCastingEnd::bInShowCooperateNum' has a wrong offset!");

}

