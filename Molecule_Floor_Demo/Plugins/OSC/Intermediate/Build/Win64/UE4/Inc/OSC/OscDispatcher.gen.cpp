// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSC/Private/Receive/OscDispatcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscDispatcher() {}
// Cross Module References
	OSC_API UClass* Z_Construct_UClass_UOscDispatcher_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscDispatcher();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	void UOscDispatcher::StaticRegisterNativesUOscDispatcher()
	{
	}
	UClass* Z_Construct_UClass_UOscDispatcher_NoRegister()
	{
		return UOscDispatcher::StaticClass();
	}
	struct Z_Construct_UClass_UOscDispatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOscDispatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscDispatcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// Singleton that dispatches the OSC messages to listeners.\n" },
		{ "IncludePath", "Receive/OscDispatcher.h" },
		{ "ModuleRelativePath", "Private/Receive/OscDispatcher.h" },
		{ "ToolTip", "Singleton that dispatches the OSC messages to listeners." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOscDispatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOscDispatcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOscDispatcher_Statics::ClassParams = {
		&UOscDispatcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOscDispatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOscDispatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOscDispatcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOscDispatcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOscDispatcher, 2975262942);
	template<> OSC_API UClass* StaticClass<UOscDispatcher>()
	{
		return UOscDispatcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscDispatcher(Z_Construct_UClass_UOscDispatcher, &UOscDispatcher::StaticClass, TEXT("/Script/OSC"), TEXT("UOscDispatcher"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
