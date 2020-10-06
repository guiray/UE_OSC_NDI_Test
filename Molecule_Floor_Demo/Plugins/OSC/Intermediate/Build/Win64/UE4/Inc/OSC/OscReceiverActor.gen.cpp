// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSC/Public/Receive/OscReceiverActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscReceiverActor() {}
// Cross Module References
	OSC_API UClass* Z_Construct_UClass_AOscReceiverActor_NoRegister();
	OSC_API UClass* Z_Construct_UClass_AOscReceiverActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
// End Cross Module References
	static FName NAME_AOscReceiverActor_OnOscReceived = FName(TEXT("OnOscReceived"));
	void AOscReceiverActor::OnOscReceived(FName const& Address, TArray<FOscDataElemStruct> const& Data, const FString& SenderIp)
	{
		OscReceiverActor_eventOnOscReceived_Parms Parms;
		Parms.Address=Address;
		Parms.Data=Data;
		Parms.SenderIp=SenderIp;
		ProcessEvent(FindFunctionChecked(NAME_AOscReceiverActor_OnOscReceived),&Parms);
	}
	void AOscReceiverActor::StaticRegisterNativesAOscReceiverActor()
	{
	}
	struct Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderIp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderIp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_SenderIp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_SenderIp = { "SenderIp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscReceiverActor_eventOnOscReceived_Parms, SenderIp), METADATA_PARAMS(Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_SenderIp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_SenderIp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscReceiverActor_eventOnOscReceived_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OscReceiverActor_eventOnOscReceived_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_SenderIp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "OSC" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOscReceiverActor, nullptr, "OnOscReceived", nullptr, nullptr, sizeof(OscReceiverActor_eventOnOscReceived_Parms), Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOscReceiverActor_OnOscReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOscReceiverActor_OnOscReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOscReceiverActor_NoRegister()
	{
		return AOscReceiverActor::StaticClass();
	}
	struct Z_Construct_UClass_AOscReceiverActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddressFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOscReceiverActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOscReceiverActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOscReceiverActor_OnOscReceived, "OnOscReceived" }, // 2755016938
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOscReceiverActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "OSC" },
		{ "IncludePath", "Receive/OscReceiverActor.h" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOscReceiverActor_Statics::NewProp_AddressFilter_MetaData[] = {
		{ "Category", "OSC" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOscReceiverActor_Statics::NewProp_AddressFilter = { "AddressFilter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOscReceiverActor, AddressFilter), METADATA_PARAMS(Z_Construct_UClass_AOscReceiverActor_Statics::NewProp_AddressFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOscReceiverActor_Statics::NewProp_AddressFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOscReceiverActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOscReceiverActor_Statics::NewProp_AddressFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOscReceiverActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOscReceiverActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOscReceiverActor_Statics::ClassParams = {
		&AOscReceiverActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOscReceiverActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOscReceiverActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOscReceiverActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOscReceiverActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOscReceiverActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOscReceiverActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOscReceiverActor, 3223330266);
	template<> OSC_API UClass* StaticClass<AOscReceiverActor>()
	{
		return AOscReceiverActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOscReceiverActor(Z_Construct_UClass_AOscReceiverActor, &AOscReceiverActor::StaticClass, TEXT("/Script/OSC"), TEXT("AOscReceiverActor"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
