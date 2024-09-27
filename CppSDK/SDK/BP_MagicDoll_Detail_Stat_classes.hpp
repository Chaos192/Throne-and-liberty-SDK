#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MagicDoll_Detail_Stat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TLClient_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_MagicDoll_Detail_Stat.BP_MagicDoll_Detail_Stat_C
// 0x0098 (0x0BC0 - 0x0B28)
class UBP_MagicDoll_Detail_Stat_C final : public UTLUserWidgetMagicDollStat
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTLTextBlock*                           Name_TXT;                                          // 0x0B30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLHorizontalBox*                       Preview;                                           // 0x0B38(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               TLImage;                                           // 0x0B40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Value_TXT;                                         // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                           Value_TXT_1;                                       // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Bold;                                              // 0x0B58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B59[0x7];                                      // 0x0B59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        UpImage;                                           // 0x0B60(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        DownImage;                                         // 0x0B78(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        Style_Bold;                                        // 0x0B90(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        Style_Normal;                                      // 0x0BA8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MagicDoll_Detail_Stat(int32 EntryPoint);
	void CustomEvent_1();
	void CustomEvent_0();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetBold(bool Bold_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MagicDoll_Detail_Stat_C">();
	}
	static class UBP_MagicDoll_Detail_Stat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MagicDoll_Detail_Stat_C>();
	}
};
static_assert(alignof(UBP_MagicDoll_Detail_Stat_C) == 0x000008, "Wrong alignment on UBP_MagicDoll_Detail_Stat_C");
static_assert(sizeof(UBP_MagicDoll_Detail_Stat_C) == 0x000BC0, "Wrong size on UBP_MagicDoll_Detail_Stat_C");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, UberGraphFrame) == 0x000B28, "Member 'UBP_MagicDoll_Detail_Stat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, Name_TXT) == 0x000B30, "Member 'UBP_MagicDoll_Detail_Stat_C::Name_TXT' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, Preview) == 0x000B38, "Member 'UBP_MagicDoll_Detail_Stat_C::Preview' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, TLImage) == 0x000B40, "Member 'UBP_MagicDoll_Detail_Stat_C::TLImage' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, Value_TXT) == 0x000B48, "Member 'UBP_MagicDoll_Detail_Stat_C::Value_TXT' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, Value_TXT_1) == 0x000B50, "Member 'UBP_MagicDoll_Detail_Stat_C::Value_TXT_1' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, Bold) == 0x000B58, "Member 'UBP_MagicDoll_Detail_Stat_C::Bold' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, UpImage) == 0x000B60, "Member 'UBP_MagicDoll_Detail_Stat_C::UpImage' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, DownImage) == 0x000B78, "Member 'UBP_MagicDoll_Detail_Stat_C::DownImage' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, Style_Bold) == 0x000B90, "Member 'UBP_MagicDoll_Detail_Stat_C::Style_Bold' has a wrong offset!");
static_assert(offsetof(UBP_MagicDoll_Detail_Stat_C, Style_Normal) == 0x000BA8, "Member 'UBP_MagicDoll_Detail_Stat_C::Style_Normal' has a wrong offset!");

}

