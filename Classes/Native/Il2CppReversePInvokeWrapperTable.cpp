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
struct CharU5BU5D_t2845897625;




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



extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMPush_AliasCallback_m1201334935(int32_t ___stCode0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMPush_RemainCallback_m2655032363(int32_t ___stCode0, int32_t ___remain1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMPush_TagCallback_m3455828698(char* ___result0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMSocial_AuthCallback_m2217721787(int32_t ___platform0, int32_t ___stCode1, char* ___key2, char* ___value3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMSocial_ShareCallback_m3467496956(int32_t ___platform0, int32_t ___stCode1, char* ___errorMsg2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UMSocial_ShareBoardCallback_m4199307685();
extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[6] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMPush_AliasCallback_m1201334935),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMPush_RemainCallback_m2655032363),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMPush_TagCallback_m3455828698),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMSocial_AuthCallback_m2217721787),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMSocial_ShareCallback_m3467496956),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UMSocial_ShareBoardCallback_m4199307685),
};
