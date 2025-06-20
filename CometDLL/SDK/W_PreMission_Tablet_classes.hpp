﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PreMission_Tablet.W_PreMission_Tablet_C
// 0x0A10 (0x0F18 - 0x0508)
class UW_PreMission_Tablet_C final : public UTabletWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0508(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       animWake;                                          // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       animOpenMessenger;                                 // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          AudioPlayer;                                       // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_Brief_C*           Brief;                                             // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*           btn_Brief;                                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*           btn_Camera;                                        // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*           btn_Helicopter;                                    // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*           btn_Map;                                           // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*           btn_Roster;                                        // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget;                                // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    CommonActionWidget_154;                            // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            ExitTabletButton;                                  // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMIssion_Helicopter_C*             Helicopter;                                        // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_131;                                         // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_Messenger_C*       MessengerChat;                                     // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            NextScreenButton;                                  // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                           NoData;                                            // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_PlanningMap_C*            PlanningMap;                                       // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            PreviousScreenButton;                              // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Tablet_Roster_C*                     Roster;                                            // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Content;                                  // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                           SM_Content;                                        // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_NoMission;                                     // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Nav;                                            // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AudioPlayer_C*                       W_AudioPlayer;                                     // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_OpenChatButton;                                  // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bOnPlanningMap;                                    // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F1[0x7];                                      // 0x05F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CurrentPopout;                                     // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_PremissionTablet_Button_C*           CurrentActiveButton;                               // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Radial_MapMarking_C*                 Radial;                                            // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RadialCoords;                                      // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRecreateRadial;                                   // 0x0620(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_621[0x7];                                      // 0x0621(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              LastNormalizedLocation;                            // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInitialized;                                      // 0x0638(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_639[0x7];                                      // 0x0639(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrentMissionURL;                                 // 0x0640(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FLevelDataLookupTable                  CurrentMissionData;                                // 0x0650(0x0818)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, class UWidget*>           NavigationMap;                                     // 0x0E68(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_PreMission_Tablet_Roster_MP_C*       RosterListPopout;                                  // 0x0EB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bRosterOpen;                                       // 0x0EC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC1[0x7];                                      // 0x0EC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ActiveScreen;                                      // 0x0EC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentButtonIndex;                                // 0x0ED0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ED4[0x4];                                      // 0x0ED4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_PremissionTablet_Button_C*           CurrentButton;                                     // 0x0ED8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         ButtonNavigationDpadDirection;                     // 0x0EE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTabletAwake;                                      // 0x0EE4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMissionChanged;                                   // 0x0EE5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EE6[0x2];                                      // 0x0EE6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentZoomDirection;                              // 0x0EE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EEC[0x4];                                      // 0x0EEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ZoomVelocity;                                      // 0x0EF0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RestoreTeamViewOnTabletClosed;                     // 0x0EF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OpenTabletPressed;                                 // 0x0EF9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EFA[0x6];                                      // 0x0EFA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        OpenTabletPressedDuration;                         // 0x0F00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnScreenChange;                                    // 0x0F08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible);
	void BackPage(bool* Handled);
	void BindHelictoperEvents();
	void BndEvt__W_PreMission_Tablet_btn_Brief_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
	void BndEvt__W_PreMission_Tablet_btn_Camera_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
	void BndEvt__W_PreMission_Tablet_btn_Helicopter_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
	void BndEvt__W_PreMission_Tablet_btn_Map_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
	void BndEvt__W_PreMission_Tablet_btn_Team_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_PremissionTablet_Button_C* TriggeringButton);
	void BndEvt__W_PreMission_Tablet_ExitTabletButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PreMission_Tablet_NextScreenButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PreMission_Tablet_PreviousScreen_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PreMission_Tablet_W_OpenChatButton_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PreMission_Tablet_W_PreMission_PlanningMap_K2Node_ComponentBoundEvent_6_OnMapLevelChanged__DelegateSignature(const class FString& MissionURL, const struct FLevelFloor& FloorData);
	void BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_0_OnMessengerOpen__DelegateSignature();
	void BndEvt__W_PreMission_Tablet_W_PreMission_Tablet_Messenger_K2Node_ComponentBoundEvent_1_OnMessengerClose__DelegateSignature();
	void BP_OnActivated();
	bool BP_OnHandleBackAction();
	void ChangePage(class FName PageName);
	void Chat();
	void CloseRadial();
	void Construct();
	void DisplayNoDataScreen(bool NoData_0);
	void ExecuteUbergraph_W_PreMission_Tablet(int32 EntryPoint);
	void GetRosterEnabled(bool* RosterEnabled);
	void Hide(double Delay, bool Collapse);
	void InitNavigation();
	void IsActiveScreen(class UWidget* Screen, bool* IsActive);
	void LoadScreen();
	void MissionChanged(const class FString& MissionURL, const struct FLevelDataLookupTable& LevelData);
	void NextTabletScreen();
	void OnHolsterComplete();
	void OnInitialized();
	void OnInputChange(ECommonInputType bNewInputType);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnMissionChanged(const class FString& URL, const struct FLevelDataLookupTable& LevelData);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OpenRadial(const struct FVector2D& Coordinates);
	void OpenRoster();
	void PreConstruct(bool IsDesignTime);
	void PreviousTabletScreen();
	void RadialCollapsed();
	void RadialMarkerSelected(class FName CategoryName, class FName MarkerName);
	void RefreshHelicopterCam();
	void Reveal(double Delay);
	void SetActiveNavButton(class UW_PremissionTablet_Button_C* NewActiveButton);
	void SetActiveScreen(class UWidget* NewActiveScreen);
	void SetInitialActiveScreen();
	void SetInputMode(bool IsGamepad);
	void SetNavigationButtonColors();
	void SetTabletState(bool IsAwake);
	void SetVisualTheme(bool UseDarkTheme);
	void Sleep();
	void UnbindHelicopterEvents();
	void Update_Dpad_Navigation();
	void UpdateNavigation(class UW_PremissionTablet_Button_C* NewActiveButton);
	void Wake();

	class UWidget* BP_GetDesiredFocusTarget() const;
	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PreMission_Tablet_C">();
	}
	static class UW_PreMission_Tablet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PreMission_Tablet_C>();
	}
};
static_assert(alignof(UW_PreMission_Tablet_C) == 0x000008, "Wrong alignment on UW_PreMission_Tablet_C");
static_assert(sizeof(UW_PreMission_Tablet_C) == 0x000F18, "Wrong size on UW_PreMission_Tablet_C");
static_assert(offsetof(UW_PreMission_Tablet_C, UberGraphFrame) == 0x000508, "Member 'UW_PreMission_Tablet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, animWake) == 0x000510, "Member 'UW_PreMission_Tablet_C::animWake' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, animOpenMessenger) == 0x000518, "Member 'UW_PreMission_Tablet_C::animOpenMessenger' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, AudioPlayer) == 0x000520, "Member 'UW_PreMission_Tablet_C::AudioPlayer' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, Brief) == 0x000528, "Member 'UW_PreMission_Tablet_C::Brief' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, btn_Brief) == 0x000530, "Member 'UW_PreMission_Tablet_C::btn_Brief' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, btn_Camera) == 0x000538, "Member 'UW_PreMission_Tablet_C::btn_Camera' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, btn_Helicopter) == 0x000540, "Member 'UW_PreMission_Tablet_C::btn_Helicopter' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, btn_Map) == 0x000548, "Member 'UW_PreMission_Tablet_C::btn_Map' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, btn_Roster) == 0x000550, "Member 'UW_PreMission_Tablet_C::btn_Roster' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CanvasPanel_0) == 0x000558, "Member 'UW_PreMission_Tablet_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CanvasPanel_1) == 0x000560, "Member 'UW_PreMission_Tablet_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CommonActionWidget) == 0x000568, "Member 'UW_PreMission_Tablet_C::CommonActionWidget' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CommonActionWidget_154) == 0x000570, "Member 'UW_PreMission_Tablet_C::CommonActionWidget_154' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, ExitTabletButton) == 0x000578, "Member 'UW_PreMission_Tablet_C::ExitTabletButton' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, Helicopter) == 0x000580, "Member 'UW_PreMission_Tablet_C::Helicopter' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, Image_131) == 0x000588, "Member 'UW_PreMission_Tablet_C::Image_131' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, MessengerChat) == 0x000590, "Member 'UW_PreMission_Tablet_C::MessengerChat' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, NextScreenButton) == 0x000598, "Member 'UW_PreMission_Tablet_C::NextScreenButton' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, NoData) == 0x0005A0, "Member 'UW_PreMission_Tablet_C::NoData' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, PlanningMap) == 0x0005A8, "Member 'UW_PreMission_Tablet_C::PlanningMap' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, PreviousScreenButton) == 0x0005B0, "Member 'UW_PreMission_Tablet_C::PreviousScreenButton' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, Roster) == 0x0005B8, "Member 'UW_PreMission_Tablet_C::Roster' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, ScaleBox_Content) == 0x0005C0, "Member 'UW_PreMission_Tablet_C::ScaleBox_Content' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, SM_Content) == 0x0005C8, "Member 'UW_PreMission_Tablet_C::SM_Content' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, txt_NoMission) == 0x0005D0, "Member 'UW_PreMission_Tablet_C::txt_NoMission' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, VB_Nav) == 0x0005D8, "Member 'UW_PreMission_Tablet_C::VB_Nav' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, W_AudioPlayer) == 0x0005E0, "Member 'UW_PreMission_Tablet_C::W_AudioPlayer' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, W_OpenChatButton) == 0x0005E8, "Member 'UW_PreMission_Tablet_C::W_OpenChatButton' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, bOnPlanningMap) == 0x0005F0, "Member 'UW_PreMission_Tablet_C::bOnPlanningMap' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CurrentPopout) == 0x0005F8, "Member 'UW_PreMission_Tablet_C::CurrentPopout' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CurrentActiveButton) == 0x000600, "Member 'UW_PreMission_Tablet_C::CurrentActiveButton' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, Radial) == 0x000608, "Member 'UW_PreMission_Tablet_C::Radial' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, RadialCoords) == 0x000610, "Member 'UW_PreMission_Tablet_C::RadialCoords' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, bRecreateRadial) == 0x000620, "Member 'UW_PreMission_Tablet_C::bRecreateRadial' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, LastNormalizedLocation) == 0x000628, "Member 'UW_PreMission_Tablet_C::LastNormalizedLocation' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, bInitialized) == 0x000638, "Member 'UW_PreMission_Tablet_C::bInitialized' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CurrentMissionURL) == 0x000640, "Member 'UW_PreMission_Tablet_C::CurrentMissionURL' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CurrentMissionData) == 0x000650, "Member 'UW_PreMission_Tablet_C::CurrentMissionData' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, NavigationMap) == 0x000E68, "Member 'UW_PreMission_Tablet_C::NavigationMap' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, RosterListPopout) == 0x000EB8, "Member 'UW_PreMission_Tablet_C::RosterListPopout' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, bRosterOpen) == 0x000EC0, "Member 'UW_PreMission_Tablet_C::bRosterOpen' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, ActiveScreen) == 0x000EC8, "Member 'UW_PreMission_Tablet_C::ActiveScreen' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CurrentButtonIndex) == 0x000ED0, "Member 'UW_PreMission_Tablet_C::CurrentButtonIndex' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CurrentButton) == 0x000ED8, "Member 'UW_PreMission_Tablet_C::CurrentButton' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, ButtonNavigationDpadDirection) == 0x000EE0, "Member 'UW_PreMission_Tablet_C::ButtonNavigationDpadDirection' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, bTabletAwake) == 0x000EE4, "Member 'UW_PreMission_Tablet_C::bTabletAwake' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, bMissionChanged) == 0x000EE5, "Member 'UW_PreMission_Tablet_C::bMissionChanged' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, CurrentZoomDirection) == 0x000EE8, "Member 'UW_PreMission_Tablet_C::CurrentZoomDirection' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, ZoomVelocity) == 0x000EF0, "Member 'UW_PreMission_Tablet_C::ZoomVelocity' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, RestoreTeamViewOnTabletClosed) == 0x000EF8, "Member 'UW_PreMission_Tablet_C::RestoreTeamViewOnTabletClosed' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, OpenTabletPressed) == 0x000EF9, "Member 'UW_PreMission_Tablet_C::OpenTabletPressed' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, OpenTabletPressedDuration) == 0x000F00, "Member 'UW_PreMission_Tablet_C::OpenTabletPressedDuration' has a wrong offset!");
static_assert(offsetof(UW_PreMission_Tablet_C, OnScreenChange) == 0x000F08, "Member 'UW_PreMission_Tablet_C::OnScreenChange' has a wrong offset!");

}

