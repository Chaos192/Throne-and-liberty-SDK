#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"

#include "GeometryCache_classes.hpp"
#include "GeometryCache_parameters.hpp"


namespace SDK
{

// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGeometryCacheComponent*          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheActor", "GetGeometryCacheComponent");

	Params::GeometryCacheActor_GetGeometryCacheComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData           NewMeshData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheTrack_TransformAnimation", "SetMesh");

	Params::GeometryCacheTrack_TransformAnimation_SetMesh Parms{};

	Parms.NewMeshData = std::move(NewMeshData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.Pause
// (Final, Native, Public, BlueprintCallable)

void UGeometryCacheComponent::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.Play
// (Final, Native, Public, BlueprintCallable)

void UGeometryCacheComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)

void UGeometryCacheComponent::PlayFromStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayFromStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.PlayReversed
// (Final, Native, Public, BlueprintCallable)

void UGeometryCacheComponent::PlayReversed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayReversed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
// (Final, Native, Public, BlueprintCallable)

void UGeometryCacheComponent::PlayReversedFromEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayReversedFromEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bNewExtrapolating                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetExtrapolateFrames(const bool bNewExtrapolating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "SetExtrapolateFrames");

	Params::GeometryCacheComponent_SetExtrapolateFrames Parms{};

	Parms.bNewExtrapolating = bNewExtrapolating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCache*                   NewGeomCache                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "SetGeometryCache");

	Params::GeometryCacheComponent_SetGeometryCache Parms{};

	Parms.NewGeomCache = NewGeomCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bNewLooping                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetLooping(const bool bNewLooping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "SetLooping");

	Params::GeometryCacheComponent_SetLooping Parms{};

	Parms.bNewLooping = bNewLooping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewMotionVectorScale                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetMotionVectorScale(const float NewMotionVectorScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "SetMotionVectorScale");

	Params::GeometryCacheComponent_SetMotionVectorScale Parms{};

	Parms.NewMotionVectorScale = NewMotionVectorScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewPlaybackSpeed                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetPlaybackSpeed(const float NewPlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "SetPlaybackSpeed");

	Params::GeometryCacheComponent_SetPlaybackSpeed Parms{};

	Parms.NewPlaybackSpeed = NewPlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewStartTimeOffset                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetStartTimeOffset(const float NewStartTimeOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "SetStartTimeOffset");

	Params::GeometryCacheComponent_SetStartTimeOffset Parms{};

	Parms.NewStartTimeOffset = NewStartTimeOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UGeometryCacheComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   Time                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bInIsRunning                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bInBackwards                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bInIsLooping                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "TickAtThisTime");

	Params::GeometryCacheComponent_TickAtThisTime Parms{};

	Parms.Time = Time;
	Parms.bInIsRunning = bInIsRunning;
	Parms.bInBackwards = bInBackwards;
	Parms.bInIsLooping = bInIsLooping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetAnimationTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "GetAnimationTime");

	Params::GeometryCacheComponent_GetAnimationTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "GetDuration");

	Params::GeometryCacheComponent_GetDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetMotionVectorScale() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "GetMotionVectorScale");

	Params::GeometryCacheComponent_GetMotionVectorScale Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryCacheComponent::GetNumberOfFrames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "GetNumberOfFrames");

	Params::GeometryCacheComponent_GetNumberOfFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetPlaybackDirection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "GetPlaybackDirection");

	Params::GeometryCacheComponent_GetPlaybackDirection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetPlaybackSpeed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "GetPlaybackSpeed");

	Params::GeometryCacheComponent_GetPlaybackSpeed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetStartTimeOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "GetStartTimeOffset");

	Params::GeometryCacheComponent_GetStartTimeOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsExtrapolatingFrames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "IsExtrapolatingFrames");

	Params::GeometryCacheComponent_IsExtrapolatingFrames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsLooping() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "IsLooping");

	Params::GeometryCacheComponent_IsLooping Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "IsPlaying");

	Params::GeometryCacheComponent_IsPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsPlayingReversed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheComponent", "IsPlayingReversed");

	Params::GeometryCacheComponent_IsPlayingReversed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData           MeshData                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                                   SampleTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, const float SampleTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheTrack_FlipbookAnimation", "AddMeshSample");

	Params::GeometryCacheTrack_FlipbookAnimation_AddMeshSample Parms{};

	Parms.MeshData = std::move(MeshData);
	Parms.SampleTime = SampleTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData           NewMeshData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GeometryCacheTrack_TransformGroupAnimation", "SetMesh");

	Params::GeometryCacheTrack_TransformGroupAnimation_SetMesh Parms{};

	Parms.NewMeshData = std::move(NewMeshData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

