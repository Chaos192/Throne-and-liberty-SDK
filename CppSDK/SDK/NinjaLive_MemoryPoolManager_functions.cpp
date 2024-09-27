#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NinjaLive_MemoryPoolManager

#include "Basic.hpp"

#include "NinjaLive_MemoryPoolManager_classes.hpp"
#include "NinjaLive_MemoryPoolManager_parameters.hpp"


namespace SDK
{

// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ExecuteUbergraph_NinjaLive_MemoryPoolManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_MemoryPoolManager_C::ExecuteUbergraph_NinjaLive_MemoryPoolManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "ExecuteUbergraph_NinjaLive_MemoryPoolManager");

	Params::NinjaLive_MemoryPoolManager_C_ExecuteUbergraph_NinjaLive_MemoryPoolManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.PrintMemStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Consumer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MemConsumption                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TakenOrReturned                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANinjaLive_MemoryPoolManager_C::PrintMemStatus(class UObject* Consumer, float MemConsumption, bool TakenOrReturned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "PrintMemStatus");

	Params::NinjaLive_MemoryPoolManager_C_PrintMemStatus Parms{};

	Parms.Consumer = Consumer;
	Parms.MemConsumption = MemConsumption;
	Parms.TakenOrReturned = TakenOrReturned;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_MemoryPoolManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "ReceiveTick");

	Params::NinjaLive_MemoryPoolManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANinjaLive_MemoryPoolManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANinjaLive_MemoryPoolManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.SetRenderTargetAttribs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*           InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Clamping                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextureRenderTarget2D*           RT                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_MemoryPoolManager_C::SetRenderTargetAttribs(class UTextureRenderTarget2D* InputPin, bool Clamping, class UTextureRenderTarget2D** RT)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "SetRenderTargetAttribs");

	Params::NinjaLive_MemoryPoolManager_C_SetRenderTargetAttribs Parms{};

	Parms.InputPin = InputPin;
	Parms.Clamping = Clamping;

	UObject::ProcessEvent(Func, &Parms);

	if (RT != nullptr)
		*RT = Parms.RT;
}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.MemCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumberOfChannels                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ResolutionX_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ResolutionY_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANinjaLive_MemoryPoolManager_C::MemCount(int32 NumberOfChannels, int32 ResolutionX_0, int32 ResolutionY_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "MemCount");

	Params::NinjaLive_MemoryPoolManager_C_MemCount Parms{};

	Parms.NumberOfChannels = NumberOfChannels;
	Parms.ResolutionX_0 = ResolutionX_0;
	Parms.ResolutionY_0 = ResolutionY_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

