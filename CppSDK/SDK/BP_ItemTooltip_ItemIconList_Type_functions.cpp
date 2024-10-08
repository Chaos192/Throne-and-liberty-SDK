#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_ItemIconList_Type

#include "Basic.hpp"

#include "BP_ItemTooltip_ItemIconList_Type_classes.hpp"
#include "BP_ItemTooltip_ItemIconList_Type_parameters.hpp"


namespace SDK
{

// Function BP_ItemTooltip_ItemIconList_Type.BP_ItemTooltip_ItemIconList_Type_C.ExecuteUbergraph_BP_ItemTooltip_ItemIconList_Type
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTooltip_ItemIconList_Type_C::ExecuteUbergraph_BP_ItemTooltip_ItemIconList_Type(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_ItemIconList_Type_C", "ExecuteUbergraph_BP_ItemTooltip_ItemIconList_Type");

	Params::BP_ItemTooltip_ItemIconList_Type_C_ExecuteUbergraph_BP_ItemTooltip_ItemIconList_Type Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_ItemIconList_Type.BP_ItemTooltip_ItemIconList_Type_C.OnUpdateDescription
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ItemTooltip_ItemIconList_Type_C::OnUpdateDescription(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_ItemIconList_Type_C", "OnUpdateDescription");

	Params::BP_ItemTooltip_ItemIconList_Type_C_OnUpdateDescription Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_ItemIconList_Type.BP_ItemTooltip_ItemIconList_Type_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTooltip_ItemIconList_Type_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_ItemIconList_Type_C", "PreConstruct");

	Params::BP_ItemTooltip_ItemIconList_Type_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_ItemIconList_Type.BP_ItemTooltip_ItemIconList_Type_C.GetListItemObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UBP_ItemTooltip_ItemIconList_Type_C::GetListItemObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_ItemIconList_Type_C", "GetListItemObject");

	Params::BP_ItemTooltip_ItemIconList_Type_C_GetListItemObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

