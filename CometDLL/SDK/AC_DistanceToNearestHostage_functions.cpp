﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_DistanceToNearestHostage

#include "Basic.hpp"

#include "AC_DistanceToNearestHostage_classes.hpp"
#include "AC_DistanceToNearestHostage_parameters.hpp"


namespace SDK
{

// Function AC_DistanceToNearestHostage.AC_DistanceToNearestHostage_C.CalculateCurve
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   X                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_DistanceToNearestHostage_C::CalculateCurve(float X) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_DistanceToNearestHostage_C", "CalculateCurve");

	Params::AC_DistanceToNearestHostage_C_CalculateCurve Parms{};

	Parms.X = X;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AC_DistanceToNearestHostage.AC_DistanceToNearestHostage_C.FindCiviliansInRange
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACyberneticCharacter*             Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ACivilianCharacter*>*      Return_Value                                           (Parm, OutParm)

void UAC_DistanceToNearestHostage_C::FindCiviliansInRange(class ACyberneticCharacter* Start, TArray<class ACivilianCharacter*>* Return_Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_DistanceToNearestHostage_C", "FindCiviliansInRange");

	Params::AC_DistanceToNearestHostage_C_FindCiviliansInRange Parms{};

	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);
}


// Function AC_DistanceToNearestHostage.AC_DistanceToNearestHostage_C.Score
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FAIActionDecisionContext&  Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool*                                   bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_DistanceToNearestHostage_C::Score(const struct FAIActionDecisionContext& Context, bool* bSuccess) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_DistanceToNearestHostage_C", "Score");

	Params::AC_DistanceToNearestHostage_C_Score Parms{};

	Parms.Context = std::move(Context);

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;
}

}

