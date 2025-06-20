﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AttachedFlashbangTrap

#include "Basic.hpp"

#include "BP_AttachedFlashbangTrap_classes.hpp"
#include "BP_AttachedFlashbangTrap_parameters.hpp"


namespace SDK
{

// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.ExecuteUbergraph_BP_AttachedFlashbangTrap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedFlashbangTrap_C::ExecuteUbergraph_BP_AttachedFlashbangTrap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "ExecuteUbergraph_BP_AttachedFlashbangTrap");

	Params::BP_AttachedFlashbangTrap_C_ExecuteUbergraph_BP_AttachedFlashbangTrap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.Explode Trap
// (BlueprintCallable, BlueprintEvent)

void ABP_AttachedFlashbangTrap_C::Explode_Trap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "Explode Trap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.OnTrapTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             TriggeredBy                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedFlashbangTrap_C::OnTrapTriggered(class AReadyOrNotCharacter* TriggeredBy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "OnTrapTriggered");

	Params::BP_AttachedFlashbangTrap_C_OnTrapTriggered Parms{};

	Parms.TriggeredBy = TriggeredBy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UDamageType*                DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   ShotFromDirection                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AttachedFlashbangTrap_C::ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "ReceivePointDamage");

	Params::BP_AttachedFlashbangTrap_C_ReceivePointDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.ShotFromDirection = std::move(ShotFromDirection);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitInfo = std::move(HitInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DamageReceived                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UDamageType*                DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Origin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedFlashbangTrap_C::ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "ReceiveRadialDamage");

	Params::BP_AttachedFlashbangTrap_C_ReceiveRadialDamage Parms{};

	Parms.DamageReceived = DamageReceived;
	Parms.DamageType = DamageType;
	Parms.Origin = std::move(Origin);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.Server_ApplyDamage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*             InTriggeredBy                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedFlashbangTrap_C::Server_ApplyDamage(class AReadyOrNotCharacter* InTriggeredBy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "Server_ApplyDamage");

	Params::BP_AttachedFlashbangTrap_C_Server_ApplyDamage Parms{};

	Parms.InTriggeredBy = InTriggeredBy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.CanApplyDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// const class UDamageType*                InDamageType                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool*                                   Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedFlashbangTrap_C::CanApplyDamage(const class UDamageType* InDamageType, bool* Return_Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "CanApplyDamage");

	Params::BP_AttachedFlashbangTrap_C_CanApplyDamage Parms{};

	Parms.InDamageType = InDamageType;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

}

