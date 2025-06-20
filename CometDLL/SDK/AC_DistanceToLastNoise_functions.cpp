﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_DistanceToLastNoise

#include "Basic.hpp"

#include "AC_DistanceToLastNoise_classes.hpp"
#include "AC_DistanceToLastNoise_parameters.hpp"


namespace SDK
{

// Function AC_DistanceToLastNoise.AC_DistanceToLastNoise_C.DetermineNoiseScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FExposedToNoise&           Noise                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double*                                 Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_DistanceToLastNoise_C::DetermineNoiseScore(const struct FExposedToNoise& Noise, double* Return_Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_DistanceToLastNoise_C", "DetermineNoiseScore");

	Params::AC_DistanceToLastNoise_C_DetermineNoiseScore Parms{};

	Parms.Noise = std::move(Noise);

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function AC_DistanceToLastNoise.AC_DistanceToLastNoise_C.Score
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FAIActionDecisionContext&  Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool*                                   bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_DistanceToLastNoise_C::Score(const struct FAIActionDecisionContext& Context, bool* bSuccess) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_DistanceToLastNoise_C", "Score");

	Params::AC_DistanceToLastNoise_C_Score Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;
}

}

