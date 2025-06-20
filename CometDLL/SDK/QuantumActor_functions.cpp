﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuantumActor

#include "Basic.hpp"

#include "QuantumActor_classes.hpp"
#include "QuantumActor_parameters.hpp"


namespace SDK
{

// Function QuantumActor.QuantumActor_C.ExecuteUbergraph_QuantumActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuantumActor_C::ExecuteUbergraph_QuantumActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuantumActor_C", "ExecuteUbergraph_QuantumActor");

	Params::QuantumActor_C_ExecuteUbergraph_QuantumActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuantumActor.QuantumActor_C.InpActEvt_CameraMod_Camera_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AQuantumActor_C::InpActEvt_CameraMod_Camera_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuantumActor_C", "InpActEvt_CameraMod_Camera_K2Node_InputActionEvent_1");

	Params::QuantumActor_C_InpActEvt_CameraMod_Camera_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuantumActor.QuantumActor_C.InpActEvt_CameraMod_Menu_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AQuantumActor_C::InpActEvt_CameraMod_Menu_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuantumActor_C", "InpActEvt_CameraMod_Menu_K2Node_InputActionEvent_3");

	Params::QuantumActor_C_InpActEvt_CameraMod_Menu_K2Node_InputActionEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuantumActor.QuantumActor_C.InpActEvt_CameraMod_Pause_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AQuantumActor_C::InpActEvt_CameraMod_Pause_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuantumActor_C", "InpActEvt_CameraMod_Pause_K2Node_InputActionEvent_2");

	Params::QuantumActor_C_InpActEvt_CameraMod_Pause_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuantumActor.QuantumActor_C.InpActEvt_CameraMod_Screenshot_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AQuantumActor_C::InpActEvt_CameraMod_Screenshot_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuantumActor_C", "InpActEvt_CameraMod_Screenshot_K2Node_InputActionEvent_0");

	Params::QuantumActor_C_InpActEvt_CameraMod_Screenshot_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuantumActor.QuantumActor_C.MoveLookAxisMappings
// (BlueprintCallable, BlueprintEvent)

void AQuantumActor_C::MoveLookAxisMappings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuantumActor_C", "MoveLookAxisMappings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuantumActor.QuantumActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AQuantumActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuantumActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuantumActor.QuantumActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuantumActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuantumActor_C", "ReceiveTick");

	Params::QuantumActor_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

