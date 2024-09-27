#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DropDown_Frame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_DropDown_Frame.BP_DropDown_Frame_C
// 0x0020 (0x11C0 - 0x11A0)
class UBP_DropDown_Frame_C final : public UTLUserWidgetContextMenuSubFrame
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x11A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DropDown_List_BTN_C*                BP_DropDown_List_BTN;                              // 0x11A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropDown_Title_BTN_C*               BP_DropDown_Title_BTN;                             // 0x11B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLVerticalBox*                         VerticalBox;                                       // 0x11B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DropDown_Frame(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DropDown_Frame_C">();
	}
	static class UBP_DropDown_Frame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DropDown_Frame_C>();
	}
};
static_assert(alignof(UBP_DropDown_Frame_C) == 0x000010, "Wrong alignment on UBP_DropDown_Frame_C");
static_assert(sizeof(UBP_DropDown_Frame_C) == 0x0011C0, "Wrong size on UBP_DropDown_Frame_C");
static_assert(offsetof(UBP_DropDown_Frame_C, UberGraphFrame) == 0x0011A0, "Member 'UBP_DropDown_Frame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_Frame_C, BP_DropDown_List_BTN) == 0x0011A8, "Member 'UBP_DropDown_Frame_C::BP_DropDown_List_BTN' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_Frame_C, BP_DropDown_Title_BTN) == 0x0011B0, "Member 'UBP_DropDown_Frame_C::BP_DropDown_Title_BTN' has a wrong offset!");
static_assert(offsetof(UBP_DropDown_Frame_C, VerticalBox) == 0x0011B8, "Member 'UBP_DropDown_Frame_C::VerticalBox' has a wrong offset!");

}

