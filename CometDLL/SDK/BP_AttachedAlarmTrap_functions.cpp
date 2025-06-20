﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AttachedAlarmTrap

#include "Basic.hpp"

#include "BP_AttachedAlarmTrap_classes.hpp"
#include "BP_AttachedAlarmTrap_parameters.hpp"


namespace SDK
{

// Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.ExecuteUbergraph_BP_AttachedAlarmTrap
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedAlarmTrap_C::ExecuteUbergraph_BP_AttachedAlarmTrap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedAlarmTrap_C", "ExecuteUbergraph_BP_AttachedAlarmTrap");

	Params::BP_AttachedAlarmTrap_C_ExecuteUbergraph_BP_AttachedAlarmTrap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.OnTrapDisarmed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             DisarmedBy                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedAlarmTrap_C::OnTrapDisarmed(class AReadyOrNotCharacter* DisarmedBy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedAlarmTrap_C", "OnTrapDisarmed");

	Params::BP_AttachedAlarmTrap_C_OnTrapDisarmed Parms{};

	Parms.DisarmedBy = DisarmedBy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AttachedAlarmTrap.BP_AttachedAlarmTrap_C.OnTrapTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             TriggeredBy                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedAlarmTrap_C::OnTrapTriggered(class AReadyOrNotCharacter* TriggeredBy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedAlarmTrap_C", "OnTrapTriggered");

	Params::BP_AttachedAlarmTrap_C_OnTrapTriggered Parms{};

	Parms.TriggeredBy = TriggeredBy;

	UObject::ProcessEvent(Func, &Parms);
}

}

