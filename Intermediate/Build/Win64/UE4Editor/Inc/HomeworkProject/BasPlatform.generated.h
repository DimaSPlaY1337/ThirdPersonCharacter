// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMEWORKPROJECT_BasPlatform_generated_h
#error "BasPlatform.generated.h already included, missing '#pragma once' in BasPlatform.h"
#endif
#define HOMEWORKPROJECT_BasPlatform_generated_h

#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_SPARSE_DATA
#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlatfromEndReached); \
	DECLARE_FUNCTION(execTickPlatformTimeline); \
	DECLARE_FUNCTION(execOnPlatformTriggerActivated); \
	DECLARE_FUNCTION(execMovePlatform);


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlatfromEndReached); \
	DECLARE_FUNCTION(execTickPlatformTimeline); \
	DECLARE_FUNCTION(execOnPlatformTriggerActivated); \
	DECLARE_FUNCTION(execMovePlatform);


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasPlatform(); \
	friend struct Z_Construct_UClass_ABasPlatform_Statics; \
public: \
	DECLARE_CLASS(ABasPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeworkProject"), NO_API) \
	DECLARE_SERIALIZER(ABasPlatform)


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABasPlatform(); \
	friend struct Z_Construct_UClass_ABasPlatform_Statics; \
public: \
	DECLARE_CLASS(ABasPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeworkProject"), NO_API) \
	DECLARE_SERIALIZER(ABasPlatform)


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasPlatform(ABasPlatform&&); \
	NO_API ABasPlatform(const ABasPlatform&); \
public:


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasPlatform(ABasPlatform&&); \
	NO_API ABasPlatform(const ABasPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasPlatform)


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlatformMesh() { return STRUCT_OFFSET(ABasPlatform, PlatformMesh); } \
	FORCEINLINE static uint32 __PPO__PlatformTrigger() { return STRUCT_OFFSET(ABasPlatform, PlatformTrigger); } \
	FORCEINLINE static uint32 __PPO__MovementCurve() { return STRUCT_OFFSET(ABasPlatform, MovementCurve); } \
	FORCEINLINE static uint32 __PPO__EndPlatformLocation() { return STRUCT_OFFSET(ABasPlatform, EndPlatformLocation); } \
	FORCEINLINE static uint32 __PPO__ReturnTime() { return STRUCT_OFFSET(ABasPlatform, ReturnTime); } \
	FORCEINLINE static uint32 __PPO__PlatformBehavior() { return STRUCT_OFFSET(ABasPlatform, PlatformBehavior); }


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_19_PROLOG
#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_SPARSE_DATA \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_RPC_WRAPPERS \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_INCLASS \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_PRIVATE_PROPERTY_OFFSET \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_SPARSE_DATA \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_INCLASS_NO_PURE_DECLS \
	ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMEWORKPROJECT_API UClass* StaticClass<class ABasPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPersonCharacter_Source_HomeworkProject_Actors_Environment_BasPlatform_h


#define FOREACH_ENUM_EPLATBEHAVIOR(op) \
	op(EPlatBehavior::OnDemand) \
	op(EPlatBehavior::Loop) 

enum class EPlatBehavior : uint8;
template<> HOMEWORKPROJECT_API UEnum* StaticEnum<EPlatBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
