﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_WP_MP5SD

#include "Basic.hpp"

#include "ABP_WP_MP5SD_classes.hpp"
#include "ABP_WP_MP5SD_parameters.hpp"


namespace SDK
{

// Function ABP_WP_MP5SD.ABP_WP_MP5SD_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_WP_MP5SD_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WP_MP5SD_C", "AnimGraph");

	Params::ABP_WP_MP5SD_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_WP_MP5SD.ABP_WP_MP5SD_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)

void UABP_WP_MP5SD_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WP_MP5SD_C", "AnimNotify_DropSpeedReloadMagazine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_WP_MP5SD.ABP_WP_MP5SD_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)

void UABP_WP_MP5SD_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WP_MP5SD_C", "AnimNotify_ShowMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_WP_MP5SD.ABP_WP_MP5SD_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_WP_MP5SD_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WP_MP5SD_C", "BlueprintUpdateAnimation");

	Params::ABP_WP_MP5SD_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_WP_MP5SD.ABP_WP_MP5SD_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WP_MP5SD_AnimGraphNode_ModifyBone_4B3FE2DC47FDF5A9389FB38E5E2FB589
// (BlueprintEvent)

void UABP_WP_MP5SD_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WP_MP5SD_AnimGraphNode_ModifyBone_4B3FE2DC47FDF5A9389FB38E5E2FB589()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WP_MP5SD_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WP_MP5SD_AnimGraphNode_ModifyBone_4B3FE2DC47FDF5A9389FB38E5E2FB589");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_WP_MP5SD.ABP_WP_MP5SD_C.ExecuteUbergraph_ABP_WP_MP5SD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_WP_MP5SD_C::ExecuteUbergraph_ABP_WP_MP5SD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_WP_MP5SD_C", "ExecuteUbergraph_ABP_WP_MP5SD");

	Params::ABP_WP_MP5SD_C_ExecuteUbergraph_ABP_WP_MP5SD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

