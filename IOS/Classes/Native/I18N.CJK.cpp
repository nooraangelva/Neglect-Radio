#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// I18N.CJK.GB18030Source/GB18030Map[]
struct GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9;
// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD307A7EBC17BA5C45E5CA81A0136746BE54DA1EF;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// I18N.CJK.CP50220
struct CP50220_t8E4E404A5B71A494C71269D7954F0B9D4F54491E;
// I18N.CJK.CP50221
struct CP50221_t01BD1329443F21B5742D75EB3E5E132FA18C5E09;
// I18N.CJK.CP50222
struct CP50222_t2252A6D45430B3DACE656E8D374835B25BA5C3AA;
// I18N.CJK.CP51932
struct CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834;
// I18N.CJK.CP51932Decoder
struct CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33;
// I18N.CJK.CP51932Encoder
struct CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C;
// I18N.CJK.CP51949
struct CP51949_t41CC407C92E3A4C117B8C6B9DE004DB8C47F8985;
// I18N.CJK.CP54936
struct CP54936_tDF48D9D5E3C13E5AA64C12E52F876E14E41E2FBF;
// I18N.CJK.CP932
struct CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC;
// I18N.CJK.CP932Decoder
struct CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33;
// I18N.CJK.CP936
struct CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2;
// I18N.CJK.CP936Decoder
struct CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A;
// I18N.CJK.CP949
struct CP949_t95FD5E5FF8F158DCD75A14268631F4C0A8BFC4C2;
// I18N.CJK.CP950
struct CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898;
// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// I18N.CJK.CodeTable
struct CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07;
// I18N.CJK.DbcsConvert
struct DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3;
// I18N.CJK.DbcsEncoding
struct DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B;
// I18N.CJK.ENCbig5
struct ENCbig5_tB34608E96D846F17EE93A35DE32EDA09EC7EAC31;
// I18N.CJK.ENCeuc_jp
struct ENCeuc_jp_t82C28EC09DD3250FC2CE7700A1CA7417E5F09183;
// I18N.CJK.ENCeuc_kr
struct ENCeuc_kr_tB779B629D3248F1DFD7A2E5995985C39B8D97498;
// I18N.CJK.ENCgb18030
struct ENCgb18030_t180F08CF4FA7800256E1EF5822C5DAE5D759295A;
// I18N.CJK.ENCgb2312
struct ENCgb2312_tEAF995FB21436CA68951B9D06A7177899971EBC1;
// I18N.CJK.ENCiso_2022_jp
struct ENCiso_2022_jp_tCEC624FA06E438B99588343B3FA56A54095A6375;
// I18N.CJK.ENCshift_jis
struct ENCshift_jis_tE119EBC5618514E6305CBE452D60DE43B316453C;
// I18N.CJK.ENCuhc
struct ENCuhc_tCF31710652D905EDF1677E029390C80700565395;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0;
// System.Text.EncoderNLS
struct EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// I18N.CJK.GB18030Decoder
struct GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64;
// I18N.CJK.GB18030Encoder
struct GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452;
// I18N.CJK.GB18030Encoding
struct GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD;
// I18N.CJK.GB18030Source
struct GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// I18N.CJK.ISO2022JPDecoder
struct ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D;
// I18N.CJK.ISO2022JPEncoder
struct ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED;
// I18N.CJK.ISO2022JPEncoding
struct ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04;
// I18N.CJK.JISConvert
struct JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268;
// I18N.CJK.KoreanEncoding
struct KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// I18N.Common.MonoEncoder
struct MonoEncoder_tCCB62900DB296E12182A8A727168125251B19284;
// I18N.Common.MonoEncoding
struct MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Type
struct Type_t;
// System.Reflection.TypeFilter
struct TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// I18N.CJK.CP950/CP950Decoder
struct CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF;
// I18N.CJK.DbcsEncoding/DbcsDecoder
struct DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE;
// I18N.CJK.GB18030Source/GB18030Map
struct GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87;
// I18N.CJK.KoreanEncoding/KoreanDecoder
struct KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tD307A7EBC17BA5C45E5CA81A0136746BE54DA1EF____U24U24fieldU2D0_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB;
IL2CPP_EXTERN_C String_t* _stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE;
IL2CPP_EXTERN_C String_t* _stringLiteral135BCD65E52CDAFB4FCF5E6C49A413A0CB794D3B;
IL2CPP_EXTERN_C String_t* _stringLiteral19AF67277280509C9DA28ED8F1A254429648F4CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9456FD3CA0E32700AFB53160BCC870B3848FF4;
IL2CPP_EXTERN_C String_t* _stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED;
IL2CPP_EXTERN_C String_t* _stringLiteral25D8BC23F831D8EFA6509D258FF7E36469D41625;
IL2CPP_EXTERN_C String_t* _stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0;
IL2CPP_EXTERN_C String_t* _stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral32330AB77DEF9883B00C95C23F73315939670D22;
IL2CPP_EXTERN_C String_t* _stringLiteral3376C44466E919A70A02AA3ACB7791D292C161BE;
IL2CPP_EXTERN_C String_t* _stringLiteral40EE947A7070BE6D20D77536685265C688F4713A;
IL2CPP_EXTERN_C String_t* _stringLiteral46D49ED9792AFC72CCEBD7E6D237722C37410FBF;
IL2CPP_EXTERN_C String_t* _stringLiteral4A1E7CA2D7A9670B0D9A719DC44C35DAE10EB3C8;
IL2CPP_EXTERN_C String_t* _stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8;
IL2CPP_EXTERN_C String_t* _stringLiteral55C78D7827EC5F6276BA3568C85612BF051686B2;
IL2CPP_EXTERN_C String_t* _stringLiteral5B02C95FD71AC5B53DC8E403117E89B593236473;
IL2CPP_EXTERN_C String_t* _stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E;
IL2CPP_EXTERN_C String_t* _stringLiteral6C0852A35F5B2C09467F4C96BBE883A402D2C15A;
IL2CPP_EXTERN_C String_t* _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4CAA44E577D721780626FDA762744166099063;
IL2CPP_EXTERN_C String_t* _stringLiteral7C17BEF3EFFF7AD2B5A5AA3C0CA404589CE48C27;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332;
IL2CPP_EXTERN_C String_t* _stringLiteral8B19C1CC68E20679F72DBE50617728AA0FDEE4D3;
IL2CPP_EXTERN_C String_t* _stringLiteral98F909B47B62CE0D1D166DF4CDA36DD83742071F;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA99C92BB9065939AEAB82DCEAAB6CEE49FA2FB;
IL2CPP_EXTERN_C String_t* _stringLiteralA2D3FF2FE923BEF204F5539A8AB3FD5EEA81ADFF;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD91FE754F32DC76537C154682A89C05C27E0F3;
IL2CPP_EXTERN_C String_t* _stringLiteralAB44D305293AF0B75A15DDA90DD538CE236474E7;
IL2CPP_EXTERN_C String_t* _stringLiteralB5ECFFDB038BCFA2116D6102731BC2B18BB78E18;
IL2CPP_EXTERN_C String_t* _stringLiteralBB68F8F2A0E7A2F44AAEAFA9A4A9E57F16C4D7DE;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A8569669CE3C1A1791A0C7468C4370B4C4FA95;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCA7C0B445ECC76093C5099F1A970EA4228DC03;
IL2CPP_EXTERN_C String_t* _stringLiteralD0050F900BF1A1EA5A688BEEDDA876E99ECF7DBD;
IL2CPP_EXTERN_C String_t* _stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C;
IL2CPP_EXTERN_C String_t* _stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC3DCC8182BD98C2EEB8C528D7001625C982858;
IL2CPP_EXTERN_C String_t* _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932Encoder_GetBytesImpl_mFAF6C7EB36C3C45884BABDE0B50896449664A387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932_GetMaxByteCount_mAE3DB7D8DEA49A095AFBEC980F076098F477003E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP51932_GetMaxCharCount_m05AD971B89E3CEFA84D89F358F393509071FD508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP932Decoder_GetChars_m717D87842627744A6D6BE4211780E11670C75621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP932_GetBytesImpl_mA8DC5D3BF2596E24E22C0320263E2EFBC5E2EBB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP932_GetMaxByteCount_mCEC276D202DDFBCDB120C1A9E749A1300D17EB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CP932_GetMaxCharCount_mF02A5DB21B8A2CFEA85665C6317CDC58CA8D6AE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodeTable__ctor_m680F5F405451137DF83FD281CB4AFE3309A67C92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetByteCount_mDEB2787075D427F035FE1AAC64B29C87CDD37B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetCharCount_m9B41BC057C966DD9997F3C0FDDC451121FE652A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetChars_mBFE3305B3788E6ADB1F123F39EAB830C9A800693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetMaxByteCount_m5C4A8F1FBFF1A6315F94107FA01BCDE1FEAAEFA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbcsEncoding_GetMaxCharCount_mD4C83320CAB0B92E046E9661DDAB75F89B777DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GB18030Source_FromGBX_mA8AE20EB1573F242DDFA854A5742D0838BE9E163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GB18030Source_FromUCS_m1BAEB0481B70F612777C294088C5DD96CC7232FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GB18030Source__cctor_m3B48294B24D8870A6A00E2A6E38360818C382CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISO2022JPEncoder_SwitchMode_m3E0844D3B76B3F8DBFC77ADACA2B17C2715F962C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Assembly_t_0_0_0_var;
struct Assembly_t_marshaled_com;
struct Assembly_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE4649CC23385742C0DEE25D163E8943726A0E95D 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// I18N.CJK.CodeTable
struct CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07  : public RuntimeObject
{
public:
	// System.IO.Stream I18N.CJK.CodeTable::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}
};


// Consts
struct Consts_t72186F30902BF182311DED60DE5E413BC3650B55  : public RuntimeObject
{
public:

public:
};


// I18N.CJK.DbcsConvert
struct DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3  : public RuntimeObject
{
public:
	// System.Byte[] I18N.CJK.DbcsConvert::n2u
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___n2u_0;
	// System.Byte[] I18N.CJK.DbcsConvert::u2n
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___u2n_1;

public:
	inline static int32_t get_offset_of_n2u_0() { return static_cast<int32_t>(offsetof(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3, ___n2u_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_n2u_0() const { return ___n2u_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_n2u_0() { return &___n2u_0; }
	inline void set_n2u_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___n2u_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___n2u_0), (void*)value);
	}

	inline static int32_t get_offset_of_u2n_1() { return static_cast<int32_t>(offsetof(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3, ___u2n_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_u2n_1() const { return ___u2n_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_u2n_1() { return &___u2n_1; }
	inline void set_u2n_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___u2n_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___u2n_1), (void*)value);
	}
};

struct DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.DbcsConvert::Gb2312
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___Gb2312_2;
	// I18N.CJK.DbcsConvert I18N.CJK.DbcsConvert::Big5
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___Big5_3;
	// I18N.CJK.DbcsConvert I18N.CJK.DbcsConvert::KS
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___KS_4;

public:
	inline static int32_t get_offset_of_Gb2312_2() { return static_cast<int32_t>(offsetof(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields, ___Gb2312_2)); }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * get_Gb2312_2() const { return ___Gb2312_2; }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 ** get_address_of_Gb2312_2() { return &___Gb2312_2; }
	inline void set_Gb2312_2(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * value)
	{
		___Gb2312_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gb2312_2), (void*)value);
	}

	inline static int32_t get_offset_of_Big5_3() { return static_cast<int32_t>(offsetof(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields, ___Big5_3)); }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * get_Big5_3() const { return ___Big5_3; }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 ** get_address_of_Big5_3() { return &___Big5_3; }
	inline void set_Big5_3(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * value)
	{
		___Big5_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Big5_3), (void*)value);
	}

	inline static int32_t get_offset_of_KS_4() { return static_cast<int32_t>(offsetof(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields, ___KS_4)); }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * get_KS_4() const { return ___KS_4; }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 ** get_address_of_KS_4() { return &___KS_4; }
	inline void set_KS_4(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * value)
	{
		___KS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KS_4), (void*)value);
	}
};


// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallback_0)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallback_0)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___encoder_2)); }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_56)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_59)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_60)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// I18N.CJK.GB18030Source
struct GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B  : public RuntimeObject
{
public:

public:
};

struct GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields
{
public:
	// System.Byte* I18N.CJK.GB18030Source::gbx2uni
	uint8_t* ___gbx2uni_0;
	// System.Byte* I18N.CJK.GB18030Source::uni2gbx
	uint8_t* ___uni2gbx_1;
	// System.Int32 I18N.CJK.GB18030Source::gbx2uniSize
	int32_t ___gbx2uniSize_2;
	// System.Int32 I18N.CJK.GB18030Source::uni2gbxSize
	int32_t ___uni2gbxSize_3;
	// System.Int64 I18N.CJK.GB18030Source::gbxBase
	int64_t ___gbxBase_4;
	// System.Int64 I18N.CJK.GB18030Source::gbxSuppBase
	int64_t ___gbxSuppBase_5;
	// I18N.CJK.GB18030Source/GB18030Map[] I18N.CJK.GB18030Source::ranges
	GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* ___ranges_6;

public:
	inline static int32_t get_offset_of_gbx2uni_0() { return static_cast<int32_t>(offsetof(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields, ___gbx2uni_0)); }
	inline uint8_t* get_gbx2uni_0() const { return ___gbx2uni_0; }
	inline uint8_t** get_address_of_gbx2uni_0() { return &___gbx2uni_0; }
	inline void set_gbx2uni_0(uint8_t* value)
	{
		___gbx2uni_0 = value;
	}

	inline static int32_t get_offset_of_uni2gbx_1() { return static_cast<int32_t>(offsetof(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields, ___uni2gbx_1)); }
	inline uint8_t* get_uni2gbx_1() const { return ___uni2gbx_1; }
	inline uint8_t** get_address_of_uni2gbx_1() { return &___uni2gbx_1; }
	inline void set_uni2gbx_1(uint8_t* value)
	{
		___uni2gbx_1 = value;
	}

	inline static int32_t get_offset_of_gbx2uniSize_2() { return static_cast<int32_t>(offsetof(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields, ___gbx2uniSize_2)); }
	inline int32_t get_gbx2uniSize_2() const { return ___gbx2uniSize_2; }
	inline int32_t* get_address_of_gbx2uniSize_2() { return &___gbx2uniSize_2; }
	inline void set_gbx2uniSize_2(int32_t value)
	{
		___gbx2uniSize_2 = value;
	}

	inline static int32_t get_offset_of_uni2gbxSize_3() { return static_cast<int32_t>(offsetof(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields, ___uni2gbxSize_3)); }
	inline int32_t get_uni2gbxSize_3() const { return ___uni2gbxSize_3; }
	inline int32_t* get_address_of_uni2gbxSize_3() { return &___uni2gbxSize_3; }
	inline void set_uni2gbxSize_3(int32_t value)
	{
		___uni2gbxSize_3 = value;
	}

	inline static int32_t get_offset_of_gbxBase_4() { return static_cast<int32_t>(offsetof(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields, ___gbxBase_4)); }
	inline int64_t get_gbxBase_4() const { return ___gbxBase_4; }
	inline int64_t* get_address_of_gbxBase_4() { return &___gbxBase_4; }
	inline void set_gbxBase_4(int64_t value)
	{
		___gbxBase_4 = value;
	}

	inline static int32_t get_offset_of_gbxSuppBase_5() { return static_cast<int32_t>(offsetof(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields, ___gbxSuppBase_5)); }
	inline int64_t get_gbxSuppBase_5() const { return ___gbxSuppBase_5; }
	inline int64_t* get_address_of_gbxSuppBase_5() { return &___gbxSuppBase_5; }
	inline void set_gbxSuppBase_5(int64_t value)
	{
		___gbxSuppBase_5 = value;
	}

	inline static int32_t get_offset_of_ranges_6() { return static_cast<int32_t>(offsetof(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields, ___ranges_6)); }
	inline GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* get_ranges_6() const { return ___ranges_6; }
	inline GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9** get_address_of_ranges_6() { return &___ranges_6; }
	inline void set_ranges_6(GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* value)
	{
		___ranges_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ranges_6), (void*)value);
	}
};


// I18N.CJK.JISConvert
struct JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268  : public RuntimeObject
{
public:
	// System.Byte[] I18N.CJK.JISConvert::jisx0208ToUnicode
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___jisx0208ToUnicode_5;
	// System.Byte[] I18N.CJK.JISConvert::jisx0212ToUnicode
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___jisx0212ToUnicode_6;
	// System.Byte[] I18N.CJK.JISConvert::cjkToJis
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cjkToJis_7;
	// System.Byte[] I18N.CJK.JISConvert::greekToJis
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___greekToJis_8;
	// System.Byte[] I18N.CJK.JISConvert::extraToJis
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___extraToJis_9;

public:
	inline static int32_t get_offset_of_jisx0208ToUnicode_5() { return static_cast<int32_t>(offsetof(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268, ___jisx0208ToUnicode_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_jisx0208ToUnicode_5() const { return ___jisx0208ToUnicode_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_jisx0208ToUnicode_5() { return &___jisx0208ToUnicode_5; }
	inline void set_jisx0208ToUnicode_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___jisx0208ToUnicode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jisx0208ToUnicode_5), (void*)value);
	}

	inline static int32_t get_offset_of_jisx0212ToUnicode_6() { return static_cast<int32_t>(offsetof(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268, ___jisx0212ToUnicode_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_jisx0212ToUnicode_6() const { return ___jisx0212ToUnicode_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_jisx0212ToUnicode_6() { return &___jisx0212ToUnicode_6; }
	inline void set_jisx0212ToUnicode_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___jisx0212ToUnicode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jisx0212ToUnicode_6), (void*)value);
	}

	inline static int32_t get_offset_of_cjkToJis_7() { return static_cast<int32_t>(offsetof(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268, ___cjkToJis_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cjkToJis_7() const { return ___cjkToJis_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cjkToJis_7() { return &___cjkToJis_7; }
	inline void set_cjkToJis_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cjkToJis_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cjkToJis_7), (void*)value);
	}

	inline static int32_t get_offset_of_greekToJis_8() { return static_cast<int32_t>(offsetof(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268, ___greekToJis_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_greekToJis_8() const { return ___greekToJis_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_greekToJis_8() { return &___greekToJis_8; }
	inline void set_greekToJis_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___greekToJis_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___greekToJis_8), (void*)value);
	}

	inline static int32_t get_offset_of_extraToJis_9() { return static_cast<int32_t>(offsetof(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268, ___extraToJis_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_extraToJis_9() const { return ___extraToJis_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_extraToJis_9() { return &___extraToJis_9; }
	inline void set_extraToJis_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___extraToJis_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extraToJis_9), (void*)value);
	}
};

struct JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_StaticFields
{
public:
	// I18N.CJK.JISConvert I18N.CJK.JISConvert::convert
	JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * ___convert_10;
	// System.Object I18N.CJK.JISConvert::lockobj
	RuntimeObject * ___lockobj_11;

public:
	inline static int32_t get_offset_of_convert_10() { return static_cast<int32_t>(offsetof(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_StaticFields, ___convert_10)); }
	inline JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * get_convert_10() const { return ___convert_10; }
	inline JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 ** get_address_of_convert_10() { return &___convert_10; }
	inline void set_convert_10(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * value)
	{
		___convert_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_10), (void*)value);
	}

	inline static int32_t get_offset_of_lockobj_11() { return static_cast<int32_t>(offsetof(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_StaticFields, ___lockobj_11)); }
	inline RuntimeObject * get_lockobj_11() const { return ___lockobj_11; }
	inline RuntimeObject ** get_address_of_lockobj_11() { return &___lockobj_11; }
	inline void set_lockobj_11(RuntimeObject * value)
	{
		___lockobj_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockobj_11), (void*)value);
	}
};


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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// I18N.CJK.GB18030Source/GB18030Map
struct GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87  : public RuntimeObject
{
public:
	// System.Int32 I18N.CJK.GB18030Source/GB18030Map::UStart
	int32_t ___UStart_0;
	// System.Int32 I18N.CJK.GB18030Source/GB18030Map::UEnd
	int32_t ___UEnd_1;
	// System.Int64 I18N.CJK.GB18030Source/GB18030Map::GStart
	int64_t ___GStart_2;
	// System.Int64 I18N.CJK.GB18030Source/GB18030Map::GEnd
	int64_t ___GEnd_3;
	// System.Boolean I18N.CJK.GB18030Source/GB18030Map::Dummy
	bool ___Dummy_4;

public:
	inline static int32_t get_offset_of_UStart_0() { return static_cast<int32_t>(offsetof(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87, ___UStart_0)); }
	inline int32_t get_UStart_0() const { return ___UStart_0; }
	inline int32_t* get_address_of_UStart_0() { return &___UStart_0; }
	inline void set_UStart_0(int32_t value)
	{
		___UStart_0 = value;
	}

	inline static int32_t get_offset_of_UEnd_1() { return static_cast<int32_t>(offsetof(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87, ___UEnd_1)); }
	inline int32_t get_UEnd_1() const { return ___UEnd_1; }
	inline int32_t* get_address_of_UEnd_1() { return &___UEnd_1; }
	inline void set_UEnd_1(int32_t value)
	{
		___UEnd_1 = value;
	}

	inline static int32_t get_offset_of_GStart_2() { return static_cast<int32_t>(offsetof(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87, ___GStart_2)); }
	inline int64_t get_GStart_2() const { return ___GStart_2; }
	inline int64_t* get_address_of_GStart_2() { return &___GStart_2; }
	inline void set_GStart_2(int64_t value)
	{
		___GStart_2 = value;
	}

	inline static int32_t get_offset_of_GEnd_3() { return static_cast<int32_t>(offsetof(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87, ___GEnd_3)); }
	inline int64_t get_GEnd_3() const { return ___GEnd_3; }
	inline int64_t* get_address_of_GEnd_3() { return &___GEnd_3; }
	inline void set_GEnd_3(int64_t value)
	{
		___GEnd_3 = value;
	}

	inline static int32_t get_offset_of_Dummy_4() { return static_cast<int32_t>(offsetof(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87, ___Dummy_4)); }
	inline bool get_Dummy_4() const { return ___Dummy_4; }
	inline bool* get_address_of_Dummy_4() { return &___Dummy_4; }
	inline void set_Dummy_4(bool value)
	{
		___Dummy_4 = value;
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
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


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// I18N.Common.MonoEncoder
struct MonoEncoder_tCCB62900DB296E12182A8A727168125251B19284  : public Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A
{
public:
	// I18N.Common.MonoEncoding I18N.Common.MonoEncoder::encoding
	MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(MonoEncoder_tCCB62900DB296E12182A8A727168125251B19284, ___encoding_2)); }
	inline MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * get_encoding_2() const { return ___encoding_2; }
	inline MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_2), (void*)value);
	}
};


// I18N.Common.MonoEncoding
struct MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Int32 I18N.Common.MonoEncoding::win_code_page
	int32_t ___win_code_page_62;

public:
	inline static int32_t get_offset_of_win_code_page_62() { return static_cast<int32_t>(offsetof(MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595, ___win_code_page_62)); }
	inline int32_t get_win_code_page_62() const { return ___win_code_page_62; }
	inline int32_t* get_address_of_win_code_page_62() { return &___win_code_page_62; }
	inline void set_win_code_page_62(int32_t value)
	{
		___win_code_page_62 = value;
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


// <PrivateImplementationDetails>/$ArrayType$132
struct U24ArrayTypeU24132_tE2826D38D5FC706EE1FE941245EB6CF17A287789 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24132_tE2826D38D5FC706EE1FE941245EB6CF17A287789__padding[132];
	};

public:
};


// I18N.CJK.DbcsEncoding/DbcsDecoder
struct DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE  : public Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.DbcsEncoding/DbcsDecoder::convert
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___convert_2;

public:
	inline static int32_t get_offset_of_convert_2() { return static_cast<int32_t>(offsetof(DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE, ___convert_2)); }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * get_convert_2() const { return ___convert_2; }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 ** get_address_of_convert_2() { return &___convert_2; }
	inline void set_convert_2(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * value)
	{
		___convert_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_2), (void*)value);
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD307A7EBC17BA5C45E5CA81A0136746BE54DA1EF  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tD307A7EBC17BA5C45E5CA81A0136746BE54DA1EF_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$132 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24132_tE2826D38D5FC706EE1FE941245EB6CF17A287789  ___U24U24fieldU2D0_0;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tD307A7EBC17BA5C45E5CA81A0136746BE54DA1EF_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24132_tE2826D38D5FC706EE1FE941245EB6CF17A287789  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24132_tE2826D38D5FC706EE1FE941245EB6CF17A287789 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24132_tE2826D38D5FC706EE1FE941245EB6CF17A287789  value)
	{
		___U24U24fieldU2D0_0 = value;
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// I18N.CJK.CP51932
struct CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834  : public MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595
{
public:

public:
};


// I18N.CJK.CP51932Decoder
struct CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33  : public DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE
{
public:
	// System.Int32 I18N.CJK.CP51932Decoder::last_count
	int32_t ___last_count_3;
	// System.Int32 I18N.CJK.CP51932Decoder::last_bytes
	int32_t ___last_bytes_4;

public:
	inline static int32_t get_offset_of_last_count_3() { return static_cast<int32_t>(offsetof(CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33, ___last_count_3)); }
	inline int32_t get_last_count_3() const { return ___last_count_3; }
	inline int32_t* get_address_of_last_count_3() { return &___last_count_3; }
	inline void set_last_count_3(int32_t value)
	{
		___last_count_3 = value;
	}

	inline static int32_t get_offset_of_last_bytes_4() { return static_cast<int32_t>(offsetof(CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33, ___last_bytes_4)); }
	inline int32_t get_last_bytes_4() const { return ___last_bytes_4; }
	inline int32_t* get_address_of_last_bytes_4() { return &___last_bytes_4; }
	inline void set_last_bytes_4(int32_t value)
	{
		___last_bytes_4 = value;
	}
};


// I18N.CJK.CP51932Encoder
struct CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C  : public MonoEncoder_tCCB62900DB296E12182A8A727168125251B19284
{
public:

public:
};


// I18N.CJK.CP932
struct CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC  : public MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595
{
public:

public:
};


// I18N.CJK.CP932Decoder
struct CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33  : public DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE
{
public:
	// I18N.CJK.JISConvert I18N.CJK.CP932Decoder::convert
	JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * ___convert_3;
	// System.Int32 I18N.CJK.CP932Decoder::last_byte_count
	int32_t ___last_byte_count_4;
	// System.Int32 I18N.CJK.CP932Decoder::last_byte_chars
	int32_t ___last_byte_chars_5;

public:
	inline static int32_t get_offset_of_convert_3() { return static_cast<int32_t>(offsetof(CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33, ___convert_3)); }
	inline JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * get_convert_3() const { return ___convert_3; }
	inline JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 ** get_address_of_convert_3() { return &___convert_3; }
	inline void set_convert_3(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * value)
	{
		___convert_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_3), (void*)value);
	}

	inline static int32_t get_offset_of_last_byte_count_4() { return static_cast<int32_t>(offsetof(CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33, ___last_byte_count_4)); }
	inline int32_t get_last_byte_count_4() const { return ___last_byte_count_4; }
	inline int32_t* get_address_of_last_byte_count_4() { return &___last_byte_count_4; }
	inline void set_last_byte_count_4(int32_t value)
	{
		___last_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_last_byte_chars_5() { return static_cast<int32_t>(offsetof(CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33, ___last_byte_chars_5)); }
	inline int32_t get_last_byte_chars_5() const { return ___last_byte_chars_5; }
	inline int32_t* get_address_of_last_byte_chars_5() { return &___last_byte_chars_5; }
	inline void set_last_byte_chars_5(int32_t value)
	{
		___last_byte_chars_5 = value;
	}
};


// I18N.CJK.CP936Decoder
struct CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A  : public DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE
{
public:
	// System.Int32 I18N.CJK.CP936Decoder::last_byte_count
	int32_t ___last_byte_count_3;
	// System.Int32 I18N.CJK.CP936Decoder::last_byte_bytes
	int32_t ___last_byte_bytes_4;

public:
	inline static int32_t get_offset_of_last_byte_count_3() { return static_cast<int32_t>(offsetof(CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A, ___last_byte_count_3)); }
	inline int32_t get_last_byte_count_3() const { return ___last_byte_count_3; }
	inline int32_t* get_address_of_last_byte_count_3() { return &___last_byte_count_3; }
	inline void set_last_byte_count_3(int32_t value)
	{
		___last_byte_count_3 = value;
	}

	inline static int32_t get_offset_of_last_byte_bytes_4() { return static_cast<int32_t>(offsetof(CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A, ___last_byte_bytes_4)); }
	inline int32_t get_last_byte_bytes_4() const { return ___last_byte_bytes_4; }
	inline int32_t* get_address_of_last_byte_bytes_4() { return &___last_byte_bytes_4; }
	inline void set_last_byte_bytes_4(int32_t value)
	{
		___last_byte_bytes_4 = value;
	}
};


// I18N.CJK.DbcsEncoding
struct DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A  : public MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595
{
public:

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

// I18N.CJK.GB18030Decoder
struct GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64  : public DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE
{
public:

public:
};

struct GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_StaticFields
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.GB18030Decoder::gb2312
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___gb2312_3;

public:
	inline static int32_t get_offset_of_gb2312_3() { return static_cast<int32_t>(offsetof(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_StaticFields, ___gb2312_3)); }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * get_gb2312_3() const { return ___gb2312_3; }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 ** get_address_of_gb2312_3() { return &___gb2312_3; }
	inline void set_gb2312_3(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * value)
	{
		___gb2312_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gb2312_3), (void*)value);
	}
};


// I18N.CJK.GB18030Encoder
struct GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452  : public MonoEncoder_tCCB62900DB296E12182A8A727168125251B19284
{
public:
	// System.Char I18N.CJK.GB18030Encoder::incomplete_byte_count
	Il2CppChar ___incomplete_byte_count_4;
	// System.Char I18N.CJK.GB18030Encoder::incomplete_bytes
	Il2CppChar ___incomplete_bytes_5;

public:
	inline static int32_t get_offset_of_incomplete_byte_count_4() { return static_cast<int32_t>(offsetof(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452, ___incomplete_byte_count_4)); }
	inline Il2CppChar get_incomplete_byte_count_4() const { return ___incomplete_byte_count_4; }
	inline Il2CppChar* get_address_of_incomplete_byte_count_4() { return &___incomplete_byte_count_4; }
	inline void set_incomplete_byte_count_4(Il2CppChar value)
	{
		___incomplete_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_incomplete_bytes_5() { return static_cast<int32_t>(offsetof(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452, ___incomplete_bytes_5)); }
	inline Il2CppChar get_incomplete_bytes_5() const { return ___incomplete_bytes_5; }
	inline Il2CppChar* get_address_of_incomplete_bytes_5() { return &___incomplete_bytes_5; }
	inline void set_incomplete_bytes_5(Il2CppChar value)
	{
		___incomplete_bytes_5 = value;
	}
};

struct GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_StaticFields
{
public:
	// I18N.CJK.DbcsConvert I18N.CJK.GB18030Encoder::gb2312
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___gb2312_3;

public:
	inline static int32_t get_offset_of_gb2312_3() { return static_cast<int32_t>(offsetof(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_StaticFields, ___gb2312_3)); }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * get_gb2312_3() const { return ___gb2312_3; }
	inline DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 ** get_address_of_gb2312_3() { return &___gb2312_3; }
	inline void set_gb2312_3(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * value)
	{
		___gb2312_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gb2312_3), (void*)value);
	}
};


// I18N.CJK.GB18030Encoding
struct GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD  : public MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595
{
public:

public:
};


// I18N.CJK.ISO2022JPEncoding
struct ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04  : public MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595
{
public:
	// System.Boolean I18N.CJK.ISO2022JPEncoding::allow_1byte_kana
	bool ___allow_1byte_kana_63;
	// System.Boolean I18N.CJK.ISO2022JPEncoding::allow_shift_io
	bool ___allow_shift_io_64;

public:
	inline static int32_t get_offset_of_allow_1byte_kana_63() { return static_cast<int32_t>(offsetof(ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04, ___allow_1byte_kana_63)); }
	inline bool get_allow_1byte_kana_63() const { return ___allow_1byte_kana_63; }
	inline bool* get_address_of_allow_1byte_kana_63() { return &___allow_1byte_kana_63; }
	inline void set_allow_1byte_kana_63(bool value)
	{
		___allow_1byte_kana_63 = value;
	}

	inline static int32_t get_offset_of_allow_shift_io_64() { return static_cast<int32_t>(offsetof(ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04, ___allow_shift_io_64)); }
	inline bool get_allow_shift_io_64() const { return ___allow_shift_io_64; }
	inline bool* get_address_of_allow_shift_io_64() { return &___allow_shift_io_64; }
	inline void set_allow_shift_io_64(bool value)
	{
		___allow_shift_io_64 = value;
	}
};


// I18N.CJK.ISO2022JPMode
struct ISO2022JPMode_t03799C392D5D74D0E997E68925F8E37FB072F3A3 
{
public:
	// System.Int32 I18N.CJK.ISO2022JPMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ISO2022JPMode_t03799C392D5D74D0E997E68925F8E37FB072F3A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// I18N.CJK.CP950/CP950Decoder
struct CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF  : public DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE
{
public:
	// System.Int32 I18N.CJK.CP950/CP950Decoder::last_byte_count
	int32_t ___last_byte_count_3;
	// System.Int32 I18N.CJK.CP950/CP950Decoder::last_byte_conv
	int32_t ___last_byte_conv_4;

public:
	inline static int32_t get_offset_of_last_byte_count_3() { return static_cast<int32_t>(offsetof(CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF, ___last_byte_count_3)); }
	inline int32_t get_last_byte_count_3() const { return ___last_byte_count_3; }
	inline int32_t* get_address_of_last_byte_count_3() { return &___last_byte_count_3; }
	inline void set_last_byte_count_3(int32_t value)
	{
		___last_byte_count_3 = value;
	}

	inline static int32_t get_offset_of_last_byte_conv_4() { return static_cast<int32_t>(offsetof(CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF, ___last_byte_conv_4)); }
	inline int32_t get_last_byte_conv_4() const { return ___last_byte_conv_4; }
	inline int32_t* get_address_of_last_byte_conv_4() { return &___last_byte_conv_4; }
	inline void set_last_byte_conv_4(int32_t value)
	{
		___last_byte_conv_4 = value;
	}
};


// I18N.CJK.KoreanEncoding/KoreanDecoder
struct KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985  : public DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE
{
public:
	// System.Boolean I18N.CJK.KoreanEncoding/KoreanDecoder::useUHC
	bool ___useUHC_3;
	// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::last_byte_count
	int32_t ___last_byte_count_4;
	// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::last_byte_conv
	int32_t ___last_byte_conv_5;

public:
	inline static int32_t get_offset_of_useUHC_3() { return static_cast<int32_t>(offsetof(KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985, ___useUHC_3)); }
	inline bool get_useUHC_3() const { return ___useUHC_3; }
	inline bool* get_address_of_useUHC_3() { return &___useUHC_3; }
	inline void set_useUHC_3(bool value)
	{
		___useUHC_3 = value;
	}

	inline static int32_t get_offset_of_last_byte_count_4() { return static_cast<int32_t>(offsetof(KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985, ___last_byte_count_4)); }
	inline int32_t get_last_byte_count_4() const { return ___last_byte_count_4; }
	inline int32_t* get_address_of_last_byte_count_4() { return &___last_byte_count_4; }
	inline void set_last_byte_count_4(int32_t value)
	{
		___last_byte_count_4 = value;
	}

	inline static int32_t get_offset_of_last_byte_conv_5() { return static_cast<int32_t>(offsetof(KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985, ___last_byte_conv_5)); }
	inline int32_t get_last_byte_conv_5() const { return ___last_byte_conv_5; }
	inline int32_t* get_address_of_last_byte_conv_5() { return &___last_byte_conv_5; }
	inline void set_last_byte_conv_5(int32_t value)
	{
		___last_byte_conv_5 = value;
	}
};


// I18N.CJK.CP50220
struct CP50220_t8E4E404A5B71A494C71269D7954F0B9D4F54491E  : public ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04
{
public:

public:
};


// I18N.CJK.CP50221
struct CP50221_t01BD1329443F21B5742D75EB3E5E132FA18C5E09  : public ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04
{
public:

public:
};


// I18N.CJK.CP50222
struct CP50222_t2252A6D45430B3DACE656E8D374835B25BA5C3AA  : public ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04
{
public:

public:
};


// I18N.CJK.CP54936
struct CP54936_tDF48D9D5E3C13E5AA64C12E52F876E14E41E2FBF  : public GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD
{
public:

public:
};


// I18N.CJK.CP936
struct CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2  : public DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A
{
public:

public:
};


// I18N.CJK.CP950
struct CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898  : public DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A
{
public:

public:
};


// I18N.CJK.ENCeuc_jp
struct ENCeuc_jp_t82C28EC09DD3250FC2CE7700A1CA7417E5F09183  : public CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834
{
public:

public:
};


// I18N.CJK.ENCgb18030
struct ENCgb18030_t180F08CF4FA7800256E1EF5822C5DAE5D759295A  : public GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD
{
public:

public:
};


// I18N.CJK.ENCshift_jis
struct ENCshift_jis_tE119EBC5618514E6305CBE452D60DE43B316453C  : public CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC
{
public:

public:
};


// I18N.CJK.ISO2022JPDecoder
struct ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D  : public Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370
{
public:
	// System.Boolean I18N.CJK.ISO2022JPDecoder::allow_shift_io
	bool ___allow_shift_io_3;
	// I18N.CJK.ISO2022JPMode I18N.CJK.ISO2022JPDecoder::m
	int32_t ___m_4;
	// System.Boolean I18N.CJK.ISO2022JPDecoder::shifted_in_conv
	bool ___shifted_in_conv_5;
	// System.Boolean I18N.CJK.ISO2022JPDecoder::shifted_in_count
	bool ___shifted_in_count_6;

public:
	inline static int32_t get_offset_of_allow_shift_io_3() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D, ___allow_shift_io_3)); }
	inline bool get_allow_shift_io_3() const { return ___allow_shift_io_3; }
	inline bool* get_address_of_allow_shift_io_3() { return &___allow_shift_io_3; }
	inline void set_allow_shift_io_3(bool value)
	{
		___allow_shift_io_3 = value;
	}

	inline static int32_t get_offset_of_m_4() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D, ___m_4)); }
	inline int32_t get_m_4() const { return ___m_4; }
	inline int32_t* get_address_of_m_4() { return &___m_4; }
	inline void set_m_4(int32_t value)
	{
		___m_4 = value;
	}

	inline static int32_t get_offset_of_shifted_in_conv_5() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D, ___shifted_in_conv_5)); }
	inline bool get_shifted_in_conv_5() const { return ___shifted_in_conv_5; }
	inline bool* get_address_of_shifted_in_conv_5() { return &___shifted_in_conv_5; }
	inline void set_shifted_in_conv_5(bool value)
	{
		___shifted_in_conv_5 = value;
	}

	inline static int32_t get_offset_of_shifted_in_count_6() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D, ___shifted_in_count_6)); }
	inline bool get_shifted_in_count_6() const { return ___shifted_in_count_6; }
	inline bool* get_address_of_shifted_in_count_6() { return &___shifted_in_count_6; }
	inline void set_shifted_in_count_6(bool value)
	{
		___shifted_in_count_6 = value;
	}
};

struct ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_StaticFields
{
public:
	// I18N.CJK.JISConvert I18N.CJK.ISO2022JPDecoder::convert
	JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * ___convert_2;

public:
	inline static int32_t get_offset_of_convert_2() { return static_cast<int32_t>(offsetof(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_StaticFields, ___convert_2)); }
	inline JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * get_convert_2() const { return ___convert_2; }
	inline JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 ** get_address_of_convert_2() { return &___convert_2; }
	inline void set_convert_2(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * value)
	{
		___convert_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_2), (void*)value);
	}
};


// I18N.CJK.ISO2022JPEncoder
struct ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED  : public MonoEncoder_tCCB62900DB296E12182A8A727168125251B19284
{
public:
	// System.Boolean I18N.CJK.ISO2022JPEncoder::allow_1byte_kana
	bool ___allow_1byte_kana_4;
	// System.Boolean I18N.CJK.ISO2022JPEncoder::allow_shift_io
	bool ___allow_shift_io_5;
	// I18N.CJK.ISO2022JPMode I18N.CJK.ISO2022JPEncoder::m
	int32_t ___m_6;
	// System.Boolean I18N.CJK.ISO2022JPEncoder::shifted_in_count
	bool ___shifted_in_count_7;
	// System.Boolean I18N.CJK.ISO2022JPEncoder::shifted_in_conv
	bool ___shifted_in_conv_8;

public:
	inline static int32_t get_offset_of_allow_1byte_kana_4() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED, ___allow_1byte_kana_4)); }
	inline bool get_allow_1byte_kana_4() const { return ___allow_1byte_kana_4; }
	inline bool* get_address_of_allow_1byte_kana_4() { return &___allow_1byte_kana_4; }
	inline void set_allow_1byte_kana_4(bool value)
	{
		___allow_1byte_kana_4 = value;
	}

	inline static int32_t get_offset_of_allow_shift_io_5() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED, ___allow_shift_io_5)); }
	inline bool get_allow_shift_io_5() const { return ___allow_shift_io_5; }
	inline bool* get_address_of_allow_shift_io_5() { return &___allow_shift_io_5; }
	inline void set_allow_shift_io_5(bool value)
	{
		___allow_shift_io_5 = value;
	}

	inline static int32_t get_offset_of_m_6() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED, ___m_6)); }
	inline int32_t get_m_6() const { return ___m_6; }
	inline int32_t* get_address_of_m_6() { return &___m_6; }
	inline void set_m_6(int32_t value)
	{
		___m_6 = value;
	}

	inline static int32_t get_offset_of_shifted_in_count_7() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED, ___shifted_in_count_7)); }
	inline bool get_shifted_in_count_7() const { return ___shifted_in_count_7; }
	inline bool* get_address_of_shifted_in_count_7() { return &___shifted_in_count_7; }
	inline void set_shifted_in_count_7(bool value)
	{
		___shifted_in_count_7 = value;
	}

	inline static int32_t get_offset_of_shifted_in_conv_8() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED, ___shifted_in_conv_8)); }
	inline bool get_shifted_in_conv_8() const { return ___shifted_in_conv_8; }
	inline bool* get_address_of_shifted_in_conv_8() { return &___shifted_in_conv_8; }
	inline void set_shifted_in_conv_8(bool value)
	{
		___shifted_in_conv_8 = value;
	}
};

struct ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields
{
public:
	// I18N.CJK.JISConvert I18N.CJK.ISO2022JPEncoder::convert
	JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * ___convert_3;
	// System.Char[] I18N.CJK.ISO2022JPEncoder::full_width_map
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___full_width_map_9;

public:
	inline static int32_t get_offset_of_convert_3() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields, ___convert_3)); }
	inline JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * get_convert_3() const { return ___convert_3; }
	inline JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 ** get_address_of_convert_3() { return &___convert_3; }
	inline void set_convert_3(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * value)
	{
		___convert_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___convert_3), (void*)value);
	}

	inline static int32_t get_offset_of_full_width_map_9() { return static_cast<int32_t>(offsetof(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields, ___full_width_map_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_full_width_map_9() const { return ___full_width_map_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_full_width_map_9() { return &___full_width_map_9; }
	inline void set_full_width_map_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___full_width_map_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___full_width_map_9), (void*)value);
	}
};


// I18N.CJK.KoreanEncoding
struct KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50  : public DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A
{
public:
	// System.Boolean I18N.CJK.KoreanEncoding::useUHC
	bool ___useUHC_63;

public:
	inline static int32_t get_offset_of_useUHC_63() { return static_cast<int32_t>(offsetof(KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50, ___useUHC_63)); }
	inline bool get_useUHC_63() const { return ___useUHC_63; }
	inline bool* get_address_of_useUHC_63() { return &___useUHC_63; }
	inline void set_useUHC_63(bool value)
	{
		___useUHC_63 = value;
	}
};


// System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_3;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_4;
	// System.String System.Reflection.Module::name
	String_t* ___name_5;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_6;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_7;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_8;

public:
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___assembly_3)); }
	inline Assembly_t * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_3), (void*)value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fqname_4), (void*)value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scopename_6), (void*)value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeName_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t8E0AA7E71F2D6695C61A52277E6CF6E49230F2C3 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterTypeNameIgnoreCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// I18N.CJK.CP51949
struct CP51949_t41CC407C92E3A4C117B8C6B9DE004DB8C47F8985  : public KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50
{
public:

public:
};


// I18N.CJK.CP949
struct CP949_t95FD5E5FF8F158DCD75A14268631F4C0A8BFC4C2  : public KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50
{
public:

public:
};


// I18N.CJK.ENCbig5
struct ENCbig5_tB34608E96D846F17EE93A35DE32EDA09EC7EAC31  : public CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898
{
public:

public:
};


// I18N.CJK.ENCgb2312
struct ENCgb2312_tEAF995FB21436CA68951B9D06A7177899971EBC1  : public CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2
{
public:

public:
};


// I18N.CJK.ENCiso_2022_jp
struct ENCiso_2022_jp_tCEC624FA06E438B99588343B3FA56A54095A6375  : public CP50220_t8E4E404A5B71A494C71269D7954F0B9D4F54491E
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// I18N.CJK.ENCeuc_kr
struct ENCeuc_kr_tB779B629D3248F1DFD7A2E5995985C39B8D97498  : public CP51949_t41CC407C92E3A4C117B8C6B9DE004DB8C47F8985
{
public:

public:
};


// I18N.CJK.ENCuhc
struct ENCuhc_tCF31710652D905EDF1677E029390C80700565395  : public CP949_t95FD5E5FF8F158DCD75A14268631F4C0A8BFC4C2
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
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
// I18N.CJK.GB18030Source/GB18030Map[]
struct GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * m_Items[1];

public:
	inline GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.ISO2022JPEncoding::.ctor(System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoding__ctor_m97DD8E746F58AA0C73695C1272CFC4C5CA2D586A (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, int32_t ___codePage0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncoding::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoEncoding__ctor_m4137C39A886F1FB7F6783AECC056F3D42742A9D4 (MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method);
// System.Void I18N.CJK.CP51932Encoder::.ctor(I18N.Common.MonoEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932Encoder__ctor_m50A6E76B97274A3F22A5F9E5E277F3DE2F784BA6 (CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C * __this, MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * ___encoding0, const RuntimeMethod* method);
// System.Void I18N.CJK.CP51932Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932Decoder__ctor_mBD3325C7B9A3320D029C2B20C87511F81392C88E (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * __this, const RuntimeMethod* method);
// System.String I18N.Common.Strings::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder__ctor_mBC4EBD2874BECCC0EBE1D8A5AB28B7200F031CC6 (DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE * __this, DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___convert0, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C (DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// I18N.CJK.JISConvert I18N.CJK.JISConvert::get_Convert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6 (const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D (DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method);
// System.Exception I18N.CJK.CP51932Decoder::Insufficient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25 (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncoder::.ctor(I18N.Common.MonoEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoEncoder__ctor_m423C2CB5857B6488AB19586D9E66BF2646CC3E78 (MonoEncoder_tCCB62900DB296E12182A8A727168125251B19284 * __this, MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * ___encoding0, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncoder::HandleFallback(System.Char*,System.Int32&,System.Int32&,System.Byte*,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoEncoder_HandleFallback_mC50D10FC0AF4745C0FDC3066B7B35F4266D9B68F (MonoEncoder_tCCB62900DB296E12182A8A727168125251B19284 * __this, Il2CppChar* ___chars0, int32_t* ___charIndex1, int32_t* ___charCount2, uint8_t* ___bytes3, int32_t* ___byteIndex4, int32_t* ___byteCount5, const RuntimeMethod* method);
// System.Void I18N.CJK.KoreanEncoding::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreanEncoding__ctor_mE63AEAAB35251DF80F91830A567CFD30D6436B78 (KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50 * __this, int32_t ___codepage0, bool ___useUHC1, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoding__ctor_mB8C46AEF3E3684B1D87B9F40EBB2ABF2BBC0BFCD (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncoding::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoEncoding__ctor_mC1AB8356DFFE5D806C91F10F18D6CA4BCB5FCB8A (MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * __this, int32_t ___codePage0, const RuntimeMethod* method);
// System.Void I18N.Common.MonoEncoding::HandleFallback(System.Text.EncoderFallbackBuffer&,System.Char*,System.Int32&,System.Int32&,System.Byte*,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoEncoding_HandleFallback_m27AF07739597C9E7575361D30B67F4D4E89D31E6 (MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * __this, EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** ___buffer0, Il2CppChar* ___chars1, int32_t* ___charIndex2, int32_t* ___charCount3, uint8_t* ___bytes4, int32_t* ___byteIndex5, int32_t* ___byteCount6, const RuntimeMethod* method);
// System.Void I18N.CJK.CP932Decoder::.ctor(I18N.CJK.JISConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP932Decoder__ctor_m7A120524E505C478E996F19D2D040C0F188C1E0D (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * __this, JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * ___convert0, const RuntimeMethod* method);
// System.Int32 I18N.CJK.CP932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetCharCount_m016040EEC34CCC34F3EFAE8B54675809482EA2F5 (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method);
// System.Int32 I18N.CJK.CP932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetChars_m717D87842627744A6D6BE4211780E11670C75621 (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsEncoding__ctor_mF9A83F714BDE6ADFD266E6E4F7F46815AB835D76 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, int32_t ___codePage0, const RuntimeMethod* method);
// System.Void I18N.CJK.CP936Decoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP936Decoder__ctor_mD242C149CB22F1EE75B1C0568DA76E3F649C5398 (CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A * __this, DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___convert0, const RuntimeMethod* method);
// System.Int32 I18N.CJK.CP936Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetCharCount_mE6BF04D07B36A75537B01BABE389B0E8FEDB9C59 (CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method);
// System.Int32 I18N.CJK.CP936Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetChars_m10F23375E693E66298B4E23D64FC36F57449FEF7 (CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method);
// System.Void I18N.CJK.CP950/CP950Decoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP950Decoder__ctor_m36D589BFA1334F9EDDAE161C7ECADB9AA07A74FE (CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF * __this, DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___convert0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void I18N.CJK.CodeTable::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeTable__ctor_m680F5F405451137DF83FD281CB4AFE3309A67C92 (CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Byte[] I18N.CJK.CodeTable::GetSection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* CodeTable_GetSection_m494D580041679EA9E6AB8178659DBFCA6B1D2E48 (CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * __this, int32_t ___num0, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsConvert::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsConvert__ctor_m33F863C1BD5BD29740F9C71BE2F1EB7EB9062EB6 (DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * __this, String_t* ___fileName0, const RuntimeMethod* method);
// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsEncoding__ctor_m32B4B472A9ACD2670CA904C5FE94E68E99BEF61C (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void I18N.CJK.CP950::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP950__ctor_m85E054D527E1A86AAEF3DC944E037ACB60302880 (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP51932::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932__ctor_m10A7B6101DF46CCDF7A9CE8A4CAA2788249ECAF9 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP51949::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51949__ctor_m3E5966DE8C41657BA01313B107D5F49AD0DC6DB1 (CP51949_t41CC407C92E3A4C117B8C6B9DE004DB8C47F8985 * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP936::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP936__ctor_m963F589B4F6242936CAD31E5BB2556E1815F6121 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP50220::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP50220__ctor_m1A8FD18AF5E9AA9CFBF9993A0092646013E5B2AF (CP50220_t8E4E404A5B71A494C71269D7954F0B9D4F54491E * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP932::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP932__ctor_m73C25E105E86736A0A3A878CC9F945F4D70DAEBE (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method);
// System.Void I18N.CJK.CP949::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP949__ctor_m8CA9918E15557EB30901234899DDD8E3DB7E0E10 (CP949_t95FD5E5FF8F158DCD75A14268631F4C0A8BFC4C2 * __this, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::FromGBX(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromGBX_mA8AE20EB1573F242DDFA854A5742D0838BE9E163 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, const RuntimeMethod* method);
// System.Boolean System.Char::IsSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::FromUCS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromUCS_m1BAEB0481B70F612777C294088C5DD96CC7232FD (int32_t ___cp0, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::FromUCSSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromUCSSurrogate_m02AB46DF447796C0391FD2811E192F1B56844D03 (int32_t ___cp0, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Source::Unlinear(System.Byte*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source_Unlinear_m172B574A53E492539FBEFB5C697E670D7F281C51 (uint8_t* ___bytes0, int64_t ___gbx1, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Encoder::.ctor(I18N.Common.MonoEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoder__ctor_m6D7F339BCC3712401B668E4BDAD440558C80A09A (GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 * __this, MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * ___owner0, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Decoder__ctor_m0DF91F60C0492711E410921A9B3AB1E7C50B5949 (GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 * __this, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::FromGBXRaw(System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6 (uint8_t ___b10, uint8_t ___b21, uint8_t ___b32, uint8_t ___b43, bool ___supp4, const RuntimeMethod* method);
// System.Void I18N.CJK.GB18030Source/GB18030Map::.ctor(System.Int32,System.Int32,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66 (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * __this, int32_t ___ustart0, int32_t ___uend1, int64_t ___gstart2, int64_t ___gend3, bool ___dummy4, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 I18N.CJK.GB18030Source::ToUcsRaw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Source_ToUcsRaw_m7BDB7C98E6B6521DF2BF7077B1DD1BDD04C0EA07 (int32_t ___idx0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int64 I18N.CJK.GB18030Source::ToGbxRaw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_ToGbxRaw_mFEC849A38633958F180AF6F55F15999F07DA4275 (int32_t ___idx0, const RuntimeMethod* method);
// System.Void System.Text.Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m2EA154371203FAAE1CD0477C828E0B39B2091DF3 (Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * __this, const RuntimeMethod* method);
// System.Int32 I18N.CJK.ISO2022JPDecoder::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPDecoder_ToChar_m6593F2F2C57A00A9770E6C9E15750ECF32ED4CBC (ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void I18N.CJK.ISO2022JPEncoder::SwitchMode(System.Byte*,System.Int32&,System.Int32&,I18N.CJK.ISO2022JPMode&,I18N.CJK.ISO2022JPMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder_SwitchMode_m3E0844D3B76B3F8DBFC77ADACA2B17C2715F962C (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * __this, uint8_t* ___bytes0, int32_t* ___byteIndex1, int32_t* ___byteCount2, int32_t* ___cur3, int32_t ___next4, const RuntimeMethod* method);
// System.Void I18N.CJK.ISO2022JPEncoder::.ctor(I18N.Common.MonoEncoding,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder__ctor_mFB28FD300F2D06A6051431C0C20BBA8D8A357DFD (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * __this, MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * ___owner0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const RuntimeMethod* method);
// System.Void I18N.CJK.ISO2022JPDecoder::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPDecoder__ctor_mBF180DD65B049A90B54EF2B9AFCAAEF393AB2733 (ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * __this, bool ___allow1ByteKana0, bool ___allowShiftIO1, const RuntimeMethod* method);
// System.Void I18N.CJK.CodeTable::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeTable_Dispose_m19140F4AE97B7CEE0CC1F837AA426252F05D9F8A (CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void I18N.CJK.JISConvert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JISConvert__ctor_mDC4D65170DAAB6B280DE8D1350CAFBE58E5EE690 (JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void I18N.CJK.KoreanEncoding/KoreanDecoder::.ctor(I18N.CJK.DbcsConvert,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreanDecoder__ctor_m01D56D817E67F42CA0B7024DC0FA2F8562963D8B (KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 * __this, DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___convert0, bool ___useUHC1, const RuntimeMethod* method);
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetCharCount_m8528F6B5BA28861AD896880AD577E003624A92A7 (CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method);
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetChars_m807387306A9CEF12928BBF0814B86BCD4C9B8D74 (CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method);
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetCharCount_m8449A9E1C1D3A322EE7911925BB53DDC31A871E1 (KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method);
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetChars_mD2C76BB4E554BA55305961888ED05DC0DDD111F8 (KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <PrivateImplementationDetails>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrivateImplementationDetailsU3E__ctor_m2B5B31570EF0DEAB530D3E82CBB6370D865485FE (U3CPrivateImplementationDetailsU3E_tD307A7EBC17BA5C45E5CA81A0136746BE54DA1EF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP50220::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP50220__ctor_m1A8FD18AF5E9AA9CFBF9993A0092646013E5B2AF (CP50220_t8E4E404A5B71A494C71269D7954F0B9D4F54491E * __this, const RuntimeMethod* method)
{
	{
		ISO2022JPEncoding__ctor_m97DD8E746F58AA0C73695C1272CFC4C5CA2D586A(__this, ((int32_t)50220), (bool)0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP50220::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP50220_get_EncodingName_m4BB1ED780DF103D642812A5DC6CE82C08D77969A (CP50220_t8E4E404A5B71A494C71269D7954F0B9D4F54491E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2D3FF2FE923BEF204F5539A8AB3FD5EEA81ADFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA2D3FF2FE923BEF204F5539A8AB3FD5EEA81ADFF;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP50221::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP50221__ctor_m04F3DAA919931C94A33E88824C130CFB4987BA1C (CP50221_t01BD1329443F21B5742D75EB3E5E132FA18C5E09 * __this, const RuntimeMethod* method)
{
	{
		ISO2022JPEncoding__ctor_m97DD8E746F58AA0C73695C1272CFC4C5CA2D586A(__this, ((int32_t)50221), (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP50221::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP50221_get_EncodingName_mF9E1279B7B4BA1B9C1789257217EFCA204C2FC5C (CP50221_t01BD1329443F21B5742D75EB3E5E132FA18C5E09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB68F8F2A0E7A2F44AAEAFA9A4A9E57F16C4D7DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralBB68F8F2A0E7A2F44AAEAFA9A4A9E57F16C4D7DE;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP50222::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP50222__ctor_mD47F794AE217F8EBFAF85660EB8E4374AEBF81C5 (CP50222_t2252A6D45430B3DACE656E8D374835B25BA5C3AA * __this, const RuntimeMethod* method)
{
	{
		ISO2022JPEncoding__ctor_m97DD8E746F58AA0C73695C1272CFC4C5CA2D586A(__this, ((int32_t)50222), (bool)1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP50222::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP50222_get_EncodingName_m5452922C6D00023C4FC103CE7702DB72291770A7 (CP50222_t2252A6D45430B3DACE656E8D374835B25BA5C3AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3376C44466E919A70A02AA3ACB7791D292C161BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral3376C44466E919A70A02AA3ACB7791D292C161BE;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP51932::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932__ctor_m10A7B6101DF46CCDF7A9CE8A4CAA2788249ECAF9 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	{
		MonoEncoding__ctor_m4137C39A886F1FB7F6783AECC056F3D42742A9D4(__this, ((int32_t)51932), ((int32_t)932), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP51932::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetByteCount_mDA634C69637CDBAD219C87C0EC5872F1D77E5079 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C * L_0 = (CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C *)il2cpp_codegen_object_new(CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C_il2cpp_TypeInfo_var);
		CP51932Encoder__ctor_m50A6E76B97274A3F22A5F9E5E277F3DE2F784BA6(L_0, __this, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker4< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, bool >::Invoke(5 /* System.Int32 I18N.Common.MonoEncoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, (bool)1);
		return L_4;
	}
}
// System.Int32 I18N.CJK.CP51932::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetByteCountImpl_m25264A615E0E5C93250092D6853DF12127255519 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C * L_0 = (CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C *)il2cpp_codegen_object_new(CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C_il2cpp_TypeInfo_var);
		CP51932Encoder__ctor_m50A6E76B97274A3F22A5F9E5E277F3DE2F784BA6(L_0, __this, /*hidden argument*/NULL);
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtFuncInvoker3< int32_t, Il2CppChar*, int32_t, bool >::Invoke(9 /* System.Int32 I18N.CJK.CP51932Encoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean) */, L_0, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (bool)1);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP51932::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetBytesImpl_m772E649F9B7D5157CC178B5E1B03A6C2289C9AFE (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C * L_0 = (CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C *)il2cpp_codegen_object_new(CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C_il2cpp_TypeInfo_var);
		CP51932Encoder__ctor_m50A6E76B97274A3F22A5F9E5E277F3DE2F784BA6(L_0, __this, /*hidden argument*/NULL);
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___charCount1;
		uint8_t* L_3 = ___bytes2;
		int32_t L_4 = ___byteCount3;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtFuncInvoker5< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t, bool >::Invoke(10 /* System.Int32 I18N.CJK.CP51932Encoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean) */, L_0, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)L_3, L_4, (bool)1);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP51932::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetCharCount_mF642C95F4E9598F5FF0DC3847FD564DD735D3BCF (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * L_0 = (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 *)il2cpp_codegen_object_new(CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33_il2cpp_TypeInfo_var);
		CP51932Decoder__ctor_mBD3325C7B9A3320D029C2B20C87511F81392C88E(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker4< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(6 /* System.Int32 I18N.CJK.CP51932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, (bool)1);
		return L_4;
	}
}
// System.Int32 I18N.CJK.CP51932::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetChars_m49FC04FEC718538F6DCD15F916895FBB5309F19B (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * L_0 = (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 *)il2cpp_codegen_object_new(CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33_il2cpp_TypeInfo_var);
		CP51932Decoder__ctor_mBD3325C7B9A3320D029C2B20C87511F81392C88E(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIndex1;
		int32_t L_3 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker6< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, bool >::Invoke(9 /* System.Int32 I18N.CJK.CP51932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, L_4, L_5, (bool)1);
		return L_6;
	}
}
// System.Int32 I18N.CJK.CP51932::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetMaxByteCount_mAE3DB7D8DEA49A095AFBEC980F076098F477003E (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, int32_t ___charCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___charCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1;
		L_1 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AA99C92BB9065939AEAB82DCEAAB6CEE49FA2FB)), L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932_GetMaxByteCount_mAE3DB7D8DEA49A095AFBEC980F076098F477003E_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_3 = ___charCount0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)3));
	}
}
// System.Int32 I18N.CJK.CP51932::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932_GetMaxCharCount_m05AD971B89E3CEFA84D89F358F393509071FD508 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, int32_t ___byteCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___byteCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1;
		L_1 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C)), L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932_GetMaxCharCount_m05AD971B89E3CEFA84D89F358F393509071FD508_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_3 = ___byteCount0;
		return L_3;
	}
}
// System.Text.Encoder I18N.CJK.CP51932::GetEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * CP51932_GetEncoder_m8CC6618921F956965A4996482A2E84E7352DD218 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C * L_0 = (CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C *)il2cpp_codegen_object_new(CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C_il2cpp_TypeInfo_var);
		CP51932Encoder__ctor_m50A6E76B97274A3F22A5F9E5E277F3DE2F784BA6(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.Decoder I18N.CJK.CP51932::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * CP51932_GetDecoder_m6157A6BBE3EE3CB57C419C62DC09E4D528FDA618 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * L_0 = (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 *)il2cpp_codegen_object_new(CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33_il2cpp_TypeInfo_var);
		CP51932Decoder__ctor_mBD3325C7B9A3320D029C2B20C87511F81392C88E(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String I18N.CJK.CP51932::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51932_get_BodyName_m1EBC28C3967C0A358AA37BA1EC05D7E0D500216D (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED;
	}
}
// System.String I18N.CJK.CP51932::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51932_get_EncodingName_m6015AFDB7C4BC2CC84834DF2791EB2DCC22018A5 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46D49ED9792AFC72CCEBD7E6D237722C37410FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral46D49ED9792AFC72CCEBD7E6D237722C37410FBF;
	}
}
// System.String I18N.CJK.CP51932::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51932_get_HeaderName_m83712221A4956ACFB0BD8998C0092E4DDAC4A9CB (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED;
	}
}
// System.Boolean I18N.CJK.CP51932::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP51932_get_IsBrowserDisplay_mCFE175A20AC8458A9699CACE4B41FE833014B1C7 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP51932::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP51932_get_IsBrowserSave_m78D7D5CFA3FABAEFEB8ECE5C589A3FDAE48FCC27 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP51932::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP51932_get_IsMailNewsDisplay_mC4E0D1E55C3F955D4750E50B8DF82BAADC4405FB (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP51932::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP51932_get_IsMailNewsSave_m582A07F6AF99C38503FE671BC8C0F072D32E7527 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.String I18N.CJK.CP51932::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51932_get_WebName_mE5F2A46D0F5FBAE80715DBDA302080C28E31CAE7 (CP51932_t0738E2158EB9C4245A1C6F9652988582A152E834 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral247A870FC548A3D4C43DA0A9D154098CEE7D7CED;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP51932Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932Decoder__ctor_mBD3325C7B9A3320D029C2B20C87511F81392C88E (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * __this, const RuntimeMethod* method)
{
	{
		DbcsDecoder__ctor_mBC4EBD2874BECCC0EBE1D8A5AB28B7200F031CC6(__this, (DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP51932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Decoder_GetCharCount_m7537564B639A9895E90754BC8D938151C673A692 (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = VirtFuncInvoker4< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, bool >::Invoke(6 /* System.Int32 I18N.CJK.CP51932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, (bool)0);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP51932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Decoder_GetCharCount_m4E110038495418168E25B64C23F50350977B5440 (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_3;
		L_3 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3->get_jisx0208ToUnicode_5();
		V_1 = L_4;
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_5;
		L_5 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5->get_jisx0212ToUnicode_6();
		V_2 = L_6;
		V_3 = 0;
		V_4 = 0;
		int32_t L_7 = __this->get_last_count_3();
		V_5 = L_7;
		goto IL_0196;
	}

IL_0033:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___bytes0;
		int32_t L_9 = ___index1;
		int32_t L_10 = L_9;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		NullCheck(L_8);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		int32_t L_13 = ___count2;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_5;
		if (L_14)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)143)))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_16 = V_4;
		if (!L_16)
		{
			goto IL_0068;
		}
	}
	{
		V_5 = 0;
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		goto IL_006c;
	}

IL_0068:
	{
		int32_t L_18 = V_4;
		V_5 = L_18;
	}

IL_006c:
	{
		goto IL_00bd;
	}

IL_0071:
	{
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)127))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		goto IL_00bd;
	}

IL_0083:
	{
		int32_t L_21 = V_4;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)142)))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_22 = V_4;
		V_5 = L_22;
		goto IL_00bd;
	}

IL_0098:
	{
		int32_t L_23 = V_4;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)161))))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) > ((int32_t)((int32_t)254))))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_25 = V_4;
		V_5 = L_25;
		goto IL_00bd;
	}

IL_00b9:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00bd:
	{
		goto IL_0196;
	}

IL_00c2:
	{
		int32_t L_27 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)142)))))
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)161))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)223))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_30 = V_4;
		int32_t L_31 = V_5;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)64)))|(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)((int32_t)113)))<<(int32_t)8))));
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		goto IL_0101;
	}

IL_00fd:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0101:
	{
		V_5 = 0;
		goto IL_0196;
	}

IL_0109:
	{
		int32_t L_34 = V_5;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)143)))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_35 = V_4;
		V_5 = L_35;
		goto IL_0196;
	}

IL_011e:
	{
		int32_t L_36 = V_5;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)((int32_t)161))), (int32_t)((int32_t)94)));
		V_5 = 0;
		int32_t L_37 = V_4;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)161))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) > ((int32_t)((int32_t)254))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_39 = V_0;
		int32_t L_40 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)((int32_t)161)))));
		goto IL_0161;
	}

IL_0155:
	{
		V_5 = 0;
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		goto IL_0196;
	}

IL_0161:
	{
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_1;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = V_1;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_0 = ((int32_t)((int32_t)L_46|(int32_t)((int32_t)((int32_t)L_50<<(int32_t)8))));
		int32_t L_51 = V_0;
		if (L_51)
		{
			goto IL_0183;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = V_2;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56 = V_2;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		uint8_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_0 = ((int32_t)((int32_t)L_55|(int32_t)((int32_t)((int32_t)L_59<<(int32_t)8))));
	}

IL_0183:
	{
		int32_t L_60 = V_0;
		if (!L_60)
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		goto IL_0196;
	}

IL_0192:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_0196:
	{
		int32_t L_63 = ___count2;
		if ((((int32_t)L_63) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		bool L_64 = ___refresh3;
		if (!L_64)
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_65 = V_5;
		if (!L_65)
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		goto IL_01bc;
	}

IL_01b4:
	{
		int32_t L_67 = V_5;
		__this->set_last_count_3(L_67);
	}

IL_01bc:
	{
		int32_t L_68 = V_3;
		return L_68;
	}
}
// System.Int32 I18N.CJK.CP51932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Decoder_GetChars_m69CE7DF44D96C91ACF3D410891280D209A92B1E3 (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = VirtFuncInvoker6< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, bool >::Invoke(9 /* System.Int32 I18N.CJK.CP51932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean) */, __this, L_0, L_1, L_2, L_3, L_4, (bool)0);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP51932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars3;
		NullCheck(L_6);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		int32_t L_7 = __this->get_last_bytes_4();
		V_4 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_8;
		L_8 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_jisx0208ToUnicode_5();
		V_5 = L_9;
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_10;
		L_10 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = L_10->get_jisx0212ToUnicode_6();
		V_6 = L_11;
		goto IL_0231;
	}

IL_003a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		int32_t L_13 = ___byteIndex1;
		int32_t L_14 = L_13;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		NullCheck(L_12);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		int32_t L_17 = ___byteCount2;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_4;
		if (L_18)
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)143)))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_20 = V_2;
		if (!L_20)
		{
			goto IL_0083;
		}
	}
	{
		V_4 = 0;
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0071;
		}
	}
	{
		Exception_t * L_23;
		L_23 = CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D_RuntimeMethod_var)));
	}

IL_0071:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = ___chars3;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)((int32_t)12539));
		goto IL_0086;
	}

IL_0083:
	{
		int32_t L_27 = V_2;
		V_4 = L_27;
	}

IL_0086:
	{
		goto IL_00fc;
	}

IL_008b:
	{
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)127))))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00a1;
		}
	}
	{
		Exception_t * L_31;
		L_31 = CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D_RuntimeMethod_var)));
	}

IL_00a1:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_32 = ___chars3;
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		int32_t L_35 = V_2;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Il2CppChar)((int32_t)((uint16_t)L_35)));
		goto IL_00fc;
	}

IL_00b0:
	{
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)142)))))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_37 = V_2;
		V_4 = L_37;
		goto IL_00fc;
	}

IL_00c3:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)161))))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_39 = V_2;
		if ((((int32_t)L_39) > ((int32_t)((int32_t)254))))
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_40 = V_2;
		V_4 = L_40;
		goto IL_00fc;
	}

IL_00e1:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = V_1;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_00ef;
		}
	}
	{
		Exception_t * L_43;
		L_43 = CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D_RuntimeMethod_var)));
	}

IL_00ef:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_44 = ___chars3;
		int32_t L_45 = V_0;
		int32_t L_46 = L_45;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Il2CppChar)((int32_t)12539));
	}

IL_00fc:
	{
		goto IL_0231;
	}

IL_0101:
	{
		int32_t L_47 = V_4;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)142)))))
		{
			goto IL_0170;
		}
	}
	{
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)161))))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) > ((int32_t)((int32_t)223))))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_4;
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)64)))|(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)((int32_t)113)))<<(int32_t)8))));
		int32_t L_52 = V_0;
		int32_t L_53 = V_1;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_013e;
		}
	}
	{
		Exception_t * L_54;
		L_54 = CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D_RuntimeMethod_var)));
	}

IL_013e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_55 = ___chars3;
		int32_t L_56 = V_0;
		int32_t L_57 = L_56;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		int32_t L_58 = V_3;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (Il2CppChar)((int32_t)((uint16_t)L_58)));
		goto IL_0168;
	}

IL_014d:
	{
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_015b;
		}
	}
	{
		Exception_t * L_61;
		L_61 = CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D_RuntimeMethod_var)));
	}

IL_015b:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_62 = ___chars3;
		int32_t L_63 = V_0;
		int32_t L_64 = L_63;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (Il2CppChar)((int32_t)12539));
	}

IL_0168:
	{
		V_4 = 0;
		goto IL_0231;
	}

IL_0170:
	{
		int32_t L_65 = V_4;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)143)))))
		{
			goto IL_0184;
		}
	}
	{
		int32_t L_66 = V_2;
		V_4 = L_66;
		goto IL_0231;
	}

IL_0184:
	{
		int32_t L_67 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)((int32_t)161))), (int32_t)((int32_t)94)));
		V_4 = 0;
		int32_t L_68 = V_2;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)161))))
		{
			goto IL_01b8;
		}
	}
	{
		int32_t L_69 = V_2;
		if ((((int32_t)L_69) > ((int32_t)((int32_t)254))))
		{
			goto IL_01b8;
		}
	}
	{
		int32_t L_70 = V_3;
		int32_t L_71 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)((int32_t)161)))));
		goto IL_01db;
	}

IL_01b8:
	{
		V_4 = 0;
		int32_t L_72 = V_0;
		int32_t L_73 = V_1;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_01c9;
		}
	}
	{
		Exception_t * L_74;
		L_74 = CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D_RuntimeMethod_var)));
	}

IL_01c9:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_75 = ___chars3;
		int32_t L_76 = V_0;
		int32_t L_77 = L_76;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (Il2CppChar)((int32_t)12539));
		goto IL_0231;
	}

IL_01db:
	{
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_78, (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = V_5;
		int32_t L_80 = V_3;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		uint8_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = V_5;
		int32_t L_84 = V_3;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		uint8_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_3 = ((int32_t)((int32_t)L_82|(int32_t)((int32_t)((int32_t)L_86<<(int32_t)8))));
		int32_t L_87 = V_3;
		if (L_87)
		{
			goto IL_0201;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = V_6;
		int32_t L_89 = V_3;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = V_6;
		int32_t L_93 = V_3;
		NullCheck(L_92);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
		uint8_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_3 = ((int32_t)((int32_t)L_91|(int32_t)((int32_t)((int32_t)L_95<<(int32_t)8))));
	}

IL_0201:
	{
		int32_t L_96 = V_0;
		int32_t L_97 = V_1;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_020f;
		}
	}
	{
		Exception_t * L_98;
		L_98 = CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D_RuntimeMethod_var)));
	}

IL_020f:
	{
		int32_t L_99 = V_3;
		if (!L_99)
		{
			goto IL_0224;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_100 = ___chars3;
		int32_t L_101 = V_0;
		int32_t L_102 = L_101;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
		int32_t L_103 = V_3;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (Il2CppChar)((int32_t)((uint16_t)L_103)));
		goto IL_0231;
	}

IL_0224:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_104 = ___chars3;
		int32_t L_105 = V_0;
		int32_t L_106 = L_105;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (Il2CppChar)((int32_t)12539));
	}

IL_0231:
	{
		int32_t L_107 = ___byteCount2;
		if ((((int32_t)L_107) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		bool L_108 = ___refresh5;
		if (!L_108)
		{
			goto IL_0266;
		}
	}
	{
		int32_t L_109 = V_4;
		if (!L_109)
		{
			goto IL_0266;
		}
	}
	{
		int32_t L_110 = V_0;
		int32_t L_111 = V_1;
		if ((((int32_t)L_110) < ((int32_t)L_111)))
		{
			goto IL_0254;
		}
	}
	{
		Exception_t * L_112;
		L_112 = CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25(__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_112, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_GetChars_mD1C31BA8737FF7158FD0C958F169D6092FD4851D_RuntimeMethod_var)));
	}

IL_0254:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_113 = ___chars3;
		int32_t L_114 = V_0;
		int32_t L_115 = L_114;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (Il2CppChar)((int32_t)12539));
		goto IL_026e;
	}

IL_0266:
	{
		int32_t L_116 = V_4;
		__this->set_last_bytes_4(L_116);
	}

IL_026e:
	{
		int32_t L_117 = V_0;
		int32_t L_118 = ___charIndex4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_117, (int32_t)L_118));
	}
}
// System.Exception I18N.CJK.CP51932Decoder::Insufficient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25 (CP51932Decoder_tC08CDE7F65E631AB279C855908646BDCCC0DBC33 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_1, L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Decoder_Insufficient_m3EA3B7A2A2E6D6EAB69A9BEE17EC12BF4E46AE25_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP51932Encoder::.ctor(I18N.Common.MonoEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51932Encoder__ctor_m50A6E76B97274A3F22A5F9E5E277F3DE2F784BA6 (CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C * __this, MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * ___encoding0, const RuntimeMethod* method)
{
	{
		MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * L_0 = ___encoding0;
		MonoEncoder__ctor_m423C2CB5857B6488AB19586D9E66BF2646CC3E78(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP51932Encoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Encoder_GetByteCountImpl_mBC2EB97F16AB1F8D087472707E453BE32D8820C8 (CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C * __this, Il2CppChar* ___chars0, int32_t ___count1, bool ___refresh2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_0;
		L_0 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_cjkToJis_7();
		V_4 = L_1;
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_2;
		L_2 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_extraToJis_9();
		V_5 = L_3;
		goto IL_018f;
	}

IL_0021:
	{
		Il2CppChar* L_4 = ___chars0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2)))));
		V_2 = L_7;
		int32_t L_8 = ___count1;
		___count1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_018f;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)256))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)162))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)163))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)167))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)168))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)172))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)176))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)177))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)180))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)182))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)215))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)247)))))
		{
			goto IL_00cd;
		}
	}

IL_00c9:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00cd:
	{
		goto IL_018f;
	}

IL_00d2:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)913))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) > ((int32_t)((int32_t)1105))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		goto IL_018f;
	}

IL_00f1:
	{
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)8208))))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)40869))))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_29 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)((int32_t)8208))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_4;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_4;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_3 = ((int32_t)((int32_t)L_33|(int32_t)((int32_t)((int32_t)L_37<<(int32_t)8))));
		int32_t L_38 = V_3;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)256))))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_012e:
	{
		goto IL_018f;
	}

IL_0133:
	{
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)65281))))
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) >= ((int32_t)((int32_t)65376))))
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_42 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)((int32_t)65281))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_5;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = V_5;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_3 = ((int32_t)((int32_t)L_46|(int32_t)((int32_t)((int32_t)L_50<<(int32_t)8))));
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)256))))
		{
			goto IL_0170;
		}
	}
	{
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_0170:
	{
		goto IL_018f;
	}

IL_0175:
	{
		int32_t L_53 = V_2;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)65376))))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_54 = V_2;
		if ((((int32_t)L_54) > ((int32_t)((int32_t)65440))))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_018f:
	{
		int32_t L_56 = ___count1;
		if ((((int32_t)L_56) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_57 = V_1;
		return L_57;
	}
}
// System.Int32 I18N.CJK.CP51932Encoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP51932Encoder_GetBytesImpl_mFAF6C7EB36C3C45884BABDE0B50896449664A387 (CP51932Encoder_t5F95F55FEB7C64E583C3E3A8B09BE40735B8052C * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___refresh4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		int32_t L_0 = V_1;
		V_2 = L_0;
		int32_t L_1 = ___byteCount3;
		V_3 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_2;
		L_2 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_cjkToJis_7();
		V_6 = L_3;
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_4;
		L_4 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4->get_greekToJis_8();
		V_7 = L_5;
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_6;
		L_6 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = L_6->get_extraToJis_9();
		V_8 = L_7;
		goto IL_0210;
	}

IL_0032:
	{
		Il2CppChar* L_8 = ___chars0;
		int32_t L_9 = V_0;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2)))));
		V_4 = L_10;
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13;
		L_13 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_14, L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Encoder_GetBytesImpl_mFAF6C7EB36C3C45884BABDE0B50896449664A387_RuntimeMethod_var)));
	}

IL_0056:
	{
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0072;
		}
	}
	{
		uint8_t* L_16 = ___bytes2;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_4;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (int32_t)L_18))) = (int8_t)((int32_t)((uint8_t)L_19));
		goto IL_0207;
	}

IL_0072:
	{
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)913))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)1105))))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_22 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)913))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_7;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_7;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_5 = ((int32_t)((int32_t)L_26|(int32_t)((int32_t)((int32_t)L_30<<(int32_t)8))));
		goto IL_0150;
	}

IL_00ac:
	{
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)8208))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)40869))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_33 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)((int32_t)8208))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_6;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_5 = ((int32_t)((int32_t)L_37|(int32_t)((int32_t)((int32_t)L_41<<(int32_t)8))));
		goto IL_0150;
	}

IL_00e6:
	{
		int32_t L_42 = V_4;
		if ((((int32_t)L_42) < ((int32_t)((int32_t)65281))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_43 = V_4;
		if ((((int32_t)L_43) > ((int32_t)((int32_t)65376))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_44 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)((int32_t)65281))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = V_8;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = V_8;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_5 = ((int32_t)((int32_t)L_48|(int32_t)((int32_t)((int32_t)L_52<<(int32_t)8))));
		goto IL_0150;
	}

IL_0120:
	{
		int32_t L_53 = V_4;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)65376))))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_54 = V_4;
		if ((((int32_t)L_54) > ((int32_t)((int32_t)65440))))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_55 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)((int32_t)65376))), (int32_t)((int32_t)36512)));
		goto IL_0150;
	}

IL_014d:
	{
		V_5 = 0;
	}

IL_0150:
	{
		int32_t L_56 = V_5;
		if (L_56)
		{
			goto IL_016c;
		}
	}
	{
		Il2CppChar* L_57 = ___chars0;
		uint8_t* L_58 = ___bytes2;
		MonoEncoder_HandleFallback_mC50D10FC0AF4745C0FDC3066B7B35F4266D9B68F(__this, (Il2CppChar*)(Il2CppChar*)L_57, (int32_t*)(&V_0), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_58, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		goto IL_0207;
	}

IL_016c:
	{
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0188;
		}
	}
	{
		uint8_t* L_60 = ___bytes2;
		int32_t L_61 = V_2;
		int32_t L_62 = L_61;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		int32_t L_63 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, (int32_t)L_62))) = (int8_t)((int32_t)((uint8_t)L_63));
		goto IL_0207;
	}

IL_0188:
	{
		int32_t L_64 = V_2;
		int32_t L_65 = V_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1))) < ((int32_t)L_65)))
		{
			goto IL_01a6;
		}
	}
	{
		String_t* L_66;
		L_66 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_67 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_67, L_66, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP51932Encoder_GetBytesImpl_mFAF6C7EB36C3C45884BABDE0B50896449664A387_RuntimeMethod_var)));
	}

IL_01a6:
	{
		int32_t L_68 = V_5;
		if ((((int32_t)L_68) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_01e9;
		}
	}
	{
		int32_t L_69 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)((int32_t)256)));
		uint8_t* L_70 = ___bytes2;
		int32_t L_71 = V_2;
		int32_t L_72 = L_71;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		int32_t L_73 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_70, (int32_t)L_72))) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_73/(int32_t)((int32_t)94))), (int32_t)((int32_t)161)))));
		uint8_t* L_74 = ___bytes2;
		int32_t L_75 = V_2;
		int32_t L_76 = L_75;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		int32_t L_77 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_74, (int32_t)L_76))) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_77%(int32_t)((int32_t)94))), (int32_t)((int32_t)161)))));
		goto IL_0207;
	}

IL_01e9:
	{
		uint8_t* L_78 = ___bytes2;
		int32_t L_79 = V_2;
		int32_t L_80 = L_79;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, (int32_t)L_80))) = (int8_t)((int32_t)142);
		uint8_t* L_81 = ___bytes2;
		int32_t L_82 = V_2;
		int32_t L_83 = L_82;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
		int32_t L_84 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, (int32_t)L_83))) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)((int32_t)36352)))));
	}

IL_0207:
	{
		int32_t L_85 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		int32_t L_86 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)1));
	}

IL_0210:
	{
		int32_t L_87 = ___charCount1;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_88 = V_2;
		int32_t L_89 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)L_89));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP51949::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP51949__ctor_m3E5966DE8C41657BA01313B107D5F49AD0DC6DB1 (CP51949_t41CC407C92E3A4C117B8C6B9DE004DB8C47F8985 * __this, const RuntimeMethod* method)
{
	{
		KoreanEncoding__ctor_mE63AEAAB35251DF80F91830A567CFD30D6436B78(__this, ((int32_t)51949), (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP51949::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51949_get_BodyName_m35E6D2538B4B44A32D7FEFAA69A312A4D291E86B (CP51949_t41CC407C92E3A4C117B8C6B9DE004DB8C47F8985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D;
	}
}
// System.String I18N.CJK.CP51949::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51949_get_EncodingName_mE83B2336F6884D52B32BD14ED1362C9062B9B164 (CP51949_t41CC407C92E3A4C117B8C6B9DE004DB8C47F8985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F909B47B62CE0D1D166DF4CDA36DD83742071F);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral98F909B47B62CE0D1D166DF4CDA36DD83742071F;
	}
}
// System.String I18N.CJK.CP51949::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51949_get_HeaderName_m6386E667265FEF75BF501E75AF392B400EF9C2C8 (CP51949_t41CC407C92E3A4C117B8C6B9DE004DB8C47F8985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D;
	}
}
// System.String I18N.CJK.CP51949::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP51949_get_WebName_m3C12083DBB8B1ABB4F559BE19822118EDCA4CEDE (CP51949_t41CC407C92E3A4C117B8C6B9DE004DB8C47F8985 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralECDAC393A5FD605E749C4DB7D471CAA0B5D51B3D;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP54936::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP54936__ctor_mA910C927870F7132BBAAE94E386B07B20722404B (CP54936_tDF48D9D5E3C13E5AA64C12E52F876E14E41E2FBF * __this, const RuntimeMethod* method)
{
	{
		GB18030Encoding__ctor_mB8C46AEF3E3684B1D87B9F40EBB2ABF2BBC0BFCD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP932::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP932__ctor_m73C25E105E86736A0A3A878CC9F945F4D70DAEBE (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	{
		MonoEncoding__ctor_mC1AB8356DFFE5D806C91F10F18D6CA4BCB5FCB8A(__this, ((int32_t)932), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP932::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetByteCountImpl_m6D11511D6C653597EA0E3754A411A5A69D7C496E (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_0;
		L_0 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_cjkToJis_7();
		V_4 = L_1;
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_2;
		L_2 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_extraToJis_9();
		V_5 = L_3;
		goto IL_018f;
	}

IL_0021:
	{
		Il2CppChar* L_4 = ___chars0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2)))));
		V_2 = L_7;
		int32_t L_8 = ___count1;
		___count1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_018f;
	}

IL_0045:
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)256))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)162))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)163))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)167))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)168))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)172))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)176))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)177))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)180))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)182))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)215))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)247)))))
		{
			goto IL_00cd;
		}
	}

IL_00c9:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00cd:
	{
		goto IL_018f;
	}

IL_00d2:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)913))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) > ((int32_t)((int32_t)1105))))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		goto IL_018f;
	}

IL_00f1:
	{
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)8208))))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)40869))))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_29 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)((int32_t)8208))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_4;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_4;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_3 = ((int32_t)((int32_t)L_33|(int32_t)((int32_t)((int32_t)L_37<<(int32_t)8))));
		int32_t L_38 = V_3;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)256))))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_012e:
	{
		goto IL_018f;
	}

IL_0133:
	{
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)57344))))
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)59223))))
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		goto IL_018f;
	}

IL_0152:
	{
		int32_t L_43 = V_2;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)65281))))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_44 = V_2;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)65519))))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_45 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)((int32_t)65281))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = V_5;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = V_5;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_3 = ((int32_t)((int32_t)L_49|(int32_t)((int32_t)((int32_t)L_53<<(int32_t)8))));
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)256))))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_018f:
	{
		int32_t L_56 = ___count1;
		if ((((int32_t)L_56) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_57 = V_1;
		return L_57;
	}
}
// System.Int32 I18N.CJK.CP932::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetBytesImpl_mA8DC5D3BF2596E24E22C0320263E2EFBC5E2EBB5 (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		int32_t L_0 = V_1;
		V_3 = L_0;
		int32_t L_1 = ___byteCount3;
		V_4 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_2;
		L_2 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_cjkToJis_7();
		V_7 = L_3;
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_4;
		L_4 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_4->get_greekToJis_8();
		V_8 = L_5;
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_6;
		L_6 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = L_6->get_extraToJis_9();
		V_9 = L_7;
		goto IL_058d;
	}

IL_0035:
	{
		Il2CppChar* L_8 = ___chars0;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)))));
		V_5 = L_11;
		int32_t L_12 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_4;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_15;
		L_15 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_16 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_16, L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetBytesImpl_mA8DC5D3BF2596E24E22C0320263E2EFBC5E2EBB5_RuntimeMethod_var)));
	}

IL_0063:
	{
		int32_t L_17 = V_5;
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)128))))
		{
			goto IL_007f;
		}
	}
	{
		uint8_t* L_18 = ___bytes2;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, (int32_t)L_20))) = (int8_t)((int32_t)((uint8_t)L_21));
		goto IL_058d;
	}

IL_007f:
	{
		int32_t L_22 = V_5;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)256))))
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_23 = V_5;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)162))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)163))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_25 = V_5;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)167))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)168))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)172))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)176))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)177))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)180))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_31 = V_5;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)182))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_32 = V_5;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)215))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_33 = V_5;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)247)))))
		{
			goto IL_02fb;
		}
	}

IL_010f:
	{
		int32_t L_34 = V_3;
		int32_t L_35 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1))) < ((int32_t)L_35)))
		{
			goto IL_012e;
		}
	}
	{
		String_t* L_36;
		L_36 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_37 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_37, L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetBytesImpl_mA8DC5D3BF2596E24E22C0320263E2EFBC5E2EBB5_RuntimeMethod_var)));
	}

IL_012e:
	{
		int32_t L_38 = V_5;
		V_11 = L_38;
		int32_t L_39 = V_11;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)((int32_t)162))))
		{
			case 0:
			{
				goto IL_01ad;
			}
			case 1:
			{
				goto IL_01cc;
			}
			case 2:
			{
				goto IL_015b;
			}
			case 3:
			{
				goto IL_015b;
			}
			case 4:
			{
				goto IL_015b;
			}
			case 5:
			{
				goto IL_01eb;
			}
			case 6:
			{
				goto IL_020a;
			}
		}
	}

IL_015b:
	{
		int32_t L_40 = V_11;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)((int32_t)176))))
		{
			case 0:
			{
				goto IL_0245;
			}
			case 1:
			{
				goto IL_0264;
			}
			case 2:
			{
				goto IL_0184;
			}
			case 3:
			{
				goto IL_0184;
			}
			case 4:
			{
				goto IL_0280;
			}
			case 5:
			{
				goto IL_0184;
			}
			case 6:
			{
				goto IL_029c;
			}
		}
	}

IL_0184:
	{
		int32_t L_41 = V_11;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)172))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_42 = V_11;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)215))))
		{
			goto IL_02bb;
		}
	}
	{
		int32_t L_43 = V_11;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)247))))
		{
			goto IL_02d7;
		}
	}
	{
		goto IL_02f6;
	}

IL_01ad:
	{
		uint8_t* L_44 = ___bytes2;
		int32_t L_45 = V_3;
		int32_t L_46 = L_45;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, (int32_t)L_46))) = (int8_t)((int32_t)129);
		uint8_t* L_47 = ___bytes2;
		int32_t L_48 = V_3;
		int32_t L_49 = L_48;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, (int32_t)L_49))) = (int8_t)((int32_t)145);
		goto IL_02f6;
	}

IL_01cc:
	{
		uint8_t* L_50 = ___bytes2;
		int32_t L_51 = V_3;
		int32_t L_52 = L_51;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_50, (int32_t)L_52))) = (int8_t)((int32_t)129);
		uint8_t* L_53 = ___bytes2;
		int32_t L_54 = V_3;
		int32_t L_55 = L_54;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_53, (int32_t)L_55))) = (int8_t)((int32_t)146);
		goto IL_02f6;
	}

IL_01eb:
	{
		uint8_t* L_56 = ___bytes2;
		int32_t L_57 = V_3;
		int32_t L_58 = L_57;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_56, (int32_t)L_58))) = (int8_t)((int32_t)129);
		uint8_t* L_59 = ___bytes2;
		int32_t L_60 = V_3;
		int32_t L_61 = L_60;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_59, (int32_t)L_61))) = (int8_t)((int32_t)152);
		goto IL_02f6;
	}

IL_020a:
	{
		uint8_t* L_62 = ___bytes2;
		int32_t L_63 = V_3;
		int32_t L_64 = L_63;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_62, (int32_t)L_64))) = (int8_t)((int32_t)129);
		uint8_t* L_65 = ___bytes2;
		int32_t L_66 = V_3;
		int32_t L_67 = L_66;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_65, (int32_t)L_67))) = (int8_t)((int32_t)78);
		goto IL_02f6;
	}

IL_0226:
	{
		uint8_t* L_68 = ___bytes2;
		int32_t L_69 = V_3;
		int32_t L_70 = L_69;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, (int32_t)L_70))) = (int8_t)((int32_t)129);
		uint8_t* L_71 = ___bytes2;
		int32_t L_72 = V_3;
		int32_t L_73 = L_72;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, (int32_t)L_73))) = (int8_t)((int32_t)202);
		goto IL_02f6;
	}

IL_0245:
	{
		uint8_t* L_74 = ___bytes2;
		int32_t L_75 = V_3;
		int32_t L_76 = L_75;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_74, (int32_t)L_76))) = (int8_t)((int32_t)129);
		uint8_t* L_77 = ___bytes2;
		int32_t L_78 = V_3;
		int32_t L_79 = L_78;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, (int32_t)L_79))) = (int8_t)((int32_t)139);
		goto IL_02f6;
	}

IL_0264:
	{
		uint8_t* L_80 = ___bytes2;
		int32_t L_81 = V_3;
		int32_t L_82 = L_81;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_80, (int32_t)L_82))) = (int8_t)((int32_t)129);
		uint8_t* L_83 = ___bytes2;
		int32_t L_84 = V_3;
		int32_t L_85 = L_84;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_83, (int32_t)L_85))) = (int8_t)((int32_t)125);
		goto IL_02f6;
	}

IL_0280:
	{
		uint8_t* L_86 = ___bytes2;
		int32_t L_87 = V_3;
		int32_t L_88 = L_87;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_86, (int32_t)L_88))) = (int8_t)((int32_t)129);
		uint8_t* L_89 = ___bytes2;
		int32_t L_90 = V_3;
		int32_t L_91 = L_90;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_89, (int32_t)L_91))) = (int8_t)((int32_t)76);
		goto IL_02f6;
	}

IL_029c:
	{
		uint8_t* L_92 = ___bytes2;
		int32_t L_93 = V_3;
		int32_t L_94 = L_93;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_92, (int32_t)L_94))) = (int8_t)((int32_t)129);
		uint8_t* L_95 = ___bytes2;
		int32_t L_96 = V_3;
		int32_t L_97 = L_96;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_95, (int32_t)L_97))) = (int8_t)((int32_t)247);
		goto IL_02f6;
	}

IL_02bb:
	{
		uint8_t* L_98 = ___bytes2;
		int32_t L_99 = V_3;
		int32_t L_100 = L_99;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_98, (int32_t)L_100))) = (int8_t)((int32_t)129);
		uint8_t* L_101 = ___bytes2;
		int32_t L_102 = V_3;
		int32_t L_103 = L_102;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_101, (int32_t)L_103))) = (int8_t)((int32_t)126);
		goto IL_02f6;
	}

IL_02d7:
	{
		uint8_t* L_104 = ___bytes2;
		int32_t L_105 = V_3;
		int32_t L_106 = L_105;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_104, (int32_t)L_106))) = (int8_t)((int32_t)129);
		uint8_t* L_107 = ___bytes2;
		int32_t L_108 = V_3;
		int32_t L_109 = L_108;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_107, (int32_t)L_109))) = (int8_t)((int32_t)128);
		goto IL_02f6;
	}

IL_02f6:
	{
		goto IL_0328;
	}

IL_02fb:
	{
		int32_t L_110 = V_5;
		if ((!(((uint32_t)L_110) == ((uint32_t)((int32_t)165)))))
		{
			goto IL_0316;
		}
	}
	{
		uint8_t* L_111 = ___bytes2;
		int32_t L_112 = V_3;
		int32_t L_113 = L_112;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_111, (int32_t)L_113))) = (int8_t)((int32_t)92);
		goto IL_0328;
	}

IL_0316:
	{
		Il2CppChar* L_114 = ___chars0;
		uint8_t* L_115 = ___bytes2;
		MonoEncoding_HandleFallback_m27AF07739597C9E7575361D30B67F4D4E89D31E6(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_2), (Il2CppChar*)(Il2CppChar*)L_114, (int32_t*)(&V_0), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_115, (int32_t*)(&V_3), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
	}

IL_0328:
	{
		goto IL_058d;
	}

IL_032d:
	{
		int32_t L_116 = V_5;
		if ((((int32_t)L_116) < ((int32_t)((int32_t)913))))
		{
			goto IL_0367;
		}
	}
	{
		int32_t L_117 = V_5;
		if ((((int32_t)L_117) > ((int32_t)((int32_t)1105))))
		{
			goto IL_0367;
		}
	}
	{
		int32_t L_118 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)((int32_t)913))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_119 = V_8;
		int32_t L_120 = V_6;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_123 = V_8;
		int32_t L_124 = V_6;
		NullCheck(L_123);
		int32_t L_125 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1));
		uint8_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_6 = ((int32_t)((int32_t)L_122|(int32_t)((int32_t)((int32_t)L_126<<(int32_t)8))));
		goto IL_0462;
	}

IL_0367:
	{
		int32_t L_127 = V_5;
		if ((((int32_t)L_127) < ((int32_t)((int32_t)8208))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_128 = V_5;
		if ((((int32_t)L_128) > ((int32_t)((int32_t)40869))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_129 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_129, (int32_t)((int32_t)8208))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_130 = V_7;
		int32_t L_131 = V_6;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_134 = V_7;
		int32_t L_135 = V_6;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
		uint8_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		V_6 = ((int32_t)((int32_t)L_133|(int32_t)((int32_t)((int32_t)L_137<<(int32_t)8))));
		goto IL_0462;
	}

IL_03a1:
	{
		int32_t L_138 = V_5;
		if ((((int32_t)L_138) < ((int32_t)((int32_t)57344))))
		{
			goto IL_03f8;
		}
	}
	{
		int32_t L_139 = V_5;
		if ((((int32_t)L_139) > ((int32_t)((int32_t)59223))))
		{
			goto IL_03f8;
		}
	}
	{
		int32_t L_140 = V_5;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)((int32_t)57344)));
		int32_t L_141 = V_10;
		int32_t L_142 = V_10;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_141/(int32_t)((int32_t)188)))<<(int32_t)8)), (int32_t)((int32_t)((int32_t)L_142%(int32_t)((int32_t)188))))), (int32_t)((int32_t)61504)));
		int32_t L_143 = V_6;
		if ((((int32_t)((int32_t)((int32_t)L_143%(int32_t)((int32_t)256)))) < ((int32_t)((int32_t)127))))
		{
			goto IL_03f3;
		}
	}
	{
		int32_t L_144 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1));
	}

IL_03f3:
	{
		goto IL_0462;
	}

IL_03f8:
	{
		int32_t L_145 = V_5;
		if ((((int32_t)L_145) < ((int32_t)((int32_t)65281))))
		{
			goto IL_0432;
		}
	}
	{
		int32_t L_146 = V_5;
		if ((((int32_t)L_146) > ((int32_t)((int32_t)65376))))
		{
			goto IL_0432;
		}
	}
	{
		int32_t L_147 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_147, (int32_t)((int32_t)65281))), (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_148 = V_9;
		int32_t L_149 = V_6;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		uint8_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_152 = V_9;
		int32_t L_153 = V_6;
		NullCheck(L_152);
		int32_t L_154 = ((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)1));
		uint8_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		V_6 = ((int32_t)((int32_t)L_151|(int32_t)((int32_t)((int32_t)L_155<<(int32_t)8))));
		goto IL_0462;
	}

IL_0432:
	{
		int32_t L_156 = V_5;
		if ((((int32_t)L_156) < ((int32_t)((int32_t)65376))))
		{
			goto IL_045f;
		}
	}
	{
		int32_t L_157 = V_5;
		if ((((int32_t)L_157) > ((int32_t)((int32_t)65440))))
		{
			goto IL_045f;
		}
	}
	{
		int32_t L_158 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_158, (int32_t)((int32_t)65376))), (int32_t)((int32_t)160)));
		goto IL_0462;
	}

IL_045f:
	{
		V_6 = 0;
	}

IL_0462:
	{
		int32_t L_159 = V_6;
		if (L_159)
		{
			goto IL_0480;
		}
	}
	{
		Il2CppChar* L_160 = ___chars0;
		uint8_t* L_161 = ___bytes2;
		MonoEncoding_HandleFallback_m27AF07739597C9E7575361D30B67F4D4E89D31E6(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_2), (Il2CppChar*)(Il2CppChar*)L_160, (int32_t*)(&V_0), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_161, (int32_t*)(&V_3), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		goto IL_058d;
	}

IL_0480:
	{
		int32_t L_162 = V_6;
		if ((((int32_t)L_162) >= ((int32_t)((int32_t)256))))
		{
			goto IL_049c;
		}
	}
	{
		uint8_t* L_163 = ___bytes2;
		int32_t L_164 = V_3;
		int32_t L_165 = L_164;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_165, (int32_t)1));
		int32_t L_166 = V_6;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_163, (int32_t)L_165))) = (int8_t)((int32_t)((uint8_t)L_166));
		goto IL_058d;
	}

IL_049c:
	{
		int32_t L_167 = V_3;
		int32_t L_168 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)1))) < ((int32_t)L_168)))
		{
			goto IL_04bb;
		}
	}
	{
		String_t* L_169;
		L_169 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_170 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_170, L_169, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_170, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetBytesImpl_mA8DC5D3BF2596E24E22C0320263E2EFBC5E2EBB5_RuntimeMethod_var)));
	}

IL_04bb:
	{
		int32_t L_171 = V_6;
		if ((((int32_t)L_171) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_053a;
		}
	}
	{
		int32_t L_172 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_172, (int32_t)((int32_t)256)));
		int32_t L_173 = V_6;
		V_5 = ((int32_t)((int32_t)L_173/(int32_t)((int32_t)188)));
		int32_t L_174 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_174%(int32_t)((int32_t)188))), (int32_t)((int32_t)64)));
		int32_t L_175 = V_6;
		if ((((int32_t)L_175) < ((int32_t)((int32_t)127))))
		{
			goto IL_04f7;
		}
	}
	{
		int32_t L_176 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1));
	}

IL_04f7:
	{
		int32_t L_177 = V_5;
		if ((((int32_t)L_177) >= ((int32_t)((int32_t)31))))
		{
			goto IL_0516;
		}
	}
	{
		uint8_t* L_178 = ___bytes2;
		int32_t L_179 = V_3;
		int32_t L_180 = L_179;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
		int32_t L_181 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_178, (int32_t)L_180))) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_181, (int32_t)((int32_t)129)))));
		goto IL_052a;
	}

IL_0516:
	{
		uint8_t* L_182 = ___bytes2;
		int32_t L_183 = V_3;
		int32_t L_184 = L_183;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)1));
		int32_t L_185 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_182, (int32_t)L_184))) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_185, (int32_t)((int32_t)31))), (int32_t)((int32_t)224)))));
	}

IL_052a:
	{
		uint8_t* L_186 = ___bytes2;
		int32_t L_187 = V_3;
		int32_t L_188 = L_187;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)1));
		int32_t L_189 = V_6;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_186, (int32_t)L_188))) = (int8_t)((int32_t)((uint8_t)L_189));
		goto IL_058d;
	}

IL_053a:
	{
		int32_t L_190 = V_6;
		if ((((int32_t)L_190) < ((int32_t)((int32_t)61504))))
		{
			goto IL_0579;
		}
	}
	{
		int32_t L_191 = V_6;
		if ((((int32_t)L_191) > ((int32_t)((int32_t)63996))))
		{
			goto IL_0579;
		}
	}
	{
		uint8_t* L_192 = ___bytes2;
		int32_t L_193 = V_3;
		int32_t L_194 = L_193;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_194, (int32_t)1));
		int32_t L_195 = V_6;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_192, (int32_t)L_194))) = (int8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_195/(int32_t)((int32_t)256)))));
		uint8_t* L_196 = ___bytes2;
		int32_t L_197 = V_3;
		int32_t L_198 = L_197;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_198, (int32_t)1));
		int32_t L_199 = V_6;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_196, (int32_t)L_198))) = (int8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_199%(int32_t)((int32_t)256)))));
		goto IL_058d;
	}

IL_0579:
	{
		uint8_t* L_200 = ___bytes2;
		int32_t L_201 = V_3;
		int32_t L_202 = L_201;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_202, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_200, (int32_t)L_202))) = (int8_t)((int32_t)63);
		uint8_t* L_203 = ___bytes2;
		int32_t L_204 = V_3;
		int32_t L_205 = L_204;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_203, (int32_t)L_205))) = (int8_t)((int32_t)63);
	}

IL_058d:
	{
		int32_t L_206 = ___charCount1;
		if ((((int32_t)L_206) > ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_207 = V_3;
		int32_t L_208 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_207, (int32_t)L_208));
	}
}
// System.Int32 I18N.CJK.CP932::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetCharCount_mB5A907C6A92681963074F7215E9F9451420F3231 (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_0;
		L_0 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * L_1 = (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 *)il2cpp_codegen_object_new(CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33_il2cpp_TypeInfo_var);
		CP932Decoder__ctor_m7A120524E505C478E996F19D2D040C0F188C1E0D(L_1, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		int32_t L_3 = ___index1;
		int32_t L_4 = ___count2;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = CP932Decoder_GetCharCount_m016040EEC34CCC34F3EFAE8B54675809482EA2F5(L_1, L_2, L_3, L_4, (bool)1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP932::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetChars_m7EA8C801767429F722A58B65BC01A4677666373E (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_0;
		L_0 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * L_1 = (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 *)il2cpp_codegen_object_new(CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33_il2cpp_TypeInfo_var);
		CP932Decoder__ctor_m7A120524E505C478E996F19D2D040C0F188C1E0D(L_1, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		int32_t L_3 = ___byteIndex1;
		int32_t L_4 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___chars3;
		int32_t L_6 = ___charIndex4;
		NullCheck(L_1);
		int32_t L_7;
		L_7 = CP932Decoder_GetChars_m717D87842627744A6D6BE4211780E11670C75621(L_1, L_2, L_3, L_4, L_5, L_6, (bool)1, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 I18N.CJK.CP932::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetMaxByteCount_mCEC276D202DDFBCDB120C1A9E749A1300D17EB14 (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, int32_t ___charCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___charCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1;
		L_1 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AA99C92BB9065939AEAB82DCEAAB6CEE49FA2FB)), L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetMaxByteCount_mCEC276D202DDFBCDB120C1A9E749A1300D17EB14_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_3 = ___charCount0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2));
	}
}
// System.Int32 I18N.CJK.CP932::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_GetMaxCharCount_mF02A5DB21B8A2CFEA85665C6317CDC58CA8D6AE3 (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, int32_t ___byteCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___byteCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1;
		L_1 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C)), L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932_GetMaxCharCount_mF02A5DB21B8A2CFEA85665C6317CDC58CA8D6AE3_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_3 = ___byteCount0;
		return L_3;
	}
}
// System.Text.Decoder I18N.CJK.CP932::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * CP932_GetDecoder_m6BFDE93618062888C3FBF12B4D32253D5396B188 (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_0;
		L_0 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * L_1 = (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 *)il2cpp_codegen_object_new(CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33_il2cpp_TypeInfo_var);
		CP932Decoder__ctor_m7A120524E505C478E996F19D2D040C0F188C1E0D(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String I18N.CJK.CP932::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP932_get_BodyName_m210B996C535C70EB5ABE8762F84685B1EE6B7DBA (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
	}
}
// System.String I18N.CJK.CP932::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP932_get_EncodingName_m047980279C8D4028B674035EC61F1DD070CA1E8B (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0050F900BF1A1EA5A688BEEDDA876E99ECF7DBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralD0050F900BF1A1EA5A688BEEDDA876E99ECF7DBD;
	}
}
// System.String I18N.CJK.CP932::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP932_get_HeaderName_mD9C420FAEB2A65C8B726B2521EBEC66C21780E9D (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
	}
}
// System.Boolean I18N.CJK.CP932::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP932_get_IsBrowserDisplay_m12B2BBC01515DF7CEA58C2E56A1DD234E932FD50 (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP932::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP932_get_IsBrowserSave_mEA75855B34D0D2CEE0438546089028DCEFC6224F (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP932::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP932_get_IsMailNewsDisplay_mABAE1325D19ED7A276C047B1F68723492D2C56FE (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP932::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP932_get_IsMailNewsSave_m79263E1D892359E79945D3C9433C136E44393FB7 (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.String I18N.CJK.CP932::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP932_get_WebName_m974B3468AED13CF6286E16B270875F71ACCD9B78 (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32330AB77DEF9883B00C95C23F73315939670D22);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral32330AB77DEF9883B00C95C23F73315939670D22;
	}
}
// System.Int32 I18N.CJK.CP932::get_WindowsCodePage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932_get_WindowsCodePage_m25BC3B61547FF49A98DE932B616455921253C03B (CP932_t93711AFE1791DB3D665D8CABB37BEA2CF5E39CFC * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)932);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP932Decoder::.ctor(I18N.CJK.JISConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP932Decoder__ctor_m7A120524E505C478E996F19D2D040C0F188C1E0D (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * __this, JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * ___convert0, const RuntimeMethod* method)
{
	{
		DbcsDecoder__ctor_mBC4EBD2874BECCC0EBE1D8A5AB28B7200F031CC6(__this, (DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 *)NULL, /*hidden argument*/NULL);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_0 = ___convert0;
		__this->set_convert_3(L_0);
		return;
	}
}
// System.Int32 I18N.CJK.CP932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetCharCount_m04C75984363775D31C8F013814C5B53532369245 (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = CP932Decoder_GetCharCount_m016040EEC34CCC34F3EFAE8B54675809482EA2F5(__this, L_0, L_1, L_2, (bool)0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP932Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetCharCount_m016040EEC34CCC34F3EFAE8B54675809482EA2F5 (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = 0;
		int32_t L_3 = __this->get_last_byte_count_4();
		V_2 = L_3;
		goto IL_0064;
	}

IL_0017:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		int32_t L_9 = ___count2;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_2;
		if (L_10)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)129))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)159))))
		{
			goto IL_0057;
		}
	}

IL_0041:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)224))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)239))))
		{
			goto IL_0059;
		}
	}

IL_0057:
	{
		int32_t L_15 = V_1;
		V_2 = L_15;
	}

IL_0059:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		goto IL_0064;
	}

IL_0062:
	{
		V_2 = 0;
	}

IL_0064:
	{
		int32_t L_17 = ___count2;
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		bool L_18 = ___refresh3;
		if (!L_18)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_2;
		if (!L_19)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007c:
	{
		__this->set_last_byte_count_4(0);
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_21 = V_2;
		__this->set_last_byte_count_4(L_21);
	}

IL_008f:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.Int32 I18N.CJK.CP932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetChars_mC5D7A069230A7C5236BE581C7EB4C78F4EDC5BE8 (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = CP932Decoder_GetChars_m717D87842627744A6D6BE4211780E11670C75621(__this, L_0, L_1, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP932Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP932Decoder_GetChars_m717D87842627744A6D6BE4211780E11670C75621 (CP932Decoder_t0B3CA4101BB24A9E165B8876D985986B659DBE33 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars3;
		NullCheck(L_6);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		int32_t L_7 = __this->get_last_byte_chars_5();
		V_4 = L_7;
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_8 = __this->get_convert_3();
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_jisx0208ToUnicode_5();
		V_5 = L_9;
		goto IL_01fe;
	}

IL_002f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___bytes0;
		int32_t L_11 = ___byteIndex1;
		int32_t L_12 = L_11;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		int32_t L_15 = ___byteCount2;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_4;
		if (L_16)
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_19;
		L_19 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10562201C2A7AB420A8DECFE1373D48FBF48A6AE)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_20 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_20, L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CP932Decoder_GetChars_m717D87842627744A6D6BE4211780E11670C75621_RuntimeMethod_var)));
	}

IL_0060:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)129))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) <= ((int32_t)((int32_t)159))))
		{
			goto IL_008c;
		}
	}

IL_0076:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)224))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)((int32_t)239))))
		{
			goto IL_0094;
		}
	}

IL_008c:
	{
		int32_t L_25 = V_2;
		V_4 = L_25;
		goto IL_00e9;
	}

IL_0094:
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00ae;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = ___chars3;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = V_2;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Il2CppChar)((int32_t)((uint16_t)L_30)));
		goto IL_00e9;
	}

IL_00ae:
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)161))))
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)223))))
		{
			goto IL_00df;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = ___chars3;
		int32_t L_34 = V_0;
		int32_t L_35 = L_34;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		int32_t L_36 = V_2;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)((int32_t)161))), (int32_t)((int32_t)65377))))));
		goto IL_00e9;
	}

IL_00df:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_37 = ___chars3;
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (Il2CppChar)((int32_t)63));
	}

IL_00e9:
	{
		goto IL_01fe;
	}

IL_00ee:
	{
		int32_t L_40 = V_4;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)129))))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_41 = V_4;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)159))))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_42 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)((int32_t)129))), (int32_t)((int32_t)188)));
		goto IL_0177;
	}

IL_011a:
	{
		int32_t L_43 = V_4;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)240))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_44 = V_4;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)252))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_45 = V_2;
		if ((((int32_t)L_45) > ((int32_t)((int32_t)252))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_46 = V_4;
		int32_t L_47 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)57344), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)240))), (int32_t)((int32_t)188))))), (int32_t)L_47));
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0160;
		}
	}
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
	}

IL_0160:
	{
		goto IL_0177;
	}

IL_0165:
	{
		int32_t L_50 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)224))), (int32_t)((int32_t)31))), (int32_t)((int32_t)188)));
	}

IL_0177:
	{
		V_4 = 0;
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)64))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_52 = V_2;
		if ((((int32_t)L_52) > ((int32_t)((int32_t)126))))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_53 = V_3;
		int32_t L_54 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)((int32_t)64)))));
		goto IL_01cd;
	}

IL_0196:
	{
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)128))))
		{
			goto IL_01be;
		}
	}
	{
		int32_t L_56 = V_2;
		if ((((int32_t)L_56) > ((int32_t)((int32_t)252))))
		{
			goto IL_01be;
		}
	}
	{
		int32_t L_57 = V_3;
		int32_t L_58 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)((int32_t)128))), (int32_t)((int32_t)63)))));
		goto IL_01cd;
	}

IL_01be:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = ___chars3;
		int32_t L_60 = V_0;
		int32_t L_61 = L_60;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Il2CppChar)((int32_t)63));
		goto IL_01fe;
	}

IL_01cd:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_62, (int32_t)2));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = V_5;
		int32_t L_64 = V_3;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_67 = V_5;
		int32_t L_68 = V_3;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
		uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_3 = ((int32_t)((int32_t)L_66|(int32_t)((int32_t)((int32_t)L_70<<(int32_t)8))));
		int32_t L_71 = V_3;
		if (!L_71)
		{
			goto IL_01f4;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_72 = ___chars3;
		int32_t L_73 = V_0;
		int32_t L_74 = L_73;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		int32_t L_75 = V_3;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (Il2CppChar)((int32_t)((uint16_t)L_75)));
		goto IL_01fe;
	}

IL_01f4:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_76 = ___chars3;
		int32_t L_77 = V_0;
		int32_t L_78 = L_77;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (Il2CppChar)((int32_t)63));
	}

IL_01fe:
	{
		int32_t L_79 = ___byteCount2;
		if ((((int32_t)L_79) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		bool L_80 = ___refresh5;
		if (!L_80)
		{
			goto IL_022c;
		}
	}
	{
		int32_t L_81 = V_4;
		if (!L_81)
		{
			goto IL_0220;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_82 = ___chars3;
		int32_t L_83 = V_0;
		int32_t L_84 = L_83;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (Il2CppChar)((int32_t)12539));
	}

IL_0220:
	{
		__this->set_last_byte_chars_5(0);
		goto IL_0234;
	}

IL_022c:
	{
		int32_t L_85 = V_4;
		__this->set_last_byte_chars_5(L_85);
	}

IL_0234:
	{
		int32_t L_86 = V_0;
		int32_t L_87 = ___charIndex4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)L_87));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP936::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP936__ctor_m963F589B4F6242936CAD31E5BB2556E1815F6121 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	{
		DbcsEncoding__ctor_mF9A83F714BDE6ADFD266E6E4F7F46815AB835D76(__this, ((int32_t)936), /*hidden argument*/NULL);
		return;
	}
}
// I18N.CJK.DbcsConvert I18N.CJK.CP936::GetConvert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * CP936_GetConvert_mAFCD7EC5B6CC67193F0D28A2FAF9DC239E7ECA67 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = ((DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var))->get_Gb2312_2();
		return L_0;
	}
}
// System.Int32 I18N.CJK.CP936::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetByteCountImpl_mF53005272F8BE7F3C06125A1E705D25542414120 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * >::Invoke(48 /* I18N.CJK.DbcsConvert I18N.CJK.CP936::GetConvert() */, __this);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		goto IL_006b;
	}

IL_0010:
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2)))));
		V_3 = L_4;
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0031;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003a;
		}
	}

IL_0031:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_006b;
	}

IL_003a:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_u2n_1();
		Il2CppChar L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), (int32_t)1));
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = L_13->get_u2n_1();
		Il2CppChar L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		uint8_t L_18 = V_4;
		if (L_18)
		{
			goto IL_0067;
		}
	}
	{
		uint8_t L_19 = V_5;
		if (L_19)
		{
			goto IL_0067;
		}
	}
	{
		goto IL_006b;
	}

IL_0067:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2));
	}

IL_006b:
	{
		int32_t L_21 = ___count1;
		int32_t L_22 = L_21;
		___count1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_23 = V_2;
		return L_23;
	}
}
// System.Int32 I18N.CJK.CP936::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetBytesImpl_mEA0ACD190597101E920B04FC5863612634EAF165 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * >::Invoke(48 /* I18N.CJK.DbcsConvert I18N.CJK.CP936::GetConvert() */, __this);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		int32_t L_1 = V_2;
		V_4 = L_1;
		goto IL_009e;
	}

IL_0015:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2)))));
		V_5 = L_5;
		Il2CppChar L_6 = V_5;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_7 = V_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0049;
		}
	}

IL_0039:
	{
		uint8_t* L_8 = ___bytes2;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		Il2CppChar L_11 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)L_10))) = (int8_t)((int32_t)((uint8_t)L_11));
		goto IL_009e;
	}

IL_0049:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = L_12->get_u2n_1();
		Il2CppChar L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)), (int32_t)1));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = L_17->get_u2n_1();
		Il2CppChar L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_7 = L_21;
		uint8_t L_22 = V_6;
		if (L_22)
		{
			goto IL_008a;
		}
	}
	{
		uint8_t L_23 = V_7;
		if (L_23)
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar* L_24 = ___chars0;
		uint8_t* L_25 = ___bytes2;
		MonoEncoding_HandleFallback_m27AF07739597C9E7575361D30B67F4D4E89D31E6(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_24, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_25, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_008a:
	{
		uint8_t* L_26 = ___bytes2;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		uint8_t L_29 = V_6;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, (int32_t)L_28))) = (int8_t)L_29;
		uint8_t* L_30 = ___bytes2;
		int32_t L_31 = V_2;
		int32_t L_32 = L_31;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		uint8_t L_33 = V_7;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, (int32_t)L_32))) = (int8_t)L_33;
	}

IL_009e:
	{
		int32_t L_34 = ___charCount1;
		int32_t L_35 = L_34;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_36 = V_2;
		int32_t L_37 = V_4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
	}
}
// System.Int32 I18N.CJK.CP936::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetCharCount_m1E6537A91BAE1BBFA6E3C322AE645C82018D7A9B (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder I18N.CJK.CP936::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 I18N.CJK.CP936::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936_GetChars_m74FF86A32F197523FD7DD8541D9ABE8331C1CE85 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder I18N.CJK.CP936::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIndex1;
		int32_t L_3 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Text.Decoder I18N.CJK.CP936::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * CP936_GetDecoder_m239D3BCE06E0B0FF3E9242639CB0F547E56DCC59 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * >::Invoke(48 /* I18N.CJK.DbcsConvert I18N.CJK.CP936::GetConvert() */, __this);
		CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A * L_1 = (CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A *)il2cpp_codegen_object_new(CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A_il2cpp_TypeInfo_var);
		CP936Decoder__ctor_mD242C149CB22F1EE75B1C0568DA76E3F649C5398(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String I18N.CJK.CP936::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP936_get_BodyName_m4C3874735F90187ACF8B0D37074F7CB007F65373 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4CAA44E577D721780626FDA762744166099063);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7A4CAA44E577D721780626FDA762744166099063;
	}
}
// System.String I18N.CJK.CP936::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP936_get_EncodingName_m12FB8061E55F4C2F37E309EFB28F4D4E28D9811D (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB44D305293AF0B75A15DDA90DD538CE236474E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralAB44D305293AF0B75A15DDA90DD538CE236474E7;
	}
}
// System.String I18N.CJK.CP936::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP936_get_HeaderName_m915565F49F12A5F79AA0EB011BDCC3EE7F4A62BA (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4CAA44E577D721780626FDA762744166099063);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7A4CAA44E577D721780626FDA762744166099063;
	}
}
// System.Boolean I18N.CJK.CP936::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP936_get_IsBrowserDisplay_m362684FC123497B151BD12E8DF669F20B99A86FE (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP936::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP936_get_IsBrowserSave_m88DD992D2D7891181FDA197B659B9DFE22BC32E1 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP936::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP936_get_IsMailNewsDisplay_mEA81D583916E0DA5E40FC87E73EFC6414C293377 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.CP936::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CP936_get_IsMailNewsSave_mB84DE0B429A1AD3E9FCFA95A17F621C859FA96F8 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.String I18N.CJK.CP936::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP936_get_WebName_mEBEBEFA3A248112D44BB79A6DF69AE86DAE77E45 (CP936_tB6035F505CF6F6CE24B7821096530E8B494195C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4CAA44E577D721780626FDA762744166099063);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7A4CAA44E577D721780626FDA762744166099063;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP936Decoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP936Decoder__ctor_mD242C149CB22F1EE75B1C0568DA76E3F649C5398 (CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A * __this, DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___convert0, const RuntimeMethod* method)
{
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = ___convert0;
		DbcsDecoder__ctor_mBC4EBD2874BECCC0EBE1D8A5AB28B7200F031CC6(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP936Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetCharCount_m4E19BDF04BE6D303E5301EEA2AC4DDBC9BA661C4 (CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = CP936Decoder_GetCharCount_mE6BF04D07B36A75537B01BABE389B0E8FEDB9C59(__this, L_0, L_1, L_2, (bool)0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP936Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetCharCount_mE6BF04D07B36A75537B01BABE389B0E8FEDB9C59 (CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_last_byte_count_3();
		V_0 = L_3;
		__this->set_last_byte_count_3(0);
		V_1 = 0;
		goto IL_0059;
	}

IL_001e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_004c;
		}
	}

IL_0043:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_0059;
	}

IL_004c:
	{
		int32_t L_13 = V_2;
		V_0 = L_13;
		goto IL_0059;
	}

IL_0053:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		V_0 = 0;
	}

IL_0059:
	{
		int32_t L_15 = ___count2;
		int32_t L_16 = L_15;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_17 = V_0;
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		bool L_18 = ___refresh3;
		if (!L_18)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		__this->set_last_byte_count_3(0);
		goto IL_0089;
	}

IL_0082:
	{
		int32_t L_20 = V_0;
		__this->set_last_byte_count_3(L_20);
	}

IL_0089:
	{
		int32_t L_21 = V_1;
		return L_21;
	}
}
// System.Int32 I18N.CJK.CP936Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetChars_mDE077126FE9C3ECAAD6F12948918864C80DFBFF7 (CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = CP936Decoder_GetChars_m10F23375E693E66298B4E23D64FC36F57449FEF7(__this, L_0, L_1, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP936Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP936Decoder_GetChars_m10F23375E693E66298B4E23D64FC36F57449FEF7 (CP936Decoder_t2A6B7C135B2B22B074BF2DBCFFC6983B9DAAEC9A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t G_B13_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		int32_t L_6 = __this->get_last_byte_bytes_4();
		V_1 = L_6;
		__this->set_last_byte_bytes_4(0);
		goto IL_00fc;
	}

IL_0023:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		int32_t L_8 = ___byteIndex1;
		int32_t L_9 = L_8;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0059;
		}
	}

IL_0048:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___chars3;
		int32_t L_16 = ___charIndex4;
		int32_t L_17 = L_16;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)((uint16_t)L_18)));
		goto IL_00fc;
	}

IL_0059:
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)129))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)255))))
		{
			goto IL_0074;
		}
	}

IL_006f:
	{
		goto IL_00fc;
	}

IL_0074:
	{
		int32_t L_21 = V_2;
		V_1 = L_21;
		goto IL_00fc;
	}

IL_007b:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)129))), (int32_t)((int32_t)191))), (int32_t)L_23)), (int32_t)((int32_t)64))), (int32_t)2));
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_25 = V_3;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_26 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_26);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = L_26->get_n2u_0();
		NullCheck(L_27);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_00b0;
		}
	}

IL_00aa:
	{
		G_B13_0 = 0;
		goto IL_00d4;
	}

IL_00b0:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_28 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_28);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = L_28->get_n2u_0();
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_33 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = L_33->get_n2u_0();
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		G_B13_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)((int32_t)256)))))));
	}

IL_00d4:
	{
		V_4 = G_B13_0;
		Il2CppChar L_38 = V_4;
		if (L_38)
		{
			goto IL_00ee;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_39 = ___chars3;
		int32_t L_40 = ___charIndex4;
		int32_t L_41 = L_40;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Il2CppChar)((int32_t)63));
		goto IL_00fa;
	}

IL_00ee:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_42 = ___chars3;
		int32_t L_43 = ___charIndex4;
		int32_t L_44 = L_43;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		Il2CppChar L_45 = V_4;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Il2CppChar)L_45);
	}

IL_00fa:
	{
		V_1 = 0;
	}

IL_00fc:
	{
		int32_t L_46 = ___byteCount2;
		int32_t L_47 = L_46;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1));
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_48 = V_1;
		if (!L_48)
		{
			goto IL_0134;
		}
	}
	{
		bool L_49 = ___refresh5;
		if (!L_49)
		{
			goto IL_012d;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_50 = ___chars3;
		int32_t L_51 = ___charIndex4;
		int32_t L_52 = L_51;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Il2CppChar)((int32_t)63));
		__this->set_last_byte_bytes_4(0);
		goto IL_0134;
	}

IL_012d:
	{
		int32_t L_53 = V_1;
		__this->set_last_byte_bytes_4(L_53);
	}

IL_0134:
	{
		int32_t L_54 = ___charIndex4;
		int32_t L_55 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_55));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP949::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP949__ctor_m8CA9918E15557EB30901234899DDD8E3DB7E0E10 (CP949_t95FD5E5FF8F158DCD75A14268631F4C0A8BFC4C2 * __this, const RuntimeMethod* method)
{
	{
		KoreanEncoding__ctor_mE63AEAAB35251DF80F91830A567CFD30D6436B78(__this, ((int32_t)949), (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.CP949::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP949_get_BodyName_mF0D45EAB6B52E4DD52CD8780E899A010B71BF7C8 (CP949_t95FD5E5FF8F158DCD75A14268631F4C0A8BFC4C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0;
	}
}
// System.String I18N.CJK.CP949::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP949_get_EncodingName_m29B6BE56A9F5B396F846A348A1CD87176472099E (CP949_t95FD5E5FF8F158DCD75A14268631F4C0A8BFC4C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C17BEF3EFFF7AD2B5A5AA3C0CA404589CE48C27);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7C17BEF3EFFF7AD2B5A5AA3C0CA404589CE48C27;
	}
}
// System.String I18N.CJK.CP949::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP949_get_HeaderName_m6B92265B20EA9F66582C4F910BABDE3A0792C197 (CP949_t95FD5E5FF8F158DCD75A14268631F4C0A8BFC4C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0;
	}
}
// System.String I18N.CJK.CP949::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP949_get_WebName_m2777BAA718F8EAAF05622A0CCF6C113879AB87FF (CP949_t95FD5E5FF8F158DCD75A14268631F4C0A8BFC4C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2963F884691C93A4D24C3B6684EBC449253AC7B0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP950::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP950__ctor_m85E054D527E1A86AAEF3DC944E037ACB60302880 (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, const RuntimeMethod* method)
{
	{
		DbcsEncoding__ctor_mF9A83F714BDE6ADFD266E6E4F7F46815AB835D76(__this, ((int32_t)950), /*hidden argument*/NULL);
		return;
	}
}
// I18N.CJK.DbcsConvert I18N.CJK.CP950::GetConvert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * CP950_GetConvert_m77F6943702030E6B7A13FDAEF63A21F9FDAE52C8 (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = ((DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var))->get_Big5_3();
		return L_0;
	}
}
// System.Int32 I18N.CJK.CP950::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950_GetByteCountImpl_m8F02FD1A126EDD026FDCEAF73D9C217FBEBA957F (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * >::Invoke(48 /* I18N.CJK.DbcsConvert I18N.CJK.CP950::GetConvert() */, __this);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		goto IL_006f;
	}

IL_0010:
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2)))));
		V_3 = L_4;
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0031;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003a;
		}
	}

IL_0031:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_006f;
	}

IL_003a:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_u2n_1();
		Il2CppChar L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), (int32_t)1));
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = L_13->get_u2n_1();
		Il2CppChar L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		uint8_t L_18 = V_4;
		if (L_18)
		{
			goto IL_006b;
		}
	}
	{
		uint8_t L_19 = V_5;
		if (L_19)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		goto IL_006f;
	}

IL_006b:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)2));
	}

IL_006f:
	{
		int32_t L_22 = ___count1;
		int32_t L_23 = L_22;
		___count1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_24 = V_2;
		return L_24;
	}
}
// System.Int32 I18N.CJK.CP950::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950_GetBytesImpl_m59DC5F57A1CD9E6AC4DB38A8452BF7721A1FE0F4 (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * >::Invoke(48 /* I18N.CJK.DbcsConvert I18N.CJK.CP950::GetConvert() */, __this);
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		int32_t L_1 = V_2;
		V_4 = L_1;
		goto IL_009e;
	}

IL_0015:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2)))));
		V_5 = L_5;
		Il2CppChar L_6 = V_5;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_7 = V_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0049;
		}
	}

IL_0039:
	{
		uint8_t* L_8 = ___bytes2;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		Il2CppChar L_11 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)L_10))) = (int8_t)((int32_t)((uint8_t)L_11));
		goto IL_009e;
	}

IL_0049:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = L_12->get_u2n_1();
		Il2CppChar L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)), (int32_t)1));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = L_17->get_u2n_1();
		Il2CppChar L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_7 = L_21;
		uint8_t L_22 = V_6;
		if (L_22)
		{
			goto IL_008a;
		}
	}
	{
		uint8_t L_23 = V_7;
		if (L_23)
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar* L_24 = ___chars0;
		uint8_t* L_25 = ___bytes2;
		MonoEncoding_HandleFallback_m27AF07739597C9E7575361D30B67F4D4E89D31E6(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_24, (int32_t*)(&V_1), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_25, (int32_t*)(&V_2), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_008a:
	{
		uint8_t* L_26 = ___bytes2;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		uint8_t L_29 = V_6;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, (int32_t)L_28))) = (int8_t)L_29;
		uint8_t* L_30 = ___bytes2;
		int32_t L_31 = V_2;
		int32_t L_32 = L_31;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		uint8_t L_33 = V_7;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, (int32_t)L_32))) = (int8_t)L_33;
	}

IL_009e:
	{
		int32_t L_34 = ___charCount1;
		int32_t L_35 = L_34;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_36 = V_2;
		int32_t L_37 = V_4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
	}
}
// System.Int32 I18N.CJK.CP950::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950_GetChars_mB32C8D3E51C7FB14D738BA5B48A058417F079AA0 (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder I18N.CJK.CP950::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIndex1;
		int32_t L_3 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Text.Decoder I18N.CJK.CP950::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * CP950_GetDecoder_m00F2D247F0B982AEDDAA90234122389ADBDDC125 (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * >::Invoke(48 /* I18N.CJK.DbcsConvert I18N.CJK.CP950::GetConvert() */, __this);
		CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF * L_1 = (CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF *)il2cpp_codegen_object_new(CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF_il2cpp_TypeInfo_var);
		CP950Decoder__ctor_m36D589BFA1334F9EDDAE161C7ECADB9AA07A74FE(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String I18N.CJK.CP950::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP950_get_BodyName_m23B9DB074AA25D631E0ABA3641C2F8FD05139F78 (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E;
	}
}
// System.String I18N.CJK.CP950::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP950_get_EncodingName_m2678EE3CEA8A89F27D76A698DA827FD5E24B693E (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55C78D7827EC5F6276BA3568C85612BF051686B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral55C78D7827EC5F6276BA3568C85612BF051686B2;
	}
}
// System.String I18N.CJK.CP950::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP950_get_HeaderName_mD09EF371CB895EAD8E1EC6C545025D8EA7B4AC74 (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E;
	}
}
// System.String I18N.CJK.CP950::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CP950_get_WebName_m9072DD2CA64DF3DF52D37B5D753D3EE4CE664CAC (CP950_tAF636C810D731EFA02B6DE04BC51E959246C5898 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral5F81F23BE8E73E4DA13E4AEA38A6717230062C2E;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CodeTable::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeTable__ctor_m680F5F405451137DF83FD281CB4AFE3309A67C92 (CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeTable__ctor_m680F5F405451137DF83FD281CB4AFE3309A67C92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Assembly_t * L_0;
		L_0 = il2cpp_codegen_get_executing_assembly(CodeTable__ctor_m680F5F405451137DF83FD281CB4AFE3309A67C92_RuntimeMethod_var);
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2;
		L_2 = VirtFuncInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, String_t* >::Invoke(16 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_0, L_1);
		__this->set_stream_0(L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get_stream_0();
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_4;
		L_4 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25D8BC23F831D8EFA6509D258FF7E36469D41625)), /*hidden argument*/NULL);
		String_t* L_5 = ___name0;
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(L_4, L_5, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_7 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CodeTable__ctor_m680F5F405451137DF83FD281CB4AFE3309A67C92_RuntimeMethod_var)));
	}

IL_0038:
	{
		return;
	}
}
// System.Void I18N.CJK.CodeTable::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeTable_Dispose_m19140F4AE97B7CEE0CC1F837AA426252F05D9F8A (CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get_stream_0();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_1);
		__this->set_stream_0((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Byte[] I18N.CJK.CodeTable::GetSection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* CodeTable_GetSection_m494D580041679EA9E6AB8178659DBFCA6B1D2E48 (CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_000d:
	{
		V_0 = ((int64_t)((int64_t)0));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get_stream_0();
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_1);
		V_1 = L_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		V_2 = L_3;
		goto IL_00b5;
	}

IL_0028:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get_stream_0();
		int64_t L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, L_5);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = __this->get_stream_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, 8);
		if ((((int32_t)L_8) == ((int32_t)8)))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_00bf;
	}

IL_004d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = 1;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = 2;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = 3;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11|(int32_t)((int32_t)((int32_t)L_14<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)((int32_t)24)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = 4;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25 = 5;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = 6;
		uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = 7;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_23|(int32_t)((int32_t)((int32_t)L_26<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_29<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)24)))));
		int32_t L_33 = V_3;
		int32_t L_34 = ___num0;
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_35 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_35);
		V_5 = L_36;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_37 = __this->get_stream_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = V_5;
		int32_t L_39 = V_4;
		NullCheck(L_37);
		int32_t L_40;
		L_40 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, L_39);
		int32_t L_41 = V_4;
		if ((((int32_t)L_40) == ((int32_t)L_41)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00bf;
	}

IL_00aa:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_5;
		return L_42;
	}

IL_00ad:
	{
		int64_t L_43 = V_0;
		int32_t L_44 = V_4;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_43, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)8, (int32_t)L_44))))));
	}

IL_00b5:
	{
		int64_t L_45 = V_0;
		int64_t L_46 = V_1;
		if ((((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_45, (int64_t)((int64_t)((int64_t)8))))) <= ((int64_t)L_46)))
		{
			goto IL_0028;
		}
	}

IL_00bf:
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.DbcsConvert::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsConvert__ctor_m33F863C1BD5BD29740F9C71BE2F1EB7EB9062EB6 (DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___fileName0;
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_1 = (CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 *)il2cpp_codegen_object_new(CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07_il2cpp_TypeInfo_var);
		CodeTable__ctor_m680F5F405451137DF83FD281CB4AFE3309A67C92(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_2 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = CodeTable_GetSection_m494D580041679EA9E6AB8178659DBFCA6B1D2E48(L_2, 1, /*hidden argument*/NULL);
		__this->set_n2u_0(L_3);
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = CodeTable_GetSection_m494D580041679EA9E6AB8178659DBFCA6B1D2E48(L_4, 2, /*hidden argument*/NULL);
		__this->set_u2n_1(L_5);
		IL2CPP_LEAVE(0x39, FINALLY_002c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		{
			CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_0038:
		{
			IL2CPP_END_FINALLY(44)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		return;
	}
}
// System.Void I18N.CJK.DbcsConvert::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsConvert__cctor_mCB56DFF25974DEB0961A3310C97EDDD6421F3DC4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9456FD3CA0E32700AFB53160BCC870B3848FF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5ECFFDB038BCFA2116D6102731BC2B18BB78E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC3DCC8182BD98C2EEB8C528D7001625C982858);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = (DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 *)il2cpp_codegen_object_new(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		DbcsConvert__ctor_m33F863C1BD5BD29740F9C71BE2F1EB7EB9062EB6(L_0, _stringLiteralEEC3DCC8182BD98C2EEB8C528D7001625C982858, /*hidden argument*/NULL);
		((DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var))->set_Gb2312_2(L_0);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_1 = (DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 *)il2cpp_codegen_object_new(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		DbcsConvert__ctor_m33F863C1BD5BD29740F9C71BE2F1EB7EB9062EB6(L_1, _stringLiteral1B9456FD3CA0E32700AFB53160BCC870B3848FF4, /*hidden argument*/NULL);
		((DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var))->set_Big5_3(L_1);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_2 = (DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 *)il2cpp_codegen_object_new(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		DbcsConvert__ctor_m33F863C1BD5BD29740F9C71BE2F1EB7EB9062EB6(L_2, _stringLiteralB5ECFFDB038BCFA2116D6102731BC2B18BB78E18, /*hidden argument*/NULL);
		((DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var))->set_KS_4(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsEncoding__ctor_mF9A83F714BDE6ADFD266E6E4F7F46815AB835D76 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, int32_t ___codePage0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		DbcsEncoding__ctor_m32B4B472A9ACD2670CA904C5FE94E68E99BEF61C(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.CJK.DbcsEncoding::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsEncoding__ctor_m32B4B472A9ACD2670CA904C5FE94E68E99BEF61C (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, int32_t ___codePage0, int32_t ___windowsCodePage1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		int32_t L_1 = ___windowsCodePage1;
		MonoEncoding__ctor_m4137C39A886F1FB7F6783AECC056F3D42742A9D4(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetByteCount_mDEB2787075D427F035FE1AAC64B29C87CDD37B80 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___chars0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetByteCount_mDEB2787075D427F035FE1AAC64B29C87CDD37B80_RuntimeMethod_var)));
	}

IL_0011:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___index1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_0021:
	{
		String_t* L_5;
		L_5 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetByteCount_mDEB2787075D427F035FE1AAC64B29C87CDD37B80_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ___chars0;
		NullCheck(L_10);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		String_t* L_11;
		L_11 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_12 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetByteCount_mDEB2787075D427F035FE1AAC64B29C87CDD37B80_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_13 = ___count2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)2)));
		V_0 = L_14;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___chars0;
		int32_t L_16 = ___index1;
		int32_t L_17 = ___count2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_0;
		int32_t L_19;
		L_19 = VirtFuncInvoker5< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(24 /* System.Int32 I18N.Common.MonoEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_15, L_16, L_17, L_18, 0);
		return L_19;
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetCharCount_m9B41BC057C966DD9997F3C0FDDC451121FE652A2 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetCharCount_m9B41BC057C966DD9997F3C0FDDC451121FE652A2_RuntimeMethod_var)));
	}

IL_0011:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___index1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_0021:
	{
		String_t* L_5;
		L_5 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetCharCount_m9B41BC057C966DD9997F3C0FDDC451121FE652A2_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___bytes0;
		NullCheck(L_10);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		String_t* L_11;
		L_11 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_12 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetCharCount_m9B41BC057C966DD9997F3C0FDDC451121FE652A2_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_13 = ___count2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_14 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_0 = L_14;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___bytes0;
		int32_t L_16 = ___index1;
		int32_t L_17 = ___count2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = V_0;
		int32_t L_19;
		L_19 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(33 /* System.Int32 I18N.CJK.DbcsEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, __this, L_15, L_16, L_17, L_18, 0);
		return L_19;
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetChars_mBFE3305B3788E6ADB1F123F39EAB830C9A800693 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_mBFE3305B3788E6ADB1F123F39EAB830C9A800693_RuntimeMethod_var)));
	}

IL_0011:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___chars3;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_mBFE3305B3788E6ADB1F123F39EAB830C9A800693_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_4 = ___byteIndex1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = ___byteIndex1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0048;
		}
	}

IL_0033:
	{
		String_t* L_7;
		L_7 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral135BCD65E52CDAFB4FCF5E6C49A413A0CB794D3B)), L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_mBFE3305B3788E6ADB1F123F39EAB830C9A800693_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_9 = ___byteCount2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_10 = ___byteIndex1;
		int32_t L_11 = ___byteCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_006f;
		}
	}

IL_005a:
	{
		String_t* L_13;
		L_13 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_14 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C)), L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_mBFE3305B3788E6ADB1F123F39EAB830C9A800693_RuntimeMethod_var)));
	}

IL_006f:
	{
		int32_t L_15 = ___charIndex4;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_16 = ___charIndex4;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = ___chars3;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0097;
		}
	}

IL_0082:
	{
		String_t* L_18;
		L_18 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_19 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAAD91FE754F32DC76537C154682A89C05C27E0F3)), L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetChars_mBFE3305B3788E6ADB1F123F39EAB830C9A800693_RuntimeMethod_var)));
	}

IL_0097:
	{
		return 0;
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetMaxByteCount_m5C4A8F1FBFF1A6315F94107FA01BCDE1FEAAEFA8 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, int32_t ___charCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___charCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1;
		L_1 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AA99C92BB9065939AEAB82DCEAAB6CEE49FA2FB)), L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetMaxByteCount_m5C4A8F1FBFF1A6315F94107FA01BCDE1FEAAEFA8_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_3 = ___charCount0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2));
	}
}
// System.Int32 I18N.CJK.DbcsEncoding::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DbcsEncoding_GetMaxCharCount_mD4C83320CAB0B92E046E9661DDAB75F89B777DE1 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, int32_t ___byteCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___byteCount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1;
		L_1 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A2086AE6565AD627CF8A222FE831AB6F72ECCFF)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C)), L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsEncoding_GetMaxCharCount_mD4C83320CAB0B92E046E9661DDAB75F89B777DE1_RuntimeMethod_var)));
	}

IL_001c:
	{
		int32_t L_3 = ___byteCount0;
		return L_3;
	}
}
// System.Boolean I18N.CJK.DbcsEncoding::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbcsEncoding_get_IsBrowserDisplay_m1A73CD821EEEA6FA6D349E8E660DBC24D581ED7B (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.DbcsEncoding::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbcsEncoding_get_IsBrowserSave_mB148325D0AAA17CF02F0ACC5A433E96A0A00B735 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.DbcsEncoding::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbcsEncoding_get_IsMailNewsDisplay_m47AD2AD10BEE3269231E074F788152865344DCB8 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.DbcsEncoding::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbcsEncoding_get_IsMailNewsSave_m4EFC7942E25A2C6E0ABA9238E28CCFC33DBD2043 (DbcsEncoding_t5F72FEA752DDFC13B6B4F7305B8E84D8E474F60A * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ENCbig5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCbig5__ctor_m3BD24DF9BC488AC6452B11D4BBB5E04741C83994 (ENCbig5_tB34608E96D846F17EE93A35DE32EDA09EC7EAC31 * __this, const RuntimeMethod* method)
{
	{
		CP950__ctor_m85E054D527E1A86AAEF3DC944E037ACB60302880(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ENCeuc_jp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCeuc_jp__ctor_m772574EDB113580E09CE6AF463D165C3BE3C962A (ENCeuc_jp_t82C28EC09DD3250FC2CE7700A1CA7417E5F09183 * __this, const RuntimeMethod* method)
{
	{
		CP51932__ctor_m10A7B6101DF46CCDF7A9CE8A4CAA2788249ECAF9(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ENCeuc_kr::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCeuc_kr__ctor_m97DA8AE0EB7D93C0D8BC90329A52ABFAD709C54D (ENCeuc_kr_tB779B629D3248F1DFD7A2E5995985C39B8D97498 * __this, const RuntimeMethod* method)
{
	{
		CP51949__ctor_m3E5966DE8C41657BA01313B107D5F49AD0DC6DB1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ENCgb18030::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCgb18030__ctor_mD531839B6BF6378911D40455FA7C25011CAB9979 (ENCgb18030_t180F08CF4FA7800256E1EF5822C5DAE5D759295A * __this, const RuntimeMethod* method)
{
	{
		GB18030Encoding__ctor_mB8C46AEF3E3684B1D87B9F40EBB2ABF2BBC0BFCD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ENCgb2312::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCgb2312__ctor_mFF6975B6294916F1FCB376CAF4E7D03F6A36D5CE (ENCgb2312_tEAF995FB21436CA68951B9D06A7177899971EBC1 * __this, const RuntimeMethod* method)
{
	{
		CP936__ctor_m963F589B4F6242936CAD31E5BB2556E1815F6121(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ENCiso_2022_jp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCiso_2022_jp__ctor_m38F6DC643C8CF5AF069D07A8F2C8B6961F42962C (ENCiso_2022_jp_tCEC624FA06E438B99588343B3FA56A54095A6375 * __this, const RuntimeMethod* method)
{
	{
		CP50220__ctor_m1A8FD18AF5E9AA9CFBF9993A0092646013E5B2AF(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ENCshift_jis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCshift_jis__ctor_m23AC9170173C644434676202A4E356B7835E42ED (ENCshift_jis_tE119EBC5618514E6305CBE452D60DE43B316453C * __this, const RuntimeMethod* method)
{
	{
		CP932__ctor_m73C25E105E86736A0A3A878CC9F945F4D70DAEBE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ENCuhc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ENCuhc__ctor_mB5F1E86D61C817A696EC381C9DA170104E6EDF85 (ENCuhc_tCF31710652D905EDF1677E029390C80700565395 * __this, const RuntimeMethod* method)
{
	{
		CP949__ctor_m8CA9918E15557EB30901234899DDD8E3DB7E0E10(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.GB18030Decoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Decoder__ctor_m0DF91F60C0492711E410921A9B3AB1E7C50B5949 (GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 * __this, const RuntimeMethod* method)
{
	{
		DbcsDecoder__ctor_mBC4EBD2874BECCC0EBE1D8A5AB28B7200F031CC6(__this, (DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.CJK.GB18030Decoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Decoder__cctor_mE863A73B863A939EF68D8662C4213C403BF7E764 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = ((DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var))->get_Gb2312_2();
		((GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var))->set_gb2312_3(L_0);
		return;
	}
}
// System.Int32 I18N.CJK.GB18030Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Decoder_GetCharCount_m1220514110C2EB663139D5DB3176202C315A644A (GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int64_t V_3 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___len2;
		DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___start1;
		int32_t L_4 = ___len2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		V_1 = 0;
		goto IL_011f;
	}

IL_0014:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bytes0;
		int32_t L_6 = ___start1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)128))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		goto IL_011f;
	}

IL_002f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___bytes0;
		int32_t L_12 = ___start1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		goto IL_011f;
	}

IL_004a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___bytes0;
		int32_t L_18 = ___start1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		int32_t L_22 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		goto IL_011f;
	}

IL_0065:
	{
		int32_t L_23 = ___start1;
		int32_t L_24 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))) < ((int32_t)L_24)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		goto IL_0126;
	}

IL_0077:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = ___bytes0;
		int32_t L_27 = ___start1;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_2 = L_29;
		uint8_t L_30 = V_2;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)127))))
		{
			goto IL_0090;
		}
	}
	{
		uint8_t L_31 = V_2;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_009e;
		}
	}

IL_0090:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		int32_t L_33 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)2));
		goto IL_011f;
	}

IL_009e:
	{
		uint8_t L_34 = V_2;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_34)))
		{
			goto IL_0116;
		}
	}
	{
		uint8_t L_35 = V_2;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)57))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_36 = ___start1;
		int32_t L_37 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)3))) < ((int32_t)L_37)))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_38 = V_1;
		int32_t L_39 = ___start1;
		int32_t L_40 = V_0;
		G_B16_0 = L_38;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)3))) == ((uint32_t)L_40))))
		{
			G_B17_0 = L_38;
			goto IL_00c7;
		}
	}
	{
		G_B18_0 = 3;
		G_B18_1 = G_B16_0;
		goto IL_00c8;
	}

IL_00c7:
	{
		G_B18_0 = 2;
		G_B18_1 = G_B17_0;
	}

IL_00c8:
	{
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)G_B18_1, (int32_t)G_B18_0));
		goto IL_0126;
	}

IL_00cf:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = ___bytes0;
		int32_t L_42 = ___start1;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_43;
		L_43 = GB18030Source_FromGBX_mA8AE20EB1573F242DDFA854A5742D0838BE9E163(L_41, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		int64_t L_44 = V_3;
		if ((((int64_t)L_44) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		int32_t L_46 = ___start1;
		int64_t L_47 = V_3;
		___start1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)((int32_t)L_47))));
		goto IL_0111;
	}

IL_00ee:
	{
		int64_t L_48 = V_3;
		if ((((int64_t)L_48) < ((int64_t)((int64_t)((int64_t)((int32_t)65536))))))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)2));
		int32_t L_50 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)4));
		goto IL_0111;
	}

IL_0108:
	{
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		int32_t L_52 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)4));
	}

IL_0111:
	{
		goto IL_011f;
	}

IL_0116:
	{
		int32_t L_53 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)2));
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_011f:
	{
		int32_t L_55 = ___start1;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0014;
		}
	}

IL_0126:
	{
		int32_t L_57 = V_1;
		return L_57;
	}
}
// System.Int32 I18N.CJK.GB18030Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Decoder_GetChars_m03B33532DE3A2BE4EC37F2EFF404AA22A1B671EE (GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int64_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	int32_t G_B26_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___byteIndex1;
		int32_t L_6 = ___byteCount2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
		int32_t L_7 = ___charIndex4;
		V_1 = L_7;
		goto IL_01fe;
	}

IL_0019:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___bytes0;
		int32_t L_9 = ___byteIndex1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)128))))
		{
			goto IL_003e;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = ___chars3;
		int32_t L_13 = ___charIndex4;
		int32_t L_14 = L_13;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = ___bytes0;
		int32_t L_16 = ___byteIndex1;
		int32_t L_17 = L_16;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Il2CppChar)((int32_t)((uint16_t)L_19)));
		goto IL_01fe;
	}

IL_003e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ___bytes0;
		int32_t L_21 = ___byteIndex1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0064;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = ___chars3;
		int32_t L_25 = ___charIndex4;
		int32_t L_26 = L_25;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)((int32_t)8364));
		int32_t L_27 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		goto IL_01fe;
	}

IL_0064:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ___bytes0;
		int32_t L_29 = ___byteIndex1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0087;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_32 = ___chars3;
		int32_t L_33 = ___charIndex4;
		int32_t L_34 = L_33;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Il2CppChar)((int32_t)63));
		int32_t L_35 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		goto IL_01fe;
	}

IL_0087:
	{
		int32_t L_36 = ___byteIndex1;
		int32_t L_37 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1))) < ((int32_t)L_37)))
		{
			goto IL_0095;
		}
	}
	{
		goto IL_0205;
	}

IL_0095:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = ___bytes0;
		int32_t L_39 = ___byteIndex1;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_2 = L_41;
		uint8_t L_42 = V_2;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)127))))
		{
			goto IL_00ae;
		}
	}
	{
		uint8_t L_43 = V_2;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00c4;
		}
	}

IL_00ae:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_44 = ___chars3;
		int32_t L_45 = ___charIndex4;
		int32_t L_46 = L_45;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Il2CppChar)((int32_t)63));
		int32_t L_47 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		goto IL_01fe;
	}

IL_00c4:
	{
		uint8_t L_48 = V_2;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_48)))
		{
			goto IL_0172;
		}
	}
	{
		uint8_t L_49 = V_2;
		if ((((int32_t)L_49) > ((int32_t)((int32_t)57))))
		{
			goto IL_0172;
		}
	}
	{
		int32_t L_50 = ___byteIndex1;
		int32_t L_51 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)3))) < ((int32_t)L_51)))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0205;
	}

IL_00e2:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = ___bytes0;
		int32_t L_53 = ___byteIndex1;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_54;
		L_54 = GB18030Source_FromGBX_mA8AE20EB1573F242DDFA854A5742D0838BE9E163(L_52, L_53, /*hidden argument*/NULL);
		V_3 = L_54;
		int64_t L_55 = V_3;
		if ((((int64_t)L_55) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0109;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_56 = ___chars3;
		int32_t L_57 = ___charIndex4;
		int32_t L_58 = L_57;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (Il2CppChar)((int32_t)63));
		int32_t L_59 = ___byteIndex1;
		int64_t L_60 = V_3;
		___byteIndex1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)((int32_t)((int32_t)L_60))));
		goto IL_016d;
	}

IL_0109:
	{
		int64_t L_61 = V_3;
		if ((((int64_t)L_61) < ((int64_t)((int64_t)((int64_t)((int32_t)65536))))))
		{
			goto IL_015c;
		}
	}
	{
		int64_t L_62 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_62, (int64_t)((int64_t)((int64_t)((int32_t)65536)))));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_63 = ___chars3;
		int32_t L_64 = ___charIndex4;
		int32_t L_65 = L_64;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		int64_t L_66 = V_3;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (Il2CppChar)((int32_t)((uint16_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_66/(int64_t)((int64_t)((int64_t)((int32_t)1024))))), (int64_t)((int64_t)((int64_t)((int32_t)55296))))))));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_67 = ___chars3;
		int32_t L_68 = ___charIndex4;
		int32_t L_69 = L_68;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
		int64_t L_70 = V_3;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (Il2CppChar)((int32_t)((uint16_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_70%(int64_t)((int64_t)((int64_t)((int32_t)1024))))), (int64_t)((int64_t)((int64_t)((int32_t)56320))))))));
		int32_t L_71 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)4));
		goto IL_016d;
	}

IL_015c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_72 = ___chars3;
		int32_t L_73 = ___charIndex4;
		int32_t L_74 = L_73;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		int64_t L_75 = V_3;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (Il2CppChar)((int32_t)((uint16_t)L_75)));
		int32_t L_76 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)4));
	}

IL_016d:
	{
		goto IL_01fe;
	}

IL_0172:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_77 = ___bytes0;
		int32_t L_78 = ___byteIndex1;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint8_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_4 = L_80;
		uint8_t L_81 = V_4;
		uint8_t L_82 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)((int32_t)129))), (int32_t)((int32_t)191))), (int32_t)L_82)), (int32_t)((int32_t)64))), (int32_t)2));
		int32_t L_83 = V_5;
		if ((((int32_t)L_83) < ((int32_t)0)))
		{
			goto IL_01a9;
		}
	}
	{
		int32_t L_84 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_85 = ((GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_85);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = L_85->get_n2u_0();
		NullCheck(L_86);
		if ((((int32_t)L_84) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_86)->max_length))))))
		{
			goto IL_01af;
		}
	}

IL_01a9:
	{
		G_B26_0 = 0;
		goto IL_01d3;
	}

IL_01af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_87 = ((GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_87);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = L_87->get_n2u_0();
		int32_t L_89 = V_5;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_92 = ((GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_92);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_93 = L_92->get_n2u_0();
		int32_t L_94 = V_5;
		NullCheck(L_93);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		uint8_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		G_B26_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_96, (int32_t)((int32_t)256)))))));
	}

IL_01d3:
	{
		V_6 = G_B26_0;
		Il2CppChar L_97 = V_6;
		if (L_97)
		{
			goto IL_01ed;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_98 = ___chars3;
		int32_t L_99 = ___charIndex4;
		int32_t L_100 = L_99;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (Il2CppChar)((int32_t)63));
		goto IL_01f9;
	}

IL_01ed:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_101 = ___chars3;
		int32_t L_102 = ___charIndex4;
		int32_t L_103 = L_102;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		Il2CppChar L_104 = V_6;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (Il2CppChar)L_104);
	}

IL_01f9:
	{
		int32_t L_105 = ___byteIndex1;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)2));
	}

IL_01fe:
	{
		int32_t L_106 = ___byteIndex1;
		int32_t L_107 = V_0;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_0019;
		}
	}

IL_0205:
	{
		int32_t L_108 = ___charIndex4;
		int32_t L_109 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_108, (int32_t)L_109));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.GB18030Encoder::.ctor(I18N.Common.MonoEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoder__ctor_m6D7F339BCC3712401B668E4BDAD440558C80A09A (GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 * __this, MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * ___owner0, const RuntimeMethod* method)
{
	{
		MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * L_0 = ___owner0;
		MonoEncoder__ctor_m423C2CB5857B6488AB19586D9E66BF2646CC3E78(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.CJK.GB18030Encoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoder__cctor_mD00AF2B095545EBD5009C79876D53252CEA216C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = ((DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var))->get_Gb2312_2();
		((GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var))->set_gb2312_3(L_0);
		return;
	}
}
// System.Int32 I18N.CJK.GB18030Encoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoder_GetByteCountImpl_mD13DAF0FB9ED42B46ACA334A9BE6206AC3B45F7E (GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 * __this, Il2CppChar* ___chars0, int32_t ___count1, bool ___refresh2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	int64_t V_6 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___count1;
		V_1 = L_0;
		V_2 = 0;
		goto IL_00dd;
	}

IL_000b:
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = V_0;
		int32_t L_3 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2)))));
		V_3 = L_3;
		Il2CppChar L_4 = V_3;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)128))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		goto IL_00dd;
	}

IL_002a:
	{
		Il2CppChar L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))) == ((uint32_t)L_10))))
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_11 = V_3;
		__this->set_incomplete_byte_count_4(L_11);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_0056;
	}

IL_004e:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)4));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2));
	}

IL_0056:
	{
		goto IL_00dd;
	}

IL_005b:
	{
		Il2CppChar L_15 = V_3;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)128))))
		{
			goto IL_0071;
		}
	}
	{
		Il2CppChar L_16 = V_3;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_007e;
		}
	}

IL_0071:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		goto IL_00dd;
	}

IL_007e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_19 = ((GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_19);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = L_19->get_u2n_1();
		Il2CppChar L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)2)), (int32_t)1));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = L_23;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_24 = ((GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = L_24->get_u2n_1();
		Il2CppChar L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)2));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		uint8_t L_29 = V_4;
		if (!L_29)
		{
			goto IL_00bb;
		}
	}
	{
		uint8_t L_30 = V_5;
		if (!L_30)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)2));
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		goto IL_00dd;
	}

IL_00bb:
	{
		Il2CppChar L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_34;
		L_34 = GB18030Source_FromUCS_m1BAEB0481B70F612777C294088C5DD96CC7232FD(L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int64_t L_35 = V_6;
		if ((((int64_t)L_35) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		goto IL_00d9;
	}

IL_00d5:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)4));
	}

IL_00d9:
	{
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00dd:
	{
		int32_t L_39 = V_0;
		int32_t L_40 = V_1;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_000b;
		}
	}
	{
		bool L_41 = ___refresh2;
		if (!L_41)
		{
			goto IL_0100;
		}
	}
	{
		Il2CppChar L_42 = __this->get_incomplete_byte_count_4();
		if (!L_42)
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00f9:
	{
		__this->set_incomplete_byte_count_4(0);
	}

IL_0100:
	{
		int32_t L_44 = V_2;
		return L_44;
	}
}
// System.Int32 I18N.CJK.GB18030Encoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoder_GetBytesImpl_m3D8EE90B434E5B449335F7672DA393679923B346 (GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___refresh4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	int64_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		int32_t L_0 = V_0;
		int32_t L_1 = ___charCount1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_1;
		V_3 = L_2;
		Il2CppChar L_3 = __this->get_incomplete_bytes_5();
		V_4 = L_3;
		goto IL_0176;
	}

IL_0017:
	{
		Il2CppChar L_4 = __this->get_incomplete_bytes_5();
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppChar* L_5 = ___chars0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		int32_t L_8 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)2)))));
		V_4 = L_8;
		goto IL_003a;
	}

IL_0033:
	{
		__this->set_incomplete_bytes_5(0);
	}

IL_003a:
	{
		Il2CppChar L_9 = V_4;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0056;
		}
	}
	{
		uint8_t* L_10 = ___bytes2;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		Il2CppChar L_13 = V_4;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)L_12))) = (int8_t)((int32_t)((uint8_t)L_13));
		goto IL_0176;
	}

IL_0056:
	{
		Il2CppChar L_14 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0076;
		}
	}
	{
		Il2CppChar L_18 = V_4;
		__this->set_incomplete_bytes_5(L_18);
		goto IL_017d;
	}

IL_0076:
	{
		Il2CppChar* L_19 = ___chars0;
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		int32_t L_22 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)2)))));
		V_5 = L_22;
		Il2CppChar L_23 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Char_IsSurrogate_mDE2EA47FEF5F4816C883C5FF7DA85364025B5CDE(L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00a3;
		}
	}
	{
		Il2CppChar* L_25 = ___chars0;
		uint8_t* L_26 = ___bytes2;
		MonoEncoder_HandleFallback_mC50D10FC0AF4745C0FDC3066B7B35F4266D9B68F(__this, (Il2CppChar*)(Il2CppChar*)L_25, (int32_t*)(&V_0), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_26, (int32_t*)(&V_1), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		goto IL_0176;
	}

IL_00a3:
	{
		Il2CppChar L_27 = V_4;
		Il2CppChar L_28 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)55296))), (int32_t)((int32_t)1024))), (int32_t)L_28)), (int32_t)((int32_t)56320)));
		uint8_t* L_29 = ___bytes2;
		int32_t L_30 = V_1;
		int32_t L_31 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_32;
		L_32 = GB18030Source_FromUCSSurrogate_m02AB46DF447796C0391FD2811E192F1B56844D03(L_31, /*hidden argument*/NULL);
		GB18030Source_Unlinear_m172B574A53E492539FBEFB5C697E670D7F281C51((uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, (int32_t)L_30)), L_32, /*hidden argument*/NULL);
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)4));
		goto IL_0176;
	}

IL_00d4:
	{
		Il2CppChar L_34 = V_4;
		if ((((int32_t)L_34) <= ((int32_t)((int32_t)128))))
		{
			goto IL_00ec;
		}
	}
	{
		Il2CppChar L_35 = V_4;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00fc;
		}
	}

IL_00ec:
	{
		uint8_t* L_36 = ___bytes2;
		int32_t L_37 = V_1;
		int32_t L_38 = L_37;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		Il2CppChar L_39 = V_4;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, (int32_t)L_38))) = (int8_t)((int32_t)((uint8_t)L_39));
		goto IL_0176;
	}

IL_00fc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_40 = ((GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_40);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = L_40->get_u2n_1();
		Il2CppChar L_42 = V_4;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2)), (int32_t)1));
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = L_44;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_45 = ((GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var))->get_gb2312_3();
		NullCheck(L_45);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = L_45->get_u2n_1();
		Il2CppChar L_47 = V_4;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_47, (int32_t)2));
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_8 = L_49;
		uint8_t L_50 = V_7;
		if (!L_50)
		{
			goto IL_0147;
		}
	}
	{
		uint8_t L_51 = V_8;
		if (!L_51)
		{
			goto IL_0147;
		}
	}
	{
		uint8_t* L_52 = ___bytes2;
		int32_t L_53 = V_1;
		int32_t L_54 = L_53;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		uint8_t L_55 = V_7;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_52, (int32_t)L_54))) = (int8_t)L_55;
		uint8_t* L_56 = ___bytes2;
		int32_t L_57 = V_1;
		int32_t L_58 = L_57;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		uint8_t L_59 = V_8;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_56, (int32_t)L_58))) = (int8_t)L_59;
		goto IL_0176;
	}

IL_0147:
	{
		Il2CppChar L_60 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_61;
		L_61 = GB18030Source_FromUCS_m1BAEB0481B70F612777C294088C5DD96CC7232FD(L_60, /*hidden argument*/NULL);
		V_9 = L_61;
		int64_t L_62 = V_9;
		if ((((int64_t)L_62) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0168;
		}
	}
	{
		uint8_t* L_63 = ___bytes2;
		int32_t L_64 = V_1;
		int32_t L_65 = L_64;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, (int32_t)L_65))) = (int8_t)((int32_t)63);
		goto IL_0176;
	}

IL_0168:
	{
		uint8_t* L_66 = ___bytes2;
		int32_t L_67 = V_1;
		int64_t L_68 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		GB18030Source_Unlinear_m172B574A53E492539FBEFB5C697E670D7F281C51((uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_66, (int32_t)L_67)), L_68, /*hidden argument*/NULL);
		int32_t L_69 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)4));
	}

IL_0176:
	{
		int32_t L_70 = V_0;
		int32_t L_71 = V_2;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_0017;
		}
	}

IL_017d:
	{
		bool L_72 = ___refresh4;
		if (!L_72)
		{
			goto IL_01a0;
		}
	}
	{
		Il2CppChar L_73 = __this->get_incomplete_bytes_5();
		if (!L_73)
		{
			goto IL_0199;
		}
	}
	{
		uint8_t* L_74 = ___bytes2;
		int32_t L_75 = V_1;
		int32_t L_76 = L_75;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_74, (int32_t)L_76))) = (int8_t)((int32_t)63);
	}

IL_0199:
	{
		__this->set_incomplete_bytes_5(0);
	}

IL_01a0:
	{
		int32_t L_77 = V_1;
		int32_t L_78 = V_3;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)L_78));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.GB18030Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Encoding__ctor_mB8C46AEF3E3684B1D87B9F40EBB2ABF2BBC0BFCD (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	{
		MonoEncoding__ctor_m4137C39A886F1FB7F6783AECC056F3D42742A9D4(__this, ((int32_t)54936), ((int32_t)936), /*hidden argument*/NULL);
		return;
	}
}
// System.String I18N.CJK.GB18030Encoding::get_EncodingName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GB18030Encoding_get_EncodingName_m552E13E541D89B65A5AB0F4F3C3FEE2ACE86A7AF (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A8569669CE3C1A1791A0C7468C4370B4C4FA95);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC7A8569669CE3C1A1791A0C7468C4370B4C4FA95;
	}
}
// System.String I18N.CJK.GB18030Encoding::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GB18030Encoding_get_HeaderName_mA9DEFF88F8F51C03D434E685E69485B227731E40 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB;
	}
}
// System.String I18N.CJK.GB18030Encoding::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GB18030Encoding_get_BodyName_m7C85C2069DC450C2F24457915CBA349FD11F13C8 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB;
	}
}
// System.String I18N.CJK.GB18030Encoding::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GB18030Encoding_get_WebName_mCBB74C97DCBC16F4C1194BB41FFC19A0CB59584E (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0E5900473DAE968E1F4600CC48CBEEB2AEF5AEDB;
	}
}
// System.Boolean I18N.CJK.GB18030Encoding::get_IsMailNewsDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GB18030Encoding_get_IsMailNewsDisplay_m7F0A131C159B2A27AB6D239D56577EBD7D220BE1 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.GB18030Encoding::get_IsMailNewsSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GB18030Encoding_get_IsMailNewsSave_m84430F06546E29EFD2E3ACFEC393B965A58EA1F8 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.GB18030Encoding::get_IsBrowserDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GB18030Encoding_get_IsBrowserDisplay_m0965E78E25766372CF927105B33BB25DA15E9B49 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean I18N.CJK.GB18030Encoding::get_IsBrowserSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GB18030Encoding_get_IsBrowserSave_m32B008FCCC72D24B3495CF32CE2EEEB41E24DBAC (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetMaxByteCount_m17460C566A752C5FC143673519DC5534CF5B416D (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, int32_t ___len0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___len0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)4));
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetMaxCharCount_m4B9548DA199E838057F6796480829DB48AD01CED (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, int32_t ___len0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___len0;
		return L_0;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetByteCount_mA55B5F461F8C8CA180B4AAB6170A126C3D21F4DC (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 * L_0 = (GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 *)il2cpp_codegen_object_new(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		GB18030Encoder__ctor_m6D7F339BCC3712401B668E4BDAD440558C80A09A(L_0, __this, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___chars0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker4< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, bool >::Invoke(5 /* System.Int32 I18N.Common.MonoEncoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3, (bool)1);
		return L_4;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetByteCountImpl_m463BD9C31EC72396B87B72C2FD34226BAB928472 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 * L_0 = (GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 *)il2cpp_codegen_object_new(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		GB18030Encoder__ctor_m6D7F339BCC3712401B668E4BDAD440558C80A09A(L_0, __this, /*hidden argument*/NULL);
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___count1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtFuncInvoker3< int32_t, Il2CppChar*, int32_t, bool >::Invoke(9 /* System.Int32 I18N.CJK.GB18030Encoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean) */, L_0, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (bool)1);
		return L_3;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetBytesImpl_m18E6291C7D199E21A3C62575807F7B535F445050 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 * L_0 = (GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 *)il2cpp_codegen_object_new(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		GB18030Encoder__ctor_m6D7F339BCC3712401B668E4BDAD440558C80A09A(L_0, __this, /*hidden argument*/NULL);
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = ___charCount1;
		uint8_t* L_3 = ___bytes2;
		int32_t L_4 = ___byteCount3;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtFuncInvoker5< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t, bool >::Invoke(10 /* System.Int32 I18N.CJK.GB18030Encoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean) */, L_0, (Il2CppChar*)(Il2CppChar*)L_1, L_2, (uint8_t*)(uint8_t*)L_3, L_4, (bool)1);
		return L_5;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetCharCount_mC47801202A8B919445654744560F1260D38E2770 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 * L_0 = (GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 *)il2cpp_codegen_object_new(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		GB18030Decoder__ctor_m0DF91F60C0492711E410921A9B3AB1E7C50B5949(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___start1;
		int32_t L_3 = ___len2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(5 /* System.Int32 I18N.CJK.GB18030Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 I18N.CJK.GB18030Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Encoding_GetChars_mA39218EDB6B1C37F8946DF836F21C717BC4C098C (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIdx1, int32_t ___srclen2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIdx4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 * L_0 = (GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 *)il2cpp_codegen_object_new(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		GB18030Decoder__ctor_m0DF91F60C0492711E410921A9B3AB1E7C50B5949(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIdx1;
		int32_t L_3 = ___srclen2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIdx4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 I18N.CJK.GB18030Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Text.Encoder I18N.CJK.GB18030Encoding::GetEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * GB18030Encoding_GetEncoder_m92E28435E32448539FBF8FB06B841EB6EDE984F0 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 * L_0 = (GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452 *)il2cpp_codegen_object_new(GB18030Encoder_tA6BB7662F2F23AF0762576BC15CB355C61BC6452_il2cpp_TypeInfo_var);
		GB18030Encoder__ctor_m6D7F339BCC3712401B668E4BDAD440558C80A09A(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.Decoder I18N.CJK.GB18030Encoding::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * GB18030Encoding_GetDecoder_mD60C2DE0E2079B156F63BEBE889BAD9FC0625B79 (GB18030Encoding_t0BAE57371BE6DDF6C672AF1A8B34918FB3F035BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 * L_0 = (GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64 *)il2cpp_codegen_object_new(GB18030Decoder_t074EF3CC2D3FD1D97B2782CFEF2A6ECA6F7A4D64_il2cpp_TypeInfo_var);
		GB18030Decoder__ctor_m0DF91F60C0492711E410921A9B3AB1E7C50B5949(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.GB18030Source::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source__ctor_m101949071530490DAA384834AC62075B93FD5F24 (GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.CJK.GB18030Source::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source__cctor_m3B48294B24D8870A6A00E2A6E38360818C382CFC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assembly_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source__cctor_m3B48294B24D8870A6A00E2A6E38360818C382CFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19AF67277280509C9DA28ED8F1A254429648F4CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C0852A35F5B2C09467F4C96BBE883A402D2C15A);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	int32_t V_1 = 0;
	Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int64_t L_0;
		L_0 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)129), (uint8_t)((int32_t)48), (uint8_t)((int32_t)129), (uint8_t)((int32_t)48), (bool)0, /*hidden argument*/NULL);
		((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->set_gbxBase_4(L_0);
		int64_t L_1;
		L_1 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)144), (uint8_t)((int32_t)48), (uint8_t)((int32_t)129), (uint8_t)((int32_t)48), (bool)0, /*hidden argument*/NULL);
		((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->set_gbxSuppBase_5(L_1);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_2 = (GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9*)(GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9*)SZArrayNew(GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_3 = L_2;
		int64_t L_4;
		L_4 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)129), (uint8_t)((int32_t)48), (uint8_t)((int32_t)211), (uint8_t)((int32_t)48), (bool)0, /*hidden argument*/NULL);
		int64_t L_5;
		L_5 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)129), (uint8_t)((int32_t)54), (uint8_t)((int32_t)165), (uint8_t)((int32_t)49), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_6 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_6, ((int32_t)1106), ((int32_t)8207), L_4, L_5, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_6);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_7 = L_3;
		int64_t L_8;
		L_8 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)129), (uint8_t)((int32_t)55), (uint8_t)((int32_t)168), (uint8_t)((int32_t)57), (bool)0, /*hidden argument*/NULL);
		int64_t L_9;
		L_9 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)129), (uint8_t)((int32_t)56), (uint8_t)((int32_t)253), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_10 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_10, ((int32_t)9795), ((int32_t)11904), L_8, L_9, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_10);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_11 = L_7;
		int64_t L_12;
		L_12 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)48), (uint8_t)((int32_t)166), (uint8_t)((int32_t)51), (bool)0, /*hidden argument*/NULL);
		int64_t L_13;
		L_13 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)48), (uint8_t)((int32_t)242), (uint8_t)((int32_t)55), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_14 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_14, ((int32_t)13851), ((int32_t)14615), L_12, L_13, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_14);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_15 = L_11;
		int64_t L_16;
		L_16 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)49), (uint8_t)((int32_t)212), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		int64_t L_17;
		L_17 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)50), (uint8_t)((int32_t)175), (uint8_t)((int32_t)50), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_18 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_18, ((int32_t)15585), ((int32_t)16469), L_16, L_17, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_18);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_19 = L_15;
		int64_t L_20;
		L_20 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)50), (uint8_t)((int32_t)201), (uint8_t)((int32_t)55), (bool)0, /*hidden argument*/NULL);
		int64_t L_21;
		L_21 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)50), (uint8_t)((int32_t)248), (uint8_t)((int32_t)55), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_22 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_22, ((int32_t)16736), ((int32_t)17206), L_20, L_21, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_22);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_23 = L_19;
		int64_t L_24;
		L_24 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)51), (uint8_t)((int32_t)163), (uint8_t)((int32_t)57), (bool)0, /*hidden argument*/NULL);
		int64_t L_25;
		L_25 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)51), (uint8_t)((int32_t)201), (uint8_t)((int32_t)49), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_26 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_26, ((int32_t)17623), ((int32_t)17995), L_24, L_25, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_26);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_27 = L_23;
		int64_t L_28;
		L_28 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)51), (uint8_t)((int32_t)232), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		int64_t L_29;
		L_29 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)52), (uint8_t)((int32_t)150), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_30 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_30, ((int32_t)18318), ((int32_t)18758), L_28, L_29, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_30);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_31 = L_27;
		int64_t L_32;
		L_32 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)52), (uint8_t)((int32_t)161), (uint8_t)((int32_t)49), (bool)0, /*hidden argument*/NULL);
		int64_t L_33;
		L_33 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)52), (uint8_t)((int32_t)231), (uint8_t)((int32_t)51), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_34 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_34, ((int32_t)18872), ((int32_t)19574), L_32, L_33, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(7), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_34);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_35 = L_31;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_36 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_36, ((int32_t)19968), ((int32_t)40869), ((int64_t)((int64_t)0)), ((int64_t)((int64_t)0)), (bool)1, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(8), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_36);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_37 = L_35;
		int64_t L_38;
		L_38 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)130), (uint8_t)((int32_t)53), (uint8_t)((int32_t)143), (uint8_t)((int32_t)51), (bool)0, /*hidden argument*/NULL);
		int64_t L_39;
		L_39 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)131), (uint8_t)((int32_t)54), (uint8_t)((int32_t)199), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_40 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_40, ((int32_t)40870), ((int32_t)55295), L_38, L_39, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_40);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_41 = L_37;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_42 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_42, ((int32_t)55296), ((int32_t)59243), ((int64_t)((int64_t)0)), ((int64_t)((int64_t)0)), (bool)1, /*hidden argument*/NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_42);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_43 = L_41;
		int64_t L_44;
		L_44 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)131), (uint8_t)((int32_t)54), (uint8_t)((int32_t)208), (uint8_t)((int32_t)48), (bool)0, /*hidden argument*/NULL);
		int64_t L_45;
		L_45 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)132), (uint8_t)((int32_t)48), (uint8_t)((int32_t)133), (uint8_t)((int32_t)52), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_46 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_46, ((int32_t)59493), ((int32_t)63787), L_44, L_45, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_46);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_47 = L_43;
		int64_t L_48;
		L_48 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)132), (uint8_t)((int32_t)48), (uint8_t)((int32_t)156), (uint8_t)((int32_t)56), (bool)0, /*hidden argument*/NULL);
		int64_t L_49;
		L_49 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)132), (uint8_t)((int32_t)49), (uint8_t)((int32_t)133), (uint8_t)((int32_t)55), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_50 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_50, ((int32_t)64042), ((int32_t)65071), L_48, L_49, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_50);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_51 = L_47;
		int64_t L_52;
		L_52 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)132), (uint8_t)((int32_t)49), (uint8_t)((int32_t)162), (uint8_t)((int32_t)52), (bool)0, /*hidden argument*/NULL);
		int64_t L_53;
		L_53 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6((uint8_t)((int32_t)132), (uint8_t)((int32_t)49), (uint8_t)((int32_t)164), (uint8_t)((int32_t)57), (bool)0, /*hidden argument*/NULL);
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_54 = (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)il2cpp_codegen_object_new(GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87_il2cpp_TypeInfo_var);
		GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66(L_54, ((int32_t)65510), ((int32_t)65535), L_52, L_53, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_54);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 *)L_54);
		((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->set_ranges_6(L_51);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Assembly_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		MethodInfo_t * L_57;
		L_57 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_56, _stringLiteral19AF67277280509C9DA28ED8F1A254429648F4CA, ((int32_t)36), /*hidden argument*/NULL);
		V_0 = L_57;
		V_1 = 0;
		V_2 = (Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 *)NULL;
		MethodInfo_t * L_58 = V_0;
		Assembly_t * L_59;
		L_59 = il2cpp_codegen_get_executing_assembly(GB18030Source__cctor_m3B48294B24D8870A6A00E2A6E38360818C382CFC_RuntimeMethod_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = L_60;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteral6C0852A35F5B2C09467F4C96BBE883A402D2C15A);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral6C0852A35F5B2C09467F4C96BBE883A402D2C15A);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_62 = L_61;
		int32_t L_63 = V_1;
		int32_t L_64 = L_63;
		RuntimeObject * L_65 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_64);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_65);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_65);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = L_62;
		Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * L_67 = V_2;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_67);
		NullCheck(L_58);
		RuntimeObject * L_68;
		L_68 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_58, L_59, L_66, /*hidden argument*/NULL);
		V_3 = (intptr_t)((*(intptr_t*)((intptr_t*)UnBox(L_68, IntPtr_t_il2cpp_TypeInfo_var))));
		intptr_t L_69 = V_3;
		bool L_70;
		L_70 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_69, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_041b;
		}
	}
	{
		intptr_t L_71 = V_3;
		void* L_72;
		L_72 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_71, /*hidden argument*/NULL);
		((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->set_gbx2uni_0((uint8_t*)L_72);
		uint8_t* L_73 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_74 = *((uint8_t*)L_73);
		uint8_t* L_75 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_76 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_75, (int32_t)1)));
		uint8_t* L_77 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_78 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, (int32_t)2)));
		uint8_t* L_79 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_80 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_79, (int32_t)3)));
		((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->set_gbx2uniSize_2(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_74<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_76<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_78<<(int32_t)8)))), (int32_t)L_80)));
		uint8_t* L_81 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->set_gbx2uni_0((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, (int32_t)4)));
		uint8_t* L_82 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_83 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbx2uniSize_2();
		((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->set_uni2gbx_1((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, (int32_t)L_83)));
		uint8_t* L_84 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_85 = *((uint8_t*)L_84);
		uint8_t* L_86 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_87 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_86, (int32_t)1)));
		uint8_t* L_88 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_89 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_88, (int32_t)2)));
		uint8_t* L_90 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_91 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_90, (int32_t)3)));
		((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->set_uni2gbxSize_3(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_85<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_87<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_89<<(int32_t)8)))), (int32_t)L_91)));
		uint8_t* L_92 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->set_uni2gbx_1((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_92, (int32_t)4)));
	}

IL_041b:
	{
		return;
	}
}
// System.Void I18N.CJK.GB18030Source::Unlinear(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source_Unlinear_m0B9D63FBF8BE96143E19370D83B8BFEF0BCBBBAC (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, int64_t ___gbx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uintptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		NullCheck(L_1);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		G_B4_0 = ((uintptr_t)0);
		goto IL_001c;
	}

IL_0015:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes0;
		NullCheck(L_2);
		G_B4_0 = ((uintptr_t)(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_001c:
	{
		V_0 = (uint8_t*)G_B4_0;
		uint8_t* L_3 = V_0;
		int32_t L_4 = ___start1;
		int64_t L_5 = ___gbx2;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		GB18030Source_Unlinear_m172B574A53E492539FBEFB5C697E670D7F281C51((uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4)), L_5, /*hidden argument*/NULL);
		V_0 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void I18N.CJK.GB18030Source::Unlinear(System.Byte*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Source_Unlinear_m172B574A53E492539FBEFB5C697E670D7F281C51 (uint8_t* ___bytes0, int64_t ___gbx1, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___bytes0;
		int64_t L_1 = ___gbx1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)3))) = (int8_t)((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_1%(int64_t)((int64_t)((int64_t)((int32_t)10))))), (int64_t)((int64_t)((int64_t)((int32_t)48)))))));
		int64_t L_2 = ___gbx1;
		___gbx1 = ((int64_t)((int64_t)L_2/(int64_t)((int64_t)((int64_t)((int32_t)10)))));
		uint8_t* L_3 = ___bytes0;
		int64_t L_4 = ___gbx1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)2))) = (int8_t)((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_4%(int64_t)((int64_t)((int64_t)((int32_t)126))))), (int64_t)((int64_t)((int64_t)((int32_t)129)))))));
		int64_t L_5 = ___gbx1;
		___gbx1 = ((int64_t)((int64_t)L_5/(int64_t)((int64_t)((int64_t)((int32_t)126)))));
		uint8_t* L_6 = ___bytes0;
		int64_t L_7 = ___gbx1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)1))) = (int8_t)((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_7%(int64_t)((int64_t)((int64_t)((int32_t)10))))), (int64_t)((int64_t)((int64_t)((int32_t)48)))))));
		int64_t L_8 = ___gbx1;
		___gbx1 = ((int64_t)((int64_t)L_8/(int64_t)((int64_t)((int64_t)((int32_t)10)))));
		uint8_t* L_9 = ___bytes0;
		int64_t L_10 = ___gbx1;
		*((int8_t*)L_9) = (int8_t)((int32_t)((uint8_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)((int64_t)((int32_t)129)))))));
		return;
	}
}
// System.Int64 I18N.CJK.GB18030Source::FromGBX(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromGBX_mA8AE20EB1573F242DDFA854A5742D0838BE9E163 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___start1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * V_8 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___start1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___start1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___bytes0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		uint8_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)129))))
		{
			goto IL_002c;
		}
	}
	{
		uint8_t L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_002f;
		}
	}

IL_002c:
	{
		return ((int64_t)((int64_t)(-1)));
	}

IL_002f:
	{
		uint8_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)48))))
		{
			goto IL_003f;
		}
	}
	{
		uint8_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0043;
		}
	}

IL_003f:
	{
		return ((int64_t)((int64_t)((int32_t)-2)));
	}

IL_0043:
	{
		uint8_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)129))))
		{
			goto IL_0059;
		}
	}
	{
		uint8_t L_21 = V_2;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_005d;
		}
	}

IL_0059:
	{
		return ((int64_t)((int64_t)((int32_t)-3)));
	}

IL_005d:
	{
		uint8_t L_22 = V_3;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)48))))
		{
			goto IL_006d;
		}
	}
	{
		uint8_t L_23 = V_3;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0071;
		}
	}

IL_006d:
	{
		return ((int64_t)((int64_t)((int32_t)-4)));
	}

IL_0071:
	{
		uint8_t L_24 = V_0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)144))))
		{
			goto IL_0087;
		}
	}
	{
		uint8_t L_25 = V_0;
		uint8_t L_26 = V_1;
		uint8_t L_27 = V_2;
		uint8_t L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_29;
		L_29 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6(L_25, L_26, L_27, L_28, (bool)1, /*hidden argument*/NULL);
		return L_29;
	}

IL_0087:
	{
		uint8_t L_30 = V_0;
		uint8_t L_31 = V_1;
		uint8_t L_32 = V_2;
		uint8_t L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_34;
		L_34 = GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6(L_30, L_31, L_32, L_33, (bool)0, /*hidden argument*/NULL);
		V_4 = L_34;
		V_5 = ((int64_t)((int64_t)0));
		V_6 = ((int64_t)((int64_t)0));
		V_7 = 0;
		goto IL_0120;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_35 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_ranges_6();
		int32_t L_36 = V_7;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_8 = L_38;
		int64_t L_39 = V_4;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_40 = V_8;
		NullCheck(L_40);
		int64_t L_41 = L_40->get_GStart_2();
		if ((((int64_t)L_39) >= ((int64_t)L_41)))
		{
			goto IL_00cb;
		}
	}
	{
		int64_t L_42 = V_4;
		int64_t L_43 = V_6;
		int64_t L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int32_t L_45;
		L_45 = GB18030Source_ToUcsRaw_m7BDB7C98E6B6521DF2BF7077B1DD1BDD04C0EA07(((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_42, (int64_t)L_43)), (int64_t)L_44)))), /*hidden argument*/NULL);
		return ((int64_t)((int64_t)L_45));
	}

IL_00cb:
	{
		int64_t L_46 = V_4;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_47 = V_8;
		NullCheck(L_47);
		int64_t L_48 = L_47->get_GEnd_3();
		if ((((int64_t)L_46) > ((int64_t)L_48)))
		{
			goto IL_00f3;
		}
	}
	{
		int64_t L_49 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_50 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbxBase_4();
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_51 = V_8;
		NullCheck(L_51);
		int64_t L_52 = L_51->get_GStart_2();
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_53 = V_8;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_UStart_0();
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_49, (int64_t)L_50)), (int64_t)L_52)), (int64_t)((int64_t)((int64_t)L_54))));
	}

IL_00f3:
	{
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_55 = V_8;
		NullCheck(L_55);
		int64_t L_56 = L_55->get_GStart_2();
		if (!L_56)
		{
			goto IL_011a;
		}
	}
	{
		int64_t L_57 = V_5;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_58 = V_8;
		NullCheck(L_58);
		int64_t L_59 = L_58->get_GStart_2();
		int64_t L_60 = V_6;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_59, (int64_t)L_60))));
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_61 = V_8;
		NullCheck(L_61);
		int64_t L_62 = L_61->get_GEnd_3();
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_62, (int64_t)((int64_t)((int64_t)1))));
	}

IL_011a:
	{
		int32_t L_63 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_0120:
	{
		int32_t L_64 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_65 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_ranges_6();
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))))))
		{
			goto IL_00a3;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = L_66;
		uint8_t L_68 = V_0;
		uint8_t L_69 = L_68;
		RuntimeObject * L_70 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)), &L_69);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_70);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_70);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_67;
		uint8_t L_72 = V_1;
		uint8_t L_73 = L_72;
		RuntimeObject * L_74 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)), &L_73);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_74);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = L_71;
		uint8_t L_76 = V_2;
		uint8_t L_77 = L_76;
		RuntimeObject * L_78 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)), &L_77);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_78);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_78);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_79 = L_75;
		uint8_t L_80 = V_3;
		uint8_t L_81 = L_80;
		RuntimeObject * L_82 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)), &L_81);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_82);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_82);
		String_t* L_83;
		L_83 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCCA7C0B445ECC76093C5099F1A970EA4228DC03)), L_79, /*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_84 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var)));
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(L_84, L_83, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_84, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GB18030Source_FromGBX_mA8AE20EB1573F242DDFA854A5742D0838BE9E163_RuntimeMethod_var)));
	}
}
// System.Int64 I18N.CJK.GB18030Source::FromUCSSurrogate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromUCSSurrogate_m02AB46DF447796C0391FD2811E192F1B56844D03 (int32_t ___cp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___cp0;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_1 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbxSuppBase_5();
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_0)), (int64_t)L_1));
	}
}
// System.Int64 I18N.CJK.GB18030Source::FromUCS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromUCS_m1BAEB0481B70F612777C294088C5DD96CC7232FD (int32_t ___cp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * V_3 = NULL;
	{
		V_0 = ((int64_t)((int64_t)0));
		V_1 = ((int64_t)((int64_t)((int32_t)128)));
		V_2 = 0;
		goto IL_0074;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_0 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_ranges_6();
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_3 = L_3;
		int32_t L_4 = ___cp0;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_5 = V_3;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_UStart_0();
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = ___cp0;
		int64_t L_8 = V_1;
		int64_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_10;
		L_10 = GB18030Source_ToGbxRaw_mFEC849A38633958F180AF6F55F15999F07DA4275(((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)L_7)), (int64_t)L_8)), (int64_t)L_9)))), /*hidden argument*/NULL);
		return L_10;
	}

IL_0032:
	{
		int32_t L_11 = ___cp0;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_UEnd_1();
		if ((((int32_t)L_11) > ((int32_t)L_13)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_14 = ___cp0;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_UStart_0();
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_17 = V_3;
		NullCheck(L_17);
		int64_t L_18 = L_17->get_GStart_2();
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_16)))), (int64_t)L_18));
	}

IL_004f:
	{
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_19 = V_3;
		NullCheck(L_19);
		int64_t L_20 = L_19->get_GStart_2();
		if (!L_20)
		{
			goto IL_0070;
		}
	}
	{
		int64_t L_21 = V_0;
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_22 = V_3;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_UStart_0();
		int64_t L_24 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_21, (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)L_23)), (int64_t)L_24))));
		GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * L_25 = V_3;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_UEnd_1();
		V_1 = ((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1))));
	}

IL_0070:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_28 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		GB18030MapU5BU5D_t3DA0F495E6E7C069414ADB6D1E486EFC4C14DED9* L_29 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_ranges_6();
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_30 = ___cp0;
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_31);
		String_t* L_33;
		L_33 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40EE947A7070BE6D20D77536685265C688F4713A)), L_32, /*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_34 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var)));
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(L_34, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GB18030Source_FromUCS_m1BAEB0481B70F612777C294088C5DD96CC7232FD_RuntimeMethod_var)));
	}
}
// System.Int64 I18N.CJK.GB18030Source::FromGBXRaw(System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_FromGBXRaw_m46BB49C8CDF023E60218787A3823F1E23548DDB6 (uint8_t ___b10, uint8_t ___b21, uint8_t ___b32, uint8_t ___b43, bool ___supp4, const RuntimeMethod* method)
{
	uint8_t G_B2_0 = 0x0;
	uint8_t G_B1_0 = 0x0;
	int32_t G_B3_0 = 0;
	uint8_t G_B3_1 = 0x0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		uint8_t L_0 = ___b10;
		bool L_1 = ___supp4;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((int32_t)144);
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = ((int32_t)129);
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		uint8_t L_2 = ___b21;
		uint8_t L_3 = ___b32;
		uint8_t L_4 = ___b43;
		bool L_5 = ___supp4;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)G_B3_1, (int32_t)G_B3_0)), (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48))))), (int32_t)((int32_t)126))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)129))))), (int32_t)((int32_t)10))), (int32_t)L_4)), (int32_t)((int32_t)48)));
		if (!L_5)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)G_B3_1, (int32_t)G_B3_0)), (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48))))), (int32_t)((int32_t)126))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)129))))), (int32_t)((int32_t)10))), (int32_t)L_4)), (int32_t)((int32_t)48)));
			goto IL_0044;
		}
	}
	{
		G_B6_0 = ((int32_t)65536);
		G_B6_1 = G_B4_0;
		goto IL_0045;
	}

IL_0044:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0045:
	{
		return ((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0))));
	}
}
// System.Int32 I18N.CJK.GB18030Source::ToUcsRaw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GB18030Source_ToUcsRaw_m7BDB7C98E6B6521DF2BF7077B1DD1BDD04C0EA07 (int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		uint8_t* L_0 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_1 = ___idx0;
		int32_t L_2 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)))));
		uint8_t* L_3 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbx2uni_0();
		int32_t L_4 = ___idx0;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2)), (int32_t)1)))));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)256))), (int32_t)L_5));
	}
}
// System.Int64 I18N.CJK.GB18030Source::ToGbxRaw(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GB18030Source_ToGbxRaw_mFEC849A38633958F180AF6F55F15999F07DA4275 (int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___idx0;
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int32_t L_2 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_uni2gbxSize_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)), (int32_t)1))) < ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}

IL_0016:
	{
		return ((int64_t)((int64_t)(-1)));
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var);
		int64_t L_3 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_gbxBase_4();
		uint8_t* L_4 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_5 = ___idx0;
		int32_t L_6 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2)))));
		uint8_t* L_7 = ((GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_StaticFields*)il2cpp_codegen_static_fields_for(GB18030Source_t29503123EF3427760F06A1BBB0B44779AA21FA1B_il2cpp_TypeInfo_var))->get_uni2gbx_1();
		int32_t L_8 = ___idx0;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)2)), (int32_t)1)))));
		return ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)256))))))), (int64_t)((int64_t)((int64_t)L_9))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ISO2022JPDecoder::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPDecoder__ctor_mBF180DD65B049A90B54EF2B9AFCAAEF393AB2733 (ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * __this, bool ___allow1ByteKana0, bool ___allowShiftIO1, const RuntimeMethod* method)
{
	{
		Decoder__ctor_m2EA154371203FAAE1CD0477C828E0B39B2091DF3(__this, /*hidden argument*/NULL);
		bool L_0 = ___allowShiftIO1;
		__this->set_allow_shift_io_3(L_0);
		return;
	}
}
// System.Void I18N.CJK.ISO2022JPDecoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPDecoder__cctor_mDB339ACBCC56A35E9E0A393618B77429CDE49E28 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_0;
		L_0 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		((ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var))->set_convert_2(L_0);
		return;
	}
}
// System.Int32 I18N.CJK.ISO2022JPDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPDecoder_GetCharCount_mB0BFD81161C70FA23A54A44B220A340FF284B581 (ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * G_B25_0 = NULL;
	ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * G_B26_1 = NULL;
	{
		V_0 = 0;
		int32_t L_0 = ___index1;
		int32_t L_1 = ___count2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___index1;
		V_2 = L_2;
		goto IL_012a;
	}

IL_000d:
	{
		bool L_3 = __this->get_allow_shift_io_3();
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		uint8_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)14))))
		{
			goto IL_0040;
		}
	}
	{
		uint8_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)15))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_004c;
	}

IL_0034:
	{
		__this->set_shifted_in_count_6((bool)0);
		goto IL_0126;
	}

IL_0040:
	{
		__this->set_shifted_in_count_6((bool)1);
		goto IL_0126;
	}

IL_004c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___bytes0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((((int32_t)L_13) == ((int32_t)((int32_t)27))))
		{
			goto IL_0091;
		}
	}
	{
		bool L_14 = __this->get_shifted_in_count_6();
		if (L_14)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_15 = __this->get_m_4();
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1))) == ((uint32_t)L_17))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0131;
	}

IL_007b:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		goto IL_008c;
	}

IL_0088:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_008c:
	{
		goto IL_0126;
	}

IL_0091:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)2))) < ((int32_t)L_22)))
		{
			goto IL_009f;
		}
	}
	{
		goto IL_0131;
	}

IL_009f:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		V_3 = (bool)0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___bytes0;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_00b6;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00d0;
	}

IL_00b6:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ___bytes0;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_00c7;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00d0;
	}

IL_00c7:
	{
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)2));
		goto IL_0126;
	}

IL_00d0:
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___bytes0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)66)))))
		{
			goto IL_00f6;
		}
	}
	{
		bool L_38 = V_3;
		G_B24_0 = __this;
		if (!L_38)
		{
			G_B25_0 = __this;
			goto IL_00eb;
		}
	}
	{
		G_B26_0 = 1;
		G_B26_1 = G_B24_0;
		goto IL_00ec;
	}

IL_00eb:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
	}

IL_00ec:
	{
		NullCheck(G_B26_1);
		G_B26_1->set_m_4(G_B26_0);
		goto IL_0126;
	}

IL_00f6:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = ___bytes0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)74)))))
		{
			goto IL_010c;
		}
	}
	{
		__this->set_m_4(0);
		goto IL_0126;
	}

IL_010c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = ___bytes0;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_0122;
		}
	}
	{
		__this->set_m_4(2);
		goto IL_0126;
	}

IL_0122:
	{
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)3));
	}

IL_0126:
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_012a:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_1;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_000d;
		}
	}

IL_0131:
	{
		int32_t L_51 = V_0;
		return L_51;
	}
}
// System.Int32 I18N.CJK.ISO2022JPDecoder::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPDecoder_ToChar_m6593F2F2C57A00A9770E6C9E15750ECF32ED4CBC (ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___value0;
		___value0 = ((int32_t)((int32_t)L_0<<(int32_t)1));
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_2 = ((ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var))->get_convert_2();
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_jisx0208ToUnicode_5();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___value0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_0020:
	{
		G_B4_0 = (-1);
		goto IL_0043;
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_5 = ((ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var))->get_convert_2();
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = L_5->get_jisx0208ToUnicode_5();
		int32_t L_7 = ___value0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_10 = ((ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var))->get_convert_2();
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = L_10->get_jisx0208ToUnicode_5();
		int32_t L_12 = ___value0;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		G_B4_0 = ((int32_t)((int32_t)L_9|(int32_t)((int32_t)((int32_t)L_14<<(int32_t)8))));
	}

IL_0043:
	{
		return G_B4_0;
	}
}
// System.Int32 I18N.CJK.ISO2022JPDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPDecoder_GetChars_mE22C39B5289CED60DC3C73260665FE1B79E24BF2 (ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	uint8_t V_8 = 0x0;
	int32_t G_B19_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * G_B42_0 = NULL;
	ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * G_B41_0 = NULL;
	int32_t G_B43_0 = 0;
	ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * G_B43_1 = NULL;
	{
		int32_t L_0 = ___charIndex4;
		V_0 = L_0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = ___byteIndex1;
		V_2 = L_3;
		goto IL_026d;
	}

IL_000e:
	{
		bool L_4 = __this->get_allow_shift_io_3();
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bytes0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_8 = L_8;
		uint8_t L_9 = V_8;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)14))))
		{
			goto IL_0041;
		}
	}
	{
		uint8_t L_10 = V_8;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)15))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_004d;
	}

IL_0035:
	{
		__this->set_shifted_in_conv_5((bool)0);
		goto IL_0269;
	}

IL_0041:
	{
		__this->set_shifted_in_conv_5((bool)1);
		goto IL_0269;
	}

IL_004d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___bytes0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_14) == ((int32_t)((int32_t)27))))
		{
			goto IL_0194;
		}
	}
	{
		bool L_15 = __this->get_shifted_in_conv_5();
		if (L_15)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_16 = __this->get_m_4();
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_00a2;
		}
	}

IL_006e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = ___bytes0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)96))))
		{
			goto IL_0091;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___chars3;
		int32_t L_22 = ___charIndex4;
		int32_t L_23 = L_22;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = ___bytes0;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)65344))))));
		goto IL_009d;
	}

IL_0091:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = ___chars3;
		int32_t L_29 = ___charIndex4;
		int32_t L_30 = L_29;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Il2CppChar)((int32_t)63));
	}

IL_009d:
	{
		goto IL_018f;
	}

IL_00a2:
	{
		int32_t L_31 = __this->get_m_4();
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))) == ((uint32_t)L_33))))
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_027f;
	}

IL_00bc:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___bytes0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = ___bytes0;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		G_B18_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1))>>(int32_t)1));
		if ((((int32_t)L_41) > ((int32_t)((int32_t)94))))
		{
			G_B19_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1))>>(int32_t)1));
			goto IL_00d4;
		}
	}
	{
		G_B20_0 = ((int32_t)113);
		G_B20_1 = G_B18_0;
		goto IL_00d9;
	}

IL_00d4:
	{
		G_B20_0 = ((int32_t)177);
		G_B20_1 = G_B19_0;
	}

IL_00d9:
	{
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)G_B20_1, (int32_t)G_B20_0));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = ___bytes0;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = ___bytes0;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		G_B21_0 = ((int32_t)(L_45));
		if (!((int32_t)((int32_t)L_49&(int32_t)1)))
		{
			G_B22_0 = ((int32_t)(L_45));
			goto IL_00f1;
		}
	}
	{
		G_B23_0 = ((int32_t)32);
		G_B23_1 = G_B21_0;
		goto IL_00f3;
	}

IL_00f1:
	{
		G_B23_0 = ((int32_t)126);
		G_B23_1 = G_B22_0;
	}

IL_00f3:
	{
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)G_B23_1, (int32_t)G_B23_0));
		int32_t L_50 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)129))), (int32_t)((int32_t)188)));
		int32_t L_51 = V_5;
		int32_t L_52 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)((int32_t)65)))));
		int32_t L_53 = V_5;
		int32_t L_54;
		L_54 = ISO2022JPDecoder_ToChar_m6593F2F2C57A00A9770E6C9E15750ECF32ED4CBC(__this, L_53, /*hidden argument*/NULL);
		V_6 = L_54;
		int32_t L_55 = V_6;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_56 = ___chars3;
		int32_t L_57 = ___charIndex4;
		int32_t L_58 = L_57;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (Il2CppChar)((int32_t)63));
		goto IL_013f;
	}

IL_0132:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = ___chars3;
		int32_t L_60 = ___charIndex4;
		int32_t L_61 = L_60;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		int32_t L_62 = V_6;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Il2CppChar)((int32_t)((uint16_t)L_62)));
	}

IL_013f:
	{
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		goto IL_018f;
	}

IL_0148:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = ___bytes0;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		uint8_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		if ((((int32_t)L_67) <= ((int32_t)((int32_t)160))))
		{
			goto IL_0181;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68 = ___bytes0;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		if ((((int32_t)L_71) >= ((int32_t)((int32_t)224))))
		{
			goto IL_0181;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_72 = ___chars3;
		int32_t L_73 = ___charIndex4;
		int32_t L_74 = L_73;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = ___bytes0;
		int32_t L_76 = V_2;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)((int32_t)160))), (int32_t)((int32_t)65376))))));
		goto IL_018f;
	}

IL_0181:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_79 = ___chars3;
		int32_t L_80 = ___charIndex4;
		int32_t L_81 = L_80;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82 = ___bytes0;
		int32_t L_83 = V_2;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint8_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (Il2CppChar)((int32_t)((uint16_t)L_85)));
	}

IL_018f:
	{
		goto IL_0269;
	}

IL_0194:
	{
		int32_t L_86 = V_2;
		int32_t L_87 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)2))) < ((int32_t)L_87)))
		{
			goto IL_01a2;
		}
	}
	{
		goto IL_027f;
	}

IL_01a2:
	{
		int32_t L_88 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		V_7 = (bool)0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_89 = ___bytes0;
		int32_t L_90 = V_2;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		uint8_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		if ((!(((uint32_t)L_92) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_01bb;
		}
	}
	{
		V_7 = (bool)1;
		goto IL_01ec;
	}

IL_01bb:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_93 = ___bytes0;
		int32_t L_94 = V_2;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		uint8_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		if ((!(((uint32_t)L_96) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_01cd;
		}
	}
	{
		V_7 = (bool)0;
		goto IL_01ec;
	}

IL_01cd:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_97 = ___chars3;
		int32_t L_98 = ___charIndex4;
		int32_t L_99 = L_98;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (Il2CppChar)((int32_t)27));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_100 = ___chars3;
		int32_t L_101 = ___charIndex4;
		int32_t L_102 = L_101;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_103 = ___bytes0;
		int32_t L_104 = V_2;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		uint8_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (Il2CppChar)((int32_t)((uint16_t)L_106)));
		goto IL_0269;
	}

IL_01ec:
	{
		int32_t L_107 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_108 = ___bytes0;
		int32_t L_109 = V_2;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		uint8_t L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)66)))))
		{
			goto IL_0213;
		}
	}
	{
		bool L_112 = V_7;
		G_B41_0 = __this;
		if (!L_112)
		{
			G_B42_0 = __this;
			goto IL_0208;
		}
	}
	{
		G_B43_0 = 1;
		G_B43_1 = G_B41_0;
		goto IL_0209;
	}

IL_0208:
	{
		G_B43_0 = 0;
		G_B43_1 = G_B42_0;
	}

IL_0209:
	{
		NullCheck(G_B43_1);
		G_B43_1->set_m_4(G_B43_0);
		goto IL_0269;
	}

IL_0213:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_113 = ___bytes0;
		int32_t L_114 = V_2;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		uint8_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		if ((!(((uint32_t)L_116) == ((uint32_t)((int32_t)74)))))
		{
			goto IL_0229;
		}
	}
	{
		__this->set_m_4(0);
		goto IL_0269;
	}

IL_0229:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_117 = ___bytes0;
		int32_t L_118 = V_2;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		uint8_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_120) == ((uint32_t)((int32_t)73)))))
		{
			goto IL_023f;
		}
	}
	{
		__this->set_m_4(2);
		goto IL_0269;
	}

IL_023f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_121 = ___chars3;
		int32_t L_122 = ___charIndex4;
		int32_t L_123 = L_122;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (Il2CppChar)((int32_t)27));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_124 = ___chars3;
		int32_t L_125 = ___charIndex4;
		int32_t L_126 = L_125;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_127 = ___bytes0;
		int32_t L_128 = V_2;
		NullCheck(L_127);
		int32_t L_129 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_128, (int32_t)1));
		uint8_t L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_126), (Il2CppChar)((int32_t)((uint16_t)L_130)));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_131 = ___chars3;
		int32_t L_132 = ___charIndex4;
		int32_t L_133 = L_132;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_134 = ___bytes0;
		int32_t L_135 = V_2;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		uint8_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(L_133), (Il2CppChar)((int32_t)((uint16_t)L_137)));
	}

IL_0269:
	{
		int32_t L_138 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1));
	}

IL_026d:
	{
		int32_t L_139 = V_2;
		int32_t L_140 = V_1;
		if ((((int32_t)L_139) >= ((int32_t)L_140)))
		{
			goto IL_027f;
		}
	}
	{
		int32_t L_141 = ___charIndex4;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_142 = ___chars3;
		NullCheck(L_142);
		if ((((int32_t)L_141) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_142)->max_length))))))
		{
			goto IL_000e;
		}
	}

IL_027f:
	{
		int32_t L_143 = ___charIndex4;
		int32_t L_144 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_143, (int32_t)L_144));
	}
}
// System.Void I18N.CJK.ISO2022JPDecoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPDecoder_Reset_mBD40EA25F5B0476122A211A4485C4025A3B0AD9E (ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		__this->set_m_4(0);
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->set_shifted_in_conv_5((bool)L_0);
		bool L_1 = V_0;
		__this->set_shifted_in_count_6(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ISO2022JPEncoder::.ctor(I18N.Common.MonoEncoding,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder__ctor_mFB28FD300F2D06A6051431C0C20BBA8D8A357DFD (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * __this, MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * ___owner0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const RuntimeMethod* method)
{
	{
		MonoEncoding_t0B7294681C3100D3550CE975C55A19B0C72EB595 * L_0 = ___owner0;
		MonoEncoder__ctor_m423C2CB5857B6488AB19586D9E66BF2646CC3E78(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___allow1ByteKana1;
		__this->set_allow_1byte_kana_4(L_1);
		bool L_2 = ___allowShiftIO2;
		__this->set_allow_shift_io_5(L_2);
		return;
	}
}
// System.Void I18N.CJK.ISO2022JPEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder__cctor_m6B5AE88E8AF597C62F16126D65815B57915FE0A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tD307A7EBC17BA5C45E5CA81A0136746BE54DA1EF____U24U24fieldU2D0_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_0;
		L_0 = JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6(/*hidden argument*/NULL);
		((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->set_convert_3(L_0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)65));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tD307A7EBC17BA5C45E5CA81A0136746BE54DA1EF____U24U24fieldU2D0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->set_full_width_map_9(L_2);
		return;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoder_GetByteCountImpl_mCD9C9DEFAE1D10236CA1D8C6DA18EF121B5EED74 (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * __this, Il2CppChar* ___chars0, int32_t ___charCount1, bool ___flush2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	{
		V_0 = 0;
		int32_t L_0 = ___charCount1;
		V_1 = L_0;
		V_3 = 0;
		int32_t L_1 = V_0;
		V_4 = L_1;
		goto IL_01fc;
	}

IL_000e:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = V_4;
		int32_t L_4 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2)))));
		V_5 = L_4;
		bool L_5 = __this->get_allow_1byte_kana_4();
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		Il2CppChar L_6 = V_5;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)65376))))
		{
			goto IL_004a;
		}
	}
	{
		Il2CppChar L_7 = V_5;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)65440))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_full_width_map_9();
		Il2CppChar L_9 = V_5;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)65376)));
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = L_11;
	}

IL_004a:
	{
		Il2CppChar L_12 = V_5;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)8208))))
		{
			goto IL_00bd;
		}
	}
	{
		Il2CppChar L_13 = V_5;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)40869))))
		{
			goto IL_00bd;
		}
	}
	{
		bool L_14 = __this->get_shifted_in_count_7();
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		__this->set_shifted_in_count_7((bool)0);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_16 = __this->get_m_6();
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)3));
	}

IL_0088:
	{
		__this->set_m_6(1);
		Il2CppChar L_18 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)8208))), (int32_t)2));
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_19 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_19);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = L_19->get_cjkToJis_7();
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_24 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = L_24->get_cjkToJis_7();
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_2 = ((int32_t)((int32_t)L_23|(int32_t)((int32_t)((int32_t)L_28<<(int32_t)8))));
		goto IL_01de;
	}

IL_00bd:
	{
		Il2CppChar L_29 = V_5;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)65281))))
		{
			goto IL_0130;
		}
	}
	{
		Il2CppChar L_30 = V_5;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)65376))))
		{
			goto IL_0130;
		}
	}
	{
		bool L_31 = __this->get_shifted_in_count_7();
		if (!L_31)
		{
			goto IL_00eb;
		}
	}
	{
		__this->set_shifted_in_count_7((bool)0);
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00eb:
	{
		int32_t L_33 = __this->get_m_6();
		if ((((int32_t)L_33) == ((int32_t)1)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)3));
	}

IL_00fb:
	{
		__this->set_m_6(1);
		Il2CppChar L_35 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)((int32_t)65281))), (int32_t)2));
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_36 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_36);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = L_36->get_extraToJis_9();
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_41 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_41);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = L_41->get_extraToJis_9();
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_2 = ((int32_t)((int32_t)L_40|(int32_t)((int32_t)((int32_t)L_45<<(int32_t)8))));
		goto IL_01de;
	}

IL_0130:
	{
		Il2CppChar L_46 = V_5;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)65376))))
		{
			goto IL_0199;
		}
	}
	{
		Il2CppChar L_47 = V_5;
		if ((((int32_t)L_47) > ((int32_t)((int32_t)65440))))
		{
			goto IL_0199;
		}
	}
	{
		bool L_48 = __this->get_allow_shift_io_5();
		if (!L_48)
		{
			goto IL_016e;
		}
	}
	{
		bool L_49 = __this->get_shifted_in_count_7();
		if (L_49)
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		__this->set_shifted_in_count_7((bool)1);
	}

IL_0169:
	{
		goto IL_0185;
	}

IL_016e:
	{
		int32_t L_51 = __this->get_m_6();
		if ((((int32_t)L_51) == ((int32_t)2)))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)3));
		__this->set_m_6(2);
	}

IL_0185:
	{
		Il2CppChar L_53 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)((int32_t)65376))), (int32_t)((int32_t)160)));
		goto IL_01de;
	}

IL_0199:
	{
		Il2CppChar L_54 = V_5;
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)128))))
		{
			goto IL_01d9;
		}
	}
	{
		bool L_55 = __this->get_shifted_in_count_7();
		if (!L_55)
		{
			goto IL_01bb;
		}
	}
	{
		__this->set_shifted_in_count_7((bool)0);
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_01bb:
	{
		int32_t L_57 = __this->get_m_6();
		if (!L_57)
		{
			goto IL_01ca;
		}
	}
	{
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)3));
	}

IL_01ca:
	{
		__this->set_m_6(0);
		Il2CppChar L_59 = V_5;
		V_2 = L_59;
		goto IL_01de;
	}

IL_01d9:
	{
		goto IL_01f6;
	}

IL_01de:
	{
		int32_t L_60 = V_2;
		if ((((int32_t)L_60) <= ((int32_t)((int32_t)256))))
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)2));
		goto IL_01f6;
	}

IL_01f2:
	{
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_01f6:
	{
		int32_t L_63 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_01fc:
	{
		int32_t L_64 = V_4;
		int32_t L_65 = V_1;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_000e;
		}
	}
	{
		bool L_66 = ___flush2;
		if (!L_66)
		{
			goto IL_0236;
		}
	}
	{
		bool L_67 = __this->get_shifted_in_count_7();
		if (!L_67)
		{
			goto IL_0220;
		}
	}
	{
		__this->set_shifted_in_count_7((bool)0);
		int32_t L_68 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
	}

IL_0220:
	{
		int32_t L_69 = __this->get_m_6();
		if (!L_69)
		{
			goto IL_022f;
		}
	}
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)3));
	}

IL_022f:
	{
		__this->set_m_6(0);
	}

IL_0236:
	{
		int32_t L_71 = V_3;
		return L_71;
	}
}
// System.Void I18N.CJK.ISO2022JPEncoder::SwitchMode(System.Byte*,System.Int32&,System.Int32&,I18N.CJK.ISO2022JPMode&,I18N.CJK.ISO2022JPMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder_SwitchMode_m3E0844D3B76B3F8DBFC77ADACA2B17C2715F962C (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * __this, uint8_t* ___bytes0, int32_t* ___byteIndex1, int32_t* ___byteCount2, int32_t* ___cur3, int32_t ___next4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = ___cur3;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t L_2 = ___next4;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t* L_3 = ___byteCount2;
		int32_t L_4 = *((int32_t*)L_3);
		if ((((int32_t)L_4) > ((int32_t)3)))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B19C1CC68E20679F72DBE50617728AA0FDEE4D3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO2022JPEncoder_SwitchMode_m3E0844D3B76B3F8DBFC77ADACA2B17C2715F962C_RuntimeMethod_var)));
	}

IL_001e:
	{
		uint8_t* L_6 = ___bytes0;
		int32_t* L_7 = ___byteIndex1;
		int32_t* L_8 = ___byteIndex1;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = L_9;
		V_0 = L_10;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_11))) = (int8_t)((int32_t)27);
		int32_t L_12 = ___next4;
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0084;
	}

IL_0042:
	{
		uint8_t* L_15 = ___bytes0;
		int32_t* L_16 = ___byteIndex1;
		int32_t* L_17 = ___byteIndex1;
		int32_t L_18 = *((int32_t*)L_17);
		int32_t L_19 = L_18;
		V_0 = L_19;
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		int32_t L_20 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, (int32_t)L_20))) = (int8_t)((int32_t)40);
		uint8_t* L_21 = ___bytes0;
		int32_t* L_22 = ___byteIndex1;
		int32_t* L_23 = ___byteIndex1;
		int32_t L_24 = *((int32_t*)L_23);
		int32_t L_25 = L_24;
		V_0 = L_25;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, (int32_t)L_26))) = (int8_t)((int32_t)73);
		goto IL_00a5;
	}

IL_0063:
	{
		uint8_t* L_27 = ___bytes0;
		int32_t* L_28 = ___byteIndex1;
		int32_t* L_29 = ___byteIndex1;
		int32_t L_30 = *((int32_t*)L_29);
		int32_t L_31 = L_30;
		V_0 = L_31;
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, (int32_t)L_32))) = (int8_t)((int32_t)36);
		uint8_t* L_33 = ___bytes0;
		int32_t* L_34 = ___byteIndex1;
		int32_t* L_35 = ___byteIndex1;
		int32_t L_36 = *((int32_t*)L_35);
		int32_t L_37 = L_36;
		V_0 = L_37;
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		int32_t L_38 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_33, (int32_t)L_38))) = (int8_t)((int32_t)66);
		goto IL_00a5;
	}

IL_0084:
	{
		uint8_t* L_39 = ___bytes0;
		int32_t* L_40 = ___byteIndex1;
		int32_t* L_41 = ___byteIndex1;
		int32_t L_42 = *((int32_t*)L_41);
		int32_t L_43 = L_42;
		V_0 = L_43;
		*((int32_t*)L_40) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		int32_t L_44 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, (int32_t)L_44))) = (int8_t)((int32_t)40);
		uint8_t* L_45 = ___bytes0;
		int32_t* L_46 = ___byteIndex1;
		int32_t* L_47 = ___byteIndex1;
		int32_t L_48 = *((int32_t*)L_47);
		int32_t L_49 = L_48;
		V_0 = L_49;
		*((int32_t*)L_46) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		int32_t L_50 = V_0;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_45, (int32_t)L_50))) = (int8_t)((int32_t)66);
		goto IL_00a5;
	}

IL_00a5:
	{
		int32_t* L_51 = ___cur3;
		int32_t L_52 = ___next4;
		*((int32_t*)L_51) = (int32_t)L_52;
		return;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoder_GetBytesImpl_m50FD58932B008321B21D959917246416545613DE (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, bool ___flush4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		int32_t L_0 = V_1;
		V_2 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___charCount1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = V_0;
		V_5 = L_3;
		goto IL_02cf;
	}

IL_0012:
	{
		Il2CppChar* L_4 = ___chars0;
		int32_t L_5 = V_5;
		int32_t L_6 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2)))));
		V_6 = L_6;
		bool L_7 = __this->get_allow_1byte_kana_4();
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_8 = V_6;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)65376))))
		{
			goto IL_004e;
		}
	}
	{
		Il2CppChar L_9 = V_6;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)65440))))
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_full_width_map_9();
		Il2CppChar L_11 = V_6;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)65376)));
		uint16_t L_13 = (uint16_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_6 = L_13;
	}

IL_004e:
	{
		Il2CppChar L_14 = V_6;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)8208))))
		{
			goto IL_00eb;
		}
	}
	{
		Il2CppChar L_15 = V_6;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)40869))))
		{
			goto IL_00eb;
		}
	}
	{
		bool L_16 = __this->get_shifted_in_conv_8();
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		uint8_t* L_17 = ___bytes2;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, (int32_t)L_19))) = (int8_t)((int32_t)15);
		__this->set_shifted_in_conv_8((bool)0);
		int32_t L_20 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
	}

IL_0088:
	{
		int32_t L_21 = __this->get_m_6();
		V_7 = L_21;
		int32_t L_22 = V_7;
		if ((((int32_t)L_22) == ((int32_t)1)))
		{
			goto IL_009d;
		}
	}
	{
		goto IL_00a2;
	}

IL_009d:
	{
		goto IL_00b9;
	}

IL_00a2:
	{
		uint8_t* L_23 = ___bytes2;
		int32_t* L_24 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_m3E0844D3B76B3F8DBFC77ADACA2B17C2715F962C(__this, (uint8_t*)(uint8_t*)L_23, (int32_t*)(&V_1), (int32_t*)(&___byteCount3), (int32_t*)L_24, 1, /*hidden argument*/NULL);
		goto IL_00b9;
	}

IL_00b9:
	{
		Il2CppChar L_25 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)((int32_t)8208))), (int32_t)2));
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_26 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_26);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = L_26->get_cjkToJis_7();
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_31 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_31);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = L_31->get_cjkToJis_7();
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int32_t)((int32_t)L_30|(int32_t)((int32_t)((int32_t)L_35<<(int32_t)8))));
		goto IL_0270;
	}

IL_00eb:
	{
		Il2CppChar L_36 = V_6;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)65281))))
		{
			goto IL_0188;
		}
	}
	{
		Il2CppChar L_37 = V_6;
		if ((((int32_t)L_37) > ((int32_t)((int32_t)65376))))
		{
			goto IL_0188;
		}
	}
	{
		bool L_38 = __this->get_shifted_in_conv_8();
		if (!L_38)
		{
			goto IL_0125;
		}
	}
	{
		uint8_t* L_39 = ___bytes2;
		int32_t L_40 = V_1;
		int32_t L_41 = L_40;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, (int32_t)L_41))) = (int8_t)((int32_t)15);
		__this->set_shifted_in_conv_8((bool)0);
		int32_t L_42 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1));
	}

IL_0125:
	{
		int32_t L_43 = __this->get_m_6();
		V_7 = L_43;
		int32_t L_44 = V_7;
		if ((((int32_t)L_44) == ((int32_t)1)))
		{
			goto IL_013a;
		}
	}
	{
		goto IL_013f;
	}

IL_013a:
	{
		goto IL_0156;
	}

IL_013f:
	{
		uint8_t* L_45 = ___bytes2;
		int32_t* L_46 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_m3E0844D3B76B3F8DBFC77ADACA2B17C2715F962C(__this, (uint8_t*)(uint8_t*)L_45, (int32_t*)(&V_1), (int32_t*)(&___byteCount3), (int32_t*)L_46, 1, /*hidden argument*/NULL);
		goto IL_0156;
	}

IL_0156:
	{
		Il2CppChar L_47 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)((int32_t)65281))), (int32_t)2));
		IL2CPP_RUNTIME_CLASS_INIT(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_48 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_48);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = L_48->get_extraToJis_9();
		int32_t L_50 = V_4;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_53 = ((ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_StaticFields*)il2cpp_codegen_static_fields_for(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var))->get_convert_3();
		NullCheck(L_53);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = L_53->get_extraToJis_9();
		int32_t L_55 = V_4;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_4 = ((int32_t)((int32_t)L_52|(int32_t)((int32_t)((int32_t)L_57<<(int32_t)8))));
		goto IL_0270;
	}

IL_0188:
	{
		Il2CppChar L_58 = V_6;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)65376))))
		{
			goto IL_0212;
		}
	}
	{
		Il2CppChar L_59 = V_6;
		if ((((int32_t)L_59) > ((int32_t)((int32_t)65440))))
		{
			goto IL_0212;
		}
	}
	{
		bool L_60 = __this->get_allow_shift_io_5();
		if (!L_60)
		{
			goto IL_01d2;
		}
	}
	{
		bool L_61 = __this->get_shifted_in_conv_8();
		if (L_61)
		{
			goto IL_01cd;
		}
	}
	{
		uint8_t* L_62 = ___bytes2;
		int32_t L_63 = V_1;
		int32_t L_64 = L_63;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_62, (int32_t)L_64))) = (int8_t)((int32_t)14);
		__this->set_shifted_in_conv_8((bool)1);
		int32_t L_65 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
	}

IL_01cd:
	{
		goto IL_0203;
	}

IL_01d2:
	{
		int32_t L_66 = __this->get_m_6();
		V_7 = L_66;
		int32_t L_67 = V_7;
		if ((((int32_t)L_67) == ((int32_t)2)))
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_01ec;
	}

IL_01e7:
	{
		goto IL_0203;
	}

IL_01ec:
	{
		uint8_t* L_68 = ___bytes2;
		int32_t* L_69 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_m3E0844D3B76B3F8DBFC77ADACA2B17C2715F962C(__this, (uint8_t*)(uint8_t*)L_68, (int32_t*)(&V_1), (int32_t*)(&___byteCount3), (int32_t*)L_69, 2, /*hidden argument*/NULL);
		goto IL_0203;
	}

IL_0203:
	{
		Il2CppChar L_70 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)((int32_t)65344)));
		goto IL_0270;
	}

IL_0212:
	{
		Il2CppChar L_71 = V_6;
		if ((((int32_t)L_71) >= ((int32_t)((int32_t)128))))
		{
			goto IL_025b;
		}
	}
	{
		bool L_72 = __this->get_shifted_in_conv_8();
		if (!L_72)
		{
			goto IL_0240;
		}
	}
	{
		uint8_t* L_73 = ___bytes2;
		int32_t L_74 = V_1;
		int32_t L_75 = L_74;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_73, (int32_t)L_75))) = (int8_t)((int32_t)15);
		__this->set_shifted_in_conv_8((bool)0);
		int32_t L_76 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)1));
	}

IL_0240:
	{
		uint8_t* L_77 = ___bytes2;
		int32_t* L_78 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_m3E0844D3B76B3F8DBFC77ADACA2B17C2715F962C(__this, (uint8_t*)(uint8_t*)L_77, (int32_t*)(&V_1), (int32_t*)(&___byteCount3), (int32_t*)L_78, 0, /*hidden argument*/NULL);
		Il2CppChar L_79 = V_6;
		V_4 = L_79;
		goto IL_0270;
	}

IL_025b:
	{
		Il2CppChar* L_80 = ___chars0;
		uint8_t* L_81 = ___bytes2;
		MonoEncoder_HandleFallback_mC50D10FC0AF4745C0FDC3066B7B35F4266D9B68F(__this, (Il2CppChar*)(Il2CppChar*)L_80, (int32_t*)(&V_5), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_81, (int32_t*)(&V_1), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		goto IL_02c4;
	}

IL_0270:
	{
		int32_t L_82 = V_4;
		if ((((int32_t)L_82) <= ((int32_t)((int32_t)256))))
		{
			goto IL_02b3;
		}
	}
	{
		int32_t L_83 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)((int32_t)256)));
		uint8_t* L_84 = ___bytes2;
		int32_t L_85 = V_1;
		int32_t L_86 = L_85;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
		int32_t L_87 = V_4;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_84, (int32_t)L_86))) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_87/(int32_t)((int32_t)94))), (int32_t)((int32_t)33)))));
		uint8_t* L_88 = ___bytes2;
		int32_t L_89 = V_1;
		int32_t L_90 = L_89;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		int32_t L_91 = V_4;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_88, (int32_t)L_90))) = (int8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_91%(int32_t)((int32_t)94))), (int32_t)((int32_t)33)))));
		int32_t L_92 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)2));
		goto IL_02c4;
	}

IL_02b3:
	{
		uint8_t* L_93 = ___bytes2;
		int32_t L_94 = V_1;
		int32_t L_95 = L_94;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
		int32_t L_96 = V_4;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_93, (int32_t)L_95))) = (int8_t)((int32_t)((uint8_t)L_96));
		int32_t L_97 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_97, (int32_t)1));
	}

IL_02c4:
	{
		int32_t L_98 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		int32_t L_99 = ___charCount1;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)1));
	}

IL_02cf:
	{
		int32_t L_100 = V_5;
		int32_t L_101 = V_3;
		if ((((int32_t)L_100) < ((int32_t)L_101)))
		{
			goto IL_0012;
		}
	}
	{
		bool L_102 = ___flush4;
		if (!L_102)
		{
			goto IL_031d;
		}
	}
	{
		bool L_103 = __this->get_shifted_in_conv_8();
		if (!L_103)
		{
			goto IL_0300;
		}
	}
	{
		uint8_t* L_104 = ___bytes2;
		int32_t L_105 = V_1;
		int32_t L_106 = L_105;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_104, (int32_t)L_106))) = (int8_t)((int32_t)15);
		__this->set_shifted_in_conv_8((bool)0);
		int32_t L_107 = ___byteCount3;
		___byteCount3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_107, (int32_t)1));
	}

IL_0300:
	{
		int32_t L_108 = __this->get_m_6();
		if (!L_108)
		{
			goto IL_031d;
		}
	}
	{
		uint8_t* L_109 = ___bytes2;
		int32_t* L_110 = __this->get_address_of_m_6();
		ISO2022JPEncoder_SwitchMode_m3E0844D3B76B3F8DBFC77ADACA2B17C2715F962C(__this, (uint8_t*)(uint8_t*)L_109, (int32_t*)(&V_1), (int32_t*)(&___byteCount3), (int32_t*)L_110, 0, /*hidden argument*/NULL);
	}

IL_031d:
	{
		int32_t L_111 = V_1;
		int32_t L_112 = V_2;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_111, (int32_t)L_112));
	}
}
// System.Void I18N.CJK.ISO2022JPEncoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoder_Reset_m3932EA85BD523B57D0F7B89D98D2C1C84066265D (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		__this->set_m_6(0);
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->set_shifted_in_count_7((bool)L_0);
		bool L_1 = V_0;
		__this->set_shifted_in_conv_8(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.ISO2022JPEncoding::.ctor(System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO2022JPEncoding__ctor_m97DD8E746F58AA0C73695C1272CFC4C5CA2D586A (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, int32_t ___codePage0, bool ___allow1ByteKana1, bool ___allowShiftIO2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codePage0;
		MonoEncoding__ctor_m4137C39A886F1FB7F6783AECC056F3D42742A9D4(__this, L_0, ((int32_t)932), /*hidden argument*/NULL);
		bool L_1 = ___allow1ByteKana1;
		__this->set_allow_1byte_kana_63(L_1);
		bool L_2 = ___allowShiftIO2;
		__this->set_allow_shift_io_64(L_2);
		return;
	}
}
// System.String I18N.CJK.ISO2022JPEncoding::get_BodyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISO2022JPEncoding_get_BodyName_m530061F790C7CD00A2E42CED1C52F5F9D7974812 (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
	}
}
// System.String I18N.CJK.ISO2022JPEncoding::get_HeaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISO2022JPEncoding_get_HeaderName_mE33F4D38594BFE10B4ADA4B3A29B7C105BFE3B80 (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF512F2CB430B135FD2B0519B779BC77CDF6B6207;
	}
}
// System.String I18N.CJK.ISO2022JPEncoding::get_WebName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISO2022JPEncoding_get_WebName_mD220CA228977DDD6BB789456FF7858006D366FB2 (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A1E7CA2D7A9670B0D9A719DC44C35DAE10EB3C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral4A1E7CA2D7A9670B0D9A719DC44C35DAE10EB3C8;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetMaxByteCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetMaxByteCount_m010241E35CAAE1CA571F93FFBD462343E9BF3CBA (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, int32_t ___charCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___charCount0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_0/(int32_t)2)), (int32_t)5)), (int32_t)4));
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetMaxCharCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetMaxCharCount_m1220B637BDCDD6FBC8F3D35B4FFC19A37A6503F6 (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, int32_t ___byteCount0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___byteCount0;
		return L_0;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetByteCount_m921D8C65467CD405DFF6423108397360849F5089 (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_allow_1byte_kana_63();
		bool L_1 = __this->get_allow_shift_io_64();
		ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * L_2 = (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED *)il2cpp_codegen_object_new(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		ISO2022JPEncoder__ctor_mFB28FD300F2D06A6051431C0C20BBA8D8A357DFD(L_2, __this, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars0;
		int32_t L_4 = ___charIndex1;
		int32_t L_5 = ___charCount2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtFuncInvoker4< int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t, bool >::Invoke(5 /* System.Int32 I18N.Common.MonoEncoder::GetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean) */, L_2, L_3, L_4, L_5, (bool)1);
		return L_6;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetByteCountImpl_mCC0EE5C8AE118BDDBBED518CC736D3052C9CD60B (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_allow_1byte_kana_63();
		bool L_1 = __this->get_allow_shift_io_64();
		ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * L_2 = (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED *)il2cpp_codegen_object_new(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		ISO2022JPEncoder__ctor_mFB28FD300F2D06A6051431C0C20BBA8D8A357DFD(L_2, __this, L_0, L_1, /*hidden argument*/NULL);
		Il2CppChar* L_3 = ___chars0;
		int32_t L_4 = ___count1;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = VirtFuncInvoker3< int32_t, Il2CppChar*, int32_t, bool >::Invoke(9 /* System.Int32 I18N.CJK.ISO2022JPEncoder::GetByteCountImpl(System.Char*,System.Int32,System.Boolean) */, L_2, (Il2CppChar*)(Il2CppChar*)L_3, L_4, (bool)1);
		return L_5;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetBytesImpl_mBF37A9C3FF13F905938A97358349559F1A9FD36D (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_allow_1byte_kana_63();
		bool L_1 = __this->get_allow_shift_io_64();
		ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED * L_2 = (ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED *)il2cpp_codegen_object_new(ISO2022JPEncoder_tB430E5DF34BC2DFF11FFE77EA6EA4BF934D8B0ED_il2cpp_TypeInfo_var);
		ISO2022JPEncoder__ctor_mFB28FD300F2D06A6051431C0C20BBA8D8A357DFD(L_2, __this, L_0, L_1, /*hidden argument*/NULL);
		Il2CppChar* L_3 = ___chars0;
		int32_t L_4 = ___charCount1;
		uint8_t* L_5 = ___bytes2;
		int32_t L_6 = ___byteCount3;
		NullCheck(L_2);
		int32_t L_7;
		L_7 = VirtFuncInvoker5< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t, bool >::Invoke(10 /* System.Int32 I18N.CJK.ISO2022JPEncoder::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32,System.Boolean) */, L_2, (Il2CppChar*)(Il2CppChar*)L_3, L_4, (uint8_t*)(uint8_t*)L_5, L_6, (bool)1);
		return L_7;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetCharCount_mAED1D3D11A7B49E5B9B13818415FCDE3136E4387 (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_allow_1byte_kana_63();
		bool L_1 = __this->get_allow_shift_io_64();
		ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * L_2 = (ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D *)il2cpp_codegen_object_new(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var);
		ISO2022JPDecoder__ctor_mBF180DD65B049A90B54EF2B9AFCAAEF393AB2733(L_2, L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		int32_t L_4 = ___index1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(5 /* System.Int32 I18N.CJK.ISO2022JPDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Int32 I18N.CJK.ISO2022JPEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO2022JPEncoding_GetChars_m7B89EC281C5644F095553D493524025F07F752BE (ISO2022JPEncoding_tA009FA28383046D750BD55B0C8B66B667C289D04 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_allow_1byte_kana_63();
		bool L_1 = __this->get_allow_shift_io_64();
		ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D * L_2 = (ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D *)il2cpp_codegen_object_new(ISO2022JPDecoder_t677D3B2DBA0A05A37DC45C3CA983CCA5E988A87D_il2cpp_TypeInfo_var);
		ISO2022JPDecoder__ctor_mBF180DD65B049A90B54EF2B9AFCAAEF393AB2733(L_2, L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		int32_t L_4 = ___byteIndex1;
		int32_t L_5 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___chars3;
		int32_t L_7 = ___charIndex4;
		NullCheck(L_2);
		int32_t L_8;
		L_8 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 I18N.CJK.ISO2022JPDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_2, L_3, L_4, L_5, L_6, L_7);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.JISConvert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JISConvert__ctor_mDC4D65170DAAB6B280DE8D1350CAFBE58E5EE690 (JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B02C95FD71AC5B53DC8E403117E89B593236473);
		s_Il2CppMethodInitialized = true;
	}
	CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_0 = (CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 *)il2cpp_codegen_object_new(CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07_il2cpp_TypeInfo_var);
		CodeTable__ctor_m680F5F405451137DF83FD281CB4AFE3309A67C92(L_0, _stringLiteral5B02C95FD71AC5B53DC8E403117E89B593236473, /*hidden argument*/NULL);
		V_0 = L_0;
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_1 = V_0;
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = CodeTable_GetSection_m494D580041679EA9E6AB8178659DBFCA6B1D2E48(L_1, 1, /*hidden argument*/NULL);
		__this->set_jisx0208ToUnicode_5(L_2);
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = CodeTable_GetSection_m494D580041679EA9E6AB8178659DBFCA6B1D2E48(L_3, 2, /*hidden argument*/NULL);
		__this->set_jisx0212ToUnicode_6(L_4);
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6;
		L_6 = CodeTable_GetSection_m494D580041679EA9E6AB8178659DBFCA6B1D2E48(L_5, 3, /*hidden argument*/NULL);
		__this->set_cjkToJis_7(L_6);
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = CodeTable_GetSection_m494D580041679EA9E6AB8178659DBFCA6B1D2E48(L_7, 4, /*hidden argument*/NULL);
		__this->set_greekToJis_8(L_8);
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = CodeTable_GetSection_m494D580041679EA9E6AB8178659DBFCA6B1D2E48(L_9, 5, /*hidden argument*/NULL);
		__this->set_extraToJis_9(L_10);
		CodeTable_tD7129EFB8D4C1FF2826E120920EE52152E846C07 * L_11 = V_0;
		NullCheck(L_11);
		CodeTable_Dispose_m19140F4AE97B7CEE0CC1F837AA426252F05D9F8A(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void I18N.CJK.JISConvert::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JISConvert__cctor_mF2AAEAE56B02D6325FF9B72DFB9B124C2CD790F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var))->set_lockobj_11(L_0);
		return;
	}
}
// I18N.CJK.JISConvert I18N.CJK.JISConvert::get_Convert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * JISConvert_get_Convert_m4901EF7B9BBE6BCA205356CB7AC0F3C7BEADA7F6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var))->get_lockobj_11();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
			JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_2 = ((JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var))->get_convert_10();
			if (!L_2)
			{
				goto IL_0021;
			}
		}

IL_0016:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
			JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_3 = ((JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var))->get_convert_10();
			V_1 = L_3;
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}

IL_0021:
		{
			JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_4 = (JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 *)il2cpp_codegen_object_new(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
			JISConvert__ctor_mDC4D65170DAAB6B280DE8D1350CAFBE58E5EE690(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var);
			((JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var))->set_convert_10(L_4);
			JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_5 = ((JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_StaticFields*)il2cpp_codegen_static_fields_for(JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268_il2cpp_TypeInfo_var))->get_convert_10();
			V_1 = L_5;
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}

IL_0036:
		{
			; // IL_0036: leave IL_0042
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		JISConvert_t0E381193AB965522C76CA4C920C85DE1FDFD9268 * L_7 = V_1;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.KoreanEncoding::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreanEncoding__ctor_mE63AEAAB35251DF80F91830A567CFD30D6436B78 (KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50 * __this, int32_t ___codepage0, bool ___useUHC1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___codepage0;
		DbcsEncoding__ctor_m32B4B472A9ACD2670CA904C5FE94E68E99BEF61C(__this, L_0, ((int32_t)949), /*hidden argument*/NULL);
		bool L_1 = ___useUHC1;
		__this->set_useUHC_63(L_1);
		return;
	}
}
// I18N.CJK.DbcsConvert I18N.CJK.KoreanEncoding::GetConvert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * KoreanEncoding_GetConvert_m90C1C59F03B51DA0DA73CEF490B8EB15881F410F (KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = ((DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_StaticFields*)il2cpp_codegen_static_fields_for(DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3_il2cpp_TypeInfo_var))->get_KS_4();
		return L_0;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding::GetByteCountImpl(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanEncoding_GetByteCountImpl_mF043BCB88A08A64EE50CD5983BF9E03EF6D12A7F (KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50 * __this, Il2CppChar* ___chars0, int32_t ___count1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * V_2 = NULL;
	Il2CppChar V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * >::Invoke(48 /* I18N.CJK.DbcsConvert I18N.CJK.KoreanEncoding::GetConvert() */, __this);
		V_2 = L_0;
		goto IL_006f;
	}

IL_0010:
	{
		Il2CppChar* L_1 = ___chars0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)2)))));
		V_3 = L_4;
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0031;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003a;
		}
	}

IL_0031:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_006f;
	}

IL_003a:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_8 = V_2;
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = L_8->get_u2n_1();
		Il2CppChar L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2));
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_13 = V_2;
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = L_13->get_u2n_1();
		Il2CppChar L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)), (int32_t)1));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		uint8_t L_18 = V_4;
		if (L_18)
		{
			goto IL_006b;
		}
	}
	{
		uint8_t L_19 = V_5;
		if (L_19)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		goto IL_006f;
	}

IL_006b:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)2));
	}

IL_006f:
	{
		int32_t L_22 = ___count1;
		int32_t L_23 = L_22;
		___count1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_24 = V_1;
		return L_24;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding::GetBytesImpl(System.Char*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanEncoding_GetBytesImpl_m8B3E84415346EFB6AFC7674A9626F9A4A2B7C732 (KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * V_2 = NULL;
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * V_3 = NULL;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * >::Invoke(48 /* I18N.CJK.DbcsConvert I18N.CJK.KoreanEncoding::GetConvert() */, __this);
		V_2 = L_0;
		V_3 = (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 *)NULL;
		int32_t L_1 = V_1;
		V_4 = L_1;
		goto IL_009e;
	}

IL_0015:
	{
		Il2CppChar* L_2 = ___chars0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2)))));
		V_5 = L_5;
		Il2CppChar L_6 = V_5;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_7 = V_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0049;
		}
	}

IL_0039:
	{
		uint8_t* L_8 = ___bytes2;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		Il2CppChar L_11 = V_5;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)L_10))) = (int8_t)((int32_t)((uint8_t)L_11));
		goto IL_009e;
	}

IL_0049:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_12 = V_2;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = L_12->get_u2n_1();
		Il2CppChar L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_17 = V_2;
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = L_17->get_u2n_1();
		Il2CppChar L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)), (int32_t)1));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_7 = L_21;
		uint8_t L_22 = V_6;
		if (L_22)
		{
			goto IL_008a;
		}
	}
	{
		uint8_t L_23 = V_7;
		if (L_23)
		{
			goto IL_008a;
		}
	}
	{
		Il2CppChar* L_24 = ___chars0;
		uint8_t* L_25 = ___bytes2;
		MonoEncoding_HandleFallback_m27AF07739597C9E7575361D30B67F4D4E89D31E6(__this, (EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 **)(&V_3), (Il2CppChar*)(Il2CppChar*)L_24, (int32_t*)(&V_0), (int32_t*)(&___charCount1), (uint8_t*)(uint8_t*)L_25, (int32_t*)(&V_1), (int32_t*)(&___byteCount3), /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_008a:
	{
		uint8_t* L_26 = ___bytes2;
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		uint8_t L_29 = V_6;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, (int32_t)L_28))) = (int8_t)L_29;
		uint8_t* L_30 = ___bytes2;
		int32_t L_31 = V_1;
		int32_t L_32 = L_31;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		uint8_t L_33 = V_7;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, (int32_t)L_32))) = (int8_t)L_33;
	}

IL_009e:
	{
		int32_t L_34 = ___charCount1;
		int32_t L_35 = L_34;
		___charCount1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_36 = V_1;
		int32_t L_37 = V_4;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
	}
}
// System.Int32 I18N.CJK.KoreanEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanEncoding_GetCharCount_mFF5E1F71DF9BE4A1B39E1F4AEC27824F3C435FF9 (KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder I18N.CJK.KoreanEncoding::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanEncoding_GetChars_mCFCE4E49C19E6EC0D5098F74BF69291AAC3A9AC7 (KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * L_0;
		L_0 = VirtFuncInvoker0< Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * >::Invoke(38 /* System.Text.Decoder I18N.CJK.KoreanEncoding::GetDecoder() */, __this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bytes0;
		int32_t L_2 = ___byteIndex1;
		int32_t L_3 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___chars3;
		int32_t L_5 = ___charIndex4;
		NullCheck(L_0);
		int32_t L_6;
		L_6 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(8 /* System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Text.Decoder I18N.CJK.KoreanEncoding::GetDecoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * KoreanEncoding_GetDecoder_mFCDCDCDCAC6F663E96A25CFF3F5AD48DD2CB4ADC (KoreanEncoding_t5814219CD9D13E6EC069FB231D7201D32B6B0E50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0;
		L_0 = VirtFuncInvoker0< DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * >::Invoke(48 /* I18N.CJK.DbcsConvert I18N.CJK.KoreanEncoding::GetConvert() */, __this);
		bool L_1 = __this->get_useUHC_63();
		KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 * L_2 = (KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 *)il2cpp_codegen_object_new(KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985_il2cpp_TypeInfo_var);
		KoreanDecoder__ctor_m01D56D817E67F42CA0B7024DC0FA2F8562963D8B(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.CP950/CP950Decoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CP950Decoder__ctor_m36D589BFA1334F9EDDAE161C7ECADB9AA07A74FE (CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF * __this, DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___convert0, const RuntimeMethod* method)
{
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = ___convert0;
		DbcsDecoder__ctor_mBC4EBD2874BECCC0EBE1D8A5AB28B7200F031CC6(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetCharCount_m3A24A1C66AEB75A27D75E543DDFBE6278FF8AEC6 (CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = CP950Decoder_GetCharCount_m8528F6B5BA28861AD896880AD577E003624A92A7(__this, L_0, L_1, L_2, (bool)0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetCharCount_m8528F6B5BA28861AD896880AD577E003624A92A7 (CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t G_B14_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_last_byte_count_3();
		V_0 = L_3;
		__this->set_last_byte_count_3(0);
		V_1 = 0;
		goto IL_00e8;
	}

IL_001e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_004c;
		}
	}

IL_0043:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_0072;
	}

IL_004c:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)161))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)250))))
		{
			goto IL_0070;
		}
	}

IL_0062:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = ___count2;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		goto IL_0072;
	}

IL_0070:
	{
		int32_t L_17 = V_2;
		V_0 = L_17;
	}

IL_0072:
	{
		goto IL_00e8;
	}

IL_0077:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)161))), (int32_t)((int32_t)191))), (int32_t)L_19)), (int32_t)((int32_t)64))), (int32_t)2));
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_21 = V_3;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_22 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_22);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = L_22->get_n2u_0();
		NullCheck(L_23);
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_00ac;
		}
	}

IL_00a6:
	{
		G_B14_0 = 0;
		goto IL_00d0;
	}

IL_00ac:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_24 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = L_24->get_n2u_0();
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_29 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_29);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = L_29->get_n2u_0();
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		G_B14_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)((int32_t)256)))))));
	}

IL_00d0:
	{
		V_4 = G_B14_0;
		Il2CppChar L_34 = V_4;
		if (L_34)
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		goto IL_00e6;
	}

IL_00e2:
	{
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00e6:
	{
		V_0 = 0;
	}

IL_00e8:
	{
		int32_t L_37 = ___count2;
		int32_t L_38 = L_37;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1));
		if ((((int32_t)L_38) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_39 = V_0;
		if (!L_39)
		{
			goto IL_0111;
		}
	}
	{
		bool L_40 = ___refresh3;
		if (!L_40)
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		goto IL_0111;
	}

IL_010a:
	{
		int32_t L_42 = V_0;
		__this->set_last_byte_count_3(L_42);
	}

IL_0111:
	{
		int32_t L_43 = V_1;
		return L_43;
	}
}
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetChars_mD6D643A4572D1C72DA8461763AB77AF72B2B75F8 (CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = CP950Decoder_GetChars_m807387306A9CEF12928BBF0814B86BCD4C9B8D74(__this, L_0, L_1, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 I18N.CJK.CP950/CP950Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CP950Decoder_GetChars_m807387306A9CEF12928BBF0814B86BCD4C9B8D74 (CP950Decoder_t83627CA67B9AB516A70BB76BCA89C944E01D07CF * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t G_B14_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		int32_t L_6 = __this->get_last_byte_conv_4();
		V_1 = L_6;
		__this->set_last_byte_conv_4(0);
		goto IL_010d;
	}

IL_0023:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		int32_t L_8 = ___byteIndex1;
		int32_t L_9 = L_8;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0059;
		}
	}

IL_0048:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___chars3;
		int32_t L_16 = ___charIndex4;
		int32_t L_17 = L_16;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)((uint16_t)L_18)));
		goto IL_0087;
	}

IL_0059:
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)161))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)250))))
		{
			goto IL_0085;
		}
	}

IL_006f:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___chars3;
		int32_t L_22 = ___charIndex4;
		int32_t L_23 = L_22;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (Il2CppChar)((int32_t)63));
		int32_t L_24 = ___byteCount2;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		goto IL_0087;
	}

IL_0085:
	{
		int32_t L_25 = V_2;
		V_1 = L_25;
	}

IL_0087:
	{
		goto IL_010d;
	}

IL_008c:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)161))), (int32_t)((int32_t)191))), (int32_t)L_27)), (int32_t)((int32_t)64))), (int32_t)2));
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_29 = V_3;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_30 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = L_30->get_n2u_0();
		NullCheck(L_31);
		if ((((int32_t)L_29) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))
		{
			goto IL_00c1;
		}
	}

IL_00bb:
	{
		G_B14_0 = 0;
		goto IL_00e5;
	}

IL_00c1:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_32 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_32);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = L_32->get_n2u_0();
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_37 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = L_37->get_n2u_0();
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		uint8_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		G_B14_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_41, (int32_t)((int32_t)256)))))));
	}

IL_00e5:
	{
		V_4 = G_B14_0;
		Il2CppChar L_42 = V_4;
		if (L_42)
		{
			goto IL_00ff;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = ___chars3;
		int32_t L_44 = ___charIndex4;
		int32_t L_45 = L_44;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (Il2CppChar)((int32_t)63));
		goto IL_010b;
	}

IL_00ff:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_46 = ___chars3;
		int32_t L_47 = ___charIndex4;
		int32_t L_48 = L_47;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		Il2CppChar L_49 = V_4;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Il2CppChar)L_49);
	}

IL_010b:
	{
		V_1 = 0;
	}

IL_010d:
	{
		int32_t L_50 = ___byteCount2;
		int32_t L_51 = L_50;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_52 = V_1;
		if (!L_52)
		{
			goto IL_013e;
		}
	}
	{
		bool L_53 = ___refresh5;
		if (!L_53)
		{
			goto IL_0137;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_54 = ___chars3;
		int32_t L_55 = ___charIndex4;
		int32_t L_56 = L_55;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (Il2CppChar)((int32_t)63));
		goto IL_013e;
	}

IL_0137:
	{
		int32_t L_57 = V_1;
		__this->set_last_byte_conv_4(L_57);
	}

IL_013e:
	{
		int32_t L_58 = ___charIndex4;
		int32_t L_59 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)L_59));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::.ctor(I18N.CJK.DbcsConvert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder__ctor_mBC4EBD2874BECCC0EBE1D8A5AB28B7200F031CC6 (DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE * __this, DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___convert0, const RuntimeMethod* method)
{
	{
		Decoder__ctor_m2EA154371203FAAE1CD0477C828E0B39B2091DF3(__this, /*hidden argument*/NULL);
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = ___convert0;
		__this->set_convert_2(L_0);
		return;
	}
}
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C (DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C_RuntimeMethod_var)));
	}

IL_0011:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___index1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_0021:
	{
		String_t* L_5;
		L_5 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_8 = ___count2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bytes0;
		NullCheck(L_9);
		int32_t L_10 = ___index1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), (int32_t)L_10)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		String_t* L_11;
		L_11 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_12 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C_RuntimeMethod_var)));
	}

IL_005d:
	{
		return;
	}
}
// System.Void I18N.CJK.DbcsEncoding/DbcsDecoder::CheckRange(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D (DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D_RuntimeMethod_var)));
	}

IL_0011:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___chars3;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F04E415359BAAEA12C3DA482EAACC98D2F7EDC8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_4 = ___byteIndex1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = ___byteIndex1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0048;
		}
	}

IL_0033:
	{
		String_t* L_7;
		L_7 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral135BCD65E52CDAFB4FCF5E6C49A413A0CB794D3B)), L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_9 = ___byteCount2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_10 = ___byteIndex1;
		int32_t L_11 = ___byteCount2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bytes0;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_006f;
		}
	}

IL_005a:
	{
		String_t* L_13;
		L_13 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_14 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA91A6F78B958DA5FF4B61532CF56E4AEBBF872C)), L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D_RuntimeMethod_var)));
	}

IL_006f:
	{
		int32_t L_15 = ___charIndex4;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_16 = ___charIndex4;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = ___chars3;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0097;
		}
	}

IL_0082:
	{
		String_t* L_18;
		L_18 = Strings_GetString_m64BE2D599331F996B8A04EBEEEA87437CDD91F09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE156A07BD53166C43D7130252A6777DEECD332)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_19 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAAD91FE754F32DC76537C154682A89C05C27E0F3)), L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D_RuntimeMethod_var)));
	}

IL_0097:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.GB18030Source/GB18030Map::.ctor(System.Int32,System.Int32,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GB18030Map__ctor_m7E8CFF103B8F846B14D9FB6945C951AD6EEBCF66 (GB18030Map_t6918EC0AD45AF9AFB5153EB3896BC627ADF1DB87 * __this, int32_t ___ustart0, int32_t ___uend1, int64_t ___gstart2, int64_t ___gend3, bool ___dummy4, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ustart0;
		__this->set_UStart_0(L_0);
		int32_t L_1 = ___uend1;
		__this->set_UEnd_1(L_1);
		int64_t L_2 = ___gstart2;
		__this->set_GStart_2(L_2);
		int64_t L_3 = ___gend3;
		__this->set_GEnd_3(L_3);
		bool L_4 = ___dummy4;
		__this->set_Dummy_4(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void I18N.CJK.KoreanEncoding/KoreanDecoder::.ctor(I18N.CJK.DbcsConvert,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreanDecoder__ctor_m01D56D817E67F42CA0B7024DC0FA2F8562963D8B (KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 * __this, DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * ___convert0, bool ___useUHC1, const RuntimeMethod* method)
{
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_0 = ___convert0;
		DbcsDecoder__ctor_mBC4EBD2874BECCC0EBE1D8A5AB28B7200F031CC6(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___useUHC1;
		__this->set_useUHC_3(L_1);
		return;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetCharCount_m8FE83E12EC1EC92EAFB644D40F1FE2FA3F26A07C (KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = KoreanDecoder_GetCharCount_m8449A9E1C1D3A322EE7911925BB53DDC31A871E1(__this, L_0, L_1, L_2, (bool)0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetCharCount_m8449A9E1C1D3A322EE7911925BB53DDC31A871E1 (KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___index1, int32_t ___count2, bool ___refresh3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B47_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		DbcsDecoder_CheckRange_m9E8B58A8B66FD3123071F5536B203F0DFB3DCA2C(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_last_byte_count_4();
		V_0 = L_3;
		__this->set_last_byte_count_4(0);
		V_1 = 0;
		goto IL_02c4;
	}

IL_001e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		int32_t L_5 = ___index1;
		int32_t L_6 = L_5;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_004c;
		}
	}

IL_0043:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_02c4;
	}

IL_004c:
	{
		int32_t L_13 = V_2;
		V_0 = L_13;
		goto IL_02c4;
	}

IL_0053:
	{
		bool L_14 = __this->get_useUHC_3();
		if (!L_14)
		{
			goto IL_013f;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)161))))
		{
			goto IL_013f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)8836), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)129))), (int32_t)((int32_t)178)))));
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)65))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)90))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_19 = V_4;
		int32_t L_20 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)65)))));
		goto IL_00ea;
	}

IL_009c:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)97))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)122))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_23 = V_4;
		int32_t L_24 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)97))), (int32_t)((int32_t)26)))));
		goto IL_00ea;
	}

IL_00bd:
	{
		int32_t L_25 = V_2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)129))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)254))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)((int32_t)129))), (int32_t)((int32_t)52)))));
		goto IL_00ea;
	}

IL_00e7:
	{
		V_4 = (-1);
	}

IL_00ea:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_4;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_31 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_31);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = L_31->get_n2u_0();
		NullCheck(L_32);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)2))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0138;
		}
	}
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_33 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = L_33->get_n2u_0();
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_35, (int32_t)2));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_38 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_38);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = L_38->get_n2u_0();
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)2)), (int32_t)1));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_3 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)((int32_t)256)))))));
		goto IL_013a;
	}

IL_0138:
	{
		V_3 = 0;
	}

IL_013a:
	{
		goto IL_02af;
	}

IL_013f:
	{
		bool L_43 = __this->get_useUHC_3();
		if (!L_43)
		{
			goto IL_0233;
		}
	}
	{
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)198))))
		{
			goto IL_0233;
		}
	}
	{
		int32_t L_45 = V_2;
		if ((((int32_t)L_45) >= ((int32_t)((int32_t)161))))
		{
			goto IL_0233;
		}
	}
	{
		int32_t L_46 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)14532), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)161))), (int32_t)((int32_t)84)))));
		int32_t L_47 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)65))))
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) > ((int32_t)((int32_t)90))))
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_49 = V_5;
		int32_t L_50 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)65)))));
		goto IL_01de;
	}

IL_0190:
	{
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)97))))
		{
			goto IL_01b1;
		}
	}
	{
		int32_t L_52 = V_2;
		if ((((int32_t)L_52) > ((int32_t)((int32_t)122))))
		{
			goto IL_01b1;
		}
	}
	{
		int32_t L_53 = V_5;
		int32_t L_54 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)((int32_t)97))), (int32_t)((int32_t)26)))));
		goto IL_01de;
	}

IL_01b1:
	{
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)129))))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_56 = V_2;
		if ((((int32_t)L_56) > ((int32_t)((int32_t)160))))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_57 = V_5;
		int32_t L_58 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)((int32_t)129))), (int32_t)((int32_t)52)))));
		goto IL_01de;
	}

IL_01db:
	{
		V_5 = (-1);
	}

IL_01de:
	{
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) < ((int32_t)0)))
		{
			goto IL_022c;
		}
	}
	{
		int32_t L_60 = V_5;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_61 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_61);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = L_61->get_n2u_0();
		NullCheck(L_62);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_60, (int32_t)2))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
		{
			goto IL_022c;
		}
	}
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_63 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_63);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = L_63->get_n2u_0();
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_65, (int32_t)2));
		uint8_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_68 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_68);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_69 = L_68->get_n2u_0();
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_70, (int32_t)2)), (int32_t)1));
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_3 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_72, (int32_t)((int32_t)256)))))));
		goto IL_022e;
	}

IL_022c:
	{
		V_3 = 0;
	}

IL_022e:
	{
		goto IL_02af;
	}

IL_0233:
	{
		int32_t L_73 = V_2;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)161))))
		{
			goto IL_02ad;
		}
	}
	{
		int32_t L_74 = V_2;
		if ((((int32_t)L_74) > ((int32_t)((int32_t)254))))
		{
			goto IL_02ad;
		}
	}
	{
		int32_t L_75 = V_0;
		int32_t L_76 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)((int32_t)161))), (int32_t)((int32_t)94))), (int32_t)L_76)), (int32_t)((int32_t)161))), (int32_t)2));
		int32_t L_77 = V_6;
		if ((((int32_t)L_77) < ((int32_t)0)))
		{
			goto IL_027b;
		}
	}
	{
		int32_t L_78 = V_6;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_79 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_79);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_80 = L_79->get_n2u_0();
		NullCheck(L_80);
		if ((((int32_t)L_78) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length))))))
		{
			goto IL_0281;
		}
	}

IL_027b:
	{
		G_B47_0 = 0;
		goto IL_02a7;
	}

IL_0281:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_81 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_81);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82 = L_81->get_n2u_0();
		int32_t L_83 = V_6;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint8_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_86 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_86);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_87 = L_86->get_n2u_0();
		int32_t L_88 = V_6;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		uint8_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		G_B47_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_90, (int32_t)((int32_t)256)))))));
	}

IL_02a7:
	{
		V_3 = G_B47_0;
		goto IL_02af;
	}

IL_02ad:
	{
		V_3 = 0;
	}

IL_02af:
	{
		Il2CppChar L_91 = V_3;
		if (L_91)
		{
			goto IL_02be;
		}
	}
	{
		int32_t L_92 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
		goto IL_02c2;
	}

IL_02be:
	{
		int32_t L_93 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_02c2:
	{
		V_0 = 0;
	}

IL_02c4:
	{
		int32_t L_94 = ___count2;
		int32_t L_95 = L_94;
		___count2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1));
		if ((((int32_t)L_95) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_96 = V_0;
		if (!L_96)
		{
			goto IL_02f4;
		}
	}
	{
		bool L_97 = ___refresh3;
		if (!L_97)
		{
			goto IL_02ed;
		}
	}
	{
		int32_t L_98 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		__this->set_last_byte_count_4(0);
		goto IL_02f4;
	}

IL_02ed:
	{
		int32_t L_99 = V_0;
		__this->set_last_byte_count_4(L_99);
	}

IL_02f4:
	{
		int32_t L_100 = V_1;
		return L_100;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetChars_m91AD83D239020399F45E024C23AE9EDE5F6E66F5 (KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		int32_t L_5;
		L_5 = KoreanDecoder_GetChars_mD2C76BB4E554BA55305961888ED05DC0DDD111F8(__this, L_0, L_1, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 I18N.CJK.KoreanEncoding/KoreanDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KoreanDecoder_GetChars_mD2C76BB4E554BA55305961888ED05DC0DDD111F8 (KoreanDecoder_t7735727CF6FD3FC0C76A9FFE136CBFADA9869985 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars3, int32_t ___charIndex4, bool ___refresh5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B47_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = ___byteIndex1;
		int32_t L_2 = ___byteCount2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = ___chars3;
		int32_t L_4 = ___charIndex4;
		DbcsDecoder_CheckRange_m96A16F45791FD20C191EA958EBAB27BE904AFA1D(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___charIndex4;
		V_0 = L_5;
		int32_t L_6 = __this->get_last_byte_conv_5();
		V_1 = L_6;
		__this->set_last_byte_conv_5(0);
		goto IL_02e0;
	}

IL_0023:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bytes0;
		int32_t L_8 = ___byteIndex1;
		int32_t L_9 = L_8;
		___byteIndex1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		int32_t L_12 = V_1;
		if (L_12)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0059;
		}
	}

IL_0048:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = ___chars3;
		int32_t L_16 = ___charIndex4;
		int32_t L_17 = L_16;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)((int32_t)((uint16_t)L_18)));
		goto IL_02e0;
	}

IL_0059:
	{
		int32_t L_19 = V_2;
		V_1 = L_19;
		goto IL_02e0;
	}

IL_0060:
	{
		bool L_20 = __this->get_useUHC_3();
		if (!L_20)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)161))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_22 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)8836), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)129))), (int32_t)((int32_t)178)))));
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)65))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) > ((int32_t)((int32_t)90))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)65)))));
		goto IL_00f7;
	}

IL_00a9:
	{
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)97))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)122))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)97))), (int32_t)((int32_t)26)))));
		goto IL_00f7;
	}

IL_00ca:
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)129))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) > ((int32_t)((int32_t)254))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)((int32_t)129))), (int32_t)((int32_t)52)))));
		goto IL_00f7;
	}

IL_00f4:
	{
		V_4 = (-1);
	}

IL_00f7:
	{
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) < ((int32_t)0)))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_36 = V_4;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_37 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = L_37->get_n2u_0();
		NullCheck(L_38);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)2))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_0145;
		}
	}
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_39 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_39);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = L_39->get_n2u_0();
		int32_t L_41 = V_4;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_41, (int32_t)2));
		uint8_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_44 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_44);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = L_44->get_n2u_0();
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_46, (int32_t)2)), (int32_t)1));
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_3 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_48, (int32_t)((int32_t)256)))))));
		goto IL_0147;
	}

IL_0145:
	{
		V_3 = 0;
	}

IL_0147:
	{
		goto IL_02bc;
	}

IL_014c:
	{
		bool L_49 = __this->get_useUHC_3();
		if (!L_49)
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)((int32_t)198))))
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)161))))
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_52 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)14532), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)((int32_t)161))), (int32_t)((int32_t)84)))));
		int32_t L_53 = V_2;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)65))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_54 = V_2;
		if ((((int32_t)L_54) > ((int32_t)((int32_t)90))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_55 = V_5;
		int32_t L_56 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)((int32_t)65)))));
		goto IL_01eb;
	}

IL_019d:
	{
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)((int32_t)97))))
		{
			goto IL_01be;
		}
	}
	{
		int32_t L_58 = V_2;
		if ((((int32_t)L_58) > ((int32_t)((int32_t)122))))
		{
			goto IL_01be;
		}
	}
	{
		int32_t L_59 = V_5;
		int32_t L_60 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)((int32_t)97))), (int32_t)((int32_t)26)))));
		goto IL_01eb;
	}

IL_01be:
	{
		int32_t L_61 = V_2;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)129))))
		{
			goto IL_01e8;
		}
	}
	{
		int32_t L_62 = V_2;
		if ((((int32_t)L_62) > ((int32_t)((int32_t)160))))
		{
			goto IL_01e8;
		}
	}
	{
		int32_t L_63 = V_5;
		int32_t L_64 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)((int32_t)129))), (int32_t)((int32_t)52)))));
		goto IL_01eb;
	}

IL_01e8:
	{
		V_5 = (-1);
	}

IL_01eb:
	{
		int32_t L_65 = V_5;
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0239;
		}
	}
	{
		int32_t L_66 = V_5;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_67 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_67);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68 = L_67->get_n2u_0();
		NullCheck(L_68);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_66, (int32_t)2))) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_0239;
		}
	}
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_69 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_69);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_70 = L_69->get_n2u_0();
		int32_t L_71 = V_5;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_71, (int32_t)2));
		uint8_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_74 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_74);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = L_74->get_n2u_0();
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_76, (int32_t)2)), (int32_t)1));
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_3 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_78, (int32_t)((int32_t)256)))))));
		goto IL_023b;
	}

IL_0239:
	{
		V_3 = 0;
	}

IL_023b:
	{
		goto IL_02bc;
	}

IL_0240:
	{
		int32_t L_79 = V_2;
		if ((((int32_t)L_79) < ((int32_t)((int32_t)161))))
		{
			goto IL_02ba;
		}
	}
	{
		int32_t L_80 = V_2;
		if ((((int32_t)L_80) > ((int32_t)((int32_t)254))))
		{
			goto IL_02ba;
		}
	}
	{
		int32_t L_81 = V_1;
		int32_t L_82 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)((int32_t)161))), (int32_t)((int32_t)94))), (int32_t)L_82)), (int32_t)((int32_t)161))), (int32_t)2));
		int32_t L_83 = V_6;
		if ((((int32_t)L_83) < ((int32_t)0)))
		{
			goto IL_0288;
		}
	}
	{
		int32_t L_84 = V_6;
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_85 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_85);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = L_85->get_n2u_0();
		NullCheck(L_86);
		if ((((int32_t)L_84) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_86)->max_length))))))
		{
			goto IL_028e;
		}
	}

IL_0288:
	{
		G_B47_0 = 0;
		goto IL_02b4;
	}

IL_028e:
	{
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_87 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_87);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = L_87->get_n2u_0();
		int32_t L_89 = V_6;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		DbcsConvert_t9B3A79910EC88E9E1231D6B5018CA77038598EF3 * L_92 = ((DbcsDecoder_tF48215339FAE5161875F1CE8C3ACC42F65D733BE *)__this)->get_convert_2();
		NullCheck(L_92);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_93 = L_92->get_n2u_0();
		int32_t L_94 = V_6;
		NullCheck(L_93);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		uint8_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		G_B47_0 = ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_96, (int32_t)((int32_t)256)))))));
	}

IL_02b4:
	{
		V_3 = G_B47_0;
		goto IL_02bc;
	}

IL_02ba:
	{
		V_3 = 0;
	}

IL_02bc:
	{
		Il2CppChar L_97 = V_3;
		if (L_97)
		{
			goto IL_02d3;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_98 = ___chars3;
		int32_t L_99 = ___charIndex4;
		int32_t L_100 = L_99;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (Il2CppChar)((int32_t)63));
		goto IL_02de;
	}

IL_02d3:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_101 = ___chars3;
		int32_t L_102 = ___charIndex4;
		int32_t L_103 = L_102;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		Il2CppChar L_104 = V_3;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (Il2CppChar)L_104);
	}

IL_02de:
	{
		V_1 = 0;
	}

IL_02e0:
	{
		int32_t L_105 = ___byteCount2;
		int32_t L_106 = L_105;
		___byteCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1));
		if ((((int32_t)L_106) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_107 = V_1;
		if (!L_107)
		{
			goto IL_0318;
		}
	}
	{
		bool L_108 = ___refresh5;
		if (!L_108)
		{
			goto IL_0311;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_109 = ___chars3;
		int32_t L_110 = ___charIndex4;
		int32_t L_111 = L_110;
		___charIndex4 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1));
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (Il2CppChar)((int32_t)63));
		__this->set_last_byte_conv_5(0);
		goto IL_0318;
	}

IL_0311:
	{
		int32_t L_112 = V_1;
		__this->set_last_byte_conv_5(L_112);
	}

IL_0318:
	{
		int32_t L_113 = ___charIndex4;
		int32_t L_114 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)L_114));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
