#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DamageFloaterGroup_Defence

#include "Basic.hpp"

#include "BP_DamageFloaterGroup_Defence_classes.hpp"
#include "BP_DamageFloaterGroup_Defence_parameters.hpp"


namespace SDK
{

// Function BP_DamageFloaterGroup_Defence.BP_DamageFloaterGroup_Defence_C.ExecuteUbergraph_BP_DamageFloaterGroup_Defence
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageFloaterGroup_Defence_C::ExecuteUbergraph_BP_DamageFloaterGroup_Defence(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageFloaterGroup_Defence_C", "ExecuteUbergraph_BP_DamageFloaterGroup_Defence");

	Params::BP_DamageFloaterGroup_Defence_C_ExecuteUbergraph_BP_DamageFloaterGroup_Defence Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DamageFloaterGroup_Defence.BP_DamageFloaterGroup_Defence_C.OnEmit
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInPrimeSkill                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EHpAbnormalStatus                       AbnormalStatus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInSuccessByAccuracy                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EFloaterCategory                        FloaterCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMyPc                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DamageFloaterGroup_Defence_C::OnEmit(bool bInPrimeSkill, EHpAbnormalStatus AbnormalStatus, bool bInSuccessByAccuracy, EFloaterCategory FloaterCategory, bool IsMyPc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageFloaterGroup_Defence_C", "OnEmit");

	Params::BP_DamageFloaterGroup_Defence_C_OnEmit Parms{};

	Parms.bInPrimeSkill = bInPrimeSkill;
	Parms.AbnormalStatus = AbnormalStatus;
	Parms.bInSuccessByAccuracy = bInSuccessByAccuracy;
	Parms.FloaterCategory = FloaterCategory;
	Parms.IsMyPc = IsMyPc;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DamageFloaterGroup_Defence.BP_DamageFloaterGroup_Defence_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DamageFloaterGroup_Defence_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageFloaterGroup_Defence_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

