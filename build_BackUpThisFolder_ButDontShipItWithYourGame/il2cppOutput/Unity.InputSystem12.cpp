#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding>
struct IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA;
// UnityEngine.InputSystem.InputBindingComposite`1<System.Single>
struct InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E;
// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>
struct InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588;
// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>
struct InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.Composites.ButtonWithOneModifier
struct ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222;
// UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers
struct ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputBindingComposite
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.InputSystem.Composites.OneModifierComposite
struct OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B;
// System.String
struct String_t;
// UnityEngine.InputSystem.Composites.TwoModifiersComposite
struct TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Composites.Vector2Composite
struct Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908;
// UnityEngine.InputSystem.Composites.Vector3Composite
struct Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_InputSystem[];
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral54458377977B39746D8739B34B60A49EA898EDAE;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithOneModifier_EvaluateMagnitude_m5620878936698B7CB4AD5BBD698EC2FF062A9505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithOneModifier_FinishSetup_m92274A88D5AEAA4436E4009B0B32533331B0C968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithOneModifier_ModifierIsPressed_mEAF7D55D5DFF9A23D2F467E889EDFF82355E8E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithOneModifier_ReadValue_m439AB954F407DC5590C539DD486A04624AA07791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithOneModifier__ctor_m7B7F85E23B5C441609E4155452F6D4AC05E2B639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithTwoModifiers_EvaluateMagnitude_mFA7A056972DA25A3D63AB79E19E366F3F68DB900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithTwoModifiers_FinishSetup_m72B6515E3E75435A6F0E533DFEEEDCF987315568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithTwoModifiers_ModifiersArePressed_m0713025DE1116397F560856674D56D3D228C781E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithTwoModifiers_ReadValue_m37221E24FA2D2429BABF071D71DA89E255B8CBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonWithTwoModifiers__ctor_m200626B0BEBB78BC03D64F561D3727DE1D2D5325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneModifierComposite_DetermineValueTypeAndSize_m872B0A8E5DEA6864048B0D08DE31FFBA40C442AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneModifierComposite_EvaluateMagnitude_mA42D5A4588ED01010B8642529A70E665BB9C6923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneModifierComposite_FinishSetup_m91EE0D3C7261D70C6C72173F1F18650A9C007620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneModifierComposite_ModifierIsPressed_m25EEA39878124B169F67C7A2752EBD7890F44C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneModifierComposite_ReadValueAsObject_mE7F10A702C1FC6CF14A127CB653733BE056C445B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneModifierComposite_ReadValue_mFFCA6F249ACC7FB1137FC8DC42FEF8893AF5764B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneModifierComposite__ctor_mB03D8DE49D44A7C6FF0AB59B5CF4F35E2F6C7A26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneModifierComposite_get_valueSizeInBytes_m910E77B6AB3AAF8E47F0DA92CD16C47784E66A1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneModifierComposite_get_valueType_m5E2ABFE018FE89563F657E18C3DCB5EEA8BF2673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoModifiersComposite_EvaluateMagnitude_mBAC0B38247A658D8487B23A3BBD54CC8DFD37314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoModifiersComposite_FinishSetup_mE13073D787D428DF4B1DD76A525F543D266CBF38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoModifiersComposite_ReadValueAsObject_m167D7477D6B669FF931EF962102B39F44305BFAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoModifiersComposite_ReadValue_mD57B7904321CE14F2796449A3A7E832FE27459B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoModifiersComposite__ctor_m46086F35D8EE4E52A60DB087F8C7D5E5AA3CB880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoModifiersComposite_get_valueSizeInBytes_m534C8107DAC6BC8F0DCCE80128D5BDB13F4F662A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwoModifiersComposite_get_valueType_mD7C59304C3F9F7C9A49C29F705E500781CAE6125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2Composite_EvaluateMagnitude_m019D431241F2FA113EB0CF79D0092315AA5942CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2Composite_ReadValue_m32E400A5EEBEDD51B029B08B7E35777A91A85439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2Composite__ctor_m1625F6C3829296D1C12B55EF496E38EDC8D05006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3Composite_ReadValue_m6D1BA73F518C68CDF4AEDAF1A48BA2F7ABF59AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3Composite__ctor_m7411C64277DE74720952DC246F08B6970AB6F5DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Mode_tC3E9CF3E48612D8E2FD67CDBA91095417B9124B6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputBindingCompositeContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext::m_BindingIndex
	int32_t ___m_BindingIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100
struct __StaticArrayInitTypeSizeU3D100_t31353965748512750AD1146F898DF113F5863D58 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D100_t31353965748512750AD1146F898DF113F5863D58__padding[100];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460
struct __StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394__padding[460];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=928
struct __StaticArrayInitTypeSizeU3D928_t45F2AF81CEF7FEE66F2B125F3B3A10AF7C990C44 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D928_t45F2AF81CEF7FEE66F2B125F3B3A10AF7C990C44__padding[928];
	};
};

// UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 
{
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<part>k__BackingField
	int32_t ___U3CpartU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<control>k__BackingField
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_pinvoke
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_com
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF62B85DD2C59D87BA6C8DA02965E1F3203A64E53  : public RuntimeObject
{
};

// UnityEngine.InputSystem.InputBindingComposite
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0  : public RuntimeObject
{
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.InputSystem.InputBindingComposite`1<System.Single>
struct InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>
struct InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>
struct InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.InputSystem.Composites.OneModifierComposite
struct OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
	// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::modifier
	int32_t ___modifier_1;
	// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::binding
	int32_t ___binding_2;
	// System.Boolean UnityEngine.InputSystem.Composites.OneModifierComposite::overrideModifiersNeedToBePressedFirst
	bool ___overrideModifiersNeedToBePressedFirst_3;
	// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::m_ValueSizeInBytes
	int32_t ___m_ValueSizeInBytes_4;
	// System.Type UnityEngine.InputSystem.Composites.OneModifierComposite::m_ValueType
	Type_t* ___m_ValueType_5;
	// System.Boolean UnityEngine.InputSystem.Composites.OneModifierComposite::m_BindingIsButton
	bool ___m_BindingIsButton_6;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.InputSystem.Composites.TwoModifiersComposite
struct TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::modifier1
	int32_t ___modifier1_1;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::modifier2
	int32_t ___modifier2_2;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::binding
	int32_t ___binding_3;
	// System.Boolean UnityEngine.InputSystem.Composites.TwoModifiersComposite::overrideModifiersNeedToBePressedFirst
	bool ___overrideModifiersNeedToBePressedFirst_4;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_ValueSizeInBytes
	int32_t ___m_ValueSizeInBytes_5;
	// System.Type UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_ValueType
	Type_t* ___m_ValueType_6;
	// System.Boolean UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_BindingIsButton
	bool ___m_BindingIsButton_7;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.InputSystem.Composites.ButtonWithOneModifier
struct ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222  : public InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E
{
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithOneModifier::modifier
	int32_t ___modifier_1;
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithOneModifier::button
	int32_t ___button_2;
	// System.Boolean UnityEngine.InputSystem.Composites.ButtonWithOneModifier::overrideModifiersNeedToBePressedFirst
	bool ___overrideModifiersNeedToBePressedFirst_3;
};

// UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers
struct ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59  : public InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E
{
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::modifier1
	int32_t ___modifier1_1;
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::modifier2
	int32_t ___modifier2_2;
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::button
	int32_t ___button_3;
	// System.Boolean UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::overrideModifiersNeedToBePressedFirst
	bool ___overrideModifiersNeedToBePressedFirst_4;
};

// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String[] UnityEngine.InputSystem.InputSettings::m_SupportedDevices
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_SupportedDevices_4;
	// UnityEngine.InputSystem.InputSettings/UpdateMode UnityEngine.InputSystem.InputSettings::m_UpdateMode
	int32_t ___m_UpdateMode_5;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxEventBytesPerUpdate
	int32_t ___m_MaxEventBytesPerUpdate_6;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxQueuedEventsPerUpdate
	int32_t ___m_MaxQueuedEventsPerUpdate_7;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_CompensateForScreenOrientation
	bool ___m_CompensateForScreenOrientation_8;
	// UnityEngine.InputSystem.InputSettings/BackgroundBehavior UnityEngine.InputSystem.InputSettings::m_BackgroundBehavior
	int32_t ___m_BackgroundBehavior_9;
	// UnityEngine.InputSystem.InputSettings/EditorInputBehaviorInPlayMode UnityEngine.InputSystem.InputSettings::m_EditorInputBehaviorInPlayMode
	int32_t ___m_EditorInputBehaviorInPlayMode_10;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMin
	float ___m_DefaultDeadzoneMin_11;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMax
	float ___m_DefaultDeadzoneMax_12;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultButtonPressPoint
	float ___m_DefaultButtonPressPoint_13;
	// System.Single UnityEngine.InputSystem.InputSettings::m_ButtonReleaseThreshold
	float ___m_ButtonReleaseThreshold_14;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultTapTime
	float ___m_DefaultTapTime_15;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultSlowTapTime
	float ___m_DefaultSlowTapTime_16;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultHoldTime
	float ___m_DefaultHoldTime_17;
	// System.Single UnityEngine.InputSystem.InputSettings::m_TapRadius
	float ___m_TapRadius_18;
	// System.Single UnityEngine.InputSystem.InputSettings::m_MultiTapDelayTime
	float ___m_MultiTapDelayTime_19;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_DisableRedundantEventsMerging
	bool ___m_DisableRedundantEventsMerging_20;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_ShortcutKeysConsumeInputs
	bool ___m_ShortcutKeysConsumeInputs_21;
	// System.Collections.Generic.HashSet`1<System.String> UnityEngine.InputSystem.InputSettings::m_FeatureFlags
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___m_FeatureFlags_22;
};

// UnityEngine.InputSystem.Composites.Vector2Composite
struct Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908  : public InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::up
	int32_t ___up_1;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::down
	int32_t ___down_2;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::right
	int32_t ___right_4;
	// System.Boolean UnityEngine.InputSystem.Composites.Vector2Composite::normalize
	bool ___normalize_5;
	// UnityEngine.InputSystem.Composites.Vector2Composite/Mode UnityEngine.InputSystem.Composites.Vector2Composite::mode
	int32_t ___mode_6;
};

// UnityEngine.InputSystem.Composites.Vector3Composite
struct Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0  : public InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::up
	int32_t ___up_1;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::down
	int32_t ___down_2;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::right
	int32_t ___right_4;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::forward
	int32_t ___forward_5;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::backward
	int32_t ___backward_6;
	// UnityEngine.InputSystem.Composites.Vector3Composite/Mode UnityEngine.InputSystem.Composites.Vector3Composite::mode
	int32_t ___mode_7;
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// UnityEngine.InputSystem.InputBindingCompositeContext

// UnityEngine.InputSystem.InputBindingCompositeContext

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=928

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=928

// UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding

// UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF62B85DD2C59D87BA6C8DA02965E1F3203A64E53_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100 <PrivateImplementationDetails>::82305DB2F44AAEADD2B0201DA206586EB13C2500F24553B6BBEB6816E41D20B4
	__StaticArrayInitTypeSizeU3D100_t31353965748512750AD1146F898DF113F5863D58 ___82305DB2F44AAEADD2B0201DA206586EB13C2500F24553B6BBEB6816E41D20B4_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=928 <PrivateImplementationDetails>::92C7758EA63714F7EE2DC9CD144CCAC9C880D649B70EDD78F2B9C28FC6FBE67A
	__StaticArrayInitTypeSizeU3D928_t45F2AF81CEF7FEE66F2B125F3B3A10AF7C990C44 ___92C7758EA63714F7EE2DC9CD144CCAC9C880D649B70EDD78F2B9C28FC6FBE67A_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460 <PrivateImplementationDetails>::A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66
	__StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394 ___A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::EEAB0A49E323B940CB01CCD3E80D47F1566617F04466CD5D6190ACDBC495CB2A
	__StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141 ___EEAB0A49E323B940CB01CCD3E80D47F1566617F04466CD5D6190ACDBC495CB2A_3;
};

// <PrivateImplementationDetails>

// UnityEngine.InputSystem.InputBindingComposite
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0_StaticFields
{
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputBindingComposite::s_Composites
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Composites_0;
};

// UnityEngine.InputSystem.InputBindingComposite

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.InputSystem.InputBindingComposite`1<System.Single>

// UnityEngine.InputSystem.InputBindingComposite`1<System.Single>

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.Composites.OneModifierComposite

// UnityEngine.InputSystem.Composites.OneModifierComposite

// UnityEngine.InputSystem.Composites.TwoModifiersComposite

// UnityEngine.InputSystem.Composites.TwoModifiersComposite

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.InputSystem.Composites.ButtonWithOneModifier

// UnityEngine.InputSystem.Composites.ButtonWithOneModifier

// UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers

// UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers

// UnityEngine.InputSystem.InputSettings

// UnityEngine.InputSystem.InputSettings

// UnityEngine.InputSystem.Composites.Vector2Composite

// UnityEngine.InputSystem.Composites.Vector2Composite

// UnityEngine.InputSystem.Composites.Vector3Composite

// UnityEngine.InputSystem.Composites.Vector3Composite
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// TValue UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_gshared (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___0_partNumber, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_gshared (InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_gshared (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_gshared (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.InputSystem.Composites.ButtonWithOneModifier::ModifierIsPressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonWithOneModifier_ModifierIsPressed_mEAF7D55D5DFF9A23D2F467E889EDFF82355E8E80 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
inline float InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___0_partNumber, const RuntimeMethod* method)
{
	return ((  float (*) (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390*, int32_t, const RuntimeMethod*))InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_gshared)(__this, ___0_partNumber, method);
}
// System.Boolean UnityEngine.InputSystem.InputBindingCompositeContext::ReadValueAsButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___0_partNumber, const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.InputBindingCompositeContext::GetPressTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___0_partNumber, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputSettings UnityEngine.InputSystem.InputSystem::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputSettings::IsFeatureEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputSettings_IsFeatureEnabled_mA9209A0E45A1FECA302CD2F39965735CC4897E68 (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, String_t* ___0_featureName, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::.ctor()
inline void InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8 (InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E*, const RuntimeMethod*))InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::ModifiersArePressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonWithTwoModifiers_ModifiersArePressed_m0713025DE1116397F560856674D56D3D228C781E (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Composites.OneModifierComposite::ModifierIsPressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneModifierComposite_ModifierIsPressed_m25EEA39878124B169F67C7A2752EBD7890F44C48 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.InputBindingCompositeContext::EvaluateMagnitude(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___0_partNumber, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue(System.Int32,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___0_partNumber, void* ___1_buffer, int32_t ___2_bufferSize, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___0_destination, int64_t ___1_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::DetermineValueTypeAndSize(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Int32,System.Type&,System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_DetermineValueTypeAndSize_m872B0A8E5DEA6864048B0D08DE31FFBA40C442AA (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, int32_t ___1_part, Type_t** ___2_valueType, int32_t* ___3_valueSizeInBytes, bool* ___4_isButton, const RuntimeMethod* method) ;
// System.Object UnityEngine.InputSystem.InputBindingCompositeContext::ReadValueAsObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___0_partNumber, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding> UnityEngine.InputSystem.InputBindingCompositeContext::get_controls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputBindingCompositeContext_get_controls_m142FECF8374D6E0E3B012C8D376AB913E9634C69 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::get_part()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::get_control()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputControl::get_isButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControl_get_isButton_m4634F4F40450AA969DA851B73E2A2226239F3BEF (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A (InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Composites.TwoModifiersComposite::ModifiersArePressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.Controls.DpadControl::MakeDpadVector(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DpadControl_MakeDpadVector_m5F53CF11B80175D8FF9856B2E126978C65C82CE6 (float ___0_up, float ___1_down, float ___2_left, float ___3_right, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.Controls.DpadControl::MakeDpadVector(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DpadControl_MakeDpadVector_mAA0FB9313820797F8F1DCB006A8F2341604CB7F5 (bool ___0_up, bool ___1_down, bool ___2_left, bool ___3_right, bool ___4_normalize, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::.ctor()
inline void InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545 (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588*, const RuntimeMethod*))InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>::.ctor()
inline void InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789 (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306*, const RuntimeMethod*))InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.InputSystem.Composites.ButtonWithOneModifier::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithOneModifier_ReadValue_m439AB954F407DC5590C539DD486A04624AA07791 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithOneModifier_ReadValue_m439AB954F407DC5590C539DD486A04624AA07791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithOneModifier_ReadValue_m439AB954F407DC5590C539DD486A04624AA07791_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77873));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77874));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77875));
		// if (ModifierIsPressed(ref context))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77876));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77877));
		bool L_1;
		L_1 = ButtonWithOneModifier_ModifierIsPressed_mEAF7D55D5DFF9A23D2F467E889EDFF82355E8E80(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77877));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77878));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return context.ReadValue<float>(button);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77879));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___button_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77880));
		float L_5;
		L_5 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_3, L_4, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77880));
		V_1 = L_5;
		goto IL_0023;
	}

IL_001b:
	{
		// return default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77881));
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77882));
		float L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.InputSystem.Composites.ButtonWithOneModifier::ModifierIsPressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonWithOneModifier_ModifierIsPressed_mEAF7D55D5DFF9A23D2F467E889EDFF82355E8E80 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithOneModifier_ModifierIsPressed_mEAF7D55D5DFF9A23D2F467E889EDFF82355E8E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	double V_2 = 0.0;
	double V_3 = 0.0;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithOneModifier_ModifierIsPressed_mEAF7D55D5DFF9A23D2F467E889EDFF82355E8E80_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77883));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77884));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77885));
		// var modifierDown = context.ReadValueAsButton(modifier);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77886));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		int32_t L_1 = __this->___modifier_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77887));
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77887));
		V_0 = L_2;
		// if (modifierDown && !overrideModifiersNeedToBePressedFirst)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77888));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		bool L_4 = __this->___overrideModifiersNeedToBePressedFirst_3;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77889));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77890));
		// var timestamp = context.GetPressTime(button);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77891));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_6 = ___0_context;
		int32_t L_7 = __this->___button_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77892));
		double L_8;
		L_8 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77892));
		V_2 = L_8;
		// var timestamp1 = context.GetPressTime(modifier);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77893));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_9 = ___0_context;
		int32_t L_10 = __this->___modifier_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77894));
		double L_11;
		L_11 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77894));
		V_3 = L_11;
		// return timestamp1 <= timestamp;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77895));
		double L_12 = V_3;
		double L_13 = V_2;
		V_4 = (bool)((((int32_t)((!(((double)L_12) <= ((double)L_13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_0047:
	{
		// return modifierDown;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77896));
		bool L_14 = V_0;
		V_4 = L_14;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77897));
		bool L_15 = V_4;
		return L_15;
	}
}
// System.Single UnityEngine.InputSystem.Composites.ButtonWithOneModifier::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithOneModifier_EvaluateMagnitude_m5620878936698B7CB4AD5BBD698EC2FF062A9505 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithOneModifier_EvaluateMagnitude_m5620878936698B7CB4AD5BBD698EC2FF062A9505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithOneModifier_EvaluateMagnitude_m5620878936698B7CB4AD5BBD698EC2FF062A9505_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77898));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77899));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77900));
		// return ReadValue(ref context);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77901));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77902));
		float L_1;
		L_1 = VirtualFuncInvoker1< float, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77902));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77903));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.InputSystem.Composites.ButtonWithOneModifier::FinishSetup(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonWithOneModifier_FinishSetup_m92274A88D5AEAA4436E4009B0B32533331B0C968 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithOneModifier_FinishSetup_m92274A88D5AEAA4436E4009B0B32533331B0C968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54458377977B39746D8739B34B60A49EA898EDAE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithOneModifier_FinishSetup_m92274A88D5AEAA4436E4009B0B32533331B0C968_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77904));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77905));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77906));
		// if (!overrideModifiersNeedToBePressedFirst)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77907));
		bool L_0 = __this->___overrideModifiersNeedToBePressedFirst_3;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77908));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// overrideModifiersNeedToBePressedFirst =
		//     InputSystem.settings.IsFeatureEnabled(InputFeatureNames.kDisableShortcutSupport);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77909));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77910));
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_2;
		L_2 = InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77910));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77911));
		NullCheck(L_2);
		bool L_3;
		L_3 = InputSettings_IsFeatureEnabled_mA9209A0E45A1FECA302CD2F39965735CC4897E68(L_2, _stringLiteral54458377977B39746D8739B34B60A49EA898EDAE, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77911));
		__this->___overrideModifiersNeedToBePressedFirst_3 = L_3;
	}

IL_0023:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77912));
		return;
	}
}
// System.Void UnityEngine.InputSystem.Composites.ButtonWithOneModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonWithOneModifier__ctor_m7B7F85E23B5C441609E4155452F6D4AC05E2B639 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithOneModifier__ctor_m7B7F85E23B5C441609E4155452F6D4AC05E2B639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithOneModifier__ctor_m7B7F85E23B5C441609E4155452F6D4AC05E2B639_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8(__this, InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
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
// System.Single UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithTwoModifiers_ReadValue_m37221E24FA2D2429BABF071D71DA89E255B8CBA9 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithTwoModifiers_ReadValue_m37221E24FA2D2429BABF071D71DA89E255B8CBA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithTwoModifiers_ReadValue_m37221E24FA2D2429BABF071D71DA89E255B8CBA9_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77913));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77914));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77915));
		// if (ModifiersArePressed(ref context))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77916));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77917));
		bool L_1;
		L_1 = ButtonWithTwoModifiers_ModifiersArePressed_m0713025DE1116397F560856674D56D3D228C781E(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77917));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77918));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return context.ReadValue<float>(button);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77919));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___button_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77920));
		float L_5;
		L_5 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_3, L_4, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77920));
		V_1 = L_5;
		goto IL_0023;
	}

IL_001b:
	{
		// return default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77921));
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77922));
		float L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::ModifiersArePressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonWithTwoModifiers_ModifiersArePressed_m0713025DE1116397F560856674D56D3D228C781E (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithTwoModifiers_ModifiersArePressed_m0713025DE1116397F560856674D56D3D228C781E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithTwoModifiers_ModifiersArePressed_m0713025DE1116397F560856674D56D3D228C781E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77923));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77924));
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77925));
		// var modifiersDown = context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77926));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		int32_t L_1 = __this->___modifier1_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77927));
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77927));
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___modifier2_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77928));
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77928));
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		// if (modifiersDown && !overrideModifiersNeedToBePressedFirst)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77929));
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		bool L_7 = __this->___overrideModifiersNeedToBePressedFirst_4;
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B6_0 = 0;
	}

IL_002e:
	{
		V_1 = (bool)G_B6_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77930));
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77931));
		// var timestamp = context.GetPressTime(button);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77932));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_9 = ___0_context;
		int32_t L_10 = __this->___button_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77933));
		double L_11;
		L_11 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77933));
		V_2 = L_11;
		// var timestamp1 = context.GetPressTime(modifier1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77934));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_12 = ___0_context;
		int32_t L_13 = __this->___modifier1_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77935));
		double L_14;
		L_14 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_12, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77935));
		V_3 = L_14;
		// var timestamp2 = context.GetPressTime(modifier2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77936));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_15 = ___0_context;
		int32_t L_16 = __this->___modifier2_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77937));
		double L_17;
		L_17 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_15, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77937));
		V_4 = L_17;
		// return timestamp1 <= timestamp && timestamp2 <= timestamp;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77938));
		double L_18 = V_3;
		double L_19 = V_2;
		if ((!(((double)L_18) <= ((double)L_19))))
		{
			goto IL_0069;
		}
	}
	{
		double L_20 = V_4;
		double L_21 = V_2;
		G_B10_0 = ((((int32_t)((!(((double)L_20) <= ((double)L_21)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B10_0 = 0;
	}

IL_006a:
	{
		V_5 = (bool)G_B10_0;
		goto IL_0073;
	}

IL_006e:
	{
		// return modifiersDown;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77939));
		bool L_22 = V_0;
		V_5 = L_22;
		goto IL_0073;
	}

IL_0073:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77940));
		bool L_23 = V_5;
		return L_23;
	}
}
// System.Single UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithTwoModifiers_EvaluateMagnitude_mFA7A056972DA25A3D63AB79E19E366F3F68DB900 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithTwoModifiers_EvaluateMagnitude_mFA7A056972DA25A3D63AB79E19E366F3F68DB900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithTwoModifiers_EvaluateMagnitude_mFA7A056972DA25A3D63AB79E19E366F3F68DB900_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77941));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77942));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77943));
		// return ReadValue(ref context);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77944));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77945));
		float L_1;
		L_1 = VirtualFuncInvoker1< float, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77945));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77946));
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::FinishSetup(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonWithTwoModifiers_FinishSetup_m72B6515E3E75435A6F0E533DFEEEDCF987315568 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithTwoModifiers_FinishSetup_m72B6515E3E75435A6F0E533DFEEEDCF987315568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54458377977B39746D8739B34B60A49EA898EDAE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithTwoModifiers_FinishSetup_m72B6515E3E75435A6F0E533DFEEEDCF987315568_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77947));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77948));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77949));
		// if (!overrideModifiersNeedToBePressedFirst)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77950));
		bool L_0 = __this->___overrideModifiersNeedToBePressedFirst_4;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77951));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// overrideModifiersNeedToBePressedFirst =
		//     InputSystem.settings.IsFeatureEnabled(InputFeatureNames.kDisableShortcutSupport);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77952));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77953));
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_2;
		L_2 = InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77953));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77954));
		NullCheck(L_2);
		bool L_3;
		L_3 = InputSettings_IsFeatureEnabled_mA9209A0E45A1FECA302CD2F39965735CC4897E68(L_2, _stringLiteral54458377977B39746D8739B34B60A49EA898EDAE, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77954));
		__this->___overrideModifiersNeedToBePressedFirst_4 = L_3;
	}

IL_0023:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77955));
		return;
	}
}
// System.Void UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonWithTwoModifiers__ctor_m200626B0BEBB78BC03D64F561D3727DE1D2D5325 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonWithTwoModifiers__ctor_m200626B0BEBB78BC03D64F561D3727DE1D2D5325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ButtonWithTwoModifiers__ctor_m200626B0BEBB78BC03D64F561D3727DE1D2D5325_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8(__this, InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
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
// System.Type UnityEngine.InputSystem.Composites.OneModifierComposite::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* OneModifierComposite_get_valueType_m5E2ABFE018FE89563F657E18C3DCB5EEA8BF2673 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_get_valueType_m5E2ABFE018FE89563F657E18C3DCB5EEA8BF2673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OneModifierComposite_get_valueType_m5E2ABFE018FE89563F657E18C3DCB5EEA8BF2673_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77956));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77957));
	{
		// public override Type valueType => m_ValueType;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77958));
		Type_t* L_0 = __this->___m_ValueType_5;
		return L_0;
	}
}
// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::get_valueSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OneModifierComposite_get_valueSizeInBytes_m910E77B6AB3AAF8E47F0DA92CD16C47784E66A1C (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_get_valueSizeInBytes_m910E77B6AB3AAF8E47F0DA92CD16C47784E66A1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OneModifierComposite_get_valueSizeInBytes_m910E77B6AB3AAF8E47F0DA92CD16C47784E66A1C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77959));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77960));
	{
		// public override int valueSizeInBytes => m_ValueSizeInBytes;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77961));
		int32_t L_0 = __this->___m_ValueSizeInBytes_4;
		return L_0;
	}
}
// System.Single UnityEngine.InputSystem.Composites.OneModifierComposite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OneModifierComposite_EvaluateMagnitude_mA42D5A4588ED01010B8642529A70E665BB9C6923 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_EvaluateMagnitude_mA42D5A4588ED01010B8642529A70E665BB9C6923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OneModifierComposite_EvaluateMagnitude_mA42D5A4588ED01010B8642529A70E665BB9C6923_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77962));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77963));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77964));
		// if (ModifierIsPressed(ref context))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77965));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77966));
		bool L_1;
		L_1 = OneModifierComposite_ModifierIsPressed_m25EEA39878124B169F67C7A2752EBD7890F44C48(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77966));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77967));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return context.EvaluateMagnitude(binding);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77968));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___binding_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77969));
		float L_5;
		L_5 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77969));
		V_1 = L_5;
		goto IL_0023;
	}

IL_001b:
	{
		// return default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77970));
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77971));
		float L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_ReadValue_mFFCA6F249ACC7FB1137FC8DC42FEF8893AF5764B (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, void* ___1_buffer, int32_t ___2_bufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_ReadValue_mFFCA6F249ACC7FB1137FC8DC42FEF8893AF5764B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context), (&___1_buffer), (&___2_bufferSize));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OneModifierComposite_ReadValue_mFFCA6F249ACC7FB1137FC8DC42FEF8893AF5764B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77972));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77973));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77974));
		// if (ModifierIsPressed(ref context))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77975));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77976));
		bool L_1;
		L_1 = OneModifierComposite_ModifierIsPressed_m25EEA39878124B169F67C7A2752EBD7890F44C48(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77976));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77977));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// context.ReadValue(binding, buffer, bufferSize);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77978));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___binding_2;
		void* L_5 = ___1_buffer;
		int32_t L_6 = ___2_bufferSize;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77979));
		InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8(L_3, L_4, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77979));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77980));
		goto IL_002b;
	}

IL_001d:
	{
		// UnsafeUtility.MemClear(buffer, m_ValueSizeInBytes);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77981));
		void* L_7 = ___1_buffer;
		int32_t L_8 = __this->___m_ValueSizeInBytes_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77982));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_7, ((int64_t)L_8), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77982));
	}

IL_002b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77983));
		return;
	}
}
// System.Boolean UnityEngine.InputSystem.Composites.OneModifierComposite::ModifierIsPressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OneModifierComposite_ModifierIsPressed_m25EEA39878124B169F67C7A2752EBD7890F44C48 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_ModifierIsPressed_m25EEA39878124B169F67C7A2752EBD7890F44C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	double V_2 = 0.0;
	double V_3 = 0.0;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OneModifierComposite_ModifierIsPressed_m25EEA39878124B169F67C7A2752EBD7890F44C48_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77984));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77985));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77986));
		// var modifierDown = context.ReadValueAsButton(modifier);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77987));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		int32_t L_1 = __this->___modifier_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77988));
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77988));
		V_0 = L_2;
		// if (modifierDown && m_BindingIsButton && !overrideModifiersNeedToBePressedFirst)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77989));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		bool L_4 = __this->___m_BindingIsButton_6;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		bool L_5 = __this->___overrideModifiersNeedToBePressedFirst_3;
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		V_1 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77990));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77991));
		// var timestamp = context.GetPressTime(binding);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77992));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_7 = ___0_context;
		int32_t L_8 = __this->___binding_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77993));
		double L_9;
		L_9 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77993));
		V_2 = L_9;
		// var timestamp1 = context.GetPressTime(modifier);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77994));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_10 = ___0_context;
		int32_t L_11 = __this->___modifier_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77995));
		double L_12;
		L_12 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77995));
		V_3 = L_12;
		// return timestamp1 <= timestamp;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77996));
		double L_13 = V_3;
		double L_14 = V_2;
		V_4 = (bool)((((int32_t)((!(((double)L_13) <= ((double)L_14)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_004f:
	{
		// return modifierDown;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77997));
		bool L_15 = V_0;
		V_4 = L_15;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77998));
		bool L_16 = V_4;
		return L_16;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::FinishSetup(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_FinishSetup_m91EE0D3C7261D70C6C72173F1F18650A9C007620 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_FinishSetup_m91EE0D3C7261D70C6C72173F1F18650A9C007620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54458377977B39746D8739B34B60A49EA898EDAE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OneModifierComposite_FinishSetup_m91EE0D3C7261D70C6C72173F1F18650A9C007620_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77999));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78000));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78001));
		// DetermineValueTypeAndSize(ref context, binding, out m_ValueType, out m_ValueSizeInBytes, out m_BindingIsButton);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78002));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		int32_t L_1 = __this->___binding_2;
		Type_t** L_2 = (&__this->___m_ValueType_5);
		int32_t* L_3 = (&__this->___m_ValueSizeInBytes_4);
		bool* L_4 = (&__this->___m_BindingIsButton_6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78003));
		OneModifierComposite_DetermineValueTypeAndSize_m872B0A8E5DEA6864048B0D08DE31FFBA40C442AA(L_0, L_1, L_2, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78003));
		// if (!overrideModifiersNeedToBePressedFirst)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78004));
		bool L_5 = __this->___overrideModifiersNeedToBePressedFirst_3;
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78005));
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// overrideModifiersNeedToBePressedFirst =
		//     InputSystem.settings.IsFeatureEnabled(InputFeatureNames.kDisableShortcutSupport);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78006));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78007));
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_7;
		L_7 = InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78007));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78008));
		NullCheck(L_7);
		bool L_8;
		L_8 = InputSettings_IsFeatureEnabled_mA9209A0E45A1FECA302CD2F39965735CC4897E68(L_7, _stringLiteral54458377977B39746D8739B34B60A49EA898EDAE, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78008));
		__this->___overrideModifiersNeedToBePressedFirst_3 = L_8;
	}

IL_0042:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78009));
		return;
	}
}
// System.Object UnityEngine.InputSystem.Composites.OneModifierComposite::ReadValueAsObject(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OneModifierComposite_ReadValueAsObject_mE7F10A702C1FC6CF14A127CB653733BE056C445B (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_ReadValueAsObject_mE7F10A702C1FC6CF14A127CB653733BE056C445B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OneModifierComposite_ReadValueAsObject_mE7F10A702C1FC6CF14A127CB653733BE056C445B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78010));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78011));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78012));
		// if (context.ReadValueAsButton(modifier))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78013));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		int32_t L_1 = __this->___modifier_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78014));
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78014));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78015));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return context.ReadValueAsObject(binding);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78016));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_4 = ___0_context;
		int32_t L_5 = __this->___binding_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78017));
		RuntimeObject* L_6;
		L_6 = InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78017));
		V_1 = L_6;
		goto IL_0024;
	}

IL_0020:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78018));
		V_1 = NULL;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78019));
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::DetermineValueTypeAndSize(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Int32,System.Type&,System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_DetermineValueTypeAndSize_m872B0A8E5DEA6864048B0D08DE31FFBA40C442AA (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, int32_t ___1_part, Type_t** ___2_valueType, int32_t* ___3_valueSizeInBytes, bool* ___4_isButton, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite_DetermineValueTypeAndSize_m872B0A8E5DEA6864048B0D08DE31FFBA40C442AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context), (&___1_part), (&___2_valueType), (&___3_valueSizeInBytes), (&___4_isButton));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OneModifierComposite_DetermineValueTypeAndSize_m872B0A8E5DEA6864048B0D08DE31FFBA40C442AA_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78020));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78021));
	int32_t G_B7_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78022));
		// valueSizeInBytes = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78023));
		int32_t* L_0 = ___3_valueSizeInBytes;
		*((int32_t*)L_0) = (int32_t)0;
		// isButton = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78024));
		bool* L_1 = ___4_isButton;
		*((int8_t*)L_1) = (int8_t)1;
		// Type type = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78025));
		V_0 = (Type_t*)NULL;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78026));
		// foreach (var control in context.controls)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78027));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_2 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78028));
		RuntimeObject* L_3;
		L_3 = InputBindingCompositeContext_get_controls_m142FECF8374D6E0E3B012C8D376AB913E9634C69(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78028));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78029));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding>::GetEnumerator() */, IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA_il2cpp_TypeInfo_var, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78029));
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b4:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78062));
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_00be;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78063));
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78063));
				}

IL_00be:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78064));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78030));
				goto IL_00a7_1;
			}

IL_001c_1:
			{
				// foreach (var control in context.controls)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78031));
				RuntimeObject* L_7 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78032));
				NullCheck(L_7);
				PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 L_8;
				L_8 = InterfaceFuncInvoker0< PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding>::get_Current() */, IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_il2cpp_TypeInfo_var, L_7);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78032));
				V_2 = L_8;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78033));
				// if (control.part != part)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78034));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78035));
				int32_t L_9;
				L_9 = PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_inline((&V_2), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78035));
				int32_t L_10 = ___1_part;
				V_4 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78036));
				bool L_11 = V_4;
				if (!L_11)
				{
					goto IL_0039_1;
				}
			}
			{
				// continue;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78037));
				goto IL_00a7_1;
			}

IL_0039_1:
			{
				// var controlType = control.control.valueType;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78038));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78039));
				InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_12;
				L_12 = PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline((&V_2), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78039));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78040));
				NullCheck(L_12);
				Type_t* L_13;
				L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(4 /* System.Type UnityEngine.InputSystem.InputControl::get_valueType() */, L_12);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78040));
				V_3 = L_13;
				// if (type == null || controlType.IsAssignableFrom(type))
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78041));
				Type_t* L_14 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78042));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, (Type_t*)NULL, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78042));
				if (L_15)
				{
					goto IL_0058_1;
				}
			}
			{
				Type_t* L_16 = V_3;
				Type_t* L_17 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78043));
				NullCheck(L_16);
				bool L_18;
				L_18 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_16, L_17);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78043));
				G_B7_0 = ((int32_t)(L_18));
				goto IL_0059_1;
			}

IL_0058_1:
			{
				G_B7_0 = 1;
			}

IL_0059_1:
			{
				V_5 = (bool)G_B7_0;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78044));
				bool L_19 = V_5;
				if (!L_19)
				{
					goto IL_0063_1;
				}
			}
			{
				// type = controlType;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78045));
				Type_t* L_20 = V_3;
				V_0 = L_20;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78046));
				goto IL_007e_1;
			}

IL_0063_1:
			{
				// else if (!type.IsAssignableFrom(controlType))
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78047));
				Type_t* L_21 = V_0;
				Type_t* L_22 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78048));
				NullCheck(L_21);
				bool L_23;
				L_23 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_21, L_22);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78048));
				V_6 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78049));
				bool L_24 = V_6;
				if (!L_24)
				{
					goto IL_007e_1;
				}
			}
			{
				// type = typeof(Object);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78050));
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78051));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_26;
				L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78051));
				V_0 = L_26;
			}

IL_007e_1:
			{
				// valueSizeInBytes = Math.Max(control.control.valueSizeInBytes, valueSizeInBytes);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78052));
				int32_t* L_27 = ___3_valueSizeInBytes;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78053));
				InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_28;
				L_28 = PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline((&V_2), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78053));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78054));
				NullCheck(L_28);
				int32_t L_29;
				L_29 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.InputSystem.InputControl::get_valueSizeInBytes() */, L_28);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78054));
				int32_t* L_30 = ___3_valueSizeInBytes;
				int32_t L_31 = *((int32_t*)L_30);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78055));
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_32;
				L_32 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_29, L_31, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78055));
				*((int32_t*)L_27) = (int32_t)L_32;
				// isButton &= control.control.isButton;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78056));
				bool* L_33 = ___4_isButton;
				bool* L_34 = ___4_isButton;
				int32_t L_35 = *((uint8_t*)L_34);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78057));
				InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_36;
				L_36 = PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline((&V_2), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78057));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78058));
				NullCheck(L_36);
				bool L_37;
				L_37 = InputControl_get_isButton_m4634F4F40450AA969DA851B73E2A2226239F3BEF(L_36, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78058));
				*((int8_t*)L_33) = (int8_t)((int32_t)(L_35&(int32_t)L_37));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78059));
			}

IL_00a7_1:
			{
				// foreach (var control in context.controls)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78060));
				RuntimeObject* L_38 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78061));
				NullCheck(L_38);
				bool L_39;
				L_39 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_38);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78061));
				if (L_39)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_00bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		// valueType = type;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78065));
		Type_t** L_40 = ___2_valueType;
		Type_t* L_41 = V_0;
		*((RuntimeObject**)L_40) = (RuntimeObject*)L_41;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_40, (void*)(RuntimeObject*)L_41);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78066));
		return;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite__ctor_mB03D8DE49D44A7C6FF0AB59B5CF4F35E2F6C7A26 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneModifierComposite__ctor_mB03D8DE49D44A7C6FF0AB59B5CF4F35E2F6C7A26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OneModifierComposite__ctor_mB03D8DE49D44A7C6FF0AB59B5CF4F35E2F6C7A26_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A(__this, NULL);
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
// System.Type UnityEngine.InputSystem.Composites.TwoModifiersComposite::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TwoModifiersComposite_get_valueType_mD7C59304C3F9F7C9A49C29F705E500781CAE6125 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_get_valueType_mD7C59304C3F9F7C9A49C29F705E500781CAE6125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TwoModifiersComposite_get_valueType_mD7C59304C3F9F7C9A49C29F705E500781CAE6125_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78067));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78068));
	{
		// public override Type valueType => m_ValueType;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78069));
		Type_t* L_0 = __this->___m_ValueType_6;
		return L_0;
	}
}
// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::get_valueSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwoModifiersComposite_get_valueSizeInBytes_m534C8107DAC6BC8F0DCCE80128D5BDB13F4F662A (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_get_valueSizeInBytes_m534C8107DAC6BC8F0DCCE80128D5BDB13F4F662A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TwoModifiersComposite_get_valueSizeInBytes_m534C8107DAC6BC8F0DCCE80128D5BDB13F4F662A_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78070));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78071));
	{
		// public override int valueSizeInBytes => m_ValueSizeInBytes;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78072));
		int32_t L_0 = __this->___m_ValueSizeInBytes_5;
		return L_0;
	}
}
// System.Single UnityEngine.InputSystem.Composites.TwoModifiersComposite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TwoModifiersComposite_EvaluateMagnitude_mBAC0B38247A658D8487B23A3BBD54CC8DFD37314 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_EvaluateMagnitude_mBAC0B38247A658D8487B23A3BBD54CC8DFD37314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TwoModifiersComposite_EvaluateMagnitude_mBAC0B38247A658D8487B23A3BBD54CC8DFD37314_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78073));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78074));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78075));
		// if (ModifiersArePressed(ref context))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78076));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78077));
		bool L_1;
		L_1 = TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78077));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78078));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return context.EvaluateMagnitude(binding);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78079));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___binding_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78080));
		float L_5;
		L_5 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78080));
		V_1 = L_5;
		goto IL_0023;
	}

IL_001b:
	{
		// return default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78081));
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78082));
		float L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite_ReadValue_mD57B7904321CE14F2796449A3A7E832FE27459B4 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, void* ___1_buffer, int32_t ___2_bufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_ReadValue_mD57B7904321CE14F2796449A3A7E832FE27459B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context), (&___1_buffer), (&___2_bufferSize));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TwoModifiersComposite_ReadValue_mD57B7904321CE14F2796449A3A7E832FE27459B4_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78083));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78084));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78085));
		// if (ModifiersArePressed(ref context))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78086));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78087));
		bool L_1;
		L_1 = TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78087));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78088));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// context.ReadValue(binding, buffer, bufferSize);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78089));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___binding_3;
		void* L_5 = ___1_buffer;
		int32_t L_6 = ___2_bufferSize;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78090));
		InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8(L_3, L_4, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78090));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78091));
		goto IL_002b;
	}

IL_001d:
	{
		// UnsafeUtility.MemClear(buffer, m_ValueSizeInBytes);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78092));
		void* L_7 = ___1_buffer;
		int32_t L_8 = __this->___m_ValueSizeInBytes_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78093));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_7, ((int64_t)L_8), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78093));
	}

IL_002b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78094));
		return;
	}
}
// System.Boolean UnityEngine.InputSystem.Composites.TwoModifiersComposite::ModifiersArePressed(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TwoModifiersComposite_ModifiersArePressed_m0D7D12C3139BE7B2CDB1DBDB3C2A59AE584F49C8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78095));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78096));
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78097));
		// var modifiersDown = context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78098));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		int32_t L_1 = __this->___modifier1_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78099));
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78099));
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___modifier2_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78100));
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78100));
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		// if (modifiersDown && m_BindingIsButton && !overrideModifiersNeedToBePressedFirst)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78101));
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		bool L_7 = __this->___m_BindingIsButton_7;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		bool L_8 = __this->___overrideModifiersNeedToBePressedFirst_4;
		G_B7_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B7_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78102));
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78103));
		// var timestamp = context.GetPressTime(binding);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78104));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_10 = ___0_context;
		int32_t L_11 = __this->___binding_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78105));
		double L_12;
		L_12 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78105));
		V_2 = L_12;
		// var timestamp1 = context.GetPressTime(modifier1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78106));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_13 = ___0_context;
		int32_t L_14 = __this->___modifier1_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78107));
		double L_15;
		L_15 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78107));
		V_3 = L_15;
		// var timestamp2 = context.GetPressTime(modifier2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78108));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_16 = ___0_context;
		int32_t L_17 = __this->___modifier2_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78109));
		double L_18;
		L_18 = InputBindingCompositeContext_GetPressTime_mA919F3E37F086C2BFEEB6EB17A75B1A6CFF2E58A(L_16, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78109));
		V_4 = L_18;
		// return timestamp1 <= timestamp && timestamp2 <= timestamp;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78110));
		double L_19 = V_3;
		double L_20 = V_2;
		if ((!(((double)L_19) <= ((double)L_20))))
		{
			goto IL_0071;
		}
	}
	{
		double L_21 = V_4;
		double L_22 = V_2;
		G_B11_0 = ((((int32_t)((!(((double)L_21) <= ((double)L_22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0072;
	}

IL_0071:
	{
		G_B11_0 = 0;
	}

IL_0072:
	{
		V_5 = (bool)G_B11_0;
		goto IL_007b;
	}

IL_0076:
	{
		// return modifiersDown;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78111));
		bool L_23 = V_0;
		V_5 = L_23;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78112));
		bool L_24 = V_5;
		return L_24;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::FinishSetup(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite_FinishSetup_mE13073D787D428DF4B1DD76A525F543D266CBF38 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_FinishSetup_mE13073D787D428DF4B1DD76A525F543D266CBF38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54458377977B39746D8739B34B60A49EA898EDAE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TwoModifiersComposite_FinishSetup_mE13073D787D428DF4B1DD76A525F543D266CBF38_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78113));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78114));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78115));
		// OneModifierComposite.DetermineValueTypeAndSize(ref context, binding, out m_ValueType, out m_ValueSizeInBytes, out m_BindingIsButton);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78116));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		int32_t L_1 = __this->___binding_3;
		Type_t** L_2 = (&__this->___m_ValueType_6);
		int32_t* L_3 = (&__this->___m_ValueSizeInBytes_5);
		bool* L_4 = (&__this->___m_BindingIsButton_7);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78117));
		OneModifierComposite_DetermineValueTypeAndSize_m872B0A8E5DEA6864048B0D08DE31FFBA40C442AA(L_0, L_1, L_2, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78117));
		// if (!overrideModifiersNeedToBePressedFirst)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78118));
		bool L_5 = __this->___overrideModifiersNeedToBePressedFirst_4;
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78119));
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// overrideModifiersNeedToBePressedFirst =
		//     InputSystem.settings.IsFeatureEnabled(InputFeatureNames.kDisableShortcutSupport);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78120));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78121));
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_7;
		L_7 = InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78121));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78122));
		NullCheck(L_7);
		bool L_8;
		L_8 = InputSettings_IsFeatureEnabled_mA9209A0E45A1FECA302CD2F39965735CC4897E68(L_7, _stringLiteral54458377977B39746D8739B34B60A49EA898EDAE, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78122));
		__this->___overrideModifiersNeedToBePressedFirst_4 = L_8;
	}

IL_0042:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78123));
		return;
	}
}
// System.Object UnityEngine.InputSystem.Composites.TwoModifiersComposite::ReadValueAsObject(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwoModifiersComposite_ReadValueAsObject_m167D7477D6B669FF931EF962102B39F44305BFAE (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_ReadValueAsObject_m167D7477D6B669FF931EF962102B39F44305BFAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TwoModifiersComposite_ReadValueAsObject_m167D7477D6B669FF931EF962102B39F44305BFAE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78124));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78125));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78126));
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78127));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		int32_t L_1 = __this->___modifier1_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78128));
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78128));
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___modifier2_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78129));
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78129));
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78130));
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return context.ReadValueAsObject(binding);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78131));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_7 = ___0_context;
		int32_t L_8 = __this->___binding_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78132));
		RuntimeObject* L_9;
		L_9 = InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78132));
		V_1 = L_9;
		goto IL_0035;
	}

IL_0031:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78133));
		V_1 = NULL;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78134));
		RuntimeObject* L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite__ctor_m46086F35D8EE4E52A60DB087F8C7D5E5AA3CB880 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwoModifiersComposite__ctor_m46086F35D8EE4E52A60DB087F8C7D5E5AA3CB880_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TwoModifiersComposite__ctor_m46086F35D8EE4E52A60DB087F8C7D5E5AA3CB880_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A(__this, NULL);
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
// UnityEngine.Vector2 UnityEngine.InputSystem.Composites.Vector2Composite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Composite_ReadValue_m32E400A5EEBEDD51B029B08B7E35777A91A85439 (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mode_tC3E9CF3E48612D8E2FD67CDBA91095417B9124B6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Composite_ReadValue_m32E400A5EEBEDD51B029B08B7E35777A91A85439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_6), (&V_7), (&V_8), (&V_9));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2Composite_ReadValue_m32E400A5EEBEDD51B029B08B7E35777A91A85439_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78135));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78136));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78137));
		// var mode = this.mode;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78138));
		int32_t L_0 = __this->___mode_6;
		V_0 = L_0;
		// if (mode == Mode.Analog)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78139));
		int32_t L_1 = V_0;
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78140));
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78141));
		// var upValue = context.ReadValue<float>(up);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78142));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___0_context;
		int32_t L_4 = __this->___up_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78143));
		float L_5;
		L_5 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_3, L_4, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78143));
		V_6 = L_5;
		// var downValue = context.ReadValue<float>(down);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78144));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_6 = ___0_context;
		int32_t L_7 = __this->___down_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78145));
		float L_8;
		L_8 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_6, L_7, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78145));
		V_7 = L_8;
		// var leftValue = context.ReadValue<float>(left);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78146));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_9 = ___0_context;
		int32_t L_10 = __this->___left_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78147));
		float L_11;
		L_11 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_9, L_10, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78147));
		V_8 = L_11;
		// var rightValue = context.ReadValue<float>(right);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78148));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_12 = ___0_context;
		int32_t L_13 = __this->___right_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78149));
		float L_14;
		L_14 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_12, L_13, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78149));
		V_9 = L_14;
		// return DpadControl.MakeDpadVector(upValue, downValue, leftValue, rightValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78150));
		float L_15 = V_6;
		float L_16 = V_7;
		float L_17 = V_8;
		float L_18 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78151));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = DpadControl_MakeDpadVector_m5F53CF11B80175D8FF9856B2E126978C65C82CE6(L_15, L_16, L_17, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78151));
		V_10 = L_19;
		goto IL_00b4;
	}

IL_005c:
	{
		// var upIsPressed = context.ReadValueAsButton(up);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78152));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_20 = ___0_context;
		int32_t L_21 = __this->___up_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78153));
		bool L_22;
		L_22 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_20, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78153));
		V_1 = L_22;
		// var downIsPressed = context.ReadValueAsButton(down);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78154));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_23 = ___0_context;
		int32_t L_24 = __this->___down_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78155));
		bool L_25;
		L_25 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_23, L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78155));
		V_2 = L_25;
		// var leftIsPressed = context.ReadValueAsButton(left);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78156));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_26 = ___0_context;
		int32_t L_27 = __this->___left_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78157));
		bool L_28;
		L_28 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_26, L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78157));
		V_3 = L_28;
		// var rightIsPressed = context.ReadValueAsButton(right);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78158));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_29 = ___0_context;
		int32_t L_30 = __this->___right_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78159));
		bool L_31;
		L_31 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_29, L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78159));
		V_4 = L_31;
		// if (!normalize) // Was on by default.
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78160));
		bool L_32 = __this->___normalize_5;
		V_11 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78161));
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00a2;
		}
	}
	{
		// mode = Mode.Digital;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78162));
		V_0 = 1;
	}

IL_00a2:
	{
		// return DpadControl.MakeDpadVector(upIsPressed, downIsPressed, leftIsPressed, rightIsPressed, mode == Mode.DigitalNormalized);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78163));
		bool L_34 = V_1;
		bool L_35 = V_2;
		bool L_36 = V_3;
		bool L_37 = V_4;
		int32_t L_38 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78164));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = DpadControl_MakeDpadVector_mAA0FB9313820797F8F1DCB006A8F2341604CB7F5(L_34, L_35, L_36, L_37, (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78164));
		V_10 = L_39;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78165));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_10;
		return L_40;
	}
}
// System.Single UnityEngine.InputSystem.Composites.Vector2Composite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Composite_EvaluateMagnitude_m019D431241F2FA113EB0CF79D0092315AA5942CE (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Composite_EvaluateMagnitude_m019D431241F2FA113EB0CF79D0092315AA5942CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2Composite_EvaluateMagnitude_m019D431241F2FA113EB0CF79D0092315AA5942CE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78166));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78167));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78168));
		// var value = ReadValue(ref context);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78169));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___0_context;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78170));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78170));
		V_0 = L_1;
		// return value.magnitude;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78171));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78172));
		float L_2;
		L_2 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78172));
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78173));
		float L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.InputSystem.Composites.Vector2Composite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Composite__ctor_m1625F6C3829296D1C12B55EF496E38EDC8D05006 (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Composite__ctor_m1625F6C3829296D1C12B55EF496E38EDC8D05006_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2Composite__ctor_m1625F6C3829296D1C12B55EF496E38EDC8D05006_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78174));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78175));
	{
		// [InputControl(layout = "Axis")] public int up = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78176));
		__this->___up_1 = 0;
		// [InputControl(layout = "Axis")] public int down = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78177));
		__this->___down_2 = 0;
		// [InputControl(layout = "Axis")] public int left = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78178));
		__this->___left_3 = 0;
		// [InputControl(layout = "Axis")] public int right = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78179));
		__this->___right_4 = 0;
		// public bool normalize = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78180));
		__this->___normalize_5 = (bool)1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78181));
		InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545(__this, InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78181));
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
// UnityEngine.Vector3 UnityEngine.InputSystem.Composites.Vector3Composite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Composite_ReadValue_m6D1BA73F518C68CDF4AEDAF1A48BA2F7ABF59AE1 (Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Composite_ReadValue_m6D1BA73F518C68CDF4AEDAF1A48BA2F7ABF59AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_context));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), (&V_8), (&V_9), (&V_10), (&V_11), (&V_12), (&V_13), (&V_14));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3Composite_ReadValue_m6D1BA73F518C68CDF4AEDAF1A48BA2F7ABF59AE1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78182));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78183));
	float G_B5_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B17_0 = 0.0f;
	float G_B20_0 = 0.0f;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78184));
		// if (mode == Mode.Analog)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78185));
		int32_t L_0 = __this->___mode_7;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78186));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0078;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78187));
		// var upValue = context.ReadValue<float>(up);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78188));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_2 = ___0_context;
		int32_t L_3 = __this->___up_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78189));
		float L_4;
		L_4 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_2, L_3, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78189));
		V_1 = L_4;
		// var downValue = context.ReadValue<float>(down);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78190));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_5 = ___0_context;
		int32_t L_6 = __this->___down_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78191));
		float L_7;
		L_7 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_5, L_6, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78191));
		V_2 = L_7;
		// var leftValue = context.ReadValue<float>(left);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78192));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_8 = ___0_context;
		int32_t L_9 = __this->___left_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78193));
		float L_10;
		L_10 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_8, L_9, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78193));
		V_3 = L_10;
		// var rightValue = context.ReadValue<float>(right);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78194));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_11 = ___0_context;
		int32_t L_12 = __this->___right_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78195));
		float L_13;
		L_13 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_11, L_12, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78195));
		V_4 = L_13;
		// var forwardValue = context.ReadValue<float>(forward);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78196));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_14 = ___0_context;
		int32_t L_15 = __this->___forward_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78197));
		float L_16;
		L_16 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_14, L_15, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78197));
		V_5 = L_16;
		// var backwardValue = context.ReadValue<float>(backward);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78198));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_17 = ___0_context;
		int32_t L_18 = __this->___backward_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78199));
		float L_19;
		L_19 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_17, L_18, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78199));
		V_6 = L_19;
		// return new Vector3(rightValue - leftValue, upValue - downValue, forwardValue - backwardValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78200));
		float L_20 = V_4;
		float L_21 = V_3;
		float L_22 = V_1;
		float L_23 = V_2;
		float L_24 = V_5;
		float L_25 = V_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78201));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), ((float)il2cpp_codegen_subtract(L_20, L_21)), ((float)il2cpp_codegen_subtract(L_22, L_23)), ((float)il2cpp_codegen_subtract(L_24, L_25)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78201));
		V_7 = L_26;
		goto IL_0155;
	}

IL_0078:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78202));
		// var upValue = context.ReadValueAsButton(up) ? 1f : 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78203));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_27 = ___0_context;
		int32_t L_28 = __this->___up_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78204));
		bool L_29;
		L_29 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_27, L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78204));
		if (L_29)
		{
			goto IL_008e;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_0093;
	}

IL_008e:
	{
		G_B5_0 = (1.0f);
	}

IL_0093:
	{
		V_8 = G_B5_0;
		// var downValue = context.ReadValueAsButton(down) ? -1f : 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78205));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_30 = ___0_context;
		int32_t L_31 = __this->___down_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78206));
		bool L_32;
		L_32 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_30, L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78206));
		if (L_32)
		{
			goto IL_00aa;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_00af;
	}

IL_00aa:
	{
		G_B8_0 = (-1.0f);
	}

IL_00af:
	{
		V_9 = G_B8_0;
		// var leftValue = context.ReadValueAsButton(left) ? -1f : 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78207));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_33 = ___0_context;
		int32_t L_34 = __this->___left_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78208));
		bool L_35;
		L_35 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_33, L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78208));
		if (L_35)
		{
			goto IL_00c6;
		}
	}
	{
		G_B11_0 = (0.0f);
		goto IL_00cb;
	}

IL_00c6:
	{
		G_B11_0 = (-1.0f);
	}

IL_00cb:
	{
		V_10 = G_B11_0;
		// var rightValue = context.ReadValueAsButton(right) ? 1f : 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78209));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_36 = ___0_context;
		int32_t L_37 = __this->___right_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78210));
		bool L_38;
		L_38 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_36, L_37, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78210));
		if (L_38)
		{
			goto IL_00e2;
		}
	}
	{
		G_B14_0 = (0.0f);
		goto IL_00e7;
	}

IL_00e2:
	{
		G_B14_0 = (1.0f);
	}

IL_00e7:
	{
		V_11 = G_B14_0;
		// var forwardValue = context.ReadValueAsButton(forward) ? 1f : 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78211));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_39 = ___0_context;
		int32_t L_40 = __this->___forward_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78212));
		bool L_41;
		L_41 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_39, L_40, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78212));
		if (L_41)
		{
			goto IL_00fe;
		}
	}
	{
		G_B17_0 = (0.0f);
		goto IL_0103;
	}

IL_00fe:
	{
		G_B17_0 = (1.0f);
	}

IL_0103:
	{
		V_12 = G_B17_0;
		// var backwardValue = context.ReadValueAsButton(backward) ? -1f : 0f;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78213));
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_42 = ___0_context;
		int32_t L_43 = __this->___backward_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78214));
		bool L_44;
		L_44 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_42, L_43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78214));
		if (L_44)
		{
			goto IL_011a;
		}
	}
	{
		G_B20_0 = (0.0f);
		goto IL_011f;
	}

IL_011a:
	{
		G_B20_0 = (-1.0f);
	}

IL_011f:
	{
		V_13 = G_B20_0;
		// var vector = new Vector3(leftValue + rightValue, upValue + downValue, forwardValue + backwardValue);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78215));
		float L_45 = V_10;
		float L_46 = V_11;
		float L_47 = V_8;
		float L_48 = V_9;
		float L_49 = V_12;
		float L_50 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78216));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_14), ((float)il2cpp_codegen_add(L_45, L_46)), ((float)il2cpp_codegen_add(L_47, L_48)), ((float)il2cpp_codegen_add(L_49, L_50)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78216));
		// if (mode == Mode.DigitalNormalized)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78217));
		int32_t L_51 = __this->___mode_7;
		V_15 = (bool)((((int32_t)L_51) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78218));
		bool L_52 = V_15;
		if (!L_52)
		{
			goto IL_014f;
		}
	}
	{
		// vector = vector.normalized;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78219));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78220));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78220));
		V_14 = L_53;
	}

IL_014f:
	{
		// return vector;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78221));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_14;
		V_7 = L_54;
		goto IL_0155;
	}

IL_0155:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78222));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_7;
		return L_55;
	}
}
// System.Void UnityEngine.InputSystem.Composites.Vector3Composite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Composite__ctor_m7411C64277DE74720952DC246F08B6970AB6F5DD (Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Composite__ctor_m7411C64277DE74720952DC246F08B6970AB6F5DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3Composite__ctor_m7411C64277DE74720952DC246F08B6970AB6F5DD_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78223));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78224));
	{
		// public Mode mode = Mode.Analog;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78225));
		__this->___mode_7 = 0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78226));
		InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789(__this, InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 78226));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 14037));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 14038));
	{
		// public int part { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 14039));
		int32_t L_0 = __this->___U3CpartU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 14043));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 14044));
	{
		// public InputControl control { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 14045));
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___U3CcontrolU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6577));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6578));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6579));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6580));
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6581));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6581));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6582));
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y), (&___2_z));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7345));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7346));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7347));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7348));
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7349));
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7350));
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7351));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7399));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7400));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7401));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7402));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7403));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7403));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7404));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7387));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7388));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7389));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7390));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7391));
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7391));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7392));
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7393));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7394));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7395));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7395));
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7396));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7397));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7397));
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7398));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_vector));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7434));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7435));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7436));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7437));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7438));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7438));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7439));
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_d));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7539));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7540));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7541));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7542));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7543));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7543));
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7544));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7469));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7470));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7471));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7472));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7473));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
