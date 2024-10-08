#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tutorial_Master02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TLClient_classes.hpp"
#include "TLScheme_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tutorial_Master02.Tutorial_Master02_C
// 0x0010 (0x06D0 - 0x06C0)
class UTutorial_Master02_C final : public UTLTutorialConditionObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   ______x_____;                                      // 0x06C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Tutorial_Master02(int32 EntryPoint);
	void OnEventEndCutscene_Event_0(class FName CutSceneID);
	void OnEventClosePopupWindow_Event_0(class FName PopupWidgetName);
	void OnEventObjTickInterval_Event_0(class UTLObjectWorldProxy* WorldObject);
	void OnEventCeateTLObjectWorldEvent_Event_0(int32 ObjId, class FName TableRowName, EWorldObjectType WorldObjectType, ETLCreatureRank CreatureRank);
	void OnEventShowNpcContract_Event_0(int32 AcceptableCount);
	void OnEventObjectiveAttained_Event_0(class FName Guid);
	void OnEventChangeAlive_Event_0(bool bAlive, ETLSetAliveSource SetAliveSource, bool bHasRestorableInfo);
	void OnEventPartyActivate_Event_0(bool InActivate);
	void OnActivateByID(class FName InTutorialId);
	void OnCreate();
	void FO_pt0___(class FName CheckRowName, int32* CheckUID, class FName* CheckName);
	void NPC_pt0___(class FName CheckRowName, int32* CheckUID, class FName* CheckName);
	void UI_pt0___(class FName CheckRowName, class FName* CheckName);
	void Cutscene_pt0___(class FName CheckRowName, class FName* CheckName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tutorial_Master02_C">();
	}
	static class UTutorial_Master02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorial_Master02_C>();
	}
};
static_assert(alignof(UTutorial_Master02_C) == 0x000008, "Wrong alignment on UTutorial_Master02_C");
static_assert(sizeof(UTutorial_Master02_C) == 0x0006D0, "Wrong size on UTutorial_Master02_C");
static_assert(offsetof(UTutorial_Master02_C, UberGraphFrame) == 0x0006C0, "Member 'UTutorial_Master02_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorial_Master02_C, ______x_____) == 0x0006C8, "Member 'UTutorial_Master02_C::______x_____' has a wrong offset!");

}

