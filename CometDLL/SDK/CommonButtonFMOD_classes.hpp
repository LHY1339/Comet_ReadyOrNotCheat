﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonButtonFMOD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonButtonFMOD.CommonButtonFMOD_C
// 0x0040 (0x1600 - 0x15C0)
class UCommonButtonFMOD_C final : public UCommonButtonFMOD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CommonButton;                                      // 0x15C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x15D0(0x0018)(Edit, BlueprintVisible)
	int32                                         CharacterLimit;                                    // 0x15E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15EC[0x4];                                     // 0x15EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TruncatedCharacters;                               // 0x15F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_CommonButtonFMOD(int32 EntryPoint);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonButtonFMOD_C">();
	}
	static class UCommonButtonFMOD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButtonFMOD_C>();
	}
};
static_assert(alignof(UCommonButtonFMOD_C) == 0x000010, "Wrong alignment on UCommonButtonFMOD_C");
static_assert(sizeof(UCommonButtonFMOD_C) == 0x001600, "Wrong size on UCommonButtonFMOD_C");
static_assert(offsetof(UCommonButtonFMOD_C, UberGraphFrame) == 0x0015C0, "Member 'UCommonButtonFMOD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonButtonFMOD_C, CommonButton) == 0x0015C8, "Member 'UCommonButtonFMOD_C::CommonButton' has a wrong offset!");
static_assert(offsetof(UCommonButtonFMOD_C, InText) == 0x0015D0, "Member 'UCommonButtonFMOD_C::InText' has a wrong offset!");
static_assert(offsetof(UCommonButtonFMOD_C, CharacterLimit) == 0x0015E8, "Member 'UCommonButtonFMOD_C::CharacterLimit' has a wrong offset!");
static_assert(offsetof(UCommonButtonFMOD_C, TruncatedCharacters) == 0x0015F0, "Member 'UCommonButtonFMOD_C::TruncatedCharacters' has a wrong offset!");

}

