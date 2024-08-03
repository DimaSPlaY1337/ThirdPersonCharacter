// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef HOMEWORKPROJECT_PlatformTrigger_generated_h
#error "PlatformTrigger.generated.h already included, missing '#pragma once' in PlatformTrigger.h"
#endif
#define HOMEWORKPROJECT_PlatformTrigger_generated_h

#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_9_DELEGATE \
struct _Script_HomeworkProject_eventOnTriggerActivated_Parms \
{ \
	bool bIsActivated; \
}; \
static inline void FOnTriggerActivated_DelegateWrapper(const FMulticastScriptDelegate& OnTriggerActivated, bool bIsActivated) \
{ \
	_Script_HomeworkProject_eventOnTriggerActivated_Parms Parms; \
	Parms.bIsActivated=bIsActivated ? true : false; \
	OnTriggerActivated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_SPARSE_DATA
#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerOverlapEnd); \
	DECLARE_FUNCTION(execOnTriggerOverlapBegin);


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerOverlapEnd); \
	DECLARE_FUNCTION(execOnTriggerOverlapBegin);


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformTrigger(); \
	friend struct Z_Construct_UClass_APlatformTrigger_Statics; \
public: \
	DECLARE_CLASS(APlatformTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeworkProject"), NO_API) \
	DECLARE_SERIALIZER(APlatformTrigger)


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformTrigger(); \
	friend struct Z_Construct_UClass_APlatformTrigger_Statics; \
public: \
	DECLARE_CLASS(APlatformTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeworkProject"), NO_API) \
	DECLARE_SERIALIZER(APlatformTrigger)


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformTrigger(APlatformTrigger&&); \
	NO_API APlatformTrigger(const APlatformTrigger&); \
public:


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformTrigger(APlatformTrigger&&); \
	NO_API APlatformTrigger(const APlatformTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformTrigger)


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(APlatformTrigger, TriggerBox); }


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_13_PROLOG
#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_SPARSE_DATA \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_RPC_WRAPPERS \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_INCLASS \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_SPARSE_DATA \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_INCLASS_NO_PURE_DECLS \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMEWORKPROJECT_API UClass* StaticClass<class APlatformTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_PlatformTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
