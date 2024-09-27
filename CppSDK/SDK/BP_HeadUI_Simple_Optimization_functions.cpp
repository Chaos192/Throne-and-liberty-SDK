#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeadUI_Simple_Optimization

#include "Basic.hpp"

#include "BP_HeadUI_Simple_Optimization_classes.hpp"
#include "BP_HeadUI_Simple_Optimization_parameters.hpp"


namespace SDK
{

// Function BP_HeadUI_Simple_Optimization.BP_HeadUI_Simple_Optimization_C.ExecuteUbergraph_BP_HeadUI_Simple_Optimization
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HeadUI_Simple_Optimization_C::ExecuteUbergraph_BP_HeadUI_Simple_Optimization(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadUI_Simple_Optimization_C", "ExecuteUbergraph_BP_HeadUI_Simple_Optimization");

	Params::BP_HeadUI_Simple_Optimization_C_ExecuteUbergraph_BP_HeadUI_Simple_Optimization Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadUI_Simple_Optimization.BP_HeadUI_Simple_Optimization_C.OnUpdateCombatAlert
// (Event, Protected, BlueprintEvent)
// Parameters:
// ETLCombatAlertType                      InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HeadUI_Simple_Optimization_C::OnUpdateCombatAlert(ETLCombatAlertType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadUI_Simple_Optimization_C", "OnUpdateCombatAlert");

	Params::BP_HeadUI_Simple_Optimization_C_OnUpdateCombatAlert Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeadUI_Simple_Optimization.BP_HeadUI_Simple_Optimization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_HeadUI_Simple_Optimization_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadUI_Simple_Optimization_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeadUI_Simple_Optimization.BP_HeadUI_Simple_Optimization_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HeadUI_Simple_Optimization_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeadUI_Simple_Optimization_C", "PreConstruct");

	Params::BP_HeadUI_Simple_Optimization_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

