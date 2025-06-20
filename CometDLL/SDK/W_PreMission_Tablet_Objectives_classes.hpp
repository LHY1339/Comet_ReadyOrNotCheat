﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Objectives

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "ReadyOrNot_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Objectives.W_PreMission_Tablet_Objectives_C
// 0x0960 (0x0C20 - 0x02C0)
class UW_PreMission_Tablet_Objectives_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Text_C*                              lbl_Objectives;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ObjectiveScrollBox;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_Situation;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_ObjectiveList;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLevelDataLookupTable                  LevelData;                                         // 0x02E8(0x0818)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 MissionURL;                                        // 0x0B00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        ObjectiveSpacing;                                  // 0x0B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B18[0x8];                                      // 0x0B18(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            DividerBrush;                                      // 0x0B20(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        ObjectiveAutoScrollSpeed;                          // 0x0BF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ObjectiveAutoScrollStartDelay;                     // 0x0BF8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ObjectiveAutoScrollEndDelay;                       // 0x0C00(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ObjectiveAutoScrollTimeAtEnd;                      // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ObjectiveAutoScrollTimeAtStart;                    // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddObjectiveToList(class UW_PreMission_Tablet_Objectives_Entry_C* ObjectiveEntry, bool IsLast);
	void Construct();
	void CustomEvent_0();
	void ExecuteUbergraph_W_PreMission_Tablet_Objectives(int32 EntryPoint);
	void GetObjectivesByClass();
	void MissionChanged(const class FString& MissionURL_0, const struct FLevelDataLookupTable& LevelData_0);
	void OnLoaded_3BD6E0A444807EC303095394A3607018(TSubclassOf<class UObject> Loaded);
	void ShouldAutoScroll(double DeltaTime, bool* Scroll);
	void ShouldResetScroll(double DeltaTime, bool* Reset);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateObjectives();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PreMission_Tablet_Objectives_C">();
	}
	static class UW_PreMission_Tablet_Objectives_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PreMission_Tablet_Objectives_C>();
	}
};
static_assert(alignof(UW_PreMission_Tablet_Objectives_C) == 0x000010, "Wrong alignment on UW_PreMission_Tablet_Objectives_C");
static_assert(sizeof(UW_PreMission_Tablet_Objectives_C) == 0x000C20, "Wrong size on UW_PreMission_Tablet_Objectives_C");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, UberGraphFrame) == 0x0002C0, "Member 'UW_PreMission_Tablet_Objectives_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, lbl_Objectives) == 0x0002C8, "Member 'UW_PreMission_Tablet_Objectives_C::lbl_Objectives' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, ObjectiveScrollBox) == 0x0002D0, "Member 'UW_PreMission_Tablet_Objectives_C::ObjectiveScrollBox' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, txt_Situation) == 0x0002D8, "Member 'UW_PreMission_Tablet_Objectives_C::txt_Situation' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, VB_ObjectiveList) == 0x0002E0, "Member 'UW_PreMission_Tablet_Objectives_C::VB_ObjectiveList' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, LevelData) == 0x0002E8, "Member 'UW_PreMission_Tablet_Objectives_C::LevelData' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, MissionURL) == 0x000B00, "Member 'UW_PreMission_Tablet_Objectives_C::MissionURL' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, ObjectiveSpacing) == 0x000B10, "Member 'UW_PreMission_Tablet_Objectives_C::ObjectiveSpacing' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, DividerBrush) == 0x000B20, "Member 'UW_PreMission_Tablet_Objectives_C::DividerBrush' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, ObjectiveAutoScrollSpeed) == 0x000BF0, "Member 'UW_PreMission_Tablet_Objectives_C::ObjectiveAutoScrollSpeed' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, ObjectiveAutoScrollStartDelay) == 0x000BF8, "Member 'UW_PreMission_Tablet_Objectives_C::ObjectiveAutoScrollStartDelay' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, ObjectiveAutoScrollEndDelay) == 0x000C00, "Member 'UW_PreMission_Tablet_Objectives_C::ObjectiveAutoScrollEndDelay' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, ObjectiveAutoScrollTimeAtEnd) == 0x000C08, "Member 'UW_PreMission_Tablet_Objectives_C::ObjectiveAutoScrollTimeAtEnd' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_Objectives_C, ObjectiveAutoScrollTimeAtStart) == 0x000C10, "Member 'UW_PreMission_Tablet_Objectives_C::ObjectiveAutoScrollTimeAtStart' has a wrong offset!");

}

