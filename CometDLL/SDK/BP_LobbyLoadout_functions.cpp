﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LobbyLoadout

#include "Basic.hpp"

#include "BP_LobbyLoadout_classes.hpp"
#include "BP_LobbyLoadout_parameters.hpp"


namespace SDK
{

// Function BP_LobbyLoadout.BP_LobbyLoadout_C.DoubleTapInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             InteractInstigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           InInteractableComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "DoubleTapInteract");

	Params::BP_LobbyLoadout_C_DoubleTapInteract Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.EndFire
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             InteractInstigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           InInteractableComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::EndFire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "EndFire");

	Params::BP_LobbyLoadout_C_EndFire Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.EndInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             InteractInstigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           InInteractableComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::EndInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "EndInteract");

	Params::BP_LobbyLoadout_C_EndInteract Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.ExecuteUbergraph_BP_LobbyLoadout
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::ExecuteUbergraph_BP_LobbyLoadout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "ExecuteUbergraph_BP_LobbyLoadout");

	Params::BP_LobbyLoadout_C_ExecuteUbergraph_BP_LobbyLoadout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.Fire
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             InteractInstigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           InInteractableComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::Fire(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "Fire");

	Params::BP_LobbyLoadout_C_Fire Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             InteractInstigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           InInteractableComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "Interact");

	Params::BP_LobbyLoadout_C_Interact Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.MeleeInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             InteractInstigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           InInteractableComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::MeleeInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "MeleeInteract");

	Params::BP_LobbyLoadout_C_MeleeInteract Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.OnFocusGain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             InteractInstigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           InInteractableComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "OnFocusGain");

	Params::BP_LobbyLoadout_C_OnFocusGain Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.OnFocusLost
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             InteractInstigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*           InInteractableComponent                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "OnFocusLost");

	Params::BP_LobbyLoadout_C_OnFocusLost Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LobbyLoadout_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "ReceiveActorBeginOverlap");

	Params::BP_LobbyLoadout_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LobbyLoadout_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_LobbyLoadout_C::CanInteract() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "CanInteract");

	Params::BP_LobbyLoadout_C_CanInteract Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.CanInteractThroughHitActors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_LobbyLoadout_C::CanInteractThroughHitActors(const struct FHitResult& Hit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "CanInteractThroughHitActors");

	Params::BP_LobbyLoadout_C_CanInteractThroughHitActors Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineActionText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABP_LobbyLoadout_C::DetermineActionText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "DetermineActionText");

	Params::BP_LobbyLoadout_C_DetermineActionText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineAnimatedIcon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_LobbyLoadout_C::DetermineAnimatedIcon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "DetermineAnimatedIcon");

	Params::BP_LobbyLoadout_C_DetermineAnimatedIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineCurrentProgress
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_LobbyLoadout_C::DetermineCurrentProgress() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "DetermineCurrentProgress");

	Params::BP_LobbyLoadout_C_DetermineCurrentProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineInputEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EInputEvent                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EInputEvent ABP_LobbyLoadout_C::DetermineInputEvent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "DetermineInputEvent");

	Params::BP_LobbyLoadout_C_DetermineInputEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.DetermineInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_LobbyLoadout_C::DetermineInteractionDistance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "DetermineInteractionDistance");

	Params::BP_LobbyLoadout_C_DetermineInteractionDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_LobbyLoadout.BP_LobbyLoadout_C.GetInteractableComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInteractableComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UInteractableComponent* ABP_LobbyLoadout_C::GetInteractableComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LobbyLoadout_C", "GetInteractableComponent");

	Params::BP_LobbyLoadout_C_GetInteractableComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

