﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Loadout_Munition_SummaryEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ReadyOrNot_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Loadout_Munition_SummaryEntry.W_Loadout_Munition_SummaryEntry_C
// 0x0470 (0x0730 - 0x02C0)
class UW_Loadout_Munition_SummaryEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HB_Icons;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 img_Icon;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Tag;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                              txt_Tag;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             PrimaryMagazine;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             SidearmMagazine;                                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Shotgun;                                           // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Pepperball;                                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Taser;                                             // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             IconImage;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ItemData;                                          // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsAmmunition;                                      // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsPrimary;                                         // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_322[0x2];                                      // 0x0322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AmmoType;                                          // 0x0324(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         ItemCount;                                         // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateBrush                            BrushStyle;                                        // 0x0330(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSavedLoadout                          ActiveLoadout;                                     // 0x0400(0x02E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_Loadout_C*                           LoadoutWidget;                                     // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                   Ammo_Variety;                                      // 0x06F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Ammo_Caliber;                                      // 0x0708(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          HideCount;                                         // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BackPage(bool* Handled);
	void ChangePage(class FName PageName);
	void Construct();
	void CreateIcon();
	void ExecuteUbergraph_W_Loadout_Munition_SummaryEntry(int32 EntryPoint);
	void GetAmmoIcon();
	void GetAmmoInfo();
	void GetAmmoName(class FText* AmmoName);
	class UTexture2D* GetItemIcon();
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Hide(double Delay, bool Collapse);
	void PreConstruct(bool IsDesignTime);
	void Reveal(double Delay);
	void SetInputMode(bool IsGamepad);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget_0);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout_0);
	void UpdateAmmunition(class UClass* Weapon, class FName AmmoType_0, int32 Count);
	void UpdateCurrentItemMap(const TMap<EItemCategory, class UClass*>& ItemCategory);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateItem(class UClass* ItemData_0, int32 Count);

	void GetFocusTarget(class UWidget** Focus) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Loadout_Munition_SummaryEntry_C">();
	}
	static class UW_Loadout_Munition_SummaryEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Loadout_Munition_SummaryEntry_C>();
	}
};
static_assert(alignof(UW_Loadout_Munition_SummaryEntry_C) == 0x000010, "Wrong alignment on UW_Loadout_Munition_SummaryEntry_C");
static_assert(sizeof(UW_Loadout_Munition_SummaryEntry_C) == 0x000730, "Wrong size on UW_Loadout_Munition_SummaryEntry_C");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, UberGraphFrame) == 0x0002C0, "Member 'UW_Loadout_Munition_SummaryEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, HB_Icons) == 0x0002C8, "Member 'UW_Loadout_Munition_SummaryEntry_C::HB_Icons' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, img_Icon) == 0x0002D0, "Member 'UW_Loadout_Munition_SummaryEntry_C::img_Icon' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, Tag) == 0x0002D8, "Member 'UW_Loadout_Munition_SummaryEntry_C::Tag' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, txt_Tag) == 0x0002E0, "Member 'UW_Loadout_Munition_SummaryEntry_C::txt_Tag' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, PrimaryMagazine) == 0x0002E8, "Member 'UW_Loadout_Munition_SummaryEntry_C::PrimaryMagazine' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, SidearmMagazine) == 0x0002F0, "Member 'UW_Loadout_Munition_SummaryEntry_C::SidearmMagazine' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, Shotgun) == 0x0002F8, "Member 'UW_Loadout_Munition_SummaryEntry_C::Shotgun' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, Pepperball) == 0x000300, "Member 'UW_Loadout_Munition_SummaryEntry_C::Pepperball' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, Taser) == 0x000308, "Member 'UW_Loadout_Munition_SummaryEntry_C::Taser' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, IconImage) == 0x000310, "Member 'UW_Loadout_Munition_SummaryEntry_C::IconImage' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, ItemData) == 0x000318, "Member 'UW_Loadout_Munition_SummaryEntry_C::ItemData' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, IsAmmunition) == 0x000320, "Member 'UW_Loadout_Munition_SummaryEntry_C::IsAmmunition' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, IsPrimary) == 0x000321, "Member 'UW_Loadout_Munition_SummaryEntry_C::IsPrimary' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, AmmoType) == 0x000324, "Member 'UW_Loadout_Munition_SummaryEntry_C::AmmoType' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, ItemCount) == 0x00032C, "Member 'UW_Loadout_Munition_SummaryEntry_C::ItemCount' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, BrushStyle) == 0x000330, "Member 'UW_Loadout_Munition_SummaryEntry_C::BrushStyle' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, ActiveLoadout) == 0x000400, "Member 'UW_Loadout_Munition_SummaryEntry_C::ActiveLoadout' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, LoadoutWidget) == 0x0006E8, "Member 'UW_Loadout_Munition_SummaryEntry_C::LoadoutWidget' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, Ammo_Variety) == 0x0006F0, "Member 'UW_Loadout_Munition_SummaryEntry_C::Ammo_Variety' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, Ammo_Caliber) == 0x000708, "Member 'UW_Loadout_Munition_SummaryEntry_C::Ammo_Caliber' has a wrong offset!");
static_assert(offsetof(UW_Loadout_Munition_SummaryEntry_C, HideCount) == 0x000720, "Member 'UW_Loadout_Munition_SummaryEntry_C::HideCount' has a wrong offset!");

}

