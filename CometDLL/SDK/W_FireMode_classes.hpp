﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FireMode

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_FireMode.W_FireMode_C
// 0x0120 (0x03E0 - 0x02C0)
class UW_FireMode_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 FireMode_Icon_Image;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_Firemode;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_2D8[0x8];                                      // 0x02D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Icon;                                              // 0x02E0(0x00D0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                           SelectedColor;                                     // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   FireModeText;                                      // 0x03C0(0x0018)(Edit, BlueprintVisible)

public:
	void Deselect();
	void ExecuteUbergraph_W_FireMode(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Select();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_FireMode_C">();
	}
	static class UW_FireMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_FireMode_C>();
	}
};
static_assert(alignof(UW_FireMode_C) == 0x000010, "Wrong alignment on UW_FireMode_C");
static_assert(sizeof(UW_FireMode_C) == 0x0003E0, "Wrong size on UW_FireMode_C");
static_assert(offsetof(UW_FireMode_C, UberGraphFrame) == 0x0002C0, "Member 'UW_FireMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_FireMode_C, FireMode_Icon_Image) == 0x0002C8, "Member 'UW_FireMode_C::FireMode_Icon_Image' has a wrong offset!");
static_assert(offsetof(UW_FireMode_C, txt_Firemode) == 0x0002D0, "Member 'UW_FireMode_C::txt_Firemode' has a wrong offset!");
static_assert(offsetof(UW_FireMode_C, Icon) == 0x0002E0, "Member 'UW_FireMode_C::Icon' has a wrong offset!");
static_assert(offsetof(UW_FireMode_C, SelectedColor) == 0x0003B0, "Member 'UW_FireMode_C::SelectedColor' has a wrong offset!");
static_assert(offsetof(UW_FireMode_C, FireModeText) == 0x0003C0, "Member 'UW_FireMode_C::FireModeText' has a wrong offset!");

}

