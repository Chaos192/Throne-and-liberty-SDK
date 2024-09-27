#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_Widget

#include "Basic.hpp"

#include "BP_ItemTooltip_Widget_classes.hpp"
#include "BP_ItemTooltip_Widget_parameters.hpp"


namespace SDK
{

// Function BP_ItemTooltip_Widget.BP_ItemTooltip_Widget_C.ExecuteUbergraph_BP_ItemTooltip_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTooltip_Widget_C::ExecuteUbergraph_BP_ItemTooltip_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Widget_C", "ExecuteUbergraph_BP_ItemTooltip_Widget");

	Params::BP_ItemTooltip_Widget_C_ExecuteUbergraph_BP_ItemTooltip_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Widget.BP_ItemTooltip_Widget_C.OnFixedEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    InFixed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTooltip_Widget_C::OnFixedEvent(bool InFixed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Widget_C", "OnFixedEvent");

	Params::BP_ItemTooltip_Widget_C_OnFixedEvent Parms{};

	Parms.InFixed = InFixed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Widget.BP_ItemTooltip_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTooltip_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Widget_C", "PreConstruct");

	Params::BP_ItemTooltip_Widget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

