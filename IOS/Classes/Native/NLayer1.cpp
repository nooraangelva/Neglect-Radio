#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Crosstales.NLayer.Decoder.ID3Frame
struct ID3Frame_tC6D3B22540A4DB9B29931B01AE1E1E3E56184035;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Crosstales.NLayer.Decoder.MpegFrame
struct MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A;
// Crosstales.NLayer.Decoder.MpegStreamReader
struct MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806;
// Crosstales.NLayer.Decoder.RiffHeaderFrame
struct RiffHeaderFrame_tE05F3CEF0A95A0086CF153AD61927605F2E4F12C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// Crosstales.NLayer.Decoder.VBRInfo
struct VBRInfo_t54EA7525A4EA70C7C53A77E5DC193A5E9F8123AD;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer
struct ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral808DF11042257F134CE34DF232CD9523F589E554;
IL2CPP_EXTERN_C const RuntimeMethod* ReadBuffer_EnsureFilled_m8D28E59616717A93A23BB2FF4663E7B60471463B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Crosstales.NLayer.Decoder.MpegStreamReader
struct MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806  : public RuntimeObject
{
public:
	// Crosstales.NLayer.Decoder.ID3Frame Crosstales.NLayer.Decoder.MpegStreamReader::_id3Frame
	ID3Frame_tC6D3B22540A4DB9B29931B01AE1E1E3E56184035 * ____id3Frame_0;
	// Crosstales.NLayer.Decoder.RiffHeaderFrame Crosstales.NLayer.Decoder.MpegStreamReader::_riffHeaderFrame
	RiffHeaderFrame_tE05F3CEF0A95A0086CF153AD61927605F2E4F12C * ____riffHeaderFrame_1;
	// Crosstales.NLayer.Decoder.VBRInfo Crosstales.NLayer.Decoder.MpegStreamReader::_vbrInfo
	VBRInfo_t54EA7525A4EA70C7C53A77E5DC193A5E9F8123AD * ____vbrInfo_2;
	// Crosstales.NLayer.Decoder.MpegFrame Crosstales.NLayer.Decoder.MpegStreamReader::_first
	MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * ____first_3;
	// Crosstales.NLayer.Decoder.MpegFrame Crosstales.NLayer.Decoder.MpegStreamReader::_current
	MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * ____current_4;
	// Crosstales.NLayer.Decoder.MpegFrame Crosstales.NLayer.Decoder.MpegStreamReader::_last
	MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * ____last_5;
	// Crosstales.NLayer.Decoder.MpegFrame Crosstales.NLayer.Decoder.MpegStreamReader::_lastFree
	MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * ____lastFree_6;
	// System.Int64 Crosstales.NLayer.Decoder.MpegStreamReader::_readOffset
	int64_t ____readOffset_7;
	// System.Int64 Crosstales.NLayer.Decoder.MpegStreamReader::_eofOffset
	int64_t ____eofOffset_8;
	// System.IO.Stream Crosstales.NLayer.Decoder.MpegStreamReader::_source
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____source_9;
	// System.Boolean Crosstales.NLayer.Decoder.MpegStreamReader::_canSeek
	bool ____canSeek_10;
	// System.Boolean Crosstales.NLayer.Decoder.MpegStreamReader::_endFound
	bool ____endFound_11;
	// System.Boolean Crosstales.NLayer.Decoder.MpegStreamReader::_mixedFrameSize
	bool ____mixedFrameSize_12;
	// System.Object Crosstales.NLayer.Decoder.MpegStreamReader::_readLock
	RuntimeObject * ____readLock_13;
	// System.Object Crosstales.NLayer.Decoder.MpegStreamReader::_frameLock
	RuntimeObject * ____frameLock_14;
	// Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer Crosstales.NLayer.Decoder.MpegStreamReader::_readBuf
	ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * ____readBuf_15;

public:
	inline static int32_t get_offset_of__id3Frame_0() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____id3Frame_0)); }
	inline ID3Frame_tC6D3B22540A4DB9B29931B01AE1E1E3E56184035 * get__id3Frame_0() const { return ____id3Frame_0; }
	inline ID3Frame_tC6D3B22540A4DB9B29931B01AE1E1E3E56184035 ** get_address_of__id3Frame_0() { return &____id3Frame_0; }
	inline void set__id3Frame_0(ID3Frame_tC6D3B22540A4DB9B29931B01AE1E1E3E56184035 * value)
	{
		____id3Frame_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____id3Frame_0), (void*)value);
	}

	inline static int32_t get_offset_of__riffHeaderFrame_1() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____riffHeaderFrame_1)); }
	inline RiffHeaderFrame_tE05F3CEF0A95A0086CF153AD61927605F2E4F12C * get__riffHeaderFrame_1() const { return ____riffHeaderFrame_1; }
	inline RiffHeaderFrame_tE05F3CEF0A95A0086CF153AD61927605F2E4F12C ** get_address_of__riffHeaderFrame_1() { return &____riffHeaderFrame_1; }
	inline void set__riffHeaderFrame_1(RiffHeaderFrame_tE05F3CEF0A95A0086CF153AD61927605F2E4F12C * value)
	{
		____riffHeaderFrame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____riffHeaderFrame_1), (void*)value);
	}

	inline static int32_t get_offset_of__vbrInfo_2() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____vbrInfo_2)); }
	inline VBRInfo_t54EA7525A4EA70C7C53A77E5DC193A5E9F8123AD * get__vbrInfo_2() const { return ____vbrInfo_2; }
	inline VBRInfo_t54EA7525A4EA70C7C53A77E5DC193A5E9F8123AD ** get_address_of__vbrInfo_2() { return &____vbrInfo_2; }
	inline void set__vbrInfo_2(VBRInfo_t54EA7525A4EA70C7C53A77E5DC193A5E9F8123AD * value)
	{
		____vbrInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vbrInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of__first_3() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____first_3)); }
	inline MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * get__first_3() const { return ____first_3; }
	inline MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A ** get_address_of__first_3() { return &____first_3; }
	inline void set__first_3(MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * value)
	{
		____first_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____first_3), (void*)value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____current_4)); }
	inline MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * get__current_4() const { return ____current_4; }
	inline MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_4), (void*)value);
	}

	inline static int32_t get_offset_of__last_5() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____last_5)); }
	inline MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * get__last_5() const { return ____last_5; }
	inline MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A ** get_address_of__last_5() { return &____last_5; }
	inline void set__last_5(MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * value)
	{
		____last_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____last_5), (void*)value);
	}

	inline static int32_t get_offset_of__lastFree_6() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____lastFree_6)); }
	inline MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * get__lastFree_6() const { return ____lastFree_6; }
	inline MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A ** get_address_of__lastFree_6() { return &____lastFree_6; }
	inline void set__lastFree_6(MpegFrame_tFFF5D0B15F87CA2E25F9DC5938D8A4CEA401989A * value)
	{
		____lastFree_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastFree_6), (void*)value);
	}

	inline static int32_t get_offset_of__readOffset_7() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____readOffset_7)); }
	inline int64_t get__readOffset_7() const { return ____readOffset_7; }
	inline int64_t* get_address_of__readOffset_7() { return &____readOffset_7; }
	inline void set__readOffset_7(int64_t value)
	{
		____readOffset_7 = value;
	}

	inline static int32_t get_offset_of__eofOffset_8() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____eofOffset_8)); }
	inline int64_t get__eofOffset_8() const { return ____eofOffset_8; }
	inline int64_t* get_address_of__eofOffset_8() { return &____eofOffset_8; }
	inline void set__eofOffset_8(int64_t value)
	{
		____eofOffset_8 = value;
	}

	inline static int32_t get_offset_of__source_9() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____source_9)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__source_9() const { return ____source_9; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__source_9() { return &____source_9; }
	inline void set__source_9(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____source_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_9), (void*)value);
	}

	inline static int32_t get_offset_of__canSeek_10() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____canSeek_10)); }
	inline bool get__canSeek_10() const { return ____canSeek_10; }
	inline bool* get_address_of__canSeek_10() { return &____canSeek_10; }
	inline void set__canSeek_10(bool value)
	{
		____canSeek_10 = value;
	}

	inline static int32_t get_offset_of__endFound_11() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____endFound_11)); }
	inline bool get__endFound_11() const { return ____endFound_11; }
	inline bool* get_address_of__endFound_11() { return &____endFound_11; }
	inline void set__endFound_11(bool value)
	{
		____endFound_11 = value;
	}

	inline static int32_t get_offset_of__mixedFrameSize_12() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____mixedFrameSize_12)); }
	inline bool get__mixedFrameSize_12() const { return ____mixedFrameSize_12; }
	inline bool* get_address_of__mixedFrameSize_12() { return &____mixedFrameSize_12; }
	inline void set__mixedFrameSize_12(bool value)
	{
		____mixedFrameSize_12 = value;
	}

	inline static int32_t get_offset_of__readLock_13() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____readLock_13)); }
	inline RuntimeObject * get__readLock_13() const { return ____readLock_13; }
	inline RuntimeObject ** get_address_of__readLock_13() { return &____readLock_13; }
	inline void set__readLock_13(RuntimeObject * value)
	{
		____readLock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____readLock_13), (void*)value);
	}

	inline static int32_t get_offset_of__frameLock_14() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____frameLock_14)); }
	inline RuntimeObject * get__frameLock_14() const { return ____frameLock_14; }
	inline RuntimeObject ** get_address_of__frameLock_14() { return &____frameLock_14; }
	inline void set__frameLock_14(RuntimeObject * value)
	{
		____frameLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameLock_14), (void*)value);
	}

	inline static int32_t get_offset_of__readBuf_15() { return static_cast<int32_t>(offsetof(MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806, ____readBuf_15)); }
	inline ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * get__readBuf_15() const { return ____readBuf_15; }
	inline ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 ** get_address_of__readBuf_15() { return &____readBuf_15; }
	inline void set__readBuf_15(ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * value)
	{
		____readBuf_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____readBuf_15), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer
struct ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120  : public RuntimeObject
{
public:
	// System.Byte[] Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::Data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Data_0;
	// System.Int64 Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::BaseOffset
	int64_t ___BaseOffset_1;
	// System.Int32 Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::End
	int32_t ___End_2;
	// System.Int32 Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::DiscardCount
	int32_t ___DiscardCount_3;
	// System.Object Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::_localLock
	RuntimeObject * ____localLock_4;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120, ___Data_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Data_0() const { return ___Data_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_0), (void*)value);
	}

	inline static int32_t get_offset_of_BaseOffset_1() { return static_cast<int32_t>(offsetof(ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120, ___BaseOffset_1)); }
	inline int64_t get_BaseOffset_1() const { return ___BaseOffset_1; }
	inline int64_t* get_address_of_BaseOffset_1() { return &___BaseOffset_1; }
	inline void set_BaseOffset_1(int64_t value)
	{
		___BaseOffset_1 = value;
	}

	inline static int32_t get_offset_of_End_2() { return static_cast<int32_t>(offsetof(ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120, ___End_2)); }
	inline int32_t get_End_2() const { return ___End_2; }
	inline int32_t* get_address_of_End_2() { return &___End_2; }
	inline void set_End_2(int32_t value)
	{
		___End_2 = value;
	}

	inline static int32_t get_offset_of_DiscardCount_3() { return static_cast<int32_t>(offsetof(ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120, ___DiscardCount_3)); }
	inline int32_t get_DiscardCount_3() const { return ___DiscardCount_3; }
	inline int32_t* get_address_of_DiscardCount_3() { return &___DiscardCount_3; }
	inline void set_DiscardCount_3(int32_t value)
	{
		___DiscardCount_3 = value;
	}

	inline static int32_t get_offset_of__localLock_4() { return static_cast<int32_t>(offsetof(ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120, ____localLock_4)); }
	inline RuntimeObject * get__localLock_4() const { return ____localLock_4; }
	inline RuntimeObject ** get_address_of__localLock_4() { return &____localLock_4; }
	inline void set__localLock_4(RuntimeObject * value)
	{
		____localLock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localLock_4), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C (double ___a0, double ___newBase1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Int32 Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::EnsureFilled(Crosstales.NLayer.Decoder.MpegStreamReader,System.Int64,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_EnsureFilled_m8D28E59616717A93A23BB2FF4663E7B60471463B (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * ___reader0, int64_t ___offset1, int32_t* ___count2, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::Truncate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_Truncate_m9ACF317472DFF75CA822B99A9E6E326DDF892ED6 (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::CommitDiscard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_CommitDiscard_m01ED86A03E4513F0B5AE6DD0EB34E6966D25C62B (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer__ctor_m728CE944908D22E0D9C801EB096CCFEACDBEECCD (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, int32_t ___initialSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object _localLock = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set__localLock_4(L_0);
		// public ReadBuffer(int initialSize)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// initialSize = 2 << (int)Math.Log(initialSize, 2);
		int32_t L_1 = ___initialSize0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m05D6B4CE873ABBA5D8E39F798BBB67D49ABECE2C(((double)((double)L_1)), (2.0), /*hidden argument*/NULL);
		___initialSize0 = ((int32_t)((int32_t)2<<(int32_t)((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_2)&(int32_t)((int32_t)31)))));
		// Data = new byte[initialSize];
		int32_t L_3 = ___initialSize0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->set_Data_0(L_4);
		// }
		return;
	}
}
// System.Int32 Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::Read(Crosstales.NLayer.Decoder.MpegStreamReader,System.Int64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_Read_m6CCA4B61DA3924BAF8C1B977B83A6324B8FC3CBB (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * ___reader0, int64_t ___offset1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer2, int32_t ___index3, int32_t ___count4, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (_localLock)
		RuntimeObject * L_0 = __this->get__localLock_4();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// var startIdx = EnsureFilled(reader, offset, ref count);
		MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_2 = ___reader0;
		int64_t L_3 = ___offset1;
		int32_t L_4;
		L_4 = ReadBuffer_EnsureFilled_m8D28E59616717A93A23BB2FF4663E7B60471463B(__this, L_2, L_3, (int32_t*)(&___count4), /*hidden argument*/NULL);
		V_2 = L_4;
		// Array.Copy(Data, startIdx, buffer, index, count);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_Data_0();
		int32_t L_6 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___buffer2;
		int32_t L_8 = ___index3;
		int32_t L_9 = ___count4;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_8, L_9, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x39, FINALLY_002f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			RuntimeObject * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_0038:
		{
			IL2CPP_END_FINALLY(47)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// return count;
		int32_t L_12 = ___count4;
		return L_12;
	}
}
// System.Int32 Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::ReadByte(Crosstales.NLayer.Decoder.MpegStreamReader,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_ReadByte_mD776B90F3441501C1419EBD60B5AE0A6946C10B5 (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * ___reader0, int64_t ___offset1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// lock (_localLock)
		RuntimeObject * L_0 = __this->get__localLock_4();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// var count = 1;
			V_2 = 1;
			// var startIdx = EnsureFilled(reader, offset, ref count);
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_2 = ___reader0;
			int64_t L_3 = ___offset1;
			int32_t L_4;
			L_4 = ReadBuffer_EnsureFilled_m8D28E59616717A93A23BB2FF4663E7B60471463B(__this, L_2, L_3, (int32_t*)(&V_2), /*hidden argument*/NULL);
			V_3 = L_4;
			// if (count == 1)
			int32_t L_5 = V_2;
			if ((!(((uint32_t)L_5) == ((uint32_t)1))))
			{
				goto IL_002e;
			}
		}

IL_0022:
		{
			// return Data[startIdx];
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_Data_0();
			int32_t L_7 = V_3;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			V_4 = L_9;
			IL2CPP_LEAVE(0x3C, FINALLY_0030);
		}

IL_002e:
		{
			// }
			IL2CPP_LEAVE(0x3A, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			RuntimeObject * L_11 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// return -1;
		return (-1);
	}

IL_003c:
	{
		// }
		int32_t L_12 = V_4;
		return L_12;
	}
}
// System.Int32 Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::EnsureFilled(Crosstales.NLayer.Decoder.MpegStreamReader,System.Int64,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_EnsureFilled_m8D28E59616717A93A23BB2FF4663E7B60471463B (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * ___reader0, int64_t ___offset1, int32_t* ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	RuntimeObject * V_11 = NULL;
	bool V_12 = false;
	int64_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// var startIdx = (int)(offset - BaseOffset);
		int64_t L_0 = ___offset1;
		int64_t L_1 = __this->get_BaseOffset_1();
		V_0 = ((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_0, (int64_t)L_1))));
		// int endIdx = startIdx + count;
		int32_t L_2 = V_0;
		int32_t* L_3 = ___count2;
		int32_t L_4 = *((int32_t*)L_3);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4));
		// if (startIdx < 0 || endIdx > End)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get_End_2();
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0420;
		}
	}

IL_001f:
	{
		// int readStart = 0, readCount = 0, moveCount = 0;
		V_2 = 0;
		// int readStart = 0, readCount = 0, moveCount = 0;
		V_3 = 0;
		// int readStart = 0, readCount = 0, moveCount = 0;
		V_4 = 0;
		// long readOffset = 0;
		V_5 = ((int64_t)((int64_t)0));
		// if (startIdx < 0)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		// if (!reader._source.CanSeek) throw new InvalidOperationException("Cannot seek backwards on a forward-only stream!");
		MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_9 = ___reader0;
		NullCheck(L_9);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = L_9->get__source_9();
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_10);
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		// if (!reader._source.CanSeek) throw new InvalidOperationException("Cannot seek backwards on a forward-only stream!");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_12 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral808DF11042257F134CE34DF232CD9523F589E554)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadBuffer_EnsureFilled_m8D28E59616717A93A23BB2FF4663E7B60471463B_RuntimeMethod_var)));
	}

IL_0049:
	{
		// if (End > 0)
		int32_t L_13 = __this->get_End_2();
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		// if ((startIdx + Data.Length > 0) || (Data.Length * 2 <= 16384 && startIdx + Data.Length * 2 > 0))
		int32_t L_14 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_Data_0();
		NullCheck(L_15);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))) > ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_Data_0();
		NullCheck(L_16);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))), (int32_t)2))) > ((int32_t)((int32_t)16384))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_17 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_Data_0();
		NullCheck(L_18);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), (int32_t)2))))) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}

IL_007f:
	{
		// endIdx = End;
		int32_t L_19 = __this->get_End_2();
		V_1 = L_19;
	}

IL_0086:
	{
		// readOffset = offset;
		int64_t L_20 = ___offset1;
		V_5 = L_20;
		// if (endIdx < 0)
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_00a7;
		}
	}
	{
		// Truncate();
		ReadBuffer_Truncate_m9ACF317472DFF75CA822B99A9E6E326DDF892ED6(__this, /*hidden argument*/NULL);
		// BaseOffset = offset;
		int64_t L_22 = ___offset1;
		__this->set_BaseOffset_1(L_22);
		// startIdx = 0;
		V_0 = 0;
		// endIdx = count;
		int32_t* L_23 = ___count2;
		int32_t L_24 = *((int32_t*)L_23);
		V_1 = L_24;
		// readCount = count;
		int32_t* L_25 = ___count2;
		int32_t L_26 = *((int32_t*)L_25);
		V_3 = L_26;
		// }
		goto IL_015e;
	}

IL_00a7:
	{
		// moveCount = -endIdx;
		int32_t L_27 = V_1;
		V_4 = ((-L_27));
		// readCount = -startIdx;
		int32_t L_28 = V_0;
		V_3 = ((-L_28));
		// }
		goto IL_015e;
	}

IL_00b3:
	{
		// if (endIdx < Data.Length)
		int32_t L_29 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = __this->get_Data_0();
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_00de;
		}
	}
	{
		// readCount = endIdx - End;
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get_End_2();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_32));
		// readStart = End;
		int32_t L_33 = __this->get_End_2();
		V_2 = L_33;
		// readOffset = BaseOffset + readStart;
		int64_t L_34 = __this->get_BaseOffset_1();
		int32_t L_35 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_34, (int64_t)((int64_t)((int64_t)L_35))));
		// }
		goto IL_015e;
	}

IL_00de:
	{
		// else if (endIdx - DiscardCount < Data.Length)
		int32_t L_36 = V_1;
		int32_t L_37 = __this->get_DiscardCount_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = __this->get_Data_0();
		NullCheck(L_38);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_0110;
		}
	}
	{
		// moveCount = DiscardCount;
		int32_t L_39 = __this->get_DiscardCount_3();
		V_4 = L_39;
		// readStart = End;
		int32_t L_40 = __this->get_End_2();
		V_2 = L_40;
		// readCount = endIdx - readStart;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_42));
		// readOffset = BaseOffset + readStart;
		int64_t L_43 = __this->get_BaseOffset_1();
		int32_t L_44 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_43, (int64_t)((int64_t)((int64_t)L_44))));
		// }
		goto IL_015e;
	}

IL_0110:
	{
		// else if (Data.Length * 2 <= 16384)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = __this->get_Data_0();
		NullCheck(L_45);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))), (int32_t)2))) > ((int32_t)((int32_t)16384))))
		{
			goto IL_0146;
		}
	}
	{
		// moveCount = DiscardCount;
		int32_t L_46 = __this->get_DiscardCount_3();
		V_4 = L_46;
		// readStart = End;
		int32_t L_47 = __this->get_End_2();
		V_2 = L_47;
		// readCount = endIdx - End;
		int32_t L_48 = V_1;
		int32_t L_49 = __this->get_End_2();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_49));
		// readOffset = BaseOffset + readStart;
		int64_t L_50 = __this->get_BaseOffset_1();
		int32_t L_51 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, (int64_t)((int64_t)((int64_t)L_51))));
		// }
		goto IL_015e;
	}

IL_0146:
	{
		// Truncate();
		ReadBuffer_Truncate_m9ACF317472DFF75CA822B99A9E6E326DDF892ED6(__this, /*hidden argument*/NULL);
		// BaseOffset = offset;
		int64_t L_52 = ___offset1;
		__this->set_BaseOffset_1(L_52);
		// readOffset = offset;
		int64_t L_53 = ___offset1;
		V_5 = L_53;
		// startIdx = 0;
		V_0 = 0;
		// endIdx = count;
		int32_t* L_54 = ___count2;
		int32_t L_55 = *((int32_t*)L_54);
		V_1 = L_55;
		// readCount = count;
		int32_t* L_56 = ___count2;
		int32_t L_57 = *((int32_t*)L_56);
		V_3 = L_57;
	}

IL_015e:
	{
		// if (endIdx - moveCount > Data.Length || readStart + readCount - moveCount > Data.Length)
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = __this->get_Data_0();
		NullCheck(L_60);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)L_59))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_61 = V_2;
		int32_t L_62 = V_3;
		int32_t L_63 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = __this->get_Data_0();
		NullCheck(L_64);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)L_62)), (int32_t)L_63))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length))))))
		{
			goto IL_0201;
		}
	}

IL_017f:
	{
		// var newSize = Data.Length * 2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65 = __this->get_Data_0();
		NullCheck(L_65);
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))), (int32_t)2));
		goto IL_0193;
	}

IL_018d:
	{
		// newSize *= 2;
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_66, (int32_t)2));
	}

IL_0193:
	{
		// while (newSize < endIdx - moveCount)
		int32_t L_67 = V_6;
		int32_t L_68 = V_1;
		int32_t L_69 = V_4;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)L_69)))))
		{
			goto IL_018d;
		}
	}
	{
		// var newBuf = new byte[newSize];
		int32_t L_70 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_71 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_70);
		V_7 = L_71;
		// if (moveCount < 0)
		int32_t L_72 = V_4;
		if ((((int32_t)L_72) >= ((int32_t)0)))
		{
			goto IL_01cc;
		}
	}
	{
		// Array.Copy(Data, 0, newBuf, -moveCount, End + moveCount);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_73 = __this->get_Data_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_74 = V_7;
		int32_t L_75 = V_4;
		int32_t L_76 = __this->get_End_2();
		int32_t L_77 = V_4;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_73, 0, (RuntimeArray *)(RuntimeArray *)L_74, ((-L_75)), ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)L_77)), /*hidden argument*/NULL);
		// DiscardCount = 0;
		__this->set_DiscardCount_3(0);
		// }
		goto IL_01f4;
	}

IL_01cc:
	{
		// Array.Copy(Data, moveCount, newBuf, 0, End - moveCount);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_78 = __this->get_Data_0();
		int32_t L_79 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80 = V_7;
		int32_t L_81 = __this->get_End_2();
		int32_t L_82 = V_4;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_78, L_79, (RuntimeArray *)(RuntimeArray *)L_80, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)L_82)), /*hidden argument*/NULL);
		// DiscardCount -= moveCount;
		int32_t L_83 = __this->get_DiscardCount_3();
		int32_t L_84 = V_4;
		__this->set_DiscardCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)L_84)));
	}

IL_01f4:
	{
		// Data = newBuf;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_85 = V_7;
		__this->set_Data_0(L_85);
		// }
		goto IL_028c;
	}

IL_0201:
	{
		// else if (moveCount != 0)
		int32_t L_86 = V_4;
		if (!L_86)
		{
			goto IL_028c;
		}
	}
	{
		// if (moveCount > 0)
		int32_t L_87 = V_4;
		if ((((int32_t)L_87) <= ((int32_t)0)))
		{
			goto IL_023b;
		}
	}
	{
		// Array.Copy(Data, moveCount, Data, 0, End - moveCount);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = __this->get_Data_0();
		int32_t L_89 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_90 = __this->get_Data_0();
		int32_t L_91 = __this->get_End_2();
		int32_t L_92 = V_4;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_88, L_89, (RuntimeArray *)(RuntimeArray *)L_90, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)L_92)), /*hidden argument*/NULL);
		// DiscardCount -= moveCount;
		int32_t L_93 = __this->get_DiscardCount_3();
		int32_t L_94 = V_4;
		__this->set_DiscardCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)L_94)));
		// }
		goto IL_028c;
	}

IL_023b:
	{
		// for (int i = 0, srcIdx = Data.Length - 1, destIdx = Data.Length - 1 - moveCount; i < moveCount; i++, srcIdx--, destIdx--)
		V_8 = 0;
		// for (int i = 0, srcIdx = Data.Length - 1, destIdx = Data.Length - 1 - moveCount; i < moveCount; i++, srcIdx--, destIdx--)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_95 = __this->get_Data_0();
		NullCheck(L_95);
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length))), (int32_t)1));
		// for (int i = 0, srcIdx = Data.Length - 1, destIdx = Data.Length - 1 - moveCount; i < moveCount; i++, srcIdx--, destIdx--)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = __this->get_Data_0();
		NullCheck(L_96);
		int32_t L_97 = V_4;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length))), (int32_t)1)), (int32_t)L_97));
		goto IL_027f;
	}

IL_025b:
	{
		// Data[destIdx] = Data[srcIdx];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_98 = __this->get_Data_0();
		int32_t L_99 = V_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_100 = __this->get_Data_0();
		int32_t L_101 = V_9;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		uint8_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (uint8_t)L_103);
		// for (int i = 0, srcIdx = Data.Length - 1, destIdx = Data.Length - 1 - moveCount; i < moveCount; i++, srcIdx--, destIdx--)
		int32_t L_104 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
		// for (int i = 0, srcIdx = Data.Length - 1, destIdx = Data.Length - 1 - moveCount; i < moveCount; i++, srcIdx--, destIdx--)
		int32_t L_105 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)1));
		// for (int i = 0, srcIdx = Data.Length - 1, destIdx = Data.Length - 1 - moveCount; i < moveCount; i++, srcIdx--, destIdx--)
		int32_t L_106 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1));
	}

IL_027f:
	{
		// for (int i = 0, srcIdx = Data.Length - 1, destIdx = Data.Length - 1 - moveCount; i < moveCount; i++, srcIdx--, destIdx--)
		int32_t L_107 = V_8;
		int32_t L_108 = V_4;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_025b;
		}
	}
	{
		// DiscardCount = 0;
		__this->set_DiscardCount_3(0);
	}

IL_028c:
	{
		// BaseOffset += moveCount;
		int64_t L_109 = __this->get_BaseOffset_1();
		int32_t L_110 = V_4;
		__this->set_BaseOffset_1(((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)((int64_t)((int64_t)L_110)))));
		// readStart -= moveCount;
		int32_t L_111 = V_2;
		int32_t L_112 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_111, (int32_t)L_112));
		// startIdx -= moveCount;
		int32_t L_113 = V_0;
		int32_t L_114 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)L_114));
		// endIdx -= moveCount;
		int32_t L_115 = V_1;
		int32_t L_116 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_115, (int32_t)L_116));
		// End -= moveCount;
		int32_t L_117 = __this->get_End_2();
		int32_t L_118 = V_4;
		__this->set_End_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_117, (int32_t)L_118)));
		// lock (reader._readLock)
		MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_119 = ___reader0;
		NullCheck(L_119);
		RuntimeObject * L_120 = L_119->get__readLock_13();
		V_11 = L_120;
		V_12 = (bool)0;
	}

IL_02c5:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_121 = V_11;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_121, (bool*)(&V_12), /*hidden argument*/NULL);
			// if (readCount > 0 && reader._source.Position != readOffset && readOffset < reader._eofOffset)
			int32_t L_122 = V_3;
			if ((((int32_t)L_122) <= ((int32_t)0)))
			{
				goto IL_0392;
			}
		}

IL_02d5:
		{
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_123 = ___reader0;
			NullCheck(L_123);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_124 = L_123->get__source_9();
			NullCheck(L_124);
			int64_t L_125;
			L_125 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_124);
			int64_t L_126 = V_5;
			if ((((int64_t)L_125) == ((int64_t)L_126)))
			{
				goto IL_0392;
			}
		}

IL_02e7:
		{
			int64_t L_127 = V_5;
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_128 = ___reader0;
			NullCheck(L_128);
			int64_t L_129 = L_128->get__eofOffset_8();
			if ((((int64_t)L_127) >= ((int64_t)L_129)))
			{
				goto IL_0392;
			}
		}

IL_02f4:
		{
			// if (reader._canSeek)
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_130 = ___reader0;
			NullCheck(L_130);
			bool L_131 = L_130->get__canSeek_10();
			if (!L_131)
			{
				goto IL_0324;
			}
		}

IL_02fc:
		try
		{ // begin try (depth: 2)
			// reader._source.Position = readOffset;
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_132 = ___reader0;
			NullCheck(L_132);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_133 = L_132->get__source_9();
			int64_t L_134 = V_5;
			NullCheck(L_133);
			VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_133, L_134);
			// }
			goto IL_0392;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_030e;
			}
			throw e;
		}

CATCH_030e:
		{ // begin catch(System.IO.EndOfStreamException)
			// catch (EndOfStreamException)
			// reader._eofOffset = reader._source.Length;
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_135 = ___reader0;
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_136 = ___reader0;
			NullCheck(L_136);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_137 = L_136->get__source_9();
			NullCheck(L_137);
			int64_t L_138;
			L_138 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_137);
			NullCheck(L_135);
			L_135->set__eofOffset_8(L_138);
			// readCount = 0;
			V_3 = 0;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0392;
		} // end catch (depth: 2)

IL_0324:
		{
			// var seekCount = readOffset - reader._source.Position;
			int64_t L_139 = V_5;
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_140 = ___reader0;
			NullCheck(L_140);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_141 = L_140->get__source_9();
			NullCheck(L_141);
			int64_t L_142;
			L_142 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_141);
			V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_139, (int64_t)L_142));
			goto IL_0359;
		}

IL_0336:
		{
			// if (reader._source.ReadByte() == -1)
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_143 = ___reader0;
			NullCheck(L_143);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_144 = L_143->get__source_9();
			NullCheck(L_144);
			int32_t L_145;
			L_145 = VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.IO.Stream::ReadByte() */, L_144);
			if ((!(((uint32_t)L_145) == ((uint32_t)(-1)))))
			{
				goto IL_0359;
			}
		}

IL_0344:
		{
			// reader._eofOffset = reader._source.Position;
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_146 = ___reader0;
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_147 = ___reader0;
			NullCheck(L_147);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_148 = L_147->get__source_9();
			NullCheck(L_148);
			int64_t L_149;
			L_149 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_148);
			NullCheck(L_146);
			L_146->set__eofOffset_8(L_149);
			// readCount = 0;
			V_3 = 0;
			// break;
			goto IL_0392;
		}

IL_0359:
		{
			// while (--seekCount >= 0)
			int64_t L_150 = V_13;
			int64_t L_151 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_150, (int64_t)((int64_t)((int64_t)1))));
			V_13 = L_151;
			if ((((int64_t)L_151) >= ((int64_t)((int64_t)((int64_t)0)))))
			{
				goto IL_0336;
			}
		}

IL_0365:
		{
			goto IL_0392;
		}

IL_0367:
		{
			// var temp = reader._source.Read(Data, readStart, readCount);
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_152 = ___reader0;
			NullCheck(L_152);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_153 = L_152->get__source_9();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_154 = __this->get_Data_0();
			int32_t L_155 = V_2;
			int32_t L_156 = V_3;
			NullCheck(L_153);
			int32_t L_157;
			L_157 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_153, L_154, L_155, L_156);
			V_14 = L_157;
			// if (temp == 0)
			int32_t L_158 = V_14;
			if (!L_158)
			{
				goto IL_03a0;
			}
		}

IL_0380:
		{
			// readStart += temp;
			int32_t L_159 = V_2;
			int32_t L_160 = V_14;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)L_160));
			// readOffset += temp;
			int64_t L_161 = V_5;
			int32_t L_162 = V_14;
			V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_161, (int64_t)((int64_t)((int64_t)L_162))));
			// readCount -= temp;
			int32_t L_163 = V_3;
			int32_t L_164 = V_14;
			V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_163, (int32_t)L_164));
		}

IL_0392:
		{
			// while (readCount > 0 && readOffset < reader._eofOffset)
			int32_t L_165 = V_3;
			if ((((int32_t)L_165) <= ((int32_t)0)))
			{
				goto IL_03a0;
			}
		}

IL_0396:
		{
			int64_t L_166 = V_5;
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_167 = ___reader0;
			NullCheck(L_167);
			int64_t L_168 = L_167->get__eofOffset_8();
			if ((((int64_t)L_166) < ((int64_t)L_168)))
			{
				goto IL_0367;
			}
		}

IL_03a0:
		{
			// if (readStart > End)
			int32_t L_169 = V_2;
			int32_t L_170 = __this->get_End_2();
			if ((((int32_t)L_169) <= ((int32_t)L_170)))
			{
				goto IL_03b0;
			}
		}

IL_03a9:
		{
			// End = readStart;
			int32_t L_171 = V_2;
			__this->set_End_2(L_171);
		}

IL_03b0:
		{
			// if (End < endIdx)
			int32_t L_172 = __this->get_End_2();
			int32_t L_173 = V_1;
			if ((((int32_t)L_172) >= ((int32_t)L_173)))
			{
				goto IL_03cb;
			}
		}

IL_03b9:
		{
			// count = Math.Max(0, End - startIdx);
			int32_t* L_174 = ___count2;
			int32_t L_175 = __this->get_End_2();
			int32_t L_176 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
			int32_t L_177;
			L_177 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_175, (int32_t)L_176)), /*hidden argument*/NULL);
			*((int32_t*)L_174) = (int32_t)L_177;
			// }
			IL2CPP_LEAVE(0x420, FINALLY_0414);
		}

IL_03cb:
		{
			// else if (End < Data.Length)
			int32_t L_178 = __this->get_End_2();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_179 = __this->get_Data_0();
			NullCheck(L_179);
			if ((((int32_t)L_178) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_179)->max_length))))))
			{
				goto IL_0412;
			}
		}

IL_03db:
		{
			// var temp = reader._source.Read(Data, End, Data.Length - End);
			MpegStreamReader_t92899886F5D9DDE512F3A3D10EFF041065467806 * L_180 = ___reader0;
			NullCheck(L_180);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_181 = L_180->get__source_9();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_182 = __this->get_Data_0();
			int32_t L_183 = __this->get_End_2();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_184 = __this->get_Data_0();
			NullCheck(L_184);
			int32_t L_185 = __this->get_End_2();
			NullCheck(L_181);
			int32_t L_186;
			L_186 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_181, L_182, L_183, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_184)->max_length))), (int32_t)L_185)));
			V_15 = L_186;
			// End += temp;
			int32_t L_187 = __this->get_End_2();
			int32_t L_188 = V_15;
			__this->set_End_2(((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)L_188)));
		}

IL_0412:
		{
			// }
			IL2CPP_LEAVE(0x420, FINALLY_0414);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0414;
	}

FINALLY_0414:
	{ // begin finally (depth: 1)
		{
			bool L_189 = V_12;
			if (!L_189)
			{
				goto IL_041f;
			}
		}

IL_0418:
		{
			RuntimeObject * L_190 = V_11;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_190, /*hidden argument*/NULL);
		}

IL_041f:
		{
			IL2CPP_END_FINALLY(1044)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1044)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x420, IL_0420)
	}

IL_0420:
	{
		// return startIdx;
		int32_t L_191 = V_0;
		return L_191;
	}
}
// System.Void Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::DiscardThrough(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_DiscardThrough_m385704998641349EAF661E3774FC4A796A777BE9 (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, int64_t ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (_localLock)
		RuntimeObject * L_0 = __this->get__localLock_4();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// var count = (int)(offset - BaseOffset);
			int64_t L_2 = ___offset0;
			int64_t L_3 = __this->get_BaseOffset_1();
			V_2 = ((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_2, (int64_t)L_3))));
			// DiscardCount = Math.Max(count, DiscardCount);
			int32_t L_4 = V_2;
			int32_t L_5 = __this->get_DiscardCount_3();
			IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
			int32_t L_6;
			L_6 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(L_4, L_5, /*hidden argument*/NULL);
			__this->set_DiscardCount_3(L_6);
			// if (DiscardCount >= Data.Length) CommitDiscard();
			int32_t L_7 = __this->get_DiscardCount_3();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_Data_0();
			NullCheck(L_8);
			if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
			{
				goto IL_0043;
			}
		}

IL_003d:
		{
			// if (DiscardCount >= Data.Length) CommitDiscard();
			ReadBuffer_CommitDiscard_m01ED86A03E4513F0B5AE6DD0EB34E6966D25C62B(__this, /*hidden argument*/NULL);
		}

IL_0043:
		{
			// }
			IL2CPP_LEAVE(0x4F, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_004e;
			}
		}

IL_0048:
		{
			RuntimeObject * L_10 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::Truncate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_Truncate_m9ACF317472DFF75CA822B99A9E6E326DDF892ED6 (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, const RuntimeMethod* method)
{
	{
		// End = 0;
		__this->set_End_2(0);
		// DiscardCount = 0;
		__this->set_DiscardCount_3(0);
		// }
		return;
	}
}
// System.Void Crosstales.NLayer.Decoder.MpegStreamReader/ReadBuffer::CommitDiscard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_CommitDiscard_m01ED86A03E4513F0B5AE6DD0EB34E6966D25C62B (ReadBuffer_tF37C1A987F7DAEEF56F61DDC6EF3DD75923C1120 * __this, const RuntimeMethod* method)
{
	{
		// if (DiscardCount >= Data.Length || DiscardCount >= End)
		int32_t L_0 = __this->get_DiscardCount_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_Data_0();
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->get_DiscardCount_3();
		int32_t L_3 = __this->get_End_2();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_003b;
		}
	}

IL_001e:
	{
		// BaseOffset += DiscardCount;
		int64_t L_4 = __this->get_BaseOffset_1();
		int32_t L_5 = __this->get_DiscardCount_3();
		__this->set_BaseOffset_1(((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)((int64_t)((int64_t)L_5)))));
		// End = 0;
		__this->set_End_2(0);
		// }
		goto IL_0087;
	}

IL_003b:
	{
		// Array.Copy(Data, DiscardCount, Data, 0, End - DiscardCount);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_Data_0();
		int32_t L_7 = __this->get_DiscardCount_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_Data_0();
		int32_t L_9 = __this->get_End_2();
		int32_t L_10 = __this->get_DiscardCount_3();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_6, L_7, (RuntimeArray *)(RuntimeArray *)L_8, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10)), /*hidden argument*/NULL);
		// BaseOffset += DiscardCount;
		int64_t L_11 = __this->get_BaseOffset_1();
		int32_t L_12 = __this->get_DiscardCount_3();
		__this->set_BaseOffset_1(((int64_t)il2cpp_codegen_add((int64_t)L_11, (int64_t)((int64_t)((int64_t)L_12)))));
		// End -= DiscardCount;
		int32_t L_13 = __this->get_End_2();
		int32_t L_14 = __this->get_DiscardCount_3();
		__this->set_End_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14)));
	}

IL_0087:
	{
		// DiscardCount = 0;
		__this->set_DiscardCount_3(0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
