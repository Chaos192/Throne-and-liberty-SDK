#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_BTN_IconTextBox

#include "Basic.hpp"

#include "BP_UI_BTN_IconTextBox_classes.hpp"
#include "BP_UI_BTN_IconTextBox_parameters.hpp"


namespace SDK
{

// Function BP_UI_BTN_IconTextBox.BP_UI_BTN_IconTextBox_C.ExecuteUbergraph_BP_UI_BTN_IconTextBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_BTN_IconTextBox_C::ExecuteUbergraph_BP_UI_BTN_IconTextBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_BTN_IconTextBox_C", "ExecuteUbergraph_BP_UI_BTN_IconTextBox");

	Params::BP_UI_BTN_IconTextBox_C_ExecuteUbergraph_BP_UI_BTN_IconTextBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UI_BTN_IconTextBox.BP_UI_BTN_IconTextBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_BTN_IconTextBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_BTN_IconTextBox_C", "PreConstruct");

	Params::BP_UI_BTN_IconTextBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UI_BTN_IconTextBox.BP_UI_BTN_IconTextBox_C.OnUpdateNotification
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InIsOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_BTN_IconTextBox_C::OnUpdateNotification(bool InIsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UI_BTN_IconTextBox_C", "OnUpdateNotification");

	Params::BP_UI_BTN_IconTextBox_C_OnUpdateNotification Parms{};

	Parms.InIsOn = InIsOn;

	UObject::ProcessEvent(Func, &Parms);
}

}

