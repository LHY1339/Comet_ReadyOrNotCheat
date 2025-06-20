﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlanningMap

#include "Basic.hpp"

#include "W_PlanningMap_classes.hpp"
#include "W_PlanningMap_parameters.hpp"


namespace SDK
{

// Function W_PlanningMap.W_PlanningMap_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PlanningMap_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlanningMap.W_PlanningMap_C.BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PlanningMap_C::BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "BndEvt__MapInteraction_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlanningMap.W_PlanningMap_C.BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UW_PlanningMap_C::BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_3_OnSetSpawnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlanningMap.W_PlanningMap_C.BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature
// (BlueprintEvent)

void UW_PlanningMap_C::BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "BndEvt__SpawnDetailsPanel_K2Node_ComponentBoundEvent_4_OnDetailPanelHide__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlanningMap.W_PlanningMap_C.ChangeFloor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                      Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::ChangeFloor(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "ChangeFloor");

	Params::W_PlanningMap_C_ChangeFloor Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlanningMap.W_PlanningMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_PlanningMap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlanningMap.W_PlanningMap_C.ExecuteUbergraph_W_PlanningMap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::ExecuteUbergraph_W_PlanningMap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "ExecuteUbergraph_W_PlanningMap");

	Params::W_PlanningMap_C_ExecuteUbergraph_W_PlanningMap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlanningMap.W_PlanningMap_C.ExitMap
// (BlueprintCallable, BlueprintEvent)

void UW_PlanningMap_C::ExitMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "ExitMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlanningMap.W_PlanningMap_C.GetDetailPanePosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FVector2D&                 PointScreenPosition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UW_PlanningMap_C::GetDetailPanePosition(const struct FVector2D& PointScreenPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "GetDetailPanePosition");

	Params::W_PlanningMap_C_GetDetailPanePosition Parms{};

	Parms.PointScreenPosition = std::move(PointScreenPosition);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_PlanningMap.W_PlanningMap_C.GetSpawnPointInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const class UW_PlanningMap_BreachPoint_C*&BreachPointButton                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FSpawnPoints*                    SpawnPointInfo                                         (Parm, OutParm)
// int32*                                  Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::GetSpawnPointInfo(const class UW_PlanningMap_BreachPoint_C*& BreachPointButton, struct FSpawnPoints* SpawnPointInfo, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "GetSpawnPointInfo");

	Params::W_PlanningMap_C_GetSpawnPointInfo Parms{};

	Parms.BreachPointButton = BreachPointButton;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnPointInfo != nullptr)
		*SpawnPointInfo = std::move(Parms.SpawnPointInfo);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function W_PlanningMap.W_PlanningMap_C.InitPlanningMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_UI_PlanningMap_C*             PlanningMapActor_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::InitPlanningMap(class ABP_UI_PlanningMap_C* PlanningMapActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "InitPlanningMap");

	Params::W_PlanningMap_C_InitPlanningMap Parms{};

	Parms.PlanningMapActor_0 = PlanningMapActor_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlanningMap.W_PlanningMap_C.MapFloorUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Floor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::MapFloorUpdated(int32 Floor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "MapFloorUpdated");

	Params::W_PlanningMap_C_MapFloorUpdated Parms{};

	Parms.Floor = Floor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlanningMap.W_PlanningMap_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "OnDragCancelled");

	Params::W_PlanningMap_C_OnDragCancelled Parms{};

	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlanningMap.W_PlanningMap_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**              Operation                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "OnDragDetected");

	Params::W_PlanningMap_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function W_PlanningMap.W_PlanningMap_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UW_PlanningMap_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "OnMouseButtonDown");

	Params::W_PlanningMap_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_PlanningMap.W_PlanningMap_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UW_PlanningMap_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "OnMouseButtonUp");

	Params::W_PlanningMap_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_PlanningMap.W_PlanningMap_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UW_PlanningMap_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "OnMouseMove");

	Params::W_PlanningMap_C_OnMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_PlanningMap.W_PlanningMap_C.OpenPlanningMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_PlanningMap_C::OpenPlanningMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "OpenPlanningMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlanningMap.W_PlanningMap_C.PointClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PlanningMap_BreachPoint_C*     ClickedPoint                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::PointClicked(class UW_PlanningMap_BreachPoint_C* ClickedPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "PointClicked");

	Params::W_PlanningMap_C_PointClicked Parms{};

	Parms.ClickedPoint = ClickedPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlanningMap.W_PlanningMap_C.PointHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PlanningMap_BreachPoint_C*     HoveredPoint                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::PointHovered(class UW_PlanningMap_BreachPoint_C* HoveredPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "PointHovered");

	Params::W_PlanningMap_C_PointHovered Parms{};

	Parms.HoveredPoint = HoveredPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlanningMap.W_PlanningMap_C.RefreshSpawns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  ZoomValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::RefreshSpawns(double ZoomValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "RefreshSpawns");

	Params::W_PlanningMap_C_RefreshSpawns Parms{};

	Parms.ZoomValue = ZoomValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlanningMap.W_PlanningMap_C.UpdateMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FloorIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlanningMap_C::UpdateMap(int32 FloorIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "UpdateMap");

	Params::W_PlanningMap_C_UpdateMap Parms{};

	Parms.FloorIndex = FloorIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlanningMap.W_PlanningMap_C.UpdateSpawns
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>&SpawnPointComponents_0                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UW_PlanningMap_C::UpdateSpawns(const TArray<class UBP_UI_PlanningMap_SpawnPoint_C*>& SpawnPointComponents_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlanningMap_C", "UpdateSpawns");

	Params::W_PlanningMap_C_UpdateSpawns Parms{};

	Parms.SpawnPointComponents_0 = std::move(SpawnPointComponents_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

