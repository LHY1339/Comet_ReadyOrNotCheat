﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LoadoutInformationBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "ReadyOrNot_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LoadoutInformationBox.W_LoadoutInformationBox_C
// 0x0018 (0x0340 - 0x0328)
class UW_LoadoutInformationBox_C final : public ULoadout_InformationBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           AttachmentContainer;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EffectsContainer;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void CreateAttachmentElement(const TArray<class UWeaponAttachment*>& Attachments, const TArray<EWeaponAttachmentType>& AttachmentTypes);
	void CreateEffectsElement(const TArray<struct FAttachmentEffects>& AttachmentEffects);
	void ExecuteUbergraph_W_LoadoutInformationBox(int32 EntryPoint);
	void UpdateAmmoInfo(class FName AmmoName, const class FText& CategoryText);
	void UpdateNVGStyleInfo(ENVGStyle NVG_Style, const class FText& CategoryText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LoadoutInformationBox_C">();
	}
	static class UW_LoadoutInformationBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LoadoutInformationBox_C>();
	}
};
static_assert(alignof(UW_LoadoutInformationBox_C) == 0x000008, "Wrong alignment on UW_LoadoutInformationBox_C");
static_assert(sizeof(UW_LoadoutInformationBox_C) == 0x000340, "Wrong size on UW_LoadoutInformationBox_C");
static_assert(offsetof(UW_LoadoutInformationBox_C, UberGraphFrame) == 0x000328, "Member 'UW_LoadoutInformationBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationBox_C, AttachmentContainer) == 0x000330, "Member 'UW_LoadoutInformationBox_C::AttachmentContainer' has a wrong offset!");
static_assert(offsetof(UW_LoadoutInformationBox_C, EffectsContainer) == 0x000338, "Member 'UW_LoadoutInformationBox_C::EffectsContainer' has a wrong offset!");

}

