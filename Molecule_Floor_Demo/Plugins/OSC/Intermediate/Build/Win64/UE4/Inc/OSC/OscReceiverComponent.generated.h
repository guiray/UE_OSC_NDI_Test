// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOscDataElemStruct;
#ifdef OSC_OscReceiverComponent_generated_h
#error "OscReceiverComponent.generated.h already included, missing '#pragma once' in OscReceiverComponent.h"
#endif
#define OSC_OscReceiverComponent_generated_h

#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_10_DELEGATE \
struct _Script_OSC_eventComponentOscReceivedSignature_Parms \
{ \
	FName Address; \
	TArray<FOscDataElemStruct> Data; \
	FString SenderIp; \
}; \
static inline void FComponentOscReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentOscReceivedSignature, FName const& Address, TArray<FOscDataElemStruct> const& Data, const FString& SenderIp) \
{ \
	_Script_OSC_eventComponentOscReceivedSignature_Parms Parms; \
	Parms.Address=Address; \
	Parms.Data=Data; \
	Parms.SenderIp=SenderIp; \
	ComponentOscReceivedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_SPARSE_DATA
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_RPC_WRAPPERS
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOscReceiverComponent(); \
	friend struct Z_Construct_UClass_UOscReceiverComponent_Statics; \
public: \
	DECLARE_CLASS(UOscReceiverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOscReceiverComponent)


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOscReceiverComponent(); \
	friend struct Z_Construct_UClass_UOscReceiverComponent_Statics; \
public: \
	DECLARE_CLASS(UOscReceiverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOscReceiverComponent)


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOscReceiverComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOscReceiverComponent) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOscReceiverComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOscReceiverComponent(UOscReceiverComponent&&); \
	NO_API UOscReceiverComponent(const UOscReceiverComponent&); \
public:


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOscReceiverComponent(UOscReceiverComponent&&); \
	NO_API UOscReceiverComponent(const UOscReceiverComponent&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOscReceiverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOscReceiverComponent)


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_13_PROLOG
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_SPARSE_DATA \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_RPC_WRAPPERS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_INCLASS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_SPARSE_DATA \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_INCLASS_NO_PURE_DECLS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSC_API UClass* StaticClass<class UOscReceiverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
