#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Target_NameCard_Portrait

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Target_NameCard_Portrait.BP_Target_NameCard_Portrait_C.ExecuteUbergraph_BP_Target_NameCard_Portrait
// 0x0018 (0x0018 - 0x0000)
struct BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait) == 0x000008, "Wrong alignment on BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait");
static_assert(sizeof(BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait) == 0x000018, "Wrong size on BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait");
static_assert(offsetof(BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait, EntryPoint) == 0x000000, "Member 'BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait, K2Node_Event_IsDesignTime) == 0x000010, "Member 'BP_Target_NameCard_Portrait_C_ExecuteUbergraph_BP_Target_NameCard_Portrait::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BP_Target_NameCard_Portrait.BP_Target_NameCard_Portrait_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_Target_NameCard_Portrait_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Target_NameCard_Portrait_C_PreConstruct) == 0x000001, "Wrong alignment on BP_Target_NameCard_Portrait_C_PreConstruct");
static_assert(sizeof(BP_Target_NameCard_Portrait_C_PreConstruct) == 0x000001, "Wrong size on BP_Target_NameCard_Portrait_C_PreConstruct");
static_assert(offsetof(BP_Target_NameCard_Portrait_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_Target_NameCard_Portrait_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

