﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Compass_Rotating

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Compass_Rotating.W_Compass_Rotating_C
// 0x0040 (0x0300 - 0x02C0)
class UW_Compass_Rotating_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CompassCircle;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_Circle;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_Dir;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              lbl_E;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              lbl_N;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              lbl_S;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              lbl_W;                                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_Compass_Rotating(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Compass_Rotating_C">();
	}
	static class UW_Compass_Rotating_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Compass_Rotating_C>();
	}
};
static_assert(alignof(UW_Compass_Rotating_C) == 0x000008, "Wrong alignment on UW_Compass_Rotating_C");
static_assert(sizeof(UW_Compass_Rotating_C) == 0x000300, "Wrong size on UW_Compass_Rotating_C");
static_assert(offsetof(UW_Compass_Rotating_C, UberGraphFrame) == 0x0002C0, "Member 'UW_Compass_Rotating_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Compass_Rotating_C, CompassCircle) == 0x0002C8, "Member 'UW_Compass_Rotating_C::CompassCircle' has a wrong offset!");
static_assert(offsetof(UW_Compass_Rotating_C, img_Circle) == 0x0002D0, "Member 'UW_Compass_Rotating_C::img_Circle' has a wrong offset!");
static_assert(offsetof(UW_Compass_Rotating_C, img_Dir) == 0x0002D8, "Member 'UW_Compass_Rotating_C::img_Dir' has a wrong offset!");
static_assert(offsetof(UW_Compass_Rotating_C, lbl_E) == 0x0002E0, "Member 'UW_Compass_Rotating_C::lbl_E' has a wrong offset!");
static_assert(offsetof(UW_Compass_Rotating_C, lbl_N) == 0x0002E8, "Member 'UW_Compass_Rotating_C::lbl_N' has a wrong offset!");
static_assert(offsetof(UW_Compass_Rotating_C, lbl_S) == 0x0002F0, "Member 'UW_Compass_Rotating_C::lbl_S' has a wrong offset!");
static_assert(offsetof(UW_Compass_Rotating_C, lbl_W) == 0x0002F8, "Member 'UW_Compass_Rotating_C::lbl_W' has a wrong offset!");

}

