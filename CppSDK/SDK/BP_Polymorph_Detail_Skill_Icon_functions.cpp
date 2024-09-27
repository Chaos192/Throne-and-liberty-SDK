#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Polymorph_Detail_Skill_Icon

#include "Basic.hpp"

#include "BP_Polymorph_Detail_Skill_Icon_classes.hpp"
#include "BP_Polymorph_Detail_Skill_Icon_parameters.hpp"


namespace SDK
{

// Function BP_Polymorph_Detail_Skill_Icon.BP_Polymorph_Detail_Skill_Icon_C.ExecuteUbergraph_BP_Polymorph_Detail_Skill_Icon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Polymorph_Detail_Skill_Icon_C::ExecuteUbergraph_BP_Polymorph_Detail_Skill_Icon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Polymorph_Detail_Skill_Icon_C", "ExecuteUbergraph_BP_Polymorph_Detail_Skill_Icon");

	Params::BP_Polymorph_Detail_Skill_Icon_C_ExecuteUbergraph_BP_Polymorph_Detail_Skill_Icon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Polymorph_Detail_Skill_Icon.BP_Polymorph_Detail_Skill_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Polymorph_Detail_Skill_Icon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Polymorph_Detail_Skill_Icon_C", "PreConstruct");

	Params::BP_Polymorph_Detail_Skill_Icon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Polymorph_Detail_Skill_Icon.BP_Polymorph_Detail_Skill_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Polymorph_Detail_Skill_Icon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Polymorph_Detail_Skill_Icon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Polymorph_Detail_Skill_Icon.BP_Polymorph_Detail_Skill_Icon_C.SetInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoftObjectPath                  Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bIsActive_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsUnveiled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Polymorph_Detail_Skill_Icon_C::SetInfo(const struct FSoftObjectPath& Icon, bool bIsActive_, bool bIsUnveiled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Polymorph_Detail_Skill_Icon_C", "SetInfo");

	Params::BP_Polymorph_Detail_Skill_Icon_C_SetInfo Parms{};

	Parms.Icon = std::move(Icon);
	Parms.bIsActive_ = bIsActive_;
	Parms.bIsUnveiled = bIsUnveiled;

	UObject::ProcessEvent(Func, &Parms);
}

}

