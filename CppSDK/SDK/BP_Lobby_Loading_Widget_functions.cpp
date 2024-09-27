#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Lobby_Loading_Widget

#include "Basic.hpp"

#include "BP_Lobby_Loading_Widget_classes.hpp"
#include "BP_Lobby_Loading_Widget_parameters.hpp"


namespace SDK
{

// Function BP_Lobby_Loading_Widget.BP_Lobby_Loading_Widget_C.ExecuteUbergraph_BP_Lobby_Loading_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Lobby_Loading_Widget_C::ExecuteUbergraph_BP_Lobby_Loading_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lobby_Loading_Widget_C", "ExecuteUbergraph_BP_Lobby_Loading_Widget");

	Params::BP_Lobby_Loading_Widget_C_ExecuteUbergraph_BP_Lobby_Loading_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Lobby_Loading_Widget.BP_Lobby_Loading_Widget_C.OnLoadingDeactivation
// (Event, Public, BlueprintEvent)

void UBP_Lobby_Loading_Widget_C::OnLoadingDeactivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lobby_Loading_Widget_C", "OnLoadingDeactivation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Lobby_Loading_Widget.BP_Lobby_Loading_Widget_C.OnLoadingActivation
// (Event, Public, BlueprintEvent)

void UBP_Lobby_Loading_Widget_C::OnLoadingActivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lobby_Loading_Widget_C", "OnLoadingActivation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Lobby_Loading_Widget.BP_Lobby_Loading_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Lobby_Loading_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Lobby_Loading_Widget_C", "PreConstruct");

	Params::BP_Lobby_Loading_Widget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

