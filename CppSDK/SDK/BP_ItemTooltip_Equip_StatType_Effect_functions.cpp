#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_Equip_StatType_Effect

#include "Basic.hpp"

#include "BP_ItemTooltip_Equip_StatType_Effect_classes.hpp"
#include "BP_ItemTooltip_Equip_StatType_Effect_parameters.hpp"


namespace SDK
{

// Function BP_ItemTooltip_Equip_StatType_Effect.BP_ItemTooltip_Equip_StatType_Effect_C.ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_Effect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTooltip_Equip_StatType_Effect_C::ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_Effect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_Effect_C", "ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_Effect");

	Params::BP_ItemTooltip_Equip_StatType_Effect_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_Effect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_Effect.BP_ItemTooltip_Equip_StatType_Effect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTooltip_Equip_StatType_Effect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_Effect_C", "PreConstruct");

	Params::BP_ItemTooltip_Equip_StatType_Effect_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_Effect.BP_ItemTooltip_Equip_StatType_Effect_C.�@t��_0
// (BlueprintCallable, BlueprintEvent)

void UBP_ItemTooltip_Equip_StatType_Effect_C::___t___0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_Effect_C", "�@t��_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemTooltip_Equip_StatType_Effect.BP_ItemTooltip_Equip_StatType_Effect_C.GetListItemObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UBP_ItemTooltip_Equip_StatType_Effect_C::GetListItemObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_Effect_C", "GetListItemObject");

	Params::BP_ItemTooltip_Equip_StatType_Effect_C_GetListItemObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

