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

// System.Object[]
struct ObjectU5BU5D_t2649391668;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t536170751;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t1487643435;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t1572885554;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t272923061;
// Umeng.JSONNode
struct JSONNode_t3954616423;
// System.Collections.Generic.IEnumerator`1<Umeng.JSONNode>
struct IEnumerator_1_t4042121057;
// UMSocial/AuthDelegate
struct AuthDelegate_t272104345;
// UMSocial/ShareDelegate
struct ShareDelegate_t1292009655;
// UMSocial/ShareBoardDismissDelegate
struct ShareBoardDismissDelegate_t3445076420;
// UMSocial/AuthHandler
struct AuthHandler_t290707335;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t2756255477;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t2914339937;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t3148462287;
// UMPush/AliasDelegate
struct AliasDelegate_t1464217712;
// UMPush/RemainDelegate
struct RemainDelegate_t329673834;
// UMPush/TagsDelegate
struct TagsDelegate_t1391120001;
// UMPush/TagHandler
struct TagHandler_t1641990155;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1848325911;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t206888700;
// System.Byte[]
struct ByteU5BU5D_t934357067;
// System.Char[]
struct CharU5BU5D_t2845897625;
// System.Collections.Generic.List`1<Umeng.JSONNode>
struct List_1_t1893531690;
// System.Collections.Generic.Dictionary`2<System.String,Umeng.JSONNode>
struct Dictionary_2_t4238706458;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1391267733;
// System.Void
struct Void_t1177341432;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t757370556;
// Umeng.JSONArray
struct JSONArray_t1460046023;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t296749989;
// UnityEngine.Object
struct Object_t2031778318;
// System.Type
struct Type_t;
// UnityEngine.ILogHandler
struct ILogHandler_t2513254930;
// Umeng.JSONObject
struct JSONObject_t1871021467;
// System.IAsyncResult
struct IAsyncResult_t3471076305;
// System.AsyncCallback
struct AsyncCallback_t3171489770;
// System.String[]
struct StringU5BU5D_t336408473;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3588072699;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t336534435;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2495571775;
// UnityEngine.Texture2D
struct Texture2D_t1631332924;

struct Object_t2031778318_marshaled_com;



#ifndef U3CMODULEU3E_T3800972651_H
#define U3CMODULEU3E_T3800972651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3800972651 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3800972651_H
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
#ifndef NETFXCOREEXTENSIONS_T2285086338_H
#define NETFXCOREEXTENSIONS_T2285086338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t2285086338  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T2285086338_H
#ifndef STACK_T1896138532_H
#define STACK_T1896138532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t1896138532  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t2649391668* ___contents_0;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_1;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_4;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(Stack_t1896138532, ___contents_0)); }
	inline ObjectU5BU5D_t2649391668* get_contents_0() const { return ___contents_0; }
	inline ObjectU5BU5D_t2649391668** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(ObjectU5BU5D_t2649391668* value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Stack_t1896138532, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Stack_t1896138532, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Stack_t1896138532, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_modCount_4() { return static_cast<int32_t>(offsetof(Stack_t1896138532, ___modCount_4)); }
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
#endif // STACK_T1896138532_H
#ifndef RENDERPIPELINEMANAGER_T1518584688_H
#define RENDERPIPELINEMANAGER_T1518584688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t1518584688  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t1518584688_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t1518584688_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t1518584688_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
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
#endif // RENDERPIPELINEMANAGER_T1518584688_H
#ifndef JSON_T1865989780_H
#define JSON_T1865989780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSON
struct  JSON_t1865989780  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T1865989780_H
#ifndef NATIVE_T1201166252_H
#define NATIVE_T1201166252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.Native
struct  Native_t1201166252  : public RuntimeObject
{
public:

public:
};

struct Native_t1201166252_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> UnityEngine.CSSLayout.Native::s_MeasureFunctions
	Dictionary_2_t1572885554 * ___s_MeasureFunctions_0;

public:
	inline static int32_t get_offset_of_s_MeasureFunctions_0() { return static_cast<int32_t>(offsetof(Native_t1201166252_StaticFields, ___s_MeasureFunctions_0)); }
	inline Dictionary_2_t1572885554 * get_s_MeasureFunctions_0() const { return ___s_MeasureFunctions_0; }
	inline Dictionary_2_t1572885554 ** get_address_of_s_MeasureFunctions_0() { return &___s_MeasureFunctions_0; }
	inline void set_s_MeasureFunctions_0(Dictionary_2_t1572885554 * value)
	{
		___s_MeasureFunctions_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_MeasureFunctions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVE_T1201166252_H
#ifndef ANALYTICS_T760990975_H
#define ANALYTICS_T760990975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.Analytics
struct  Analytics_t760990975  : public RuntimeObject
{
public:

public:
};

struct Analytics_t760990975_StaticFields
{
public:
	// System.String Umeng.Analytics::_AppKey
	String_t* ____AppKey_0;
	// System.String Umeng.Analytics::_ChannelId
	String_t* ____ChannelId_1;

public:
	inline static int32_t get_offset_of__AppKey_0() { return static_cast<int32_t>(offsetof(Analytics_t760990975_StaticFields, ____AppKey_0)); }
	inline String_t* get__AppKey_0() const { return ____AppKey_0; }
	inline String_t** get_address_of__AppKey_0() { return &____AppKey_0; }
	inline void set__AppKey_0(String_t* value)
	{
		____AppKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____AppKey_0), value);
	}

	inline static int32_t get_offset_of__ChannelId_1() { return static_cast<int32_t>(offsetof(Analytics_t760990975_StaticFields, ____ChannelId_1)); }
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
#endif // ANALYTICS_T760990975_H
#ifndef DPLUSAGENT_T3427863882_H
#define DPLUSAGENT_T3427863882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.DplusAgent
struct  DplusAgent_t3427863882  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DPLUSAGENT_T3427863882_H
#ifndef VALUETYPE_T2791561850_H
#define VALUETYPE_T2791561850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2791561850  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2791561850_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2791561850_marshaled_com
{
};
#endif // VALUETYPE_T2791561850_H
#ifndef ATTRIBUTE_T203173102_H
#define ATTRIBUTE_T203173102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t203173102  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T203173102_H
#ifndef JSONNODE_T3954616423_H
#define JSONNODE_T3954616423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNode
struct  JSONNode_t3954616423  : public RuntimeObject
{
public:

public:
};

struct JSONNode_t3954616423_StaticFields
{
public:
	// System.Text.StringBuilder Umeng.JSONNode::m_EscapeBuilder
	StringBuilder_t272923061 * ___m_EscapeBuilder_0;

public:
	inline static int32_t get_offset_of_m_EscapeBuilder_0() { return static_cast<int32_t>(offsetof(JSONNode_t3954616423_StaticFields, ___m_EscapeBuilder_0)); }
	inline StringBuilder_t272923061 * get_m_EscapeBuilder_0() const { return ___m_EscapeBuilder_0; }
	inline StringBuilder_t272923061 ** get_address_of_m_EscapeBuilder_0() { return &___m_EscapeBuilder_0; }
	inline void set_m_EscapeBuilder_0(StringBuilder_t272923061 * value)
	{
		___m_EscapeBuilder_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_EscapeBuilder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNODE_T3954616423_H
#ifndef U3CU3EC__ITERATOR0_T1435461259_H
#define U3CU3EC__ITERATOR0_T1435461259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNode/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t1435461259  : public RuntimeObject
{
public:
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator0::$current
	JSONNode_t3954616423 * ___U24current_0;
	// System.Boolean Umeng.JSONNode/<>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 Umeng.JSONNode/<>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1435461259, ___U24current_0)); }
	inline JSONNode_t3954616423 * get_U24current_0() const { return ___U24current_0; }
	inline JSONNode_t3954616423 ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(JSONNode_t3954616423 * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1435461259, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t1435461259, ___U24PC_2)); }
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
#endif // U3CU3EC__ITERATOR0_T1435461259_H
#ifndef U3CU3EC__ITERATOR1_T239304636_H
#define U3CU3EC__ITERATOR1_T239304636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNode/<>c__Iterator1
struct  U3CU3Ec__Iterator1_t239304636  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<Umeng.JSONNode> Umeng.JSONNode/<>c__Iterator1::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator1::<C>__1
	JSONNode_t3954616423 * ___U3CCU3E__1_1;
	// System.Collections.Generic.IEnumerator`1<Umeng.JSONNode> Umeng.JSONNode/<>c__Iterator1::$locvar1
	RuntimeObject* ___U24locvar1_2;
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator1::<D>__2
	JSONNode_t3954616423 * ___U3CDU3E__2_3;
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator1::$this
	JSONNode_t3954616423 * ___U24this_4;
	// Umeng.JSONNode Umeng.JSONNode/<>c__Iterator1::$current
	JSONNode_t3954616423 * ___U24current_5;
	// System.Boolean Umeng.JSONNode/<>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 Umeng.JSONNode/<>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t239304636, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CCU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t239304636, ___U3CCU3E__1_1)); }
	inline JSONNode_t3954616423 * get_U3CCU3E__1_1() const { return ___U3CCU3E__1_1; }
	inline JSONNode_t3954616423 ** get_address_of_U3CCU3E__1_1() { return &___U3CCU3E__1_1; }
	inline void set_U3CCU3E__1_1(JSONNode_t3954616423 * value)
	{
		___U3CCU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t239304636, ___U24locvar1_2)); }
	inline RuntimeObject* get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline RuntimeObject** get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(RuntimeObject* value)
	{
		___U24locvar1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar1_2), value);
	}

	inline static int32_t get_offset_of_U3CDU3E__2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t239304636, ___U3CDU3E__2_3)); }
	inline JSONNode_t3954616423 * get_U3CDU3E__2_3() const { return ___U3CDU3E__2_3; }
	inline JSONNode_t3954616423 ** get_address_of_U3CDU3E__2_3() { return &___U3CDU3E__2_3; }
	inline void set_U3CDU3E__2_3(JSONNode_t3954616423 * value)
	{
		___U3CDU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDU3E__2_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t239304636, ___U24this_4)); }
	inline JSONNode_t3954616423 * get_U24this_4() const { return ___U24this_4; }
	inline JSONNode_t3954616423 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(JSONNode_t3954616423 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t239304636, ___U24current_5)); }
	inline JSONNode_t3954616423 * get_U24current_5() const { return ___U24current_5; }
	inline JSONNode_t3954616423 ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(JSONNode_t3954616423 * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t239304636, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t239304636, ___U24PC_7)); }
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
#endif // U3CU3EC__ITERATOR1_T239304636_H
#ifndef U3CREMOVEU3EC__ANONSTOREY2_T483619681_H
#define U3CREMOVEU3EC__ANONSTOREY2_T483619681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONObject/<Remove>c__AnonStorey2
struct  U3CRemoveU3Ec__AnonStorey2_t483619681  : public RuntimeObject
{
public:
	// Umeng.JSONNode Umeng.JSONObject/<Remove>c__AnonStorey2::aNode
	JSONNode_t3954616423 * ___aNode_0;

public:
	inline static int32_t get_offset_of_aNode_0() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ec__AnonStorey2_t483619681, ___aNode_0)); }
	inline JSONNode_t3954616423 * get_aNode_0() const { return ___aNode_0; }
	inline JSONNode_t3954616423 ** get_address_of_aNode_0() { return &___aNode_0; }
	inline void set_aNode_0(JSONNode_t3954616423 * value)
	{
		___aNode_0 = value;
		Il2CppCodeGenWriteBarrier((&___aNode_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREMOVEU3EC__ANONSTOREY2_T483619681_H
#ifndef UMSOCIAL_T3347134995_H
#define UMSOCIAL_T3347134995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial
struct  UMSocial_t3347134995  : public RuntimeObject
{
public:

public:
};

struct UMSocial_t3347134995_StaticFields
{
public:
	// System.String UMSocial::appKey
	String_t* ___appKey_1;
	// UMSocial/AuthDelegate UMSocial::authDelegate
	AuthDelegate_t272104345 * ___authDelegate_2;
	// UMSocial/ShareDelegate UMSocial::shareDelegate
	ShareDelegate_t1292009655 * ___shareDelegate_3;
	// UMSocial/ShareBoardDismissDelegate UMSocial::dismissDelegate
	ShareBoardDismissDelegate_t3445076420 * ___dismissDelegate_4;
	// UMSocial/AuthHandler UMSocial::<>f__mg$cache0
	AuthHandler_t290707335 * ___U3CU3Ef__mgU24cache0_5;
	// UMSocial/AuthHandler UMSocial::<>f__mg$cache1
	AuthHandler_t290707335 * ___U3CU3Ef__mgU24cache1_6;
	// UMSocial/ShareDelegate UMSocial::<>f__mg$cache2
	ShareDelegate_t1292009655 * ___U3CU3Ef__mgU24cache2_7;
	// UMSocial/ShareBoardDismissDelegate UMSocial::<>f__mg$cache3
	ShareBoardDismissDelegate_t3445076420 * ___U3CU3Ef__mgU24cache3_8;
	// UMSocial/ShareDelegate UMSocial::<>f__mg$cache4
	ShareDelegate_t1292009655 * ___U3CU3Ef__mgU24cache4_9;

public:
	inline static int32_t get_offset_of_appKey_1() { return static_cast<int32_t>(offsetof(UMSocial_t3347134995_StaticFields, ___appKey_1)); }
	inline String_t* get_appKey_1() const { return ___appKey_1; }
	inline String_t** get_address_of_appKey_1() { return &___appKey_1; }
	inline void set_appKey_1(String_t* value)
	{
		___appKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___appKey_1), value);
	}

	inline static int32_t get_offset_of_authDelegate_2() { return static_cast<int32_t>(offsetof(UMSocial_t3347134995_StaticFields, ___authDelegate_2)); }
	inline AuthDelegate_t272104345 * get_authDelegate_2() const { return ___authDelegate_2; }
	inline AuthDelegate_t272104345 ** get_address_of_authDelegate_2() { return &___authDelegate_2; }
	inline void set_authDelegate_2(AuthDelegate_t272104345 * value)
	{
		___authDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___authDelegate_2), value);
	}

	inline static int32_t get_offset_of_shareDelegate_3() { return static_cast<int32_t>(offsetof(UMSocial_t3347134995_StaticFields, ___shareDelegate_3)); }
	inline ShareDelegate_t1292009655 * get_shareDelegate_3() const { return ___shareDelegate_3; }
	inline ShareDelegate_t1292009655 ** get_address_of_shareDelegate_3() { return &___shareDelegate_3; }
	inline void set_shareDelegate_3(ShareDelegate_t1292009655 * value)
	{
		___shareDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&___shareDelegate_3), value);
	}

	inline static int32_t get_offset_of_dismissDelegate_4() { return static_cast<int32_t>(offsetof(UMSocial_t3347134995_StaticFields, ___dismissDelegate_4)); }
	inline ShareBoardDismissDelegate_t3445076420 * get_dismissDelegate_4() const { return ___dismissDelegate_4; }
	inline ShareBoardDismissDelegate_t3445076420 ** get_address_of_dismissDelegate_4() { return &___dismissDelegate_4; }
	inline void set_dismissDelegate_4(ShareBoardDismissDelegate_t3445076420 * value)
	{
		___dismissDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&___dismissDelegate_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(UMSocial_t3347134995_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline AuthHandler_t290707335 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline AuthHandler_t290707335 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(AuthHandler_t290707335 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_6() { return static_cast<int32_t>(offsetof(UMSocial_t3347134995_StaticFields, ___U3CU3Ef__mgU24cache1_6)); }
	inline AuthHandler_t290707335 * get_U3CU3Ef__mgU24cache1_6() const { return ___U3CU3Ef__mgU24cache1_6; }
	inline AuthHandler_t290707335 ** get_address_of_U3CU3Ef__mgU24cache1_6() { return &___U3CU3Ef__mgU24cache1_6; }
	inline void set_U3CU3Ef__mgU24cache1_6(AuthHandler_t290707335 * value)
	{
		___U3CU3Ef__mgU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_7() { return static_cast<int32_t>(offsetof(UMSocial_t3347134995_StaticFields, ___U3CU3Ef__mgU24cache2_7)); }
	inline ShareDelegate_t1292009655 * get_U3CU3Ef__mgU24cache2_7() const { return ___U3CU3Ef__mgU24cache2_7; }
	inline ShareDelegate_t1292009655 ** get_address_of_U3CU3Ef__mgU24cache2_7() { return &___U3CU3Ef__mgU24cache2_7; }
	inline void set_U3CU3Ef__mgU24cache2_7(ShareDelegate_t1292009655 * value)
	{
		___U3CU3Ef__mgU24cache2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_8() { return static_cast<int32_t>(offsetof(UMSocial_t3347134995_StaticFields, ___U3CU3Ef__mgU24cache3_8)); }
	inline ShareBoardDismissDelegate_t3445076420 * get_U3CU3Ef__mgU24cache3_8() const { return ___U3CU3Ef__mgU24cache3_8; }
	inline ShareBoardDismissDelegate_t3445076420 ** get_address_of_U3CU3Ef__mgU24cache3_8() { return &___U3CU3Ef__mgU24cache3_8; }
	inline void set_U3CU3Ef__mgU24cache3_8(ShareBoardDismissDelegate_t3445076420 * value)
	{
		___U3CU3Ef__mgU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_9() { return static_cast<int32_t>(offsetof(UMSocial_t3347134995_StaticFields, ___U3CU3Ef__mgU24cache4_9)); }
	inline ShareDelegate_t1292009655 * get_U3CU3Ef__mgU24cache4_9() const { return ___U3CU3Ef__mgU24cache4_9; }
	inline ShareDelegate_t1292009655 ** get_address_of_U3CU3Ef__mgU24cache4_9() { return &___U3CU3Ef__mgU24cache4_9; }
	inline void set_U3CU3Ef__mgU24cache4_9(ShareDelegate_t1292009655 * value)
	{
		___U3CU3Ef__mgU24cache4_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UMSOCIAL_T3347134995_H
#ifndef MESSAGETYPESUBSCRIBERS_T680457374_H
#define MESSAGETYPESUBSCRIBERS_T680457374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t680457374  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t2756255477 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t680457374, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t680457374, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t680457374, ___messageCallback_2)); }
	inline MessageEvent_t2756255477 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t2756255477 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t2756255477 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T680457374_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T336534435_H
#define PLAYEREDITORCONNECTIONEVENTS_T336534435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t336534435  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t2914339937 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t3148462287 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t3148462287 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t336534435, ___messageTypeSubscribers_0)); }
	inline List_1_t2914339937 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t2914339937 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t2914339937 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t336534435, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t3148462287 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t3148462287 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t3148462287 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t336534435, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t3148462287 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t3148462287 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t3148462287 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T336534435_H
#ifndef UMPUSH_T3237649304_H
#define UMPUSH_T3237649304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush
struct  UMPush_t3237649304  : public RuntimeObject
{
public:

public:
};

struct UMPush_t3237649304_StaticFields
{
public:
	// UMPush/AliasDelegate UMPush::aliasDelegate
	AliasDelegate_t1464217712 * ___aliasDelegate_1;
	// UMPush/RemainDelegate UMPush::remainDelegate
	RemainDelegate_t329673834 * ___remainDelegate_2;
	// UMPush/TagsDelegate UMPush::tagDelegate
	TagsDelegate_t1391120001 * ___tagDelegate_3;
	// UMPush/RemainDelegate UMPush::<>f__mg$cache0
	RemainDelegate_t329673834 * ___U3CU3Ef__mgU24cache0_4;
	// UMPush/RemainDelegate UMPush::<>f__mg$cache1
	RemainDelegate_t329673834 * ___U3CU3Ef__mgU24cache1_5;
	// UMPush/TagHandler UMPush::<>f__mg$cache2
	TagHandler_t1641990155 * ___U3CU3Ef__mgU24cache2_6;
	// UMPush/AliasDelegate UMPush::<>f__mg$cache3
	AliasDelegate_t1464217712 * ___U3CU3Ef__mgU24cache3_7;
	// UMPush/AliasDelegate UMPush::<>f__mg$cache4
	AliasDelegate_t1464217712 * ___U3CU3Ef__mgU24cache4_8;
	// UMPush/AliasDelegate UMPush::<>f__mg$cache5
	AliasDelegate_t1464217712 * ___U3CU3Ef__mgU24cache5_9;

public:
	inline static int32_t get_offset_of_aliasDelegate_1() { return static_cast<int32_t>(offsetof(UMPush_t3237649304_StaticFields, ___aliasDelegate_1)); }
	inline AliasDelegate_t1464217712 * get_aliasDelegate_1() const { return ___aliasDelegate_1; }
	inline AliasDelegate_t1464217712 ** get_address_of_aliasDelegate_1() { return &___aliasDelegate_1; }
	inline void set_aliasDelegate_1(AliasDelegate_t1464217712 * value)
	{
		___aliasDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___aliasDelegate_1), value);
	}

	inline static int32_t get_offset_of_remainDelegate_2() { return static_cast<int32_t>(offsetof(UMPush_t3237649304_StaticFields, ___remainDelegate_2)); }
	inline RemainDelegate_t329673834 * get_remainDelegate_2() const { return ___remainDelegate_2; }
	inline RemainDelegate_t329673834 ** get_address_of_remainDelegate_2() { return &___remainDelegate_2; }
	inline void set_remainDelegate_2(RemainDelegate_t329673834 * value)
	{
		___remainDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___remainDelegate_2), value);
	}

	inline static int32_t get_offset_of_tagDelegate_3() { return static_cast<int32_t>(offsetof(UMPush_t3237649304_StaticFields, ___tagDelegate_3)); }
	inline TagsDelegate_t1391120001 * get_tagDelegate_3() const { return ___tagDelegate_3; }
	inline TagsDelegate_t1391120001 ** get_address_of_tagDelegate_3() { return &___tagDelegate_3; }
	inline void set_tagDelegate_3(TagsDelegate_t1391120001 * value)
	{
		___tagDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&___tagDelegate_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(UMPush_t3237649304_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline RemainDelegate_t329673834 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline RemainDelegate_t329673834 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(RemainDelegate_t329673834 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_5() { return static_cast<int32_t>(offsetof(UMPush_t3237649304_StaticFields, ___U3CU3Ef__mgU24cache1_5)); }
	inline RemainDelegate_t329673834 * get_U3CU3Ef__mgU24cache1_5() const { return ___U3CU3Ef__mgU24cache1_5; }
	inline RemainDelegate_t329673834 ** get_address_of_U3CU3Ef__mgU24cache1_5() { return &___U3CU3Ef__mgU24cache1_5; }
	inline void set_U3CU3Ef__mgU24cache1_5(RemainDelegate_t329673834 * value)
	{
		___U3CU3Ef__mgU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_6() { return static_cast<int32_t>(offsetof(UMPush_t3237649304_StaticFields, ___U3CU3Ef__mgU24cache2_6)); }
	inline TagHandler_t1641990155 * get_U3CU3Ef__mgU24cache2_6() const { return ___U3CU3Ef__mgU24cache2_6; }
	inline TagHandler_t1641990155 ** get_address_of_U3CU3Ef__mgU24cache2_6() { return &___U3CU3Ef__mgU24cache2_6; }
	inline void set_U3CU3Ef__mgU24cache2_6(TagHandler_t1641990155 * value)
	{
		___U3CU3Ef__mgU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_7() { return static_cast<int32_t>(offsetof(UMPush_t3237649304_StaticFields, ___U3CU3Ef__mgU24cache3_7)); }
	inline AliasDelegate_t1464217712 * get_U3CU3Ef__mgU24cache3_7() const { return ___U3CU3Ef__mgU24cache3_7; }
	inline AliasDelegate_t1464217712 ** get_address_of_U3CU3Ef__mgU24cache3_7() { return &___U3CU3Ef__mgU24cache3_7; }
	inline void set_U3CU3Ef__mgU24cache3_7(AliasDelegate_t1464217712 * value)
	{
		___U3CU3Ef__mgU24cache3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_8() { return static_cast<int32_t>(offsetof(UMPush_t3237649304_StaticFields, ___U3CU3Ef__mgU24cache4_8)); }
	inline AliasDelegate_t1464217712 * get_U3CU3Ef__mgU24cache4_8() const { return ___U3CU3Ef__mgU24cache4_8; }
	inline AliasDelegate_t1464217712 ** get_address_of_U3CU3Ef__mgU24cache4_8() { return &___U3CU3Ef__mgU24cache4_8; }
	inline void set_U3CU3Ef__mgU24cache4_8(AliasDelegate_t1464217712 * value)
	{
		___U3CU3Ef__mgU24cache4_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_9() { return static_cast<int32_t>(offsetof(UMPush_t3237649304_StaticFields, ___U3CU3Ef__mgU24cache5_9)); }
	inline AliasDelegate_t1464217712 * get_U3CU3Ef__mgU24cache5_9() const { return ___U3CU3Ef__mgU24cache5_9; }
	inline AliasDelegate_t1464217712 ** get_address_of_U3CU3Ef__mgU24cache5_9() { return &___U3CU3Ef__mgU24cache5_9; }
	inline void set_U3CU3Ef__mgU24cache5_9(AliasDelegate_t1464217712 * value)
	{
		___U3CU3Ef__mgU24cache5_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UMPUSH_T3237649304_H
#ifndef UNITYEVENTBASE_T1358218110_H
#define UNITYEVENTBASE_T1358218110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t1358218110  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t1848325911 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t206888700 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t1358218110, ___m_Calls_0)); }
	inline InvokableCallList_t1848325911 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t1848325911 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t1848325911 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t1358218110, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t206888700 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t206888700 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t206888700 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t1358218110, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t1358218110, ___m_CallsDirty_3)); }
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
#endif // UNITYEVENTBASE_T1358218110_H
#ifndef PLAYABLEBEHAVIOUR_T1667963127_H
#define PLAYABLEBEHAVIOUR_T1667963127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t1667963127  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T1667963127_H
#ifndef PLAYABLEEXTENSIONS_T1341692745_H
#define PLAYABLEEXTENSIONS_T1341692745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t1341692745  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEEXTENSIONS_T1341692745_H
#ifndef MESSAGEEVENTARGS_T1659798917_H
#define MESSAGEEVENTARGS_T1659798917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t1659798917  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t934357067* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1659798917, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1659798917, ___data_1)); }
	inline ByteU5BU5D_t934357067* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t934357067** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t934357067* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T1659798917_H
#ifndef GA_T2254527014_H
#define GA_T2254527014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.GA
struct  GA_t2254527014  : public Analytics_t760990975
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GA_T2254527014_H
#ifndef ENUM_T168412333_H
#define ENUM_T168412333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t168412333  : public ValueType_t2791561850
{
public:

public:
};

struct Enum_t168412333_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2845897625* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t168412333_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2845897625* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2845897625** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2845897625* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t168412333_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t168412333_marshaled_com
{
};
#endif // ENUM_T168412333_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3011244891_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3011244891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t3011244891  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T3011244891_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T1509493297_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T1509493297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t1509493297  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T1509493297_H
#ifndef NATIVECONTAINERATTRIBUTE_T580310024_H
#define NATIVECONTAINERATTRIBUTE_T580310024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t580310024  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T580310024_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1287141045_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1287141045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t1287141045  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T1287141045_H
#ifndef WRITEONLYATTRIBUTE_T4117447970_H
#define WRITEONLYATTRIBUTE_T4117447970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t4117447970  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T4117447970_H
#ifndef JSONARRAY_T1460046023_H
#define JSONARRAY_T1460046023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONArray
struct  JSONArray_t1460046023  : public JSONNode_t3954616423
{
public:
	// System.Collections.Generic.List`1<Umeng.JSONNode> Umeng.JSONArray::m_List
	List_1_t1893531690 * ___m_List_1;

public:
	inline static int32_t get_offset_of_m_List_1() { return static_cast<int32_t>(offsetof(JSONArray_t1460046023, ___m_List_1)); }
	inline List_1_t1893531690 * get_m_List_1() const { return ___m_List_1; }
	inline List_1_t1893531690 ** get_address_of_m_List_1() { return &___m_List_1; }
	inline void set_m_List_1(List_1_t1893531690 * value)
	{
		___m_List_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_List_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONARRAY_T1460046023_H
#ifndef JSONOBJECT_T1871021467_H
#define JSONOBJECT_T1871021467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONObject
struct  JSONObject_t1871021467  : public JSONNode_t3954616423
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Umeng.JSONNode> Umeng.JSONObject::m_Dict
	Dictionary_2_t4238706458 * ___m_Dict_1;

public:
	inline static int32_t get_offset_of_m_Dict_1() { return static_cast<int32_t>(offsetof(JSONObject_t1871021467, ___m_Dict_1)); }
	inline Dictionary_2_t4238706458 * get_m_Dict_1() const { return ___m_Dict_1; }
	inline Dictionary_2_t4238706458 ** get_address_of_m_Dict_1() { return &___m_Dict_1; }
	inline void set_m_Dict_1(Dictionary_2_t4238706458 * value)
	{
		___m_Dict_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONOBJECT_T1871021467_H
#ifndef READWRITEATTRIBUTE_T3130034871_H
#define READWRITEATTRIBUTE_T3130034871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t3130034871  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T3130034871_H
#ifndef READONLYATTRIBUTE_T4206035537_H
#define READONLYATTRIBUTE_T4206035537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t4206035537  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T4206035537_H
#ifndef JSONSTRING_T1649170875_H
#define JSONSTRING_T1649170875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONString
struct  JSONString_t1649170875  : public JSONNode_t3954616423
{
public:
	// System.String Umeng.JSONString::m_Data
	String_t* ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONString_t1649170875, ___m_Data_1)); }
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
#endif // JSONSTRING_T1649170875_H
#ifndef JSONNUMBER_T2752843809_H
#define JSONNUMBER_T2752843809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNumber
struct  JSONNumber_t2752843809  : public JSONNode_t3954616423
{
public:
	// System.Double Umeng.JSONNumber::m_Data
	double ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONNumber_t2752843809, ___m_Data_1)); }
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
#endif // JSONNUMBER_T2752843809_H
#ifndef JSONBOOL_T2486076856_H
#define JSONBOOL_T2486076856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONBool
struct  JSONBool_t2486076856  : public JSONNode_t3954616423
{
public:
	// System.Boolean Umeng.JSONBool::m_Data
	bool ___m_Data_1;

public:
	inline static int32_t get_offset_of_m_Data_1() { return static_cast<int32_t>(offsetof(JSONBool_t2486076856, ___m_Data_1)); }
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
#endif // JSONBOOL_T2486076856_H
#ifndef JSONNULL_T2624764418_H
#define JSONNULL_T2624764418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNull
struct  JSONNull_t2624764418  : public JSONNode_t3954616423
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNULL_T2624764418_H
#ifndef JSONLAZYCREATOR_T2689580875_H
#define JSONLAZYCREATOR_T2689580875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONLazyCreator
struct  JSONLazyCreator_t2689580875  : public JSONNode_t3954616423
{
public:
	// Umeng.JSONNode Umeng.JSONLazyCreator::m_Node
	JSONNode_t3954616423 * ___m_Node_1;
	// System.String Umeng.JSONLazyCreator::m_Key
	String_t* ___m_Key_2;

public:
	inline static int32_t get_offset_of_m_Node_1() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t2689580875, ___m_Node_1)); }
	inline JSONNode_t3954616423 * get_m_Node_1() const { return ___m_Node_1; }
	inline JSONNode_t3954616423 ** get_address_of_m_Node_1() { return &___m_Node_1; }
	inline void set_m_Node_1(JSONNode_t3954616423 * value)
	{
		___m_Node_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Node_1), value);
	}

	inline static int32_t get_offset_of_m_Key_2() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t2689580875, ___m_Key_2)); }
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
#endif // JSONLAZYCREATOR_T2689580875_H
#ifndef U24ARRAYTYPEU3D20_T2461647773_H
#define U24ARRAYTYPEU3D20_T2461647773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_t2461647773 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t2461647773__padding[20];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T2461647773_H
#ifndef ENUMERATOR_T642359175_H
#define ENUMERATOR_T642359175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Umeng.JSONNode>
struct  Enumerator_t642359175 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1893531690 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JSONNode_t3954616423 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t642359175, ___l_0)); }
	inline List_1_t1893531690 * get_l_0() const { return ___l_0; }
	inline List_1_t1893531690 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1893531690 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t642359175, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t642359175, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t642359175, ___current_3)); }
	inline JSONNode_t3954616423 * get_current_3() const { return ___current_3; }
	inline JSONNode_t3954616423 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JSONNode_t3954616423 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T642359175_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T2445064259_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T2445064259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t2445064259  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T2445064259_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T3001978578_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T3001978578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t3001978578  : public Attribute_t203173102
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t3001978578, ___m_oldName_0)); }
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
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T3001978578_H
#ifndef USEDBYNATIVECODEATTRIBUTE_T638550626_H
#define USEDBYNATIVECODEATTRIBUTE_T638550626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct  UsedByNativeCodeAttribute_t638550626  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEDBYNATIVECODEATTRIBUTE_T638550626_H
#ifndef REQUIREDBYNATIVECODEATTRIBUTE_T1986972124_H
#define REQUIREDBYNATIVECODEATTRIBUTE_T1986972124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct  RequiredByNativeCodeAttribute_t1986972124  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIREDBYNATIVECODEATTRIBUTE_T1986972124_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T3020827239_H
#define EXCLUDEFROMDOCSATTRIBUTE_T3020827239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t3020827239  : public Attribute_t203173102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T3020827239_H
#ifndef INT32_T261689212_H
#define INT32_T261689212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t261689212 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t261689212, ___m_value_2)); }
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
#endif // INT32_T261689212_H
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
	RandomNumberGenerator_t1391267733 * ____rng_13;

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
	inline RandomNumberGenerator_t1391267733 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t1391267733 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t1391267733 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T1266544235_H
#define TYPEINFERENCERULEATTRIBUTE_T1266544235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t1266544235  : public Attribute_t203173102
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t1266544235, ____rule_0)); }
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
#endif // TYPEINFERENCERULEATTRIBUTE_T1266544235_H
#ifndef KEYVALUEPAIR_2_T2182021404_H
#define KEYVALUEPAIR_2_T2182021404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,Umeng.JSONNode>
struct  KeyValuePair_2_t2182021404 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_t3954616423 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2182021404, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2182021404, ___value_1)); }
	inline JSONNode_t3954616423 * get_value_1() const { return ___value_1; }
	inline JSONNode_t3954616423 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JSONNode_t3954616423 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2182021404_H
#ifndef GENERICSTACK_T3329707436_H
#define GENERICSTACK_T3329707436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_t3329707436  : public Stack_t1896138532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_T3329707436_H
#ifndef UNITYEVENT_1_T523035483_H
#define UNITYEVENT_1_T523035483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t523035483  : public UnityEventBase_t1358218110
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2649391668* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t523035483, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2649391668* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2649391668** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2649391668* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T523035483_H
#ifndef CSSSIZE_T3070677917_H
#define CSSSIZE_T3070677917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSSize
struct  CSSSize_t3070677917 
{
public:
	// System.Single UnityEngine.CSSLayout.CSSSize::width
	float ___width_0;
	// System.Single UnityEngine.CSSLayout.CSSSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(CSSSize_t3070677917, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(CSSSize_t3070677917, ___height_1)); }
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
#endif // CSSSIZE_T3070677917_H
#ifndef VOID_T1177341432_H
#define VOID_T1177341432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1177341432 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1177341432_H
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
#ifndef SINGLE_T3105917022_H
#define SINGLE_T3105917022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3105917022 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t3105917022, ___m_value_0)); }
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
#endif // SINGLE_T3105917022_H
#ifndef UNITYEVENT_1_T3419893074_H
#define UNITYEVENT_1_T3419893074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3419893074  : public UnityEventBase_t1358218110
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2649391668* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3419893074, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2649391668* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2649391668** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2649391668* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3419893074_H
#ifndef DEFAULTVALUEATTRIBUTE_T1509557327_H
#define DEFAULTVALUEATTRIBUTE_T1509557327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t1509557327  : public Attribute_t203173102
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t1509557327, ___DefaultValue_0)); }
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
#endif // DEFAULTVALUEATTRIBUTE_T1509557327_H
#ifndef ENUMERATOR_T443123048_H
#define ENUMERATOR_T443123048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Umeng.JSONNode>
struct  Enumerator_t443123048 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t4238706458 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2182021404  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t443123048, ___dictionary_0)); }
	inline Dictionary_2_t4238706458 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t4238706458 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t4238706458 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t443123048, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t443123048, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t443123048, ___current_3)); }
	inline KeyValuePair_2_t2182021404  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2182021404 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2182021404  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T443123048_H
#ifndef PLAYABLEOUTPUTHANDLE_T3208897735_H
#define PLAYABLEOUTPUTHANDLE_T3208897735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t3208897735 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3208897735, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3208897735, ___m_Version_1)); }
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
#endif // PLAYABLEOUTPUTHANDLE_T3208897735_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2093474599_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2093474599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2093474599  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2093474599_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-49B9B05D954B9D47719314498C608F59CA50A1A2
	U24ArrayTypeU3D20_t2461647773  ___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2093474599_StaticFields, ___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0)); }
	inline U24ArrayTypeU3D20_t2461647773  get_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0() const { return ___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0; }
	inline U24ArrayTypeU3D20_t2461647773 * get_address_of_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0() { return &___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0; }
	inline void set_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0(U24ArrayTypeU3D20_t2461647773  value)
	{
		___U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2093474599_H
#ifndef DATASTREAMTYPE_T3317988763_H
#define DATASTREAMTYPE_T3317988763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t3317988763 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t3317988763, ___value___1)); }
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
#endif // DATASTREAMTYPE_T3317988763_H
#ifndef LOGTYPE_T1289311417_H
#define LOGTYPE_T1289311417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t1289311417 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t1289311417, ___value___1)); }
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
#endif // LOGTYPE_T1289311417_H
#ifndef DELEGATE_T2182570996_H
#define DELEGATE_T2182570996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2182570996  : public RuntimeObject
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
	DelegateData_t757370556 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2182570996, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2182570996, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2182570996, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2182570996, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2182570996, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2182570996, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2182570996, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2182570996, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2182570996, ___data_8)); }
	inline DelegateData_t757370556 * get_data_8() const { return ___data_8; }
	inline DelegateData_t757370556 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t757370556 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2182570996_H
#ifndef PLATFORM_T1845180774_H
#define PLATFORM_T1845180774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Platform
struct  Platform_t1845180774 
{
public:
	// System.Int32 Platform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Platform_t1845180774, ___value___1)); }
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
#endif // PLATFORM_T1845180774_H
#ifndef OBJECT_T2031778318_H
#define OBJECT_T2031778318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2031778318  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2031778318, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2031778318_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2031778318_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t2031778318_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2031778318_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2031778318_H
#ifndef U3CU3EC__ITERATOR0_T55912036_H
#define U3CU3EC__ITERATOR0_T55912036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONArray/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t55912036  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<Umeng.JSONNode> Umeng.JSONArray/<>c__Iterator0::$locvar0
	Enumerator_t642359175  ___U24locvar0_0;
	// Umeng.JSONNode Umeng.JSONArray/<>c__Iterator0::<N>__1
	JSONNode_t3954616423 * ___U3CNU3E__1_1;
	// Umeng.JSONArray Umeng.JSONArray/<>c__Iterator0::$this
	JSONArray_t1460046023 * ___U24this_2;
	// Umeng.JSONNode Umeng.JSONArray/<>c__Iterator0::$current
	JSONNode_t3954616423 * ___U24current_3;
	// System.Boolean Umeng.JSONArray/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Umeng.JSONArray/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t55912036, ___U24locvar0_0)); }
	inline Enumerator_t642359175  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t642359175 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t642359175  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t55912036, ___U3CNU3E__1_1)); }
	inline JSONNode_t3954616423 * get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline JSONNode_t3954616423 ** get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(JSONNode_t3954616423 * value)
	{
		___U3CNU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t55912036, ___U24this_2)); }
	inline JSONArray_t1460046023 * get_U24this_2() const { return ___U24this_2; }
	inline JSONArray_t1460046023 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONArray_t1460046023 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t55912036, ___U24current_3)); }
	inline JSONNode_t3954616423 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t3954616423 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t3954616423 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t55912036, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t55912036, ___U24PC_5)); }
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
#endif // U3CU3EC__ITERATOR0_T55912036_H
#ifndef GENDER_T275969355_H
#define GENDER_T275969355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.GA/Gender
struct  Gender_t275969355 
{
public:
	// System.Int32 Umeng.GA/Gender::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Gender_t275969355, ___value___1)); }
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
#endif // GENDER_T275969355_H
#ifndef BONUSSOURCE_T2864192452_H
#define BONUSSOURCE_T2864192452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.GA/BonusSource
struct  BonusSource_t2864192452 
{
public:
	// System.Int32 Umeng.GA/BonusSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BonusSource_t2864192452, ___value___1)); }
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
#endif // BONUSSOURCE_T2864192452_H
#ifndef FLAGS_T516929571_H
#define FLAGS_T516929571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t516929571 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t516929571, ___value___1)); }
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
#endif // FLAGS_T516929571_H
#ifndef JSONNODETYPE_T550985378_H
#define JSONNODETYPE_T550985378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONNodeType
struct  JSONNodeType_t550985378 
{
public:
	// System.Int32 Umeng.JSONNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JSONNodeType_t550985378, ___value___1)); }
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
#endif // JSONNODETYPE_T550985378_H
#ifndef REPORTPOLICY_T1076051100_H
#define REPORTPOLICY_T1076051100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.Analytics/ReportPolicy
struct  ReportPolicy_t1076051100 
{
public:
	// System.Int32 Umeng.Analytics/ReportPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReportPolicy_t1076051100, ___value___1)); }
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
#endif // REPORTPOLICY_T1076051100_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T901486033_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T901486033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONArray/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t901486033  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<Umeng.JSONNode> Umeng.JSONArray/<GetEnumerator>c__Iterator1::$locvar0
	Enumerator_t642359175  ___U24locvar0_0;
	// Umeng.JSONNode Umeng.JSONArray/<GetEnumerator>c__Iterator1::<N>__1
	JSONNode_t3954616423 * ___U3CNU3E__1_1;
	// Umeng.JSONArray Umeng.JSONArray/<GetEnumerator>c__Iterator1::$this
	JSONArray_t1460046023 * ___U24this_2;
	// System.Object Umeng.JSONArray/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Umeng.JSONArray/<GetEnumerator>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 Umeng.JSONArray/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t901486033, ___U24locvar0_0)); }
	inline Enumerator_t642359175  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t642359175 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t642359175  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t901486033, ___U3CNU3E__1_1)); }
	inline JSONNode_t3954616423 * get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline JSONNode_t3954616423 ** get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(JSONNode_t3954616423 * value)
	{
		___U3CNU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t901486033, ___U24this_2)); }
	inline JSONArray_t1460046023 * get_U24this_2() const { return ___U24this_2; }
	inline JSONArray_t1460046023 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONArray_t1460046023 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t901486033, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t901486033, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t901486033, ___U24PC_5)); }
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
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T901486033_H
#ifndef MESSAGEEVENT_T2756255477_H
#define MESSAGEEVENT_T2756255477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t2756255477  : public UnityEvent_1_t523035483
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T2756255477_H
#ifndef CONNECTIONCHANGEEVENT_T3148462287_H
#define CONNECTIONCHANGEEVENT_T3148462287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t3148462287  : public UnityEvent_1_t3419893074
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T3148462287_H
#ifndef PAYSOURCE_T2109827323_H
#define PAYSOURCE_T2109827323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.GA/PaySource
struct  PaySource_t2109827323 
{
public:
	// System.Int32 Umeng.GA/PaySource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaySource_t2109827323, ___value___1)); }
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
#endif // PAYSOURCE_T2109827323_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T3685162788_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T3685162788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3685162788  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3685162788, ___messageId_0)); }
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
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T3685162788_H
#ifndef TYPEINFERENCERULES_T1425314593_H
#define TYPEINFERENCERULES_T1425314593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t1425314593 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t1425314593, ___value___1)); }
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
#endif // TYPEINFERENCERULES_T1425314593_H
#ifndef CSSMEASUREMODE_T2873666903_H
#define CSSMEASUREMODE_T2873666903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureMode
struct  CSSMeasureMode_t2873666903 
{
public:
	// System.Int32 UnityEngine.CSSLayout.CSSMeasureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CSSMeasureMode_t2873666903, ___value___1)); }
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
#endif // CSSMEASUREMODE_T2873666903_H
#ifndef MULTICASTDELEGATE_T1674546104_H
#define MULTICASTDELEGATE_T1674546104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1674546104  : public Delegate_t2182570996
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1674546104 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1674546104 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1674546104, ___prev_9)); }
	inline MulticastDelegate_t1674546104 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1674546104 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1674546104 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1674546104, ___kpm_next_10)); }
	inline MulticastDelegate_t1674546104 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1674546104 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1674546104 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1674546104_H
#ifndef SCRIPTPLAYABLEOUTPUT_T2844040052_H
#define SCRIPTPLAYABLEOUTPUT_T2844040052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t2844040052 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t3208897735  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t2844040052, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3208897735  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3208897735 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3208897735  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T2844040052_H
#ifndef PLAYABLEBINDING_T3021376044_H
#define PLAYABLEBINDING_T3021376044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t3021376044 
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
			Object_t2031778318 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3021376044__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t3021376044, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t3021376044, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t3021376044, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t2031778318 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t2031778318 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t2031778318 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t3021376044, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t3021376044_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t296749989* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t3021376044_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t296749989* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t296749989** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t296749989* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t3021376044_StaticFields, ___DefaultDuration_1)); }
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
struct PlayableBinding_t3021376044_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t2031778318_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3021376044__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t3021376044_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t2031778318_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3021376044__padding[1];
	};
};
#endif // PLAYABLEBINDING_T3021376044_H
#ifndef FRAMEDATA_T3573019326_H
#define FRAMEDATA_T3573019326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t3573019326 
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
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t3573019326, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t3573019326, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t3573019326, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t3573019326, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t3573019326, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t3573019326, ___m_Flags_5)); }
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
#endif // FRAMEDATA_T3573019326_H
#ifndef LOGGER_T248205153_H
#define LOGGER_T248205153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t248205153  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t248205153, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t248205153, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t248205153, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
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
#endif // LOGGER_T248205153_H
#ifndef SCRIPTABLEOBJECT_T3644821573_H
#define SCRIPTABLEOBJECT_T3644821573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t3644821573  : public Object_t2031778318
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3644821573_marshaled_pinvoke : public Object_t2031778318_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3644821573_marshaled_com : public Object_t2031778318_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T3644821573_H
#ifndef COMPONENT_T3615561884_H
#define COMPONENT_T3615561884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3615561884  : public Object_t2031778318
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3615561884_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T2689645081_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T2689645081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONObject/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t2689645081  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Umeng.JSONNode> Umeng.JSONObject/<GetEnumerator>c__Iterator1::$locvar0
	Enumerator_t443123048  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Umeng.JSONNode> Umeng.JSONObject/<GetEnumerator>c__Iterator1::<N>__1
	KeyValuePair_2_t2182021404  ___U3CNU3E__1_1;
	// Umeng.JSONObject Umeng.JSONObject/<GetEnumerator>c__Iterator1::$this
	JSONObject_t1871021467 * ___U24this_2;
	// System.Object Umeng.JSONObject/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Umeng.JSONObject/<GetEnumerator>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 Umeng.JSONObject/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2689645081, ___U24locvar0_0)); }
	inline Enumerator_t443123048  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t443123048 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t443123048  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2689645081, ___U3CNU3E__1_1)); }
	inline KeyValuePair_2_t2182021404  get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline KeyValuePair_2_t2182021404 * get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(KeyValuePair_2_t2182021404  value)
	{
		___U3CNU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2689645081, ___U24this_2)); }
	inline JSONObject_t1871021467 * get_U24this_2() const { return ___U24this_2; }
	inline JSONObject_t1871021467 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONObject_t1871021467 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2689645081, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2689645081, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t2689645081, ___U24PC_5)); }
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
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T2689645081_H
#ifndef U3CU3EC__ITERATOR0_T3506940217_H
#define U3CU3EC__ITERATOR0_T3506940217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Umeng.JSONObject/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t3506940217  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Umeng.JSONNode> Umeng.JSONObject/<>c__Iterator0::$locvar0
	Enumerator_t443123048  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Umeng.JSONNode> Umeng.JSONObject/<>c__Iterator0::<N>__1
	KeyValuePair_2_t2182021404  ___U3CNU3E__1_1;
	// Umeng.JSONObject Umeng.JSONObject/<>c__Iterator0::$this
	JSONObject_t1871021467 * ___U24this_2;
	// Umeng.JSONNode Umeng.JSONObject/<>c__Iterator0::$current
	JSONNode_t3954616423 * ___U24current_3;
	// System.Boolean Umeng.JSONObject/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Umeng.JSONObject/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3506940217, ___U24locvar0_0)); }
	inline Enumerator_t443123048  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t443123048 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t443123048  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3506940217, ___U3CNU3E__1_1)); }
	inline KeyValuePair_2_t2182021404  get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline KeyValuePair_2_t2182021404 * get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(KeyValuePair_2_t2182021404  value)
	{
		___U3CNU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3506940217, ___U24this_2)); }
	inline JSONObject_t1871021467 * get_U24this_2() const { return ___U24this_2; }
	inline JSONObject_t1871021467 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONObject_t1871021467 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3506940217, ___U24current_3)); }
	inline JSONNode_t3954616423 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t3954616423 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t3954616423 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3506940217, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3506940217, ___U24PC_5)); }
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
#endif // U3CU3EC__ITERATOR0_T3506940217_H
#ifndef ALIASDELEGATE_T1464217712_H
#define ALIASDELEGATE_T1464217712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush/AliasDelegate
struct  AliasDelegate_t1464217712  : public MulticastDelegate_t1674546104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIASDELEGATE_T1464217712_H
#ifndef REMAINDELEGATE_T329673834_H
#define REMAINDELEGATE_T329673834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush/RemainDelegate
struct  RemainDelegate_t329673834  : public MulticastDelegate_t1674546104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMAINDELEGATE_T329673834_H
#ifndef TAGSDELEGATE_T1391120001_H
#define TAGSDELEGATE_T1391120001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush/TagsDelegate
struct  TagsDelegate_t1391120001  : public MulticastDelegate_t1674546104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAGSDELEGATE_T1391120001_H
#ifndef AUTHHANDLER_T290707335_H
#define AUTHHANDLER_T290707335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial/AuthHandler
struct  AuthHandler_t290707335  : public MulticastDelegate_t1674546104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHHANDLER_T290707335_H
#ifndef CSSMEASUREFUNC_T1760850335_H
#define CSSMEASUREFUNC_T1760850335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureFunc
struct  CSSMeasureFunc_t1760850335  : public MulticastDelegate_t1674546104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREFUNC_T1760850335_H
#ifndef SHAREBOARDDISMISSDELEGATE_T3445076420_H
#define SHAREBOARDDISMISSDELEGATE_T3445076420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial/ShareBoardDismissDelegate
struct  ShareBoardDismissDelegate_t3445076420  : public MulticastDelegate_t1674546104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREBOARDDISMISSDELEGATE_T3445076420_H
#ifndef SHAREDELEGATE_T1292009655_H
#define SHAREDELEGATE_T1292009655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial/ShareDelegate
struct  ShareDelegate_t1292009655  : public MulticastDelegate_t1674546104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDELEGATE_T1292009655_H
#ifndef AUTHDELEGATE_T272104345_H
#define AUTHDELEGATE_T272104345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMSocial/AuthDelegate
struct  AuthDelegate_t272104345  : public MulticastDelegate_t1674546104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHDELEGATE_T272104345_H
#ifndef BEHAVIOUR_T242449932_H
#define BEHAVIOUR_T242449932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t242449932  : public Component_t3615561884
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T242449932_H
#ifndef PLAYERCONNECTION_T3506470347_H
#define PLAYERCONNECTION_T3506470347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t3506470347  : public ScriptableObject_t3644821573
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t336534435 * ___m_PlayerEditorConnectionEvents_2;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t2495571775 * ___m_connectedPlayers_3;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t3506470347, ___m_PlayerEditorConnectionEvents_2)); }
	inline PlayerEditorConnectionEvents_t336534435 * get_m_PlayerEditorConnectionEvents_2() const { return ___m_PlayerEditorConnectionEvents_2; }
	inline PlayerEditorConnectionEvents_t336534435 ** get_address_of_m_PlayerEditorConnectionEvents_2() { return &___m_PlayerEditorConnectionEvents_2; }
	inline void set_m_PlayerEditorConnectionEvents_2(PlayerEditorConnectionEvents_t336534435 * value)
	{
		___m_PlayerEditorConnectionEvents_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_2), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t3506470347, ___m_connectedPlayers_3)); }
	inline List_1_t2495571775 * get_m_connectedPlayers_3() const { return ___m_connectedPlayers_3; }
	inline List_1_t2495571775 ** get_address_of_m_connectedPlayers_3() { return &___m_connectedPlayers_3; }
	inline void set_m_connectedPlayers_3(List_1_t2495571775 * value)
	{
		___m_connectedPlayers_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_3), value);
	}
};

struct PlayerConnection_t3506470347_StaticFields
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t3506470347 * ___s_Instance_4;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t3506470347_StaticFields, ___s_Instance_4)); }
	inline PlayerConnection_t3506470347 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline PlayerConnection_t3506470347 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(PlayerConnection_t3506470347 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T3506470347_H
#ifndef PLAYABLEASSET_T4250196228_H
#define PLAYABLEASSET_T4250196228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t4250196228  : public ScriptableObject_t3644821573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T4250196228_H
#ifndef TAGHANDLER_T1641990155_H
#define TAGHANDLER_T1641990155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UMPush/TagHandler
struct  TagHandler_t1641990155  : public MulticastDelegate_t1674546104
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAGHANDLER_T1641990155_H
#ifndef MONOBEHAVIOUR_T462132993_H
#define MONOBEHAVIOUR_T462132993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t462132993  : public Behaviour_t242449932
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T462132993_H
#ifndef PUSHDEMO_T4280529377_H
#define PUSHDEMO_T4280529377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PushDemo
struct  PushDemo_t4280529377  : public MonoBehaviour_t462132993
{
public:
	// System.String PushDemo::str
	String_t* ___str_2;
	// UnityEngine.Texture2D PushDemo::texture
	Texture2D_t1631332924 * ___texture_3;

public:
	inline static int32_t get_offset_of_str_2() { return static_cast<int32_t>(offsetof(PushDemo_t4280529377, ___str_2)); }
	inline String_t* get_str_2() const { return ___str_2; }
	inline String_t** get_address_of_str_2() { return &___str_2; }
	inline void set_str_2(String_t* value)
	{
		___str_2 = value;
		Il2CppCodeGenWriteBarrier((&___str_2), value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(PushDemo_t4280529377, ___texture_3)); }
	inline Texture2D_t1631332924 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t1631332924 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t1631332924 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier((&___texture_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUSHDEMO_T4280529377_H
#ifndef ENTRY_T3177566494_H
#define ENTRY_T3177566494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Entry
struct  Entry_t3177566494  : public MonoBehaviour_t462132993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T3177566494_H
#ifndef EXAMPLE_T3972759724_H
#define EXAMPLE_T3972759724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Example
struct  Example_t3972759724  : public MonoBehaviour_t462132993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXAMPLE_T3972759724_H
#ifndef TESTCASE_T945136034_H
#define TESTCASE_T945136034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestCase
struct  TestCase_t945136034  : public MonoBehaviour_t462132993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTCASE_T945136034_H
#ifndef SOCIALDEMO_T762799031_H
#define SOCIALDEMO_T762799031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocialDemo
struct  SocialDemo_t762799031  : public MonoBehaviour_t462132993
{
public:
	// System.String SocialDemo::str
	String_t* ___str_2;
	// UnityEngine.Texture2D SocialDemo::texture
	Texture2D_t1631332924 * ___texture_3;

public:
	inline static int32_t get_offset_of_str_2() { return static_cast<int32_t>(offsetof(SocialDemo_t762799031, ___str_2)); }
	inline String_t* get_str_2() const { return ___str_2; }
	inline String_t** get_address_of_str_2() { return &___str_2; }
	inline void set_str_2(String_t* value)
	{
		___str_2 = value;
		Il2CppCodeGenWriteBarrier((&___str_2), value);
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(SocialDemo_t762799031, ___texture_3)); }
	inline Texture2D_t1631332924 * get_texture_3() const { return ___texture_3; }
	inline Texture2D_t1631332924 ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture2D_t1631332924 * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier((&___texture_3), value);
	}
};

struct SocialDemo_t762799031_StaticFields
{
public:
	// UMSocial/ShareBoardDismissDelegate SocialDemo::<>f__am$cache0
	ShareBoardDismissDelegate_t3445076420 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(SocialDemo_t762799031_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline ShareBoardDismissDelegate_t3445076420 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline ShareBoardDismissDelegate_t3445076420 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(ShareBoardDismissDelegate_t3445076420 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCIALDEMO_T762799031_H
#ifndef UMENGMANAGER_T1942823808_H
#define UMENGMANAGER_T1942823808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UmengManager
struct  UmengManager_t1942823808  : public MonoBehaviour_t462132993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UMENGMANAGER_T1942823808_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (ThreadAndSerializationSafeAttribute_t2445064259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (ReadOnlyAttribute_t4206035537), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (ReadWriteAttribute_t3130034871), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (WriteOnlyAttribute_t4117447970), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (DeallocateOnJobCompletionAttribute_t1287141045), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (NativeContainerAttribute_t580310024), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t1509493297), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t3011244891), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (FrameData_t3573019326)+ sizeof (RuntimeObject), sizeof(FrameData_t3573019326 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1408[6] = 
{
	FrameData_t3573019326::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3573019326::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3573019326::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3573019326::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3573019326::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t3573019326::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (Flags_t516929571)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1409[5] = 
{
	Flags_t516929571::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (PlayableBinding_t3021376044)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t3021376044_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1413[6] = 
{
	PlayableBinding_t3021376044_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t3021376044_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t3021376044::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t3021376044::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t3021376044::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t3021376044::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (PlayableAsset_t4250196228), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (PlayableBehaviour_t1667963127), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (PlayableExtensions_t1341692745), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (ScriptPlayableOutput_t2844040052)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t2844040052 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1418[1] = 
{
	ScriptPlayableOutput_t2844040052::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (DefaultValueAttribute_t1509557327), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1419[1] = 
{
	DefaultValueAttribute_t1509557327::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (ExcludeFromDocsAttribute_t3020827239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (Logger_t248205153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1423[3] = 
{
	Logger_t248205153::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t248205153::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t248205153::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (MessageEventArgs_t1659798917), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1424[2] = 
{
	MessageEventArgs_t1659798917::get_offset_of_playerId_0(),
	MessageEventArgs_t1659798917::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (PlayerConnection_t3506470347), -1, sizeof(PlayerConnection_t3506470347_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1426[3] = 
{
	PlayerConnection_t3506470347::get_offset_of_m_PlayerEditorConnectionEvents_2(),
	PlayerConnection_t3506470347::get_offset_of_m_connectedPlayers_3(),
	PlayerConnection_t3506470347_StaticFields::get_offset_of_s_Instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (PlayerEditorConnectionEvents_t336534435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1427[3] = 
{
	PlayerEditorConnectionEvents_t336534435::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t336534435::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t336534435::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (MessageEvent_t2756255477), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (ConnectionChangeEvent_t3148462287), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (MessageTypeSubscribers_t680457374), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1430[3] = 
{
	MessageTypeSubscribers_t680457374::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t680457374::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t680457374::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3685162788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1431[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t3685162788::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (RenderPipelineManager_t1518584688), -1, sizeof(RenderPipelineManager_t1518584688_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1434[2] = 
{
	RenderPipelineManager_t1518584688_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t1518584688_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (UsedByNativeCodeAttribute_t638550626), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (RequiredByNativeCodeAttribute_t1986972124), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (FormerlySerializedAsAttribute_t3001978578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1437[1] = 
{
	FormerlySerializedAsAttribute_t3001978578::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (TypeInferenceRules_t1425314593)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1438[5] = 
{
	TypeInferenceRules_t1425314593::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (TypeInferenceRuleAttribute_t1266544235), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1439[1] = 
{
	TypeInferenceRuleAttribute_t1266544235::get_offset_of__rule_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (GenericStack_t3329707436), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (NetFxCoreExtensions_t2285086338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (CSSMeasureFunc_t1760850335), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (CSSMeasureMode_t2873666903)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1443[4] = 
{
	CSSMeasureMode_t2873666903::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (CSSSize_t3070677917)+ sizeof (RuntimeObject), sizeof(CSSSize_t3070677917 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1444[2] = 
{
	CSSSize_t3070677917::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CSSSize_t3070677917::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (Native_t1201166252), -1, sizeof(Native_t1201166252_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1445[1] = 
{
	Native_t1201166252_StaticFields::get_offset_of_s_MeasureFunctions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (U3CModuleU3E_t3800972651), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (Entry_t3177566494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (Example_t3972759724), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (TestCase_t945136034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (Analytics_t760990975), -1, sizeof(Analytics_t760990975_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1450[2] = 
{
	Analytics_t760990975_StaticFields::get_offset_of__AppKey_0(),
	Analytics_t760990975_StaticFields::get_offset_of__ChannelId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (ReportPolicy_t1076051100)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1451[5] = 
{
	ReportPolicy_t1076051100::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (DplusAgent_t3427863882), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (GA_t2254527014), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (Gender_t275969355)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1454[4] = 
{
	Gender_t275969355::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (PaySource_t2109827323)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1455[31] = 
{
	PaySource_t2109827323::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (BonusSource_t2864192452)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1456[11] = 
{
	BonusSource_t2864192452::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (JSONNodeType_t550985378)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1457[8] = 
{
	JSONNodeType_t550985378::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (JSONNode_t3954616423), -1, sizeof(JSONNode_t3954616423_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1458[1] = 
{
	JSONNode_t3954616423_StaticFields::get_offset_of_m_EscapeBuilder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (U3CU3Ec__Iterator0_t1435461259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1459[3] = 
{
	U3CU3Ec__Iterator0_t1435461259::get_offset_of_U24current_0(),
	U3CU3Ec__Iterator0_t1435461259::get_offset_of_U24disposing_1(),
	U3CU3Ec__Iterator0_t1435461259::get_offset_of_U24PC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (U3CU3Ec__Iterator1_t239304636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1460[8] = 
{
	U3CU3Ec__Iterator1_t239304636::get_offset_of_U24locvar0_0(),
	U3CU3Ec__Iterator1_t239304636::get_offset_of_U3CCU3E__1_1(),
	U3CU3Ec__Iterator1_t239304636::get_offset_of_U24locvar1_2(),
	U3CU3Ec__Iterator1_t239304636::get_offset_of_U3CDU3E__2_3(),
	U3CU3Ec__Iterator1_t239304636::get_offset_of_U24this_4(),
	U3CU3Ec__Iterator1_t239304636::get_offset_of_U24current_5(),
	U3CU3Ec__Iterator1_t239304636::get_offset_of_U24disposing_6(),
	U3CU3Ec__Iterator1_t239304636::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (JSONArray_t1460046023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1461[1] = 
{
	JSONArray_t1460046023::get_offset_of_m_List_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (U3CU3Ec__Iterator0_t55912036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1462[6] = 
{
	U3CU3Ec__Iterator0_t55912036::get_offset_of_U24locvar0_0(),
	U3CU3Ec__Iterator0_t55912036::get_offset_of_U3CNU3E__1_1(),
	U3CU3Ec__Iterator0_t55912036::get_offset_of_U24this_2(),
	U3CU3Ec__Iterator0_t55912036::get_offset_of_U24current_3(),
	U3CU3Ec__Iterator0_t55912036::get_offset_of_U24disposing_4(),
	U3CU3Ec__Iterator0_t55912036::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (U3CGetEnumeratorU3Ec__Iterator1_t901486033), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1463[6] = 
{
	U3CGetEnumeratorU3Ec__Iterator1_t901486033::get_offset_of_U24locvar0_0(),
	U3CGetEnumeratorU3Ec__Iterator1_t901486033::get_offset_of_U3CNU3E__1_1(),
	U3CGetEnumeratorU3Ec__Iterator1_t901486033::get_offset_of_U24this_2(),
	U3CGetEnumeratorU3Ec__Iterator1_t901486033::get_offset_of_U24current_3(),
	U3CGetEnumeratorU3Ec__Iterator1_t901486033::get_offset_of_U24disposing_4(),
	U3CGetEnumeratorU3Ec__Iterator1_t901486033::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (JSONObject_t1871021467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1464[1] = 
{
	JSONObject_t1871021467::get_offset_of_m_Dict_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (U3CRemoveU3Ec__AnonStorey2_t483619681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[1] = 
{
	U3CRemoveU3Ec__AnonStorey2_t483619681::get_offset_of_aNode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (U3CU3Ec__Iterator0_t3506940217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1466[6] = 
{
	U3CU3Ec__Iterator0_t3506940217::get_offset_of_U24locvar0_0(),
	U3CU3Ec__Iterator0_t3506940217::get_offset_of_U3CNU3E__1_1(),
	U3CU3Ec__Iterator0_t3506940217::get_offset_of_U24this_2(),
	U3CU3Ec__Iterator0_t3506940217::get_offset_of_U24current_3(),
	U3CU3Ec__Iterator0_t3506940217::get_offset_of_U24disposing_4(),
	U3CU3Ec__Iterator0_t3506940217::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (U3CGetEnumeratorU3Ec__Iterator1_t2689645081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1467[6] = 
{
	U3CGetEnumeratorU3Ec__Iterator1_t2689645081::get_offset_of_U24locvar0_0(),
	U3CGetEnumeratorU3Ec__Iterator1_t2689645081::get_offset_of_U3CNU3E__1_1(),
	U3CGetEnumeratorU3Ec__Iterator1_t2689645081::get_offset_of_U24this_2(),
	U3CGetEnumeratorU3Ec__Iterator1_t2689645081::get_offset_of_U24current_3(),
	U3CGetEnumeratorU3Ec__Iterator1_t2689645081::get_offset_of_U24disposing_4(),
	U3CGetEnumeratorU3Ec__Iterator1_t2689645081::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (JSONString_t1649170875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1468[1] = 
{
	JSONString_t1649170875::get_offset_of_m_Data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (JSONNumber_t2752843809), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1469[1] = 
{
	JSONNumber_t2752843809::get_offset_of_m_Data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (JSONBool_t2486076856), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1470[1] = 
{
	JSONBool_t2486076856::get_offset_of_m_Data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (JSONNull_t2624764418), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (JSONLazyCreator_t2689580875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1472[2] = 
{
	JSONLazyCreator_t2689580875::get_offset_of_m_Node_1(),
	JSONLazyCreator_t2689580875::get_offset_of_m_Key_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (JSON_t1865989780), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (UmengManager_t1942823808), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (PushDemo_t4280529377), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1475[2] = 
{
	PushDemo_t4280529377::get_offset_of_str_2(),
	PushDemo_t4280529377::get_offset_of_texture_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { sizeof (UMPush_t3237649304), -1, sizeof(UMPush_t3237649304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1476[10] = 
{
	0,
	UMPush_t3237649304_StaticFields::get_offset_of_aliasDelegate_1(),
	UMPush_t3237649304_StaticFields::get_offset_of_remainDelegate_2(),
	UMPush_t3237649304_StaticFields::get_offset_of_tagDelegate_3(),
	UMPush_t3237649304_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_4(),
	UMPush_t3237649304_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_5(),
	UMPush_t3237649304_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_6(),
	UMPush_t3237649304_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_7(),
	UMPush_t3237649304_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_8(),
	UMPush_t3237649304_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (AliasDelegate_t1464217712), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (RemainDelegate_t329673834), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (TagsDelegate_t1391120001), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (TagHandler_t1641990155), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (SocialDemo_t762799031), -1, sizeof(SocialDemo_t762799031_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1481[3] = 
{
	SocialDemo_t762799031::get_offset_of_str_2(),
	SocialDemo_t762799031::get_offset_of_texture_3(),
	SocialDemo_t762799031_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (Platform_t1845180774)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1482[35] = 
{
	Platform_t1845180774::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (UMSocial_t3347134995), -1, sizeof(UMSocial_t3347134995_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1483[10] = 
{
	0,
	UMSocial_t3347134995_StaticFields::get_offset_of_appKey_1(),
	UMSocial_t3347134995_StaticFields::get_offset_of_authDelegate_2(),
	UMSocial_t3347134995_StaticFields::get_offset_of_shareDelegate_3(),
	UMSocial_t3347134995_StaticFields::get_offset_of_dismissDelegate_4(),
	UMSocial_t3347134995_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_5(),
	UMSocial_t3347134995_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_6(),
	UMSocial_t3347134995_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_7(),
	UMSocial_t3347134995_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_8(),
	UMSocial_t3347134995_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (AuthDelegate_t272104345), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (ShareDelegate_t1292009655), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (ShareBoardDismissDelegate_t3445076420), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (AuthHandler_t290707335), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (U3CPrivateImplementationDetailsU3E_t2093474599), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2093474599_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1488[1] = 
{
	U3CPrivateImplementationDetailsU3E_t2093474599_StaticFields::get_offset_of_U24fieldU2D49B9B05D954B9D47719314498C608F59CA50A1A2_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (U24ArrayTypeU3D20_t2461647773)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D20_t2461647773 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
