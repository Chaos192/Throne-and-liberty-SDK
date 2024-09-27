#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_Widget

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ItemTooltip_Widget.BP_ItemTooltip_Widget_C.ExecuteUbergraph_BP_ItemTooltip_Widget
// 0x0018 (0x0018 - 0x0000)
struct BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_InFixed;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PlayAnimationInUserWidget_ReturnValue;    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ITLWidgetVisibilityInterface> CallFunc_SetVisible_self_CastInput;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget) == 0x000008, "Wrong alignment on BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget");
static_assert(sizeof(BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget) == 0x000018, "Wrong size on BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget");
static_assert(offsetof(BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget, EntryPoint) == 0x000000, "Member 'BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget, K2Node_Event_InFixed) == 0x000005, "Member 'BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget::K2Node_Event_InFixed' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget, CallFunc_PlayAnimationInUserWidget_ReturnValue) == 0x000006, "Member 'BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget::CallFunc_PlayAnimationInUserWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget, CallFunc_SetVisible_self_CastInput) == 0x000008, "Member 'BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget::CallFunc_SetVisible_self_CastInput' has a wrong offset!");

// Function BP_ItemTooltip_Widget.BP_ItemTooltip_Widget_C.OnFixedEvent
// 0x0001 (0x0001 - 0x0000)
struct BP_ItemTooltip_Widget_C_OnFixedEvent final
{
public:
	bool                                          InFixed;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_Widget_C_OnFixedEvent) == 0x000001, "Wrong alignment on BP_ItemTooltip_Widget_C_OnFixedEvent");
static_assert(sizeof(BP_ItemTooltip_Widget_C_OnFixedEvent) == 0x000001, "Wrong size on BP_ItemTooltip_Widget_C_OnFixedEvent");
static_assert(offsetof(BP_ItemTooltip_Widget_C_OnFixedEvent, InFixed) == 0x000000, "Member 'BP_ItemTooltip_Widget_C_OnFixedEvent::InFixed' has a wrong offset!");

// Function BP_ItemTooltip_Widget.BP_ItemTooltip_Widget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_ItemTooltip_Widget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ItemTooltip_Widget_C_PreConstruct) == 0x000001, "Wrong alignment on BP_ItemTooltip_Widget_C_PreConstruct");
static_assert(sizeof(BP_ItemTooltip_Widget_C_PreConstruct) == 0x000001, "Wrong size on BP_ItemTooltip_Widget_C_PreConstruct");
static_assert(offsetof(BP_ItemTooltip_Widget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_ItemTooltip_Widget_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

