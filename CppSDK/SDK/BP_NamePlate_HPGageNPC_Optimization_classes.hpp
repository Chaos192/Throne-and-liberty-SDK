#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NamePlate_HPGageNPC_Optimization

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "TLClient_structs.hpp"
#include "TLClient_classes.hpp"
#include "TLScheme_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_NamePlate_HPGageNPC_Optimization.BP_NamePlate_HPGageNPC_Optimization_C
// 0x0080 (0x0B08 - 0x0A88)
class UBP_NamePlate_HPGageNPC_Optimization_C final : public UTLUserWidgetNamePlateProgressBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A88(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HideHpBar;                                         // 0x0A90(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                               BG_AbnormalGlow;                                   // 0x0A98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLProgressBar*                         Gauge_Med;                                         // 0x0AA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               GaugeBG_Type;                                      // 0x0AA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLProgressBar*                         HP_Bar;                                            // 0x0AB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLProgressBar*                         HP_Bar_UpperLine;                                  // 0x0AB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               HP_EdgeGlow;                                       // 0x0AC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         HP_EdgeGlow_grp;                                   // 0x0AC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLCanvasPanel*                         HpTotalPanel;                                      // 0x0AD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               IMG_HPhide;                                        // 0x0AD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                               IMG_HPLight_inc;                                   // 0x0AE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLSpacer*                              TLSpacer_GaugeSize;                                // 0x0AE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         EdgeVisibleNum;                                    // 0x0AF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GaugeWidth;                                        // 0x0AF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SET_Size;                                          // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Zero_PCMinus1_NPC;                                 // 0x0B00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_NamePlate_HPGageNPC_Optimization(int32 EntryPoint);
	void PlayHideHpAnim(bool InForward);
	void OnUpdateRelationToMyPc(ETLRelationColorToMyPc InTLRelationColorToMyPc);
	void OnUpdateOverridedRelationColor(const struct FLinearColor& InOverrideColor);
	void OnFocusTargeting(bool InFocused);
	void BndEvt__BP_NamePlate_HPGage_HP_Bar_K2Node_ComponentBoundEvent_0_OnChangedPercent__DelegateSignature(float InPercent);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnChangedHpAbnormalStatus(const EHpAbnormalStatus& InStatus, const bool InbIsMyPc);
	void FnGaugeEdgeSet(class UWidget* Widget, float Percent, float ProgressWidth, float HideEdgePercent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NamePlate_HPGageNPC_Optimization_C">();
	}
	static class UBP_NamePlate_HPGageNPC_Optimization_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NamePlate_HPGageNPC_Optimization_C>();
	}
};
static_assert(alignof(UBP_NamePlate_HPGageNPC_Optimization_C) == 0x000008, "Wrong alignment on UBP_NamePlate_HPGageNPC_Optimization_C");
static_assert(sizeof(UBP_NamePlate_HPGageNPC_Optimization_C) == 0x000B08, "Wrong size on UBP_NamePlate_HPGageNPC_Optimization_C");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, UberGraphFrame) == 0x000A88, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, HideHpBar) == 0x000A90, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::HideHpBar' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, BG_AbnormalGlow) == 0x000A98, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::BG_AbnormalGlow' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, Gauge_Med) == 0x000AA0, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::Gauge_Med' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, GaugeBG_Type) == 0x000AA8, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::GaugeBG_Type' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, HP_Bar) == 0x000AB0, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::HP_Bar' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, HP_Bar_UpperLine) == 0x000AB8, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::HP_Bar_UpperLine' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, HP_EdgeGlow) == 0x000AC0, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::HP_EdgeGlow' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, HP_EdgeGlow_grp) == 0x000AC8, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::HP_EdgeGlow_grp' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, HpTotalPanel) == 0x000AD0, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::HpTotalPanel' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, IMG_HPhide) == 0x000AD8, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::IMG_HPhide' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, IMG_HPLight_inc) == 0x000AE0, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::IMG_HPLight_inc' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, TLSpacer_GaugeSize) == 0x000AE8, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::TLSpacer_GaugeSize' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, EdgeVisibleNum) == 0x000AF0, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::EdgeVisibleNum' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, GaugeWidth) == 0x000AF4, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::GaugeWidth' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, SET_Size) == 0x000AF8, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::SET_Size' has a wrong offset!");
static_assert(offsetof(UBP_NamePlate_HPGageNPC_Optimization_C, Zero_PCMinus1_NPC) == 0x000B00, "Member 'UBP_NamePlate_HPGageNPC_Optimization_C::Zero_PCMinus1_NPC' has a wrong offset!");

}

