﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Customization_Gamepad_GroupButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_CustomizationGroups_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C
// 0x0060 (0x1610 - 0x15B0)
class UW_Customization_Gamepad_GroupButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 EquippedGlow;                                      // 0x15B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_BottomLine;                                    // 0x15C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_SidebarFade;                                   // 0x15C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_SidebarSolid;                                  // 0x15D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_TopLine;                                       // 0x15D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_GamepadDeco;                                    // 0x15E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UW_Customization_Gamepad_GroupButton_C* Button)> OnSelected; // 0x15E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UW_Customization_Gamepad_GroupButton_C* Button)> OnDeselected; // 0x15F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bHovered;                                          // 0x1608(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPressed;                                          // 0x1609(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x160A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CustomizationGroups                         Group;                                             // 0x160B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void Deselect();
	void ExecuteUbergraph_W_Customization_Gamepad_GroupButton(int32 EntryPoint);
	struct FSlateColor GetColorByState();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Pressed(class UCommonButtonBase* Button);
	void Released(class UCommonButtonBase* Button);
	void Select();
	void UpdateHoverState(bool Hovered);
	void UpdatePressedState(bool Pressed);
	void UpdateSelectedState(bool bSelected_0);
	void UpdateVisualState(bool Hovered, bool Pressed, bool bSelected_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Customization_Gamepad_GroupButton_C">();
	}
	static class UW_Customization_Gamepad_GroupButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Customization_Gamepad_GroupButton_C>();
	}
};
static_assert(alignof(UW_Customization_Gamepad_GroupButton_C) == 0x000010, "Wrong alignment on UW_Customization_Gamepad_GroupButton_C");
static_assert(sizeof(UW_Customization_Gamepad_GroupButton_C) == 0x001610, "Wrong size on UW_Customization_Gamepad_GroupButton_C");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, UberGraphFrame) == 0x0015B0, "Member 'UW_Customization_Gamepad_GroupButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, EquippedGlow) == 0x0015B8, "Member 'UW_Customization_Gamepad_GroupButton_C::EquippedGlow' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, img_BottomLine) == 0x0015C0, "Member 'UW_Customization_Gamepad_GroupButton_C::img_BottomLine' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, img_SidebarFade) == 0x0015C8, "Member 'UW_Customization_Gamepad_GroupButton_C::img_SidebarFade' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, img_SidebarSolid) == 0x0015D0, "Member 'UW_Customization_Gamepad_GroupButton_C::img_SidebarSolid' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, img_TopLine) == 0x0015D8, "Member 'UW_Customization_Gamepad_GroupButton_C::img_TopLine' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, VB_GamepadDeco) == 0x0015E0, "Member 'UW_Customization_Gamepad_GroupButton_C::VB_GamepadDeco' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, OnSelected) == 0x0015E8, "Member 'UW_Customization_Gamepad_GroupButton_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, OnDeselected) == 0x0015F8, "Member 'UW_Customization_Gamepad_GroupButton_C::OnDeselected' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, bHovered) == 0x001608, "Member 'UW_Customization_Gamepad_GroupButton_C::bHovered' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, bPressed) == 0x001609, "Member 'UW_Customization_Gamepad_GroupButton_C::bPressed' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, bSelected) == 0x00160A, "Member 'UW_Customization_Gamepad_GroupButton_C::bSelected' has a wrong offset!");
static_assert(offsetof(UW_Customization_Gamepad_GroupButton_C, Group) == 0x00160B, "Member 'UW_Customization_Gamepad_GroupButton_C::Group' has a wrong offset!");

}

