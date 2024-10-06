#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MsgBox_Item_Slot

#include "Basic.hpp"

#include "BP_MsgBox_Item_Slot_classes.hpp"
#include "BP_MsgBox_Item_Slot_parameters.hpp"


namespace SDK
{

// Function BP_MsgBox_Item_Slot.BP_MsgBox_Item_Slot_C.ExecuteUbergraph_BP_MsgBox_Item_Slot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MsgBox_Item_Slot_C::ExecuteUbergraph_BP_MsgBox_Item_Slot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MsgBox_Item_Slot_C", "ExecuteUbergraph_BP_MsgBox_Item_Slot");

	Params::BP_MsgBox_Item_Slot_C_ExecuteUbergraph_BP_MsgBox_Item_Slot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MsgBox_Item_Slot.BP_MsgBox_Item_Slot_C.OnItemGradeUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// EItemGrade                              InGrade                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MsgBox_Item_Slot_C::OnItemGradeUpdate(const EItemGrade InGrade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MsgBox_Item_Slot_C", "OnItemGradeUpdate");

	Params::BP_MsgBox_Item_Slot_C_OnItemGradeUpdate Parms{};

	Parms.InGrade = InGrade;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MsgBox_Item_Slot.BP_MsgBox_Item_Slot_C.OnItemEquipUpdate
// (Event, Public, BlueprintEvent)

void UBP_MsgBox_Item_Slot_C::OnItemEquipUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MsgBox_Item_Slot_C", "OnItemEquipUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MsgBox_Item_Slot.BP_MsgBox_Item_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MsgBox_Item_Slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MsgBox_Item_Slot_C", "PreConstruct");

	Params::BP_MsgBox_Item_Slot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

