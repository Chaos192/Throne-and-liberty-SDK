#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MsgBox_Base_Frame

#include "Basic.hpp"

#include "BP_MsgBox_Base_Frame_classes.hpp"
#include "BP_MsgBox_Base_Frame_parameters.hpp"


namespace SDK
{

// Function BP_MsgBox_Base_Frame.BP_MsgBox_Base_Frame_C.ExecuteUbergraph_BP_MsgBox_Base_Frame
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MsgBox_Base_Frame_C::ExecuteUbergraph_BP_MsgBox_Base_Frame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MsgBox_Base_Frame_C", "ExecuteUbergraph_BP_MsgBox_Base_Frame");

	Params::BP_MsgBox_Base_Frame_C_ExecuteUbergraph_BP_MsgBox_Base_Frame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MsgBox_Base_Frame.BP_MsgBox_Base_Frame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MsgBox_Base_Frame_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MsgBox_Base_Frame_C", "PreConstruct");

	Params::BP_MsgBox_Base_Frame_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

