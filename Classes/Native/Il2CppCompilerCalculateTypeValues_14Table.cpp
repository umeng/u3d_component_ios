#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t2731741218;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t488000426;
// System.String
struct String_t;
// UMSocial/AuthDelegate
struct AuthDelegate_t705881329;
// UMSocial/ShareDelegate
struct ShareDelegate_t3145578921;
// UMSocial/ShareBoardDismissDelegate
struct ShareBoardDismissDelegate_t3341855364;
// UMSocial/AuthHandler
struct AuthHandler_t1442270141;
// UMPush/AliasDelegate
struct AliasDelegate_t2631918157;
// UMPush/RemainDelegate
struct RemainDelegate_t4027683115;
// UMPush/TagsDelegate
struct TagsDelegate_t1654061426;
// UMPush/TagHandler
struct TagHandler_t962403639;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t3233149967;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t4045254828;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t904013287;
// Umeng.JSONNode
struct JSONNode_t2132032364;
// System.Collections.Generic.IEnumerator`1<Umeng.JSONNode>
struct IEnumerator_1_t4204018911;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t2268472978;
// System.Text.StringBuilder
struct StringBuilder_t3285754523;
// System.Byte[]
struct ByteU5BU5D_t3415688446;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1355228245;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3755786022;
// System.Object[]
struct ObjectU5BU5D_t1074712151;
// System.Char[]
struct CharU5BU5D_t4219406396;
// System.Collections.Generic.List`1<Umeng.JSONNode>
struct List_1_t1768422014;
// System.Collections.Generic.Dictionary`2<System.String,Umeng.JSONNode>
struct Dictionary_2_t844094690;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2641707950;
// System.Void
struct Void_t2738936672;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2816476552;
// Umeng.JSONArray
struct JSONArray_t294298289;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t2312495831;
// UnityEngine.Object
struct Object_t3930070151;
// System.Type
struct Type_t;
// Umeng.JSONObject
struct JSONObject_t3610623851;
// UnityEngine.ILogHandler
struct ILogHandler_t1935944145;
// System.IAsyncResult
struct IAsyncResult_t592898978;
// System.AsyncCallback
struct AsyncCallback_t3606452997;
// System.String[]
struct StringU5BU5D_t1535701705;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2501861454;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t8564207;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1709171767;
// UnityEngine.Texture2D
struct Texture2D_t3408798722;

struct Object_t3930070151_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T691557962_H
#define U3CMODULEU3E_T691557962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t691557962 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T691557962_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T8564207_H
#define PLAYEREDITORCONNECTIONEVENTS_T8564207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t8564207  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t2731741218 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t488000426 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t488000426 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t8564207, ___messageTypeSubscribers_0)); }
	inline List_1_t2731741218 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t2731741218 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t2731741218 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t8564207, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t488000426 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t488000426 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t488000426 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t8564207, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t488000426 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t488000426 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t488000426 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T8564207_H
#ifndef DPLUSAGENT_T1686972101_H
#define DPLUSAGENT_T1686972101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.DplusAgent
struct  DplusAgent_t1686972101  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DPLUSAGENT_T1686972101_H
#ifndef UMSOCIAL_T3858466060_H
#define UMSOCIAL_T3858466060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial
struct  UMSocial_t3858466060  : public RuntimeObject
{
public:

public:
};

struct UMSocial_t3858466060_StaticFields
{
public:
	// System.String UMSocial::appKey
	String_t* ___appKey_1;
	// UMSocial/AuthDelegate UMSocial::authDelegate
	AuthDelegate_t705881329 * ___authDelegate_2;
	// UMSocial/ShareDelegate UMSocial::shareDelegate
	ShareDelegate_t3145578921 * ___shareDelegate_3;
	// UMSocial/ShareBoardDismissDelegate UMSocial::dismissDelegate
	ShareBoardDismissDelegate_t3341855364 * ___dismissDelegate_4;
	// UMSocial/AuthHandler UMSocial::<>f__mg$cache0
	AuthHandler_t1442270141 * ___U3CU3Ef__mgU24cache0_5;
	// UMSocial/AuthHandler UMSocial::<>f__mg$cache1
	AuthHandler_t1442270141 * ___U3CU3Ef__mgU24cache1_6;
	// UMSocial/ShareDelegate UMSocial::<>f__mg$cache2
	ShareDelegate_t3145578921 * ___U3CU3Ef__mgU24cache2_7;
	// UMSocial/ShareBoardDismissDelegate UMSocial::<>f__mg$cache3
	ShareBoardDismissDelegate_t3341855364 * ___U3CU3Ef__mgU24cache3_8;
	// UMSocial/ShareDelegate UMSocial::<>f__mg$cache4
	ShareDelegate_t3145578921 * ___U3CU3Ef__mgU24cache4_9;

public:
	inline static int32_t get_offset_of_appKey_1() { return static_cast<int32_t>(offsetof(UMSocial_t3858466060_StaticFields, ___appKey_1)); }
	inline String_t* get_appKey_1() const { return ___appKey_1; }
	inline String_t** get_address_of_appKey_1() { return &___appKey_1; }
	inline void set_appKey_1(String_t* value)
	{
		___appKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___appKey_1), value);
	}

	inline static int32_t get_offset_of_authDelegate_2() { return static_cast<int32_t>(offsetof(UMSocial_t3858466060_StaticFields, ___authDelegate_2)); }
	inline AuthDelegate_t705881329 * get_authDelegate_2() const { return ___authDelegate_2; }
	inline AuthDelegate_t705881329 ** get_address_of_authDelegate_2() { return &___authDelegate_2; }
	inline void set_authDelegate_2(AuthDelegate_t705881329 * value)
	{
		___authDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___authDelegate_2), value);
	}

	inline static int32_t get_offset_of_shareDelegate_3() { return static_cast<int32_t>(offsetof(UMSocial_t3858466060_StaticFields, ___shareDelegate_3)); }
	inline ShareDelegate_t3145578921 * get_shareDelegate_3() const { return ___shareDelegate_3; }
	inline ShareDelegate_t3145578921 ** get_address_of_shareDelegate_3() { return &___shareDelegate_3; }
	inline void set_shareDelegate_3(ShareDelegate_t3145578921 * value)
	{
		___shareDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&___shareDelegate_3), value);
	}

	inline static int32_t get_offset_of_dismissDelegate_4() { return static_cast<int32_t>(offsetof(UMSocial_t3858466060_StaticFields, ___dismissDelegate_4)); }
	inline ShareBoardDismissDelegate_t3341855364 * get_dismissDelegate_4() const { return ___dismissDelegate_4; }
	inline ShareBoardDismissDelegate_t3341855364 ** get_address_of_dismissDelegate_4() { return &___dismissDelegate_4; }
	inline void set_dismissDelegate_4(ShareBoardDismissDelegate_t3341855364 * value)
	{
		___dismissDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&___dismissDelegate_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(UMSocial_t3858466060_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline AuthHandler_t1442270141 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline AuthHandler_t1442270141 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(AuthHandler_t1442270141 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_6() { return static_cast<int32_t>(offsetof(UMSocial_t3858466060_StaticFields, ___U3CU3Ef__mgU24cache1_6)); }
	inline AuthHandler_t1442270141 * get_U3CU3Ef__mgU24cache1_6() const { return ___U3CU3Ef__mgU24cache1_6; }
	inline AuthHandler_t1442270141 ** get_address_of_U3CU3Ef__mgU24cache1_6() { return &___U3CU3Ef__mgU24cache1_6; }
	inline void set_U3CU3Ef__mgU24cache1_6(AuthHandler_t1442270141 * value)
	{
		___U3CU3Ef__mgU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_7() { return static_cast<int32_t>(offsetof(UMSocial_t3858466060_StaticFields, ___U3CU3Ef__mgU24cache2_7)); }
	inline ShareDelegate_t3145578921 * get_U3CU3Ef__mgU24cache2_7() const { return ___U3CU3Ef__mgU24cache2_7; }
	inline ShareDelegate_t3145578921 ** get_address_of_U3CU3Ef__mgU24cache2_7() { return &___U3CU3Ef__mgU24cache2_7; }
	inline void set_U3CU3Ef__mgU24cache2_7(ShareDelegate_t3145578921 * value)
	{
		___U3CU3Ef__mgU24cache2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_8() { return static_cast<int32_t>(offsetof(UMSocial_t3858466060_StaticFields, ___U3CU3Ef__mgU24cache3_8)); }
	inline ShareBoardDismissDelegate_t3341855364 * get_U3CU3Ef__mgU24cache3_8() const { return ___U3CU3Ef__mgU24cache3_8; }
	inline ShareBoardDismissDelegate_t3341855364 ** get_address_of_U3CU3Ef__mgU24cache3_8() { return &___U3CU3Ef__mgU24cache3_8; }
	inline void set_U3CU3Ef__mgU24cache3_8(ShareBoardDismissDelegate_t3341855364 * value)
	{
		___U3CU3Ef__mgU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_9() { return static_cast<int32_t>(offsetof(UMSocial_t3858466060_StaticFields, ___U3CU3Ef__mgU24cache4_9)); }
	inline ShareDelegate_t3145578921 * get_U3CU3Ef__mgU24cache4_9() const { return ___U3CU3Ef__mgU24cache4_9; }
	inline ShareDelegate_t3145578921 ** get_address_of_U3CU3Ef__mgU24cache4_9() { return &___U3CU3Ef__mgU24cache4_9; }
	inline void set_U3CU3Ef__mgU24cache4_9(ShareDelegate_t3145578921 * value)
	{
		___U3CU3Ef__mgU24cache4_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UMSOCIAL_T3858466060_H
#ifndef UMPUSH_T2533043275_H
#define UMPUSH_T2533043275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush
struct  UMPush_t2533043275  : public RuntimeObject
{
public:

public:
};

struct UMPush_t2533043275_StaticFields
{
public:
	// UMPush/AliasDelegate UMPush::aliasDelegate
	AliasDelegate_t2631918157 * ___aliasDelegate_1;
	// UMPush/RemainDelegate UMPush::remainDelegate
	RemainDelegate_t4027683115 * ___remainDelegate_2;
	// UMPush/TagsDelegate UMPush::tagDelegate
	TagsDelegate_t1654061426 * ___tagDelegate_3;
	// UMPush/RemainDelegate UMPush::<>f__mg$cache0
	RemainDelegate_t4027683115 * ___U3CU3Ef__mgU24cache0_4;
	// UMPush/RemainDelegate UMPush::<>f__mg$cache1
	RemainDelegate_t4027683115 * ___U3CU3Ef__mgU24cache1_5;
	// UMPush/TagHandler UMPush::<>f__mg$cache2
	TagHandler_t962403639 * ___U3CU3Ef__mgU24cache2_6;
	// UMPush/AliasDelegate UMPush::<>f__mg$cache3
	AliasDelegate_t2631918157 * ___U3CU3Ef__mgU24cache3_7;
	// UMPush/AliasDelegate UMPush::<>f__mg$cache4
	AliasDelegate_t2631918157 * ___U3CU3Ef__mgU24cache4_8;
	// UMPush/AliasDelegate UMPush::<>f__mg$cache5
	AliasDelegate_t2631918157 * ___U3CU3Ef__mgU24cache5_9;

public:
	inline static int32_t get_offset_of_aliasDelegate_1() { return static_cast<int32_t>(offsetof(UMPush_t2533043275_StaticFields, ___aliasDelegate_1)); }
	inline AliasDelegate_t2631918157 * get_aliasDelegate_1() const { return ___aliasDelegate_1; }
	inline AliasDelegate_t2631918157 ** get_address_of_aliasDelegate_1() { return &___aliasDelegate_1; }
	inline void set_aliasDelegate_1(AliasDelegate_t2631918157 * value)
	{
		___aliasDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___aliasDelegate_1), value);
	}

	inline static int32_t get_offset_of_remainDelegate_2() { return static_cast<int32_t>(offsetof(UMPush_t2533043275_StaticFields, ___remainDelegate_2)); }
	inline RemainDelegate_t4027683115 * get_remainDelegate_2() const { return ___remainDelegate_2; }
	inline RemainDelegate_t4027683115 ** get_address_of_remainDelegate_2() { return &___remainDelegate_2; }
	inline void set_remainDelegate_2(RemainDelegate_t4027683115 * value)
	{
		___remainDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___remainDelegate_2), value);
	}

	inline static int32_t get_offset_of_tagDelegate_3() { return static_cast<int32_t>(offsetof(UMPush_t2533043275_StaticFields, ___tagDelegate_3)); }
	inline TagsDelegate_t1654061426 * get_tagDelegate_3() const { return ___tagDelegate_3; }
	inline TagsDelegate_t1654061426 ** get_address_of_tagDelegate_3() { return &___tagDelegate_3; }
	inline void set_tagDelegate_3(TagsDelegate_t1654061426 * value)
	{
		___tagDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&___tagDelegate_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(UMPush_t2533043275_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline RemainDelegate_t4027683115 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline RemainDelegate_t4027683115 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(RemainDelegate_t4027683115 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_5() { return static_cast<int32_t>(offsetof(UMPush_t2533043275_StaticFields, ___U3CU3Ef__mgU24cache1_5)); }
	inline RemainDelegate_t4027683115 * get_U3CU3Ef__mgU24cache1_5() const { return ___U3CU3Ef__mgU24cache1_5; }
	inline RemainDelegate_t4027683115 ** get_address_of_U3CU3Ef__mgU24cache1_5() { return &___U3CU3Ef__mgU24cache1_5; }
	inline void set_U3CU3Ef__mgU24cache1_5(RemainDelegate_t4027683115 * value)
	{
		___U3CU3Ef__mgU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_6() { return static_cast<int32_t>(offsetof(UMPush_t2533043275_StaticFields, ___U3CU3Ef__mgU24cache2_6)); }
	inline TagHandler_t962403639 * get_U3CU3Ef__mgU24cache2_6() const { return ___U3CU3Ef__mgU24cache2_6; }
	inline TagHandler_t962403639 ** get_address_of_U3CU3Ef__mgU24cache2_6() { return &___U3CU3Ef__mgU24cache2_6; }
	inline void set_U3CU3Ef__mgU24cache2_6(TagHandler_t962403639 * value)
	{
		___U3CU3Ef__mgU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_7() { return static_cast<int32_t>(offsetof(UMPush_t2533043275_StaticFields, ___U3CU3Ef__mgU24cache3_7)); }
	inline AliasDelegate_t2631918157 * get_U3CU3Ef__mgU24cache3_7() const { return ___U3CU3Ef__mgU24cache3_7; }
	inline AliasDelegate_t2631918157 ** get_address_of_U3CU3Ef__mgU24cache3_7() { return &___U3CU3Ef__mgU24cache3_7; }
	inline void set_U3CU3Ef__mgU24cache3_7(AliasDelegate_t2631918157 * value)
	{
		___U3CU3Ef__mgU24cache3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_8() { return static_cast<int32_t>(offsetof(UMPush_t2533043275_StaticFields, ___U3CU3Ef__mgU24cache4_8)); }
	inline AliasDelegate_t2631918157 * get_U3CU3Ef__mgU24cache4_8() const { return ___U3CU3Ef__mgU24cache4_8; }
	inline AliasDelegate_t2631918157 ** get_address_of_U3CU3Ef__mgU24cache4_8() { return &___U3CU3Ef__mgU24cache4_8; }
	inline void set_U3CU3Ef__mgU24cache4_8(AliasDelegate_t2631918157 * value)
	{
		___U3CU3Ef__mgU24cache4_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_9() { return static_cast<int32_t>(offsetof(UMPush_t2533043275_StaticFields, ___U3CU3Ef__mgU24cache5_9)); }
	inline AliasDelegate_t2631918157 * get_U3CU3Ef__mgU24cache5_9() const { return ___U3CU3Ef__mgU24cache5_9; }
	inline AliasDelegate_t2631918157 ** get_address_of_U3CU3Ef__mgU24cache5_9() { return &___U3CU3Ef__mgU24cache5_9; }
	inline void set_U3CU3Ef__mgU24cache5_9(AliasDelegate_t2631918157 * value)
	{
		___U3CU3Ef__mgU24cache5_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UMPUSH_T2533043275_H
#ifndef MESSAGETYPESUBSCRIBERS_T3095351568_H
#define MESSAGETYPESUBSCRIBERS_T3095351568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t3095351568  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t3233149967 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t3095351568, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t3095351568, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t3095351568, ___messageCallback_2)); }
	inline MessageEvent_t3233149967 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t3233149967 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t3233149967 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T3095351568_H
#ifndef JSON_T2513727886_H
#define JSON_T2513727886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSON
struct  JSON_t2513727886  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T2513727886_H
#ifndef RENDERPIPELINEMANAGER_T1948574611_H
#define RENDERPIPELINEMANAGER_T1948574611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t1948574611  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t1948574611_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t1948574611_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t1948574611_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T1948574611_H
#ifndef U3CREMOVEU3EC__ANONSTOREY2_T1294959417_H
#define U3CREMOVEU3EC__ANONSTOREY2_T1294959417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONObject/<Remove>c__AnonStorey2
struct  U3CRemoveU3Ec__AnonStorey2_t1294959417  : public RuntimeObject
{
public:
	// Umeng.JSONNode Umeng.JSONObject/<Remove>c__AnonStorey2::aNode
	JSONNode_t2132032364 * ___aNode_0;

public:
	inline static int32_t get_offset_of_aNode_0() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ec__AnonStorey2_t1294959417, ___aNode_0)); }
	inline JSONNode_t2132032364 * get_aNode_0() const { return ___aNode_0; }
	inline JSONNode_t2132032364 ** get_address_of_aNode_0() { return &___aNode_0; }
	inline void set_aNode_0(JSONNode_t2132032364 * value)
	{
		___aNode_0 = value;
		Il2CppCodeGenWriteBarrier((&___aNode_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREMOVEU3EC__ANONSTOREY2_T1294959417_H
#ifndef NETFXCOREEXTENSIONS_T835221944_H
#define NETFXCOREEXTENSIONS_T835221944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t835221944  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T835221944_H
#ifndef U3CU3EC__ITERATOR1_T3385952531_H
#define U3CU3EC__ITERATOR1_T3385952531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNode/<>c__Iterator1
struct  U3CU3Ec__Iterator1_t3385952531  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<Umeng.JSONNode> Umeng.JSONNode/<>c__Iterator1::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator1::<C>__1
	JSONNode_t2132032364 * ___U3CCU3E__1_1;
	// System.Collections.Generic.IEnumerator`1<Umeng.JSONNode> Umeng.JSONNode/<>c__Iterator1::$locvar1
	RuntimeObject* ___U24locvar1_2;
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator1::<D>__2
	JSONNode_t2132032364 * ___U3CDU3E__2_3;
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator1::$this
	JSONNode_t2132032364 * ___U24this_4;
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator1::$current
	JSONNode_t2132032364 * ___U24current_5;
	// System.Boolean Umeng.JSONNode/<>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 Umeng.JSONNode/<>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t3385952531, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CCU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t3385952531, ___U3CCU3E__1_1)); }
	inline JSONNode_t2132032364 * get_U3CCU3E__1_1() const { return ___U3CCU3E__1_1; }
	inline JSONNode_t2132032364 ** get_address_of_U3CCU3E__1_1() { return &___U3CCU3E__1_1; }
	inline void set_U3CCU3E__1_1(JSONNode_t2132032364 * value)
	{
		___U3CCU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t3385952531, ___U24locvar1_2)); }
	inline RuntimeObject* get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline RuntimeObject** get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(RuntimeObject* value)
	{
		___U24locvar1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar1_2), value);
	}

	inline static int32_t get_offset_of_U3CDU3E__2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t3385952531, ___U3CDU3E__2_3)); }
	inline JSONNode_t2132032364 * get_U3CDU3E__2_3() const { return ___U3CDU3E__2_3; }
	inline JSONNode_t2132032364 ** get_address_of_U3CDU3E__2_3() { return &___U3CDU3E__2_3; }
	inline void set_U3CDU3E__2_3(JSONNode_t2132032364 * value)
	{
		___U3CDU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDU3E__2_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t3385952531, ___U24this_4)); }
	inline JSONNode_t2132032364 * get_U24this_4() const { return ___U24this_4; }
	inline JSONNode_t2132032364 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(JSONNode_t2132032364 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t3385952531, ___U24current_5)); }
	inline JSONNode_t2132032364 * get_U24current_5() const { return ___U24current_5; }
	inline JSONNode_t2132032364 ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(JSONNode_t2132032364 * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t3385952531, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t3385952531, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR1_T3385952531_H
#ifndef U3CU3EC__ITERATOR0_T2099519925_H
#define U3CU3EC__ITERATOR0_T2099519925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNode/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2099519925  : public RuntimeObject
{
public:
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator0::$current
	JSONNode_t2132032364 * ___U24current_0;
	// System.Boolean Umeng.JSONNode/<>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 Umeng.JSONNode/<>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2099519925, ___U24current_0)); }
	inline JSONNode_t2132032364 * get_U24current_0() const { return ___U24current_0; }
	inline JSONNode_t2132032364 ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(JSONNode_t2132032364 * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2099519925, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2099519925, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR0_T2099519925_H
#ifndef NATIVE_T3026998083_H
#define NATIVE_T3026998083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.Native
struct  Native_t3026998083  : public RuntimeObject
{
public:

public:
};

struct Native_t3026998083_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> UnityEngine.CSSLayout.Native::s_MeasureFunctions
	Dictionary_2_t2268472978 * ___s_MeasureFunctions_0;

public:
	inline static int32_t get_offset_of_s_MeasureFunctions_0() { return static_cast<int32_t>(offsetof(Native_t3026998083_StaticFields, ___s_MeasureFunctions_0)); }
	inline Dictionary_2_t2268472978 * get_s_MeasureFunctions_0() const { return ___s_MeasureFunctions_0; }
	inline Dictionary_2_t2268472978 ** get_address_of_s_MeasureFunctions_0() { return &___s_MeasureFunctions_0; }
	inline void set_s_MeasureFunctions_0(Dictionary_2_t2268472978 * value)
	{
		___s_MeasureFunctions_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_MeasureFunctions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVE_T3026998083_H
#ifndef JSONNODE_T2132032364_H
#define JSONNODE_T2132032364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNode
struct  JSONNode_t2132032364  : public RuntimeObject
{
public:

public:
};

struct JSONNode_t2132032364_StaticFields
{
public:
	// System.Text.StringBuilder Umeng.JSONNode::m_EscapeBuilder
	StringBuilder_t3285754523 * ___m_EscapeBuilder_0;

public:
	inline static int32_t get_offset_of_m_EscapeBuilder_0() { return static_cast<int32_t>(offsetof(JSONNode_t2132032364_StaticFields, ___m_EscapeBuilder_0)); }
	inline StringBuilder_t3285754523 * get_m_EscapeBuilder_0() const { return ___m_EscapeBuilder_0; }
	inline StringBuilder_t3285754523 ** get_address_of_m_EscapeBuilder_0() { return &___m_EscapeBuilder_0; }
	inline void set_m_EscapeBuilder_0(StringBuilder_t3285754523 * value)
	{
		___m_EscapeBuilder_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_EscapeBuilder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNODE_T2132032364_H
#ifndef MESSAGEEVENTARGS_T1256821806_H
#define MESSAGEEVENTARGS_T1256821806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t1256821806  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t3415688446* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1256821806, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1256821806, ___data_1)); }
	inline ByteU5BU5D_t3415688446* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3415688446** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3415688446* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T1256821806_H
#ifndef ATTRIBUTE_T769412890_H
#define ATTRIBUTE_T769412890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t769412890  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T769412890_H
#ifndef ANALYTICS_T976438730_H
#define ANALYTICS_T976438730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.Analytics
struct  Analytics_t976438730  : public RuntimeObject
{
public:

public:
};

struct Analytics_t976438730_StaticFields
{
public:
	// System.String Umeng.Analytics::_AppKey
	String_t* ____AppKey_0;
	// System.String Umeng.Analytics::_ChannelId
	String_t* ____ChannelId_1;

public:
	inline static int32_t get_offset_of__AppKey_0() { return static_cast<int32_t>(offsetof(Analytics_t976438730_StaticFields, ____AppKey_0)); }
	inline String_t* get__AppKey_0() const { return ____AppKey_0; }
	inline String_t** get_address_of__AppKey_0() { return &____AppKey_0; }
	inline void set__AppKey_0(String_t* value)
	{
		____AppKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____AppKey_0), value);
	}

	inline static int32_t get_offset_of__ChannelId_1() { return static_cast<int32_t>(offsetof(Analytics_t976438730_StaticFields, ____ChannelId_1)); }
	inline String_t* get__ChannelId_1() const { return ____ChannelId_1; }
	inline String_t** get_address_of__ChannelId_1() { return &____ChannelId_1; }
	inline void set__ChannelId_1(String_t* value)
	{
		____ChannelId_1 = value;
		Il2CppCodeGenWriteBarrier((&____ChannelId_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICS_T976438730_H
#ifndef PLAYABLEEXTENSIONS_T2437383749_H
#define PLAYABLEEXTENSIONS_T2437383749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t2437383749  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEEXTENSIONS_T2437383749_H
#ifndef PLAYABLEBEHAVIOUR_T1385104644_H
#define PLAYABLEBEHAVIOUR_T1385104644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t1385104644  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T1385104644_H
#ifndef UNITYEVENTBASE_T2889251367_H
#define UNITYEVENTBASE_T2889251367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t2889251367  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t1355228245 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3755786022 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t2889251367, ___m_Calls_0)); }
	inline InvokableCallList_t1355228245 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t1355228245 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t1355228245 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t2889251367, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3755786022 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3755786022 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3755786022 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t2889251367, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t2889251367, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T2889251367_H
#ifndef STACK_T2677255404_H
#define STACK_T2677255404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t2677255404  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t1074712151* ___contents_0;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_1;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_4;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(Stack_t2677255404, ___contents_0)); }
	inline ObjectU5BU5D_t1074712151* get_contents_0() const { return ___contents_0; }
	inline ObjectU5BU5D_t1074712151** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(ObjectU5BU5D_t1074712151* value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Stack_t2677255404, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Stack_t2677255404, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Stack_t2677255404, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_modCount_4() { return static_cast<int32_t>(offsetof(Stack_t2677255404, ___modCount_4)); }
	inline int32_t get_modCount_4() const { return ___modCount_4; }
	inline int32_t* get_address_of_modCount_4() { return &___modCount_4; }
	inline void set_modCount_4(int32_t value)
	{
		___modCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T2677255404_H
#ifndef VALUETYPE_T693128532_H
#define VALUETYPE_T693128532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t693128532  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t693128532_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t693128532_marshaled_com
{
};
#endif // VALUETYPE_T693128532_H
#ifndef ENUM_T2788442785_H
#define ENUM_T2788442785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2788442785  : public ValueType_t693128532
{
public:

public:
};

struct Enum_t2788442785_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t4219406396* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2788442785_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t4219406396* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t4219406396** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t4219406396* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2788442785_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2788442785_marshaled_com
{
};
#endif // ENUM_T2788442785_H
#ifndef GA_T4222336886_H
#define GA_T4222336886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.GA
struct  GA_t4222336886  : public Analytics_t976438730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GA_T4222336886_H
#ifndef INT32_T2072782117_H
#define INT32_T2072782117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2072782117 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2072782117, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2072782117_H
#ifndef VOID_T2738936672_H
#define VOID_T2738936672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2738936672 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2738936672_H
#ifndef KEYVALUEPAIR_2_T3762506220_H
#define KEYVALUEPAIR_2_T3762506220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,Umeng.JSONNode>
struct  KeyValuePair_2_t3762506220 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_t2132032364 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3762506220, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3762506220, ___value_1)); }
	inline JSONNode_t2132032364 * get_value_1() const { return ___value_1; }
	inline JSONNode_t2132032364 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JSONNode_t2132032364 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3762506220_H
#ifndef ENUMERATOR_T2887337228_H
#define ENUMERATOR_T2887337228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Umeng.JSONNode>
struct  Enumerator_t2887337228 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1768422014 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JSONNode_t2132032364 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2887337228, ___l_0)); }
	inline List_1_t1768422014 * get_l_0() const { return ___l_0; }
	inline List_1_t1768422014 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1768422014 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2887337228, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2887337228, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2887337228, ___current_3)); }
	inline JSONNode_t2132032364 * get_current_3() const { return ___current_3; }
	inline JSONNode_t2132032364 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JSONNode_t2132032364 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2887337228_H
#ifndef JSONOBJECT_T3610623851_H
#define JSONOBJECT_T3610623851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONObject
struct  JSONObject_t3610623851  : public JSONNode_t2132032364
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Umeng.JSONNode> Umeng.JSONObject::m_Dict
	Dictionary_2_t844094690 * ___m_Dict_1;

public:
	inline static int32_t get_offset_of_m_Dict_1() { return static_cast<int32_t>(offsetof(JSONObject_t3610623851, ___m_Dict_1)); }
	inline Dictionary_2_t844094690 * get_m_Dict_1() const { return ___m_Dict_1; }
	inline Dictionary_2_t844094690 ** get_address_of_m_Dict_1() { return &___m_Dict_1; }
	inline void set_m_Dict_1(Dictionary_2_t844094690 * value)
	{
		___m_Dict_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONOBJECT_T3610623851_H
#ifndef SINGLE_T1184648635_H
#define SINGLE_T1184648635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1184648635 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1184648635, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1184648635_H
#ifndef JSONNUMBER_T261243322_H
#define JSONNUMBER_T261243322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNumber
struct  JSONNumber_t261243322  : public JSONNode_t2132032364
{
public:
	// System.Double Umeng.JSONNumber::m_Data
	double ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONNumber_t261243322, ___m_Data_1)); }
	inline double get_m_Data_1() const { return ___m_Data_1; }
	inline double* get_address_of_m_Data_1() { return &___m_Data_1; }
	inline void set_m_Data_1(double value)
	{
		___m_Data_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNUMBER_T261243322_H
#ifndef JSONSTRING_T4274241648_H
#define JSONSTRING_T4274241648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONString
struct  JSONString_t4274241648  : public JSONNode_t2132032364
{
public:
	// System.String Umeng.JSONString::m_Data
	String_t* ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONString_t4274241648, ___m_Data_1)); }
	inline String_t* get_m_Data_1() const { return ___m_Data_1; }
	inline String_t** get_address_of_m_Data_1() { return &___m_Data_1; }
	inline void set_m_Data_1(String_t* value)
	{
		___m_Data_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONSTRING_T4274241648_H
#ifndef JSONBOOL_T2828218678_H
#define JSONBOOL_T2828218678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONBool
struct  JSONBool_t2828218678  : public JSONNode_t2132032364
{
public:
	// System.Boolean Umeng.JSONBool::m_Data
	bool ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONBool_t2828218678, ___m_Data_1)); }
	inline bool get_m_Data_1() const { return ___m_Data_1; }
	inline bool* get_address_of_m_Data_1() { return &___m_Data_1; }
	inline void set_m_Data_1(bool value)
	{
		___m_Data_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONBOOL_T2828218678_H
#ifndef JSONNULL_T414207411_H
#define JSONNULL_T414207411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNull
struct  JSONNull_t414207411  : public JSONNode_t2132032364
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNULL_T414207411_H
#ifndef JSONLAZYCREATOR_T3000425712_H
#define JSONLAZYCREATOR_T3000425712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONLazyCreator
struct  JSONLazyCreator_t3000425712  : public JSONNode_t2132032364
{
public:
	// Umeng.JSONNode Umeng.JSONLazyCreator::m_Node
	JSONNode_t2132032364 * ___m_Node_1;
	// System.String Umeng.JSONLazyCreator::m_Key
	String_t* ___m_Key_2;

public:
	inline static int32_t get_offset_of_m_Node_1() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t3000425712, ___m_Node_1)); }
	inline JSONNode_t2132032364 * get_m_Node_1() const { return ___m_Node_1; }
	inline JSONNode_t2132032364 ** get_address_of_m_Node_1() { return &___m_Node_1; }
	inline void set_m_Node_1(JSONNode_t2132032364 * value)
	{
		___m_Node_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Node_1), value);
	}

	inline static int32_t get_offset_of_m_Key_2() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t3000425712, ___m_Key_2)); }
	inline String_t* get_m_Key_2() const { return ___m_Key_2; }
	inline String_t** get_address_of_m_Key_2() { return &___m_Key_2; }
	inline void set_m_Key_2(String_t* value)
	{
		___m_Key_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Key_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONLAZYCREATOR_T3000425712_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2641707950 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2641707950 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2641707950 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2641707950 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef UNITYEVENT_1_T2651811952_H
#define UNITYEVENT_1_T2651811952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t2651811952  : public UnityEventBase_t2889251367
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t1074712151* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2651811952, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t1074712151* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t1074712151** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t1074712151* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2651811952_H
#ifndef UNITYEVENT_1_T1835851641_H
#define UNITYEVENT_1_T1835851641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t1835851641  : public UnityEventBase_t2889251367
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t1074712151* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1835851641, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t1074712151* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t1074712151** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t1074712151* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T1835851641_H
#ifndef U24ARRAYTYPEU3D20_T1893012298_H
#define U24ARRAYTYPEU3D20_T1893012298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_t1893012298 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t1893012298__padding[20];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T1893012298_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T1619637752_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T1619637752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t1619637752  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T1619637752_H
#ifndef JSONARRAY_T294298289_H
#define JSONARRAY_T294298289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONArray
struct  JSONArray_t294298289  : public JSONNode_t2132032364
{
public:
	// System.Collections.Generic.List`1<Umeng.JSONNode> Umeng.JSONArray::m_List
	List_1_t1768422014 * ___m_List_1;

public:
	inline static int32_t get_offset_of_m_List_1() { return static_cast<int32_t>(offsetof(JSONArray_t294298289, ___m_List_1)); }
	inline List_1_t1768422014 * get_m_List_1() const { return ___m_List_1; }
	inline List_1_t1768422014 ** get_address_of_m_List_1() { return &___m_List_1; }
	inline void set_m_List_1(List_1_t1768422014 * value)
	{
		___m_List_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_List_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONARRAY_T294298289_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T2740626855_H
#define EXCLUDEFROMDOCSATTRIBUTE_T2740626855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t2740626855  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T2740626855_H
#ifndef READONLYATTRIBUTE_T1861832315_H
#define READONLYATTRIBUTE_T1861832315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t1861832315  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T1861832315_H
#ifndef READWRITEATTRIBUTE_T3878371113_H
#define READWRITEATTRIBUTE_T3878371113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t3878371113  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T3878371113_H
#ifndef WRITEONLYATTRIBUTE_T2660123611_H
#define WRITEONLYATTRIBUTE_T2660123611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t2660123611  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T2660123611_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1582984257_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1582984257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t1582984257  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1582984257_H
#ifndef USEDBYNATIVECODEATTRIBUTE_T1174639766_H
#define USEDBYNATIVECODEATTRIBUTE_T1174639766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct  UsedByNativeCodeAttribute_t1174639766  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEDBYNATIVECODEATTRIBUTE_T1174639766_H
#ifndef NATIVECONTAINERATTRIBUTE_T587235187_H
#define NATIVECONTAINERATTRIBUTE_T587235187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t587235187  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T587235187_H
#ifndef CSSSIZE_T1700018466_H
#define CSSSIZE_T1700018466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSSize
struct  CSSSize_t1700018466 
{
public:
	// System.Single UnityEngine.CSSLayout.CSSSize::width
	float ___width_0;
	// System.Single UnityEngine.CSSLayout.CSSSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(CSSSize_t1700018466, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(CSSSize_t1700018466, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSSIZE_T1700018466_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T301443771_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T301443771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t301443771  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T301443771_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1809124851_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1809124851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t1809124851  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1809124851_H
#ifndef REQUIREDBYNATIVECODEATTRIBUTE_T911358449_H
#define REQUIREDBYNATIVECODEATTRIBUTE_T911358449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct  RequiredByNativeCodeAttribute_t911358449  : public Attribute_t769412890
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIREDBYNATIVECODEATTRIBUTE_T911358449_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T3247230428_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T3247230428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t3247230428  : public Attribute_t769412890
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t3247230428, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T3247230428_H
#ifndef DEFAULTVALUEATTRIBUTE_T4015729586_H
#define DEFAULTVALUEATTRIBUTE_T4015729586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t4015729586  : public Attribute_t769412890
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t4015729586, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T4015729586_H
#ifndef GENERICSTACK_T308596898_H
#define GENERICSTACK_T308596898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_t308596898  : public Stack_t2677255404
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_T308596898_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T1454464820_H
#define TYPEINFERENCERULEATTRIBUTE_T1454464820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t1454464820  : public Attribute_t769412890
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t1454464820, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T1454464820_H
#ifndef REPORTPOLICY_T964809402_H
#define REPORTPOLICY_T964809402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.Analytics/ReportPolicy
struct  ReportPolicy_t964809402 
{
public:
	// System.Int32 Umeng.Analytics/ReportPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReportPolicy_t964809402, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPORTPOLICY_T964809402_H
#ifndef LOGTYPE_T177512556_H
#define LOGTYPE_T177512556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t177512556 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t177512556, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T177512556_H
#ifndef OBJECT_T3930070151_H
#define OBJECT_T3930070151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3930070151  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3930070151, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3930070151_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3930070151_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3930070151_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3930070151_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3930070151_H
#ifndef PLAYABLEOUTPUTHANDLE_T2224782001_H
#define PLAYABLEOUTPUTHANDLE_T2224782001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t2224782001 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t2224782001, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t2224782001, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T2224782001_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2987506077_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2987506077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2987506077  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2987506077_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-49B9B05D954B9D47719314498C608F59CA50A1A2
	U24ArrayTypeU3D20_t1893012298  ___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2987506077_StaticFields, ___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0)); }
	inline U24ArrayTypeU3D20_t1893012298  get_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0() const { return ___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0; }
	inline U24ArrayTypeU3D20_t1893012298 * get_address_of_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0() { return &___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0; }
	inline void set_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0(U24ArrayTypeU3D20_t1893012298  value)
	{
		___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2987506077_H
#ifndef FLAGS_T3409389139_H
#define FLAGS_T3409389139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t3409389139 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t3409389139, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T3409389139_H
#ifndef ENUMERATOR_T3611564117_H
#define ENUMERATOR_T3611564117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Umeng.JSONNode>
struct  Enumerator_t3611564117 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t844094690 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3762506220  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3611564117, ___dictionary_0)); }
	inline Dictionary_2_t844094690 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t844094690 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t844094690 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3611564117, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3611564117, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3611564117, ___current_3)); }
	inline KeyValuePair_2_t3762506220  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3762506220 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3762506220  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3611564117_H
#ifndef DELEGATE_T1963659827_H
#define DELEGATE_T1963659827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1963659827  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t2816476552 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1963659827, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1963659827, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1963659827, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1963659827, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1963659827, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1963659827, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1963659827, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1963659827, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1963659827, ___data_8)); }
	inline DelegateData_t2816476552 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2816476552 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2816476552 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1963659827_H
#ifndef DATASTREAMTYPE_T956580547_H
#define DATASTREAMTYPE_T956580547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t956580547 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t956580547, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T956580547_H
#ifndef PLATFORM_T3519220963_H
#define PLATFORM_T3519220963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Platform
struct  Platform_t3519220963 
{
public:
	// System.Int32 Platform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Platform_t3519220963, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T3519220963_H
#ifndef MESSAGEEVENT_T3233149967_H
#define MESSAGEEVENT_T3233149967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t3233149967  : public UnityEvent_1_t1835851641
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T3233149967_H
#ifndef GENDER_T3249406401_H
#define GENDER_T3249406401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.GA/Gender
struct  Gender_t3249406401 
{
public:
	// System.Int32 Umeng.GA/Gender::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Gender_t3249406401, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENDER_T3249406401_H
#ifndef PAYSOURCE_T35490788_H
#define PAYSOURCE_T35490788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.GA/PaySource
struct  PaySource_t35490788 
{
public:
	// System.Int32 Umeng.GA/PaySource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaySource_t35490788, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAYSOURCE_T35490788_H
#ifndef BONUSSOURCE_T3392473324_H
#define BONUSSOURCE_T3392473324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.GA/BonusSource
struct  BonusSource_t3392473324 
{
public:
	// System.Int32 Umeng.GA/BonusSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BonusSource_t3392473324, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BONUSSOURCE_T3392473324_H
#ifndef JSONNODETYPE_T2742862151_H
#define JSONNODETYPE_T2742862151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNodeType
struct  JSONNodeType_t2742862151 
{
public:
	// System.Int32 Umeng.JSONNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JSONNodeType_t2742862151, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNODETYPE_T2742862151_H
#ifndef CSSMEASUREMODE_T1649537803_H
#define CSSMEASUREMODE_T1649537803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureMode
struct  CSSMeasureMode_t1649537803 
{
public:
	// System.Int32 UnityEngine.CSSLayout.CSSMeasureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CSSMeasureMode_t1649537803, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREMODE_T1649537803_H
#ifndef U3CU3EC__ITERATOR0_T1432947745_H
#define U3CU3EC__ITERATOR0_T1432947745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONArray/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t1432947745  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<Umeng.JSONNode> Umeng.JSONArray/<>c__Iterator0::$locvar0
	Enumerator_t2887337228  ___U24locvar0_0;
	// Umeng.JSONNode Umeng.JSONArray/<>c__Iterator0::<N>__1
	JSONNode_t2132032364 * ___U3CNU3E__1_1;
	// Umeng.JSONArray Umeng.JSONArray/<>c__Iterator0::$this
	JSONArray_t294298289 * ___U24this_2;
	// Umeng.JSONNode Umeng.JSONArray/<>c__Iterator0::$current
	JSONNode_t2132032364 * ___U24current_3;
	// System.Boolean Umeng.JSONArray/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Umeng.JSONArray/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1432947745, ___U24locvar0_0)); }
	inline Enumerator_t2887337228  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t2887337228 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t2887337228  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1432947745, ___U3CNU3E__1_1)); }
	inline JSONNode_t2132032364 * get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline JSONNode_t2132032364 ** get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(JSONNode_t2132032364 * value)
	{
		___U3CNU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1432947745, ___U24this_2)); }
	inline JSONArray_t294298289 * get_U24this_2() const { return ___U24this_2; }
	inline JSONArray_t294298289 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONArray_t294298289 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1432947745, ___U24current_3)); }
	inline JSONNode_t2132032364 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t2132032364 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t2132032364 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1432947745, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1432947745, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR0_T1432947745_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T2066019513_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T2066019513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONArray/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t2066019513  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<Umeng.JSONNode> Umeng.JSONArray/<GetEnumerator>c__Iterator1::$locvar0
	Enumerator_t2887337228  ___U24locvar0_0;
	// Umeng.JSONNode Umeng.JSONArray/<GetEnumerator>c__Iterator1::<N>__1
	JSONNode_t2132032364 * ___U3CNU3E__1_1;
	// Umeng.JSONArray Umeng.JSONArray/<GetEnumerator>c__Iterator1::$this
	JSONArray_t294298289 * ___U24this_2;
	// System.Object Umeng.JSONArray/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Umeng.JSONArray/<GetEnumerator>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 Umeng.JSONArray/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2066019513, ___U24locvar0_0)); }
	inline Enumerator_t2887337228  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t2887337228 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t2887337228  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2066019513, ___U3CNU3E__1_1)); }
	inline JSONNode_t2132032364 * get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline JSONNode_t2132032364 ** get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(JSONNode_t2132032364 * value)
	{
		___U3CNU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2066019513, ___U24this_2)); }
	inline JSONArray_t294298289 * get_U24this_2() const { return ___U24this_2; }
	inline JSONArray_t294298289 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONArray_t294298289 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2066019513, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2066019513, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2066019513, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T2066019513_H
#ifndef CONNECTIONCHANGEEVENT_T488000426_H
#define CONNECTIONCHANGEEVENT_T488000426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t488000426  : public UnityEvent_1_t2651811952
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T488000426_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T3577989818_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T3577989818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3577989818  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3577989818, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T3577989818_H
#ifndef TYPEINFERENCERULES_T4242517143_H
#define TYPEINFERENCERULES_T4242517143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t4242517143 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t4242517143, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULES_T4242517143_H
#ifndef SCRIPTPLAYABLEOUTPUT_T3048749681_H
#define SCRIPTPLAYABLEOUTPUT_T3048749681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t3048749681 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t2224782001  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t3048749681, ___m_Handle_0)); }
	inline PlayableOutputHandle_t2224782001  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t2224782001 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t2224782001  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T3048749681_H
#ifndef MULTICASTDELEGATE_T3832388771_H
#define MULTICASTDELEGATE_T3832388771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3832388771  : public Delegate_t1963659827
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3832388771 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3832388771 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3832388771, ___prev_9)); }
	inline MulticastDelegate_t3832388771 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3832388771 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3832388771 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3832388771, ___kpm_next_10)); }
	inline MulticastDelegate_t3832388771 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3832388771 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3832388771 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3832388771_H
#ifndef FRAMEDATA_T3404537667_H
#define FRAMEDATA_T3404537667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t3404537667 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_4;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_5;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t3404537667, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t3404537667, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t3404537667, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t3404537667, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t3404537667, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t3404537667, ___m_Flags_5)); }
	inline int32_t get_m_Flags_5() const { return ___m_Flags_5; }
	inline int32_t* get_address_of_m_Flags_5() { return &___m_Flags_5; }
	inline void set_m_Flags_5(int32_t value)
	{
		___m_Flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDATA_T3404537667_H
#ifndef PLAYABLEBINDING_T2821263714_H
#define PLAYABLEBINDING_T2821263714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t2821263714 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t3930070151 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2821263714__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t2821263714, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t2821263714, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t2821263714, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t3930070151 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t3930070151 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t3930070151 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t2821263714, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t2821263714_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t2312495831* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t2821263714_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t2312495831* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t2312495831** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t2312495831* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t2821263714_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2821263714_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t3930070151_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2821263714__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t2821263714_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t3930070151_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t2821263714__padding[1];
	};
};
#endif // PLAYABLEBINDING_T2821263714_H
#ifndef SCRIPTABLEOBJECT_T1896290999_H
#define SCRIPTABLEOBJECT_T1896290999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1896290999  : public Object_t3930070151
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1896290999_marshaled_pinvoke : public Object_t3930070151_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1896290999_marshaled_com : public Object_t3930070151_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1896290999_H
#ifndef U3CU3EC__ITERATOR0_T704772835_H
#define U3CU3EC__ITERATOR0_T704772835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONObject/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t704772835  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Umeng.JSONNode> Umeng.JSONObject/<>c__Iterator0::$locvar0
	Enumerator_t3611564117  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Umeng.JSONNode> Umeng.JSONObject/<>c__Iterator0::<N>__1
	KeyValuePair_2_t3762506220  ___U3CNU3E__1_1;
	// Umeng.JSONObject Umeng.JSONObject/<>c__Iterator0::$this
	JSONObject_t3610623851 * ___U24this_2;
	// Umeng.JSONNode Umeng.JSONObject/<>c__Iterator0::$current
	JSONNode_t2132032364 * ___U24current_3;
	// System.Boolean Umeng.JSONObject/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Umeng.JSONObject/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t704772835, ___U24locvar0_0)); }
	inline Enumerator_t3611564117  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t3611564117 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t3611564117  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t704772835, ___U3CNU3E__1_1)); }
	inline KeyValuePair_2_t3762506220  get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline KeyValuePair_2_t3762506220 * get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(KeyValuePair_2_t3762506220  value)
	{
		___U3CNU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t704772835, ___U24this_2)); }
	inline JSONObject_t3610623851 * get_U24this_2() const { return ___U24this_2; }
	inline JSONObject_t3610623851 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONObject_t3610623851 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t704772835, ___U24current_3)); }
	inline JSONNode_t2132032364 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t2132032364 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t2132032364 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t704772835, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t704772835, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR0_T704772835_H
#ifndef COMPONENT_T1824492855_H
#define COMPONENT_T1824492855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1824492855  : public Object_t3930070151
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1824492855_H
#ifndef LOGGER_T4281964690_H
#define LOGGER_T4281964690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t4281964690  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t4281964690, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t4281964690, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t4281964690, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T4281964690_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T1112219718_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T1112219718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONObject/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t1112219718  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Umeng.JSONNode> Umeng.JSONObject/<GetEnumerator>c__Iterator1::$locvar0
	Enumerator_t3611564117  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Umeng.JSONNode> Umeng.JSONObject/<GetEnumerator>c__Iterator1::<N>__1
	KeyValuePair_2_t3762506220  ___U3CNU3E__1_1;
	// Umeng.JSONObject Umeng.JSONObject/<GetEnumerator>c__Iterator1::$this
	JSONObject_t3610623851 * ___U24this_2;
	// System.Object Umeng.JSONObject/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Umeng.JSONObject/<GetEnumerator>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 Umeng.JSONObject/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1112219718, ___U24locvar0_0)); }
	inline Enumerator_t3611564117  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t3611564117 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t3611564117  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1112219718, ___U3CNU3E__1_1)); }
	inline KeyValuePair_2_t3762506220  get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline KeyValuePair_2_t3762506220 * get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(KeyValuePair_2_t3762506220  value)
	{
		___U3CNU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1112219718, ___U24this_2)); }
	inline JSONObject_t3610623851 * get_U24this_2() const { return ___U24this_2; }
	inline JSONObject_t3610623851 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONObject_t3610623851 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1112219718, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1112219718, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1112219718, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T1112219718_H
#ifndef REMAINDELEGATE_T4027683115_H
#define REMAINDELEGATE_T4027683115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush/RemainDelegate
struct  RemainDelegate_t4027683115  : public MulticastDelegate_t3832388771
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMAINDELEGATE_T4027683115_H
#ifndef TAGSDELEGATE_T1654061426_H
#define TAGSDELEGATE_T1654061426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush/TagsDelegate
struct  TagsDelegate_t1654061426  : public MulticastDelegate_t3832388771
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAGSDELEGATE_T1654061426_H
#ifndef TAGHANDLER_T962403639_H
#define TAGHANDLER_T962403639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush/TagHandler
struct  TagHandler_t962403639  : public MulticastDelegate_t3832388771
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAGHANDLER_T962403639_H
#ifndef AUTHDELEGATE_T705881329_H
#define AUTHDELEGATE_T705881329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial/AuthDelegate
struct  AuthDelegate_t705881329  : public MulticastDelegate_t3832388771
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHDELEGATE_T705881329_H
#ifndef SHAREDELEGATE_T3145578921_H
#define SHAREDELEGATE_T3145578921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial/ShareDelegate
struct  ShareDelegate_t3145578921  : public MulticastDelegate_t3832388771
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDELEGATE_T3145578921_H
#ifndef BEHAVIOUR_T9571105_H
#define BEHAVIOUR_T9571105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t9571105  : public Component_t1824492855
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T9571105_H
#ifndef PLAYABLEASSET_T1673961816_H
#define PLAYABLEASSET_T1673961816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t1673961816  : public ScriptableObject_t1896290999
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T1673961816_H
#ifndef AUTHHANDLER_T1442270141_H
#define AUTHHANDLER_T1442270141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial/AuthHandler
struct  AuthHandler_t1442270141  : public MulticastDelegate_t3832388771
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHHANDLER_T1442270141_H
#ifndef CSSMEASUREFUNC_T3181407801_H
#define CSSMEASUREFUNC_T3181407801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureFunc
struct  CSSMeasureFunc_t3181407801  : public MulticastDelegate_t3832388771
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREFUNC_T3181407801_H
#ifndef PLAYERCONNECTION_T2363083354_H
#define PLAYERCONNECTION_T2363083354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t2363083354  : public ScriptableObject_t1896290999
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t8564207 * ___m_PlayerEditorConnectionEvents_2;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t1709171767 * ___m_connectedPlayers_3;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t2363083354, ___m_PlayerEditorConnectionEvents_2)); }
	inline PlayerEditorConnectionEvents_t8564207 * get_m_PlayerEditorConnectionEvents_2() const { return ___m_PlayerEditorConnectionEvents_2; }
	inline PlayerEditorConnectionEvents_t8564207 ** get_address_of_m_PlayerEditorConnectionEvents_2() { return &___m_PlayerEditorConnectionEvents_2; }
	inline void set_m_PlayerEditorConnectionEvents_2(PlayerEditorConnectionEvents_t8564207 * value)
	{
		___m_PlayerEditorConnectionEvents_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_2), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t2363083354, ___m_connectedPlayers_3)); }
	inline List_1_t1709171767 * get_m_connectedPlayers_3() const { return ___m_connectedPlayers_3; }
	inline List_1_t1709171767 ** get_address_of_m_connectedPlayers_3() { return &___m_connectedPlayers_3; }
	inline void set_m_connectedPlayers_3(List_1_t1709171767 * value)
	{
		___m_connectedPlayers_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_3), value);
	}
};

struct PlayerConnection_t2363083354_StaticFields
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t2363083354 * ___s_Instance_4;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t2363083354_StaticFields, ___s_Instance_4)); }
	inline PlayerConnection_t2363083354 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline PlayerConnection_t2363083354 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(PlayerConnection_t2363083354 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T2363083354_H
#ifndef SHAREBOARDDISMISSDELEGATE_T3341855364_H
#define SHAREBOARDDISMISSDELEGATE_T3341855364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial/ShareBoardDismissDelegate
struct  ShareBoardDismissDelegate_t3341855364  : public MulticastDelegate_t3832388771
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREBOARDDISMISSDELEGATE_T3341855364_H
#ifndef ALIASDELEGATE_T2631918157_H
#define ALIASDELEGATE_T2631918157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush/AliasDelegate
struct  AliasDelegate_t2631918157  : public MulticastDelegate_t3832388771
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIASDELEGATE_T2631918157_H
#ifndef MONOBEHAVIOUR_T4234310604_H
#define MONOBEHAVIOUR_T4234310604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4234310604  : public Behaviour_t9571105
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4234310604_H
#ifndef GAMEEXAMPLE_T3740343773_H
#define GAMEEXAMPLE_T3740343773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameExample
struct  GameExample_t3740343773  : public MonoBehaviour_t4234310604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEEXAMPLE_T3740343773_H
#ifndef PUSHDEMO_T2659339453_H
#define PUSHDEMO_T2659339453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PushDemo
struct  PushDemo_t2659339453  : public MonoBehaviour_t4234310604
{
public:
	// System.String PushDemo::str
	String_t* ___str_2;
	// UnityEngine.Texture2D PushDemo::texture
	Texture2D_t3408798722 * ___texture_3;

public:
	inline static int32_t get_offset_of_str_2() { return static_cast<int32_t>(offsetof(PushDemo_t2659339453, ___str_2)); }
	inline String_t* get_str_2() const { return ___str_2; }
	inline String_t** get_address_of_str_2() { return &___str_2; }
	inline void set_str_2(String_t* value)
	{
		___str_2 = value;
		Il2CppCodeGenWriteBarrier((&___str_2), value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(PushDemo_t2659339453, ___texture_3)); }
	inline Texture2D_t3408798722 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t3408798722 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t3408798722 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier((&___texture_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUSHDEMO_T2659339453_H
#ifndef ENTRY_T1976556246_H
#define ENTRY_T1976556246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Entry
struct  Entry_t1976556246  : public MonoBehaviour_t4234310604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T1976556246_H
#ifndef SOCIALDEMO_T399119850_H
#define SOCIALDEMO_T399119850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocialDemo
struct  SocialDemo_t399119850  : public MonoBehaviour_t4234310604
{
public:
	// System.String SocialDemo::str
	String_t* ___str_2;
	// UnityEngine.Texture2D SocialDemo::texture
	Texture2D_t3408798722 * ___texture_3;

public:
	inline static int32_t get_offset_of_str_2() { return static_cast<int32_t>(offsetof(SocialDemo_t399119850, ___str_2)); }
	inline String_t* get_str_2() const { return ___str_2; }
	inline String_t** get_address_of_str_2() { return &___str_2; }
	inline void set_str_2(String_t* value)
	{
		___str_2 = value;
		Il2CppCodeGenWriteBarrier((&___str_2), value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(SocialDemo_t399119850, ___texture_3)); }
	inline Texture2D_t3408798722 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t3408798722 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t3408798722 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier((&___texture_3), value);
	}
};

struct SocialDemo_t399119850_StaticFields
{
public:
	// UMSocial/ShareBoardDismissDelegate SocialDemo::<>f__am$cache0
	ShareBoardDismissDelegate_t3341855364 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(SocialDemo_t399119850_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline ShareBoardDismissDelegate_t3341855364 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline ShareBoardDismissDelegate_t3341855364 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(ShareBoardDismissDelegate_t3341855364 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCIALDEMO_T399119850_H
#ifndef UMENGMANAGER_T3130740536_H
#define UMENGMANAGER_T3130740536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UmengManager
struct  UmengManager_t3130740536  : public MonoBehaviour_t4234310604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UMENGMANAGER_T3130740536_H
#ifndef ANALYTICSENTRY_T2435559265_H
#define ANALYTICSENTRY_T2435559265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnalyticsEntry
struct  AnalyticsEntry_t2435559265  : public MonoBehaviour_t4234310604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSENTRY_T2435559265_H
#ifndef DPLUS_T1807328900_H
#define DPLUS_T1807328900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DPlus
struct  DPlus_t1807328900  : public MonoBehaviour_t4234310604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DPLUS_T1807328900_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (ThreadAndSerializationSafeAttribute_t1619637752), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (ReadOnlyAttribute_t1861832315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (ReadWriteAttribute_t3878371113), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (WriteOnlyAttribute_t2660123611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (DeallocateOnJobCompletionAttribute_t1582984257), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (NativeContainerAttribute_t587235187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t301443771), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t1809124851), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (FrameData_t3404537667)+ sizeof (RuntimeObject), sizeof(FrameData_t3404537667 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1408[6] = 
{
	FrameData_t3404537667::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3404537667::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3404537667::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3404537667::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3404537667::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3404537667::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (Flags_t3409389139)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1409[5] = 
{
	Flags_t3409389139::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (PlayableBinding_t2821263714)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t2821263714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1413[6] = 
{
	PlayableBinding_t2821263714_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t2821263714_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t2821263714::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2821263714::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2821263714::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t2821263714::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (PlayableAsset_t1673961816), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (PlayableBehaviour_t1385104644), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (PlayableExtensions_t2437383749), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (ScriptPlayableOutput_t3048749681)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t3048749681 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1418[1] = 
{
	ScriptPlayableOutput_t3048749681::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (DefaultValueAttribute_t4015729586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1419[1] = 
{
	DefaultValueAttribute_t4015729586::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (ExcludeFromDocsAttribute_t2740626855), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (Logger_t4281964690), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1423[3] = 
{
	Logger_t4281964690::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t4281964690::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t4281964690::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (MessageEventArgs_t1256821806), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1424[2] = 
{
	MessageEventArgs_t1256821806::get_offset_of_playerId_0(),
	MessageEventArgs_t1256821806::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (PlayerConnection_t2363083354), -1, sizeof(PlayerConnection_t2363083354_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1426[3] = 
{
	PlayerConnection_t2363083354::get_offset_of_m_PlayerEditorConnectionEvents_2(),
	PlayerConnection_t2363083354::get_offset_of_m_connectedPlayers_3(),
	PlayerConnection_t2363083354_StaticFields::get_offset_of_s_Instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (PlayerEditorConnectionEvents_t8564207), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1427[3] = 
{
	PlayerEditorConnectionEvents_t8564207::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t8564207::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t8564207::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (MessageEvent_t3233149967), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (ConnectionChangeEvent_t488000426), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (MessageTypeSubscribers_t3095351568), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1430[3] = 
{
	MessageTypeSubscribers_t3095351568::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t3095351568::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t3095351568::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3577989818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1431[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3577989818::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (RenderPipelineManager_t1948574611), -1, sizeof(RenderPipelineManager_t1948574611_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1434[2] = 
{
	RenderPipelineManager_t1948574611_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t1948574611_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (UsedByNativeCodeAttribute_t1174639766), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (RequiredByNativeCodeAttribute_t911358449), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (FormerlySerializedAsAttribute_t3247230428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1437[1] = 
{
	FormerlySerializedAsAttribute_t3247230428::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (TypeInferenceRules_t4242517143)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1438[5] = 
{
	TypeInferenceRules_t4242517143::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (TypeInferenceRuleAttribute_t1454464820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1439[1] = 
{
	TypeInferenceRuleAttribute_t1454464820::get_offset_of__rule_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (GenericStack_t308596898), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (NetFxCoreExtensions_t835221944), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (CSSMeasureFunc_t3181407801), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (CSSMeasureMode_t1649537803)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1443[4] = 
{
	CSSMeasureMode_t1649537803::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (CSSSize_t1700018466)+ sizeof (RuntimeObject), sizeof(CSSSize_t1700018466 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1444[2] = 
{
	CSSSize_t1700018466::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CSSSize_t1700018466::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (Native_t3026998083), -1, sizeof(Native_t3026998083_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1445[1] = 
{
	Native_t3026998083_StaticFields::get_offset_of_s_MeasureFunctions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (U3CModuleU3E_t691557962), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (Entry_t1976556246), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (AnalyticsEntry_t2435559265), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (DPlus_t1807328900), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (GameExample_t3740343773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (Analytics_t976438730), -1, sizeof(Analytics_t976438730_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1451[2] = 
{
	Analytics_t976438730_StaticFields::get_offset_of__AppKey_0(),
	Analytics_t976438730_StaticFields::get_offset_of__ChannelId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (ReportPolicy_t964809402)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1452[5] = 
{
	ReportPolicy_t964809402::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (DplusAgent_t1686972101), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (GA_t4222336886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (Gender_t3249406401)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1455[4] = 
{
	Gender_t3249406401::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (PaySource_t35490788)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1456[31] = 
{
	PaySource_t35490788::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (BonusSource_t3392473324)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1457[11] = 
{
	BonusSource_t3392473324::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (JSONNodeType_t2742862151)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1458[8] = 
{
	JSONNodeType_t2742862151::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (JSONNode_t2132032364), -1, sizeof(JSONNode_t2132032364_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1459[1] = 
{
	JSONNode_t2132032364_StaticFields::get_offset_of_m_EscapeBuilder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (U3CU3Ec__Iterator0_t2099519925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1460[3] = 
{
	U3CU3Ec__Iterator0_t2099519925::get_offset_of_U24current_0(),
	U3CU3Ec__Iterator0_t2099519925::get_offset_of_U24disposing_1(),
	U3CU3Ec__Iterator0_t2099519925::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (U3CU3Ec__Iterator1_t3385952531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1461[8] = 
{
	U3CU3Ec__Iterator1_t3385952531::get_offset_of_U24locvar0_0(),
	U3CU3Ec__Iterator1_t3385952531::get_offset_of_U3CCU3E__1_1(),
	U3CU3Ec__Iterator1_t3385952531::get_offset_of_U24locvar1_2(),
	U3CU3Ec__Iterator1_t3385952531::get_offset_of_U3CDU3E__2_3(),
	U3CU3Ec__Iterator1_t3385952531::get_offset_of_U24this_4(),
	U3CU3Ec__Iterator1_t3385952531::get_offset_of_U24current_5(),
	U3CU3Ec__Iterator1_t3385952531::get_offset_of_U24disposing_6(),
	U3CU3Ec__Iterator1_t3385952531::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (JSONArray_t294298289), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1462[1] = 
{
	JSONArray_t294298289::get_offset_of_m_List_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (U3CU3Ec__Iterator0_t1432947745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1463[6] = 
{
	U3CU3Ec__Iterator0_t1432947745::get_offset_of_U24locvar0_0(),
	U3CU3Ec__Iterator0_t1432947745::get_offset_of_U3CNU3E__1_1(),
	U3CU3Ec__Iterator0_t1432947745::get_offset_of_U24this_2(),
	U3CU3Ec__Iterator0_t1432947745::get_offset_of_U24current_3(),
	U3CU3Ec__Iterator0_t1432947745::get_offset_of_U24disposing_4(),
	U3CU3Ec__Iterator0_t1432947745::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (U3CGetEnumeratorU3Ec__Iterator1_t2066019513), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1464[6] = 
{
	U3CGetEnumeratorU3Ec__Iterator1_t2066019513::get_offset_of_U24locvar0_0(),
	U3CGetEnumeratorU3Ec__Iterator1_t2066019513::get_offset_of_U3CNU3E__1_1(),
	U3CGetEnumeratorU3Ec__Iterator1_t2066019513::get_offset_of_U24this_2(),
	U3CGetEnumeratorU3Ec__Iterator1_t2066019513::get_offset_of_U24current_3(),
	U3CGetEnumeratorU3Ec__Iterator1_t2066019513::get_offset_of_U24disposing_4(),
	U3CGetEnumeratorU3Ec__Iterator1_t2066019513::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (JSONObject_t3610623851), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[1] = 
{
	JSONObject_t3610623851::get_offset_of_m_Dict_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (U3CRemoveU3Ec__AnonStorey2_t1294959417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1466[1] = 
{
	U3CRemoveU3Ec__AnonStorey2_t1294959417::get_offset_of_aNode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (U3CU3Ec__Iterator0_t704772835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1467[6] = 
{
	U3CU3Ec__Iterator0_t704772835::get_offset_of_U24locvar0_0(),
	U3CU3Ec__Iterator0_t704772835::get_offset_of_U3CNU3E__1_1(),
	U3CU3Ec__Iterator0_t704772835::get_offset_of_U24this_2(),
	U3CU3Ec__Iterator0_t704772835::get_offset_of_U24current_3(),
	U3CU3Ec__Iterator0_t704772835::get_offset_of_U24disposing_4(),
	U3CU3Ec__Iterator0_t704772835::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (U3CGetEnumeratorU3Ec__Iterator1_t1112219718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1468[6] = 
{
	U3CGetEnumeratorU3Ec__Iterator1_t1112219718::get_offset_of_U24locvar0_0(),
	U3CGetEnumeratorU3Ec__Iterator1_t1112219718::get_offset_of_U3CNU3E__1_1(),
	U3CGetEnumeratorU3Ec__Iterator1_t1112219718::get_offset_of_U24this_2(),
	U3CGetEnumeratorU3Ec__Iterator1_t1112219718::get_offset_of_U24current_3(),
	U3CGetEnumeratorU3Ec__Iterator1_t1112219718::get_offset_of_U24disposing_4(),
	U3CGetEnumeratorU3Ec__Iterator1_t1112219718::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (JSONString_t4274241648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1469[1] = 
{
	JSONString_t4274241648::get_offset_of_m_Data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (JSONNumber_t261243322), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1470[1] = 
{
	JSONNumber_t261243322::get_offset_of_m_Data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (JSONBool_t2828218678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1471[1] = 
{
	JSONBool_t2828218678::get_offset_of_m_Data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (JSONNull_t414207411), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (JSONLazyCreator_t3000425712), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1473[2] = 
{
	JSONLazyCreator_t3000425712::get_offset_of_m_Node_1(),
	JSONLazyCreator_t3000425712::get_offset_of_m_Key_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (JSON_t2513727886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (UmengManager_t3130740536), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { sizeof (PushDemo_t2659339453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1476[2] = 
{
	PushDemo_t2659339453::get_offset_of_str_2(),
	PushDemo_t2659339453::get_offset_of_texture_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (UMPush_t2533043275), -1, sizeof(UMPush_t2533043275_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1477[10] = 
{
	0,
	UMPush_t2533043275_StaticFields::get_offset_of_aliasDelegate_1(),
	UMPush_t2533043275_StaticFields::get_offset_of_remainDelegate_2(),
	UMPush_t2533043275_StaticFields::get_offset_of_tagDelegate_3(),
	UMPush_t2533043275_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_4(),
	UMPush_t2533043275_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_5(),
	UMPush_t2533043275_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_6(),
	UMPush_t2533043275_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_7(),
	UMPush_t2533043275_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_8(),
	UMPush_t2533043275_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (AliasDelegate_t2631918157), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (RemainDelegate_t4027683115), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (TagsDelegate_t1654061426), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (TagHandler_t962403639), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (SocialDemo_t399119850), -1, sizeof(SocialDemo_t399119850_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1482[3] = 
{
	SocialDemo_t399119850::get_offset_of_str_2(),
	SocialDemo_t399119850::get_offset_of_texture_3(),
	SocialDemo_t399119850_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (Platform_t3519220963)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1483[35] = 
{
	Platform_t3519220963::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (UMSocial_t3858466060), -1, sizeof(UMSocial_t3858466060_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1484[10] = 
{
	0,
	UMSocial_t3858466060_StaticFields::get_offset_of_appKey_1(),
	UMSocial_t3858466060_StaticFields::get_offset_of_authDelegate_2(),
	UMSocial_t3858466060_StaticFields::get_offset_of_shareDelegate_3(),
	UMSocial_t3858466060_StaticFields::get_offset_of_dismissDelegate_4(),
	UMSocial_t3858466060_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_5(),
	UMSocial_t3858466060_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_6(),
	UMSocial_t3858466060_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_7(),
	UMSocial_t3858466060_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_8(),
	UMSocial_t3858466060_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (AuthDelegate_t705881329), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (ShareDelegate_t3145578921), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (ShareBoardDismissDelegate_t3341855364), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (AuthHandler_t1442270141), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (U3CPrivateImplementationDetailsU3E_t2987506077), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2987506077_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1489[1] = 
{
	U3CPrivateImplementationDetailsU3E_t2987506077_StaticFields::get_offset_of_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { sizeof (U24ArrayTypeU3D20_t1893012298)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D20_t1893012298 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
