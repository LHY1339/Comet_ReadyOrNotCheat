﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Briefing_TImeline

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_Briefing_Audio_PlayStates_structs.hpp"
#include "ReadyOrNot_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Briefing_TImeline.W_Briefing_TImeline_C
// 0x0090 (0x0350 - 0x02C0)
class UW_Briefing_TImeline_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Header_C*                            h_Timeline;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Timeline;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TimelineEntryCanvas;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Timeline_TrackWave_C*       W_Briefing_Timeline_TrackWave;                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget*                                AudioControlWidget;                                // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<double, struct FTimelineEvent>           EventEntries;                                      // 0x02F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_Briefing_Audio_PlayStates                   PlayState;                                         // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AudioCurrentTime;                                  // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AudioPause();
	void AudioPlay(double Start);
	void AudioRestart();
	void AudioScrub();
	void BndEvt__W_Briefing_Timeline_TrackWave_K2Node_ComponentBoundEvent_1_TimelineEventEnded__DelegateSignature(double EventID);
	void DemoMode();
	void ExecuteUbergraph_W_Briefing_TImeline(int32 EntryPoint);
	void Initialize(const TArray<struct FTimelineEvent>& Events, class USoundWave* AudioWaveAsset);
	void Playing(double CurrentPlayTime);
	void PreConstruct(bool IsDesignTime);
	void SetPlayState(E_Briefing_Audio_PlayStates AudioPlayState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Briefing_TImeline_C">();
	}
	static class UW_Briefing_TImeline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Briefing_TImeline_C>();
	}
};
static_assert(alignof(UW_Briefing_TImeline_C) == 0x000008, "Wrong alignment on UW_Briefing_TImeline_C");
static_assert(sizeof(UW_Briefing_TImeline_C) == 0x000350, "Wrong size on UW_Briefing_TImeline_C");
static_assert(offsetof(UW_Briefing_TImeline_C, UberGraphFrame) == 0x0002C0, "Member 'UW_Briefing_TImeline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Briefing_TImeline_C, h_Timeline) == 0x0002C8, "Member 'UW_Briefing_TImeline_C::h_Timeline' has a wrong offset!");
static_assert(offsetof(UW_Briefing_TImeline_C, HB_Timeline) == 0x0002D0, "Member 'UW_Briefing_TImeline_C::HB_Timeline' has a wrong offset!");
static_assert(offsetof(UW_Briefing_TImeline_C, TimelineEntryCanvas) == 0x0002D8, "Member 'UW_Briefing_TImeline_C::TimelineEntryCanvas' has a wrong offset!");
static_assert(offsetof(UW_Briefing_TImeline_C, W_Briefing_Timeline_TrackWave) == 0x0002E0, "Member 'UW_Briefing_TImeline_C::W_Briefing_Timeline_TrackWave' has a wrong offset!");
static_assert(offsetof(UW_Briefing_TImeline_C, AudioControlWidget) == 0x0002E8, "Member 'UW_Briefing_TImeline_C::AudioControlWidget' has a wrong offset!");
static_assert(offsetof(UW_Briefing_TImeline_C, EventEntries) == 0x0002F0, "Member 'UW_Briefing_TImeline_C::EventEntries' has a wrong offset!");
static_assert(offsetof(UW_Briefing_TImeline_C, PlayState) == 0x000340, "Member 'UW_Briefing_TImeline_C::PlayState' has a wrong offset!");
static_assert(offsetof(UW_Briefing_TImeline_C, AudioCurrentTime) == 0x000348, "Member 'UW_Briefing_TImeline_C::AudioCurrentTime' has a wrong offset!");

}

