﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WorldMapPin

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_WorldMapPin.W_WorldMapPin_C.ExecuteUbergraph_W_WorldMapPin
// 0x0090 (0x0090 - 0x0000)
struct W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesLevelExistInBuild_ReturnValue;        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelUnlocked_OutIsUnlocked;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_IsLevelUnlocked_OutScoreRequired;         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_IsLevelUnlocked_OutLockedUrl;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelUnlocked_ReturnValue;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin) == 0x000008, "Wrong alignment on W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin");
static_assert(sizeof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin) == 0x000090, "Wrong size on W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, EntryPoint) == 0x000000, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, K2Node_Event_IsDesignTime) == 0x000004, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, K2Node_Event_MyGeometry) == 0x000008, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, K2Node_Event_InDeltaTime) == 0x000040, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, CallFunc_Conv_NameToString_ReturnValue) == 0x000048, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, CallFunc_DoesLevelExistInBuild_ReturnValue) == 0x000058, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::CallFunc_DoesLevelExistInBuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000060, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, CallFunc_IsLevelUnlocked_OutIsUnlocked) == 0x000070, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::CallFunc_IsLevelUnlocked_OutIsUnlocked' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, CallFunc_IsLevelUnlocked_OutScoreRequired) == 0x000074, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::CallFunc_IsLevelUnlocked_OutScoreRequired' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, CallFunc_IsLevelUnlocked_OutLockedUrl) == 0x000078, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::CallFunc_IsLevelUnlocked_OutLockedUrl' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, CallFunc_IsLevelUnlocked_ReturnValue) == 0x000088, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::CallFunc_IsLevelUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin, CallFunc_Not_PreBool_ReturnValue) == 0x000089, "Member 'W_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function W_WorldMapPin.W_WorldMapPin_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_WorldMapPin_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_WorldMapPin_C_PreConstruct) == 0x000001, "Wrong alignment on W_WorldMapPin_C_PreConstruct");
static_assert(sizeof(W_WorldMapPin_C_PreConstruct) == 0x000001, "Wrong size on W_WorldMapPin_C_PreConstruct");
static_assert(offsetof(W_WorldMapPin_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_WorldMapPin_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function W_WorldMapPin.W_WorldMapPin_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_WorldMapPin_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_WorldMapPin_C_Tick) == 0x000004, "Wrong alignment on W_WorldMapPin_C_Tick");
static_assert(sizeof(W_WorldMapPin_C_Tick) == 0x00003C, "Wrong size on W_WorldMapPin_C_Tick");
static_assert(offsetof(W_WorldMapPin_C_Tick, MyGeometry) == 0x000000, "Member 'W_WorldMapPin_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_WorldMapPin_C_Tick, InDeltaTime) == 0x000038, "Member 'W_WorldMapPin_C_Tick::InDeltaTime' has a wrong offset!");

}

