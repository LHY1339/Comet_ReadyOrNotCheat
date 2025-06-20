﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IRadialSlot

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass IRadialSlot.IRadialSlot_C
// 0x0000 (0x0000 - 0x0000)
class IIRadialSlot_C final
{
public:
	void OnHighlight(bool Selected);
	void OnUnhighlight(bool Unselected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IRadialSlot_C">();
	}
	static class IIRadialSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIRadialSlot_C>();
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
static_assert(alignof(IIRadialSlot_C) == 0x000001, "Wrong alignment on IIRadialSlot_C");
static_assert(sizeof(IIRadialSlot_C) == 0x000001, "Wrong size on IIRadialSlot_C");

}

