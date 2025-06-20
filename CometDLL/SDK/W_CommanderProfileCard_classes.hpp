﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_CommanderProfileCard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_CommanderProfileCard.W_CommanderProfileCard_C
// 0x0130 (0x16E0 - 0x15B0)
class UW_CommanderProfileCard_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       animPanZoom;                                       // 0x15B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       animHoverNewGame;                                  // 0x15C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       animHover;                                         // 0x15C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CardBackground;                                    // 0x15D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                DeleteSaveButton;                                  // 0x15D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ExistingGame;                                      // 0x15E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ExistingProfileInfo;                               // 0x15E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_76;                                          // 0x15F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_Progress;                                      // 0x15F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            IronmanButton;                                     // 0x1600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           IronmanModeSlot;                                   // 0x1608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              lbl_ironManMode;                                   // 0x1610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              lbl_ModTag;                                        // 0x1618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              lbl_Playtime;                                      // 0x1620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ModTag;                                            // 0x1628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NewGame;                                           // 0x1630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ProfileWidgetSwitcher;                             // 0x1638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_Background;                            // 0x1640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Background;                               // 0x1648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SlotNameText;                                      // 0x1650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_Date;                                          // 0x1658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_Level;                                         // 0x1660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_Playtime;                                      // 0x1668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_ProgressPercent;                               // 0x1670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommanderProfile*                      Profile;                                           // 0x1678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynMatBackground;                                  // 0x1680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynMatProgress;                                    // 0x1688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotIndex;                                         // 0x1690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          TestExistingGame;                                  // 0x1694(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hovered;                                           // 0x1695(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Saturating;                                        // 0x1696(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Desaturating;                                      // 0x1697(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SaturationSpeed;                                   // 0x1698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UW_CommanderProfileCard_C* TriggeringProfileCard, bool Hovered)> OnHoverStateChange; // 0x16A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        MaxSaturation;                                     // 0x16B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinSaturation;                                     // 0x16B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ValidProfile;                                      // 0x16C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C1[0x7];                                     // 0x16C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class UW_CommanderProfileCard_C* TriggeringProfileCard)> OnDeleteSaveClicked; // 0x16C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          TutorialMode;                                      // 0x16D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__W_CommanderProfileCard_Example_DeleteSaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_CommanderProfileCard_W_Button_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Cancel(class UStandardModal* CallingModal);
	void Construct();
	void DeleteSave();
	void ExecuteUbergraph_W_CommanderProfileCard(int32 EntryPoint);
	void FormatDate(const struct FDateTime& DateTime, class FText* OutText);
	void Initialize_Tutorial_Modal(class UW_StandardModal_C** OutPopup);
	void No(class UW_StandardModal_C* CallingModal, const class FText& TextEntry);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ToggleIronman();
	void UpdateFromProfile();
	void Yes(class UW_StandardModal_C* CallingModal, const class FText& TextEntry);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_CommanderProfileCard_C">();
	}
	static class UW_CommanderProfileCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_CommanderProfileCard_C>();
	}
};
static_assert(alignof(UW_CommanderProfileCard_C) == 0x000010, "Wrong alignment on UW_CommanderProfileCard_C");
static_assert(sizeof(UW_CommanderProfileCard_C) == 0x0016E0, "Wrong size on UW_CommanderProfileCard_C");
static_assert(offsetof(UW_CommanderProfileCard_C, UberGraphFrame) == 0x0015B0, "Member 'UW_CommanderProfileCard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, animPanZoom) == 0x0015B8, "Member 'UW_CommanderProfileCard_C::animPanZoom' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, animHoverNewGame) == 0x0015C0, "Member 'UW_CommanderProfileCard_C::animHoverNewGame' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, animHover) == 0x0015C8, "Member 'UW_CommanderProfileCard_C::animHover' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, CardBackground) == 0x0015D0, "Member 'UW_CommanderProfileCard_C::CardBackground' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, DeleteSaveButton) == 0x0015D8, "Member 'UW_CommanderProfileCard_C::DeleteSaveButton' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, ExistingGame) == 0x0015E0, "Member 'UW_CommanderProfileCard_C::ExistingGame' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, ExistingProfileInfo) == 0x0015E8, "Member 'UW_CommanderProfileCard_C::ExistingProfileInfo' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, Image_76) == 0x0015F0, "Member 'UW_CommanderProfileCard_C::Image_76' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, img_Progress) == 0x0015F8, "Member 'UW_CommanderProfileCard_C::img_Progress' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, IronmanButton) == 0x001600, "Member 'UW_CommanderProfileCard_C::IronmanButton' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, IronmanModeSlot) == 0x001608, "Member 'UW_CommanderProfileCard_C::IronmanModeSlot' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, lbl_ironManMode) == 0x001610, "Member 'UW_CommanderProfileCard_C::lbl_ironManMode' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, lbl_ModTag) == 0x001618, "Member 'UW_CommanderProfileCard_C::lbl_ModTag' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, lbl_Playtime) == 0x001620, "Member 'UW_CommanderProfileCard_C::lbl_Playtime' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, ModTag) == 0x001628, "Member 'UW_CommanderProfileCard_C::ModTag' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, NewGame) == 0x001630, "Member 'UW_CommanderProfileCard_C::NewGame' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, ProfileWidgetSwitcher) == 0x001638, "Member 'UW_CommanderProfileCard_C::ProfileWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, RetainerBox_Background) == 0x001640, "Member 'UW_CommanderProfileCard_C::RetainerBox_Background' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, ScaleBox_Background) == 0x001648, "Member 'UW_CommanderProfileCard_C::ScaleBox_Background' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, SlotNameText) == 0x001650, "Member 'UW_CommanderProfileCard_C::SlotNameText' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, txt_Date) == 0x001658, "Member 'UW_CommanderProfileCard_C::txt_Date' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, txt_Level) == 0x001660, "Member 'UW_CommanderProfileCard_C::txt_Level' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, txt_Playtime) == 0x001668, "Member 'UW_CommanderProfileCard_C::txt_Playtime' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, txt_ProgressPercent) == 0x001670, "Member 'UW_CommanderProfileCard_C::txt_ProgressPercent' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, Profile) == 0x001678, "Member 'UW_CommanderProfileCard_C::Profile' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, DynMatBackground) == 0x001680, "Member 'UW_CommanderProfileCard_C::DynMatBackground' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, DynMatProgress) == 0x001688, "Member 'UW_CommanderProfileCard_C::DynMatProgress' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, SlotIndex) == 0x001690, "Member 'UW_CommanderProfileCard_C::SlotIndex' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, TestExistingGame) == 0x001694, "Member 'UW_CommanderProfileCard_C::TestExistingGame' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, Hovered) == 0x001695, "Member 'UW_CommanderProfileCard_C::Hovered' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, Saturating) == 0x001696, "Member 'UW_CommanderProfileCard_C::Saturating' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, Desaturating) == 0x001697, "Member 'UW_CommanderProfileCard_C::Desaturating' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, SaturationSpeed) == 0x001698, "Member 'UW_CommanderProfileCard_C::SaturationSpeed' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, OnHoverStateChange) == 0x0016A0, "Member 'UW_CommanderProfileCard_C::OnHoverStateChange' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, MaxSaturation) == 0x0016B0, "Member 'UW_CommanderProfileCard_C::MaxSaturation' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, MinSaturation) == 0x0016B8, "Member 'UW_CommanderProfileCard_C::MinSaturation' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, ValidProfile) == 0x0016C0, "Member 'UW_CommanderProfileCard_C::ValidProfile' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, OnDeleteSaveClicked) == 0x0016C8, "Member 'UW_CommanderProfileCard_C::OnDeleteSaveClicked' has a wrong offset!");
static_assert(offsetof(UW_CommanderProfileCard_C, TutorialMode) == 0x0016D8, "Member 'UW_CommanderProfileCard_C::TutorialMode' has a wrong offset!");

}

