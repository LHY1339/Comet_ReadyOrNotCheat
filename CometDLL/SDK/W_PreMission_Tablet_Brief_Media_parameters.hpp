﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PreMission_Tablet_Brief_Media

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "ReadyOrNot_structs.hpp"


namespace SDK::Params
{

// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.ExecuteUbergraph_W_PreMission_Tablet_Brief_Media
// 0x0010 (0x0010 - 0x0000)
struct W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Briefing_Media_GalleryEntry_C*       K2Node_CustomEvent_Gallery_Entry;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media) == 0x000008, "Wrong alignment on W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media");
static_assert(sizeof(W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media) == 0x000010, "Wrong size on W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media, EntryPoint) == 0x000000, "Member 'W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media, K2Node_CustomEvent_Gallery_Entry) == 0x000008, "Member 'W_PreMission_Tablet_Brief_Media_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_Media::K2Node_CustomEvent_Gallery_Entry' has a wrong offset!");

// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.OnEntryClicked
// 0x0008 (0x0008 - 0x0000)
struct W_PreMission_Tablet_Brief_Media_C_OnEntryClicked final
{
public:
	class UW_Briefing_Media_GalleryEntry_C*       Gallery_Entry;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_Tablet_Brief_Media_C_OnEntryClicked) == 0x000008, "Wrong alignment on W_PreMission_Tablet_Brief_Media_C_OnEntryClicked");
static_assert(sizeof(W_PreMission_Tablet_Brief_Media_C_OnEntryClicked) == 0x000008, "Wrong size on W_PreMission_Tablet_Brief_Media_C_OnEntryClicked");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_OnEntryClicked, Gallery_Entry) == 0x000000, "Member 'W_PreMission_Tablet_Brief_Media_C_OnEntryClicked::Gallery_Entry' has a wrong offset!");

// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.PopulateGallery
// 0x0108 (0x0108 - 0x0000)
struct W_PreMission_Tablet_Brief_Media_C_PopulateGallery final
{
public:
	class UW_Briefing_Media_GalleryEntry_C*       FirstWidget;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Media_GalleryEntry_C*       NewWidget;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentIndex;                                      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMissionPhoto                          PhotoData;                                         // 0x0018(0x0058)(Edit, BlueprintVisible)
	class UW_Briefing_Media_GalleryEntry_C*       CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UW_Briefing_Media_GalleryEntry_C* Gallery_Entry)> K2Node_CreateDelegate_OutputDelegate; // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMissionPhoto                          CallFunc_Array_Get_Item;                           // 0x00A0(0x0058)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery) == 0x000008, "Wrong alignment on W_PreMission_Tablet_Brief_Media_C_PopulateGallery");
static_assert(sizeof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery) == 0x000108, "Wrong size on W_PreMission_Tablet_Brief_Media_C_PopulateGallery");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, FirstWidget) == 0x000000, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::FirstWidget' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, NewWidget) == 0x000008, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::NewWidget' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, CurrentIndex) == 0x000010, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::CurrentIndex' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, PhotoData) == 0x000018, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::PhotoData' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, CallFunc_Create_ReturnValue) == 0x000070, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, Temp_int_Array_Index_Variable) == 0x000080, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, CallFunc_IsValid_ReturnValue) == 0x000084, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000098, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, CallFunc_Array_Length_ReturnValue) == 0x0000F8, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, CallFunc_Less_IntInt_ReturnValue) == 0x0000FC, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_PopulateGallery, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000100, "Member 'W_PreMission_Tablet_Brief_Media_C_PopulateGallery::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.SelectGalleryImage
// 0x0038 (0x0038 - 0x0000)
struct W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage final
{
public:
	class UW_Briefing_Media_GalleryEntry_C*       GalleryEntry;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_Briefing_Media_GalleryEntry_C*> CallFunc_WidgetGetChildrenOfClass_ChildWidgets;  // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UW_Briefing_Media_GalleryEntry_C*       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage) == 0x000008, "Wrong alignment on W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage");
static_assert(sizeof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage) == 0x000038, "Wrong size on W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, GalleryEntry) == 0x000000, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::GalleryEntry' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, Temp_int_Array_Index_Variable) == 0x000014, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, CallFunc_WidgetGetChildrenOfClass_ChildWidgets) == 0x000018, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::CallFunc_WidgetGetChildrenOfClass_ChildWidgets' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, CallFunc_Array_Get_Item) == 0x000028, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000034, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'W_PreMission_Tablet_Brief_Media_C_SelectGalleryImage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.SetGalleryImage
// 0x0080 (0x0080 - 0x0000)
struct W_PreMission_Tablet_Brief_Media_C_SetGalleryImage final
{
public:
	struct FMissionPhoto                          MissionPhotoData;                                  // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B[0x5];                                       // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_2;                  // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_3;                  // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage) == 0x000008, "Wrong alignment on W_PreMission_Tablet_Brief_Media_C_SetGalleryImage");
static_assert(sizeof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage) == 0x000080, "Wrong size on W_PreMission_Tablet_Brief_Media_C_SetGalleryImage");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, MissionPhotoData) == 0x000000, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::MissionPhotoData' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, Temp_bool_Variable) == 0x000058, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, Temp_byte_Variable) == 0x000059, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, Temp_byte_Variable_1) == 0x00005A, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000060, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_PlayAnimationForward_ReturnValue) == 0x000068, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_IsVisible_ReturnValue) == 0x000070, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_IsVisible_ReturnValue_1) == 0x000071, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_BooleanOR_ReturnValue) == 0x000072, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_IsVisible_ReturnValue_2) == 0x000073, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_IsVisible_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_Not_PreBool_ReturnValue) == 0x000074, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_IsVisible_ReturnValue_3) == 0x000075, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_IsVisible_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_Not_PreBool_ReturnValue_1) == 0x000076, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, CallFunc_BooleanOR_ReturnValue_1) == 0x000077, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_SetGalleryImage, K2Node_Select_Default) == 0x000078, "Member 'W_PreMission_Tablet_Brief_Media_C_SetGalleryImage::K2Node_Select_Default' has a wrong offset!");

// Function W_PreMission_Tablet_Brief_Media.W_PreMission_Tablet_Brief_Media_C.BP_GetDesiredFocusTarget
// 0x0018 (0x0018 - 0x0000)
struct W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget) == 0x000018, "Wrong size on W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'W_PreMission_Tablet_Brief_Media_C_BP_GetDesiredFocusTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

