﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PPR_BulletBlockedBySAPIPlate

#include "Basic.hpp"

#include "PPR_BulletBlockedBySAPIPlate_classes.hpp"
#include "PPR_BulletBlockedBySAPIPlate_parameters.hpp"


namespace SDK
{

// Function PPR_BulletBlockedBySAPIPlate.PPR_BulletBlockedBySAPIPlate_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPPR_BulletBlockedBySAPIPlate_C::EnablePostProcessEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PPR_BulletBlockedBySAPIPlate_C", "EnablePostProcessEffect");

	Params::PPR_BulletBlockedBySAPIPlate_C_EnablePostProcessEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

