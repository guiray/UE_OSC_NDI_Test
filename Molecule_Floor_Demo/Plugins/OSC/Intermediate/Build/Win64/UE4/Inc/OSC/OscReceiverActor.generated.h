// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOscDataElemStruct;
#ifdef OSC_OscReceiverActor_generated_h
#error "OscReceiverActor.generated.h already included, missing '#pragma once' in OscReceiverActor.h"
#endif
#define OSC_OscReceiverActor_generated_h

#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_SPARSE_DATA
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_RPC_WRAPPERS
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_EVENT_PARMS \
	struct OscReceiverActor_eventOnOscReceived_Parms \
	{ \
		FName Address; \
		TArray<FOscDataElemStruct> Data; \
		FString SenderIp; \
	};


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_CALLBACK_WRAPPERS
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOscReceiverActor(); \
	friend struct Z_Construct_UClass_AOscReceiverActor_Statics; \
public: \
	DECLARE_CLASS(AOscReceiverActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(AOscReceiverActor)


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOscReceiverActor(); \
	friend struct Z_Construct_UClass_AOscReceiverActor_Statics; \
public: \
	DECLARE_CLASS(AOscReceiverActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(AOscReceiverActor)


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOscReceiverActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOscReceiverActor) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOscReceiverActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOscReceiverActor(AOscReceiverActor&&); \
	NO_API AOscReceiverActor(const AOscReceiverActor&); \
public:


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOscReceiverActor(AOscReceiverActor&&); \
	NO_API AOscReceiverActor(const AOscReceiverActor&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOscReceiverActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOscReceiverActor)


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_9_PROLOG \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_EVENT_PARMS


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_SPARSE_DATA \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_RPC_WRAPPERS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_CALLBACK_WRAPPERS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_INCLASS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_SPARSE_DATA \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_CALLBACK_WRAPPERS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_INCLASS_NO_PURE_DECLS \
	Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSC_API UClass* StaticClass<class AOscReceiverActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Molecule_Floor_Demo_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
