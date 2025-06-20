﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIAction_DrawConcealedWeapon_AmosVoll

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AIAction_DrawConcealedWeapon_AmosVoll.AIAction_DrawConcealedWeapon_AmosVoll_C.ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll
// 0x00D0 (0x00D0 - 0x0000)
struct AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACyberneticCharacter*                   CallFunc_GetCharacter_ReturnValue_1;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_PlayMontageFromTable_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetPlayLength_ReturnValue;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PutItemInHands_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddInventoryItem_ReturnValue;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll) == 0x000010, "Wrong alignment on AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll");
static_assert(sizeof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll) == 0x0000D0, "Wrong size on AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, EntryPoint) == 0x000000, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::EntryPoint' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, K2Node_Event_DeltaTime) == 0x000004, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_GetCharacter_ReturnValue_1) == 0x000010, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_GetCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_PlayMontageFromTable_ReturnValue) == 0x000018, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_PlayMontageFromTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_GetPlayLength_ReturnValue) == 0x000024, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_GetPlayLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_PutItemInHands_ReturnValue) == 0x000028, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_PutItemInHands_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_IsValidClass_ReturnValue) == 0x000038, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A0, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000A8, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_AddInventoryItem_ReturnValue) == 0x0000B0, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_AddInventoryItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000B8, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll, CallFunc_Delay_Duration_ImplicitCast) == 0x0000C0, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_ExecuteUbergraph_AIAction_DrawConcealedWeapon_AmosVoll::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function AIAction_DrawConcealedWeapon_AmosVoll.AIAction_DrawConcealedWeapon_AmosVoll_C.Tick_Blueprint
// 0x0004 (0x0004 - 0x0000)
struct AIAction_DrawConcealedWeapon_AmosVoll_C_Tick_Blueprint final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AIAction_DrawConcealedWeapon_AmosVoll_C_Tick_Blueprint) == 0x000004, "Wrong alignment on AIAction_DrawConcealedWeapon_AmosVoll_C_Tick_Blueprint");
static_assert(sizeof(AIAction_DrawConcealedWeapon_AmosVoll_C_Tick_Blueprint) == 0x000004, "Wrong size on AIAction_DrawConcealedWeapon_AmosVoll_C_Tick_Blueprint");
static_assert(offsetof(AIAction_DrawConcealedWeapon_AmosVoll_C_Tick_Blueprint, DeltaTime) == 0x000000, "Member 'AIAction_DrawConcealedWeapon_AmosVoll_C_Tick_Blueprint::DeltaTime' has a wrong offset!");

}

