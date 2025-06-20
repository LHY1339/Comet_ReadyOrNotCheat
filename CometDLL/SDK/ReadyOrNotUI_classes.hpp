﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReadyOrNotUI

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ReadyOrNotUI.ReadyOrNotUI_C
// 0x0000 (0x0000 - 0x0000)
class IReadyOrNotUI_C final
{
public:
	void BackPage(bool* Handled);
	void ChangePage(class FName PageName);
	void Hide(double Delay, bool Collapse);
	void Reveal(double Delay);
	void SetInputMode(bool IsGamepad);

	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReadyOrNotUI_C">();
	}
	static class IReadyOrNotUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IReadyOrNotUI_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IReadyOrNotUI_C) == 0x000001, "Wrong alignment on IReadyOrNotUI_C");
static_assert(sizeof(IReadyOrNotUI_C) == 0x000001, "Wrong size on IReadyOrNotUI_C");

}

