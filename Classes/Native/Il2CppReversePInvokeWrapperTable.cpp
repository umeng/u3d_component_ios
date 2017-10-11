#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Char[]
struct CharU5BU5D_t2642512795;




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
#ifndef VALUETYPE_T939962413_H
#define VALUETYPE_T939962413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t939962413  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t939962413_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t939962413_marshaled_com
{
};
#endif // VALUETYPE_T939962413_H
#ifndef ENUM_T2328863333_H
#define ENUM_T2328863333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2328863333  : public ValueType_t939962413
{
public:

public:
};

struct Enum_t2328863333_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2642512795* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2328863333_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2642512795* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2642512795** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2642512795* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2328863333_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2328863333_marshaled_com
{
};
#endif // ENUM_T2328863333_H
#ifndef PLATFORM_T567128251_H
#define PLATFORM_T567128251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Platform
struct  Platform_t567128251 
{
public:
	// System.Int32 Platform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Platform_t567128251, ___value___1)); }
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
#endif // PLATFORM_T567128251_H



extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMPush_AliasCallback_m2059208795(int32_t ___stCode0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMPush_RemainCallback_m479522190(int32_t ___stCode0, int32_t ___remain1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMPush_TagCallback_m4096952708(char* ___result0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMSocial_AuthCallback_m751506411(int32_t ___platform0, int32_t ___stCode1, char* ___key2, char* ___value3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMSocial_ShareCallback_m3509684762(int32_t ___platform0, int32_t ___stCode1, char* ___errorMsg2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMSocial_ShareBoardCallback_m768392399();
extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[6] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMPush_AliasCallback_m2059208795),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMPush_RemainCallback_m479522190),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMPush_TagCallback_m4096952708),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMSocial_AuthCallback_m751506411),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMSocial_ShareCallback_m3509684762),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMSocial_ShareBoardCallback_m768392399),
};
