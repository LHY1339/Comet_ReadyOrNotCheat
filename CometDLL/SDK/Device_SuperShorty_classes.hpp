﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Device_SuperShorty

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Device_SuperShorty.Device_SuperShorty_C
// 0x0030 (0x17E0 - 0x17B0)
class ADevice_SuperShorty_C final : public AShotgun
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x17B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UShellRackShellComponent*               Shell4;                                            // 0x17B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*               Shell3;                                            // 0x17C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*               Shell2;                                            // 0x17C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*               Shell1;                                            // 0x17D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*               Shell0;                                            // 0x17D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void DoReloadComplete_1();
	void ExecuteUbergraph_Device_SuperShorty(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Device_SuperShorty_C">();
	}
	static class ADevice_SuperShorty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADevice_SuperShorty_C>();
	}
};
static_assert(alignof(ADevice_SuperShorty_C) == 0x000010, "Wrong alignment on ADevice_SuperShorty_C");
static_assert(sizeof(ADevice_SuperShorty_C) == 0x0017E0, "Wrong size on ADevice_SuperShorty_C");
static_assert(offsetof(ADevice_SuperShorty_C, UberGraphFrame) == 0x0017B0, "Member 'ADevice_SuperShorty_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADevice_SuperShorty_C, Shell4) == 0x0017B8, "Member 'ADevice_SuperShorty_C::Shell4' has a wrong offset!");
static_assert(offsetof(ADevice_SuperShorty_C, Shell3) == 0x0017C0, "Member 'ADevice_SuperShorty_C::Shell3' has a wrong offset!");
static_assert(offsetof(ADevice_SuperShorty_C, Shell2) == 0x0017C8, "Member 'ADevice_SuperShorty_C::Shell2' has a wrong offset!");
static_assert(offsetof(ADevice_SuperShorty_C, Shell1) == 0x0017D0, "Member 'ADevice_SuperShorty_C::Shell1' has a wrong offset!");
static_assert(offsetof(ADevice_SuperShorty_C, Shell0) == 0x0017D8, "Member 'ADevice_SuperShorty_C::Shell0' has a wrong offset!");

}

