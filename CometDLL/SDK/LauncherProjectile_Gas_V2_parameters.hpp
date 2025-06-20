﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LauncherProjectile_Gas_V2

#include "Basic.hpp"

#include "ReadyOrNot_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C.ExecuteUbergraph_LauncherProjectile_Gas_V2
// 0x0038 (0x0038 - 0x0000)
struct LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWorld*                                 CallFunc_GetWorldStatic_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCSGasManager*                          CallFunc_Get_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWorld*                                 CallFunc_GetWorldStatic_ReturnValue_1;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCSGasManager*                          CallFunc_Get_ReturnValue_1;                        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2) == 0x000008, "Wrong alignment on LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2");
static_assert(sizeof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2) == 0x000038, "Wrong size on LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2, EntryPoint) == 0x000000, "Member 'LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2::EntryPoint' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2, CallFunc_GetWorldStatic_ReturnValue) == 0x000008, "Member 'LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2::CallFunc_GetWorldStatic_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2, CallFunc_Get_ReturnValue) == 0x000010, "Member 'LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001A, "Member 'LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2, CallFunc_GetWorldStatic_ReturnValue_1) == 0x000020, "Member 'LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2::CallFunc_GetWorldStatic_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2, CallFunc_Get_ReturnValue_1) == 0x000028, "Member 'LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'LauncherProjectile_Gas_V2_C_ExecuteUbergraph_LauncherProjectile_Gas_V2::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C.AffectsNavigation
// 0x0001 (0x0001 - 0x0000)
struct LauncherProjectile_Gas_V2_C_AffectsNavigation final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LauncherProjectile_Gas_V2_C_AffectsNavigation) == 0x000001, "Wrong alignment on LauncherProjectile_Gas_V2_C_AffectsNavigation");
static_assert(sizeof(LauncherProjectile_Gas_V2_C_AffectsNavigation) == 0x000001, "Wrong size on LauncherProjectile_Gas_V2_C_AffectsNavigation");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_AffectsNavigation, ReturnValue) == 0x000000, "Member 'LauncherProjectile_Gas_V2_C_AffectsNavigation::ReturnValue' has a wrong offset!");

// Function LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C.AppliesStunDamage
// 0x0001 (0x0001 - 0x0000)
struct LauncherProjectile_Gas_V2_C_AppliesStunDamage final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LauncherProjectile_Gas_V2_C_AppliesStunDamage) == 0x000001, "Wrong alignment on LauncherProjectile_Gas_V2_C_AppliesStunDamage");
static_assert(sizeof(LauncherProjectile_Gas_V2_C_AppliesStunDamage) == 0x000001, "Wrong size on LauncherProjectile_Gas_V2_C_AppliesStunDamage");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_AppliesStunDamage, ReturnValue) == 0x000000, "Member 'LauncherProjectile_Gas_V2_C_AppliesStunDamage::ReturnValue' has a wrong offset!");

// Function LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C.GetGasRadius
// 0x0030 (0x0030 - 0x0000)
struct LauncherProjectile_Gas_V2_C_GetGasRadius final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGrenadeDamage                         CallFunc_Array_Get_Item;                           // 0x0008(0x0028)(NoDestructor)
};
static_assert(alignof(LauncherProjectile_Gas_V2_C_GetGasRadius) == 0x000008, "Wrong alignment on LauncherProjectile_Gas_V2_C_GetGasRadius");
static_assert(sizeof(LauncherProjectile_Gas_V2_C_GetGasRadius) == 0x000030, "Wrong size on LauncherProjectile_Gas_V2_C_GetGasRadius");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasRadius, ReturnValue) == 0x000000, "Member 'LauncherProjectile_Gas_V2_C_GetGasRadius::ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasRadius, CallFunc_Array_LastIndex_ReturnValue) == 0x000004, "Member 'LauncherProjectile_Gas_V2_C_GetGasRadius::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasRadius, CallFunc_Array_Get_Item) == 0x000008, "Member 'LauncherProjectile_Gas_V2_C_GetGasRadius::CallFunc_Array_Get_Item' has a wrong offset!");

// Function LauncherProjectile_Gas_V2.LauncherProjectile_Gas_V2_C.GetGasReleaseLocation
// 0x0328 (0x0328 - 0x0000)
struct LauncherProjectile_Gas_V2_C_GetGasReleaseLocation final
{
public:
	struct FVector                                OutLocation;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TestLocation;                                      // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0048(0x0010)(ConstParm, ReferenceParm)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ConstParm, ReferenceParm)
	double                                        CallFunc_BreakVector_X;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x00D8(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C3[0x1];                                      // 0x01C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0230(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0240(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_ProjectPointToNavigation_ProjectedLocation; // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_ProjectPointToNavigation_ReturnValue;  // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X_1;                          // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_ProjectPointToNavigation_ProjectedLocation_1; // 0x0308(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_ProjectPointToNavigation_ReturnValue_1; // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation) == 0x000008, "Wrong alignment on LauncherProjectile_Gas_V2_C_GetGasReleaseLocation");
static_assert(sizeof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation) == 0x000328, "Wrong size on LauncherProjectile_Gas_V2_C_GetGasReleaseLocation");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, OutLocation) == 0x000000, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::OutLocation' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, ReturnValue) == 0x000018, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, TestLocation) == 0x000020, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::TestLocation' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000040, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, Temp_int_Array_Index_Variable) == 0x000044, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, Temp_object_Variable) == 0x000048, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, K2Node_MakeArray_Array) == 0x000058, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakVector_X) == 0x000068, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakVector_Y) == 0x000070, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakVector_Z) == 0x000078, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000080, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Array_Get_Item) == 0x000098, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000B4, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000B8, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Max_ReturnValue) == 0x0000D0, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_LineTraceSingleForObjects_OutHit) == 0x0000D8, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x0001C0, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_bBlockingHit) == 0x0001C1, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001C2, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_Time) == 0x0001C4, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_Distance) == 0x0001C8, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_Location) == 0x0001D0, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_ImpactPoint) == 0x0001E8, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_Normal) == 0x000200, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_ImpactNormal) == 0x000218, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_PhysMat) == 0x000230, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_HitActor) == 0x000238, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_HitComponent) == 0x000240, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_HitBoneName) == 0x000248, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_BoneName) == 0x000250, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_HitItem) == 0x000258, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_ElementIndex) == 0x00025C, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_FaceIndex) == 0x000260, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_TraceStart) == 0x000268, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakHitResult_TraceEnd) == 0x000280, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_K2_ProjectPointToNavigation_ProjectedLocation) == 0x000298, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_K2_ProjectPointToNavigation_ProjectedLocation' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_K2_ProjectPointToNavigation_ReturnValue) == 0x0002B0, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_K2_ProjectPointToNavigation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Vector_Distance_ReturnValue) == 0x0002B8, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0002C0, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakVector_X_1) == 0x0002C8, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakVector_Y_1) == 0x0002D0, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_BreakVector_Z_1) == 0x0002D8, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0002E0, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x0002E8, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x0002F0, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_K2_ProjectPointToNavigation_ProjectedLocation_1) == 0x000308, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_K2_ProjectPointToNavigation_ProjectedLocation_1' has a wrong offset!");
static_assert(offsetof(LauncherProjectile_Gas_V2_C_GetGasReleaseLocation, CallFunc_K2_ProjectPointToNavigation_ReturnValue_1) == 0x000320, "Member 'LauncherProjectile_Gas_V2_C_GetGasReleaseLocation::CallFunc_K2_ProjectPointToNavigation_ReturnValue_1' has a wrong offset!");

}

