﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsIntegration

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "StatsIntegration_structs.hpp"


namespace SDK::Params
{

// Function StatsIntegration.GetAchievementData.GetAchievementAPIName
// 0x0018 (0x0018 - 0x0000)
struct GetAchievementData_GetAchievementAPIName final
{
public:
	int32                                         AchievementIndex;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GetAchievementData_GetAchievementAPIName) == 0x000008, "Wrong alignment on GetAchievementData_GetAchievementAPIName");
static_assert(sizeof(GetAchievementData_GetAchievementAPIName) == 0x000018, "Wrong size on GetAchievementData_GetAchievementAPIName");
static_assert(offsetof(GetAchievementData_GetAchievementAPIName, AchievementIndex) == 0x000000, "Member 'GetAchievementData_GetAchievementAPIName::AchievementIndex' has a wrong offset!");
static_assert(offsetof(GetAchievementData_GetAchievementAPIName, ReturnValue) == 0x000008, "Member 'GetAchievementData_GetAchievementAPIName::ReturnValue' has a wrong offset!");

// Function StatsIntegration.GetAchievementData.GetAchievementDisplayAttribute
// 0x0028 (0x0028 - 0x0000)
struct GetAchievementData_GetAchievementDisplayAttribute final
{
public:
	class FString                                 AchievementAPIName;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAchievementDisplayAttributeUE4               Attribute;                                         // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GetAchievementData_GetAchievementDisplayAttribute) == 0x000008, "Wrong alignment on GetAchievementData_GetAchievementDisplayAttribute");
static_assert(sizeof(GetAchievementData_GetAchievementDisplayAttribute) == 0x000028, "Wrong size on GetAchievementData_GetAchievementDisplayAttribute");
static_assert(offsetof(GetAchievementData_GetAchievementDisplayAttribute, AchievementAPIName) == 0x000000, "Member 'GetAchievementData_GetAchievementDisplayAttribute::AchievementAPIName' has a wrong offset!");
static_assert(offsetof(GetAchievementData_GetAchievementDisplayAttribute, Attribute) == 0x000010, "Member 'GetAchievementData_GetAchievementDisplayAttribute::Attribute' has a wrong offset!");
static_assert(offsetof(GetAchievementData_GetAchievementDisplayAttribute, ReturnValue) == 0x000018, "Member 'GetAchievementData_GetAchievementDisplayAttribute::ReturnValue' has a wrong offset!");

// Function StatsIntegration.GetAchievementData.GetAchievementIcon
// 0x0018 (0x0018 - 0x0000)
struct GetAchievementData_GetAchievementIcon final
{
public:
	class FString                                 AchievementAPIName;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GetAchievementData_GetAchievementIcon) == 0x000008, "Wrong alignment on GetAchievementData_GetAchievementIcon");
static_assert(sizeof(GetAchievementData_GetAchievementIcon) == 0x000018, "Wrong size on GetAchievementData_GetAchievementIcon");
static_assert(offsetof(GetAchievementData_GetAchievementIcon, AchievementAPIName) == 0x000000, "Member 'GetAchievementData_GetAchievementIcon::AchievementAPIName' has a wrong offset!");
static_assert(offsetof(GetAchievementData_GetAchievementIcon, ReturnValue) == 0x000010, "Member 'GetAchievementData_GetAchievementIcon::ReturnValue' has a wrong offset!");

// Function StatsIntegration.GetAchievementData.GetAchievementUnlockStatusAndUnlockTime
// 0x0020 (0x0020 - 0x0000)
struct GetAchievementData_GetAchievementUnlockStatusAndUnlockTime final
{
public:
	class FString                                 AchievementAPIName;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AchievementUnlocked;                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              UnlockTime;                                        // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GetAchievementData_GetAchievementUnlockStatusAndUnlockTime) == 0x000008, "Wrong alignment on GetAchievementData_GetAchievementUnlockStatusAndUnlockTime");
static_assert(sizeof(GetAchievementData_GetAchievementUnlockStatusAndUnlockTime) == 0x000020, "Wrong size on GetAchievementData_GetAchievementUnlockStatusAndUnlockTime");
static_assert(offsetof(GetAchievementData_GetAchievementUnlockStatusAndUnlockTime, AchievementAPIName) == 0x000000, "Member 'GetAchievementData_GetAchievementUnlockStatusAndUnlockTime::AchievementAPIName' has a wrong offset!");
static_assert(offsetof(GetAchievementData_GetAchievementUnlockStatusAndUnlockTime, AchievementUnlocked) == 0x000010, "Member 'GetAchievementData_GetAchievementUnlockStatusAndUnlockTime::AchievementUnlocked' has a wrong offset!");
static_assert(offsetof(GetAchievementData_GetAchievementUnlockStatusAndUnlockTime, UnlockTime) == 0x000018, "Member 'GetAchievementData_GetAchievementUnlockStatusAndUnlockTime::UnlockTime' has a wrong offset!");

// Function StatsIntegration.GetAchievementData.GetGlobalAchievementAchievedPercent
// 0x0018 (0x0018 - 0x0000)
struct GetAchievementData_GetGlobalAchievementAchievedPercent final
{
public:
	class FString                                 AchievementAPIName;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GetAchievementData_GetGlobalAchievementAchievedPercent) == 0x000008, "Wrong alignment on GetAchievementData_GetGlobalAchievementAchievedPercent");
static_assert(sizeof(GetAchievementData_GetGlobalAchievementAchievedPercent) == 0x000018, "Wrong size on GetAchievementData_GetGlobalAchievementAchievedPercent");
static_assert(offsetof(GetAchievementData_GetGlobalAchievementAchievedPercent, AchievementAPIName) == 0x000000, "Member 'GetAchievementData_GetGlobalAchievementAchievedPercent::AchievementAPIName' has a wrong offset!");
static_assert(offsetof(GetAchievementData_GetGlobalAchievementAchievedPercent, ReturnValue) == 0x000010, "Member 'GetAchievementData_GetGlobalAchievementAchievedPercent::ReturnValue' has a wrong offset!");

// Function StatsIntegration.GetAchievementData.GetNumAchievements
// 0x0004 (0x0004 - 0x0000)
struct GetAchievementData_GetNumAchievements final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GetAchievementData_GetNumAchievements) == 0x000004, "Wrong alignment on GetAchievementData_GetNumAchievements");
static_assert(sizeof(GetAchievementData_GetNumAchievements) == 0x000004, "Wrong size on GetAchievementData_GetNumAchievements");
static_assert(offsetof(GetAchievementData_GetNumAchievements, ReturnValue) == 0x000000, "Member 'GetAchievementData_GetNumAchievements::ReturnValue' has a wrong offset!");

// Function StatsIntegration.GetStoredStats.GetUserStoredStat
// 0x0020 (0x0020 - 0x0000)
struct GetStoredStats_GetUserStoredStat final
{
public:
	class FString                                 APIStatName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESteamStatType                                StatType;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IntegerValue;                                      // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatValue;                                        // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GetStoredStats_GetUserStoredStat) == 0x000008, "Wrong alignment on GetStoredStats_GetUserStoredStat");
static_assert(sizeof(GetStoredStats_GetUserStoredStat) == 0x000020, "Wrong size on GetStoredStats_GetUserStoredStat");
static_assert(offsetof(GetStoredStats_GetUserStoredStat, APIStatName) == 0x000000, "Member 'GetStoredStats_GetUserStoredStat::APIStatName' has a wrong offset!");
static_assert(offsetof(GetStoredStats_GetUserStoredStat, StatType) == 0x000010, "Member 'GetStoredStats_GetUserStoredStat::StatType' has a wrong offset!");
static_assert(offsetof(GetStoredStats_GetUserStoredStat, IntegerValue) == 0x000014, "Member 'GetStoredStats_GetUserStoredStat::IntegerValue' has a wrong offset!");
static_assert(offsetof(GetStoredStats_GetUserStoredStat, FloatValue) == 0x000018, "Member 'GetStoredStats_GetUserStoredStat::FloatValue' has a wrong offset!");

// Function StatsIntegration.GetStoredStats.GetUserStoredStats
// 0x0020 (0x0020 - 0x0000)
struct GetStoredStats_GetUserStoredStats final
{
public:
	TArray<struct FSteamStat>                     StatsToGet;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSteamStat>                     StatsOut;                                          // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(GetStoredStats_GetUserStoredStats) == 0x000008, "Wrong alignment on GetStoredStats_GetUserStoredStats");
static_assert(sizeof(GetStoredStats_GetUserStoredStats) == 0x000020, "Wrong size on GetStoredStats_GetUserStoredStats");
static_assert(offsetof(GetStoredStats_GetUserStoredStats, StatsToGet) == 0x000000, "Member 'GetStoredStats_GetUserStoredStats::StatsToGet' has a wrong offset!");
static_assert(offsetof(GetStoredStats_GetUserStoredStats, StatsOut) == 0x000010, "Member 'GetStoredStats_GetUserStoredStats::StatsOut' has a wrong offset!");

// Function StatsIntegration.IndicateAchievementProgress.IndicateUserAchievementProgress
// 0x0020 (0x0020 - 0x0000)
struct IndicateAchievementProgress_IndicateUserAchievementProgress final
{
public:
	class FString                                 AchievementAPIName_0;                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CurrentProgress_0;                                 // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxProgress_0;                                     // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIndicateAchievementProgress*           ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(IndicateAchievementProgress_IndicateUserAchievementProgress) == 0x000008, "Wrong alignment on IndicateAchievementProgress_IndicateUserAchievementProgress");
static_assert(sizeof(IndicateAchievementProgress_IndicateUserAchievementProgress) == 0x000020, "Wrong size on IndicateAchievementProgress_IndicateUserAchievementProgress");
static_assert(offsetof(IndicateAchievementProgress_IndicateUserAchievementProgress, AchievementAPIName_0) == 0x000000, "Member 'IndicateAchievementProgress_IndicateUserAchievementProgress::AchievementAPIName_0' has a wrong offset!");
static_assert(offsetof(IndicateAchievementProgress_IndicateUserAchievementProgress, CurrentProgress_0) == 0x000010, "Member 'IndicateAchievementProgress_IndicateUserAchievementProgress::CurrentProgress_0' has a wrong offset!");
static_assert(offsetof(IndicateAchievementProgress_IndicateUserAchievementProgress, MaxProgress_0) == 0x000014, "Member 'IndicateAchievementProgress_IndicateUserAchievementProgress::MaxProgress_0' has a wrong offset!");
static_assert(offsetof(IndicateAchievementProgress_IndicateUserAchievementProgress, ReturnValue) == 0x000018, "Member 'IndicateAchievementProgress_IndicateUserAchievementProgress::ReturnValue' has a wrong offset!");

// Function StatsIntegration.RequestStatsAndAchievements.RequestUserStatsAndAchievements
// 0x0008 (0x0008 - 0x0000)
struct RequestStatsAndAchievements_RequestUserStatsAndAchievements final
{
public:
	class URequestStatsAndAchievements*           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RequestStatsAndAchievements_RequestUserStatsAndAchievements) == 0x000008, "Wrong alignment on RequestStatsAndAchievements_RequestUserStatsAndAchievements");
static_assert(sizeof(RequestStatsAndAchievements_RequestUserStatsAndAchievements) == 0x000008, "Wrong size on RequestStatsAndAchievements_RequestUserStatsAndAchievements");
static_assert(offsetof(RequestStatsAndAchievements_RequestUserStatsAndAchievements, ReturnValue) == 0x000000, "Member 'RequestStatsAndAchievements_RequestUserStatsAndAchievements::ReturnValue' has a wrong offset!");

// Function StatsIntegration.ResetAllStatsAndAchievements.ResetUserStatsAndAchievements
// 0x0010 (0x0010 - 0x0000)
struct ResetAllStatsAndAchievements_ResetUserStatsAndAchievements final
{
public:
	bool                                          bAchievementsToo;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UResetAllStatsAndAchievements*          ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResetAllStatsAndAchievements_ResetUserStatsAndAchievements) == 0x000008, "Wrong alignment on ResetAllStatsAndAchievements_ResetUserStatsAndAchievements");
static_assert(sizeof(ResetAllStatsAndAchievements_ResetUserStatsAndAchievements) == 0x000010, "Wrong size on ResetAllStatsAndAchievements_ResetUserStatsAndAchievements");
static_assert(offsetof(ResetAllStatsAndAchievements_ResetUserStatsAndAchievements, bAchievementsToo) == 0x000000, "Member 'ResetAllStatsAndAchievements_ResetUserStatsAndAchievements::bAchievementsToo' has a wrong offset!");
static_assert(offsetof(ResetAllStatsAndAchievements_ResetUserStatsAndAchievements, ReturnValue) == 0x000008, "Member 'ResetAllStatsAndAchievements_ResetUserStatsAndAchievements::ReturnValue' has a wrong offset!");

// Function StatsIntegration.SetAchievementData.ClearAchievement
// 0x0018 (0x0018 - 0x0000)
struct SetAchievementData_ClearAchievement final
{
public:
	class FString                                 AchievementAPIName;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SetAchievementData_ClearAchievement) == 0x000008, "Wrong alignment on SetAchievementData_ClearAchievement");
static_assert(sizeof(SetAchievementData_ClearAchievement) == 0x000018, "Wrong size on SetAchievementData_ClearAchievement");
static_assert(offsetof(SetAchievementData_ClearAchievement, AchievementAPIName) == 0x000000, "Member 'SetAchievementData_ClearAchievement::AchievementAPIName' has a wrong offset!");
static_assert(offsetof(SetAchievementData_ClearAchievement, ReturnValue) == 0x000010, "Member 'SetAchievementData_ClearAchievement::ReturnValue' has a wrong offset!");

// Function StatsIntegration.SetAchievementData.SetAchievement
// 0x0018 (0x0018 - 0x0000)
struct SetAchievementData_SetAchievement final
{
public:
	class FString                                 AchievementAPIName;                                // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SetAchievementData_SetAchievement) == 0x000008, "Wrong alignment on SetAchievementData_SetAchievement");
static_assert(sizeof(SetAchievementData_SetAchievement) == 0x000018, "Wrong size on SetAchievementData_SetAchievement");
static_assert(offsetof(SetAchievementData_SetAchievement, AchievementAPIName) == 0x000000, "Member 'SetAchievementData_SetAchievement::AchievementAPIName' has a wrong offset!");
static_assert(offsetof(SetAchievementData_SetAchievement, ReturnValue) == 0x000010, "Member 'SetAchievementData_SetAchievement::ReturnValue' has a wrong offset!");

// Function StatsIntegration.SetStoredStats.SetStoredStat
// 0x0028 (0x0028 - 0x0000)
struct SetStoredStats_SetStoredStat final
{
public:
	class FString                                 APIStatName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESteamStatType                                StatType;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FloatValue;                                        // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IntegerValue;                                      // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SessionLength;                                     // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SetStoredStats_SetStoredStat) == 0x000008, "Wrong alignment on SetStoredStats_SetStoredStat");
static_assert(sizeof(SetStoredStats_SetStoredStat) == 0x000028, "Wrong size on SetStoredStats_SetStoredStat");
static_assert(offsetof(SetStoredStats_SetStoredStat, APIStatName) == 0x000000, "Member 'SetStoredStats_SetStoredStat::APIStatName' has a wrong offset!");
static_assert(offsetof(SetStoredStats_SetStoredStat, StatType) == 0x000010, "Member 'SetStoredStats_SetStoredStat::StatType' has a wrong offset!");
static_assert(offsetof(SetStoredStats_SetStoredStat, FloatValue) == 0x000014, "Member 'SetStoredStats_SetStoredStat::FloatValue' has a wrong offset!");
static_assert(offsetof(SetStoredStats_SetStoredStat, IntegerValue) == 0x000018, "Member 'SetStoredStats_SetStoredStat::IntegerValue' has a wrong offset!");
static_assert(offsetof(SetStoredStats_SetStoredStat, SessionLength) == 0x00001C, "Member 'SetStoredStats_SetStoredStat::SessionLength' has a wrong offset!");
static_assert(offsetof(SetStoredStats_SetStoredStat, ReturnValue) == 0x000020, "Member 'SetStoredStats_SetStoredStat::ReturnValue' has a wrong offset!");

// Function StatsIntegration.SetStoredStats.SetStoredStats
// 0x0018 (0x0018 - 0x0000)
struct SetStoredStats_SetStoredStats final
{
public:
	TArray<struct FSteamStat>                     SteamStatsIn;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         SessionLength;                                     // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SetStoredStats_SetStoredStats) == 0x000008, "Wrong alignment on SetStoredStats_SetStoredStats");
static_assert(sizeof(SetStoredStats_SetStoredStats) == 0x000018, "Wrong size on SetStoredStats_SetStoredStats");
static_assert(offsetof(SetStoredStats_SetStoredStats, SteamStatsIn) == 0x000000, "Member 'SetStoredStats_SetStoredStats::SteamStatsIn' has a wrong offset!");
static_assert(offsetof(SetStoredStats_SetStoredStats, SessionLength) == 0x000010, "Member 'SetStoredStats_SetStoredStats::SessionLength' has a wrong offset!");
static_assert(offsetof(SetStoredStats_SetStoredStats, ReturnValue) == 0x000014, "Member 'SetStoredStats_SetStoredStats::ReturnValue' has a wrong offset!");

// Function StatsIntegration.StoreStatsAndAchievements.StoreUserStatsAndAchievements
// 0x0008 (0x0008 - 0x0000)
struct StoreStatsAndAchievements_StoreUserStatsAndAchievements final
{
public:
	class UStoreStatsAndAchievements*             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StoreStatsAndAchievements_StoreUserStatsAndAchievements) == 0x000008, "Wrong alignment on StoreStatsAndAchievements_StoreUserStatsAndAchievements");
static_assert(sizeof(StoreStatsAndAchievements_StoreUserStatsAndAchievements) == 0x000008, "Wrong size on StoreStatsAndAchievements_StoreUserStatsAndAchievements");
static_assert(offsetof(StoreStatsAndAchievements_StoreUserStatsAndAchievements, ReturnValue) == 0x000000, "Member 'StoreStatsAndAchievements_StoreUserStatsAndAchievements::ReturnValue' has a wrong offset!");

}

