﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_SBL_Code

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_SBL_Code.BPI_SBL_Code_C.GetAllModActors
// 0x0010 (0x0010 - 0x0000)
struct BPI_SBL_Code_C_GetAllModActors final
{
public:
	TArray<class AActor*>                         Actors;                                            // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_SBL_Code_C_GetAllModActors) == 0x000008, "Wrong alignment on BPI_SBL_Code_C_GetAllModActors");
static_assert(sizeof(BPI_SBL_Code_C_GetAllModActors) == 0x000010, "Wrong size on BPI_SBL_Code_C_GetAllModActors");
static_assert(offsetof(BPI_SBL_Code_C_GetAllModActors, Actors) == 0x000000, "Member 'BPI_SBL_Code_C_GetAllModActors::Actors' has a wrong offset!");

// Function BPI_SBL_Code.BPI_SBL_Code_C.GetAllModData
// 0x0018 (0x0018 - 0x0000)
struct BPI_SBL_Code_C_GetAllModData final
{
public:
	bool                                          OnlyActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPDA_SBL_ModData_C*>             ModData;                                           // 0x0008(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_SBL_Code_C_GetAllModData) == 0x000008, "Wrong alignment on BPI_SBL_Code_C_GetAllModData");
static_assert(sizeof(BPI_SBL_Code_C_GetAllModData) == 0x000018, "Wrong size on BPI_SBL_Code_C_GetAllModData");
static_assert(offsetof(BPI_SBL_Code_C_GetAllModData, OnlyActive) == 0x000000, "Member 'BPI_SBL_Code_C_GetAllModData::OnlyActive' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetAllModData, ModData) == 0x000008, "Member 'BPI_SBL_Code_C_GetAllModData::ModData' has a wrong offset!");

// Function BPI_SBL_Code.BPI_SBL_Code_C.GetModActorsFromData
// 0x0020 (0x0020 - 0x0000)
struct BPI_SBL_Code_C_GetModActorsFromData final
{
public:
	class UPDA_SBL_ModData_C*                     ModData;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Actors;                                            // 0x0008(0x0010)(Parm, OutParm)
	bool                                          IsActive;                                          // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBL_Code_C_GetModActorsFromData) == 0x000008, "Wrong alignment on BPI_SBL_Code_C_GetModActorsFromData");
static_assert(sizeof(BPI_SBL_Code_C_GetModActorsFromData) == 0x000020, "Wrong size on BPI_SBL_Code_C_GetModActorsFromData");
static_assert(offsetof(BPI_SBL_Code_C_GetModActorsFromData, ModData) == 0x000000, "Member 'BPI_SBL_Code_C_GetModActorsFromData::ModData' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModActorsFromData, Actors) == 0x000008, "Member 'BPI_SBL_Code_C_GetModActorsFromData::Actors' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModActorsFromData, IsActive) == 0x000018, "Member 'BPI_SBL_Code_C_GetModActorsFromData::IsActive' has a wrong offset!");

// Function BPI_SBL_Code.BPI_SBL_Code_C.GetModDataActive
// 0x0010 (0x0010 - 0x0000)
struct BPI_SBL_Code_C_GetModDataActive final
{
public:
	class UPDA_SBL_ModData_C*                     ModData;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBL_Code_C_GetModDataActive) == 0x000008, "Wrong alignment on BPI_SBL_Code_C_GetModDataActive");
static_assert(sizeof(BPI_SBL_Code_C_GetModDataActive) == 0x000010, "Wrong size on BPI_SBL_Code_C_GetModDataActive");
static_assert(offsetof(BPI_SBL_Code_C_GetModDataActive, ModData) == 0x000000, "Member 'BPI_SBL_Code_C_GetModDataActive::ModData' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModDataActive, IsActive) == 0x000008, "Member 'BPI_SBL_Code_C_GetModDataActive::IsActive' has a wrong offset!");

// Function BPI_SBL_Code.BPI_SBL_Code_C.GetModDataFromModActor
// 0x0018 (0x0018 - 0x0000)
struct BPI_SBL_Code_C_GetModDataFromModActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPDA_SBL_ModData_C*                     ModData;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBL_Code_C_GetModDataFromModActor) == 0x000008, "Wrong alignment on BPI_SBL_Code_C_GetModDataFromModActor");
static_assert(sizeof(BPI_SBL_Code_C_GetModDataFromModActor) == 0x000018, "Wrong size on BPI_SBL_Code_C_GetModDataFromModActor");
static_assert(offsetof(BPI_SBL_Code_C_GetModDataFromModActor, Actor) == 0x000000, "Member 'BPI_SBL_Code_C_GetModDataFromModActor::Actor' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModDataFromModActor, ModData) == 0x000008, "Member 'BPI_SBL_Code_C_GetModDataFromModActor::ModData' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModDataFromModActor, Valid) == 0x000010, "Member 'BPI_SBL_Code_C_GetModDataFromModActor::Valid' has a wrong offset!");

// Function BPI_SBL_Code.BPI_SBL_Code_C.GetModInfo
// 0x0078 (0x0078 - 0x0000)
struct BPI_SBL_Code_C_GetModInfo final
{
public:
	class UPDA_SBL_ModData_C*                     ModData;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   ModName;                                           // 0x0008(0x0018)(Parm, OutParm)
	class FText                                   ModOverview;                                       // 0x0020(0x0018)(Parm, OutParm)
	TArray<class FText>                           ModAuthors;                                        // 0x0038(0x0010)(Parm, OutParm)
	class FText                                   ModVersion;                                        // 0x0048(0x0018)(Parm, OutParm)
	class FName                                   ModPakName;                                        // 0x0060(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ModNexusID;                                        // 0x0068(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ModModioID;                                        // 0x006C(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0074(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBL_Code_C_GetModInfo) == 0x000008, "Wrong alignment on BPI_SBL_Code_C_GetModInfo");
static_assert(sizeof(BPI_SBL_Code_C_GetModInfo) == 0x000078, "Wrong size on BPI_SBL_Code_C_GetModInfo");
static_assert(offsetof(BPI_SBL_Code_C_GetModInfo, ModData) == 0x000000, "Member 'BPI_SBL_Code_C_GetModInfo::ModData' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModInfo, ModName) == 0x000008, "Member 'BPI_SBL_Code_C_GetModInfo::ModName' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModInfo, ModOverview) == 0x000020, "Member 'BPI_SBL_Code_C_GetModInfo::ModOverview' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModInfo, ModAuthors) == 0x000038, "Member 'BPI_SBL_Code_C_GetModInfo::ModAuthors' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModInfo, ModVersion) == 0x000048, "Member 'BPI_SBL_Code_C_GetModInfo::ModVersion' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModInfo, ModPakName) == 0x000060, "Member 'BPI_SBL_Code_C_GetModInfo::ModPakName' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModInfo, ModNexusID) == 0x000068, "Member 'BPI_SBL_Code_C_GetModInfo::ModNexusID' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModInfo, ModModioID) == 0x00006C, "Member 'BPI_SBL_Code_C_GetModInfo::ModModioID' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_GetModInfo, IsActive) == 0x000074, "Member 'BPI_SBL_Code_C_GetModInfo::IsActive' has a wrong offset!");

// Function BPI_SBL_Code.BPI_SBL_Code_C.SetModDataActive
// 0x0010 (0x0010 - 0x0000)
struct BPI_SBL_Code_C_SetModDataActive final
{
public:
	class UPDA_SBL_ModData_C*                     ModData;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_SBL_Code_C_SetModDataActive) == 0x000008, "Wrong alignment on BPI_SBL_Code_C_SetModDataActive");
static_assert(sizeof(BPI_SBL_Code_C_SetModDataActive) == 0x000010, "Wrong size on BPI_SBL_Code_C_SetModDataActive");
static_assert(offsetof(BPI_SBL_Code_C_SetModDataActive, ModData) == 0x000000, "Member 'BPI_SBL_Code_C_SetModDataActive::ModData' has a wrong offset!");
static_assert(offsetof(BPI_SBL_Code_C_SetModDataActive, IsActive) == 0x000008, "Member 'BPI_SBL_Code_C_SetModDataActive::IsActive' has a wrong offset!");

}

