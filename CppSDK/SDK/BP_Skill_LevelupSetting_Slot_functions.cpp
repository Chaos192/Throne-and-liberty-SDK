#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Skill_LevelupSetting_Slot

#include "Basic.hpp"

#include "BP_Skill_LevelupSetting_Slot_classes.hpp"
#include "BP_Skill_LevelupSetting_Slot_parameters.hpp"


namespace SDK
{

// Function BP_Skill_LevelupSetting_Slot.BP_Skill_LevelupSetting_Slot_C.ExecuteUbergraph_BP_Skill_LevelupSetting_Slot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Skill_LevelupSetting_Slot_C::ExecuteUbergraph_BP_Skill_LevelupSetting_Slot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_LevelupSetting_Slot_C", "ExecuteUbergraph_BP_Skill_LevelupSetting_Slot");

	Params::BP_Skill_LevelupSetting_Slot_C_ExecuteUbergraph_BP_Skill_LevelupSetting_Slot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_LevelupSetting_Slot.BP_Skill_LevelupSetting_Slot_C.�@t��_0
// (BlueprintCallable, BlueprintEvent)

void UBP_Skill_LevelupSetting_Slot_C::___t___0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_LevelupSetting_Slot_C", "�@t��_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_LevelupSetting_Slot.BP_Skill_LevelupSetting_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Skill_LevelupSetting_Slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_LevelupSetting_Slot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_LevelupSetting_Slot.BP_Skill_LevelupSetting_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Skill_LevelupSetting_Slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_LevelupSetting_Slot_C", "PreConstruct");

	Params::BP_Skill_LevelupSetting_Slot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_LevelupSetting_Slot.BP_Skill_LevelupSetting_Slot_C.OnDimmed
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    InDimmed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Skill_LevelupSetting_Slot_C::OnDimmed(bool InDimmed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_LevelupSetting_Slot_C", "OnDimmed");

	Params::BP_Skill_LevelupSetting_Slot_C_OnDimmed Parms{};

	Parms.InDimmed = InDimmed;

	UObject::ProcessEvent(Func, &Parms);
}

}

