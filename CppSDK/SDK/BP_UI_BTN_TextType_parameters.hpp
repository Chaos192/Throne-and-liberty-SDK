#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_BTN_TextType

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_UI_BTN_TextType.BP_UI_BTN_TextType_C.ExecuteUbergraph_BP_UI_BTN_TextType
// 0x0038 (0x0038 - 0x0000)
struct BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput_1;              // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType) == 0x000008, "Wrong alignment on BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType");
static_assert(sizeof(BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType) == 0x000038, "Wrong size on BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType");
static_assert(offsetof(BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType, EntryPoint) == 0x000000, "Member 'BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType, CallFunc_SetVisible_self_CastInput) == 0x000008, "Member 'BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType::CallFunc_SetVisible_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType, CallFunc_SetVisible_self_CastInput_1) == 0x000020, "Member 'BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType::CallFunc_SetVisible_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000030, "Member 'BP_UI_BTN_TextType_C_ExecuteUbergraph_BP_UI_BTN_TextType::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");

// Function BP_UI_BTN_TextType.BP_UI_BTN_TextType_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_UI_BTN_TextType_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_BTN_TextType_C_PreConstruct) == 0x000001, "Wrong alignment on BP_UI_BTN_TextType_C_PreConstruct");
static_assert(sizeof(BP_UI_BTN_TextType_C_PreConstruct) == 0x000001, "Wrong size on BP_UI_BTN_TextType_C_PreConstruct");
static_assert(offsetof(BP_UI_BTN_TextType_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_UI_BTN_TextType_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

