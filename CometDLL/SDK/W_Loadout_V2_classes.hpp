﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Loadout_V2

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Loadout_V2.W_Loadout_V2_C
// 0x0358 (0x0BF0 - 0x0898)
class UW_Loadout_V2_C final : public ULoadout_V2
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0898(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundGradient;                                // 0x08A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Customization_C*                     CustomizationWidget;                               // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_ClickToRotate;                                 // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_ClickToRotate_DragArea;                        // 0x08B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LoadoutCanvas;                                     // 0x08C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       LoadoutCustomizationSwitcher;                      // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*       LoadoutInfoSwitcher;                               // 0x08D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MainCanvas;                                        // 0x08D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                       PageHeader;                                        // 0x08E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*          PresetPreviewStack;                                // 0x08E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutInformationBox_C*             W_LoadoutInformationBox;                           // 0x08F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PresetPreview_Gamepad_C*             W_PresetPreview_Gamepad;                           // 0x08F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 ItemData;                                          // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	EItemType                                     EquippingItemType;                                 // 0x0908(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_909[0x7];                                      // 0x0909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnPrimaryWeaponEquipped;                           // 0x0910(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnSidearmWeaponEquipped;                           // 0x0920(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnArmorMaterialEquipped;                           // 0x0930(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   HoveredPreset;                                     // 0x0940(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACameraActor*                           WorkbenchCamera;                                   // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               DefaultWorkbenchCameraRotation;                    // 0x0960(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FRotator                               CurrentWorkbenchCameraRotation;                    // 0x0978(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FRotator                               TargetWorkbenchCameraRotation;                     // 0x0990(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FRotator                               WorkbenchCameraRotation;                           // 0x09A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                          bWorkbenchCameraRotating;                          // 0x09C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          bUseGamepad;                                       // 0x09C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_9C2[0x6];                                      // 0x09C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool UsingGamepad)> OnChangedInput;                                // 0x09C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FName, class UClass*>              PageMap;                                           // 0x09D8(0x0050)(Edit, BlueprintVisible)
	TMap<class FName, class UClass*>              PageMap_Gamepad;                                   // 0x0A28(0x0050)(Edit, BlueprintVisible)
	class UCommonActivatableWidget*               CurrentPage;                                       // 0x0A78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                   CurrentPageID;                                     // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TMap<class FName, class FName>                Page_to_Camera_Tag_Map;                            // 0x0A88(0x0050)(Edit, BlueprintVisible)
	TMap<class FName, class FString>              Page_to_Pose_Tag_Map;                              // 0x0AD8(0x0050)(Edit, BlueprintVisible)
	bool                                          bCustomization;                                    // 0x0B28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOpenedInCustomization;                            // 0x0B29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2A[0x6];                                      // 0x0B2A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FText>                MainNavigationOptions;                             // 0x0B30(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   MainNavSelection;                                  // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                     PresetModal;                                       // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         PresetCharacterLimit;                              // 0x0B90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B94[0x4];                                      // 0x0B94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool PresetDirty)> OnPresetModified;                               // 0x0B98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsRotating;                                       // 0x0BA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA9[0x7];                                      // 0x0BA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MouseDragRotateSpeed;                              // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const class FString& Preset)> OnSaveModifiedPresetClicked;         // 0x0BB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnPresetSelected;                                  // 0x0BC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Editing_Preset_Name;                               // 0x0BD8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponAttachmentType                         HoveredAttachmentType;                             // 0x0BD9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BDA[0x6];                                      // 0x0BDA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_LoadoutSlot_v2_C*                    HoveredAttachmentSlot;                             // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowingWeaponClassNav;                            // 0x0BE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Activate_Preview_Preset_Gamepad();
	void AmmoHovered(class FName AmmoName, const class FText& CategoryText);
	void ArmorMaterialHovered(class UArmourMaterial* ArmorMaterial);
	void AttachmentHovered(class UWeaponAttachment* Attachment, EWeaponAttachmentType AttachmentType);
	void BackPage(bool* Handled);
	void Bind_Customization_Events(class UW_StandardModal_C* Preset_Modal);
	void Bind_Loadout_Events(class UW_StandardModal_C* Preset_Modal);
	void BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature(class FName CameraTag, const class FString& CharacterPose);
	void BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature(class FName OptionNameID);
	void BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	bool BP_OnHandleBackAction();
	double Calculate_Gamepad_Rotation_Speed(double X);
	void CancelSavePreset(class UStandardModal* CallingModal);
	void ChangePage(class FName PageName);
	void Check_Default_Preset(const class FString& Preset_Name, bool* Valid);
	void CheckOverviewIsActive(bool* TRUE_0);
	void Clear_All_Attachments_Clicked();
	void Clear_Attachment_Clicked();
	void Clear_Attachment_For_Category(EWeaponAttachmentType Attachment_Type, bool Primary);
	void Close_Preview_Preset_Gamepad();
	void ClosePresetPreview();
	void Construct();
	void Delete_Preset_Clicked();
	void Delete_Preset_Modal_Closed(class UStandardModal* CallingModal);
	void DeleteCustomizationPreset(class UW_StandardModal_C* TriggeringModal, const class FText& TextEntry);
	void DeleteLoadoutPreset(class UW_StandardModal_C* TriggeringModal, const class FText& TextEntry);
	void Edit_Preset_Name_Clicked();
	void EditCustomizationPresetName(class UW_StandardModal_C* Preset_Customization_Modal, const class FText& TextEntry);
	void EditLoadoutPresetName(class UW_StandardModal_C* TriggeringModal, const class FText& TextEntry);
	void EquipArmourMaterial(class UArmourMaterial* ArmourMaterial);
	void EquipItem(class UClass* ItemData_0);
	void ExecuteUbergraph_W_Loadout_V2(int32 EntryPoint);
	TArray<class FString> Get_All_Preset_Names(bool Customization);
	class FText Get_Default_New_Preset_Name(bool Customization);
	class FText Get_Entry_Initial_Text_Value(const class FString& Current_Preset, bool Customization, bool New_Preset);
	class FText Get_Entry_Text_For_Current_Preset(const class FString& Current_Preset, bool Customization, bool New_Preset);
	void Get_Null_Attachment_By_Type(EWeaponAttachmentType Selection, class UClass** NullAttachment);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Hide(double Delay, bool Collapse);
	void Hide_Clear_All_Attachments_Footer_Option();
	void Hide_Clear_Attachment_Footer_Option();
	void Hide_Loadout_Preset_Footer_Options();
	void Hide_Preset_Page_Footer_Options();
	void HolsterPreviewCharacterWeapon(bool* IsHolstering);
	void InputMethodChanged(ECommonInputType bNewInputType);
	void Is_Default_Preset(const class FText& Name_0, bool* Default);
	void ItemHovered(class ABaseItem* BaseItem, const class FText& CategoryText);
	struct FEventReply Mouse_StartRotation(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void NVG_StyleHovered(ENVGStyle ArmorMaterial);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnAttachmentSlotClicked(class UClass* Attaching_Weapon, class UClass* Attachment_Data);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OpenCustomization();
	void OpenCustomizationPresetSaveModal(const class FString& CurrentPreset, bool bDelete, bool New);
	void OpenItemList(bool VerticalList, const EItemCategory LoadoutSlot, const TArray<struct LoadoutCategory::FLoadoutCategory>& GearCategoryClasses, class UW_Loadout_ItemList_Vertical_C* Itemlist);
	void OpenPresetSaveModal(const class FString& CurrentPreset, bool bDelete, bool New, class UW_StandardModal_C** Preset_Modal);
	void PreConstruct(bool IsDesignTime);
	void PresetModified(bool PresetDirty_0);
	void PresetOptionHovered(const class FText& PresetName, bool NewPresetButton);
	void PreviewPreset(const struct FSavedLoadout& PreviewLoadout);
	void Refresh_Attachments(bool Primary, EWeaponAttachmentType Attachment_Type, class UW_LoadoutSlot_v2_C* Attachment_Slot);
	void Refresh_Customization_Preset_Page(const class FString& Preset_Name);
	void Refresh_Preset_Page(class UW_StandardModal_C* Triggering_Modal, const class FString& Preset_Name);
	void Refresh_Preset_Preview();
	void Reveal(double Delay);
	void Revert_Customization_Preset();
	void Revert_Loadout_Preset();
	void Revert_Preset_Clicked();
	struct FEventReply Rotate_Character(double X, double Rotate_speed);
	void Save_Preset_Clicked();
	void SaveCustomizationPreset(class UW_StandardModal_C* Preset_Customization_Modal, const class FText& TextEntry);
	void SaveLoadoutPreset(class UW_StandardModal_C* Preset_Loadout_Modal, const class FText& TextEntry);
	void SetCameraAndPose(class FName CameraTag, const class FString& PoseTag, double BlendTime);
	void SetCameraAndPoseByPageID(class FName PageNameID, double BlendTime);
	void SetCategoryCameraTags();
	void SetCategoryPoses();
	void SetCurrentPageID(class FName CurrentPageID_0);
	void SetInputMode(bool IsGamepad);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void SetPreMissionCamera(class FName Tag, const class FString& Animation, double BlendTime);
	void SetPreMissionCameraBySlot(EItemCategory LoadoutSlot, double BlendTime);
	void SetPresetModified(bool PresetDirty_0);
	void ShowMainNav();
	void ShowWeaponClassNav(EItemClass SelectedClass, bool bIsSecondary);
	void SlotUnhovered();
	void SwitchToCustomization();
	void SwitchToLoadout();
	void Unhide_Clear_All_Attachments_Footer_Option();
	void Unhide_Clear_Attachment_Footer_Option();
	void Unhide_Loadout_Preset_Footer_Options();
	void Unhide_Preset_Page_Footer_Options();
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateAllPreviewWeaponAttachments(bool IsWorkbench, const TSubclassOf<class ABaseItem>& Weapon, bool IsSidearm, const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentItemMap(const TMap<EItemCategory, class UClass*>& ItemCategory);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void Validate_Max_Character_Preset(const class FString& Preset_Name, class UW_StandardModal_C* Triggering_Modal);
	void Validate_Min_Character_Preset(class UW_StandardModal_C* Triggering_Modal, const class FString& Preset_Name);
	void WeaponHovered(class ABaseWeapon* BaseWeaponItem, bool Secondary);

	class UWidget* BP_GetDesiredFocusTarget() const;
	struct FUIInputConfig BP_GetDesiredInputConfig() const;
	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Loadout_V2_C">();
	}
	static class UW_Loadout_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Loadout_V2_C>();
	}
};
static_assert(alignof(UW_Loadout_V2_C) == 0x000008, "Wrong alignment on UW_Loadout_V2_C");
static_assert(sizeof(UW_Loadout_V2_C) == 0x000BF0, "Wrong size on UW_Loadout_V2_C");
static_assert(offsetof(UW_Loadout_V2_C, UberGraphFrame) == 0x000898, "Member 'UW_Loadout_V2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, BackgroundGradient) == 0x0008A0, "Member 'UW_Loadout_V2_C::BackgroundGradient' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, CustomizationWidget) == 0x0008A8, "Member 'UW_Loadout_V2_C::CustomizationWidget' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, img_ClickToRotate) == 0x0008B0, "Member 'UW_Loadout_V2_C::img_ClickToRotate' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, img_ClickToRotate_DragArea) == 0x0008B8, "Member 'UW_Loadout_V2_C::img_ClickToRotate_DragArea' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, LoadoutCanvas) == 0x0008C0, "Member 'UW_Loadout_V2_C::LoadoutCanvas' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, LoadoutCustomizationSwitcher) == 0x0008C8, "Member 'UW_Loadout_V2_C::LoadoutCustomizationSwitcher' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, LoadoutInfoSwitcher) == 0x0008D0, "Member 'UW_Loadout_V2_C::LoadoutInfoSwitcher' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, MainCanvas) == 0x0008D8, "Member 'UW_Loadout_V2_C::MainCanvas' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, PageHeader) == 0x0008E0, "Member 'UW_Loadout_V2_C::PageHeader' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, PresetPreviewStack) == 0x0008E8, "Member 'UW_Loadout_V2_C::PresetPreviewStack' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, W_LoadoutInformationBox) == 0x0008F0, "Member 'UW_Loadout_V2_C::W_LoadoutInformationBox' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, W_PresetPreview_Gamepad) == 0x0008F8, "Member 'UW_Loadout_V2_C::W_PresetPreview_Gamepad' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, ItemData) == 0x000900, "Member 'UW_Loadout_V2_C::ItemData' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, EquippingItemType) == 0x000908, "Member 'UW_Loadout_V2_C::EquippingItemType' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, OnPrimaryWeaponEquipped) == 0x000910, "Member 'UW_Loadout_V2_C::OnPrimaryWeaponEquipped' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, OnSidearmWeaponEquipped) == 0x000920, "Member 'UW_Loadout_V2_C::OnSidearmWeaponEquipped' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, OnArmorMaterialEquipped) == 0x000930, "Member 'UW_Loadout_V2_C::OnArmorMaterialEquipped' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, HoveredPreset) == 0x000940, "Member 'UW_Loadout_V2_C::HoveredPreset' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, WorkbenchCamera) == 0x000958, "Member 'UW_Loadout_V2_C::WorkbenchCamera' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, DefaultWorkbenchCameraRotation) == 0x000960, "Member 'UW_Loadout_V2_C::DefaultWorkbenchCameraRotation' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, CurrentWorkbenchCameraRotation) == 0x000978, "Member 'UW_Loadout_V2_C::CurrentWorkbenchCameraRotation' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, TargetWorkbenchCameraRotation) == 0x000990, "Member 'UW_Loadout_V2_C::TargetWorkbenchCameraRotation' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, WorkbenchCameraRotation) == 0x0009A8, "Member 'UW_Loadout_V2_C::WorkbenchCameraRotation' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, bWorkbenchCameraRotating) == 0x0009C0, "Member 'UW_Loadout_V2_C::bWorkbenchCameraRotating' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, bUseGamepad) == 0x0009C1, "Member 'UW_Loadout_V2_C::bUseGamepad' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, OnChangedInput) == 0x0009C8, "Member 'UW_Loadout_V2_C::OnChangedInput' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, PageMap) == 0x0009D8, "Member 'UW_Loadout_V2_C::PageMap' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, PageMap_Gamepad) == 0x000A28, "Member 'UW_Loadout_V2_C::PageMap_Gamepad' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, CurrentPage) == 0x000A78, "Member 'UW_Loadout_V2_C::CurrentPage' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, CurrentPageID) == 0x000A80, "Member 'UW_Loadout_V2_C::CurrentPageID' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, Page_to_Camera_Tag_Map) == 0x000A88, "Member 'UW_Loadout_V2_C::Page_to_Camera_Tag_Map' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, Page_to_Pose_Tag_Map) == 0x000AD8, "Member 'UW_Loadout_V2_C::Page_to_Pose_Tag_Map' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, bCustomization) == 0x000B28, "Member 'UW_Loadout_V2_C::bCustomization' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, bOpenedInCustomization) == 0x000B29, "Member 'UW_Loadout_V2_C::bOpenedInCustomization' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, MainNavigationOptions) == 0x000B30, "Member 'UW_Loadout_V2_C::MainNavigationOptions' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, MainNavSelection) == 0x000B80, "Member 'UW_Loadout_V2_C::MainNavSelection' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, PresetModal) == 0x000B88, "Member 'UW_Loadout_V2_C::PresetModal' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, PresetCharacterLimit) == 0x000B90, "Member 'UW_Loadout_V2_C::PresetCharacterLimit' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, OnPresetModified) == 0x000B98, "Member 'UW_Loadout_V2_C::OnPresetModified' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, bIsRotating) == 0x000BA8, "Member 'UW_Loadout_V2_C::bIsRotating' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, MouseDragRotateSpeed) == 0x000BB0, "Member 'UW_Loadout_V2_C::MouseDragRotateSpeed' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, OnSaveModifiedPresetClicked) == 0x000BB8, "Member 'UW_Loadout_V2_C::OnSaveModifiedPresetClicked' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, OnPresetSelected) == 0x000BC8, "Member 'UW_Loadout_V2_C::OnPresetSelected' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, Editing_Preset_Name) == 0x000BD8, "Member 'UW_Loadout_V2_C::Editing_Preset_Name' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, HoveredAttachmentType) == 0x000BD9, "Member 'UW_Loadout_V2_C::HoveredAttachmentType' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, HoveredAttachmentSlot) == 0x000BE0, "Member 'UW_Loadout_V2_C::HoveredAttachmentSlot' has a wrong offset!");
static_assert(offsetof(UW_Loadout_V2_C, bShowingWeaponClassNav) == 0x000BE8, "Member 'UW_Loadout_V2_C::bShowingWeaponClassNav' has a wrong offset!");

}

