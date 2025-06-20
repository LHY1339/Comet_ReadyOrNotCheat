﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendsList_Entry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ReadyOrNot_structs.hpp"
#include "AdvancedSessions_structs.hpp"


namespace SDK::Params
{

// Function FriendsList_Entry.FriendsList_Entry_C.BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct FriendsList_Entry_C_BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature final
{
public:
	class UW_Button_C*                            Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FriendsList_Entry_C_BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature) == 0x000008, "Wrong alignment on FriendsList_Entry_C_BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");
static_assert(sizeof(FriendsList_Entry_C_BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature) == 0x000008, "Wrong size on FriendsList_Entry_C_BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");
static_assert(offsetof(FriendsList_Entry_C_BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature, Button) == 0x000000, "Member 'FriendsList_Entry_C_BndEvt__FriendsList_Entry_btn_Join_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature::Button' has a wrong offset!");

// Function FriendsList_Entry.FriendsList_Entry_C.ExecuteUbergraph_FriendsList_Entry
// 0x02D0 (0x02D0 - 0x0000)
struct FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture_2;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate;          // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate_1;        // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture_1;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture;                        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate_2;        // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      Temp_object_Variable_1;                            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture_3;                      // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate_3;        // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0078(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	struct FFriend                                K2Node_CustomEvent_Friend;                         // 0x00D0(0x01A0)()
	class UW_Button_C*                            K2Node_ComponentBoundEvent_Button;                 // 0x0270(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConsole_ReturnValue;                    // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x027A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27B[0x5];                                      // 0x027B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncTaskDownloadImage*                CallFunc_DownloadImage_ReturnValue;                // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskDownloadImage*                CallFunc_DownloadImage_ReturnValue_1;              // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0292(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0293(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBPUniqueNetId                         CallFunc_CreateSteamIDFromString_ReturnValue;      // 0x0298(0x0020)()
	EBlueprintAsyncResultSwitch                   CallFunc_GetSteamFriendAvatar_Result;              // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetSteamFriendAvatar_ReturnValue;         // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry) == 0x000008, "Wrong alignment on FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry");
static_assert(sizeof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry) == 0x0002D0, "Wrong size on FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, EntryPoint) == 0x000000, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_CustomEvent_Texture_2) == 0x000008, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_CustomEvent_Texture_2' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, Temp_object_Variable) == 0x000020, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_CustomEvent_Texture_1) == 0x000038, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_CustomEvent_Texture_1' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_CustomEvent_Texture) == 0x000040, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, Temp_object_Variable_1) == 0x000058, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_CustomEvent_Texture_3) == 0x000060, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_CustomEvent_Texture_3' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_CreateDelegate_OutputDelegate_3) == 0x000068, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_Event_MyGeometry) == 0x000078, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_Event_InDeltaTime) == 0x0000B0, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_CustomEvent_Friend) == 0x0000D0, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_CustomEvent_Friend' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_ComponentBoundEvent_Button) == 0x000270, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_IsConsole_ReturnValue) == 0x000278, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_IsConsole_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_IsValid_ReturnValue) == 0x000279, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_IsValid_ReturnValue_1) == 0x00027A, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_DownloadImage_ReturnValue) == 0x000280, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_DownloadImage_ReturnValue_1) == 0x000288, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_DownloadImage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_IsEmpty_ReturnValue) == 0x000290, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_IsValid_ReturnValue_2) == 0x000291, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_IsValid_ReturnValue_3) == 0x000292, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_IsEmpty_ReturnValue_1) == 0x000293, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_CreateSteamIDFromString_ReturnValue) == 0x000298, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_CreateSteamIDFromString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_GetSteamFriendAvatar_Result) == 0x0002B8, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_GetSteamFriendAvatar_Result' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, CallFunc_GetSteamFriendAvatar_ReturnValue) == 0x0002C0, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::CallFunc_GetSteamFriendAvatar_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry, K2Node_SwitchEnum_CmpSuccess) == 0x0002C8, "Member 'FriendsList_Entry_C_ExecuteUbergraph_FriendsList_Entry::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function FriendsList_Entry.FriendsList_Entry_C.GetColorAndOpacity_0
// 0x0068 (0x0068 - 0x0000)
struct FriendsList_Entry_C_GetColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0014(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0028(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x003C(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0050(0x0014)()
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FriendsList_Entry_C_GetColorAndOpacity_0) == 0x000004, "Wrong alignment on FriendsList_Entry_C_GetColorAndOpacity_0");
static_assert(sizeof(FriendsList_Entry_C_GetColorAndOpacity_0) == 0x000068, "Wrong size on FriendsList_Entry_C_GetColorAndOpacity_0");
static_assert(offsetof(FriendsList_Entry_C_GetColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'FriendsList_Entry_C_GetColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor) == 0x000014, "Member 'FriendsList_Entry_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor_1) == 0x000028, "Member 'FriendsList_Entry_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor_2) == 0x00003C, "Member 'FriendsList_Entry_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor_3) == 0x000050, "Member 'FriendsList_Entry_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_GetColorAndOpacity_0, K2Node_SwitchInteger_CmpSuccess) == 0x000064, "Member 'FriendsList_Entry_C_GetColorAndOpacity_0::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function FriendsList_Entry.FriendsList_Entry_C.OnFail_45A0594E41855EEC3A11039348F8EAE3
// 0x0008 (0x0008 - 0x0000)
struct FriendsList_Entry_C_OnFail_45A0594E41855EEC3A11039348F8EAE3 final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FriendsList_Entry_C_OnFail_45A0594E41855EEC3A11039348F8EAE3) == 0x000008, "Wrong alignment on FriendsList_Entry_C_OnFail_45A0594E41855EEC3A11039348F8EAE3");
static_assert(sizeof(FriendsList_Entry_C_OnFail_45A0594E41855EEC3A11039348F8EAE3) == 0x000008, "Wrong size on FriendsList_Entry_C_OnFail_45A0594E41855EEC3A11039348F8EAE3");
static_assert(offsetof(FriendsList_Entry_C_OnFail_45A0594E41855EEC3A11039348F8EAE3, Texture) == 0x000000, "Member 'FriendsList_Entry_C_OnFail_45A0594E41855EEC3A11039348F8EAE3::Texture' has a wrong offset!");

// Function FriendsList_Entry.FriendsList_Entry_C.OnFail_45A0594E41855EEC3A110393E9F142FD
// 0x0008 (0x0008 - 0x0000)
struct FriendsList_Entry_C_OnFail_45A0594E41855EEC3A110393E9F142FD final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FriendsList_Entry_C_OnFail_45A0594E41855EEC3A110393E9F142FD) == 0x000008, "Wrong alignment on FriendsList_Entry_C_OnFail_45A0594E41855EEC3A110393E9F142FD");
static_assert(sizeof(FriendsList_Entry_C_OnFail_45A0594E41855EEC3A110393E9F142FD) == 0x000008, "Wrong size on FriendsList_Entry_C_OnFail_45A0594E41855EEC3A110393E9F142FD");
static_assert(offsetof(FriendsList_Entry_C_OnFail_45A0594E41855EEC3A110393E9F142FD, Texture) == 0x000000, "Member 'FriendsList_Entry_C_OnFail_45A0594E41855EEC3A110393E9F142FD::Texture' has a wrong offset!");

// Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_45A0594E41855EEC3A11039348F8EAE3
// 0x0008 (0x0008 - 0x0000)
struct FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A11039348F8EAE3 final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A11039348F8EAE3) == 0x000008, "Wrong alignment on FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A11039348F8EAE3");
static_assert(sizeof(FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A11039348F8EAE3) == 0x000008, "Wrong size on FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A11039348F8EAE3");
static_assert(offsetof(FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A11039348F8EAE3, Texture) == 0x000000, "Member 'FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A11039348F8EAE3::Texture' has a wrong offset!");

// Function FriendsList_Entry.FriendsList_Entry_C.OnSuccess_45A0594E41855EEC3A110393E9F142FD
// 0x0008 (0x0008 - 0x0000)
struct FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A110393E9F142FD final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A110393E9F142FD) == 0x000008, "Wrong alignment on FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A110393E9F142FD");
static_assert(sizeof(FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A110393E9F142FD) == 0x000008, "Wrong size on FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A110393E9F142FD");
static_assert(offsetof(FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A110393E9F142FD, Texture) == 0x000000, "Member 'FriendsList_Entry_C_OnSuccess_45A0594E41855EEC3A110393E9F142FD::Texture' has a wrong offset!");

// Function FriendsList_Entry.FriendsList_Entry_C.RefreshFriend
// 0x01A0 (0x01A0 - 0x0000)
struct FriendsList_Entry_C_RefreshFriend final
{
public:
	struct FFriend                                Friend_0;                                          // 0x0000(0x01A0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FriendsList_Entry_C_RefreshFriend) == 0x000008, "Wrong alignment on FriendsList_Entry_C_RefreshFriend");
static_assert(sizeof(FriendsList_Entry_C_RefreshFriend) == 0x0001A0, "Wrong size on FriendsList_Entry_C_RefreshFriend");
static_assert(offsetof(FriendsList_Entry_C_RefreshFriend, Friend_0) == 0x000000, "Member 'FriendsList_Entry_C_RefreshFriend::Friend_0' has a wrong offset!");

// Function FriendsList_Entry.FriendsList_Entry_C.Tick
// 0x003C (0x003C - 0x0000)
struct FriendsList_Entry_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FriendsList_Entry_C_Tick) == 0x000004, "Wrong alignment on FriendsList_Entry_C_Tick");
static_assert(sizeof(FriendsList_Entry_C_Tick) == 0x00003C, "Wrong size on FriendsList_Entry_C_Tick");
static_assert(offsetof(FriendsList_Entry_C_Tick, MyGeometry) == 0x000000, "Member 'FriendsList_Entry_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(FriendsList_Entry_C_Tick, InDeltaTime) == 0x000038, "Member 'FriendsList_Entry_C_Tick::InDeltaTime' has a wrong offset!");

}

