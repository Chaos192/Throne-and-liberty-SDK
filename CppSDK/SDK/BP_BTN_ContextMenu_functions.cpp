#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BTN_ContextMenu

#include "Basic.hpp"

#include "BP_BTN_ContextMenu_classes.hpp"
#include "BP_BTN_ContextMenu_parameters.hpp"


namespace SDK
{

// Function BP_BTN_ContextMenu.BP_BTN_ContextMenu_C.ExecuteUbergraph_BP_BTN_ContextMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BTN_ContextMenu_C::ExecuteUbergraph_BP_BTN_ContextMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BTN_ContextMenu_C", "ExecuteUbergraph_BP_BTN_ContextMenu");

	Params::BP_BTN_ContextMenu_C_ExecuteUbergraph_BP_BTN_ContextMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BTN_ContextMenu.BP_BTN_ContextMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_BTN_ContextMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BTN_ContextMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

