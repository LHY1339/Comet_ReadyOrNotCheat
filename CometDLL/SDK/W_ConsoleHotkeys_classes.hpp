﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_ConsoleHotkeys

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_ConsoleHotkeys.W_ConsoleHotkeys_C
// 0x00D0 (0x1AD0 - 0x1A00)
class UW_ConsoleHotkeys_C final : public UConsoleHotkeys
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1A00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       anim_Dpad_Right;                                   // 0x1A08(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       anim_Dpad_Left;                                    // 0x1A10(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       anim_Dpad_Down;                                    // 0x1A18(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       anim_Dpad_Up;                                      // 0x1A20(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 PS_Down_Icon;                                      // 0x1A28(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS_Dpad_Down_Icon;                                 // 0x1A30(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS_Dpad_Left_Icon;                                 // 0x1A38(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS_Dpad_Outline_Icon;                              // 0x1A40(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS_Dpad_Right_Icon;                                // 0x1A48(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS_Dpad_Up_Icon;                                   // 0x1A50(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS_Left_Icon;                                      // 0x1A58(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS_Outline_Icon;                                   // 0x1A60(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS_Right_Icon;                                     // 0x1A68(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PS_Up_Icon;                                        // 0x1A70(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XBox_Down_Icon;                                    // 0x1A78(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XBox_Dpad_Down_Icon;                               // 0x1A80(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XBox_Dpad_Left_Icon;                               // 0x1A88(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XBox_Dpad_Outline_Icon;                            // 0x1A90(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XBox_Dpad_Right_Icon;                              // 0x1A98(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XBox_Dpad_Up_Icon;                                 // 0x1AA0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Xbox_Left_Icon;                                    // 0x1AA8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XBox_Outline_Icon;                                 // 0x1AB0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XBox_Right_Icon;                                   // 0x1AB8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 XBox_Up_Icon;                                      // 0x1AC0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BoolToVisibility(bool Visible, ESlateVisibility* Visibility_0);
	void Construct();
	void DPadDownPressed(bool Pressed);
	void DPadLeftPressed(bool Pressed);
	void DpadPressedChange(bool Visible, class UImage* DpadImage);
	void DPadRightPressed(bool Pressed);
	void DPadUpPressed(bool Pressed);
	void ExecuteUbergraph_W_ConsoleHotkeys(int32 EntryPoint);
	void SetIconActive(class UImage* Icon, bool Active);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_ConsoleHotkeys_C">();
	}
	static class UW_ConsoleHotkeys_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_ConsoleHotkeys_C>();
	}
};
static_assert(alignof(UW_ConsoleHotkeys_C) == 0x000010, "Wrong alignment on UW_ConsoleHotkeys_C");
static_assert(sizeof(UW_ConsoleHotkeys_C) == 0x001AD0, "Wrong size on UW_ConsoleHotkeys_C");
static_assert(offsetof(UW_ConsoleHotkeys_C, UberGraphFrame) == 0x001A00, "Member 'UW_ConsoleHotkeys_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, anim_Dpad_Right) == 0x001A08, "Member 'UW_ConsoleHotkeys_C::anim_Dpad_Right' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, anim_Dpad_Left) == 0x001A10, "Member 'UW_ConsoleHotkeys_C::anim_Dpad_Left' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, anim_Dpad_Down) == 0x001A18, "Member 'UW_ConsoleHotkeys_C::anim_Dpad_Down' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, anim_Dpad_Up) == 0x001A20, "Member 'UW_ConsoleHotkeys_C::anim_Dpad_Up' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Down_Icon) == 0x001A28, "Member 'UW_ConsoleHotkeys_C::PS_Down_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Dpad_Down_Icon) == 0x001A30, "Member 'UW_ConsoleHotkeys_C::PS_Dpad_Down_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Dpad_Left_Icon) == 0x001A38, "Member 'UW_ConsoleHotkeys_C::PS_Dpad_Left_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Dpad_Outline_Icon) == 0x001A40, "Member 'UW_ConsoleHotkeys_C::PS_Dpad_Outline_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Dpad_Right_Icon) == 0x001A48, "Member 'UW_ConsoleHotkeys_C::PS_Dpad_Right_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Dpad_Up_Icon) == 0x001A50, "Member 'UW_ConsoleHotkeys_C::PS_Dpad_Up_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Left_Icon) == 0x001A58, "Member 'UW_ConsoleHotkeys_C::PS_Left_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Outline_Icon) == 0x001A60, "Member 'UW_ConsoleHotkeys_C::PS_Outline_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Right_Icon) == 0x001A68, "Member 'UW_ConsoleHotkeys_C::PS_Right_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, PS_Up_Icon) == 0x001A70, "Member 'UW_ConsoleHotkeys_C::PS_Up_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, XBox_Down_Icon) == 0x001A78, "Member 'UW_ConsoleHotkeys_C::XBox_Down_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, XBox_Dpad_Down_Icon) == 0x001A80, "Member 'UW_ConsoleHotkeys_C::XBox_Dpad_Down_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, XBox_Dpad_Left_Icon) == 0x001A88, "Member 'UW_ConsoleHotkeys_C::XBox_Dpad_Left_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, XBox_Dpad_Outline_Icon) == 0x001A90, "Member 'UW_ConsoleHotkeys_C::XBox_Dpad_Outline_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, XBox_Dpad_Right_Icon) == 0x001A98, "Member 'UW_ConsoleHotkeys_C::XBox_Dpad_Right_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, XBox_Dpad_Up_Icon) == 0x001AA0, "Member 'UW_ConsoleHotkeys_C::XBox_Dpad_Up_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, Xbox_Left_Icon) == 0x001AA8, "Member 'UW_ConsoleHotkeys_C::Xbox_Left_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, XBox_Outline_Icon) == 0x001AB0, "Member 'UW_ConsoleHotkeys_C::XBox_Outline_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, XBox_Right_Icon) == 0x001AB8, "Member 'UW_ConsoleHotkeys_C::XBox_Right_Icon' has a wrong offset!");
static_assert(offsetof(UW_ConsoleHotkeys_C, XBox_Up_Icon) == 0x001AC0, "Member 'UW_ConsoleHotkeys_C::XBox_Up_Icon' has a wrong offset!");

}

