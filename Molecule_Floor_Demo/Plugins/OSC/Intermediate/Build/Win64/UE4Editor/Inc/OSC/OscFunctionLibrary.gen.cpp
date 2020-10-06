// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSC/Public/Common/OscFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscFunctionLibrary() {}
// Cross Module References
	OSC_API UClass* Z_Construct_UClass_UOscFunctionLibrary_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscMessageStruct();
// End Cross Module References
	DEFINE_FUNCTION(UOscFunctionLibrary::execAddSendOscTarget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IpPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UOscFunctionLibrary::AddSendOscTarget(Z_Param_IpPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execSendOscBundle)
	{
		P_GET_TARRAY_REF(FOscMessageStruct,Z_Param_Out_Messages);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::SendOscBundle(Z_Param_Out_Messages,Z_Param_TargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execSendOsc)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Address);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_Data);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::SendOsc(Z_Param_Address,Z_Param_Out_Data,Z_Param_TargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execFromBlob)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromBlob(Z_Param_Out_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execFromString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromString(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execFromInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromInt(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execFromFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromFloat(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execFromBool)
	{
		P_GET_UBOOL(Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromBool(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execAsBlob)
	{
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UOscFunctionLibrary::AsBlob(Z_Param_Out_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execAsString)
	{
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UOscFunctionLibrary::AsString(Z_Param_Out_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execAsInt)
	{
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UOscFunctionLibrary::AsInt(Z_Param_Out_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execAsFloat)
	{
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UOscFunctionLibrary::AsFloat(Z_Param_Out_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execAsBool)
	{
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOscFunctionLibrary::AsBool(Z_Param_Out_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPushBlob)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PushBlob(Z_Param_Out_input,Z_Param_Out_Value,Z_Param_Out_output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPushString)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_PROPERTY(FNameProperty,Z_Param_Value);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PushString(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPushInt)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PushInt(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPushFloat)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PushFloat(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPushBool)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_UBOOL(Z_Param_Value);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PushBool(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPopBlob)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PopBlob(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPopString)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PopString(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPopInt)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PopInt(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPopFloat)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PopFloat(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOscFunctionLibrary::execPopBool)
	{
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input);
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOscFunctionLibrary::PopBool(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void UOscFunctionLibrary::StaticRegisterNativesUOscFunctionLibrary()
	{
		UClass* Class = UOscFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSendOscTarget", &UOscFunctionLibrary::execAddSendOscTarget },
			{ "AsBlob", &UOscFunctionLibrary::execAsBlob },
			{ "AsBool", &UOscFunctionLibrary::execAsBool },
			{ "AsFloat", &UOscFunctionLibrary::execAsFloat },
			{ "AsInt", &UOscFunctionLibrary::execAsInt },
			{ "AsString", &UOscFunctionLibrary::execAsString },
			{ "FromBlob", &UOscFunctionLibrary::execFromBlob },
			{ "FromBool", &UOscFunctionLibrary::execFromBool },
			{ "FromFloat", &UOscFunctionLibrary::execFromFloat },
			{ "FromInt", &UOscFunctionLibrary::execFromInt },
			{ "FromString", &UOscFunctionLibrary::execFromString },
			{ "PopBlob", &UOscFunctionLibrary::execPopBlob },
			{ "PopBool", &UOscFunctionLibrary::execPopBool },
			{ "PopFloat", &UOscFunctionLibrary::execPopFloat },
			{ "PopInt", &UOscFunctionLibrary::execPopInt },
			{ "PopString", &UOscFunctionLibrary::execPopString },
			{ "PushBlob", &UOscFunctionLibrary::execPushBlob },
			{ "PushBool", &UOscFunctionLibrary::execPushBool },
			{ "PushFloat", &UOscFunctionLibrary::execPushFloat },
			{ "PushInt", &UOscFunctionLibrary::execPushInt },
			{ "PushString", &UOscFunctionLibrary::execPushString },
			{ "SendOsc", &UOscFunctionLibrary::execSendOsc },
			{ "SendOscBundle", &UOscFunctionLibrary::execSendOscBundle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics
	{
		struct OscFunctionLibrary_eventAddSendOscTarget_Parms
		{
			FString IpPort;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpPort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAddSendOscTarget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::NewProp_IpPort = { "IpPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAddSendOscTarget_Parms, IpPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::NewProp_IpPort,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/**\n     *  @brief Add Ip:Port to the available OSC send targets.\n     *  @param IpPort \"ip:port\". e.g. \"192.168.0.1:7777\"\n     *  @return The created TargetIndex to pass to the SendOsc function.\n     *\n     *  Use this function to add target at runtime. Generally, it is best\n     *  to define your targets in the OSC plugin settings.\n     *\n     *  @see SendOsc\n     */" },
		{ "CPP_Default_IpPort", "127.0.0.1:8000" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "@brief Add Ip:Port to the available OSC send targets.\n@param IpPort \"ip:port\". e.g. \"192.168.0.1:7777\"\n@return The created TargetIndex to pass to the SendOsc function.\n\nUse this function to add target at runtime. Generally, it is best\nto define your targets in the OSC plugin settings.\n\n@see SendOsc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "AddSendOscTarget", nullptr, nullptr, sizeof(OscFunctionLibrary_eventAddSendOscTarget_Parms), Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics
	{
		struct OscFunctionLibrary_eventAsBlob_Parms
		{
			FOscDataElemStruct input;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAsBlob_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAsBlob_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Interpret an OSC argument as a blob.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Interpret an OSC argument as a blob." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "AsBlob", nullptr, nullptr, sizeof(OscFunctionLibrary_eventAsBlob_Parms), Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_AsBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics
	{
		struct OscFunctionLibrary_eventAsBool_Parms
		{
			FOscDataElemStruct input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OscFunctionLibrary_eventAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OscFunctionLibrary_eventAsBool_Parms), &Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAsBool_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Interpret an OSC argument as a boolean\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Interpret an OSC argument as a boolean" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "AsBool", nullptr, nullptr, sizeof(OscFunctionLibrary_eventAsBool_Parms), Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_AsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics
	{
		struct OscFunctionLibrary_eventAsFloat_Parms
		{
			FOscDataElemStruct input;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAsFloat_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Interpret an OSC argument as a floating point.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Interpret an OSC argument as a floating point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "AsFloat", nullptr, nullptr, sizeof(OscFunctionLibrary_eventAsFloat_Parms), Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_AsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics
	{
		struct OscFunctionLibrary_eventAsInt_Parms
		{
			FOscDataElemStruct input;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAsInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAsInt_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Interpret an OSC argument as a integer.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Interpret an OSC argument as a integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "AsInt", nullptr, nullptr, sizeof(OscFunctionLibrary_eventAsInt_Parms), Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_AsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics
	{
		struct OscFunctionLibrary_eventAsString_Parms
		{
			FOscDataElemStruct input;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventAsString_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Interpret an OSC argument as a string.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Interpret an OSC argument as a string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "AsString", nullptr, nullptr, sizeof(OscFunctionLibrary_eventAsString_Parms), Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics
	{
		struct OscFunctionLibrary_eventFromBlob_Parms
		{
			TArray<uint8> input;
			FOscDataElemStruct ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventFromBlob_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventFromBlob_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Create an OSC argument from a blob.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Create an OSC argument from a blob." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "FromBlob", nullptr, nullptr, sizeof(OscFunctionLibrary_eventFromBlob_Parms), Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_FromBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics
	{
		struct OscFunctionLibrary_eventFromBool_Parms
		{
			bool input;
			FOscDataElemStruct ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_input_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventFromBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::NewProp_input_SetBit(void* Obj)
	{
		((OscFunctionLibrary_eventFromBool_Parms*)Obj)->input = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OscFunctionLibrary_eventFromBool_Parms), &Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::NewProp_input_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Create an OSC argument from a boolean\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Create an OSC argument from a boolean" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "FromBool", nullptr, nullptr, sizeof(OscFunctionLibrary_eventFromBool_Parms), Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_FromBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics
	{
		struct OscFunctionLibrary_eventFromFloat_Parms
		{
			float input;
			FOscDataElemStruct ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventFromFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventFromFloat_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Create an OSC argument from a floating point.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Create an OSC argument from a floating point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "FromFloat", nullptr, nullptr, sizeof(OscFunctionLibrary_eventFromFloat_Parms), Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_FromFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics
	{
		struct OscFunctionLibrary_eventFromInt_Parms
		{
			int32 input;
			FOscDataElemStruct ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventFromInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventFromInt_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Create an OSC argument from a integer.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Create an OSC argument from a integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "FromInt", nullptr, nullptr, sizeof(OscFunctionLibrary_eventFromInt_Parms), Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_FromInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics
	{
		struct OscFunctionLibrary_eventFromString_Parms
		{
			FName input;
			FOscDataElemStruct ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventFromString_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Create an OSC argument from a string.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Create an OSC argument from a string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "FromString", nullptr, nullptr, sizeof(OscFunctionLibrary_eventFromString_Parms), Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_FromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics
	{
		struct OscFunctionLibrary_eventPopBlob_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			TArray<uint8> Value;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopBlob_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopBlob_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopBlob_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Get the next value from an OSC message as a blob.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Get the next value from an OSC message as a blob." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PopBlob", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPopBlob_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PopBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics
	{
		struct OscFunctionLibrary_eventPopBool_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((OscFunctionLibrary_eventPopBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OscFunctionLibrary_eventPopBool_Parms), &Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopBool_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopBool_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Get the next value from an OSC message as a boolean.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Get the next value from an OSC message as a boolean." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PopBool", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPopBool_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PopBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics
	{
		struct OscFunctionLibrary_eventPopFloat_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopFloat_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopFloat_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Get the next value from an OSC message as a floating point.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Get the next value from an OSC message as a floating point." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PopFloat", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPopFloat_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PopFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics
	{
		struct OscFunctionLibrary_eventPopInt_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopInt_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopInt_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Get the next value from an OSC message as a integer.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Get the next value from an OSC message as a integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PopInt", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPopInt_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PopInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics
	{
		struct OscFunctionLibrary_eventPopString_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			FName Value;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopString_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPopString_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/// Get the next value from an OSC message as a string.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Get the next value from an OSC message as a string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PopString", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPopString_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PopString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics
	{
		struct OscFunctionLibrary_eventPushBlob_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<uint8> Value;
			TArray<FOscDataElemStruct> output;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushBlob_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushBlob_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushBlob_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_Value_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "input" },
		{ "Category", "OSC" },
		{ "Comment", "/// Add a blob to an OSC message.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Add a blob to an OSC message." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PushBlob", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPushBlob_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushBlob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PushBlob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics
	{
		struct OscFunctionLibrary_eventPushBool_Parms
		{
			TArray<FOscDataElemStruct> input;
			bool Value;
			TArray<FOscDataElemStruct> output;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushBool_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((OscFunctionLibrary_eventPushBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OscFunctionLibrary_eventPushBool_Parms), &Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushBool_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "input" },
		{ "Category", "OSC" },
		{ "Comment", "/// Add a boolean value to an OSC message.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Add a boolean value to an OSC message." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PushBool", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPushBool_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PushBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics
	{
		struct OscFunctionLibrary_eventPushFloat_Parms
		{
			TArray<FOscDataElemStruct> input;
			float Value;
			TArray<FOscDataElemStruct> output;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushFloat_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushFloat_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "input" },
		{ "Category", "OSC" },
		{ "Comment", "/// Add a floating point value to an OSC message.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Add a floating point value to an OSC message." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PushFloat", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPushFloat_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PushFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics
	{
		struct OscFunctionLibrary_eventPushInt_Parms
		{
			TArray<FOscDataElemStruct> input;
			int32 Value;
			TArray<FOscDataElemStruct> output;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushInt_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushInt_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "input" },
		{ "Category", "OSC" },
		{ "Comment", "/// Add a integer value to an OSC message.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Add a integer value to an OSC message." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PushInt", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPushInt_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PushInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics
	{
		struct OscFunctionLibrary_eventPushString_Parms
		{
			TArray<FOscDataElemStruct> input;
			FName Value;
			TArray<FOscDataElemStruct> output;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_output = { "output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushString_Parms, output), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_output_Inner = { "output", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventPushString_Parms, input), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_input_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_input_Inner = { "input", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_output_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::NewProp_input_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "input" },
		{ "Category", "OSC" },
		{ "Comment", "/// Add a string value to an OSC message.\n" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "Add a string value to an OSC message." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "PushString", nullptr, nullptr, sizeof(OscFunctionLibrary_eventPushString_Parms), Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_PushString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics
	{
		struct OscFunctionLibrary_eventSendOsc_Parms
		{
			FName Address;
			TArray<FOscDataElemStruct> Data;
			int32 TargetIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventSendOsc_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventSendOsc_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventSendOsc_Parms, Address), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_TargetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Data" },
		{ "Category", "OSC" },
		{ "Comment", "/**\n     *  @brief Send an OSC message.\n     *  @param Address OSC address.\n     *  @param Data result of successive PushFloat/Int/String/etc.\n     *  @param TargetIndex index of the destination, -1 for all destinations. (SendTarget list of the plugin settings)\n     */" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "@brief Send an OSC message.\n@param Address OSC address.\n@param Data result of successive PushFloat/Int/String/etc.\n@param TargetIndex index of the destination, -1 for all destinations. (SendTarget list of the plugin settings)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "SendOsc", nullptr, nullptr, sizeof(OscFunctionLibrary_eventSendOsc_Parms), Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_SendOsc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_SendOsc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics
	{
		struct OscFunctionLibrary_eventSendOscBundle_Parms
		{
			TArray<FOscMessageStruct> Messages;
			int32 TargetIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Messages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventSendOscBundle_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::NewProp_Messages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscFunctionLibrary_eventSendOscBundle_Parms, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::NewProp_Messages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::NewProp_Messages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscMessageStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::NewProp_TargetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::NewProp_Messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::NewProp_Messages_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "Comment", "/**\n    *  @brief Send several OSC messages in an OSC bundle.\n    *  @param Messages of the bundle.\n    *  @param TargetIndex index of the destination, -1 for all destinations. (SendTarget list of the plugin settings)\n    */" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
		{ "ToolTip", "@brief Send several OSC messages in an OSC bundle.\n@param Messages of the bundle.\n@param TargetIndex index of the destination, -1 for all destinations. (SendTarget list of the plugin settings)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, nullptr, "SendOscBundle", nullptr, nullptr, sizeof(OscFunctionLibrary_eventSendOscBundle_Parms), Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOscFunctionLibrary_NoRegister()
	{
		return UOscFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOscFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOscFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOscFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget, "AddSendOscTarget" }, // 869133061
		{ &Z_Construct_UFunction_UOscFunctionLibrary_AsBlob, "AsBlob" }, // 1351258379
		{ &Z_Construct_UFunction_UOscFunctionLibrary_AsBool, "AsBool" }, // 1518580793
		{ &Z_Construct_UFunction_UOscFunctionLibrary_AsFloat, "AsFloat" }, // 4267305534
		{ &Z_Construct_UFunction_UOscFunctionLibrary_AsInt, "AsInt" }, // 2412683677
		{ &Z_Construct_UFunction_UOscFunctionLibrary_AsString, "AsString" }, // 3937000924
		{ &Z_Construct_UFunction_UOscFunctionLibrary_FromBlob, "FromBlob" }, // 4266422714
		{ &Z_Construct_UFunction_UOscFunctionLibrary_FromBool, "FromBool" }, // 295813846
		{ &Z_Construct_UFunction_UOscFunctionLibrary_FromFloat, "FromFloat" }, // 962287920
		{ &Z_Construct_UFunction_UOscFunctionLibrary_FromInt, "FromInt" }, // 1960797562
		{ &Z_Construct_UFunction_UOscFunctionLibrary_FromString, "FromString" }, // 363034768
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PopBlob, "PopBlob" }, // 4072366958
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PopBool, "PopBool" }, // 2218981542
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PopFloat, "PopFloat" }, // 2724616028
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PopInt, "PopInt" }, // 4132254897
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PopString, "PopString" }, // 1906518864
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PushBlob, "PushBlob" }, // 2619933233
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PushBool, "PushBool" }, // 3300257125
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PushFloat, "PushFloat" }, // 149682096
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PushInt, "PushInt" }, // 3646311164
		{ &Z_Construct_UFunction_UOscFunctionLibrary_PushString, "PushString" }, // 1554762041
		{ &Z_Construct_UFunction_UOscFunctionLibrary_SendOsc, "SendOsc" }, // 1410666948
		{ &Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle, "SendOscBundle" }, // 2895729990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Common/OscFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOscFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOscFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOscFunctionLibrary_Statics::ClassParams = {
		&UOscFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOscFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOscFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOscFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOscFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOscFunctionLibrary, 1440636131);
	template<> OSC_API UClass* StaticClass<UOscFunctionLibrary>()
	{
		return UOscFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscFunctionLibrary(Z_Construct_UClass_UOscFunctionLibrary, &UOscFunctionLibrary::StaticClass, TEXT("/Script/OSC"), TEXT("UOscFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOscFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
