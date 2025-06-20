﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_WeaponWheel_ItemStat

#include "Basic.hpp"

#include "W_WeaponWheel_ItemStat_classes.hpp"
#include "W_WeaponWheel_ItemStat_parameters.hpp"


namespace SDK
{

// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.ExecuteUbergraph_W_WeaponWheel_ItemStat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_C::ExecuteUbergraph_W_WeaponWheel_ItemStat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "ExecuteUbergraph_W_WeaponWheel_ItemStat");

	Params::W_WeaponWheel_ItemStat_C_ExecuteUbergraph_W_WeaponWheel_ItemStat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.OnRefresh
// (BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_C::OnRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "OnRefresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.OnWheelCreated
// (BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_C::OnWheelCreated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "OnWheelCreated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "PreConstruct");

	Params::W_WeaponWheel_ItemStat_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.SetupFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_C::SetupFontSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "SetupFontSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.SetupWidgetSize
// (Public, BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_C::SetupWidgetSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "SetupWidgetSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.StartAnimating
// (Public, BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_C::StartAnimating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "StartAnimating");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.StopAnimating
// (Public, BlueprintCallable, BlueprintEvent)

void UW_WeaponWheel_ItemStat_C::StopAnimating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "StopAnimating");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "Tick");

	Params::W_WeaponWheel_ItemStat_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

