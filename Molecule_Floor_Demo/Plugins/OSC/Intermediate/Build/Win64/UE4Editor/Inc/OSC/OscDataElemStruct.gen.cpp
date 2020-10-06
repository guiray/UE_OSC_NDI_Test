// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSC/Public/Common/OscDataElemStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscDataElemStruct() {}
// Cross Module References
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
class UScriptStruct* FOscDataElemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OSC_API uint32 Get_Z_Construct_UScriptStruct_FOscDataElemStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscDataElemStruct, Z_Construct_UPackage__Script_OSC(), TEXT("OscDataElemStruct"), sizeof(FOscDataElemStruct), Get_Z_Construct_UScriptStruct_FOscDataElemStruct_Hash());
	}
	return Singleton;
}
template<> OSC_API UScriptStruct* StaticStruct<FOscDataElemStruct>()
{
	return FOscDataElemStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOscDataElemStruct(FOscDataElemStruct::StaticStruct, TEXT("/Script/OSC"), TEXT("OscDataElemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OSC_StaticRegisterNativesFOscDataElemStruct
{
	FScriptStruct_OSC_StaticRegisterNativesFOscDataElemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OscDataElemStruct")),new UScriptStruct::TCppStructOps<FOscDataElemStruct>);
	}
} ScriptStruct_OSC_StaticRegisterNativesFOscDataElemStruct;
	struct Z_Construct_UScriptStruct_FOscDataElemStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscDataElemStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/OscDataElemStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOscDataElemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscDataElemStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscDataElemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
		nullptr,
		&NewStructOps,
		"OscDataElemStruct",
		sizeof(FOscDataElemStruct),
		alignof(FOscDataElemStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOscDataElemStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscDataElemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOscDataElemStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OSC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OscDataElemStruct"), sizeof(FOscDataElemStruct), Get_Z_Construct_UScriptStruct_FOscDataElemStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOscDataElemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOscDataElemStruct_Hash() { return 3891269729U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
