﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Faction_Mindjot

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Faction_Mindjot.Faction_Mindjot_C
// 0x0008 (0x02F8 - 0x02F0)
class AFaction_Mindjot_C final : public AAIFactionManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Faction_Mindjot_C">();
	}
	static class AFaction_Mindjot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFaction_Mindjot_C>();
	}
};
static_assert(alignof(AFaction_Mindjot_C) == 0x000008, "Wrong alignment on AFaction_Mindjot_C");
static_assert(sizeof(AFaction_Mindjot_C) == 0x0002F8, "Wrong size on AFaction_Mindjot_C");
static_assert(offsetof(AFaction_Mindjot_C, DefaultSceneRoot) == 0x0002F0, "Member 'AFaction_Mindjot_C::DefaultSceneRoot' has a wrong offset!");

}

