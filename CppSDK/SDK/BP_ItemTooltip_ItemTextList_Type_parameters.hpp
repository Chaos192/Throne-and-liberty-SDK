#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_ItemTextList_Type

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ItemTooltip_ItemTextList_Type.BP_ItemTooltip_ItemTextList_Type_C.ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type
// 0x0018 (0x0018 - 0x0000)
struct BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InIsDimmed;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type) == 0x000008, "Wrong alignment on BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type");
static_assert(sizeof(BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type) == 0x000018, "Wrong size on BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type");
static_assert(offsetof(BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type, EntryPoint) == 0x000000, "Member 'BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type, K2Node_Event_InIsDimmed) == 0x000004, "Member 'BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type::K2Node_Event_InIsDimmed' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type, CallFunc_SetVisible_self_CastInput) == 0x000008, "Member 'BP_ItemTooltip_ItemTextList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemTextList_Type::CallFunc_SetVisible_self_CastInput' has a wrong offset!");

// Function BP_ItemTooltip_ItemTextList_Type.BP_ItemTooltip_ItemTextList_Type_C.OnSlotDimmed
// 0x0001 (0x0001 - 0x0000)
struct BP_ItemTooltip_ItemTextList_Type_C_OnSlotDimmed final
{
public:
	bool                                          InIsDimmed;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_ItemTextList_Type_C_OnSlotDimmed) == 0x000001, "Wrong alignment on BP_ItemTooltip_ItemTextList_Type_C_OnSlotDimmed");
static_assert(sizeof(BP_ItemTooltip_ItemTextList_Type_C_OnSlotDimmed) == 0x000001, "Wrong size on BP_ItemTooltip_ItemTextList_Type_C_OnSlotDimmed");
static_assert(offsetof(BP_ItemTooltip_ItemTextList_Type_C_OnSlotDimmed, InIsDimmed) == 0x000000, "Member 'BP_ItemTooltip_ItemTextList_Type_C_OnSlotDimmed::InIsDimmed' has a wrong offset!");

}

