#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_RedDot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_UI_RedDot.BP_UI_RedDot_C
// 0x0028 (0x0AA8 - 0x0A80)
class UBP_UI_RedDot_C final : public UTLUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLImage*                               DotMinSize;                                        // 0x0A88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage;                                           // 0x0A90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Txt_Alram_num;                                     // 0x0A98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          TextNum_Visible;                                   // 0x0AA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_UI_RedDot(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_RedDot_C">();
	}
	static class UBP_UI_RedDot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_RedDot_C>();
	}
};
static_assert(alignof(UBP_UI_RedDot_C) == 0x000008, "Wrong alignment on UBP_UI_RedDot_C");
static_assert(sizeof(UBP_UI_RedDot_C) == 0x000AA8, "Wrong size on UBP_UI_RedDot_C");
static_assert(offsetof(UBP_UI_RedDot_C, UberGraphFrame) == 0x000A80, "Member 'UBP_UI_RedDot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UI_RedDot_C, DotMinSize) == 0x000A88, "Member 'UBP_UI_RedDot_C::DotMinSize' has a wrong offset!");
static_assert(offsetof(UBP_UI_RedDot_C, TLImage) == 0x000A90, "Member 'UBP_UI_RedDot_C::TLImage' has a wrong offset!");
static_assert(offsetof(UBP_UI_RedDot_C, Txt_Alram_num) == 0x000A98, "Member 'UBP_UI_RedDot_C::Txt_Alram_num' has a wrong offset!");
static_assert(offsetof(UBP_UI_RedDot_C, TextNum_Visible) == 0x000AA0, "Member 'UBP_UI_RedDot_C::TextNum_Visible' has a wrong offset!");

}

