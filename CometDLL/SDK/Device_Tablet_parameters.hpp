﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Device_Tablet

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Device_Tablet.Device_Tablet_C.ExecuteUbergraph_Device_Tablet
// 0x0888 (0x0888 - 0x0000)
struct Device_Tablet_C_ExecuteUbergraph_Device_Tablet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_1;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_C*                 K2Node_DynamicCast_AsW_Pre_Mission_Tablet;         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_PreMission_Tablet_C*                 K2Node_DynamicCast_AsW_Pre_Mission_Tablet_1;       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_2;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_PreMission_Tablet_C*                 K2Node_DynamicCast_AsW_Pre_Mission_Tablet_2;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFMODEvent*                             K2Node_Event_Event;                                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                    CallFunc_PlayEventAttached_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLevelDataLookupTable                  CallFunc_GetLevelData_ReturnValue;                 // 0x0060(0x0818)()
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0878(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet) == 0x000008, "Wrong alignment on Device_Tablet_C_ExecuteUbergraph_Device_Tablet");
static_assert(sizeof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet) == 0x000888, "Wrong size on Device_Tablet_C_ExecuteUbergraph_Device_Tablet");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, EntryPoint) == 0x000000, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::EntryPoint' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, CallFunc_GetUserWidgetObject_ReturnValue_1) == 0x000010, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::CallFunc_GetUserWidgetObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, K2Node_DynamicCast_AsW_Pre_Mission_Tablet) == 0x000018, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::K2Node_DynamicCast_AsW_Pre_Mission_Tablet' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, K2Node_DynamicCast_AsW_Pre_Mission_Tablet_1) == 0x000028, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::K2Node_DynamicCast_AsW_Pre_Mission_Tablet_1' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, CallFunc_GetUserWidgetObject_ReturnValue_2) == 0x000038, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::CallFunc_GetUserWidgetObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, K2Node_DynamicCast_AsW_Pre_Mission_Tablet_2) == 0x000040, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::K2Node_DynamicCast_AsW_Pre_Mission_Tablet_2' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, K2Node_Event_Event) == 0x000050, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::K2Node_Event_Event' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, CallFunc_PlayEventAttached_ReturnValue) == 0x000058, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::CallFunc_PlayEventAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, CallFunc_GetLevelData_ReturnValue) == 0x000060, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::CallFunc_GetLevelData_ReturnValue' has a wrong offset!");
static_assert(offsetof(Device_Tablet_C_ExecuteUbergraph_Device_Tablet, CallFunc_MakeColor_ReturnValue) == 0x000878, "Member 'Device_Tablet_C_ExecuteUbergraph_Device_Tablet::CallFunc_MakeColor_ReturnValue' has a wrong offset!");

// Function Device_Tablet.Device_Tablet_C.PlaySoundEvent
// 0x0008 (0x0008 - 0x0000)
struct Device_Tablet_C_PlaySoundEvent final
{
public:
	class UFMODEvent*                             Event;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Device_Tablet_C_PlaySoundEvent) == 0x000008, "Wrong alignment on Device_Tablet_C_PlaySoundEvent");
static_assert(sizeof(Device_Tablet_C_PlaySoundEvent) == 0x000008, "Wrong size on Device_Tablet_C_PlaySoundEvent");
static_assert(offsetof(Device_Tablet_C_PlaySoundEvent, Event) == 0x000000, "Member 'Device_Tablet_C_PlaySoundEvent::Event' has a wrong offset!");

}

