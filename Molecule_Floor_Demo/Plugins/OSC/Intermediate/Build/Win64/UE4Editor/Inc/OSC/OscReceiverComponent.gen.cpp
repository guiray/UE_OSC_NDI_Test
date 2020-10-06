// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSC/Public/Receive/OscReceiverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscReceiverComponent() {}
// Cross Module References
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
	OSC_API UClass* Z_Construct_UClass_UOscReceiverComponent_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscReceiverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics
	{
		struct _Script_OSC_eventComponentOscReceivedSignature_Parms
		{
			FName Address;
			TArray<FOscDataElemStruct> Data;
			FString SenderIp;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp = { "SenderIp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OSC_eventComponentOscReceivedSignature_Parms, SenderIp), METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OSC_eventComponentOscReceivedSignature_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OSC_eventComponentOscReceivedSignature_Parms, Address), METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_SenderIp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// declare the OnOscReceived event type\n" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
		{ "ToolTip", "declare the OnOscReceived event type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OSC, nullptr, "ComponentOscReceivedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_OSC_eventComponentOscReceivedSignature_Parms), Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UOscReceiverComponent::StaticRegisterNativesUOscReceiverComponent()
	{
	}
	UClass* Z_Construct_UClass_UOscReceiverComponent_NoRegister()
	{
		return UOscReceiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOscReceiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOscReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOscReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddressFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOscReceiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscReceiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "OSC" },
		{ "IncludePath", "Receive/OscReceiverComponent.h" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived_MetaData[] = {
		{ "Category", "OSC" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived = { "OnOscReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOscReceiverComponent, OnOscReceived), Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter_MetaData[] = {
		{ "Category", "OSC" },
		{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter = { "AddressFilter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOscReceiverComponent, AddressFilter), METADATA_PARAMS(Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOscReceiverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_OnOscReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscReceiverComponent_Statics::NewProp_AddressFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOscReceiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOscReceiverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOscReceiverComponent_Statics::ClassParams = {
		&UOscReceiverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOscReceiverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOscReceiverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOscReceiverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOscReceiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOscReceiverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOscReceiverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOscReceiverComponent, 2585005818);
	template<> OSC_API UClass* StaticClass<UOscReceiverComponent>()
	{
		return UOscReceiverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscReceiverComponent(Z_Construct_UClass_UOscReceiverComponent, &UOscReceiverComponent::StaticClass, TEXT("/Script/OSC"), TEXT("UOscReceiverComponent"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
