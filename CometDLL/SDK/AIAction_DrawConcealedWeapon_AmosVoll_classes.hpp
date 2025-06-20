﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_DrawConcealedWeapon_AmosVoll

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIAction_DrawConcealedWeapon_AmosVoll.AIAction_DrawConcealedWeapon_AmosVoll_C
// 0x0010 (0x0068 - 0x0058)
class UAIAction_DrawConcealedWeapon_AmosVoll_C final : public UAIAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 WeaponToSpawn;                                     // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BeginAction_Blueprint();
	void ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll(int32 EntryPoint);
	void Tick_Blueprint(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIAction_DrawConcealedWeapon_AmosVoll_C">();
	}
	static class UAIAction_DrawConcealedWeapon_AmosVoll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIAction_DrawConcealedWeapon_AmosVoll_C>();
	}
};
static_assert(alignof(UAIAction_DrawConcealedWeapon_AmosVoll_C) == 0x000008, "Wrong alignment on UAIAction_DrawConcealedWeapon_AmosVoll_C");
static_assert(sizeof(UAIAction_DrawConcealedWeapon_AmosVoll_C) == 0x000068, "Wrong size on UAIAction_DrawConcealedWeapon_AmosVoll_C");
static_assert(offsetof(UAIAction_DrawConcealedWeapon_AmosVoll_C, UberGraphFrame) == 0x000058, "Member 'UAIAction_DrawConcealedWeapon_AmosVoll_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIAction_DrawConcealedWeapon_AmosVoll_C, WeaponToSpawn) == 0x000060, "Member 'UAIAction_DrawConcealedWeapon_AmosVoll_C::WeaponToSpawn' has a wrong offset!");

}

