﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeybindSaveGame

#include "Basic.hpp"

#include "AxisMapArrayStruct_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ActionMapArrayStruct_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass KeybindSaveGame.KeybindSaveGame_C
// 0x0028 (0x0050 - 0x0028)
class UKeybindSaveGame_C final : public USaveGame
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FActionMapArrayStruct>          ActionKeybinds;                                    // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FAxisMapArrayStruct>            AxisKeybinds;                                      // 0x0040(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_KeybindSaveGame(int32 EntryPoint);
	void Get(class UW_Main_C* W_Main);
	void Set(class UW_Main_C* W_Main);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeybindSaveGame_C">();
	}
	static class UKeybindSaveGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeybindSaveGame_C>();
	}
};
static_assert(alignof(UKeybindSaveGame_C) == 0x000008, "Wrong alignment on UKeybindSaveGame_C");
static_assert(sizeof(UKeybindSaveGame_C) == 0x000050, "Wrong size on UKeybindSaveGame_C");
static_assert(offsetof(UKeybindSaveGame_C, UberGraphFrame) == 0x000028, "Member 'UKeybindSaveGame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeybindSaveGame_C, ActionKeybinds) == 0x000030, "Member 'UKeybindSaveGame_C::ActionKeybinds' has a wrong offset!");
static_assert(offsetof(UKeybindSaveGame_C, AxisKeybinds) == 0x000040, "Member 'UKeybindSaveGame_C::AxisKeybinds' has a wrong offset!");

}

