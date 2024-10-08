#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemTooltip_Equip_StatType_1

#include "Basic.hpp"

#include "BP_ItemTooltip_Equip_StatType_1_classes.hpp"
#include "BP_ItemTooltip_Equip_StatType_1_parameters.hpp"


namespace SDK
{

// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTooltip_Equip_StatType_1_C::ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1");

	Params::BP_ItemTooltip_Equip_StatType_1_C_ExecuteUbergraph_BP_ItemTooltip_Equip_StatType_1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ItemTooltip_Equip_StatType_1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateAttackValueCompare
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InMinValueDiff                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMaxValueDiff                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTooltip_Equip_StatType_1_C::OnUpdateAttackValueCompare(int32 InMinValueDiff, int32 InMaxValueDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "OnUpdateAttackValueCompare");

	Params::BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValueCompare Parms{};

	Parms.InMinValueDiff = InMinValueDiff;
	Parms.InMaxValueDiff = InMaxValueDiff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTooltip_Equip_StatType_1_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "PreConstruct");

	Params::BP_ItemTooltip_Equip_StatType_1_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateAttackEnchantValueText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InEnchantMinValueText                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             InEnchantMaxValueText                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             InColorKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTooltip_Equip_StatType_1_C::OnUpdateAttackEnchantValueText(const class FText& InEnchantMinValueText, const class FText& InEnchantMaxValueText, class FName InColorKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "OnUpdateAttackEnchantValueText");

	Params::BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackEnchantValueText Parms{};

	Parms.InEnchantMinValueText = std::move(InEnchantMinValueText);
	Parms.InEnchantMaxValueText = std::move(InEnchantMaxValueText);
	Parms.InColorKey = InColorKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateAttackValue
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   InMinValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMaxValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTooltip_Equip_StatType_1_C::OnUpdateAttackValue(int32 InMinValue, int32 InMaxValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "OnUpdateAttackValue");

	Params::BP_ItemTooltip_Equip_StatType_1_C_OnUpdateAttackValue Parms{};

	Parms.InMinValue = InMinValue;
	Parms.InMaxValue = InMaxValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateEnchantValueText
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             InColorKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTooltip_Equip_StatType_1_C::OnUpdateEnchantValueText(const class FText& InText, class FName InColorKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "OnUpdateEnchantValueText");

	Params::BP_ItemTooltip_Equip_StatType_1_C_OnUpdateEnchantValueText Parms{};

	Parms.InText = std::move(InText);
	Parms.InColorKey = InColorKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateBaseValueText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ItemTooltip_Equip_StatType_1_C::OnUpdateBaseValueText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "OnUpdateBaseValueText");

	Params::BP_ItemTooltip_Equip_StatType_1_C_OnUpdateBaseValueText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.OnUpdateName
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ItemTooltip_Equip_StatType_1_C::OnUpdateName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "OnUpdateName");

	Params::BP_ItemTooltip_Equip_StatType_1_C_OnUpdateName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ItemTooltip_Equip_StatType_1.BP_ItemTooltip_Equip_StatType_1_C.GetListItemObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UBP_ItemTooltip_Equip_StatType_1_C::GetListItemObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ItemTooltip_Equip_StatType_1_C", "GetListItemObject");

	Params::BP_ItemTooltip_Equip_StatType_1_C_GetListItemObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

