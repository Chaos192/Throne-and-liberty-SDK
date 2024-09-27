#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_Progress

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UI_Progress.BP_UI_Progress_C
// 0x09F0 (0x1470 - 0x0A80)
class UBP_UI_Progress_C final : public UTLUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLProgressBar*                         ProgressBar;                                       // 0x0A88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         TLCanvasPanel_0;                                   // 0x0A90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLSpacer*                              TLSpacer_ProgressSize;                             // 0x0A98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ProgressLargeOn_SmallOff;                          // 0x0AA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AA1[0x7];                                      // 0x0AA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FProgressBarStyle                      Style_L_01;                                        // 0x0AA8(0x01A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProgressBarStyle                      Style_L_02;                                        // 0x0C48(0x01A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProgressBarStyle                      Style_L_03;                                        // 0x0DE8(0x01A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Three_Red;                                         // 0x0F88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F8C[0x4];                                      // 0x0F8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FProgressBarStyle                      Style_S_01;                                        // 0x0F90(0x01A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProgressBarStyle                      Style_S_02;                                        // 0x1130(0x01A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProgressBarStyle                      Style_S_03;                                        // 0x12D0(0x01A0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_UI_Progress(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Large();
	void Small();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_Progress_C">();
	}
	static class UBP_UI_Progress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_Progress_C>();
	}
};
static_assert(alignof(UBP_UI_Progress_C) == 0x000008, "Wrong alignment on UBP_UI_Progress_C");
static_assert(sizeof(UBP_UI_Progress_C) == 0x001470, "Wrong size on UBP_UI_Progress_C");
static_assert(offsetof(UBP_UI_Progress_C, UberGraphFrame) == 0x000A80, "Member 'UBP_UI_Progress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, ProgressBar) == 0x000A88, "Member 'UBP_UI_Progress_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, TLCanvasPanel_0) == 0x000A90, "Member 'UBP_UI_Progress_C::TLCanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, TLSpacer_ProgressSize) == 0x000A98, "Member 'UBP_UI_Progress_C::TLSpacer_ProgressSize' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, ProgressLargeOn_SmallOff) == 0x000AA0, "Member 'UBP_UI_Progress_C::ProgressLargeOn_SmallOff' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, Style_L_01) == 0x000AA8, "Member 'UBP_UI_Progress_C::Style_L_01' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, Style_L_02) == 0x000C48, "Member 'UBP_UI_Progress_C::Style_L_02' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, Style_L_03) == 0x000DE8, "Member 'UBP_UI_Progress_C::Style_L_03' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, Three_Red) == 0x000F88, "Member 'UBP_UI_Progress_C::Three_Red' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, Style_S_01) == 0x000F90, "Member 'UBP_UI_Progress_C::Style_S_01' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, Style_S_02) == 0x001130, "Member 'UBP_UI_Progress_C::Style_S_02' has a wrong offset!");
static_assert(offsetof(UBP_UI_Progress_C, Style_S_03) == 0x0012D0, "Member 'UBP_UI_Progress_C::Style_S_03' has a wrong offset!");

}

