// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSC/Public/Common/OscMessageStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscMessageStruct() {}
// Cross Module References
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscMessageStruct();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
// End Cross Module References
class UScriptStruct* FOscMessageStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OSC_API uint32 Get_Z_Construct_UScriptStruct_FOscMessageStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscMessageStruct, Z_Construct_UPackage__Script_OSC(), TEXT("OscMessageStruct"), sizeof(FOscMessageStruct), Get_Z_Construct_UScriptStruct_FOscMessageStruct_Hash());
	}
	return Singleton;
}
template<> OSC_API UScriptStruct* StaticStruct<FOscMessageStruct>()
{
	return FOscMessageStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOscMessageStruct(FOscMessageStruct::StaticStruct, TEXT("/Script/OSC"), TEXT("OscMessageStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OSC_StaticRegisterNativesFOscMessageStruct
{
	FScriptStruct_OSC_StaticRegisterNativesFOscMessageStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OscMessageStruct")),new UScriptStruct::TCppStructOps<FOscMessageStruct>);
	}
} ScriptStruct_OSC_StaticRegisterNativesFOscMessageStruct;
	struct Z_Construct_UScriptStruct_FOscMessageStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscMessageStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Common/OscMessageStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscMessageStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "OscMessageStruct" },
		{ "ModuleRelativePath", "Public/Common/OscMessageStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOscMessageStruct, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Address_MetaData[] = {
		{ "Category", "OscMessageStruct" },
		{ "ModuleRelativePath", "Public/Common/OscMessageStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOscMessageStruct, Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOscMessageStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscMessageStruct_Statics::NewProp_Address,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscMessageStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
		nullptr,
		&NewStructOps,
		"OscMessageStruct",
		sizeof(FOscMessageStruct),
		alignof(FOscMessageStruct),
		Z_Construct_UScriptStruct_FOscMessageStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscMessageStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOscMessageStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscMessageStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOscMessageStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOscMessageStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OSC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OscMessageStruct"), sizeof(FOscMessageStruct), Get_Z_Construct_UScriptStruct_FOscMessageStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOscMessageStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOscMessageStruct_Hash() { return 2570295276U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
