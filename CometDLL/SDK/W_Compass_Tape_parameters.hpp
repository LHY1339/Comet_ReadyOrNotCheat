﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Compass_Tape

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_Compass_Tape.W_Compass_Tape_C.ExecuteUbergraph_W_Compass_Tape
// 0x00C8 (0x00C8 - 0x0000)
struct W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ClampAxis_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeAxis_ReturnValue;                // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0080(0x0018)()
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FFloor_A_ImplicitCast;                    // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape) == 0x000008, "Wrong alignment on W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape");
static_assert(sizeof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape) == 0x0000C8, "Wrong size on W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, EntryPoint) == 0x000000, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, K2Node_Event_MyGeometry) == 0x000010, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, K2Node_Event_InDeltaTime) == 0x000048, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000050, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_BreakRotator_Roll) == 0x000068, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_BreakRotator_Pitch) == 0x00006C, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_BreakRotator_Yaw) == 0x000070, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_ClampAxis_ReturnValue) == 0x000074, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_ClampAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_FFloor_ReturnValue) == 0x000078, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_NormalizeAxis_ReturnValue) == 0x00007C, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_NormalizeAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_Conv_IntToText_ReturnValue) == 0x000080, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000098, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0000A0, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_MakeVector2D_ReturnValue) == 0x0000A8, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_FFloor_A_ImplicitCast) == 0x0000B8, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_FFloor_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0000C0, "Member 'W_Compass_Tape_C_ExecuteUbergraph_W_Compass_Tape::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function W_Compass_Tape.W_Compass_Tape_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_Compass_Tape_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_Compass_Tape_C_Tick) == 0x000004, "Wrong alignment on W_Compass_Tape_C_Tick");
static_assert(sizeof(W_Compass_Tape_C_Tick) == 0x00003C, "Wrong size on W_Compass_Tape_C_Tick");
static_assert(offsetof(W_Compass_Tape_C_Tick, MyGeometry) == 0x000000, "Member 'W_Compass_Tape_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_Compass_Tape_C_Tick, InDeltaTime) == 0x000038, "Member 'W_Compass_Tape_C_Tick::InDeltaTime' has a wrong offset!");

}

