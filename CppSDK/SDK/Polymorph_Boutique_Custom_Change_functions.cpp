#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Polymorph_Boutique_Custom_Change

#include "Basic.hpp"

#include "Polymorph_Boutique_Custom_Change_classes.hpp"
#include "Polymorph_Boutique_Custom_Change_parameters.hpp"


namespace SDK
{

// Function Polymorph_Boutique_Custom_Change.SequenceDirector_C.Call OnTransformedIn_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATLScenarioActor*                 Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Polymorph_Boutique_Custom_Change::USequenceDirector_C::Call_OnTransformedIn_0(class ATLScenarioActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "Call OnTransformedIn_0");

	Params::SequenceDirector_C_Call_OnTransformedIn_0 Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Polymorph_Boutique_Custom_Change.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATLScenarioActor*                 Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Polymorph_Boutique_Custom_Change::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class ATLScenarioActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

}

