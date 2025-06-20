﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AG_ExposedToAggressiveNoise

#include "Basic.hpp"

#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AG_ExposedToAggressiveNoise.AG_ExposedToAggressiveNoise_C
// 0x0030 (0x0058 - 0x0028)
class UAG_ExposedToAggressiveNoise_C final : public UAIActionGate
{
public:
	TArray<class FName>                           ExcludedTags;                                      // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	double                                        Since_Seconds;                                     // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        Max_Distance;                                      // 0x0040(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TargetType;                                        // 0x0048(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bExclusive;                                        // 0x004C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Tag;                                               // 0x0050(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	bool CanOpen(const struct FAIActionDecisionContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AG_ExposedToAggressiveNoise_C">();
	}
	static class UAG_ExposedToAggressiveNoise_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAG_ExposedToAggressiveNoise_C>();
	}
};
static_assert(alignof(UAG_ExposedToAggressiveNoise_C) == 0x000008, "Wrong alignment on UAG_ExposedToAggressiveNoise_C");
static_assert(sizeof(UAG_ExposedToAggressiveNoise_C) == 0x000058, "Wrong size on UAG_ExposedToAggressiveNoise_C");
static_assert(offsetof(UAG_ExposedToAggressiveNoise_C, ExcludedTags) == 0x000028, "Member 'UAG_ExposedToAggressiveNoise_C::ExcludedTags' has a wrong offset!");
static_assert(offsetof(UAG_ExposedToAggressiveNoise_C, Since_Seconds) == 0x000038, "Member 'UAG_ExposedToAggressiveNoise_C::Since_Seconds' has a wrong offset!");
static_assert(offsetof(UAG_ExposedToAggressiveNoise_C, Max_Distance) == 0x000040, "Member 'UAG_ExposedToAggressiveNoise_C::Max_Distance' has a wrong offset!");
static_assert(offsetof(UAG_ExposedToAggressiveNoise_C, TargetType) == 0x000048, "Member 'UAG_ExposedToAggressiveNoise_C::TargetType' has a wrong offset!");
static_assert(offsetof(UAG_ExposedToAggressiveNoise_C, bExclusive) == 0x00004C, "Member 'UAG_ExposedToAggressiveNoise_C::bExclusive' has a wrong offset!");
static_assert(offsetof(UAG_ExposedToAggressiveNoise_C, Tag) == 0x000050, "Member 'UAG_ExposedToAggressiveNoise_C::Tag' has a wrong offset!");

}

