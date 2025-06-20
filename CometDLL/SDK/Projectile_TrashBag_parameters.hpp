﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Projectile_TrashBag

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Projectile_TrashBag.Projectile_TrashBag_C.ExecuteUbergraph_Projectile_TrashBag
// 0x00F8 (0x00F8 - 0x0000)
struct Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODAudioComponent*                    CallFunc_PlayEventAttached_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_DeflectionHit;                        // 0x0010(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag) == 0x000008, "Wrong alignment on Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag");
static_assert(sizeof(Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag) == 0x0000F8, "Wrong size on Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag");
static_assert(offsetof(Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag, EntryPoint) == 0x000000, "Member 'Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag::EntryPoint' has a wrong offset!");
static_assert(offsetof(Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag, CallFunc_PlayEventAttached_ReturnValue) == 0x000008, "Member 'Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag::CallFunc_PlayEventAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag, K2Node_Event_DeflectionHit) == 0x000010, "Member 'Projectile_TrashBag_C_ExecuteUbergraph_Projectile_TrashBag::K2Node_Event_DeflectionHit' has a wrong offset!");

// Function Projectile_TrashBag.Projectile_TrashBag_C.OnDeflect
// 0x00E8 (0x00E8 - 0x0000)
struct Projectile_TrashBag_C_OnDeflect final
{
public:
	struct FHitResult                             DeflectionHit;                                     // 0x0000(0x00E8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Projectile_TrashBag_C_OnDeflect) == 0x000008, "Wrong alignment on Projectile_TrashBag_C_OnDeflect");
static_assert(sizeof(Projectile_TrashBag_C_OnDeflect) == 0x0000E8, "Wrong size on Projectile_TrashBag_C_OnDeflect");
static_assert(offsetof(Projectile_TrashBag_C_OnDeflect, DeflectionHit) == 0x000000, "Member 'Projectile_TrashBag_C_OnDeflect::DeflectionHit' has a wrong offset!");

}

