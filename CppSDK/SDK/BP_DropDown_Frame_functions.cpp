#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DropDown_Frame

#include "Basic.hpp"

#include "BP_DropDown_Frame_classes.hpp"
#include "BP_DropDown_Frame_parameters.hpp"


namespace SDK
{

// Function BP_DropDown_Frame.BP_DropDown_Frame_C.ExecuteUbergraph_BP_DropDown_Frame
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DropDown_Frame_C::ExecuteUbergraph_BP_DropDown_Frame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DropDown_Frame_C", "ExecuteUbergraph_BP_DropDown_Frame");

	Params::BP_DropDown_Frame_C_ExecuteUbergraph_BP_DropDown_Frame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DropDown_Frame.BP_DropDown_Frame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DropDown_Frame_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DropDown_Frame_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

