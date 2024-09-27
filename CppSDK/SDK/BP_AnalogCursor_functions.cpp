#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnalogCursor

#include "Basic.hpp"

#include "BP_AnalogCursor_classes.hpp"
#include "BP_AnalogCursor_parameters.hpp"


namespace SDK
{

// Function BP_AnalogCursor.BP_AnalogCursor_C.ExecuteUbergraph_BP_AnalogCursor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AnalogCursor_C::ExecuteUbergraph_BP_AnalogCursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalogCursor_C", "ExecuteUbergraph_BP_AnalogCursor");

	Params::BP_AnalogCursor_C_ExecuteUbergraph_BP_AnalogCursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AnalogCursor.BP_AnalogCursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_AnalogCursor_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AnalogCursor_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

