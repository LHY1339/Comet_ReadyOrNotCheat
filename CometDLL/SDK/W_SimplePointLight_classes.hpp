﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SimplePointLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SimplePointLight.W_SimplePointLight_C
// 0x0050 (0x0310 - 0x02C0)
class UW_SimplePointLight_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                DeleteButton;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          EditableName;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                FocusOnButton;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Name_0;                                            // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ACustomPointLight_C*                    PointLightRef;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AP_DebugPawn_C*                         DebugCameraRef;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FString>                         Alphabet;                                          // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__W_SimplePointLight_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_SimplePointLight_DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_SimplePointLight_EditableName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void Construct();
	void ExecuteUbergraph_W_SimplePointLight(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SimplePointLight_C">();
	}
	static class UW_SimplePointLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SimplePointLight_C>();
	}
};
static_assert(alignof(UW_SimplePointLight_C) == 0x000008, "Wrong alignment on UW_SimplePointLight_C");
static_assert(sizeof(UW_SimplePointLight_C) == 0x000310, "Wrong size on UW_SimplePointLight_C");
static_assert(offsetof(UW_SimplePointLight_C, UberGraphFrame) == 0x0002C0, "Member 'UW_SimplePointLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SimplePointLight_C, DeleteButton) == 0x0002C8, "Member 'UW_SimplePointLight_C::DeleteButton' has a wrong offset!");
static_assert(offsetof(UW_SimplePointLight_C, EditableName) == 0x0002D0, "Member 'UW_SimplePointLight_C::EditableName' has a wrong offset!");
static_assert(offsetof(UW_SimplePointLight_C, FocusOnButton) == 0x0002D8, "Member 'UW_SimplePointLight_C::FocusOnButton' has a wrong offset!");
static_assert(offsetof(UW_SimplePointLight_C, Name_0) == 0x0002E0, "Member 'UW_SimplePointLight_C::Name_0' has a wrong offset!");
static_assert(offsetof(UW_SimplePointLight_C, PointLightRef) == 0x0002F0, "Member 'UW_SimplePointLight_C::PointLightRef' has a wrong offset!");
static_assert(offsetof(UW_SimplePointLight_C, DebugCameraRef) == 0x0002F8, "Member 'UW_SimplePointLight_C::DebugCameraRef' has a wrong offset!");
static_assert(offsetof(UW_SimplePointLight_C, Alphabet) == 0x000300, "Member 'UW_SimplePointLight_C::Alphabet' has a wrong offset!");

}

