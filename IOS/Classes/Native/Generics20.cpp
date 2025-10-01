#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Boolean>
struct Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>
struct Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>
struct Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Boolean>
struct Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>
struct Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>
struct Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>
struct Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD;
// System.Func`2<UnityEngine.Bounds,System.Boolean>
struct Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215;
// System.Func`2<System.Int64,System.Int32>
struct Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,UnityEngine.Bounds>
struct Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.Boolean>
struct Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerable_1_t254DD0CAF887398174AE3DB4C2FF15F27F85E84F;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerable_1_t0C18AA77990353303F13A34F97E41ECBB246A29E;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Bounds>
struct IEnumerable_1_t79C434650C76E47963C13E36EED792D61B45990F;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_tBA0E6E878DA8F8DD29D887670962BCC85E2FCB3E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct IEnumerable_1_tCB8936388CEBEAE50F91BD0AD503C8ED6F0F3415;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IEnumerator_1_tDAF514E77572EC170A11F75AEB9612CC3816D919;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t86CB8EAE6CD9BED0161066249A67CA1BCC4837BC;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Bounds>
struct IEnumerator_1_t0D9A1EB8D24C36759C9DEF424C676837072ADF60;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_tAA2BE9F7B57F3BA20E480FBFDAC12A6CFDB0D296;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct IEnumerator_1_tEE268DF16148622CD0A3F6A9C2431B8B5444AA97;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>
struct Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379;
// System.Linq.Enumerable/Iterator`1<System.Int64>
struct Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Linq.Enumerable/Iterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Bounds>
struct WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>
struct WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereListIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>
struct WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>
struct WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>
struct WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>
struct WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>
struct WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int64,System.Int32>
struct WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.Bounds>
struct WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>
struct WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>
struct WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>
struct WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>
struct WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>
struct WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int64,System.Int32>
struct WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.Bounds>
struct WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>
struct WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>
struct WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>
struct WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>
struct WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>
struct WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int64,System.Int32>
struct WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Bounds>
struct WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462;
struct KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37;
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int64>
struct Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int64_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE, ___current_2)); }
	inline int64_t get_current_2() const { return ___current_2; }
	inline int64_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int64_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int64>
struct List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____items_1)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get__items_1() const { return ____items_1; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4_StaticFields, ____emptyArray_5)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6, ____items_1)); }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* get__items_1() const { return ____items_1; }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6_StaticFields, ____emptyArray_5)); }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// System.Collections.Generic.List`1/Enumerator<System.Int64>
struct Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int64_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37, ___list_0)); }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * get_list_0() const { return ___list_0; }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37, ___current_3)); }
	inline int64_t get_current_3() const { return ___current_3; }
	inline int64_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int64_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
struct KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2, ___key_0)); }
	inline int64_t get_key_0() const { return ___key_0; }
	inline int64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
struct KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 
{
public:
	// T1 System.ValueTuple`5::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	RuntimeObject * ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	RuntimeObject * ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	RuntimeObject * ___Item5_4;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item3_2)); }
	inline RuntimeObject * get_Item3_2() const { return ___Item3_2; }
	inline RuntimeObject ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(RuntimeObject * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item5_4)); }
	inline RuntimeObject * get_Item5_4() const { return ___Item5_4; }
	inline RuntimeObject ** get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(RuntimeObject * value)
	{
		___Item5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item5_4), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>
struct WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1, ___predicate_4)); }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>
struct WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD, ___predicate_4)); }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD, ___selector_5)); }
	inline Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>
struct WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261, ___predicate_4)); }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261, ___selector_5)); }
	inline Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>
struct WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666, ___predicate_4)); }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666, ___selector_5)); }
	inline Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int64,System.Int32>
struct WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472, ___source_3)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get_source_3() const { return ___source_3; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472, ___predicate_4)); }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472, ___selector_5)); }
	inline Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>
struct WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734, ___predicate_4)); }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734, ___selector_5)); }
	inline Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>
struct WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE, ___predicate_4)); }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE, ___selector_5)); }
	inline Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>
struct WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451, ___predicate_4)); }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451, ___selector_5)); }
	inline Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int64,System.Int32>
struct WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9, ___predicate_4)); }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9, ___selector_5)); }
	inline Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6, ___list_0)); }
	inline List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * get_list_0() const { return ___list_0; }
	inline List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6, ___current_3)); }
	inline KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1, ___list_0)); }
	inline List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * get_list_0() const { return ___list_0; }
	inline List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1, ___current_3)); }
	inline KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___list_0)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_list_0() const { return ___list_0; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2, ___current_2)); }
	inline KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_1), (void*)NULL);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49, ___current_2)); }
	inline KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___key_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___current_2)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int64,System.Int32>
struct WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A, ___source_3)); }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * get_source_3() const { return ___source_3; }
	inline List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A, ___predicate_4)); }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A, ___selector_5)); }
	inline Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A, ___enumerator_6)); }
	inline Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
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


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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


// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct X509ChainStatusFlags_t16F457BB24891840519B66C39DE91268909174F9 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t16F457BB24891840519B66C39DE91268909174F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>
struct Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8, ___current_2)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_current_2() const { return ___current_2; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF  : public Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF, ___predicate_4)); }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD  : public Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD, ___predicate_4)); }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576  : public Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576, ___predicate_4)); }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE  : public Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE, ___predicate_4)); }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420  : public Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420, ___source_3)); }
	inline List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * get_source_3() const { return ___source_3; }
	inline List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420, ___predicate_4)); }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420, ___enumerator_5)); }
	inline Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22  : public Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22, ___source_3)); }
	inline List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * get_source_3() const { return ___source_3; }
	inline List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22, ___predicate_4)); }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22, ___enumerator_5)); }
	inline Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___key_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___enumerator_5)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>
struct WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184, ___source_3)); }
	inline List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * get_source_3() const { return ___source_3; }
	inline List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184, ___predicate_4)); }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184, ___selector_5)); }
	inline Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * get_selector_5() const { return ___selector_5; }
	inline Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184, ___enumerator_6)); }
	inline Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>
struct WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D, ___source_3)); }
	inline List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * get_source_3() const { return ___source_3; }
	inline List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D, ___predicate_4)); }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D, ___selector_5)); }
	inline Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D, ___enumerator_6)); }
	inline Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>
struct WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D, ___source_3)); }
	inline List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * get_source_3() const { return ___source_3; }
	inline List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D, ___predicate_4)); }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D, ___selector_5)); }
	inline Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D, ___enumerator_6)); }
	inline Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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


// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___info_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD, ___list_0)); }
	inline List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * get_list_0() const { return ___list_0; }
	inline List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD, ___current_3)); }
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  get_current_3() const { return ___current_3; }
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___info_1), (void*)NULL);
	}
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Boolean>
struct Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>
struct Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>
struct Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Boolean>
struct Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>
struct Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>
struct Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>
struct Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Bounds,System.Boolean>
struct Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int64,System.Int32>
struct Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,UnityEngine.Bounds>
struct Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.Boolean>
struct Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable/Iterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B, ___current_2)); }
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  get_current_2() const { return ___current_2; }
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___info_1), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Bounds>
struct WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233, ___predicate_4)); }
	inline Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>
struct WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE, ___predicate_4)); }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE, ___selector_5)); }
	inline Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>
struct WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4, ___selector_5)); }
	inline Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.Bounds>
struct WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581, ___selector_5)); }
	inline Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>
struct WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4, ___predicate_4)); }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4, ___selector_5)); }
	inline Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>
struct WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D, ___selector_5)); }
	inline Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.Bounds>
struct WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8, ___selector_5)); }
	inline Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>
struct WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF, ___source_3)); }
	inline List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * get_source_3() const { return ___source_3; }
	inline List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF, ___predicate_4)); }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF, ___selector_5)); }
	inline Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF, ___enumerator_6)); }
	inline Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>
struct WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2, ___selector_5)); }
	inline Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Bounds>
struct WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C  : public Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C, ___selector_5)); }
	inline Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
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


// System.Linq.Enumerable/WhereArrayIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223  : public Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223, ___source_3)); }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* get_source_3() const { return ___source_3; }
	inline X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223, ___predicate_4)); }
	inline Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E  : public Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E, ___predicate_4)); }
	inline Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>
struct WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102  : public Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102, ___source_3)); }
	inline List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * get_source_3() const { return ___source_3; }
	inline List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102, ___predicate_4)); }
	inline Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102, ___enumerator_5)); }
	inline Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___info_1), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  m_Items[1];

public:
	inline KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  m_Items[1];

public:
	inline KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
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
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  m_Items[1];

public:
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  Enumerator_get_Current_m290640F097AF113C466EEBA5107E3850AB8FBA65_gshared_inline (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7A815733AA2D57CE50C0579CD9463138FC8122C8_gshared (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  Enumerator_get_Current_m22E12FC56CDD7B17E93102675B1A2D14F49DDCF6_gshared_inline (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0C5361F217FB210C835232A71B9FB7095E855D78_gshared (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  Enumerator_get_Current_m348C6B845FF580B01BAE81A4EBC0FE1938016B0D_gshared_inline (Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5D75FE85CB98A5CE86B6BF5A3721970B5745A86D_gshared (Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int64>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Enumerator_get_Current_m9EBEA7E72E64499B4BED94F77DF82E7B8C3F1CE0_gshared_inline (Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m25DAE3260BFED34CE518F60AF8D6768AF47A2DF2_gshared (Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 * __this, const RuntimeMethod* method);

// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
inline void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705 (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared)(__this, ___comparer0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
inline String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current()
inline KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  Enumerator_get_Current_m290640F097AF113C466EEBA5107E3850AB8FBA65_inline (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  (*) (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *, const RuntimeMethod*))Enumerator_get_Current_m290640F097AF113C466EEBA5107E3850AB8FBA65_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_m7A815733AA2D57CE50C0579CD9463138FC8122C8 (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *, const RuntimeMethod*))Enumerator_MoveNext_m7A815733AA2D57CE50C0579CD9463138FC8122C8_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current()
inline KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  Enumerator_get_Current_m22E12FC56CDD7B17E93102675B1A2D14F49DDCF6_inline (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  (*) (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *, const RuntimeMethod*))Enumerator_get_Current_m22E12FC56CDD7B17E93102675B1A2D14F49DDCF6_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
inline bool Enumerator_MoveNext_m0C5361F217FB210C835232A71B9FB7095E855D78 (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *, const RuntimeMethod*))Enumerator_MoveNext_m0C5361F217FB210C835232A71B9FB7095E855D78_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67 (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
inline X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  Enumerator_get_Current_m348C6B845FF580B01BAE81A4EBC0FE1938016B0D_inline (Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD * __this, const RuntimeMethod* method)
{
	return ((  X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  (*) (Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD *, const RuntimeMethod*))Enumerator_get_Current_m348C6B845FF580B01BAE81A4EBC0FE1938016B0D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
inline bool Enumerator_MoveNext_m5D75FE85CB98A5CE86B6BF5A3721970B5745A86D (Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD *, const RuntimeMethod*))Enumerator_MoveNext_m5D75FE85CB98A5CE86B6BF5A3721970B5745A86D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int64>::get_Current()
inline int64_t Enumerator_get_Current_m9EBEA7E72E64499B4BED94F77DF82E7B8C3F1CE0_inline (Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 *, const RuntimeMethod*))Enumerator_get_Current_m9EBEA7E72E64499B4BED94F77DF82E7B8C3F1CE0_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int64>::MoveNext()
inline bool Enumerator_MoveNext_m25DAE3260BFED34CE518F60AF8D6768AF47A2DF2 (Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 *, const RuntimeMethod*))Enumerator_MoveNext_m25DAE3260BFED34CE518F60AF8D6768AF47A2DF2_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		RuntimeObject * L_4 = ___item54;
		__this->set_Item5_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_10;
		L_10 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = ___other0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_20;
		L_20 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_21 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_22 = ___other0;
		RuntimeObject * L_23 = (RuntimeObject *)L_22.get_Item5_4();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20);
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20, (RuntimeObject *)L_21, (RuntimeObject *)L_23);
		return (bool)L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15.get_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_20 = V_0;
		RuntimeObject * L_21 = (RuntimeObject *)L_20.get_Item4_3();
		NullCheck((RuntimeObject*)L_18);
		bool L_22;
		L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		if (!L_22)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_23 = ___comparer1;
		RuntimeObject * L_24 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_25 = V_0;
		RuntimeObject * L_26 = (RuntimeObject *)L_25.get_Item5_4();
		NullCheck((RuntimeObject*)L_23);
		bool L_27;
		L_27 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_23, (RuntimeObject *)L_24, (RuntimeObject *)L_26);
		return (bool)L_27;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_14;
		L_14 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_16 = ___other0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16.get_Item3_2();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_28;
		L_28 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_30 = ___other0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item5_4();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		return (int32_t)L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		V_1 = (int32_t)L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return (int32_t)L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___comparer1;
		RuntimeObject * L_25 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_26 = V_0;
		RuntimeObject * L_27 = (RuntimeObject *)L_26.get_Item3_2();
		NullCheck((RuntimeObject*)L_24);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_24, (RuntimeObject *)L_25, (RuntimeObject *)L_27);
		V_1 = (int32_t)L_28;
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_30 = V_1;
		return (int32_t)L_30;
	}

IL_00a4:
	{
		RuntimeObject* L_31 = ___comparer1;
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_33 = V_0;
		RuntimeObject * L_34 = (RuntimeObject *)L_33.get_Item4_3();
		NullCheck((RuntimeObject*)L_31);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_34);
		V_1 = (int32_t)L_35;
		int32_t L_36 = V_1;
		if (!L_36)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_37 = V_1;
		return (int32_t)L_37;
	}

IL_00c6:
	{
		RuntimeObject* L_38 = ___comparer1;
		RuntimeObject * L_39 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_40 = V_0;
		RuntimeObject * L_41 = (RuntimeObject *)L_40.get_Item5_4();
		NullCheck((RuntimeObject*)L_38);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_38, (RuntimeObject *)L_39, (RuntimeObject *)L_41);
		return (int32_t)L_42;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_11)
		{
			G_B11_0 = L_10;
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_13)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		RuntimeObject ** L_20 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_21 = V_4;
		G_B17_0 = L_20;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		if (L_21)
		{
			G_B19_0 = L_20;
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_22;
		RuntimeObject * L_23 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		if (L_23)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_24;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)G_B20_4, (int32_t)G_B20_3, (int32_t)G_B20_2, (int32_t)G_B20_1, (int32_t)G_B20_0, /*hidden argument*/NULL);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		RuntimeObject* L_12 = ___comparer0;
		RuntimeObject * L_13 = (RuntimeObject *)__this->get_Item5_4();
		NullCheck((RuntimeObject*)L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_13);
		int32_t L_15;
		L_15 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, (int32_t)L_14, /*hidden argument*/NULL);
		return (int32_t)L_15;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		RuntimeObject ** L_17 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_18 = V_2;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
		if (L_18)
		{
			G_B11_0 = L_17;
			G_B11_1 = 5;
			G_B11_2 = L_16;
			G_B11_3 = L_16;
			goto IL_00bb;
		}
	}
	{
		RuntimeObject * L_19 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_19;
		RuntimeObject * L_20 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_20)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
		RuntimeObject ** L_31 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_32 = V_4;
		G_B17_0 = L_31;
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_30;
		G_B17_3 = L_30;
		if (L_32)
		{
			G_B19_0 = L_31;
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_30;
			G_B19_3 = L_30;
			goto IL_013f;
		}
	}
	{
		RuntimeObject * L_33 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_33;
		RuntimeObject * L_34 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_34)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_37;
		L_37 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_36, /*hidden argument*/NULL);
		return (String_t*)L_37;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m3C7207F079B87EC9B74FE0E36BE8F89BF09C34BB_gshared (WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF * __this, KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* ___source0, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
		((  void (*) (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 * WhereArrayIterator_1_Clone_m606462125759447F7CA0018A2C230313CFE8E9CE_gshared (WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_0 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF * L_2 = (WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF *, KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m83F293836D8A4AD858D142AA39DF0E0FFD96DA06_gshared (WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_1 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_4 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_6 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_7 = V_0;
		NullCheck((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_6, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_9 = V_0;
		((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_11 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Dispose() */, (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m9C5CDBAD01BB77DF324B6044BA4A9D813079D395_gshared (WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF * __this, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_0 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_2 = ___predicate0;
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_3;
		L_3 = ((  Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF * L_4 = (WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t63E13A2B771DEEB3458EA4D6DD40817336A95AFF *, KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5D9AA8FE7D1852474E4188BD9FCA3AF82CE8C73C_gshared (WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD * __this, KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* ___source0, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
		((  void (*) (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 * WhereArrayIterator_1_Clone_m4245B998F00E66D1440696B443FD4A0D49CB706B_gshared (WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_0 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD * L_2 = (WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD *, KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_mD36FB96579FABBFA95B7099415DC3529A5433546_gshared (WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_1 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_4 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_6 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_7 = V_0;
		NullCheck((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_6, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_9 = V_0;
		((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_11 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose() */, (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mCFC69D942EA8635255E3E94F5ECED3F4830BFFD4_gshared (WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD * __this, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_0 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_2 = ___predicate0;
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_3;
		L_3 = ((  Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD * L_4 = (WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t0518C911AF733A9A1BD1A523D92C0D10FFD57CBD *, KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mFA68796C995A71918347DA98D160E26649D6A1FC_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereArrayIterator_1_Clone_mD021B473127C1F6F14F3A65B5532C1680C976944_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_2 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m863DA6E4F0A213B340E29BED24B21CCF8CF3A8CA_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_7 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_6, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_0;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_11 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mBDA5AE3243C59C98DC1F78407A7C6B939F0ED8E7_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_4 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mDAB2BB265BE0ECACB2EB31964ADD3C27DDA168D5_gshared (WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 * __this, X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* ___source0, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
		((  void (*) (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B * WhereArrayIterator_1_Clone_m4DD5E05E61FA24314F3255BEB37D5C36BAFDD5B6_gshared (WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 * __this, const RuntimeMethod* method)
{
	{
		X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* L_0 = (X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F*)__this->get_source_3();
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_1 = (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)__this->get_predicate_4();
		WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 * L_2 = (WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 *, X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F*, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F*)L_0, (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m54DAD4F87E05A275AF4337BAD3032778EC10C5C2_gshared (WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 * __this, const RuntimeMethod* method)
{
	X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* L_1 = (X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_6 = (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)__this->get_predicate_4();
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_7 = V_0;
		NullCheck((Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_6, (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_9 = V_0;
		((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* L_11 = (X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose() */, (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m7CBCE1AC8D33E47F28C733848011000FCDADFA43_gshared (WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 * __this, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * ___predicate0, const RuntimeMethod* method)
{
	{
		X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F* L_0 = (X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F*)__this->get_source_3();
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_1 = (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)__this->get_predicate_4();
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_2 = ___predicate0;
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_3;
		L_3 = ((  Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * (*) (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_1, (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 * L_4 = (WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tE219BE4CC26A1E2E680C5E2A4504E94BB1945223 *, X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F*, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (X509ChainStatusU5BU5D_tC7AEAC6CC48DDA97176E20CE3EE221F28485666F*)L_0, (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE31BFA68F2914A51F2F2E6B98A0C765116B507BF_gshared (WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 * __this, RuntimeObject* ___source0, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
		((  void (*) (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 * WhereEnumerableIterator_1_Clone_mC9C72537679FCBFF00BAC4F884F3EADA76C8FAA8_gshared (WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 * L_2 = (WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 *, RuntimeObject*, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mCC74835470D85571EB1778EEC27559B7F9BCB386_gshared (WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
		((  void (*) (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m77867509EA55319FC539F5DFADF818027174CE48_gshared (WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_6;
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_7 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_8 = V_1;
		NullCheck((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_7, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_10 = V_1;
		((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Dispose() */, (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mEDCB8B9E7549944E98814C026B7E6AD38627FA55_gshared (WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 * __this, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_2 = ___predicate0;
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_3;
		L_3 = ((  Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 * L_4 = (WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t2BBFF52112D181C12E021200469F2B98D0315576 *, RuntimeObject*, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mCBC78D712BC69229455471F04B2E74714B85A655_gshared (WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE * __this, RuntimeObject* ___source0, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
		((  void (*) (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 * WhereEnumerableIterator_1_Clone_mE7E6106056CED92BD8A513DE54BE52F50812B430_gshared (WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE * L_2 = (WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE *, RuntimeObject*, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m41F0A9C1844B3805E536C27DFA0E1004E8BA9DF8_gshared (WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
		((  void (*) (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mCD27C36BF28C73B7A8C4B5A49EB459EB7B04BBBF_gshared (WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_6;
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_7 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_8 = V_1;
		NullCheck((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_7, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_10 = V_1;
		((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose() */, (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m6557375FD1574DE83A79FEF58FC1F4962160E2AB_gshared (WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE * __this, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_2 = ___predicate0;
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_3;
		L_3 = ((  Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE * L_4 = (WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t13535A4536061A55994ABF1A43BE3D1A2DED9FCE *, RuntimeObject*, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m707C14212113530906675226212BFB17FB9FFDAD_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereEnumerableIterator_1_Clone_m784C946DD2F2922C39D9D7F0FE127F9B3F6459B3_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_2 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mE16D9D538B2554CA7720C9950DED49B47FDCD080_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m63AA91504371EFC63212838247EC0751DEB04725_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mBC8A7812EA44E454BCB18F3920133BFD5EF67FA6_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_4 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Bounds>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mADC34F53D21E616D479CD4276C78BBE1889DE27A_gshared (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * __this, RuntimeObject* ___source0, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereEnumerableIterator_1_Clone_mB2F309E7DD7E2712231F119DE6F90CF2C4DABA73_gshared (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_1 = (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_2 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Bounds>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m1C34E5FC233C758E06BA3202422785B9879D8EF7_gshared (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mC6457FD3A805A916E2D0A3D0DE6E205C4E45C8CE_gshared (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Bounds>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_6;
		L_6 = InterfaceFuncInvoker0< Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Bounds>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 )L_6;
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_7 = (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)__this->get_predicate_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_8 = V_1;
		NullCheck((Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_7, (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_10 = V_1;
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Bounds>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m8E81D41399685BF8EE45F9AE7DA0712B37F99DE2_gshared (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_1 = (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)__this->get_predicate_4();
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_2 = ___predicate0;
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_3;
		L_3 = ((  Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * (*) (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_1, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_4 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mED9FE30D754A0ABE546A685684F523BC57509D0E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereEnumerableIterator_1_Clone_mB3FE252392A8FEA3638826A2C4D1195A4D3743BB_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_2 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mB841131399B8BA11B9D6DB37E11F90B1BFFBDA2D_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m819D14CC69CC48B0B84E497DFF1953AAFFF13333_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mD1B249C431E67DD9B73D781BEA79EF23E556B75E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = ___predicate0;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_3;
		L_3 = ((  Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_4 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mCCBCF83DC9048D3F82338174D1833F8EB088E773_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, RuntimeObject* ___source0, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereEnumerableIterator_1_Clone_m3F2E30D5F902F3107DCA4D0342E329A9E35CD2B8_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_2 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m303F03CB0C36E67FA3386A339B278E10983613DA_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m428E05857BCB466007F9A6644FA715D3652CA021_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int64_t L_6;
		L_6 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int64_t)L_6;
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_7 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		int64_t L_8 = V_1;
		NullCheck((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_7, (int64_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int64_t L_10 = V_1;
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mB644E9659730D759B0808E99F0C6E5BC13AC9BC6_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_2 = ___predicate0;
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_3;
		L_3 = ((  Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * (*) (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_1, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_4 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0980FAD00744BCCD157787F532C061E068B3FB38_gshared (WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E * __this, RuntimeObject* ___source0, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
		((  void (*) (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B * WhereEnumerableIterator_1_Clone_mF3EFBD3DB79E011D84A101F384C098B0B73E46EA_gshared (WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_1 = (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E * L_2 = (WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E *, RuntimeObject*, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mA767D8BD72806B7330A7442A97E4D3F4E3626865_gshared (WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
		((  void (*) (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m801A59CA248D02A9E1AA81281E83B204BCF018BE_gshared (WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_6;
		L_6 = InterfaceFuncInvoker0< X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB )L_6;
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_7 = (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)__this->get_predicate_4();
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_8 = V_1;
		NullCheck((Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_7, (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_10 = V_1;
		((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose() */, (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m1227CA5725A1B7A40EDAD0639EA56B50C7688D64_gshared (WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E * __this, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_1 = (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)__this->get_predicate_4();
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_2 = ___predicate0;
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_3;
		L_3 = ((  Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * (*) (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_1, (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E * L_4 = (WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t035FBDBBC72725121C8C9B71B3A8B120DB369A4E *, RuntimeObject*, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m82719E297D5D3948896F11245B28DEBEF8C2C413_gshared (WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 * __this, List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * ___source0, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
		((  void (*) (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 * WhereListIterator_1_Clone_mE86978825E9C50D39BAB6BC2C60B76E4C04704AA_gshared (WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 * __this, const RuntimeMethod* method)
{
	{
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_0 = (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 * L_2 = (WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 *, List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m4806B7C23C183440CA81F8F7FA3C8ABF103E0F7A_gshared (WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_3 = (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)__this->get_source_3();
		NullCheck((List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_3);
		Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  L_4;
		L_4 = ((  Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  (*) (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * L_5 = (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)__this->get_address_of_enumerator_5();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_6;
		L_6 = Enumerator_get_Current_m290640F097AF113C466EEBA5107E3850AB8FBA65_inline((Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_6;
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_7 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_8 = V_1;
		NullCheck((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_7, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_10 = V_1;
		((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * L_11 = (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m7A815733AA2D57CE50C0579CD9463138FC8122C8((Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Dispose() */, (Iterator_1_tDFFA6A5601C859A3AD1BF2305AC42385FB30CFC2 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mCF380DFD80CC5F9FA84BA7484C829B304CF55BD6_gshared (WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 * __this, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_0 = (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_2 = ___predicate0;
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_3;
		L_3 = ((  Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 * L_4 = (WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t0E0E67CF384420737DCCBF774D25174030224420 *, List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mB20E8C4C8EE2EFF81A45113ECBE0762FE4ADA777_gshared (WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 * __this, List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * ___source0, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
		((  void (*) (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 * WhereListIterator_1_Clone_mA4F3569D0B65C89A00D7DB53A86A3089796E9C54_gshared (WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 * __this, const RuntimeMethod* method)
{
	{
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_0 = (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 * L_2 = (WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 *, List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m381A991CF6171F0CBF73D830530DF11021CDFC19_gshared (WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_3 = (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)__this->get_source_3();
		NullCheck((List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_3);
		Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  L_4;
		L_4 = ((  Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  (*) (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * L_5 = (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)__this->get_address_of_enumerator_5();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_6;
		L_6 = Enumerator_get_Current_m22E12FC56CDD7B17E93102675B1A2D14F49DDCF6_inline((Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_6;
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_7 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_8 = V_1;
		NullCheck((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_7, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_10 = V_1;
		((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * L_11 = (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m0C5361F217FB210C835232A71B9FB7095E855D78((Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Dispose() */, (Iterator_1_t73C44E08B02E22750E97C9C430AFD8D2FE686D49 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mFDE89A33B785209C284F7D22813A6DA25924E7DA_gshared (WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 * __this, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_0 = (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_2 = ___predicate0;
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_3;
		L_3 = ((  Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 * L_4 = (WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t1782BAB2868461B1BF52FA316CD593CB48EE5A22 *, List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mFF43A0851AF3E2469A68EEE2A2698FD2CAC6E640_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereListIterator_1_Clone_m543689012B48160EAE9BC7EBCCE4BA0C39AFC412_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_2 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mF7804B57A97E06FE44F6B6E5ECB860105B14EC3B_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_11 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m367822A36B7AB1F301F12B849EFD9C456F898239_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_4 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m82BA47A30DA8D7CE3EB74D0E2B3589D286242477_gshared (WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 * __this, List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * ___source0, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
		((  void (*) (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B * WhereListIterator_1_Clone_m6E29D1F751E58F5C5C0FBE09F3C0A670498FEB01_gshared (WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 * __this, const RuntimeMethod* method)
{
	{
		List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * L_0 = (List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *)__this->get_source_3();
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_1 = (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)__this->get_predicate_4();
		WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 * L_2 = (WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 *, List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *)L_0, (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m0AE91A610069D728A2DEC364FC50EA30D6C9CBA5_gshared (WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * L_3 = (List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *)__this->get_source_3();
		NullCheck((List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *)L_3);
		Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD  L_4;
		L_4 = ((  Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD  (*) (List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD * L_5 = (Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD *)__this->get_address_of_enumerator_5();
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_6;
		L_6 = Enumerator_get_Current_m348C6B845FF580B01BAE81A4EBC0FE1938016B0D_inline((Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD *)(Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB )L_6;
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_7 = (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)__this->get_predicate_4();
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_8 = V_1;
		NullCheck((Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_7, (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_10 = V_1;
		((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD * L_11 = (Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m5D75FE85CB98A5CE86B6BF5A3721970B5745A86D((Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD *)(Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose() */, (Iterator_1_t04787288F3CF2DCDFEF89A5D67A524322BE4E33B *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mAAA08E7B185D596C1E911F49AF3D9CA01DE9FD64_gshared (WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 * __this, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 * L_0 = (List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *)__this->get_source_3();
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_1 = (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)__this->get_predicate_4();
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_2 = ___predicate0;
		Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * L_3;
		L_3 = ((  Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA * (*) (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_1, (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 * L_4 = (WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_tED81CE28AF5F681B181BE8D0C085EB1B01475102 *, List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *, Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tC12B69E9430500C9BFF5B4B3D9F51DEE87A9D4C6 *)L_0, (Func_2_t6615F27FBEF3BA601BB90F126390DF3530FB19EA *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m14FFB5EAF1D6E8451840B42DEB303E61E42EC3EA_gshared (WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD * __this, KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* ___source0, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate1, Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_mC8A2AD32C92653A052601FB2C9C468A79526DF83_gshared (WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_0 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * L_2 = (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD * L_3 = (WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD *, KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mA8A56228E736C5B738D7431FD4F3C04CEC653D19_gshared (WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_1 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_4 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_6 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_7 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_8 = V_0;
		NullCheck((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_7, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * L_10 = (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)__this->get_selector_5();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_11 = V_0;
		NullCheck((Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)L_10, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_14 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m4702FE4BE2BAC3B5350C4EE1685D0A2FF4208DC3_gshared (WhereSelectArrayIterator_2_tD49A98DCAE23E6DF31363BB03C8E45237C94FCAD * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m1B1000D4F3CF1EAEC1BE7F06B21D170D6B704919_gshared (WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261 * __this, KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* ___source0, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate1, Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectArrayIterator_2_Clone_m1E4EA6EADD8E20AEBE82EA7A6E59D6929ED87731_gshared (WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_0 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * L_2 = (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261 * L_3 = (WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261 *, KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mB30DFF3980B6106729FD0DFE5533F50B23DDE72B_gshared (WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_1 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_4 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_6 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_7 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_8 = V_0;
		NullCheck((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_7, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * L_10 = (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)__this->get_selector_5();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_11 = V_0;
		NullCheck((Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)L_10);
		int64_t L_12;
		L_12 = ((  int64_t (*) (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)L_10, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462* L_14 = (KeyValuePair_2U5BU5D_t5FCF4CDE71C93AE134C148C0B3CF24627C714462*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mAEFB8447ADF01E12829C63A92F6ECC3AA7C82F29_gshared (WhereSelectArrayIterator_2_t8EAA56ED851C1D5F4B8D13D3451FD871F3769261 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m8B324AA2197F4ABA7E2381DF2CB440B1C49FF333_gshared (WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE * __this, KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* ___source0, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate1, Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereSelectArrayIterator_2_Clone_m784FECD1F1320E172B389317A279CBD662AE6108_gshared (WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_0 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * L_2 = (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE * L_3 = (WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE *, KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m926ED481C9E6B438F700D1872754713CFAE6745A_gshared (WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_1 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_4 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_6 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_7 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_8 = V_0;
		NullCheck((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_7, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * L_10 = (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)__this->get_selector_5();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_11 = V_0;
		NullCheck((Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)L_10);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_12;
		L_12 = ((  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  (*) (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)L_10, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_14 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m842DE8E589691E2C49287B47F27E7FE7C93ACA7F_gshared (WhereSelectArrayIterator_2_tAE0633F0FA996D8E82F1A1EC01A05E43DF2E4AAE * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_1 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m98F5ABB0ABDD4005D6BDA926EE62E7E81F002DEA_gshared (WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666 * __this, KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* ___source0, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate1, Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mA43F93AB638AB6E79CC071512F2AAE7E805CE8BA_gshared (WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_0 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * L_2 = (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666 * L_3 = (WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666 *, KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m2888EB5B4A6A3EE6DE2F100E98412946ECFE8EC8_gshared (WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_1 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_4 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_6 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_7 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_8 = V_0;
		NullCheck((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_7, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * L_10 = (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)__this->get_selector_5();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_11 = V_0;
		NullCheck((Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)L_10, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37* L_14 = (KeyValuePair_2U5BU5D_t2A12BB2CA4DC9BFB0EC3D7C36B94EB82B2A5BD37*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mF8C88BCB17D2FC7CCF08F81A0EC4A8E6130E466F_gshared (WhereSelectArrayIterator_2_t23D0D11FBA4CE0AE5169190CED030B1D4DB52666 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m5D351BB084D106D21215A77B11E88173533A7CA2_gshared (WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4 * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereSelectArrayIterator_2_Clone_mD9F1FAE32BCEC6CB7D6EB6FED1AA80CF55C5A709_gshared (WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * L_2 = (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4 * L_3 = (WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4 *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mB5147A5D04FBA189F4B2C6AB7A0A96987A8F8911_gshared (WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * L_10 = (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		NullCheck((Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)L_10);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_12;
		L_12 = ((  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  (*) (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m6AB4649FE17933B9DD77BB983A08FB95FD481440_gshared (WhereSelectArrayIterator_2_tBC6EC374AE96E220C58A02022C2485A3795CC8F4 * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_1 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m753B845FC177A4500A5809EA02B94FD14C1017E9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m6D78D257291467E05FDD35D57F87C1B85FC13CF9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * L_3 = (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC8EA524E00550DADCB86D2D527C1BFDEE335EDF6_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_10 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB95AC53D5283844BEFB7F84CFABBED87446942F4_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int64,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m652F839886033A31860A5CFE42F2032D4E28C179_gshared (WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472 * __this, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___source0, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate1, Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int64,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_m59CBC5322C1569D20924032A79AF202233CC1D4B_gshared (WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472 * __this, const RuntimeMethod* method)
{
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)__this->get_source_3();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * L_2 = (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472 * L_3 = (WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472 *, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)L_0, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_1, (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int64,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mA1E0B4ABE22F075C766C4AE1E29AAE8F3126A27A_gshared (WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_1 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int64_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_6 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_7 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		int64_t L_8 = V_0;
		NullCheck((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_7, (int64_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * L_10 = (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)__this->get_selector_5();
		int64_t L_11 = V_0;
		NullCheck((Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)L_10, (int64_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_14 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int64,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m40E74186AC61B9AF455E509C320C5D3C41482ABD_gshared (WhereSelectArrayIterator_2_t7F6EE5531EA65FCB0B59104E0232DA13C651F472 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.Bounds>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mEAF2B8C7E1A531F7956B3344FA826FCE9FE9B9E2_gshared (WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereSelectArrayIterator_2_Clone_m06C3BB283F7C748C2934FE9F5E3D4A6D77AAA2F0_gshared (WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * L_2 = (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581 * L_3 = (WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mF2878B50BEEF922DDCD5039D94247D8A3AD38C3C_gshared (WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * L_10 = (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)L_10);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_12;
		L_12 = ((  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  (*) (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,UnityEngine.Bounds>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mA208597C18595D4C9585E7B5DDD8A7F6FF493883_gshared (WhereSelectArrayIterator_2_t79DDD9EE07ADC85090CB7B9096E2F71EA3DB5581 * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_1 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mE667E2F927AD732993B2FE1C0B08A01F29940963_gshared (WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734 * __this, RuntimeObject* ___source0, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate1, Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m596B465B04233E092955640F3B9906E3300249D3_gshared (WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * L_2 = (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734 * L_3 = (WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734 *, RuntimeObject*, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m96716ABDF1C57CFB7D425C5C2E29D43895175F98_gshared (WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m075453CF074406B30F0C205C8FDD6FAD7A91081D_gshared (WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_6;
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_7 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_8 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_9 = V_1;
		NullCheck((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_8, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * L_11 = (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)__this->get_selector_5();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_12 = V_1;
		NullCheck((Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)L_11, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m097CF59940699E8E354FB4BB07F0862E95AA0F42_gshared (WhereSelectEnumerableIterator_2_t3FD9A0AED922A6599A690E44B5B4706E04A31734 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mFC91FDE36D5516C4B6CAEC7AE489E4E593F19F4C_gshared (WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE * __this, RuntimeObject* ___source0, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate1, Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectEnumerableIterator_2_Clone_m09ACAC2111A92D5A3DDD744B798F50AFE67B109B_gshared (WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * L_2 = (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE * L_3 = (WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE *, RuntimeObject*, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mBCBC47D1A340FEC0EDC1588BC9A7F3F4E101359D_gshared (WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m172D4F2DFE134B59D5BA5F6EADE42F6F66657D77_gshared (WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_6;
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_7 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_8 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_9 = V_1;
		NullCheck((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_8, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * L_11 = (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)__this->get_selector_5();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_12 = V_1;
		NullCheck((Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)L_11);
		int64_t L_13;
		L_13 = ((  int64_t (*) (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)L_11, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mE9C3DFC767C3BDBF9A479513629B7DD3458E950A_gshared (WhereSelectEnumerableIterator_2_tC8535B5E2171F204441AACC727617E11EC8FF0EE * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m39CD98DE4D53323B5D50B5630E78BB2CCBAA46A4_gshared (WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4 * __this, RuntimeObject* ___source0, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate1, Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereSelectEnumerableIterator_2_Clone_mB769AC245B9A1E44E12B2AB138CFAA08CB179434_gshared (WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * L_2 = (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4 * L_3 = (WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4 *, RuntimeObject*, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mFB8D90274DC501B8A28827E2F4ABB10A62A8A58F_gshared (WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m2EAEE2644FB68B34A525E34F97CD4265EA23EB8C_gshared (WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_6;
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_7 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_8 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_9 = V_1;
		NullCheck((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_8, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * L_11 = (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)__this->get_selector_5();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_12 = V_1;
		NullCheck((Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)L_11);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_13;
		L_13 = ((  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  (*) (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)L_11, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m6D2FA0EE0FC55AA1AFF57CD22BDCF21DE166AA3D_gshared (WhereSelectEnumerableIterator_2_tA4873557F05DBECFBD625A4C2B7BC0F8A78425E4 * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_1 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m52B811C70ED307C441529A1132A5D749457BB3DA_gshared (WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451 * __this, RuntimeObject* ___source0, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate1, Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mBDF879F5005C5C5EF5F3B8ACFC87122AA6B2FA23_gshared (WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * L_2 = (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451 * L_3 = (WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451 *, RuntimeObject*, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m6C1E377C49AD1003EE9839FB5899A2AE1FFD0FF3_gshared (WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m911493D67F0DF7AE2A36826160A3C9DDDE035DE6_gshared (WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_6;
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_7 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_8 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_9 = V_1;
		NullCheck((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_8, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * L_11 = (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)__this->get_selector_5();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_12 = V_1;
		NullCheck((Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)L_11, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m497833A9B5CD8F6951750706D3B40E8FC8F40332_gshared (WhereSelectEnumerableIterator_2_tE4284E94801CD413C6EB21CCDF6817F909DE8451 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mB057DBBECFE6041C2CC9AA6E89991AF6C140F845_gshared (WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereSelectEnumerableIterator_2_Clone_m15AC964F94874F402ECAFA04275E4883B4FC44E0_gshared (WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * L_2 = (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D * L_3 = (WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mCBE701703E70AE38B5356ED957C98F91DB859EB0_gshared (WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mFD6DE424C7272BE985AAC7696E16EA984B17CC06_gshared (WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * L_11 = (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)L_11);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_13;
		L_13 = ((  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  (*) (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mA747525FC88634E98CD68CE4944B32F0BDAD0CD0_gshared (WhereSelectEnumerableIterator_2_t225C98C6E19D5438A2BA01FE06736DD7A45E510D * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_1 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m634CE03BF281A9966A650B2BA6ED44AD72E5879F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m82474F2DE866D303C5767C7B58EE3213342A29F0_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * L_3 = (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAB2AD9EAF60076FC567705357B1A87DCC0FDC6F7_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m9AED0076EB03B4E46908FB05BEB74852F542382E_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mDF3B69D0756C062EA752AA0B60FA20A65396313F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m89D8A49EA94D4BC08457393780A5EBBD2ACFDB2F_gshared (WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9 * __this, RuntimeObject* ___source0, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate1, Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int64,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_mB11CF8513A1AC94FFA2933C75F0657140832AF95_gshared (WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * L_2 = (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9 * L_3 = (WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_1, (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int64,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m9D1E160CA687CDBACB889F80003026E1681268B2_gshared (WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int64,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mEC319E04E08B0A7B7686A2ACDB44B349F1F8D51B_gshared (WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int64_t L_6;
		L_6 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int64_t)L_6;
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_7 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_8 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		int64_t L_9 = V_1;
		NullCheck((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_8, (int64_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * L_11 = (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)__this->get_selector_5();
		int64_t L_12 = V_1;
		NullCheck((Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)L_11, (int64_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int64,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mDFD8DD2BB59F3A8FD5E0235407D289CBE4CEF22D_gshared (WhereSelectEnumerableIterator_2_tBBAB575914D1CE0203AC99D75AEEA8D4FE1F52D9 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.Bounds>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m929A0CEE03C18D885942B28EDB72101A73ECFD6F_gshared (WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereSelectEnumerableIterator_2_Clone_m2AB5A7C5A8FFC8DD0E98823DBACDEF2C22EDD3C6_gshared (WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * L_2 = (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8 * L_3 = (WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.Bounds>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m270AD2953F2177457B9EFDA5FBC1EC13D0E2D43E_gshared (WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m99DB20A8248834F47E5D7858B29C051A2507B6EC_gshared (WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * L_11 = (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)L_11);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_13;
		L_13 = ((  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  (*) (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,UnityEngine.Bounds>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m3155A6F9AD718C8C494C7CE8A7F867987A0287DE_gshared (WhereSelectEnumerableIterator_2_t52E921DFB8B9D249C316047991062EAFCB1C19E8 * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_1 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m3B1A70EE67F3AB9C4D5979C5A84AABD0E6AA9FE3_gshared (WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184 * __this, List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * ___source0, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate1, Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_mC973C2076B5B9C1A8D023DC77EC09AD34B9C36F7_gshared (WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184 * __this, const RuntimeMethod* method)
{
	{
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_0 = (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * L_2 = (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)__this->get_selector_5();
		WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184 * L_3 = (WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184 *, List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4FE071BB8C22BC9E16A566C18E71D652D3CA7B31_gshared (WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_3 = (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)__this->get_source_3();
		NullCheck((List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_3);
		Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  L_4;
		L_4 = ((  Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  (*) (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * L_5 = (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_6;
		L_6 = Enumerator_get_Current_m290640F097AF113C466EEBA5107E3850AB8FBA65_inline((Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_6;
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_7 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_8 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_9 = V_1;
		NullCheck((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_8, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A * L_11 = (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)__this->get_selector_5();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_12 = V_1;
		NullCheck((Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t6CD6AD2729CA2026CA2720DB004DA5F20A66256A *)L_11, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * L_14 = (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m7A815733AA2D57CE50C0579CD9463138FC8122C8((Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF41BE3188849E2081F72C317C5853D47FF67DDF0_gshared (WhereSelectListIterator_2_t25017F35116B34219E3139A17C37E89430A2D184 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m502E761D73DC272A616F239C10479FB32B970F23_gshared (WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D * __this, List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * ___source0, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * ___predicate1, Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectListIterator_2_Clone_mD9A251F14D388B7443A12FE546784C4466F180E9_gshared (WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D * __this, const RuntimeMethod* method)
{
	{
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_0 = (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)__this->get_source_3();
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_1 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * L_2 = (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)__this->get_selector_5();
		WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D * L_3 = (WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D *, List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *, Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_0, (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_1, (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mDCB5B1A467862D2DE106037675757B754D120B9C_gshared (WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 * L_3 = (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)__this->get_source_3();
		NullCheck((List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_3);
		Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  L_4;
		L_4 = ((  Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6  (*) (List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t27E3D1BDE7648E380336F5E74D8620E40AF86EF7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * L_5 = (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_6;
		L_6 = Enumerator_get_Current_m290640F097AF113C466EEBA5107E3850AB8FBA65_inline((Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_6;
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_7 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F * L_8 = (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)__this->get_predicate_4();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_9 = V_1;
		NullCheck((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t407F79CF5CAA56C94E6B18F57DC13D72839D606F *)L_8, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A * L_11 = (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)__this->get_selector_5();
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_12 = V_1;
		NullCheck((Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)L_11);
		int64_t L_13;
		L_13 = ((  int64_t (*) (Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *, KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD7CB779A44BC4E65CAFF27F6164085CC4D26402A *)L_11, (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * L_14 = (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m7A815733AA2D57CE50C0579CD9463138FC8122C8((Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)(Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m342EC7DCE0E620B2D4F9C0C2A8D55861CF463DFD_gshared (WhereSelectListIterator_2_t8B0BC598B46913202E6929DE1C78FCB934D91C9D * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m44247638731F2B91B66739F435DE8B589C7146EF_gshared (WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF * __this, List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * ___source0, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate1, Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereSelectListIterator_2_Clone_mF3E87B712F92223DEBDEAF7C0A400A30AB472992_gshared (WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF * __this, const RuntimeMethod* method)
{
	{
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_0 = (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * L_2 = (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)__this->get_selector_5();
		WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF * L_3 = (WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF *, List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m685658AD901E9D7A3B9499FD5106C9E61A1D06BB_gshared (WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_3 = (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)__this->get_source_3();
		NullCheck((List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_3);
		Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  L_4;
		L_4 = ((  Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  (*) (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * L_5 = (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_6;
		L_6 = Enumerator_get_Current_m22E12FC56CDD7B17E93102675B1A2D14F49DDCF6_inline((Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_6;
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_7 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_8 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_9 = V_1;
		NullCheck((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_8, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 * L_11 = (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)__this->get_selector_5();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_12 = V_1;
		NullCheck((Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)L_11);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_13;
		L_13 = ((  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  (*) (Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tBE793F7C5FFAAF367830F8BFE4E798D5944AC242 *)L_11, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * L_14 = (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m0C5361F217FB210C835232A71B9FB7095E855D78((Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,UnityEngine.Bounds>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mDEDD4AB47B18C20B914198A984CD989CE80A616B_gshared (WhereSelectListIterator_2_t90DA6709226BD700FF02AD85446E528922EB2BAF * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_1 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAB71DCF150366CFD0EBF63802FE0280B011F39F2_gshared (WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D * __this, List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * ___source0, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * ___predicate1, Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m845F1584FEE8E2FF3A23265F0ED482DA434C82FF_gshared (WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D * __this, const RuntimeMethod* method)
{
	{
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_0 = (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)__this->get_source_3();
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_1 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * L_2 = (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)__this->get_selector_5();
		WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D * L_3 = (WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D *, List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *, Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_0, (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_1, (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m276463E41650E38A7A16745B535EFDF5A0D97BF4_gshared (WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B * L_3 = (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)__this->get_source_3();
		NullCheck((List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_3);
		Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  L_4;
		L_4 = ((  Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1  (*) (List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t7782D522A4A7FFDEB2E7E1BF176274869B36222B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * L_5 = (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_6;
		L_6 = Enumerator_get_Current_m22E12FC56CDD7B17E93102675B1A2D14F49DDCF6_inline((Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_6;
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_7 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 * L_8 = (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)__this->get_predicate_4();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_9 = V_1;
		NullCheck((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t764FAC20EE557481B9DA726B10C7B4D5D24D5305 *)L_8, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 * L_11 = (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)__this->get_selector_5();
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_12 = V_1;
		NullCheck((Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *, KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t47CF7021E8B6C3AE85F11E02EEBE712186BD8340 *)L_11, (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * L_14 = (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m0C5361F217FB210C835232A71B9FB7095E855D78((Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)(Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA34356B98AF2B32A802B01FD17FE73D136A83B50_gshared (WhereSelectListIterator_2_tB5490809DDCB756CBC8A44302BAB207470B5DF2D * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m158CEBB27A0CF8AC106E32E74A413271151AA55B_gshared (WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereSelectListIterator_2_Clone_m375FBA8254FB1962F08D13AC1745F9B48EE337D4_gshared (WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * L_2 = (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)__this->get_selector_5();
		WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2 * L_3 = (WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7510D970194471D79690DCB861B11B8D5D58696F_gshared (WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 * L_11 = (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)L_11);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_13;
		L_13 = ((  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  (*) (Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t39EB2469941D2EAF90DF5B72AC02CE865FB13167 *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,UnityEngine.Bounds>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9606E34FBC581109C85F59276FD47A60B57608C8_gshared (WhereSelectListIterator_2_tF14BCC454044A7D221340BD7F69B88FDECBAF6F2 * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_1 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m530D4471452DA4089C130C0D9FC5910907BF6007_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m72EFE228727E1A3BF476F5CF995391D549ED4C1E_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * L_3 = (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB979C50B4E1833CA8C6A8394B5503C7FEB4A608A_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB12D7743450CEE6D221C22755DDB9F022B7E24B1_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0A60F384C09004F99EB7D67C8454163CFF1F2C57_gshared (WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A * __this, List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * ___source0, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate1, Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int64,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_m2BD3B814146C7CA194B1AF72755641019D6C1088_gshared (WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A * __this, const RuntimeMethod* method)
{
	{
		List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * L_0 = (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *)__this->get_source_3();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * L_2 = (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)__this->get_selector_5();
		WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A * L_3 = (WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A *, List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *)L_0, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_1, (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int64,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF5615F12C8DCE34A6DB42B310DF210F94DAE5BE3_gshared (WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 * L_3 = (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *)__this->get_source_3();
		NullCheck((List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *)L_3);
		Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37  L_4;
		L_4 = ((  Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37  (*) (List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tC465E4AAC82F54C0A79B2CE3B797531B10B9ACE4 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 * L_5 = (Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 *)__this->get_address_of_enumerator_6();
		int64_t L_6;
		L_6 = Enumerator_get_Current_m9EBEA7E72E64499B4BED94F77DF82E7B8C3F1CE0_inline((Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 *)(Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int64_t)L_6;
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_7 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_8 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		int64_t L_9 = V_1;
		NullCheck((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_8, (int64_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 * L_11 = (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)__this->get_selector_5();
		int64_t L_12 = V_1;
		NullCheck((Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tCFEA7269C3631ED94899D9F9B57AFACAB4B244B6 *)L_11, (int64_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 * L_14 = (Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m25DAE3260BFED34CE518F60AF8D6768AF47A2DF2((Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 *)(Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int64,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3855E32AB0256EAAC3107FBED9917B510E6FBC68_gshared (WhereSelectListIterator_2_t3487CF51192136E56FD5AB4B8A353B46EC29C16A * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Bounds>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m387D64FF31D118A98743EAE64D2B643B6EB2D014_gshared (WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		((  void (*) (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Bounds>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 * WhereSelectListIterator_2_Clone_m3FDB18566DC557D5A08C831A7098EEDDE7AD522C_gshared (WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * L_2 = (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)__this->get_selector_5();
		WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C * L_3 = (WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Bounds>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2543AEC480B3EF1BB46C39D9E3D0F15270CD716E_gshared (WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 * L_11 = (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)L_11);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_13;
		L_13 = ((  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  (*) (Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t32B1BE751F205499BB03652D9FCBA625AF525001 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Bounds>::Dispose() */, (Iterator_1_t1E776E05D06FF1BEAFDD67E805D3662B4EC2F7F8 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.Bounds>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA1A97E62163F567749E86C059070492D1F451D6E_gshared (WhereSelectListIterator_2_t3B5C982F697C751678D13F43D257B104CCB35A8C * __this, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 * L_1 = (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t8A037F3D8995F88B308C6A611ADEAE9E16020233 *, RuntimeObject*, Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8B4BCB0AE3B4270BF7A79690681D8C94CFE85A44 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  Enumerator_get_Current_m290640F097AF113C466EEBA5107E3850AB8FBA65_gshared_inline (Enumerator_tCB80A6245D6FAEBB56F66A5BDD75BD883EDF55F6 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2  L_0 = (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )__this->get_current_3();
		return (KeyValuePair_2_t8EB09BF4DD251CCCBB6F85C46B29153BF9822DA2 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  Enumerator_get_Current_m22E12FC56CDD7B17E93102675B1A2D14F49DDCF6_gshared_inline (Enumerator_tE6C876B56C84992E0BC48620B85D2F6D899DE6B1 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2  L_0 = (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )__this->get_current_3();
		return (KeyValuePair_2_tEA38238D9ED04DE997D491B9CA0E33B9648A61C2 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  Enumerator_get_Current_m348C6B845FF580B01BAE81A4EBC0FE1938016B0D_gshared_inline (Enumerator_tDE3A382005EEB9EA9F7DA8389C8A29C4F75D5ACD * __this, const RuntimeMethod* method)
{
	{
		X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  L_0 = (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB )__this->get_current_3();
		return (X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Enumerator_get_Current_m9EBEA7E72E64499B4BED94F77DF82E7B8C3F1CE0_gshared_inline (Enumerator_t1C02C38119DFDA075166A979AE2B70CCA911ED37 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get_current_3();
		return (int64_t)L_0;
	}
}
