﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WorldMap

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_WorldMap.W_WorldMap_C
// 0x0248 (0x0508 - 0x02C0)
class UW_WorldMap_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Overlay;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                            btn_AcceptMission;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                btn_ClickAway;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            btn_Close;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                CityInfo;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 div_Formation_Bot;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 div_Formation_Top;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Equipment;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_SelectedMissionImg;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_TooltipLevelPicture;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_WorldMap;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Info;                                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              lbl_Formation;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LockBox;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        MapBlur;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapBlurClickable;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MapInteraction;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MissionSelectBlank;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MissionTypeBox;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ModdedMapList;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_01b;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Agency;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Agency2;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Beachfront;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Campus;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Club;                                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Coyote;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_DataCenter;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Dealer;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_DoorZoo;                                       // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Farm;                                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_FastFood;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Gas;                                           // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_GoreDevTest;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Hospital;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Importer;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Meth;                                          // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_MethApartments;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Penthouse;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_port;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Ridgeline;                                     // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Sins;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Streamer;                                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Training;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMapPin_C*                       Pin_Valley;                                        // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PinPanel;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RanKRequired;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootCanvas;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SelectedMissionPanel;                              // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_3;                                         // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ToolTip;                                           // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_Formation;                                     // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_Name_1;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             txt_SelectedMissionDescription;                    // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_SelectedMissionDesignation;                    // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_SelectedMissionName;                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_SelectedMissionTimeOfDay;                      // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_FloorButtons;                                   // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMap_MissionSelect_C*            W_WorldMap_MissionSelect_ActiveShooter;            // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMap_MissionSelect_C*            W_WorldMap_MissionSelect_BarricadedSuspects;       // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMap_MissionSelect_C*            W_WorldMap_MissionSelect_BombThreat;               // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMap_MissionSelect_C*            W_WorldMap_MissionSelect_HostageRescue;            // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_WorldMap_MissionSelect_C*            W_WorldMap_MissionSelect_RAID;                     // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(bool Pressed, const struct FVector2D& CursorPos)> PanMap;          // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UTexture2D* LayoutTexture)> UpdateMapMaterial;               // 0x04D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              NewEventDispatcher_0;                              // 0x04E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_UI_PlanningMap_C*                   PlanningMapActor;                                  // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                   Selected_Mission;                                  // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SelectedMode;                                      // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__W_WorldMap_btn_AcceptMission_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_WorldMap_btn_Close_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Construct();
	void ExecuteUbergraph_W_WorldMap(int32 EntryPoint);
	void GoBack();
	struct FEventReply On_MapBlurClickable_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnSetMissionButtonClicked_Event_0(class UW_WorldMap_MissionSelect_C* BtnClicked);
	void PinClicked(class FName MissionName);
	void PinHovered(class FName MissionName);
	void PinUnhovered(class FName MissionName);
	void SetSelectedMission(class FName SelectedMission);
	void SetSelectedMode(class FName SelectedMode_0);
	void ShowToolTip(const struct FLevelDataLookupTable& MissionDetails);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_WorldMap_C">();
	}
	static class UW_WorldMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_WorldMap_C>();
	}
};
static_assert(alignof(UW_WorldMap_C) == 0x000008, "Wrong alignment on UW_WorldMap_C");
static_assert(sizeof(UW_WorldMap_C) == 0x000508, "Wrong size on UW_WorldMap_C");
static_assert(offsetof(UW_WorldMap_C, UberGraphFrame) == 0x0002C0, "Member 'UW_WorldMap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Overlay) == 0x0002C8, "Member 'UW_WorldMap_C::Overlay' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, btn_AcceptMission) == 0x0002D0, "Member 'UW_WorldMap_C::btn_AcceptMission' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, btn_ClickAway) == 0x0002D8, "Member 'UW_WorldMap_C::btn_ClickAway' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, btn_Close) == 0x0002E0, "Member 'UW_WorldMap_C::btn_Close' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, CityInfo) == 0x0002E8, "Member 'UW_WorldMap_C::CityInfo' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, div_Formation_Bot) == 0x0002F0, "Member 'UW_WorldMap_C::div_Formation_Bot' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, div_Formation_Top) == 0x0002F8, "Member 'UW_WorldMap_C::div_Formation_Top' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, HB_Equipment) == 0x000300, "Member 'UW_WorldMap_C::HB_Equipment' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, img_SelectedMissionImg) == 0x000308, "Member 'UW_WorldMap_C::img_SelectedMissionImg' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, img_TooltipLevelPicture) == 0x000310, "Member 'UW_WorldMap_C::img_TooltipLevelPicture' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, img_WorldMap) == 0x000318, "Member 'UW_WorldMap_C::img_WorldMap' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Info) == 0x000320, "Member 'UW_WorldMap_C::Info' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, lbl_Formation) == 0x000328, "Member 'UW_WorldMap_C::lbl_Formation' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, LockBox) == 0x000330, "Member 'UW_WorldMap_C::LockBox' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, MapBlur) == 0x000338, "Member 'UW_WorldMap_C::MapBlur' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, MapBlurClickable) == 0x000340, "Member 'UW_WorldMap_C::MapBlurClickable' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, MapInteraction) == 0x000348, "Member 'UW_WorldMap_C::MapInteraction' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, MissionSelectBlank) == 0x000350, "Member 'UW_WorldMap_C::MissionSelectBlank' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, MissionTypeBox) == 0x000358, "Member 'UW_WorldMap_C::MissionTypeBox' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, ModdedMapList) == 0x000360, "Member 'UW_WorldMap_C::ModdedMapList' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_01b) == 0x000368, "Member 'UW_WorldMap_C::Pin_01b' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Agency) == 0x000370, "Member 'UW_WorldMap_C::Pin_Agency' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Agency2) == 0x000378, "Member 'UW_WorldMap_C::Pin_Agency2' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Beachfront) == 0x000380, "Member 'UW_WorldMap_C::Pin_Beachfront' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Campus) == 0x000388, "Member 'UW_WorldMap_C::Pin_Campus' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Club) == 0x000390, "Member 'UW_WorldMap_C::Pin_Club' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Coyote) == 0x000398, "Member 'UW_WorldMap_C::Pin_Coyote' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_DataCenter) == 0x0003A0, "Member 'UW_WorldMap_C::Pin_DataCenter' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Dealer) == 0x0003A8, "Member 'UW_WorldMap_C::Pin_Dealer' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_DoorZoo) == 0x0003B0, "Member 'UW_WorldMap_C::Pin_DoorZoo' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Farm) == 0x0003B8, "Member 'UW_WorldMap_C::Pin_Farm' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_FastFood) == 0x0003C0, "Member 'UW_WorldMap_C::Pin_FastFood' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Gas) == 0x0003C8, "Member 'UW_WorldMap_C::Pin_Gas' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_GoreDevTest) == 0x0003D0, "Member 'UW_WorldMap_C::Pin_GoreDevTest' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Hospital) == 0x0003D8, "Member 'UW_WorldMap_C::Pin_Hospital' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Importer) == 0x0003E0, "Member 'UW_WorldMap_C::Pin_Importer' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Meth) == 0x0003E8, "Member 'UW_WorldMap_C::Pin_Meth' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_MethApartments) == 0x0003F0, "Member 'UW_WorldMap_C::Pin_MethApartments' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Penthouse) == 0x0003F8, "Member 'UW_WorldMap_C::Pin_Penthouse' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_port) == 0x000400, "Member 'UW_WorldMap_C::Pin_port' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Ridgeline) == 0x000408, "Member 'UW_WorldMap_C::Pin_Ridgeline' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Sins) == 0x000410, "Member 'UW_WorldMap_C::Pin_Sins' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Streamer) == 0x000418, "Member 'UW_WorldMap_C::Pin_Streamer' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Training) == 0x000420, "Member 'UW_WorldMap_C::Pin_Training' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Pin_Valley) == 0x000428, "Member 'UW_WorldMap_C::Pin_Valley' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, PinPanel) == 0x000430, "Member 'UW_WorldMap_C::PinPanel' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, RanKRequired) == 0x000438, "Member 'UW_WorldMap_C::RanKRequired' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, RootCanvas) == 0x000440, "Member 'UW_WorldMap_C::RootCanvas' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, SelectedMissionPanel) == 0x000448, "Member 'UW_WorldMap_C::SelectedMissionPanel' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, SizeBox_3) == 0x000450, "Member 'UW_WorldMap_C::SizeBox_3' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, ToolTip) == 0x000458, "Member 'UW_WorldMap_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, txt_Formation) == 0x000460, "Member 'UW_WorldMap_C::txt_Formation' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, txt_Name_1) == 0x000468, "Member 'UW_WorldMap_C::txt_Name_1' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, txt_SelectedMissionDescription) == 0x000470, "Member 'UW_WorldMap_C::txt_SelectedMissionDescription' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, txt_SelectedMissionDesignation) == 0x000478, "Member 'UW_WorldMap_C::txt_SelectedMissionDesignation' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, txt_SelectedMissionName) == 0x000480, "Member 'UW_WorldMap_C::txt_SelectedMissionName' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, txt_SelectedMissionTimeOfDay) == 0x000488, "Member 'UW_WorldMap_C::txt_SelectedMissionTimeOfDay' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, VB_FloorButtons) == 0x000490, "Member 'UW_WorldMap_C::VB_FloorButtons' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, W_WorldMap_MissionSelect_ActiveShooter) == 0x000498, "Member 'UW_WorldMap_C::W_WorldMap_MissionSelect_ActiveShooter' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, W_WorldMap_MissionSelect_BarricadedSuspects) == 0x0004A0, "Member 'UW_WorldMap_C::W_WorldMap_MissionSelect_BarricadedSuspects' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, W_WorldMap_MissionSelect_BombThreat) == 0x0004A8, "Member 'UW_WorldMap_C::W_WorldMap_MissionSelect_BombThreat' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, W_WorldMap_MissionSelect_HostageRescue) == 0x0004B0, "Member 'UW_WorldMap_C::W_WorldMap_MissionSelect_HostageRescue' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, W_WorldMap_MissionSelect_RAID) == 0x0004B8, "Member 'UW_WorldMap_C::W_WorldMap_MissionSelect_RAID' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, PanMap) == 0x0004C0, "Member 'UW_WorldMap_C::PanMap' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, UpdateMapMaterial) == 0x0004D0, "Member 'UW_WorldMap_C::UpdateMapMaterial' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, NewEventDispatcher_0) == 0x0004E0, "Member 'UW_WorldMap_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, PlanningMapActor) == 0x0004F0, "Member 'UW_WorldMap_C::PlanningMapActor' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, Selected_Mission) == 0x0004F8, "Member 'UW_WorldMap_C::Selected_Mission' has a wrong offset!");
static_assert(offsetof(UW_WorldMap_C, SelectedMode) == 0x000500, "Member 'UW_WorldMap_C::SelectedMode' has a wrong offset!");

}

