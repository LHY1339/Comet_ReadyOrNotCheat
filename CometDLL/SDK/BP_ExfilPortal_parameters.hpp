﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExfilPortal

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ExfilPortal.BP_ExfilPortal_C.ExecuteUbergraph_BP_ExfilPortal
// 0x0070 (0x0070 - 0x0000)
struct BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGamePaused_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGamePaused_ReturnValue_1;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AReadyOrNotPlayerController*            CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_CreateWidgetForPlayer_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ExfilOverlay_C*                      K2Node_DynamicCast_AsW_Exfil_Overlay;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMultiplayer_ReturnValue;                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGamePaused_ReturnValue_2;              // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47[0x1];                                       // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACoopGS*                                K2Node_DynamicCast_AsCoop_GS;                      // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal) == 0x000008, "Wrong alignment on BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal");
static_assert(sizeof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal) == 0x000070, "Wrong size on BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, EntryPoint) == 0x000000, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_SetGamePaused_ReturnValue) == 0x000004, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_SetGamePaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_SetGamePaused_ReturnValue_1) == 0x000005, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_SetGamePaused_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_GetReadyOrNotPlayerController_ReturnValue) == 0x000008, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_GetReadyOrNotPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_CreateWidgetForPlayer_ReturnValue) == 0x000020, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_CreateWidgetForPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, K2Node_DynamicCast_AsW_Exfil_Overlay) == 0x000028, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::K2Node_DynamicCast_AsW_Exfil_Overlay' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_IsMultiplayer_ReturnValue) == 0x000044, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_IsMultiplayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_Not_PreBool_ReturnValue) == 0x000045, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_SetGamePaused_ReturnValue_2) == 0x000046, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_SetGamePaused_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_GetGameState_ReturnValue) == 0x000050, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, K2Node_DynamicCast_AsCoop_GS) == 0x000060, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::K2Node_DynamicCast_AsCoop_GS' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal, CallFunc_Max_ReturnValue) == 0x00006C, "Member 'BP_ExfilPortal_C_ExecuteUbergraph_BP_ExfilPortal::CallFunc_Max_ReturnValue' has a wrong offset!");

}

