#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_GuildName_WithEmblem_Widget

#include "Basic.hpp"

#include "BP_UI_GuildName_WithEmblem_Widget_classes.hpp"
#include "BP_UI_GuildName_WithEmblem_Widget_parameters.hpp"


namespace SDK
{

// Function BP_UI_GuildName_WithEmblem_Widget.BP_UI_GuildName_WithEmblem_Widget_C.ExecuteUbergraph_BP_UI_GuildName_WithEmblem_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_GuildName_WithEmblem_Widget_C::ExecuteUbergraph_BP_UI_GuildName_WithEmblem_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_GuildName_WithEmblem_Widget_C", "ExecuteUbergraph_BP_UI_GuildName_WithEmblem_Widget");

	Params::BP_UI_GuildName_WithEmblem_Widget_C_ExecuteUbergraph_BP_UI_GuildName_WithEmblem_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UI_GuildName_WithEmblem_Widget.BP_UI_GuildName_WithEmblem_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_GuildName_WithEmblem_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_GuildName_WithEmblem_Widget_C", "PreConstruct");

	Params::BP_UI_GuildName_WithEmblem_Widget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UI_GuildName_WithEmblem_Widget.BP_UI_GuildName_WithEmblem_Widget_C.BndEvt__BP_UI_GuildNameWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UI_GuildName_WithEmblem_Widget_C::BndEvt__BP_UI_GuildNameWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_GuildName_WithEmblem_Widget_C", "BndEvt__BP_UI_GuildNameWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UI_GuildName_WithEmblem_Widget.BP_UI_GuildName_WithEmblem_Widget_C.BndEvt__BP_UI_GuildNameWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_UI_GuildName_WithEmblem_Widget_C::BndEvt__BP_UI_GuildNameWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_GuildName_WithEmblem_Widget_C", "BndEvt__BP_UI_GuildNameWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

