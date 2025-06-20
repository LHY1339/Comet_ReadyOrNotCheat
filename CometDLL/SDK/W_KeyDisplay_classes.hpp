﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_KeyDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "ReadyOrNot_structs.hpp"
#include "InputRemapping_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_KeyDisplay.W_KeyDisplay_C
// 0x0088 (0x0348 - 0x02C0)
class UW_KeyDisplay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             keyDisplayName;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KeyName;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInputEntry                            InputEntry;                                        // 0x02D8(0x0070)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void Construct();
	void CustomEvent_0();
	void ExecuteUbergraph_W_KeyDisplay(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Reconstruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_KeyDisplay_C">();
	}
	static class UW_KeyDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_KeyDisplay_C>();
	}
};
static_assert(alignof(UW_KeyDisplay_C) == 0x000008, "Wrong alignment on UW_KeyDisplay_C");
static_assert(sizeof(UW_KeyDisplay_C) == 0x000348, "Wrong size on UW_KeyDisplay_C");
static_assert(offsetof(UW_KeyDisplay_C, UberGraphFrame) == 0x0002C0, "Member 'UW_KeyDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_KeyDisplay_C, keyDisplayName) == 0x0002C8, "Member 'UW_KeyDisplay_C::keyDisplayName' has a wrong offset!");
static_assert(offsetof(UW_KeyDisplay_C, KeyName) == 0x0002D0, "Member 'UW_KeyDisplay_C::KeyName' has a wrong offset!");
static_assert(offsetof(UW_KeyDisplay_C, InputEntry) == 0x0002D8, "Member 'UW_KeyDisplay_C::InputEntry' has a wrong offset!");

}

