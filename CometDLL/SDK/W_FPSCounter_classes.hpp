﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_FPSCounter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_FPSCounter.W_FPSCounter_C
// 0x0008 (0x02C8 - 0x02C0)
class UW_FPSCounter_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_W_FPSCounter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_FPSCounter_C">();
	}
	static class UW_FPSCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_FPSCounter_C>();
	}
};
static_assert(alignof(UW_FPSCounter_C) == 0x000008, "Wrong alignment on UW_FPSCounter_C");
static_assert(sizeof(UW_FPSCounter_C) == 0x0002C8, "Wrong size on UW_FPSCounter_C");
static_assert(offsetof(UW_FPSCounter_C, UberGraphFrame) == 0x0002C0, "Member 'UW_FPSCounter_C::UberGraphFrame' has a wrong offset!");

}

