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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.ICollection`1<System.Json.JsonValue>
struct ICollection_1_tF17A38C42F1575022395E0F8D271540AECFF083F;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t9D94970C7FA2307DB453148499A627C3F64331AE;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>
struct IEnumerable_1_tA03F7A77A9C77B84C173D390A8EFC0BB5F2EA2CB;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D;
// System.Collections.Generic.IEnumerable`1<System.Json.JsonValue>
struct IEnumerable_1_t83C207AC0995FD1487462F01F5100375CB8E41C7;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>
struct IEnumerator_1_tC45757D92880651E2047270AD7A69ED0EB038719;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB;
// System.Collections.Generic.IEnumerator`1<System.Json.JsonValue>
struct IEnumerator_1_t7ECEB002B36F0E6AED8734B75A44234A604178DB;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,System.Json.JsonValue>
struct KeyCollection_tFE04D4C983C879433338924F1D05C1F90EB7CF9B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<System.Json.JsonValue>
struct List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Node_t1DAEA58A56A0C6CE97ED4BFA3405C51863DD6531;
// System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>
struct Node_t6F9FB7F35F9FD83B46B7443F49B8852462C9BB61;
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D;
// System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>
struct SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct SortedSet_1_tCCF0396A8917B24BCFCE984A5E4310306E28A536;
// System.Collections.Generic.SortedSet`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>
struct SortedSet_1_tF737B9E5D2B6374342DE6E408475D64D5D8F16EC;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct Stack_1_tEFE23E5DC2544226D164C051CC48D4B045BE1030;
// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>>
struct Stack_1_tBFDFE7608D5AAD02DE5C2DFD06D4F9A72A72830B;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>
struct TreeSet_1_tCFAFAC8D2F91EB1C5C58C2D01A94A7F1EEB71638;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t44EE22A0DF5DB9D575B9DE97085272A0E8633A75;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,System.Json.JsonValue>
struct ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>[]
struct KeyValuePair_2U5BU5D_tF6D04C7D4200BCE92B41653DE1DE68C8A18A90BE;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Json.JsonValue[]
struct JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Runtime.Serialization.Json.JavaScriptReader
struct JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C;
// System.Json.JsonArray
struct JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6;
// System.Json.JsonObject
struct JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E;
// System.Json.JsonPrimitive
struct JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80;
// System.Json.JsonValue
struct JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Json.JsonValue/<ToJsonPairEnumerable>d__2
struct U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4;
// System.Json.JsonValue/<ToJsonValueEnumerable>d__3
struct U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t50BEAD6BFAC98F188A0D878A2A118710F56839EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t83C207AC0995FD1487462F01F5100375CB8E41C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA03F7A77A9C77B84C173D390A8EFC0BB5F2EA2CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7ECEB002B36F0E6AED8734B75A44234A604178DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC45757D92880651E2047270AD7A69ED0EB038719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormattable_tE4EBDDD84B0D9F1C23C68815468A0DE880EEF4C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2A497C5984AC29D6AAE3C1C3665EE7B8380A8D29;
IL2CPP_EXTERN_C String_t* _stringLiteral2B3ACFB696953B0393D358BB25F5B24DBBF24740;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C6DFEA916500E1B6704C230E54CE48992EC633F;
IL2CPP_EXTERN_C String_t* _stringLiteral36497E151DC3D26DD28371A36B27BDB7930FC0BC;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral565886250A786A5A6F3EC725A107A10AF406DB41;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5B22DE498A248A5D137E9D01CFAA089B3CA784EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral63C4D13DDB7686145C358A2264D9888174E40407;
IL2CPP_EXTERN_C String_t* _stringLiteral67D2E806CD693001378928C89738DD45CDA3E393;
IL2CPP_EXTERN_C String_t* _stringLiteral70EEFAA66DA29FAC9E1A81759A5984878FB67ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral73E951D4B6DE17A150C0946ACB26E715FD0A3883;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral85E5DFFC27DB8EDCB2AA46859AF9CC42B6BCED99;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB8B781496F6CFEEDA7163BAC4C8DB324D079CA;
IL2CPP_EXTERN_C String_t* _stringLiteral94686CBFC69BA503B80169114BA00836950C7A4D;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA8C44D8001E19877B2F2B86EC61A60048AF615;
IL2CPP_EXTERN_C String_t* _stringLiteralA0FA090275CB05EE5C118B0520F8C907CC522EBC;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralA86420503B6497A19BC4E1C1C2B2980428C8D8FF;
IL2CPP_EXTERN_C String_t* _stringLiteralAF885BE5D2E75A92C7C80759A1C2917FA76F6062;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD09B109BCA3E50FF1F6A6145CFFE89B847A8A235;
IL2CPP_EXTERN_C String_t* _stringLiteralD160E6B58BBD5D028631FCE0A69607CD1A9CC6C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDB6A6097C96C294B2920E2F7A5B84583D5DC2780;
IL2CPP_EXTERN_C String_t* _stringLiteralE1D111A9B5ED69CC9A4F2599DB8BFA2D677CCD3B;
IL2CPP_EXTERN_C String_t* _stringLiteralE7A46075109789D1792549A284B05CF42BE37425;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE85CB44294D0585D0CDB553EE58583455F665F3B;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF30037B37D615E1C7C2671DA73C158FC29A6FCDD;
IL2CPP_EXTERN_C String_t* _stringLiteralF300D2310959AF105732D339376803869D9B2B91;
IL2CPP_EXTERN_C String_t* _stringLiteralF3F7F9F3AD37F70E5E3F545BD9045B6E317F18A6;
IL2CPP_EXTERN_C String_t* _stringLiteralF7ACE117E38161F96B2B89FC59D8083A5B6F6AB7;
IL2CPP_EXTERN_C String_t* _stringLiteralFEB1E26F0F917F3BC31BB3C320D9E6E33CE3274E;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_m9B0953865229F87D69E1DD9EB7EB4CBE0971CB0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaScriptReader_Expect_m5BDEB42F0DC9CFC26D2D4195C392D4C17D68D14A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaScriptReader_Expect_m9BCD40451BC147448E72CFED2DA4C20C68F8D033_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaScriptReader_ReadCore_m05F5CF4E5DDCC21AC8EA9CD79F19FE76D41E24EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaScriptReader_Read_mEFE593B9A24B2851343C713D9B70A4B2E847F096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JavaScriptReader__ctor_m5C4385F2DE5AE44AA2A45DCEBA48513EA794074D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonArray__ctor_mFC27BB1D091CA6555B379D5C2B93DE0D6953E754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonObject_AddRange_m5FDCBD45345D89B25027AC5CA32DA54A26D0DCBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonObject_Add_m6968DF84332D02085996FF22E656CE5F20D10D72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonObject_ContainsKey_m8A4BCD31B2DC66B54BFE12AF3A8E29695418F3BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonObject__ctor_m06F551EB42CF7792827BC4A68A2FA713773567AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonPrimitive_GetFormattedString_mDE339F2B26CF635EE9080ADE2305BD3879DF1ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_ContainsKey_mB623A9E4C50E8917D90BF7FD8B0655FC39FB438F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_Load_mD504FDF03510DD059031442815CC687BFD308521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_Parse_m95373FD7D81EB9227F034A0143FAFEEA80FB957E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_Save_mE1F5754449C5F9F4B505E2F3C83A7AED30E76988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_System_Collections_IEnumerable_GetEnumerator_m3D44CD0941D92615A061A747C174BD186A0A3A81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_ToJsonValue_mAC814311B96D62A7789D6EA834F95C39C8FAB01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_get_Count_m8D2DD5FAB48FDC649F4D9B3091F6961CD5D2C499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_get_Item_m3BE1653AB13D00B0134383983AF7A9C5B5606A41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_get_Item_mA780BC7A8FB8578482B2BACD5A81472E085E2F10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_op_Implicit_mC541F5C13D20EBCC728C4CEB3C6CAB0CCE65D35D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_op_Implicit_mED0E4A465EF96DCD0217436576267A0B231F8022_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonValue_set_Item_mCFE0DEC1DDB763014E97F9997E3AC6ADAFDC0D18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mAD67AD8985DFADB07A425E9BDC0EA74B94BC9C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m363B2F27F06701EC5C5D0911EBD0F45EBE3EE1DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m63F0EB3C36611DA7BA8361437D813089F8EC6914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mB57D07D56A8574EF5781B24B4A153DC94C5C1C77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_mC50DD55EE2E8BE69CDCA26F8F37FB7C0860DBF22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m062E843FD18C9ABD5647749909ED1BB98CE2CEE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m4105EE2177906B02FCFD62BD340D9D000E30C610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m0BE406D56D7BE22755798AEBA804E56D713DF04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m1F75CB3D73D46AF5522BDF8818874E4F2BAB1223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mFDC899106CFD3BD1BE37D955B04060776EC49007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5F0900FF986C078500B73508D4EDFD1C7121C876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDDCDE959798A2AB8C6926BDC74B8BD825679D3CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1280625068DC99BA8C25C83B1DBFC193D3E84FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m7A9E157B8974B8EE333F3AFBBF3F3DDB9E2F1D09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Add_mFB2C0A94A041B4A2A2466EC2B02E6FDF3F72AEE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Clear_m3EA871DEF0B86329EA37C4510B2FFCE2835A2C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_mB41D4B783C3FA0B3EA2CC03BC3556901A25E9D9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_GetEnumerator_m5931D95AB991AA60E44BEAC4C24E9A75912E0E0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m995D5CF3427395F52F0609C332498754A1DFD9AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Count_mF0BD96ED701B3F7C560672F91BE281093174FE67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_mEDF973BB4DFDCD82F6A8F09D9E40650A38EDD8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Values_m33099AF96A88522D3A3D232A274745A5B72088EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CToJsonPairEnumerableU3Ed__2_System_Collections_IEnumerator_Reset_m6FD97D0113E8A5D1173F524755A1549029CC0167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CToJsonValueEnumerableU3Ed__3_System_Collections_IEnumerator_Reset_m8E77015443252EB6A7EF44A61D17772A0C2EC33D_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tF6D04C7D4200BCE92B41653DE1DE68C8A18A90BE;
struct KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCABF38DF3624AADA714AAB71090AE9397DE3CD6B 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Json.JsonValue>
struct List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6, ____items_1)); }
	inline JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE* get__items_1() const { return ____items_1; }
	inline JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6_StaticFields, ____emptyArray_5)); }
	inline JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE* value)
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


// System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>
struct SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_tFE04D4C983C879433338924F1D05C1F90EB7CF9B * ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D * ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_tCFAFAC8D2F91EB1C5C58C2D01A94A7F1EEB71638 * ____set_2;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5, ____keys_0)); }
	inline KeyCollection_tFE04D4C983C879433338924F1D05C1F90EB7CF9B * get__keys_0() const { return ____keys_0; }
	inline KeyCollection_tFE04D4C983C879433338924F1D05C1F90EB7CF9B ** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(KeyCollection_tFE04D4C983C879433338924F1D05C1F90EB7CF9B * value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_0), (void*)value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5, ____values_1)); }
	inline ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D * get__values_1() const { return ____values_1; }
	inline ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}

	inline static int32_t get_offset_of__set_2() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5, ____set_2)); }
	inline TreeSet_1_tCFAFAC8D2F91EB1C5C58C2D01A94A7F1EEB71638 * get__set_2() const { return ____set_2; }
	inline TreeSet_1_tCFAFAC8D2F91EB1C5C58C2D01A94A7F1EEB71638 ** get_address_of__set_2() { return &____set_2; }
	inline void set__set_2(TreeSet_1_tCFAFAC8D2F91EB1C5C58C2D01A94A7F1EEB71638 * value)
	{
		____set_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_2), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,System.Json.JsonValue>
struct ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/ValueCollection::_dictionary
	SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * ____dictionary_0;

public:
	inline static int32_t get_offset_of__dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D, ____dictionary_0)); }
	inline SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * get__dictionary_0() const { return ____dictionary_0; }
	inline SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 ** get_address_of__dictionary_0() { return &____dictionary_0; }
	inline void set__dictionary_0(SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * value)
	{
		____dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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


// System.Runtime.Serialization.Json.JavaScriptReader
struct JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C  : public RuntimeObject
{
public:
	// System.IO.TextReader System.Runtime.Serialization.Json.JavaScriptReader::r
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___r_0;
	// System.Int32 System.Runtime.Serialization.Json.JavaScriptReader::line
	int32_t ___line_1;
	// System.Int32 System.Runtime.Serialization.Json.JavaScriptReader::column
	int32_t ___column_2;
	// System.Int32 System.Runtime.Serialization.Json.JavaScriptReader::peek
	int32_t ___peek_3;
	// System.Boolean System.Runtime.Serialization.Json.JavaScriptReader::has_peek
	bool ___has_peek_4;
	// System.Boolean System.Runtime.Serialization.Json.JavaScriptReader::prev_lf
	bool ___prev_lf_5;
	// System.Text.StringBuilder System.Runtime.Serialization.Json.JavaScriptReader::vb
	StringBuilder_t * ___vb_6;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C, ___r_0)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_r_0() const { return ___r_0; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___r_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_0), (void*)value);
	}

	inline static int32_t get_offset_of_line_1() { return static_cast<int32_t>(offsetof(JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C, ___line_1)); }
	inline int32_t get_line_1() const { return ___line_1; }
	inline int32_t* get_address_of_line_1() { return &___line_1; }
	inline void set_line_1(int32_t value)
	{
		___line_1 = value;
	}

	inline static int32_t get_offset_of_column_2() { return static_cast<int32_t>(offsetof(JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C, ___column_2)); }
	inline int32_t get_column_2() const { return ___column_2; }
	inline int32_t* get_address_of_column_2() { return &___column_2; }
	inline void set_column_2(int32_t value)
	{
		___column_2 = value;
	}

	inline static int32_t get_offset_of_peek_3() { return static_cast<int32_t>(offsetof(JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C, ___peek_3)); }
	inline int32_t get_peek_3() const { return ___peek_3; }
	inline int32_t* get_address_of_peek_3() { return &___peek_3; }
	inline void set_peek_3(int32_t value)
	{
		___peek_3 = value;
	}

	inline static int32_t get_offset_of_has_peek_4() { return static_cast<int32_t>(offsetof(JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C, ___has_peek_4)); }
	inline bool get_has_peek_4() const { return ___has_peek_4; }
	inline bool* get_address_of_has_peek_4() { return &___has_peek_4; }
	inline void set_has_peek_4(bool value)
	{
		___has_peek_4 = value;
	}

	inline static int32_t get_offset_of_prev_lf_5() { return static_cast<int32_t>(offsetof(JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C, ___prev_lf_5)); }
	inline bool get_prev_lf_5() const { return ___prev_lf_5; }
	inline bool* get_address_of_prev_lf_5() { return &___prev_lf_5; }
	inline void set_prev_lf_5(bool value)
	{
		___prev_lf_5 = value;
	}

	inline static int32_t get_offset_of_vb_6() { return static_cast<int32_t>(offsetof(JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C, ___vb_6)); }
	inline StringBuilder_t * get_vb_6() const { return ___vb_6; }
	inline StringBuilder_t ** get_address_of_vb_6() { return &___vb_6; }
	inline void set_vb_6(StringBuilder_t * value)
	{
		___vb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vb_6), (void*)value);
	}
};


// System.Json.JsonValue
struct JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90  : public RuntimeObject
{
public:

public:
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
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

// System.Json.JsonValue/<ToJsonValueEnumerable>d__3
struct U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A  : public RuntimeObject
{
public:
	// System.Int32 System.Json.JsonValue/<ToJsonValueEnumerable>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Json.JsonValue System.Json.JsonValue/<ToJsonValueEnumerable>d__3::<>2__current
	JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___U3CU3E2__current_1;
	// System.Int32 System.Json.JsonValue/<ToJsonValueEnumerable>d__3::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<System.Object> System.Json.JsonValue/<ToJsonValueEnumerable>d__3::arr
	RuntimeObject* ___arr_3;
	// System.Collections.Generic.IEnumerable`1<System.Object> System.Json.JsonValue/<ToJsonValueEnumerable>d__3::<>3__arr
	RuntimeObject* ___U3CU3E3__arr_4;
	// System.Collections.Generic.IEnumerator`1<System.Object> System.Json.JsonValue/<ToJsonValueEnumerable>d__3::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A, ___U3CU3E2__current_1)); }
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_arr_3() { return static_cast<int32_t>(offsetof(U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A, ___arr_3)); }
	inline RuntimeObject* get_arr_3() const { return ___arr_3; }
	inline RuntimeObject** get_address_of_arr_3() { return &___arr_3; }
	inline void set_arr_3(RuntimeObject* value)
	{
		___arr_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arr_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__arr_4() { return static_cast<int32_t>(offsetof(U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A, ___U3CU3E3__arr_4)); }
	inline RuntimeObject* get_U3CU3E3__arr_4() const { return ___U3CU3E3__arr_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__arr_4() { return &___U3CU3E3__arr_4; }
	inline void set_U3CU3E3__arr_4(RuntimeObject* value)
	{
		___U3CU3E3__arr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__arr_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A, ___U3CU3E7__wrap1_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}
};


// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1 
{
public:
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_tCCF0396A8917B24BCFCE984A5E4310306E28A536 * ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_tEFE23E5DC2544226D164C051CC48D4B045BE1030 * ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_t1DAEA58A56A0C6CE97ED4BFA3405C51863DD6531 * ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;

public:
	inline static int32_t get_offset_of__tree_1() { return static_cast<int32_t>(offsetof(Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1, ____tree_1)); }
	inline SortedSet_1_tCCF0396A8917B24BCFCE984A5E4310306E28A536 * get__tree_1() const { return ____tree_1; }
	inline SortedSet_1_tCCF0396A8917B24BCFCE984A5E4310306E28A536 ** get_address_of__tree_1() { return &____tree_1; }
	inline void set__tree_1(SortedSet_1_tCCF0396A8917B24BCFCE984A5E4310306E28A536 * value)
	{
		____tree_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_1), (void*)value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__stack_3() { return static_cast<int32_t>(offsetof(Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1, ____stack_3)); }
	inline Stack_1_tEFE23E5DC2544226D164C051CC48D4B045BE1030 * get__stack_3() const { return ____stack_3; }
	inline Stack_1_tEFE23E5DC2544226D164C051CC48D4B045BE1030 ** get_address_of__stack_3() { return &____stack_3; }
	inline void set__stack_3(Stack_1_tEFE23E5DC2544226D164C051CC48D4B045BE1030 * value)
	{
		____stack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_3), (void*)value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1, ____current_4)); }
	inline Node_t1DAEA58A56A0C6CE97ED4BFA3405C51863DD6531 * get__current_4() const { return ____current_4; }
	inline Node_t1DAEA58A56A0C6CE97ED4BFA3405C51863DD6531 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(Node_t1DAEA58A56A0C6CE97ED4BFA3405C51863DD6531 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_4), (void*)value);
	}

	inline static int32_t get_offset_of__reverse_5() { return static_cast<int32_t>(offsetof(Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1, ____reverse_5)); }
	inline bool get__reverse_5() const { return ____reverse_5; }
	inline bool* get_address_of__reverse_5() { return &____reverse_5; }
	inline void set__reverse_5(bool value)
	{
		____reverse_5 = value;
	}
};

struct Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1_StaticFields
{
public:
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_t1DAEA58A56A0C6CE97ED4BFA3405C51863DD6531 * ___s_dummyNode_0;

public:
	inline static int32_t get_offset_of_s_dummyNode_0() { return static_cast<int32_t>(offsetof(Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1_StaticFields, ___s_dummyNode_0)); }
	inline Node_t1DAEA58A56A0C6CE97ED4BFA3405C51863DD6531 * get_s_dummyNode_0() const { return ___s_dummyNode_0; }
	inline Node_t1DAEA58A56A0C6CE97ED4BFA3405C51863DD6531 ** get_address_of_s_dummyNode_0() { return &___s_dummyNode_0; }
	inline void set_s_dummyNode_0(Node_t1DAEA58A56A0C6CE97ED4BFA3405C51863DD6531 * value)
	{
		___s_dummyNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyNode_0), (void*)value);
	}
};


// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>
struct Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0 
{
public:
	// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/Enumerator::_tree
	SortedSet_1_tF737B9E5D2B6374342DE6E408475D64D5D8F16EC * ____tree_1;
	// System.Int32 System.Collections.Generic.SortedSet`1/Enumerator::_version
	int32_t ____version_2;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.SortedSet`1/Node<T>> System.Collections.Generic.SortedSet`1/Enumerator::_stack
	Stack_1_tBFDFE7608D5AAD02DE5C2DFD06D4F9A72A72830B * ____stack_3;
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::_current
	Node_t6F9FB7F35F9FD83B46B7443F49B8852462C9BB61 * ____current_4;
	// System.Boolean System.Collections.Generic.SortedSet`1/Enumerator::_reverse
	bool ____reverse_5;

public:
	inline static int32_t get_offset_of__tree_1() { return static_cast<int32_t>(offsetof(Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0, ____tree_1)); }
	inline SortedSet_1_tF737B9E5D2B6374342DE6E408475D64D5D8F16EC * get__tree_1() const { return ____tree_1; }
	inline SortedSet_1_tF737B9E5D2B6374342DE6E408475D64D5D8F16EC ** get_address_of__tree_1() { return &____tree_1; }
	inline void set__tree_1(SortedSet_1_tF737B9E5D2B6374342DE6E408475D64D5D8F16EC * value)
	{
		____tree_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tree_1), (void*)value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__stack_3() { return static_cast<int32_t>(offsetof(Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0, ____stack_3)); }
	inline Stack_1_tBFDFE7608D5AAD02DE5C2DFD06D4F9A72A72830B * get__stack_3() const { return ____stack_3; }
	inline Stack_1_tBFDFE7608D5AAD02DE5C2DFD06D4F9A72A72830B ** get_address_of__stack_3() { return &____stack_3; }
	inline void set__stack_3(Stack_1_tBFDFE7608D5AAD02DE5C2DFD06D4F9A72A72830B * value)
	{
		____stack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_3), (void*)value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0, ____current_4)); }
	inline Node_t6F9FB7F35F9FD83B46B7443F49B8852462C9BB61 * get__current_4() const { return ____current_4; }
	inline Node_t6F9FB7F35F9FD83B46B7443F49B8852462C9BB61 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(Node_t6F9FB7F35F9FD83B46B7443F49B8852462C9BB61 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_4), (void*)value);
	}

	inline static int32_t get_offset_of__reverse_5() { return static_cast<int32_t>(offsetof(Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0, ____reverse_5)); }
	inline bool get__reverse_5() const { return ____reverse_5; }
	inline bool* get_address_of__reverse_5() { return &____reverse_5; }
	inline void set__reverse_5(bool value)
	{
		____reverse_5 = value;
	}
};

struct Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0_StaticFields
{
public:
	// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/Enumerator::s_dummyNode
	Node_t6F9FB7F35F9FD83B46B7443F49B8852462C9BB61 * ___s_dummyNode_0;

public:
	inline static int32_t get_offset_of_s_dummyNode_0() { return static_cast<int32_t>(offsetof(Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0_StaticFields, ___s_dummyNode_0)); }
	inline Node_t6F9FB7F35F9FD83B46B7443F49B8852462C9BB61 * get_s_dummyNode_0() const { return ___s_dummyNode_0; }
	inline Node_t6F9FB7F35F9FD83B46B7443F49B8852462C9BB61 ** get_address_of_s_dummyNode_0() { return &___s_dummyNode_0; }
	inline void set_s_dummyNode_0(Node_t6F9FB7F35F9FD83B46B7443F49B8852462C9BB61 * value)
	{
		___s_dummyNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyNode_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Json.JsonValue>
struct Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219, ___list_0)); }
	inline List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * get_list_0() const { return ___list_0; }
	inline List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219, ___current_3)); }
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * get_current_3() const { return ___current_3; }
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>
struct KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7, ___value_1)); }
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * get_value_1() const { return ___value_1; }
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Json.JsonArray
struct JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6  : public JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90
{
public:
	// System.Collections.Generic.List`1<System.Json.JsonValue> System.Json.JsonArray::list
	List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6, ___list_0)); }
	inline List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * get_list_0() const { return ___list_0; }
	inline List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Json.JsonObject
struct JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E  : public JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90
{
public:
	// System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue> System.Json.JsonObject::map
	SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * ___map_0;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E, ___map_0)); }
	inline SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * get_map_0() const { return ___map_0; }
	inline SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_0), (void*)value);
	}
};


// System.Json.JsonPrimitive
struct JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80  : public JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90
{
public:
	// System.Object System.Json.JsonPrimitive::value
	RuntimeObject * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};

struct JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_StaticFields
{
public:
	// System.Byte[] System.Json.JsonPrimitive::true_bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___true_bytes_1;
	// System.Byte[] System.Json.JsonPrimitive::false_bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___false_bytes_2;

public:
	inline static int32_t get_offset_of_true_bytes_1() { return static_cast<int32_t>(offsetof(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_StaticFields, ___true_bytes_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_true_bytes_1() const { return ___true_bytes_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_true_bytes_1() { return &___true_bytes_1; }
	inline void set_true_bytes_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___true_bytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___true_bytes_1), (void*)value);
	}

	inline static int32_t get_offset_of_false_bytes_2() { return static_cast<int32_t>(offsetof(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_StaticFields, ___false_bytes_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_false_bytes_2() const { return ___false_bytes_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_false_bytes_2() { return &___false_bytes_2; }
	inline void set_false_bytes_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___false_bytes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___false_bytes_2), (void*)value);
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEF979A7CBB603F318ECDB2C9CB52D4A090181E00 
{
public:
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1  ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;

public:
	inline static int32_t get_offset_of__treeEnum_0() { return static_cast<int32_t>(offsetof(Enumerator_tEF979A7CBB603F318ECDB2C9CB52D4A090181E00, ____treeEnum_0)); }
	inline Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1  get__treeEnum_0() const { return ____treeEnum_0; }
	inline Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1 * get_address_of__treeEnum_0() { return &____treeEnum_0; }
	inline void set__treeEnum_0(Enumerator_t22D0F5A91A4864FBDBBBF26808C10ED4ED5EE4F1  value)
	{
		____treeEnum_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____tree_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____stack_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____current_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__getEnumeratorRetType_1() { return static_cast<int32_t>(offsetof(Enumerator_tEF979A7CBB603F318ECDB2C9CB52D4A090181E00, ____getEnumeratorRetType_1)); }
	inline int32_t get__getEnumeratorRetType_1() const { return ____getEnumeratorRetType_1; }
	inline int32_t* get_address_of__getEnumeratorRetType_1() { return &____getEnumeratorRetType_1; }
	inline void set__getEnumeratorRetType_1(int32_t value)
	{
		____getEnumeratorRetType_1 = value;
	}
};


// System.Collections.Generic.SortedDictionary`2/Enumerator<System.String,System.Json.JsonValue>
struct Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C 
{
public:
	// System.Collections.Generic.SortedSet`1/Enumerator<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2/Enumerator::_treeEnum
	Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0  ____treeEnum_0;
	// System.Int32 System.Collections.Generic.SortedDictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_1;

public:
	inline static int32_t get_offset_of__treeEnum_0() { return static_cast<int32_t>(offsetof(Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C, ____treeEnum_0)); }
	inline Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0  get__treeEnum_0() const { return ____treeEnum_0; }
	inline Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0 * get_address_of__treeEnum_0() { return &____treeEnum_0; }
	inline void set__treeEnum_0(Enumerator_tDF1519418CB1D4010CC5B24B477D8A59967308E0  value)
	{
		____treeEnum_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____tree_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____stack_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____treeEnum_0))->____current_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__getEnumeratorRetType_1() { return static_cast<int32_t>(offsetof(Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C, ____getEnumeratorRetType_1)); }
	inline int32_t get__getEnumeratorRetType_1() const { return ____getEnumeratorRetType_1; }
	inline int32_t* get_address_of__getEnumeratorRetType_1() { return &____getEnumeratorRetType_1; }
	inline void set__getEnumeratorRetType_1(int32_t value)
	{
		____getEnumeratorRetType_1 = value;
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


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
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

// System.Json.JsonType
struct JsonType_tBFEA40A0D38900D74DA5C29C6FECD2C1D2018835 
{
public:
	// System.Int32 System.Json.JsonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonType_tBFEA40A0D38900D74DA5C29C6FECD2C1D2018835, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_12;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_13;

public:
	inline static int32_t get_offset_of__sb_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_12)); }
	inline StringBuilder_t * get__sb_12() const { return ____sb_12; }
	inline StringBuilder_t ** get_address_of__sb_12() { return &____sb_12; }
	inline void set__sb_12(StringBuilder_t * value)
	{
		____sb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_12), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}
};

struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields
{
public:
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___m_encoding_11;

public:
	inline static int32_t get_offset_of_m_encoding_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields, ___m_encoding_11)); }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * get_m_encoding_11() const { return ___m_encoding_11; }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 ** get_address_of_m_encoding_11() { return &___m_encoding_11; }
	inline void set_m_encoding_11(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * value)
	{
		___m_encoding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_11), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Json.JsonValue/<ToJsonPairEnumerable>d__2
struct U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4  : public RuntimeObject
{
public:
	// System.Int32 System.Json.JsonValue/<ToJsonPairEnumerable>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue> System.Json.JsonValue/<ToJsonPairEnumerable>d__2::<>2__current
	KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  ___U3CU3E2__current_1;
	// System.Int32 System.Json.JsonValue/<ToJsonPairEnumerable>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> System.Json.JsonValue/<ToJsonPairEnumerable>d__2::kvpc
	RuntimeObject* ___kvpc_3;
	// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> System.Json.JsonValue/<ToJsonPairEnumerable>d__2::<>3__kvpc
	RuntimeObject* ___U3CU3E3__kvpc_4;
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> System.Json.JsonValue/<ToJsonPairEnumerable>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_kvpc_3() { return static_cast<int32_t>(offsetof(U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4, ___kvpc_3)); }
	inline RuntimeObject* get_kvpc_3() const { return ___kvpc_3; }
	inline RuntimeObject** get_address_of_kvpc_3() { return &___kvpc_3; }
	inline void set_kvpc_3(RuntimeObject* value)
	{
		___kvpc_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kvpc_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__kvpc_4() { return static_cast<int32_t>(offsetof(U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4, ___U3CU3E3__kvpc_4)); }
	inline RuntimeObject* get_U3CU3E3__kvpc_4() const { return ___U3CU3E3__kvpc_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__kvpc_4() { return &___U3CU3E3__kvpc_4; }
	inline void set_U3CU3E3__kvpc_4(RuntimeObject* value)
	{
		___U3CU3E3__kvpc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__kvpc_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4, ___U3CU3E7__wrap1_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
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


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  m_Items[1];

public:
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Json.JsonValue[]
struct JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * m_Items[1];

public:
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>[]
struct KeyValuePair_2U5BU5D_tF6D04C7D4200BCE92B41653DE1DE68C8A18A90BE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  m_Items[1];

public:
	inline KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
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


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* Enumerable_ToArray_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m7FD07480D342FBFFA49AF58A94294A5092A6F66F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mAF2E422E12551DE01B8EAAE71A2A4E1B91BD79DF_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m14A196493C3B2FA24AB59F63BE1217B62F49C16C_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedDictionary_2_get_Count_mE25999942392D41628E0E0AA90EA5A2DF0AC971F_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, const RuntimeMethod* method);
// System.Collections.Generic.SortedDictionary`2/Enumerator<!0,!1> System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEF979A7CBB603F318ECDB2C9CB52D4A090181E00  SortedDictionary_2_GetEnumerator_mEF7152DCD8B832AF30681B431A514EC54AE162DB_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SortedDictionary_2_get_Item_m82C0F629628A63DFB2814BEB43FFA6BEE2889A47_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.SortedDictionary`2/ValueCollection<!0,!1> System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t44EE22A0DF5DB9D575B9DE97085272A0E8633A75 * SortedDictionary_2_get_Values_m27D3A5080EFAE216DE73DAE47A42AC2A793046BE_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_m3C6A2E81722B70709D757CF1ADD59966F2885952_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Clear_mE121C95209B8E96231C0E20A84E4036A30526471_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_mC524CC8715D027FB364746134319A31068BBEE03_gshared (SortedDictionary_2_tA2B712625C7F191E7494CF9BC6438EE22BD4586D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.Json.JavaScriptReader::ReadCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JavaScriptReader_ReadCore_m05F5CF4E5DDCC21AC8EA9CD79F19FE76D41E24EB (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Json.JavaScriptReader::SkipSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.Serialization.Json.JavaScriptReader::ReadChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Exception System.Runtime.Serialization.Json.JavaScriptReader::JsonError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Int32 System.Runtime.Serialization.Json.JavaScriptReader::PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738 (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.String System.Runtime.Serialization.Json.JavaScriptReader::ReadStringLiteral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2 (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Json.JavaScriptReader::Expect(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptReader_Expect_m9BCD40451BC147448E72CFED2DA4C20C68F8D033 (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, Il2CppChar ___expected0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
inline KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* Enumerable_ToArray_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_m9B0953865229F87D69E1DD9EB7EB4CBE0971CB0C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m7FD07480D342FBFFA49AF58A94294A5092A6F66F_gshared)(___source0, method);
}
// System.Void System.Runtime.Serialization.Json.JavaScriptReader::Expect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptReader_Expect_m5BDEB42F0DC9CFC26D2D4195C392D4C17D68D14A (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, String_t* ___expected0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.Json.JavaScriptReader::ReadNumericLiteral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m006085C3B9AC64929E893942EF7A55328FDAE090 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.UInt64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_TryParse_m1D56C1385B6F4855FD1A893FEEE12C0796695621 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint64_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.Decimal::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_TryParse_m33A509B1E4659C190D496FFCFD4494D8B0DCFCAA (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * ___result3, const RuntimeMethod* method);
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_Inequality_m1524E424F030A184C95FA1AF24C76487E612E296 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d21, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mD60850592CF629A16EA1ECC6834385E7DDAD239F (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.Json.JsonValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Json.JsonValue>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m5F0900FF986C078500B73508D4EDFD1C7121C876 (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Json.JsonValue>::get_Count()
inline int32_t List_1_get_Count_mDDCDE959798A2AB8C6926BDC74B8BD825679D3CC_inline (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Json.JsonValue>::get_Item(System.Int32)
inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * List_1_get_Item_m1280625068DC99BA8C25C83B1DBFC193D3E84FC9_inline (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Json.JsonValue>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m7A9E157B8974B8EE333F3AFBBF3F3DDB9E2F1D09 (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, int32_t ___index0, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, int32_t, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Json.JsonValue>::Add(!0)
inline void List_1_Add_m363B2F27F06701EC5C5D0911EBD0F45EBE3EE1DC (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Json.JsonValue>::Clear()
inline void List_1_Clear_m63F0EB3C36611DA7BA8361437D813089F8EC6914 (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Json.JsonValue>::Contains(!0)
inline bool List_1_Contains_mB57D07D56A8574EF5781B24B4A153DC94C5C1C77 (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Json.JsonValue>::CopyTo(!0[],System.Int32)
inline void List_1_CopyTo_mC50DD55EE2E8BE69CDCA26F8F37FB7C0860DBF22 (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE*, int32_t, const RuntimeMethod*))List_1_CopyTo_mAF2E422E12551DE01B8EAAE71A2A4E1B91BD79DF_gshared)(__this, ___array0, ___arrayIndex1, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Json.JsonValue>::IndexOf(!0)
inline int32_t List_1_IndexOf_m4105EE2177906B02FCFD62BD340D9D000E30C610 (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Json.JsonValue>::Insert(System.Int32,!0)
inline void List_1_Insert_m0BE406D56D7BE22755798AEBA804E56D713DF04A (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, int32_t ___index0, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, int32_t, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 *, const RuntimeMethod*))List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Json.JsonValue>::Remove(!0)
inline bool List_1_Remove_mFDC899106CFD3BD1BE37D955B04060776EC49007 (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Json.JsonValue>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m1F75CB3D73D46AF5522BDF8818874E4F2BAB1223 (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Json.JsonValue>::GetEnumerator()
inline Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219  List_1_GetEnumerator_m062E843FD18C9ABD5647749909ED1BB98CE2CEE2 (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219  (*) (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>::.ctor(System.Collections.Generic.IComparer`1<!0>)
inline void SortedDictionary_2__ctor_m995D5CF3427395F52F0609C332498754A1DFD9AB (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 *, RuntimeObject*, const RuntimeMethod*))SortedDictionary_2__ctor_m14A196493C3B2FA24AB59F63BE1217B62F49C16C_gshared)(__this, ___comparer0, method);
}
// System.Void System.Json.JsonObject::AddRange(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_AddRange_m5FDCBD45345D89B25027AC5CA32DA54A26D0DCBB (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, RuntimeObject* ___items0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>::get_Count()
inline int32_t SortedDictionary_2_get_Count_mF0BD96ED701B3F7C560672F91BE281093174FE67 (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 *, const RuntimeMethod*))SortedDictionary_2_get_Count_mE25999942392D41628E0E0AA90EA5A2DF0AC971F_gshared)(__this, method);
}
// System.Collections.Generic.SortedDictionary`2/Enumerator<!0,!1> System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>::GetEnumerator()
inline Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C  SortedDictionary_2_GetEnumerator_m5931D95AB991AA60E44BEAC4C24E9A75912E0E0E (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C  (*) (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 *, const RuntimeMethod*))SortedDictionary_2_GetEnumerator_mEF7152DCD8B832AF30681B431A514EC54AE162DB_gshared)(__this, method);
}
// !1 System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>::get_Item(!0)
inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * SortedDictionary_2_get_Item_mEDF973BB4DFDCD82F6A8F09D9E40650A38EDD8D0 (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * (*) (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 *, String_t*, const RuntimeMethod*))SortedDictionary_2_get_Item_m82C0F629628A63DFB2814BEB43FFA6BEE2889A47_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.SortedDictionary`2/ValueCollection<!0,!1> System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>::get_Values()
inline ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D * SortedDictionary_2_get_Values_m33099AF96A88522D3A3D232A274745A5B72088EF (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D * (*) (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 *, const RuntimeMethod*))SortedDictionary_2_get_Values_m27D3A5080EFAE216DE73DAE47A42AC2A793046BE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>::Add(!0,!1)
inline void SortedDictionary_2_Add_mFB2C0A94A041B4A2A2466EC2B02E6FDF3F72AEE5 (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * __this, String_t* ___key0, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 *, String_t*, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 *, const RuntimeMethod*))SortedDictionary_2_Add_m3C6A2E81722B70709D757CF1ADD59966F2885952_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_inline (KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>::get_Value()
inline JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_inline (KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 * __this, const RuntimeMethod* method)
{
	return ((  JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * (*) (KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Json.JsonObject::Add(System.String,System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_Add_m6968DF84332D02085996FF22E656CE5F20D10D72 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, String_t* ___key0, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>::Clear()
inline void SortedDictionary_2_Clear_m3EA871DEF0B86329EA37C4510B2FFCE2835A2C19 (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 *, const RuntimeMethod*))SortedDictionary_2_Clear_mE121C95209B8E96231C0E20A84E4036A30526471_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.String,System.Json.JsonValue>::ContainsKey(!0)
inline bool SortedDictionary_2_ContainsKey_mB41D4B783C3FA0B3EA2CC03BC3556901A25E9D9F (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 *, String_t*, const RuntimeMethod*))SortedDictionary_2_ContainsKey_mC524CC8715D027FB364746134319A31068BBEE03_gshared)(__this, ___key0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.TypeCode System.Type::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m25B2ADC2D68FE33486DE032926C6B1EECC8D73CE (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96 (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Json.JavaScriptReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptReader__ctor_m5C4385F2DE5AE44AA2A45DCEBA48513EA794074D (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, bool ___raiseOnNumberError1, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.Json.JavaScriptReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JavaScriptReader_Read_mEFE593B9A24B2851343C713D9B70A4B2E847F096 (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method);
// System.Json.JsonValue System.Json.JsonValue::ToJsonValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * JsonValue_ToJsonValue_mAC814311B96D62A7789D6EA834F95C39C8FAB01F (RuntimeObject * ___ret0, const RuntimeMethod* method);
// System.Void System.Json.JsonValue/<ToJsonPairEnumerable>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonPairEnumerableU3Ed__2__ctor_m709FCEDEF6DB16015E4757068B135B29B92629FB (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Json.JsonValue/<ToJsonValueEnumerable>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonValueEnumerableU3Ed__3__ctor_m1AE17F014011FE752925B9FFB01340BBA94077D8 (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>> System.Json.JsonValue::ToJsonPairEnumerable(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_ToJsonPairEnumerable_m3421804BD2E5A70F9FE61F7E1467F86394DFA124 (RuntimeObject* ___kvpc0, const RuntimeMethod* method);
// System.Void System.Json.JsonObject::.ctor(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_m06F551EB42CF7792827BC4A68A2FA713773567AD (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, RuntimeObject* ___items0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Json.JsonValue> System.Json.JsonValue::ToJsonValueEnumerable(System.Collections.Generic.IEnumerable`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_ToJsonValueEnumerable_mE542D41153BDC87383516B53CF60A3C7B0285832 (RuntimeObject* ___arr0, const RuntimeMethod* method);
// System.Void System.Json.JsonArray::.ctor(System.Collections.Generic.IEnumerable`1<System.Json.JsonValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray__ctor_mFC27BB1D091CA6555B379D5C2B93DE0D6953E754 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, RuntimeObject* ___items0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m529C67C97EAF61312C638E5F5BB49771E11AA6DE (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mED206140CA82A17DC1954A8B543476F7CD7B2960 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mBB25616D89B47FDA5381456F877E2A49BB83784B (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m4DF2D72A84EE887A160990FEEB729471D1206478 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m4786166B0ECB1334B62AB746ED025A8265698758 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mAB036D175B9D4B4A9BC294D869AC29B72733CED2 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mA3BA6CCFB745CFF6C3226405FA968FF225E9554E (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m81DA3743DC697E81E803EF85A082C34CBF14A980 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m760A96B64AF07AAD5517B099330F4666B728741E (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, int8_t ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mB17C8AFBCF4BE220D6685D5DE01C384543802BFD (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mE2B2947322994A531DF207C947BE027D9106214A (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m95FF4029A61BE3E0011FDB3BC1CADBB082E900AF (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m6046E129731BD66985A5B7E727FC475EA2408FD3 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m2EC7C7BD233FC6BFE1A2CCBEAC0D8E921C399C7B (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mE2F96212B8E715D22A7C897EF2155B0A99B6D441 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m681210A842E1848A350F445F26972DBE2C2F82F0 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m4CC265BFED501D358E83B606F372A405F98CD53B (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, Guid_t  ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m4ED123648825B152CFBB0DD5EC48882304415533 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);
// System.Void System.Json.JsonPrimitive::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mCC57548EA21E538E862C9C29202359C6B2612344 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Json.JsonValue System.Json.JsonValue::Load(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * JsonValue_Load_mD504FDF03510DD059031442815CC687BFD308521 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___textReader0, const RuntimeMethod* method);
// System.Void System.Json.JsonValue::SaveInternal(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonValue_SaveInternal_m22840D6797985A8FD5B9E9C64D1F33DBC4AE41C6 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___w0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>> System.Json.JsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_GetEnumerator_m37F174994F0A3312546478311F1326C667409842 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, const RuntimeMethod* method);
// System.String System.Json.JsonValue::EscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValue_EscapeString_mCA4DA7EE514CA3BC1D51508A1A25892A71D26907 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, String_t* ___src0, const RuntimeMethod* method);
// System.Boolean System.Json.JsonValue::op_Implicit(System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_op_Implicit_mC541F5C13D20EBCC728C4CEB3C6CAB0CCE65D35D (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value0, const RuntimeMethod* method);
// System.String System.Json.JsonPrimitive::GetFormattedString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonPrimitive_GetFormattedString_mDE339F2B26CF635EE9080ADE2305BD3879DF1ED6 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mBA5BDF99FA78C7B9402872EBB9324A9311040264 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, const RuntimeMethod* method);
// System.Boolean System.Json.JsonValue::NeedEscape(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_NeedEscape_mE4DBFD2847C9B1DDFD675FAC9C68E17264C83CC9 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, String_t* ___src0, int32_t ___i1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17 (StringBuilder_t * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.String System.Json.JsonValue::DoEscapeString(System.Text.StringBuilder,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValue_DoEscapeString_m7215D0FD8EA03CE098BB2907E408A1EF59159227 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, StringBuilder_t * ___sb0, String_t* ___src1, int32_t ___cur2, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Object System.Json.JsonPrimitive::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * JsonPrimitive_get_Value_mCE82464C11AD924C0E4FB5BF7496CE72A93FD7F0_inline (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_mCE7DD656DC67A41427BEED725AD32C5022F2EE8C (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCDD3456A0F07EF72C62EF668CF9141937D0EB041 (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void System.Json.JsonValue/<ToJsonPairEnumerable>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonPairEnumerableU3Ed__2_U3CU3Em__Finally1_m72AB756613D1E153D17BED13EFC41F9DCA240F80 (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mAD67AD8985DFADB07A425E9BDC0EA74B94BC9C0E (KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 * __this, String_t* ___key0, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *, String_t*, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Json.JsonValue/<ToJsonPairEnumerable>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonPairEnumerableU3Ed__2_System_IDisposable_Dispose_mE82FF6451459798FB88684B538506EDD77834F38 (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>> System.Json.JsonValue/<ToJsonPairEnumerable>d__2::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Json.JsonValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CToJsonPairEnumerableU3Ed__2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_Json_JsonValueU3EU3E_GetEnumerator_mF178EBF29F4A8821CBE713FCE3D7C73CB9DE06DC (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method);
// System.Void System.Json.JsonValue/<ToJsonValueEnumerable>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonValueEnumerableU3Ed__3_U3CU3Em__Finally1_mC218655D4D04C0E3CC6F3FF7C9E7E6CAFDB207C0 (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method);
// System.Void System.Json.JsonValue/<ToJsonValueEnumerable>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonValueEnumerableU3Ed__3_System_IDisposable_Dispose_m333C928171CB7E8FF27C4CB0BA2031FDE4AC863D (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Json.JsonValue> System.Json.JsonValue/<ToJsonValueEnumerable>d__3::System.Collections.Generic.IEnumerable<System.Json.JsonValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CToJsonValueEnumerableU3Ed__3_System_Collections_Generic_IEnumerableU3CSystem_Json_JsonValueU3E_GetEnumerator_m4358AE5148554C5F6401D9DC0E38ADE8428FFEDA (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void System.Runtime.Serialization.Json.JavaScriptReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptReader__ctor_m5C4385F2DE5AE44AA2A45DCEBA48513EA794074D (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, bool ___raiseOnNumberError1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_line_1(1);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_vb_6(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_1 = ___reader0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader__ctor_m5C4385F2DE5AE44AA2A45DCEBA48513EA794074D_RuntimeMethod_var)));
	}

IL_0026:
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_3 = ___reader0;
		__this->set_r_0(L_3);
		return;
	}
}
// System.Object System.Runtime.Serialization.Json.JavaScriptReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JavaScriptReader_Read_mEFE593B9A24B2851343C713D9B70A4B2E847F096 (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method)
{
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		RuntimeObject * L_0;
		L_0 = JavaScriptReader_ReadCore_m05F5CF4E5DDCC21AC8EA9CD79F19FE76D41E24EB(__this, /*hidden argument*/NULL);
		JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			G_B2_0 = L_0;
			goto IL_002b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var)));
		String_t* L_3;
		L_3 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB6A6097C96C294B2920E2F7A5B84583D5DC2780)), L_2, /*hidden argument*/NULL);
		Exception_t * L_4;
		L_4 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_Read_mEFE593B9A24B2851343C713D9B70A4B2E847F096_RuntimeMethod_var)));
	}

IL_002b:
	{
		return G_B2_0;
	}
}
// System.Object System.Runtime.Serialization.Json.JavaScriptReader::ReadCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JavaScriptReader_ReadCore_m05F5CF4E5DDCC21AC8EA9CD79F19FE76D41E24EB (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_m9B0953865229F87D69E1DD9EB7EB4CBE0971CB0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_1 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA(__this, /*hidden argument*/NULL);
		int32_t L_0;
		L_0 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_2;
		L_2 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8EB8B781496F6CFEEDA7163BAC4C8DB324D079CA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadCore_m05F5CF4E5DDCC21AC8EA9CD79F19FE76D41E24EB_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)102))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0176;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)102))))
		{
			goto IL_0157;
		}
	}
	{
		goto IL_017d;
	}

IL_003c:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110))))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)116))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)123))))
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_017d;
	}

IL_0056:
	{
		int32_t L_10;
		L_10 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_11 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_11, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_1 = L_11;
		JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA(__this, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_13;
		L_13 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = V_1;
		return L_14;
	}

IL_007c:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_15 = V_1;
		RuntimeObject * L_16;
		L_16 = JavaScriptReader_ReadCore_m05F5CF4E5DDCC21AC8EA9CD79F19FE76D41E24EB(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_15, L_16, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA(__this, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_19;
		L_19 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_00a3:
	{
		int32_t L_20;
		L_20 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Exception_t * L_21;
		L_21 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA0FA090275CB05EE5C118B0520F8C907CC522EBC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadCore_m05F5CF4E5DDCC21AC8EA9CD79F19FE76D41E24EB_RuntimeMethod_var)));
	}

IL_00b9:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_22 = V_1;
		NullCheck(L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23;
		L_23 = List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D(L_22, /*hidden argument*/List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_RuntimeMethod_var);
		return (RuntimeObject *)L_23;
	}

IL_00c0:
	{
		int32_t L_24;
		L_24 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_25 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_25, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_2 = L_25;
		JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA(__this, /*hidden argument*/NULL);
		int32_t L_26;
		L_26 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_27;
		L_27 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_28 = V_2;
		return L_28;
	}

IL_00e6:
	{
		JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA(__this, /*hidden argument*/NULL);
		int32_t L_29;
		L_29 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_30;
		L_30 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		goto IL_013e;
	}

IL_00ff:
	{
		String_t* L_31;
		L_31 = JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2(__this, /*hidden argument*/NULL);
		V_3 = L_31;
		JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA(__this, /*hidden argument*/NULL);
		JavaScriptReader_Expect_m9BCD40451BC147448E72CFED2DA4C20C68F8D033(__this, ((int32_t)58), /*hidden argument*/NULL);
		JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA(__this, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_32 = V_2;
		String_t* L_33 = V_3;
		RuntimeObject * L_34;
		L_34 = JavaScriptReader_ReadCore_m05F5CF4E5DDCC21AC8EA9CD79F19FE76D41E24EB(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_32, L_33, L_34, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA(__this, /*hidden argument*/NULL);
		int32_t L_35;
		L_35 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		V_0 = L_35;
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)44))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_37 = V_0;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00e6;
		}
	}

IL_013e:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_38 = V_2;
		KeyValuePair_2U5BU5D_tD830F063808EDE5ADC7234A6292CB83848F60CD6* L_39;
		L_39 = Enumerable_ToArray_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_m9B0953865229F87D69E1DD9EB7EB4CBE0971CB0C(L_38, /*hidden argument*/Enumerable_ToArray_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_m9B0953865229F87D69E1DD9EB7EB4CBE0971CB0C_RuntimeMethod_var);
		return (RuntimeObject *)L_39;
	}

IL_0145:
	{
		JavaScriptReader_Expect_m5BDEB42F0DC9CFC26D2D4195C392D4C17D68D14A(__this, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		bool L_40 = ((bool)1);
		RuntimeObject * L_41 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_40);
		return L_41;
	}

IL_0157:
	{
		JavaScriptReader_Expect_m5BDEB42F0DC9CFC26D2D4195C392D4C17D68D14A(__this, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		bool L_42 = ((bool)0);
		RuntimeObject * L_43 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_42);
		return L_43;
	}

IL_0169:
	{
		JavaScriptReader_Expect_m5BDEB42F0DC9CFC26D2D4195C392D4C17D68D14A(__this, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		return NULL;
	}

IL_0176:
	{
		String_t* L_44;
		L_44 = JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2(__this, /*hidden argument*/NULL);
		return L_44;
	}

IL_017d:
	{
		int32_t L_45 = V_0;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_45)))
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_46 = V_0;
		if ((((int32_t)L_46) <= ((int32_t)((int32_t)57))))
		{
			goto IL_018c;
		}
	}

IL_0187:
	{
		int32_t L_47 = V_0;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0193;
		}
	}

IL_018c:
	{
		RuntimeObject * L_48;
		L_48 = JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C(__this, /*hidden argument*/NULL);
		return L_48;
	}

IL_0193:
	{
		int32_t L_49 = V_0;
		Il2CppChar L_50 = ((Il2CppChar)((int32_t)((uint16_t)L_49)));
		RuntimeObject * L_51 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)), &L_50);
		String_t* L_52;
		L_52 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF30037B37D615E1C7C2671DA73C158FC29A6FCDD)), L_51, /*hidden argument*/NULL);
		Exception_t * L_53;
		L_53 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, L_52, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadCore_m05F5CF4E5DDCC21AC8EA9CD79F19FE76D41E24EB_RuntimeMethod_var)));
	}
}
// System.Int32 System.Runtime.Serialization.Json.JavaScriptReader::PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738 (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_has_peek_4();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_1 = __this->get_r_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		__this->set_peek_3(L_2);
		__this->set_has_peek_4((bool)1);
	}

IL_0020:
	{
		int32_t L_3 = __this->get_peek_3();
		return L_3;
	}
}
// System.Int32 System.Runtime.Serialization.Json.JavaScriptReader::ReadChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = __this->get_has_peek_4();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_1 = __this->get_r_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		int32_t L_3 = __this->get_peek_3();
		G_B3_0 = L_3;
	}

IL_001b:
	{
		__this->set_has_peek_4((bool)0);
		bool L_4 = __this->get_prev_lf_5();
		G_B4_0 = G_B3_0;
		if (!L_4)
		{
			G_B5_0 = G_B3_0;
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = __this->get_line_1();
		__this->set_line_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		__this->set_column_2(0);
		__this->set_prev_lf_5((bool)0);
		G_B5_0 = G_B4_0;
	}

IL_0046:
	{
		int32_t L_6 = G_B5_0;
		G_B6_0 = L_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)10)))))
		{
			G_B7_0 = L_6;
			goto IL_0052;
		}
	}
	{
		__this->set_prev_lf_5((bool)1);
		G_B7_0 = G_B6_0;
	}

IL_0052:
	{
		int32_t L_7 = __this->get_column_2();
		__this->set_column_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		return G_B7_0;
	}
}
// System.Void System.Runtime.Serialization.Json.JavaScriptReader::SkipSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptReader_SkipSpaces_m99D481225097E1848E22D543F81A7E52E06DE1CA (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;

IL_0000:
	{
		int32_t L_0;
		L_0 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)9)))) > ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)13))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0021;
		}
	}

IL_0018:
	{
		int32_t L_4;
		L_4 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		goto IL_0000;
	}

IL_0021:
	{
		return;
	}
}
// System.Object System.Runtime.Serialization.Json.JavaScriptReader::ReadNumericLiteral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int64_t V_8 = 0;
	uint64_t V_9 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t * L_2 = V_0;
		int32_t L_3;
		L_3 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_2, ((int32_t)((uint16_t)L_3)), /*hidden argument*/NULL);
	}

IL_001e:
	{
		V_2 = 0;
		int32_t L_5;
		L_5 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)((int32_t)48)))? 1 : 0);
	}

IL_002b:
	{
		int32_t L_6;
		L_6 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)48))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)57)) < ((int32_t)L_8)))
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t * L_9 = V_0;
		int32_t L_10;
		L_10 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_9, ((int32_t)((uint16_t)L_10)), /*hidden argument*/NULL);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		Exception_t * L_14;
		L_14 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B3ACFB696953B0393D358BB25F5B24DBBF24740)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		goto IL_002b;
	}

IL_0063:
	{
		int32_t L_16 = V_2;
		if (L_16)
		{
			goto IL_0072;
		}
	}
	{
		Exception_t * L_17;
		L_17 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF885BE5D2E75A92C7C80759A1C2917FA76F6062)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C_RuntimeMethod_var)));
	}

IL_0072:
	{
		V_4 = (bool)0;
		V_5 = 0;
		int32_t L_18;
		L_18 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_00df;
		}
	}
	{
		V_4 = (bool)1;
		StringBuilder_t * L_19 = V_0;
		int32_t L_20;
		L_20 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, ((int32_t)((uint16_t)L_20)), /*hidden argument*/NULL);
		int32_t L_22;
		L_22 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		Exception_t * L_23;
		L_23 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral565886250A786A5A6F3EC725A107A10AF406DB41)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C_RuntimeMethod_var)));
	}

IL_00a8:
	{
		int32_t L_24;
		L_24 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)48))))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_26 = V_1;
		if ((((int32_t)((int32_t)57)) < ((int32_t)L_26)))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t * L_27 = V_0;
		int32_t L_28;
		L_28 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		StringBuilder_t * L_29;
		L_29 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_27, ((int32_t)((uint16_t)L_28)), /*hidden argument*/NULL);
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		goto IL_00a8;
	}

IL_00cf:
	{
		int32_t L_31 = V_5;
		if (L_31)
		{
			goto IL_00df;
		}
	}
	{
		Exception_t * L_32;
		L_32 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral565886250A786A5A6F3EC725A107A10AF406DB41)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C_RuntimeMethod_var)));
	}

IL_00df:
	{
		int32_t L_33;
		L_33 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)101))))
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)69))))
		{
			goto IL_0192;
		}
	}
	{
		bool L_36 = V_4;
		if (L_36)
		{
			goto IL_015d;
		}
	}
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_39;
		L_39 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_40;
		L_40 = Int32_TryParse_m006085C3B9AC64929E893942EF7A55328FDAE090(L_38, ((int32_t)167), L_39, (int32_t*)(&V_7), /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_41 = V_7;
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_42);
		return L_43;
	}

IL_011b:
	{
		StringBuilder_t * L_44 = V_0;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_46;
		L_46 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_47;
		L_47 = Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A(L_45, ((int32_t)167), L_46, (int64_t*)(&V_8), /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_013c;
		}
	}
	{
		int64_t L_48 = V_8;
		int64_t L_49 = L_48;
		RuntimeObject * L_50 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_49);
		return L_50;
	}

IL_013c:
	{
		StringBuilder_t * L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_51);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_53;
		L_53 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_54;
		L_54 = UInt64_TryParse_m1D56C1385B6F4855FD1A893FEEE12C0796695621(L_52, ((int32_t)167), L_53, (uint64_t*)(&V_9), /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_015d;
		}
	}
	{
		uint64_t L_55 = V_9;
		uint64_t L_56 = L_55;
		RuntimeObject * L_57 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_56);
		return L_57;
	}

IL_015d:
	{
		StringBuilder_t * L_58 = V_0;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_58);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_60;
		L_60 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Decimal_TryParse_m33A509B1E4659C190D496FFCFD4494D8B0DCFCAA(L_59, ((int32_t)167), L_60, (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)(&V_6), /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0219;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_62 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_63 = ((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var))->get_Zero_7();
		bool L_64;
		L_64 = Decimal_op_Inequality_m1524E424F030A184C95FA1AF24C76487E612E296(L_62, L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_0219;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_65 = V_6;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_66 = L_65;
		RuntimeObject * L_67 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_66);
		return L_67;
	}

IL_0192:
	{
		StringBuilder_t * L_68 = V_0;
		int32_t L_69;
		L_69 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		StringBuilder_t * L_70;
		L_70 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_68, ((int32_t)((uint16_t)L_69)), /*hidden argument*/NULL);
		int32_t L_71;
		L_71 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_71) >= ((int32_t)0)))
		{
			goto IL_01b4;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_72 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_72, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7ACE117E38161F96B2B89FC59D8083A5B6F6AB7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C_RuntimeMethod_var)));
	}

IL_01b4:
	{
		int32_t L_73;
		L_73 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		V_1 = L_73;
		int32_t L_74 = V_1;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_01d0;
		}
	}
	{
		StringBuilder_t * L_75 = V_0;
		int32_t L_76;
		L_76 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		StringBuilder_t * L_77;
		L_77 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_75, ((int32_t)((uint16_t)L_76)), /*hidden argument*/NULL);
		goto IL_01e3;
	}

IL_01d0:
	{
		int32_t L_78 = V_1;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_01e3;
		}
	}
	{
		StringBuilder_t * L_79 = V_0;
		int32_t L_80;
		L_80 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		NullCheck(L_79);
		StringBuilder_t * L_81;
		L_81 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_79, ((int32_t)((uint16_t)L_80)), /*hidden argument*/NULL);
	}

IL_01e3:
	{
		int32_t L_82;
		L_82 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_82) >= ((int32_t)0)))
		{
			goto IL_01f8;
		}
	}
	{
		Exception_t * L_83;
		L_83 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7ACE117E38161F96B2B89FC59D8083A5B6F6AB7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadNumericLiteral_mD0F0660B2E0B23628683453E306FA111BAFCE72C_RuntimeMethod_var)));
	}

IL_01f8:
	{
		int32_t L_84;
		L_84 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		V_1 = L_84;
		int32_t L_85 = V_1;
		if ((((int32_t)L_85) < ((int32_t)((int32_t)48))))
		{
			goto IL_0219;
		}
	}
	{
		int32_t L_86 = V_1;
		if ((((int32_t)((int32_t)57)) < ((int32_t)L_86)))
		{
			goto IL_0219;
		}
	}
	{
		StringBuilder_t * L_87 = V_0;
		int32_t L_88;
		L_88 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		NullCheck(L_87);
		StringBuilder_t * L_89;
		L_89 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_87, ((int32_t)((uint16_t)L_88)), /*hidden argument*/NULL);
		goto IL_01f8;
	}

IL_0219:
	{
		StringBuilder_t * L_90 = V_0;
		NullCheck(L_90);
		String_t* L_91;
		L_91 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_90);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_92;
		L_92 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		double L_93;
		L_93 = Double_Parse_mD60850592CF629A16EA1ECC6834385E7DDAD239F(L_91, ((int32_t)167), L_92, /*hidden argument*/NULL);
		double L_94 = L_93;
		RuntimeObject * L_95 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_94);
		return L_95;
	}
}
// System.String System.Runtime.Serialization.Json.JavaScriptReader::ReadStringLiteral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2 (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = JavaScriptReader_PeekChar_mFFF95596527A2046962F2B3D8AB4259DA6294738(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)34))))
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_1;
		L_1 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3F7F9F3AD37F70E5E3F545BD9045B6E317F18A6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_2;
		L_2 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = __this->get_vb_6();
		NullCheck(L_3);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_3, 0, /*hidden argument*/NULL);
	}

IL_0029:
	{
		int32_t L_4;
		L_4 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		Exception_t * L_6;
		L_6 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85E5DFFC27DB8EDCB2AA46859AF9CC42B6BCED99)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0051;
		}
	}
	{
		StringBuilder_t * L_8 = __this->get_vb_6();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}

IL_0051:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0066;
		}
	}
	{
		StringBuilder_t * L_11 = __this->get_vb_6();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_11, ((int32_t)((uint16_t)L_12)), /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_0066:
	{
		int32_t L_14;
		L_14 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		Exception_t * L_16;
		L_16 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94686CBFC69BA503B80169114BA00836950C7A4D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2_RuntimeMethod_var)));
	}

IL_007d:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)92))))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)34))))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)47))))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)92))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_01b9;
	}

IL_0096:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)102))))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)98))))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)102))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_01b9;
	}

IL_00aa:
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)110))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_25 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_0118;
			}
			case 1:
			{
				goto IL_01b9;
			}
			case 2:
			{
				goto IL_012b;
			}
			case 3:
			{
				goto IL_013e;
			}
		}
	}
	{
		goto IL_01b9;
	}

IL_00cd:
	{
		StringBuilder_t * L_26 = __this->get_vb_6();
		int32_t L_27 = V_0;
		NullCheck(L_26);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_26, ((int32_t)((uint16_t)L_27)), /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_00e0:
	{
		StringBuilder_t * L_29 = __this->get_vb_6();
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, 8, /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_00f2:
	{
		StringBuilder_t * L_31 = __this->get_vb_6();
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_31, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_0105:
	{
		StringBuilder_t * L_33 = __this->get_vb_6();
		NullCheck(L_33);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_33, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_0118:
	{
		StringBuilder_t * L_35 = __this->get_vb_6();
		NullCheck(L_35);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_35, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_012b:
	{
		StringBuilder_t * L_37 = __this->get_vb_6();
		NullCheck(L_37);
		StringBuilder_t * L_38;
		L_38 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_37, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_013e:
	{
		V_1 = (uint16_t)0;
		V_2 = 0;
		goto IL_01a3;
	}

IL_0144:
	{
		uint16_t L_39 = V_1;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)L_39<<(int32_t)4))));
		int32_t L_40;
		L_40 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		int32_t L_41 = L_40;
		V_0 = L_41;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_0160;
		}
	}
	{
		Exception_t * L_42;
		L_42 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36497E151DC3D26DD28371A36B27BDB7930FC0BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2_RuntimeMethod_var)));
	}

IL_0160:
	{
		int32_t L_43 = V_0;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_43)))
		{
			goto IL_0173;
		}
	}
	{
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) > ((int32_t)((int32_t)57))))
		{
			goto IL_0173;
		}
	}
	{
		uint16_t L_45 = V_1;
		int32_t L_46 = V_0;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)((int32_t)48)))))))));
	}

IL_0173:
	{
		int32_t L_47 = V_0;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_47)))
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_48 = V_0;
		if ((((int32_t)L_48) > ((int32_t)((int32_t)70))))
		{
			goto IL_0189;
		}
	}
	{
		uint16_t L_49 = V_1;
		int32_t L_50 = V_0;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)((int32_t)65))), (int32_t)((int32_t)10)))))))));
	}

IL_0189:
	{
		int32_t L_51 = V_0;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_51)))
		{
			goto IL_019f;
		}
	}
	{
		int32_t L_52 = V_0;
		if ((((int32_t)L_52) > ((int32_t)((int32_t)102))))
		{
			goto IL_019f;
		}
	}
	{
		uint16_t L_53 = V_1;
		int32_t L_54 = V_0;
		V_1 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)((int32_t)97))), (int32_t)((int32_t)10)))))))));
	}

IL_019f:
	{
		int32_t L_55 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_01a3:
	{
		int32_t L_56 = V_2;
		if ((((int32_t)L_56) < ((int32_t)4)))
		{
			goto IL_0144;
		}
	}
	{
		StringBuilder_t * L_57 = __this->get_vb_6();
		uint16_t L_58 = V_1;
		NullCheck(L_57);
		StringBuilder_t * L_59;
		L_59 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_57, L_58, /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_01b9:
	{
		Exception_t * L_60;
		L_60 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A497C5984AC29D6AAE3C1C3665EE7B8380A8D29)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_ReadStringLiteral_mA27E0EC7FF5FE9E1C299F4D4322601A0B683A9F2_RuntimeMethod_var)));
	}
}
// System.Void System.Runtime.Serialization.Json.JavaScriptReader::Expect(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptReader_Expect_m9BCD40451BC147448E72CFED2DA4C20C68F8D033 (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, Il2CppChar ___expected0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		Il2CppChar L_2 = ___expected0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_3 = ___expected0;
		Il2CppChar L_4 = L_3;
		RuntimeObject * L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)), &L_4);
		int32_t L_6 = V_0;
		Il2CppChar L_7 = ((Il2CppChar)((int32_t)((uint16_t)L_6)));
		RuntimeObject * L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFEB1E26F0F917F3BC31BB3C320D9E6E33CE3274E)), L_5, L_8, /*hidden argument*/NULL);
		Exception_t * L_10;
		L_10 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_Expect_m9BCD40451BC147448E72CFED2DA4C20C68F8D033_RuntimeMethod_var)));
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Json.JavaScriptReader::Expect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JavaScriptReader_Expect_m5BDEB42F0DC9CFC26D2D4195C392D4C17D68D14A (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, String_t* ___expected0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		int32_t L_0;
		L_0 = JavaScriptReader_ReadChar_m6EFF194960FC19CF16F9B8BB214FC526D7DCBCBC(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___expected0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_3)))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4 = ___expected0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67D2E806CD693001378928C89738DD45CDA3E393)), L_4, L_7, /*hidden argument*/NULL);
		Exception_t * L_9;
		L_9 = JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E(__this, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JavaScriptReader_Expect_m5BDEB42F0DC9CFC26D2D4195C392D4C17D68D14A_RuntimeMethod_var)));
	}

IL_002b:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_11 = V_0;
		String_t* L_12 = ___expected0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Exception System.Runtime.Serialization.Json.JavaScriptReader::JsonError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * JavaScriptReader_JsonError_m05AB32776CEF0CED2745F00FF74DBB0F846C6F0E (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C6DFEA916500E1B6704C230E54CE48992EC633F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		int32_t L_1 = __this->get_line_1();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = __this->get_column_2();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral2C6DFEA916500E1B6704C230E54CE48992EC633F, L_0, L_3, L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, L_7, /*hidden argument*/NULL);
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
// System.Void System.Json.JsonArray::.ctor(System.Collections.Generic.IEnumerable`1<System.Json.JsonValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray__ctor_mFC27BB1D091CA6555B379D5C2B93DE0D6953E754 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, RuntimeObject* ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5F0900FF986C078500B73508D4EDFD1C7121C876_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___items0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF300D2310959AF105732D339376803869D9B2B91)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonArray__ctor_mFC27BB1D091CA6555B379D5C2B93DE0D6953E754_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___items0;
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_3 = (List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 *)il2cpp_codegen_object_new(List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6_il2cpp_TypeInfo_var);
		List_1__ctor_m5F0900FF986C078500B73508D4EDFD1C7121C876(L_3, L_2, /*hidden argument*/List_1__ctor_m5F0900FF986C078500B73508D4EDFD1C7121C876_RuntimeMethod_var);
		__this->set_list_0(L_3);
		return;
	}
}
// System.Int32 System.Json.JsonArray::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonArray_get_Count_m336175FFAA90A6AD7AFA759C5A3F8EF5CBA58F53 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDDCDE959798A2AB8C6926BDC74B8BD825679D3CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mDDCDE959798A2AB8C6926BDC74B8BD825679D3CC_inline(L_0, /*hidden argument*/List_1_get_Count_mDDCDE959798A2AB8C6926BDC74B8BD825679D3CC_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean System.Json.JsonArray::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonArray_get_IsReadOnly_mA1A3C72B161300BC20A3B11959BDD3B95097A8C0 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Json.JsonValue System.Json.JsonArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * JsonArray_get_Item_m2EE764A27D3A1675233112C3130881DD5E0D23D7 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1280625068DC99BA8C25C83B1DBFC193D3E84FC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_2;
		L_2 = List_1_get_Item_m1280625068DC99BA8C25C83B1DBFC193D3E84FC9_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1280625068DC99BA8C25C83B1DBFC193D3E84FC9_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Json.JsonArray::set_Item(System.Int32,System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray_set_Item_m9A374BD1FEF6FCEE5B46822B47967CB195AAD6DC (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, int32_t ___index0, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m7A9E157B8974B8EE333F3AFBBF3F3DDB9E2F1D09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_2 = ___value1;
		NullCheck(L_0);
		List_1_set_Item_m7A9E157B8974B8EE333F3AFBBF3F3DDB9E2F1D09(L_0, L_1, L_2, /*hidden argument*/List_1_set_Item_m7A9E157B8974B8EE333F3AFBBF3F3DDB9E2F1D09_RuntimeMethod_var);
		return;
	}
}
// System.Json.JsonType System.Json.JsonArray::get_JsonType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonArray_get_JsonType_m72E720EFB99CD98839C8F5EF1BC4C0D28A69EC7F (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(3);
	}
}
// System.Void System.Json.JsonArray::Add(System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray_Add_mC09C4F4B3FED59306BF7CBE3B351E9F1417DE1AC (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m363B2F27F06701EC5C5D0911EBD0F45EBE3EE1DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_1 = ___item0;
		NullCheck(L_0);
		List_1_Add_m363B2F27F06701EC5C5D0911EBD0F45EBE3EE1DC(L_0, L_1, /*hidden argument*/List_1_Add_m363B2F27F06701EC5C5D0911EBD0F45EBE3EE1DC_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Json.JsonArray::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray_Clear_m20B806C9E9238CE49F16D599D4811D0D0D845F97 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m63F0EB3C36611DA7BA8361437D813089F8EC6914_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		List_1_Clear_m63F0EB3C36611DA7BA8361437D813089F8EC6914(L_0, /*hidden argument*/List_1_Clear_m63F0EB3C36611DA7BA8361437D813089F8EC6914_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Json.JsonArray::Contains(System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonArray_Contains_m859EB65FA728B337D2351E28A22F585D13742632 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mB57D07D56A8574EF5781B24B4A153DC94C5C1C77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mB57D07D56A8574EF5781B24B4A153DC94C5C1C77(L_0, L_1, /*hidden argument*/List_1_Contains_mB57D07D56A8574EF5781B24B4A153DC94C5C1C77_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Json.JsonArray::CopyTo(System.Json.JsonValue[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray_CopyTo_mE834CE80BE522CEED337C4D056CD0A8ACB7C2739 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_mC50DD55EE2E8BE69CDCA26F8F37FB7C0860DBF22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		JsonValueU5BU5D_t2AA44B386E221D0149B5F67504F321342A13EECE* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		List_1_CopyTo_mC50DD55EE2E8BE69CDCA26F8F37FB7C0860DBF22(L_0, L_1, L_2, /*hidden argument*/List_1_CopyTo_mC50DD55EE2E8BE69CDCA26F8F37FB7C0860DBF22_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Json.JsonArray::IndexOf(System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonArray_IndexOf_mBB5B6BD4E36E813F3A1A8EBFAC6AD846A2D4E0FB (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m4105EE2177906B02FCFD62BD340D9D000E30C610_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_1 = ___item0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_m4105EE2177906B02FCFD62BD340D9D000E30C610(L_0, L_1, /*hidden argument*/List_1_IndexOf_m4105EE2177906B02FCFD62BD340D9D000E30C610_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Json.JsonArray::Insert(System.Int32,System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray_Insert_m1E7410BAB1883B7F1C30058CEC84C9EE6B6F1863 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, int32_t ___index0, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m0BE406D56D7BE22755798AEBA804E56D713DF04A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_2 = ___item1;
		NullCheck(L_0);
		List_1_Insert_m0BE406D56D7BE22755798AEBA804E56D713DF04A(L_0, L_1, L_2, /*hidden argument*/List_1_Insert_m0BE406D56D7BE22755798AEBA804E56D713DF04A_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Json.JsonArray::Remove(System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonArray_Remove_m602D487AFBF69E8FE8C588B8CF198FAA99550EDE (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mFDC899106CFD3BD1BE37D955B04060776EC49007_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mFDC899106CFD3BD1BE37D955B04060776EC49007(L_0, L_1, /*hidden argument*/List_1_Remove_mFDC899106CFD3BD1BE37D955B04060776EC49007_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Json.JsonArray::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonArray_RemoveAt_mC3F9CCCA1D97C342CF57F23E737A83498E700E0A (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m1F75CB3D73D46AF5522BDF8818874E4F2BAB1223_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_m1F75CB3D73D46AF5522BDF8818874E4F2BAB1223(L_0, L_1, /*hidden argument*/List_1_RemoveAt_m1F75CB3D73D46AF5522BDF8818874E4F2BAB1223_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Json.JsonValue> System.Json.JsonArray::System.Collections.Generic.IEnumerable<System.Json.JsonValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonArray_System_Collections_Generic_IEnumerableU3CSystem_Json_JsonValueU3E_GetEnumerator_mBEF92F9C360CE44CF15E30007D05695B902CD0BF (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m062E843FD18C9ABD5647749909ED1BB98CE2CEE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219  L_1;
		L_1 = List_1_GetEnumerator_m062E843FD18C9ABD5647749909ED1BB98CE2CEE2(L_0, /*hidden argument*/List_1_GetEnumerator_m062E843FD18C9ABD5647749909ED1BB98CE2CEE2_RuntimeMethod_var);
		Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Json.JsonArray::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonArray_System_Collections_IEnumerable_GetEnumerator_m6163CD47F2AD015CBDE714A34867CED4DC359EA1 (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m062E843FD18C9ABD5647749909ED1BB98CE2CEE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t0AA56CA9023B5BF020F8229B58191A27E736FDA6 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219  L_1;
		L_1 = List_1_GetEnumerator_m062E843FD18C9ABD5647749909ED1BB98CE2CEE2(L_0, /*hidden argument*/List_1_GetEnumerator_m062E843FD18C9ABD5647749909ED1BB98CE2CEE2_RuntimeMethod_var);
		Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_t21C764CC8BFDC1929D2D11E32269E93FD1861219_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
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
// System.Void System.Json.JsonObject::.ctor(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject__ctor_m06F551EB42CF7792827BC4A68A2FA713773567AD (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, RuntimeObject* ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m995D5CF3427395F52F0609C332498754A1DFD9AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___items0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF300D2310959AF105732D339376803869D9B2B91)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonObject__ctor_m06F551EB42CF7792827BC4A68A2FA713773567AD_RuntimeMethod_var)));
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_2;
		L_2 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_3 = (SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 *)il2cpp_codegen_object_new(SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5_il2cpp_TypeInfo_var);
		SortedDictionary_2__ctor_m995D5CF3427395F52F0609C332498754A1DFD9AB(L_3, L_2, /*hidden argument*/SortedDictionary_2__ctor_m995D5CF3427395F52F0609C332498754A1DFD9AB_RuntimeMethod_var);
		__this->set_map_0(L_3);
		RuntimeObject* L_4 = ___items0;
		JsonObject_AddRange_m5FDCBD45345D89B25027AC5CA32DA54A26D0DCBB(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Json.JsonObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonObject_get_Count_m15BF05E1FE5EFFC7DEB12C9698D2EC2CF78C2AF5 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Count_mF0BD96ED701B3F7C560672F91BE281093174FE67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_0 = __this->get_map_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SortedDictionary_2_get_Count_mF0BD96ED701B3F7C560672F91BE281093174FE67(L_0, /*hidden argument*/SortedDictionary_2_get_Count_mF0BD96ED701B3F7C560672F91BE281093174FE67_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>> System.Json.JsonObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_GetEnumerator_m37F174994F0A3312546478311F1326C667409842 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_GetEnumerator_m5931D95AB991AA60E44BEAC4C24E9A75912E0E0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_0 = __this->get_map_0();
		NullCheck(L_0);
		Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C  L_1;
		L_1 = SortedDictionary_2_GetEnumerator_m5931D95AB991AA60E44BEAC4C24E9A75912E0E0E(L_0, /*hidden argument*/SortedDictionary_2_GetEnumerator_m5931D95AB991AA60E44BEAC4C24E9A75912E0E0E_RuntimeMethod_var);
		Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator System.Json.JsonObject::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_System_Collections_IEnumerable_GetEnumerator_mF471A630D2FBD790FA3E511E2F4FD3A8BEDA8FDE (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_GetEnumerator_m5931D95AB991AA60E44BEAC4C24E9A75912E0E0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_0 = __this->get_map_0();
		NullCheck(L_0);
		Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C  L_1;
		L_1 = SortedDictionary_2_GetEnumerator_m5931D95AB991AA60E44BEAC4C24E9A75912E0E0E(L_0, /*hidden argument*/SortedDictionary_2_GetEnumerator_m5931D95AB991AA60E44BEAC4C24E9A75912E0E0E_RuntimeMethod_var);
		Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_tFEAD5A5591525E700870C9D62C624BEB9D7F159C_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Json.JsonValue System.Json.JsonObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * JsonObject_get_Item_m0F71D669156373C3809D7AA859625903F6903F3D (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_mEDF973BB4DFDCD82F6A8F09D9E40650A38EDD8D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_0 = __this->get_map_0();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_2;
		L_2 = SortedDictionary_2_get_Item_mEDF973BB4DFDCD82F6A8F09D9E40650A38EDD8D0(L_0, L_1, /*hidden argument*/SortedDictionary_2_get_Item_mEDF973BB4DFDCD82F6A8F09D9E40650A38EDD8D0_RuntimeMethod_var);
		return L_2;
	}
}
// System.Json.JsonType System.Json.JsonObject::get_JsonType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonObject_get_JsonType_m169D5803202805897A3C41F8BBCEC29EF2D3222E (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Collections.Generic.ICollection`1<System.Json.JsonValue> System.Json.JsonObject::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonObject_get_Values_m1681B0C5B6794F59083EEC3F35B05199A299BB6C (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Values_m33099AF96A88522D3A3D232A274745A5B72088EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_0 = __this->get_map_0();
		NullCheck(L_0);
		ValueCollection_t09AEC7F0C5BA261C6AAE26C8A2D7E8A03ABB1F4D * L_1;
		L_1 = SortedDictionary_2_get_Values_m33099AF96A88522D3A3D232A274745A5B72088EF(L_0, /*hidden argument*/SortedDictionary_2_get_Values_m33099AF96A88522D3A3D232A274745A5B72088EF_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void System.Json.JsonObject::Add(System.String,System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_Add_m6968DF84332D02085996FF22E656CE5F20D10D72 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, String_t* ___key0, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_mFB2C0A94A041B4A2A2466EC2B02E6FDF3F72AEE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonObject_Add_m6968DF84332D02085996FF22E656CE5F20D10D72_RuntimeMethod_var)));
	}

IL_000e:
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_2 = __this->get_map_0();
		String_t* L_3 = ___key0;
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_4 = ___value1;
		NullCheck(L_2);
		SortedDictionary_2_Add_mFB2C0A94A041B4A2A2466EC2B02E6FDF3F72AEE5(L_2, L_3, L_4, /*hidden argument*/SortedDictionary_2_Add_mFB2C0A94A041B4A2A2466EC2B02E6FDF3F72AEE5_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Json.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_Add_m753A9FC0518C0B9DB4DBDE3D0E0095C5422C66E6 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  ___pair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_inline((KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_RuntimeMethod_var);
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_1;
		L_1 = KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_inline((KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *)(&___pair0), /*hidden argument*/KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_RuntimeMethod_var);
		JsonObject_Add_m6968DF84332D02085996FF22E656CE5F20D10D72(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Json.JsonObject::AddRange(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_AddRange_m5FDCBD45345D89B25027AC5CA32DA54A26D0DCBB (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, RuntimeObject* ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA03F7A77A9C77B84C173D390A8EFC0BB5F2EA2CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC45757D92880651E2047270AD7A69ED0EB038719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_mFB2C0A94A041B4A2A2466EC2B02E6FDF3F72AEE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___items0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF300D2310959AF105732D339376803869D9B2B91)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonObject_AddRange_m5FDCBD45345D89B25027AC5CA32DA54A26D0DCBB_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___items0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>::GetEnumerator() */, IEnumerable_1_tA03F7A77A9C77B84C173D390A8EFC0BB5F2EA2CB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0017:
		{
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  L_5;
			L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>::get_Current() */, IEnumerator_1_tC45757D92880651E2047270AD7A69ED0EB038719_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_6 = __this->get_map_0();
			String_t* L_7;
			L_7 = KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_inline((KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_RuntimeMethod_var);
			JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_8;
			L_8 = KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_inline((KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_RuntimeMethod_var);
			NullCheck(L_6);
			SortedDictionary_2_Add_mFB2C0A94A041B4A2A2466EC2B02E6FDF3F72AEE5(L_6, L_7, L_8, /*hidden argument*/SortedDictionary_2_Add_mFB2C0A94A041B4A2A2466EC2B02E6FDF3F72AEE5_RuntimeMethod_var);
		}

IL_0037:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			bool L_10;
			L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0017;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_0;
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_0044:
		{
			RuntimeObject* L_12 = V_0;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(65)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
		return;
	}
}
// System.Void System.Json.JsonObject::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_Clear_mA58C1B2A5F74983ADDDCCA394DC4A38752A2B377 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Clear_m3EA871DEF0B86329EA37C4510B2FFCE2835A2C19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_0 = __this->get_map_0();
		NullCheck(L_0);
		SortedDictionary_2_Clear_m3EA871DEF0B86329EA37C4510B2FFCE2835A2C19(L_0, /*hidden argument*/SortedDictionary_2_Clear_m3EA871DEF0B86329EA37C4510B2FFCE2835A2C19_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Json.JsonObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Json.JsonValue>>.Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_Json_JsonValueU3EU3E_Contains_m1F642A2FF3FC1F8B2DA605612D8FE2B269A77F68 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t50BEAD6BFAC98F188A0D878A2A118710F56839EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_0 = __this->get_map_0();
		KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>::Contains(!0) */, ICollection_1_t50BEAD6BFAC98F188A0D878A2A118710F56839EE_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Json.JsonObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Json.JsonValue>>.Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_Json_JsonValueU3EU3E_Remove_m2ED87AEFE2CE60D59CF732AE0BE82FB47009E6D1 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t50BEAD6BFAC98F188A0D878A2A118710F56839EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_0 = __this->get_map_0();
		KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>::Remove(!0) */, ICollection_1_t50BEAD6BFAC98F188A0D878A2A118710F56839EE_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Json.JsonObject::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObject_ContainsKey_m8A4BCD31B2DC66B54BFE12AF3A8E29695418F3BD (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_mB41D4B783C3FA0B3EA2CC03BC3556901A25E9D9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonObject_ContainsKey_m8A4BCD31B2DC66B54BFE12AF3A8E29695418F3BD_RuntimeMethod_var)));
	}

IL_000e:
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_2 = __this->get_map_0();
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = SortedDictionary_2_ContainsKey_mB41D4B783C3FA0B3EA2CC03BC3556901A25E9D9F(L_2, L_3, /*hidden argument*/SortedDictionary_2_ContainsKey_mB41D4B783C3FA0B3EA2CC03BC3556901A25E9D9F_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void System.Json.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonObject_CopyTo_m71CAC5DA78BDB15B96561DCB98D01089038BE82F (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, KeyValuePair_2U5BU5D_tF6D04C7D4200BCE92B41653DE1DE68C8A18A90BE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t50BEAD6BFAC98F188A0D878A2A118710F56839EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2_t77499D7C9934C9A780146D34A83AC532849FB7C5 * L_0 = __this->get_map_0();
		KeyValuePair_2U5BU5D_tF6D04C7D4200BCE92B41653DE1DE68C8A18A90BE* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_tF6D04C7D4200BCE92B41653DE1DE68C8A18A90BE*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>::CopyTo(!0[],System.Int32) */, ICollection_1_t50BEAD6BFAC98F188A0D878A2A118710F56839EE_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Json.JsonObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Json.JsonValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_Json_JsonValueU3EU3E_get_IsReadOnly_mE7A652FA17B717BF4FABF4038C705DB104FC3158 (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
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
// System.Void System.Json.JsonPrimitive::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m529C67C97EAF61312C638E5F5BB49771E11AA6DE (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		bool L_0 = ___value0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mED206140CA82A17DC1954A8B543476F7CD7B2960 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		uint8_t L_0 = ___value0;
		uint8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mBB25616D89B47FDA5381456F877E2A49BB83784B (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		Il2CppChar L_0 = ___value0;
		Il2CppChar L_1 = L_0;
		RuntimeObject * L_2 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m4DF2D72A84EE887A160990FEEB729471D1206478 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___value0;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = L_0;
		RuntimeObject * L_2 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m4786166B0ECB1334B62AB746ED025A8265698758 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		double L_0 = ___value0;
		double L_1 = L_0;
		RuntimeObject * L_2 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mAB036D175B9D4B4A9BC294D869AC29B72733CED2 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		float L_0 = ___value0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mA3BA6CCFB745CFF6C3226405FA968FF225E9554E (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m81DA3743DC697E81E803EF85A082C34CBF14A980 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___value0;
		int64_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m760A96B64AF07AAD5517B099330F4666B728741E (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, int8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		int8_t L_0 = ___value0;
		int8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mB17C8AFBCF4BE220D6685D5DE01C384543802BFD (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, int16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		int16_t L_0 = ___value0;
		int16_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mE2B2947322994A531DF207C947BE027D9106214A (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_value_0(L_0);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mE2F96212B8E715D22A7C897EF2155B0A99B6D441 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = L_0;
		RuntimeObject * L_2 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m95FF4029A61BE3E0011FDB3BC1CADBB082E900AF (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		uint32_t L_0 = ___value0;
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m6046E129731BD66985A5B7E727FC475EA2408FD3 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___value0;
		uint64_t L_1 = L_0;
		RuntimeObject * L_2 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m2EC7C7BD233FC6BFE1A2CCBEAC0D8E921C399C7B (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___value0;
		uint16_t L_1 = L_0;
		RuntimeObject * L_2 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m681210A842E1848A350F445F26972DBE2C2F82F0 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0 = ___value0;
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = L_0;
		RuntimeObject * L_2 = Box(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m4CC265BFED501D358E83B606F372A405F98CD53B (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		Guid_t  L_0 = ___value0;
		Guid_t  L_1 = L_0;
		RuntimeObject * L_2 = Box(Guid_t_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_m4ED123648825B152CFBB0DD5EC48882304415533 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = ___value0;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = L_0;
		RuntimeObject * L_2 = Box(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var, &L_1);
		__this->set_value_0(L_2);
		return;
	}
}
// System.Void System.Json.JsonPrimitive::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__ctor_mCC57548EA21E538E862C9C29202359C6B2612344 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method)
{
	{
		JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824(__this, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___value0;
		__this->set_value_0(L_0);
		return;
	}
}
// System.Object System.Json.JsonPrimitive::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonPrimitive_get_Value_mCE82464C11AD924C0E4FB5BF7496CE72A93FD7F0 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_value_0();
		return L_0;
	}
}
// System.Json.JsonType System.Json.JsonPrimitive::get_JsonType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonPrimitive_get_JsonType_mAB8B14813841BCFA087DB3D214274F4540348CA9 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = __this->get_value_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000a:
	{
		RuntimeObject * L_1 = __this->get_value_0();
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Type_GetTypeCode_m25B2ADC2D68FE33486DE032926C6B1EECC8D73CE(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_003f;
			}
			case 3:
			{
				goto IL_0041;
			}
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)18))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0043;
	}

IL_003f:
	{
		return (int32_t)(4);
	}

IL_0041:
	{
		return (int32_t)(0);
	}

IL_0043:
	{
		return (int32_t)(1);
	}
}
// System.String System.Json.JsonPrimitive::GetFormattedString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonPrimitive_GetFormattedString_mDE339F2B26CF635EE9080ADE2305BD3879DF1ED6 (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_tE4EBDDD84B0D9F1C23C68815468A0DE880EEF4C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B22DE498A248A5D137E9D01CFAA089B3CA784EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70EEFAA66DA29FAC9E1A81759A5984878FB67ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA8C44D8001E19877B2F2B86EC61A60048AF615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Json.JsonType System.Json.JsonValue::get_JsonType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00f4;
	}

IL_0013:
	{
		RuntimeObject * L_3 = __this->get_value_0();
		if (((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_4 = __this->get_value_0();
		if (L_4)
		{
			goto IL_0034;
		}
	}

IL_0028:
	{
		RuntimeObject * L_5 = __this->get_value_0();
		return ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
	}

IL_0034:
	{
		RuntimeObject * L_6 = __this->get_value_0();
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject * L_7 = __this->get_value_0();
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}

IL_004d:
	{
		RuntimeObject * L_9 = __this->get_value_0();
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73E951D4B6DE17A150C0946ACB26E715FD0A3883)), L_10, /*hidden argument*/NULL);
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_12 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonPrimitive_GetFormattedString_mDE339F2B26CF635EE9080ADE2305BD3879DF1ED6_RuntimeMethod_var)));
	}

IL_0068:
	{
		RuntimeObject * L_13 = __this->get_value_0();
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_13, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject * L_14 = __this->get_value_0();
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_009f;
		}
	}

IL_0082:
	{
		RuntimeObject * L_15 = __this->get_value_0();
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_16;
		L_16 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_15, IFormattable_tE4EBDDD84B0D9F1C23C68815468A0DE880EEF4C0_il2cpp_TypeInfo_var)));
		String_t* L_17;
		L_17 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0 /* System.String System.IFormattable::ToString(System.String,System.IFormatProvider) */, IFormattable_tE4EBDDD84B0D9F1C23C68815468A0DE880EEF4C0_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, IFormattable_tE4EBDDD84B0D9F1C23C68815468A0DE880EEF4C0_il2cpp_TypeInfo_var)), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_16);
		V_1 = L_17;
		goto IL_00ba;
	}

IL_009f:
	{
		RuntimeObject * L_18 = __this->get_value_0();
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_19;
		L_19 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_18, IFormattable_tE4EBDDD84B0D9F1C23C68815468A0DE880EEF4C0_il2cpp_TypeInfo_var)));
		String_t* L_20;
		L_20 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0 /* System.String System.IFormattable::ToString(System.String,System.IFormatProvider) */, IFormattable_tE4EBDDD84B0D9F1C23C68815468A0DE880EEF4C0_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_18, IFormattable_tE4EBDDD84B0D9F1C23C68815468A0DE880EEF4C0_il2cpp_TypeInfo_var)), _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_19);
		V_1 = L_20;
	}

IL_00ba:
	{
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteral9CA8C44D8001E19877B2F2B86EC61A60048AF615, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00e1;
		}
	}
	{
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, _stringLiteral5B22DE498A248A5D137E9D01CFAA089B3CA784EA, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00e1;
		}
	}
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, _stringLiteral70EEFAA66DA29FAC9E1A81759A5984878FB67ED3, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00f2;
		}
	}

IL_00e1:
	{
		String_t* L_27 = V_1;
		String_t* L_28;
		L_28 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_27, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
		return L_28;
	}

IL_00f2:
	{
		String_t* L_29 = V_1;
		return L_29;
	}

IL_00f4:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_30 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonPrimitive_GetFormattedString_mDE339F2B26CF635EE9080ADE2305BD3879DF1ED6_RuntimeMethod_var)));
	}
}
// System.Void System.Json.JsonPrimitive::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPrimitive__cctor_mCFFF3249860BBBCD98E9246044C9C1048C119C20 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_StaticFields*)il2cpp_codegen_static_fields_for(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var))->set_true_bytes_1(L_1);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_StaticFields*)il2cpp_codegen_static_fields_for(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var))->set_false_bytes_2(L_3);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Json.JsonValue System.Json.JsonValue::Load(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * JsonValue_Load_mD504FDF03510DD059031442815CC687BFD308521 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___textReader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_0 = ___textReader0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63C4D13DDB7686145C358A2264D9888174E40407)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_Load_mD504FDF03510DD059031442815CC687BFD308521_RuntimeMethod_var)));
	}

IL_000e:
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_2 = ___textReader0;
		JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C * L_3 = (JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C *)il2cpp_codegen_object_new(JavaScriptReader_t28D5EDF9AEDB3F00C6F07F18538EC19C19DAE00C_il2cpp_TypeInfo_var);
		JavaScriptReader__ctor_m5C4385F2DE5AE44AA2A45DCEBA48513EA794074D(L_3, L_2, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = JavaScriptReader_Read_mEFE593B9A24B2851343C713D9B70A4B2E847F096(L_3, /*hidden argument*/NULL);
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_5;
		L_5 = JsonValue_ToJsonValue_mAC814311B96D62A7789D6EA834F95C39C8FAB01F(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>> System.Json.JsonValue::ToJsonPairEnumerable(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_ToJsonPairEnumerable_m3421804BD2E5A70F9FE61F7E1467F86394DFA124 (RuntimeObject* ___kvpc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * L_0 = (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 *)il2cpp_codegen_object_new(U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4_il2cpp_TypeInfo_var);
		U3CToJsonPairEnumerableU3Ed__2__ctor_m709FCEDEF6DB16015E4757068B135B29B92629FB(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * L_1 = L_0;
		RuntimeObject* L_2 = ___kvpc0;
		NullCheck(L_1);
		L_1->set_U3CU3E3__kvpc_4(L_2);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Json.JsonValue> System.Json.JsonValue::ToJsonValueEnumerable(System.Collections.Generic.IEnumerable`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_ToJsonValueEnumerable_mE542D41153BDC87383516B53CF60A3C7B0285832 (RuntimeObject* ___arr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * L_0 = (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A *)il2cpp_codegen_object_new(U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A_il2cpp_TypeInfo_var);
		U3CToJsonValueEnumerableU3Ed__3__ctor_m1AE17F014011FE752925B9FFB01340BBA94077D8(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * L_1 = L_0;
		RuntimeObject* L_2 = ___arr0;
		NullCheck(L_1);
		L_1->set_U3CU3E3__arr_4(L_2);
		return L_1;
	}
}
// System.Json.JsonValue System.Json.JsonValue::ToJsonValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * JsonValue_ToJsonValue_mAC814311B96D62A7789D6EA834F95C39C8FAB01F (RuntimeObject * ___ret0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___ret0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 *)NULL;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___ret0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = JsonValue_ToJsonPairEnumerable_m3421804BD2E5A70F9FE61F7E1467F86394DFA124(L_3, /*hidden argument*/NULL);
		JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E * L_5 = (JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E *)il2cpp_codegen_object_new(JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E_il2cpp_TypeInfo_var);
		JsonObject__ctor_m06F551EB42CF7792827BC4A68A2FA713773567AD(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001b:
	{
		RuntimeObject * L_6 = ___ret0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9;
		L_9 = JsonValue_ToJsonValueEnumerable_mE542D41153BDC87383516B53CF60A3C7B0285832(L_8, /*hidden argument*/NULL);
		JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 * L_10 = (JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 *)il2cpp_codegen_object_new(JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6_il2cpp_TypeInfo_var);
		JsonArray__ctor_mFC27BB1D091CA6555B379D5C2B93DE0D6953E754(L_10, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0031:
	{
		RuntimeObject * L_11 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject * L_12 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_13 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m529C67C97EAF61312C638E5F5BB49771E11AA6DE(L_13, ((*(bool*)((bool*)UnBox(L_12, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_13;
	}

IL_0045:
	{
		RuntimeObject * L_14 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject * L_15 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_16 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_mED206140CA82A17DC1954A8B543476F7CD7B2960(L_16, ((*(uint8_t*)((uint8_t*)UnBox(L_15, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_16;
	}

IL_0059:
	{
		RuntimeObject * L_17 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_18 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_19 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_mBB25616D89B47FDA5381456F877E2A49BB83784B(L_19, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_18, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_19;
	}

IL_006d:
	{
		RuntimeObject * L_20 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_0081;
		}
	}
	{
		RuntimeObject * L_21 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_22 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m4DF2D72A84EE887A160990FEEB729471D1206478(L_22, ((*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)UnBox(L_21, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_22;
	}

IL_0081:
	{
		RuntimeObject * L_23 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_23, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0095;
		}
	}
	{
		RuntimeObject * L_24 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_25 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m4786166B0ECB1334B62AB746ED025A8265698758(L_25, ((*(double*)((double*)UnBox(L_24, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_25;
	}

IL_0095:
	{
		RuntimeObject * L_26 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_26, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject * L_27 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_28 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_mAB036D175B9D4B4A9BC294D869AC29B72733CED2(L_28, ((*(float*)((float*)UnBox(L_27, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_28;
	}

IL_00a9:
	{
		RuntimeObject * L_29 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_29, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_00bd;
		}
	}
	{
		RuntimeObject * L_30 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_31 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_mA3BA6CCFB745CFF6C3226405FA968FF225E9554E(L_31, ((*(int32_t*)((int32_t*)UnBox(L_30, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_31;
	}

IL_00bd:
	{
		RuntimeObject * L_32 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_32, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_00d1;
		}
	}
	{
		RuntimeObject * L_33 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_34 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m81DA3743DC697E81E803EF85A082C34CBF14A980(L_34, ((*(int64_t*)((int64_t*)UnBox(L_33, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_34;
	}

IL_00d1:
	{
		RuntimeObject * L_35 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_35, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_00e5;
		}
	}
	{
		RuntimeObject * L_36 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_37 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m760A96B64AF07AAD5517B099330F4666B728741E(L_37, ((*(int8_t*)((int8_t*)UnBox(L_36, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_37;
	}

IL_00e5:
	{
		RuntimeObject * L_38 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_38, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_00f9;
		}
	}
	{
		RuntimeObject * L_39 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_40 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_mB17C8AFBCF4BE220D6685D5DE01C384543802BFD(L_40, ((*(int16_t*)((int16_t*)UnBox(L_39, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_40;
	}

IL_00f9:
	{
		RuntimeObject * L_41 = ___ret0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_41, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_010d;
		}
	}
	{
		RuntimeObject * L_42 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_43 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_mE2B2947322994A531DF207C947BE027D9106214A(L_43, ((String_t*)CastclassSealed((RuntimeObject*)L_42, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_43;
	}

IL_010d:
	{
		RuntimeObject * L_44 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_44, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_0121;
		}
	}
	{
		RuntimeObject * L_45 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_46 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m95FF4029A61BE3E0011FDB3BC1CADBB082E900AF(L_46, ((*(uint32_t*)((uint32_t*)UnBox(L_45, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_46;
	}

IL_0121:
	{
		RuntimeObject * L_47 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_47, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0135;
		}
	}
	{
		RuntimeObject * L_48 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_49 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m6046E129731BD66985A5B7E727FC475EA2408FD3(L_49, ((*(uint64_t*)((uint64_t*)UnBox(L_48, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_49;
	}

IL_0135:
	{
		RuntimeObject * L_50 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_50, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject * L_51 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_52 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m2EC7C7BD233FC6BFE1A2CCBEAC0D8E921C399C7B(L_52, ((*(uint16_t*)((uint16_t*)UnBox(L_51, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_52;
	}

IL_0149:
	{
		RuntimeObject * L_53 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_53, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))
		{
			goto IL_015d;
		}
	}
	{
		RuntimeObject * L_54 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_55 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_mE2F96212B8E715D22A7C897EF2155B0A99B6D441(L_55, ((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_54, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_55;
	}

IL_015d:
	{
		RuntimeObject * L_56 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_56, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var)))
		{
			goto IL_0171;
		}
	}
	{
		RuntimeObject * L_57 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_58 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m681210A842E1848A350F445F26972DBE2C2F82F0(L_58, ((*(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)UnBox(L_57, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_58;
	}

IL_0171:
	{
		RuntimeObject * L_59 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_59, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0185;
		}
	}
	{
		RuntimeObject * L_60 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_61 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m4CC265BFED501D358E83B606F372A405F98CD53B(L_61, ((*(Guid_t *)((Guid_t *)UnBox(L_60, Guid_t_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_61;
	}

IL_0185:
	{
		RuntimeObject * L_62 = ___ret0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_62, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)))
		{
			goto IL_0199;
		}
	}
	{
		RuntimeObject * L_63 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_64 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_m4ED123648825B152CFBB0DD5EC48882304415533(L_64, ((*(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)UnBox(L_63, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_64;
	}

IL_0199:
	{
		RuntimeObject * L_65 = ___ret0;
		if (!((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)IsInstClass((RuntimeObject*)L_65, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var)))
		{
			goto IL_01ad;
		}
	}
	{
		RuntimeObject * L_66 = ___ret0;
		JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * L_67 = (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)il2cpp_codegen_object_new(JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		JsonPrimitive__ctor_mCC57548EA21E538E862C9C29202359C6B2612344(L_67, ((Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)CastclassClass((RuntimeObject*)L_66, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_67;
	}

IL_01ad:
	{
		RuntimeObject * L_68 = ___ret0;
		NullCheck(L_68);
		Type_t * L_69;
		L_69 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_68, /*hidden argument*/NULL);
		String_t* L_70;
		L_70 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD160E6B58BBD5D028631FCE0A69607CD1A9CC6C1)), L_69, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_71 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_71, L_70, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_ToJsonValue_mAC814311B96D62A7789D6EA834F95C39C8FAB01F_RuntimeMethod_var)));
	}
}
// System.Json.JsonValue System.Json.JsonValue::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * JsonValue_Parse_m95373FD7D81EB9227F034A0143FAFEEA80FB957E (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___jsonString0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA86420503B6497A19BC4E1C1C2B2980428C8D8FF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_Parse_m95373FD7D81EB9227F034A0143FAFEEA80FB957E_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_3, L_2, /*hidden argument*/NULL);
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_4;
		L_4 = JsonValue_Load_mD504FDF03510DD059031442815CC687BFD308521(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Json.JsonValue::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonValue_get_Count_m8D2DD5FAB48FDC649F4D9B3091F6961CD5D2C499 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_get_Count_m8D2DD5FAB48FDC649F4D9B3091F6961CD5D2C499_RuntimeMethod_var)));
	}
}
// System.Json.JsonValue System.Json.JsonValue::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * JsonValue_get_Item_m3BE1653AB13D00B0134383983AF7A9C5B5606A41 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_get_Item_m3BE1653AB13D00B0134383983AF7A9C5B5606A41_RuntimeMethod_var)));
	}
}
// System.Void System.Json.JsonValue::set_Item(System.Int32,System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonValue_set_Item_mCFE0DEC1DDB763014E97F9997E3AC6ADAFDC0D18 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, int32_t ___index0, JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value1, const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_set_Item_mCFE0DEC1DDB763014E97F9997E3AC6ADAFDC0D18_RuntimeMethod_var)));
	}
}
// System.Json.JsonValue System.Json.JsonValue::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * JsonValue_get_Item_mA780BC7A8FB8578482B2BACD5A81472E085E2F10 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_get_Item_mA780BC7A8FB8578482B2BACD5A81472E085E2F10_RuntimeMethod_var)));
	}
}
// System.Boolean System.Json.JsonValue::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_ContainsKey_mB623A9E4C50E8917D90BF7FD8B0655FC39FB438F (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_ContainsKey_mB623A9E4C50E8917D90BF7FD8B0655FC39FB438F_RuntimeMethod_var)));
	}
}
// System.Void System.Json.JsonValue::Save(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonValue_Save_mE1F5754449C5F9F4B505E2F3C83A7AED30E76988 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___textWriter0, const RuntimeMethod* method)
{
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ___textWriter0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE85CB44294D0585D0CDB553EE58583455F665F3B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_Save_mE1F5754449C5F9F4B505E2F3C83A7AED30E76988_RuntimeMethod_var)));
	}

IL_000e:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = ___textWriter0;
		JsonValue_SaveInternal_m22840D6797985A8FD5B9E9C64D1F33DBC4AE41C6(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Json.JsonValue::SaveInternal(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonValue_SaveInternal_m22840D6797985A8FD5B9E9C64D1F33DBC4AE41C6 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___w0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t83C207AC0995FD1487462F01F5100375CB8E41C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7ECEB002B36F0E6AED8734B75A44234A604178DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC45757D92880651E2047270AD7A69ED0EB038719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD09B109BCA3E50FF1F6A6145CFFE89B847A8A235);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * G_B32_0 = NULL;
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * G_B31_0 = NULL;
	String_t* G_B33_0 = NULL;
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * G_B33_1 = NULL;
	{
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Json.JsonType System.Json.JsonValue::get_JsonType() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0141;
			}
			case 1:
			{
				goto IL_0169;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_00bb;
			}
			case 4:
			{
				goto IL_0126;
			}
		}
	}
	{
		goto IL_0169;
	}

IL_0026:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = ___w0;
		NullCheck(L_2);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_2, ((int32_t)123));
		V_1 = (bool)0;
		NullCheck(((JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E *)CastclassClass((RuntimeObject*)__this, JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E_il2cpp_TypeInfo_var)));
		RuntimeObject* L_3;
		L_3 = JsonObject_GetEnumerator_m37F174994F0A3312546478311F1326C667409842(((JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E *)CastclassClass((RuntimeObject*)__this, JsonObject_t58A113CA64FA9AB3E0D1019DBBB4F16A2532284E_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = L_3;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009e;
		}

IL_003e:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  L_5;
			L_5 = InterfaceFuncInvoker0< KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>>::get_Current() */, IEnumerator_1_tC45757D92880651E2047270AD7A69ED0EB038719_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0053;
			}
		}

IL_0048:
		{
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_7 = ___w0;
			NullCheck(L_7);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		}

IL_0053:
		{
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_8 = ___w0;
			NullCheck(L_8);
			VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)34));
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_9 = ___w0;
			String_t* L_10;
			L_10 = KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_inline((KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_mB9254C16A297D9F13B5229C7E1136B36D48F99E4_RuntimeMethod_var);
			String_t* L_11;
			L_11 = JsonValue_EscapeString_mCA4DA7EE514CA3BC1D51508A1A25892A71D26907(__this, L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_11);
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_12 = ___w0;
			NullCheck(L_12);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteralD09B109BCA3E50FF1F6A6145CFFE89B847A8A235);
			JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_13;
			L_13 = KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_inline((KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_008f;
			}
		}

IL_0082:
		{
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_14 = ___w0;
			NullCheck(L_14);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_14, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
			goto IL_009c;
		}

IL_008f:
		{
			JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_15;
			L_15 = KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_inline((KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3094516FC4F485E44E8A9454F3839C9BFF14FE4A_RuntimeMethod_var);
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_16 = ___w0;
			NullCheck(L_15);
			JsonValue_SaveInternal_m22840D6797985A8FD5B9E9C64D1F33DBC4AE41C6(L_15, L_16, /*hidden argument*/NULL);
		}

IL_009c:
		{
			V_1 = (bool)1;
		}

IL_009e:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_003e;
			}
		}

IL_00a6:
		{
			IL2CPP_LEAVE(0xB2, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_19 = V_2;
			if (!L_19)
			{
				goto IL_00b1;
			}
		}

IL_00ab:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_20);
		}

IL_00b1:
		{
			IL2CPP_END_FINALLY(168)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
	}

IL_00b2:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_21 = ___w0;
		NullCheck(L_21);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_21, ((int32_t)125));
		return;
	}

IL_00bb:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_22 = ___w0;
		NullCheck(L_22);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_22, ((int32_t)91));
		V_1 = (bool)0;
		NullCheck(((JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 *)CastclassClass((RuntimeObject*)__this, JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6_il2cpp_TypeInfo_var)));
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Json.JsonValue>::GetEnumerator() */, IEnumerable_1_t83C207AC0995FD1487462F01F5100375CB8E41C7_il2cpp_TypeInfo_var, ((JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6 *)CastclassClass((RuntimeObject*)__this, JsonArray_t9D1F09F4CEFEB673E75A6A1CE8C0CFFE625F4AF6_il2cpp_TypeInfo_var)));
		V_4 = L_23;
	}

IL_00d2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0106;
		}

IL_00d4:
		{
			RuntimeObject* L_24 = V_4;
			NullCheck(L_24);
			JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_25;
			L_25 = InterfaceFuncInvoker0< JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Json.JsonValue>::get_Current() */, IEnumerator_1_t7ECEB002B36F0E6AED8734B75A44234A604178DB_il2cpp_TypeInfo_var, L_24);
			V_5 = L_25;
			bool L_26 = V_1;
			if (!L_26)
			{
				goto IL_00eb;
			}
		}

IL_00e0:
		{
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_27 = ___w0;
			NullCheck(L_27);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_27, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		}

IL_00eb:
		{
			JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_28 = V_5;
			if (!L_28)
			{
				goto IL_00f9;
			}
		}

IL_00ef:
		{
			JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_29 = V_5;
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_30 = ___w0;
			NullCheck(L_29);
			JsonValue_SaveInternal_m22840D6797985A8FD5B9E9C64D1F33DBC4AE41C6(L_29, L_30, /*hidden argument*/NULL);
			goto IL_0104;
		}

IL_00f9:
		{
			TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_31 = ___w0;
			NullCheck(L_31);
			VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_31, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		}

IL_0104:
		{
			V_1 = (bool)1;
		}

IL_0106:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck(L_32);
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_00d4;
			}
		}

IL_010f:
		{
			IL2CPP_LEAVE(0x11D, FINALLY_0111);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0111;
	}

FINALLY_0111:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_4;
			if (!L_34)
			{
				goto IL_011c;
			}
		}

IL_0115:
		{
			RuntimeObject* L_35 = V_4;
			NullCheck(L_35);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_35);
		}

IL_011c:
		{
			IL2CPP_END_FINALLY(273)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(273)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11D, IL_011d)
	}

IL_011d:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_36 = ___w0;
		NullCheck(L_36);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_36, ((int32_t)93));
		return;
	}

IL_0126:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_37 = ___w0;
		bool L_38;
		L_38 = JsonValue_op_Implicit_mC541F5C13D20EBCC728C4CEB3C6CAB0CCE65D35D(__this, /*hidden argument*/NULL);
		G_B31_0 = L_37;
		if (L_38)
		{
			G_B32_0 = L_37;
			goto IL_0136;
		}
	}
	{
		G_B33_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B33_1 = G_B31_0;
		goto IL_013b;
	}

IL_0136:
	{
		G_B33_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B33_1 = G_B32_0;
	}

IL_013b:
	{
		NullCheck(G_B33_1);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B33_1, G_B33_0);
		return;
	}

IL_0141:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_39 = ___w0;
		NullCheck(L_39);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_39, ((int32_t)34));
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_40 = ___w0;
		NullCheck(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)__this, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)));
		String_t* L_41;
		L_41 = JsonPrimitive_GetFormattedString_mDE339F2B26CF635EE9080ADE2305BD3879DF1ED6(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)__this, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = JsonValue_EscapeString_mCA4DA7EE514CA3BC1D51508A1A25892A71D26907(__this, L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_40, L_42);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_43 = ___w0;
		NullCheck(L_43);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_43, ((int32_t)34));
		return;
	}

IL_0169:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_44 = ___w0;
		NullCheck(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)__this, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)));
		String_t* L_45;
		L_45 = JsonPrimitive_GetFormattedString_mDE339F2B26CF635EE9080ADE2305BD3879DF1ED6(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)__this, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_44);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_44, L_45);
		return;
	}
}
// System.String System.Json.JsonValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValue_ToString_mED5492C4394BD7ACA452E63CE472AC93C5EE5CE4 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * V_0 = NULL;
	{
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_0 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mBA5BDF99FA78C7B9402872EBB9324A9311040264(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_1 = V_0;
		VirtActionInvoker1< TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * >::Invoke(11 /* System.Void System.Json.JsonValue::Save(System.IO.TextWriter) */, __this, L_1);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Collections.IEnumerator System.Json.JsonValue::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_System_Collections_IEnumerable_GetEnumerator_m3D44CD0941D92615A061A747C174BD186A0A3A81 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, const RuntimeMethod* method)
{
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_0 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m26BD2B620B5FBFA4376C16011C60E18A2EDC8E96(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_System_Collections_IEnumerable_GetEnumerator_m3D44CD0941D92615A061A747C174BD186A0A3A81_RuntimeMethod_var)));
	}
}
// System.Boolean System.Json.JsonValue::NeedEscape(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_NeedEscape_mE4DBFD2847C9B1DDFD675FAC9C68E17264C83CC9 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, String_t* ___src0, int32_t ___i1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	{
		String_t* L_0 = ___src0;
		int32_t L_1 = ___i1;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)32))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)55296))))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)56319))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_8 = ___i1;
		String_t* L_9 = ___src0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_11 = ___src0;
		int32_t L_12 = ___i1;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)56320))))
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_14 = ___src0;
		int32_t L_15 = ___i1;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_16) > ((int32_t)((int32_t)57343))))
		{
			goto IL_00b7;
		}
	}

IL_005b:
	{
		Il2CppChar L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)56320))))
		{
			goto IL_008e;
		}
	}
	{
		Il2CppChar L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)57343))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_19 = ___i1;
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_20 = ___src0;
		int32_t L_21 = ___i1;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)55296))))
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_23 = ___src0;
		int32_t L_24 = ___i1;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)56319))))
		{
			goto IL_00b7;
		}
	}

IL_008e:
	{
		Il2CppChar L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)8232))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)8233))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_28 = V_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_29 = ___i1;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		String_t* L_30 = ___src0;
		int32_t L_31 = ___i1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_30, ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_32) == ((int32_t)((int32_t)60)))? 1 : 0);
	}

IL_00b5:
	{
		return (bool)0;
	}

IL_00b7:
	{
		return (bool)1;
	}
}
// System.String System.Json.JsonValue::EscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValue_EscapeString_mCA4DA7EE514CA3BC1D51508A1A25892A71D26907 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, String_t* ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t * V_1 = NULL;
	{
		String_t* L_0 = ___src0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0009:
	{
		String_t* L_1 = ___src0;
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = JsonValue_NeedEscape_mE4DBFD2847C9B1DDFD675FAC9C68E17264C83CC9(__this, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t * L_4 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		StringBuilder_t * L_6 = V_1;
		String_t* L_7 = ___src0;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_6, L_7, 0, L_8, /*hidden argument*/NULL);
	}

IL_0027:
	{
		StringBuilder_t * L_10 = V_1;
		String_t* L_11 = ___src0;
		int32_t L_12 = V_0;
		String_t* L_13;
		L_13 = JsonValue_DoEscapeString_m7215D0FD8EA03CE098BB2907E408A1EF59159227(__this, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0031:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_15 = V_0;
		String_t* L_16 = ___src0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_18 = ___src0;
		return L_18;
	}
}
// System.String System.Json.JsonValue::DoEscapeString(System.Text.StringBuilder,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValue_DoEscapeString_m7215D0FD8EA03CE098BB2907E408A1EF59159227 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, StringBuilder_t * ___sb0, String_t* ___src1, int32_t ___cur2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1D111A9B5ED69CC9A4F2599DB8BFA2D677CCD3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7A46075109789D1792549A284B05CF42BE37425);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___cur2;
		V_0 = L_0;
		int32_t L_1 = ___cur2;
		V_1 = L_1;
		goto IL_0104;
	}

IL_0009:
	{
		String_t* L_2 = ___src1;
		int32_t L_3 = V_1;
		bool L_4;
		L_4 = JsonValue_NeedEscape_mE4DBFD2847C9B1DDFD675FAC9C68E17264C83CC9(__this, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0100;
		}
	}
	{
		StringBuilder_t * L_5 = ___sb0;
		String_t* L_6 = ___src1;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_5);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_5, L_6, L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/NULL);
		String_t* L_11 = ___src1;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Il2CppChar L_14 = V_2;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)34)))))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar L_15 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)8)))
		{
			case 0:
			{
				goto IL_0062;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_00d5;
			}
			case 4:
			{
				goto IL_0073;
			}
			case 5:
			{
				goto IL_008f;
			}
		}
	}
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)34))))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00d5;
	}

IL_0056:
	{
		Il2CppChar L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)47))))
		{
			goto IL_00c7;
		}
	}
	{
		Il2CppChar L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b9;
		}
	}
	{
		goto IL_00d5;
	}

IL_0062:
	{
		StringBuilder_t * L_19 = ___sb0;
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_0073:
	{
		StringBuilder_t * L_21 = ___sb0;
		NullCheck(L_21);
		StringBuilder_t * L_22;
		L_22 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_0081:
	{
		StringBuilder_t * L_23 = ___sb0;
		NullCheck(L_23);
		StringBuilder_t * L_24;
		L_24 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_008f:
	{
		StringBuilder_t * L_25 = ___sb0;
		NullCheck(L_25);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_25, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_009d:
	{
		StringBuilder_t * L_27 = ___sb0;
		NullCheck(L_27);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_27, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00ab:
	{
		StringBuilder_t * L_29 = ___sb0;
		NullCheck(L_29);
		StringBuilder_t * L_30;
		L_30 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_29, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00b9:
	{
		StringBuilder_t * L_31 = ___sb0;
		NullCheck(L_31);
		StringBuilder_t * L_32;
		L_32 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_31, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00c7:
	{
		StringBuilder_t * L_33 = ___sb0;
		NullCheck(L_33);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_33, _stringLiteralE7A46075109789D1792549A284B05CF42BE37425, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00d5:
	{
		StringBuilder_t * L_35 = ___sb0;
		NullCheck(L_35);
		StringBuilder_t * L_36;
		L_36 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_35, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		StringBuilder_t * L_37 = ___sb0;
		String_t* L_38 = ___src1;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		Il2CppChar L_40;
		L_40 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_38, L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		String_t* L_41;
		L_41 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_3), _stringLiteralE1D111A9B5ED69CC9A4F2599DB8BFA2D677CCD3B, /*hidden argument*/NULL);
		NullCheck(L_37);
		StringBuilder_t * L_42;
		L_42 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_37, L_41, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		int32_t L_43 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_0100:
	{
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0104:
	{
		int32_t L_45 = V_1;
		String_t* L_46 = ___src1;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_46, /*hidden argument*/NULL);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_0009;
		}
	}
	{
		StringBuilder_t * L_48 = ___sb0;
		String_t* L_49 = ___src1;
		int32_t L_50 = V_0;
		String_t* L_51 = ___src1;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_51, /*hidden argument*/NULL);
		int32_t L_53 = V_0;
		NullCheck(L_48);
		StringBuilder_t * L_54;
		L_54 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_48, L_49, L_50, ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_53)), /*hidden argument*/NULL);
		StringBuilder_t * L_55 = ___sb0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_55);
		return L_56;
	}
}
// System.Boolean System.Json.JsonValue::op_Implicit(System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_op_Implicit_mC541F5C13D20EBCC728C4CEB3C6CAB0CCE65D35D (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_op_Implicit_mC541F5C13D20EBCC728C4CEB3C6CAB0CCE65D35D_RuntimeMethod_var)));
	}

IL_000e:
	{
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_2 = ___value0;
		NullCheck(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)L_2, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3;
		L_3 = JsonPrimitive_get_Value_mCE82464C11AD924C0E4FB5BF7496CE72A93FD7F0_inline(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)L_2, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_4;
		L_4 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Convert_ToBoolean_mCE7DD656DC67A41427BEED725AD32C5022F2EE8C(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.Json.JsonValue::op_Implicit(System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonValue_op_Implicit_mED0E4A465EF96DCD0217436576267A0B231F8022 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValue_op_Implicit_mED0E4A465EF96DCD0217436576267A0B231F8022_RuntimeMethod_var)));
	}

IL_000e:
	{
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_2 = ___value0;
		NullCheck(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)L_2, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)));
		RuntimeObject * L_3;
		L_3 = JsonPrimitive_get_Value_mCE82464C11AD924C0E4FB5BF7496CE72A93FD7F0_inline(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)L_2, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_4;
		L_4 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Convert_ToInt32_mCDD3456A0F07EF72C62EF668CF9141937D0EB041(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Json.JsonValue::op_Implicit(System.Json.JsonValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonValue_op_Implicit_mEDC559A619BEAF590BB5E586302A2D9AAC53881B (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_1 = ___value0;
		NullCheck(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)L_1, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)));
		RuntimeObject * L_2;
		L_2 = JsonPrimitive_get_Value_mCE82464C11AD924C0E4FB5BF7496CE72A93FD7F0_inline(((JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 *)CastclassClass((RuntimeObject*)L_1, JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Json.JsonValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonValue__ctor_m992877E711F8936896395DB29020D3109CD04824 (JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * __this, const RuntimeMethod* method)
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
// System.Void System.Json.JsonValue/<ToJsonPairEnumerable>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonPairEnumerableU3Ed__2__ctor_m709FCEDEF6DB16015E4757068B135B29B92629FB (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Json.JsonValue/<ToJsonPairEnumerable>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonPairEnumerableU3Ed__2_System_IDisposable_Dispose_mE82FF6451459798FB88684B538506EDD77834F38 (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CToJsonPairEnumerableU3Ed__2_U3CU3Em__Finally1_m72AB756613D1E153D17BED13EFC41F9DCA240F80(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Json.JsonValue/<ToJsonPairEnumerable>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CToJsonPairEnumerableU3Ed__2_MoveNext_mFDAA388EE1D31CAC796CA3C03CCA5D0773CC29F7 (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mAD67AD8985DFADB07A425E9BDC0EA74B94BC9C0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_006c;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_0099;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_3 = __this->get_kvpc_3();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_5(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0074;
		}

IL_0037:
		{
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_5);
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_6;
			L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			String_t* L_7;
			L_7 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			RuntimeObject * L_8;
			L_8 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_9;
			L_9 = JsonValue_ToJsonValue_mAC814311B96D62A7789D6EA834F95C39C8FAB01F(L_8, /*hidden argument*/NULL);
			KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  L_10;
			memset((&L_10), 0, sizeof(L_10));
			KeyValuePair_2__ctor_mAD67AD8985DFADB07A425E9BDC0EA74B94BC9C0E((&L_10), L_7, L_9, /*hidden argument*/KeyValuePair_2__ctor_mAD67AD8985DFADB07A425E9BDC0EA74B94BC9C0E_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0099;
		}

IL_006c:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0074:
		{
			RuntimeObject* L_11 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_11);
			bool L_12;
			L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0037;
			}
		}

IL_0081:
		{
			U3CToJsonPairEnumerableU3Ed__2_U3CU3Em__Finally1_m72AB756613D1E153D17BED13EFC41F9DCA240F80(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_5((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_0099;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0092;
	}

FAULT_0092:
	{ // begin fault (depth: 1)
		U3CToJsonPairEnumerableU3Ed__2_System_IDisposable_Dispose_mE82FF6451459798FB88684B538506EDD77834F38(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(146)
	} // end fault
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0099:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void System.Json.JsonValue/<ToJsonPairEnumerable>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonPairEnumerableU3Ed__2_U3CU3Em__Finally1_m72AB756613D1E153D17BED13EFC41F9DCA240F80 (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue> System.Json.JsonValue/<ToJsonPairEnumerable>d__2::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Json.JsonValue>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  U3CToJsonPairEnumerableU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_Json_JsonValueU3EU3E_get_Current_mE77F40699B1AF2DC377EEF2F56E14D4DE0984672 (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Json.JsonValue/<ToJsonPairEnumerable>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonPairEnumerableU3Ed__2_System_Collections_IEnumerator_Reset_m6FD97D0113E8A5D1173F524755A1549029CC0167 (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CToJsonPairEnumerableU3Ed__2_System_Collections_IEnumerator_Reset_m6FD97D0113E8A5D1173F524755A1549029CC0167_RuntimeMethod_var)));
	}
}
// System.Object System.Json.JsonValue/<ToJsonPairEnumerable>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CToJsonPairEnumerableU3Ed__2_System_Collections_IEnumerator_get_Current_m1FC17A63D52844F06DE96CAF09C2A69F8B7EB307 (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_t9C011AC8FA35B02A118B8376FAEB9808A088DAF7_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Json.JsonValue>> System.Json.JsonValue/<ToJsonPairEnumerable>d__2::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Json.JsonValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CToJsonPairEnumerableU3Ed__2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_Json_JsonValueU3EU3E_GetEnumerator_mF178EBF29F4A8821CBE713FCE3D7C73CB9DE06DC (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * L_3 = (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 *)il2cpp_codegen_object_new(U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4_il2cpp_TypeInfo_var);
		U3CToJsonPairEnumerableU3Ed__2__ctor_m709FCEDEF6DB16015E4757068B135B29B92629FB(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * L_4 = V_0;
		RuntimeObject* L_5 = __this->get_U3CU3E3__kvpc_4();
		NullCheck(L_4);
		L_4->set_kvpc_3(L_5);
		U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator System.Json.JsonValue/<ToJsonPairEnumerable>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CToJsonPairEnumerableU3Ed__2_System_Collections_IEnumerable_GetEnumerator_mE1B387ACEFC6822FE816405A920C201EDCEE0241 (U3CToJsonPairEnumerableU3Ed__2_t91B4396EE457D099D50E9EF1BDAEFFAE7B1DE9D4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CToJsonPairEnumerableU3Ed__2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_Json_JsonValueU3EU3E_GetEnumerator_mF178EBF29F4A8821CBE713FCE3D7C73CB9DE06DC(__this, /*hidden argument*/NULL);
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
// System.Void System.Json.JsonValue/<ToJsonValueEnumerable>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonValueEnumerableU3Ed__3__ctor_m1AE17F014011FE752925B9FFB01340BBA94077D8 (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void System.Json.JsonValue/<ToJsonValueEnumerable>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonValueEnumerableU3Ed__3_System_IDisposable_Dispose_m333C928171CB7E8FF27C4CB0BA2031FDE4AC863D (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CToJsonValueEnumerableU3Ed__3_U3CU3Em__Finally1_mC218655D4D04C0E3CC6F3FF7C9E7E6CAFDB207C0(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Json.JsonValue/<ToJsonValueEnumerable>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CToJsonValueEnumerableU3Ed__3_MoveNext_mF8FA3B487CB1D2F043060496D739D7B4237C2B72 (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0057;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_0084;
		}

IL_0012:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_3 = __this->get_arr_3();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_5(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_005f;
		}

IL_0034:
		{
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			RuntimeObject * L_7 = V_2;
			JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_8;
			L_8 = JsonValue_ToJsonValue_mAC814311B96D62A7789D6EA834F95C39C8FAB01F(L_7, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_8);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0084;
		}

IL_0057:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_005f:
		{
			RuntimeObject* L_9 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_9);
			bool L_10;
			L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0034;
			}
		}

IL_006c:
		{
			U3CToJsonValueEnumerableU3Ed__3_U3CU3Em__Finally1_mC218655D4D04C0E3CC6F3FF7C9E7E6CAFDB207C0(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_5((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_0084;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_007d;
	}

FAULT_007d:
	{ // begin fault (depth: 1)
		U3CToJsonValueEnumerableU3Ed__3_System_IDisposable_Dispose_m333C928171CB7E8FF27C4CB0BA2031FDE4AC863D(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(125)
	} // end fault
	IL2CPP_CLEANUP(125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0084:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Json.JsonValue/<ToJsonValueEnumerable>d__3::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonValueEnumerableU3Ed__3_U3CU3Em__Finally1_mC218655D4D04C0E3CC6F3FF7C9E7E6CAFDB207C0 (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Json.JsonValue System.Json.JsonValue/<ToJsonValueEnumerable>d__3::System.Collections.Generic.IEnumerator<System.Json.JsonValue>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * U3CToJsonValueEnumerableU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_Json_JsonValueU3E_get_Current_mC5029DC7341C124586646B614396EF6EEE3704E2 (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method)
{
	{
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void System.Json.JsonValue/<ToJsonValueEnumerable>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToJsonValueEnumerableU3Ed__3_System_Collections_IEnumerator_Reset_m8E77015443252EB6A7EF44A61D17772A0C2EC33D (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CToJsonValueEnumerableU3Ed__3_System_Collections_IEnumerator_Reset_m8E77015443252EB6A7EF44A61D17772A0C2EC33D_RuntimeMethod_var)));
	}
}
// System.Object System.Json.JsonValue/<ToJsonValueEnumerable>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CToJsonValueEnumerableU3Ed__3_System_Collections_IEnumerator_get_Current_m2BDB307B9F3B52978F25199A15BD65872017EAFA (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method)
{
	{
		JsonValue_tE7C9AF0CC443264F0F971FE9BAA61116899A0C90 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Json.JsonValue> System.Json.JsonValue/<ToJsonValueEnumerable>d__3::System.Collections.Generic.IEnumerable<System.Json.JsonValue>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CToJsonValueEnumerableU3Ed__3_System_Collections_Generic_IEnumerableU3CSystem_Json_JsonValueU3E_GetEnumerator_m4358AE5148554C5F6401D9DC0E38ADE8428FFEDA (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * L_3 = (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A *)il2cpp_codegen_object_new(U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A_il2cpp_TypeInfo_var);
		U3CToJsonValueEnumerableU3Ed__3__ctor_m1AE17F014011FE752925B9FFB01340BBA94077D8(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * L_4 = V_0;
		RuntimeObject* L_5 = __this->get_U3CU3E3__arr_4();
		NullCheck(L_4);
		L_4->set_arr_3(L_5);
		U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator System.Json.JsonValue/<ToJsonValueEnumerable>d__3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CToJsonValueEnumerableU3Ed__3_System_Collections_IEnumerable_GetEnumerator_mA2498290607BF7BA2860295ED988C184EF075DBD (U3CToJsonValueEnumerableU3Ed__3_t1800FB3F806122F3C1C8B2DCDC82B0270132A03A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CToJsonValueEnumerableU3Ed__3_System_Collections_Generic_IEnumerableU3CSystem_Json_JsonValueU3E_GetEnumerator_m4358AE5148554C5F6401D9DC0E38ADE8428FFEDA(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinal_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * JsonPrimitive_get_Value_mCE82464C11AD924C0E4FB5BF7496CE72A93FD7F0_inline (JsonPrimitive_t195EBA85C024767FB561D42689F56702DBCEFB80 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
