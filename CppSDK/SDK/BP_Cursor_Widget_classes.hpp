#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cursor_Widget

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Cursor_Widget.BP_Cursor_Widget_C
// 0x0040 (0x1500 - 0x14C0)
class UBP_Cursor_Widget_C final : public UTLUserWidgetCursor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CursorFX_Widget_C*                  BP_CursorFX_Widget;                                // 0x14C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               RotateCursorImage;                                 // 0x14D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLProgressBar*                         TLLongPressBar;                                    // 0x14D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLScaleBox*                            TLScaleBoxFixedRotate;                             // 0x14E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLScaleBox*                            TLScaleBoxFX;                                      // 0x14E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAnchors                               In_Anchors;                                        // 0x14F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_BP_Cursor_Widget(int32 EntryPoint);
	void OnCursorFXEvent(bool bStronglyFX);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Cursor_Widget_C">();
	}
	static class UBP_Cursor_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Cursor_Widget_C>();
	}
};
static_assert(alignof(UBP_Cursor_Widget_C) == 0x000010, "Wrong alignment on UBP_Cursor_Widget_C");
static_assert(sizeof(UBP_Cursor_Widget_C) == 0x001500, "Wrong size on UBP_Cursor_Widget_C");
static_assert(offsetof(UBP_Cursor_Widget_C, UberGraphFrame) == 0x0014C0, "Member 'UBP_Cursor_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Cursor_Widget_C, BP_CursorFX_Widget) == 0x0014C8, "Member 'UBP_Cursor_Widget_C::BP_CursorFX_Widget' has a wrong offset!");
static_assert(offsetof(UBP_Cursor_Widget_C, RotateCursorImage) == 0x0014D0, "Member 'UBP_Cursor_Widget_C::RotateCursorImage' has a wrong offset!");
static_assert(offsetof(UBP_Cursor_Widget_C, TLLongPressBar) == 0x0014D8, "Member 'UBP_Cursor_Widget_C::TLLongPressBar' has a wrong offset!");
static_assert(offsetof(UBP_Cursor_Widget_C, TLScaleBoxFixedRotate) == 0x0014E0, "Member 'UBP_Cursor_Widget_C::TLScaleBoxFixedRotate' has a wrong offset!");
static_assert(offsetof(UBP_Cursor_Widget_C, TLScaleBoxFX) == 0x0014E8, "Member 'UBP_Cursor_Widget_C::TLScaleBoxFX' has a wrong offset!");
static_assert(offsetof(UBP_Cursor_Widget_C, In_Anchors) == 0x0014F0, "Member 'UBP_Cursor_Widget_C::In_Anchors' has a wrong offset!");

}

