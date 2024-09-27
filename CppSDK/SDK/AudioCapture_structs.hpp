#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioCapture

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct AudioCapture.AudioCaptureDeviceInfo
// 0x0010 (0x0010 - 0x0000)
struct FAudioCaptureDeviceInfo final
{
public:
	class FName                                   DeviceName;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumInputChannels;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SampleRate;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAudioCaptureDeviceInfo) == 0x000004, "Wrong alignment on FAudioCaptureDeviceInfo");
static_assert(sizeof(FAudioCaptureDeviceInfo) == 0x000010, "Wrong size on FAudioCaptureDeviceInfo");
static_assert(offsetof(FAudioCaptureDeviceInfo, DeviceName) == 0x000000, "Member 'FAudioCaptureDeviceInfo::DeviceName' has a wrong offset!");
static_assert(offsetof(FAudioCaptureDeviceInfo, NumInputChannels) == 0x000008, "Member 'FAudioCaptureDeviceInfo::NumInputChannels' has a wrong offset!");
static_assert(offsetof(FAudioCaptureDeviceInfo, SampleRate) == 0x00000C, "Member 'FAudioCaptureDeviceInfo::SampleRate' has a wrong offset!");

}

