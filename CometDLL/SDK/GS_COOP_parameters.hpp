﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GS_COOP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GS_COOP.GS_COOP_C.ExecuteUbergraph_GS_COOP
// 0x0080 (0x0080 - 0x0000)
struct GS_COOP_C_ExecuteUbergraph_GS_COOP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASceneCapturePlayerCamera_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GS_COOP_C_ExecuteUbergraph_GS_COOP) == 0x000010, "Wrong alignment on GS_COOP_C_ExecuteUbergraph_GS_COOP");
static_assert(sizeof(GS_COOP_C_ExecuteUbergraph_GS_COOP) == 0x000080, "Wrong size on GS_COOP_C_ExecuteUbergraph_GS_COOP");
static_assert(offsetof(GS_COOP_C_ExecuteUbergraph_GS_COOP, EntryPoint) == 0x000000, "Member 'GS_COOP_C_ExecuteUbergraph_GS_COOP::EntryPoint' has a wrong offset!");
static_assert(offsetof(GS_COOP_C_ExecuteUbergraph_GS_COOP, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'GS_COOP_C_ExecuteUbergraph_GS_COOP::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GS_COOP_C_ExecuteUbergraph_GS_COOP, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'GS_COOP_C_ExecuteUbergraph_GS_COOP::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GS_COOP_C_ExecuteUbergraph_GS_COOP, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'GS_COOP_C_ExecuteUbergraph_GS_COOP::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GS_COOP_C_ExecuteUbergraph_GS_COOP, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'GS_COOP_C_ExecuteUbergraph_GS_COOP::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

