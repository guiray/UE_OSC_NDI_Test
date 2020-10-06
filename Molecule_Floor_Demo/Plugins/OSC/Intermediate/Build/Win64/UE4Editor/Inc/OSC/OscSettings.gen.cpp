// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSC/Private/OscSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscSettings() {}
// Cross Module References
	OSC_API UClass* Z_Construct_UClass_UOscSettings_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	void UOscSettings::StaticRegisterNativesUOscSettings()
	{
	}
	UClass* Z_Construct_UClass_UOscSettings_NoRegister()
	{
		return UOscSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOscSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MulticastLoopback_MetaData[];
#endif
		static void NewProp_MulticastLoopback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MulticastLoopback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SendTargets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SendTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiveFrom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOscSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OscSettings.h" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_SetBit(void* Obj)
	{
		((UOscSettings*)Obj)->MulticastLoopback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback = { "MulticastLoopback", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOscSettings), &Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n     *  List of the messages treated as inputs.\n     *\n     *  Every entry adds a key in the input mapping project setting.\n     *  e.g. \"/position/x\" -> \"OSC_position_x\"\n     */" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
		{ "ToolTip", "List of the messages treated as inputs.\n\nEvery entry adds a key in the input mapping project setting.\ne.g. \"/position/x\" -> \"OSC_position_x\"" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOscSettings, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_MetaData[] = {
		{ "Category", "Send" },
		{ "Comment", "/**\n     *  Specify the addresses (ip:port) to send messages to.\n     *\n     *  Addresses can also be added at runtime with the AddSendOscTarget function.\n     */" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
		{ "ToolTip", "Specify the addresses (ip:port) to send messages to.\n\nAddresses can also be added at runtime with the AddSendOscTarget function." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets = { "SendTargets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOscSettings, SendTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_Inner = { "SendTargets", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom_MetaData[] = {
		{ "Category", "Receive" },
		{ "Comment", "/**\n     *  Specify the [address:]port to listen to.\n     *\n     *  e.g.\n     *  - \"8000\" listen to messages from any sender on port 8000.  [default]\n     *  - \"224.0.0.100:8000\" listen multi-cast messages of group 224.0.0.100 on port 8000.\n     *  - \"192.168.0.1:8000\" listen messages addressed specifically to 192.168.0.1 on port 8000, useful if there are several addresses for this machine.\n     */" },
		{ "ModuleRelativePath", "Private/OscSettings.h" },
		{ "ToolTip", "Specify the [address:]port to listen to.\n\ne.g.\n- \"8000\" listen to messages from any sender on port 8000.  [default]\n- \"224.0.0.100:8000\" listen multi-cast messages of group 224.0.0.100 on port 8000.\n- \"192.168.0.1:8000\" listen messages addressed specifically to 192.168.0.1 on port 8000, useful if there are several addresses for this machine." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom = { "ReceiveFrom", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOscSettings, ReceiveFrom), METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOscSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_MulticastLoopback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_Inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_SendTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscSettings_Statics::NewProp_ReceiveFrom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOscSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOscSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOscSettings_Statics::ClassParams = {
		&UOscSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOscSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOscSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOscSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOscSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOscSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOscSettings, 2379092292);
	template<> OSC_API UClass* StaticClass<UOscSettings>()
	{
		return UOscSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscSettings(Z_Construct_UClass_UOscSettings, &UOscSettings::StaticClass, TEXT("/Script/OSC"), TEXT("UOscSettings"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
