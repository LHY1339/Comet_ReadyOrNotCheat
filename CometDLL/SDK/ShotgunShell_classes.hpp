﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShotgunShell

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShotgunShell.ShotgunShell_C
// 0x0000 (0x0318 - 0x0318)
class AShotgunShell_C final : public ABaseShell
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShotgunShell_C">();
	}
	static class AShotgunShell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShotgunShell_C>();
	}
};
static_assert(alignof(AShotgunShell_C) == 0x000008, "Wrong alignment on AShotgunShell_C");
static_assert(sizeof(AShotgunShell_C) == 0x000318, "Wrong size on AShotgunShell_C");

}

