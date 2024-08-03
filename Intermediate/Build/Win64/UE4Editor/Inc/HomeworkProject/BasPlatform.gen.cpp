// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeworkProject/Actors/Environment/BasPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasPlatform() {}
// Cross Module References
	HOMEWORKPROJECT_API UEnum* Z_Construct_UEnum_HomeworkProject_EPlatBehavior();
	UPackage* Z_Construct_UPackage__Script_HomeworkProject();
	HOMEWORKPROJECT_API UClass* Z_Construct_UClass_ABasPlatform_NoRegister();
	HOMEWORKPROJECT_API UClass* Z_Construct_UClass_ABasPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	HOMEWORKPROJECT_API UClass* Z_Construct_UClass_APlatformTrigger_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EPlatBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HomeworkProject_EPlatBehavior, Z_Construct_UPackage__Script_HomeworkProject(), TEXT("EPlatBehavior"));
		}
		return Singleton;
	}
	template<> HOMEWORKPROJECT_API UEnum* StaticEnum<EPlatBehavior>()
	{
		return EPlatBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlatBehavior(EPlatBehavior_StaticEnum, TEXT("/Script/HomeworkProject"), TEXT("EPlatBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HomeworkProject_EPlatBehavior_Hash() { return 2283008119U; }
	UEnum* Z_Construct_UEnum_HomeworkProject_EPlatBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HomeworkProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlatBehavior"), 0, Get_Z_Construct_UEnum_HomeworkProject_EPlatBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlatBehavior::OnDemand", (int64)EPlatBehavior::OnDemand },
				{ "EPlatBehavior::Loop", (int64)EPlatBehavior::Loop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Loop.Name", "EPlatBehavior::Loop" },
				{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
				{ "OnDemand.Name", "EPlatBehavior::OnDemand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HomeworkProject,
				nullptr,
				"EPlatBehavior",
				"EPlatBehavior",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ABasPlatform::execOnPlatfromEndReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlatfromEndReached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasPlatform::execTickPlatformTimeline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickPlatformTimeline(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasPlatform::execOnPlatformTriggerActivated)
	{
		P_GET_UBOOL(Z_Param_bIsActivated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlatformTriggerActivated(Z_Param_bIsActivated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasPlatform::execMovePlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovePlatform();
		P_NATIVE_END;
	}
	void ABasPlatform::StaticRegisterNativesABasPlatform()
	{
		UClass* Class = ABasPlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovePlatform", &ABasPlatform::execMovePlatform },
			{ "OnPlatformTriggerActivated", &ABasPlatform::execOnPlatformTriggerActivated },
			{ "OnPlatfromEndReached", &ABasPlatform::execOnPlatfromEndReached },
			{ "TickPlatformTimeline", &ABasPlatform::execTickPlatformTimeline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasPlatform_MovePlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasPlatform_MovePlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasPlatform_MovePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasPlatform, nullptr, "MovePlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasPlatform_MovePlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasPlatform_MovePlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasPlatform_MovePlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasPlatform_MovePlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics
	{
		struct BasPlatform_eventOnPlatformTriggerActivated_Parms
		{
			bool bIsActivated;
		};
		static void NewProp_bIsActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::NewProp_bIsActivated_SetBit(void* Obj)
	{
		((BasPlatform_eventOnPlatformTriggerActivated_Parms*)Obj)->bIsActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::NewProp_bIsActivated = { "bIsActivated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BasPlatform_eventOnPlatformTriggerActivated_Parms), &Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::NewProp_bIsActivated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::NewProp_bIsActivated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasPlatform, nullptr, "OnPlatformTriggerActivated", nullptr, nullptr, sizeof(BasPlatform_eventOnPlatformTriggerActivated_Parms), Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasPlatform_OnPlatfromEndReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasPlatform_OnPlatfromEndReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasPlatform_OnPlatfromEndReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasPlatform, nullptr, "OnPlatfromEndReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasPlatform_OnPlatfromEndReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasPlatform_OnPlatfromEndReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasPlatform_OnPlatfromEndReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasPlatform_OnPlatfromEndReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics
	{
		struct BasPlatform_eventTickPlatformTimeline_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BasPlatform_eventTickPlatformTimeline_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasPlatform, nullptr, "TickPlatformTimeline", nullptr, nullptr, sizeof(BasPlatform_eventTickPlatformTimeline_Parms), Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasPlatform_NoRegister()
	{
		return ABasPlatform::StaticClass();
	}
	struct Z_Construct_UClass_ABasPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPlatformLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPlatformLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlatformBehavior;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeworkProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasPlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasPlatform_MovePlatform, "MovePlatform" }, // 4252920300
		{ &Z_Construct_UFunction_ABasPlatform_OnPlatformTriggerActivated, "OnPlatformTriggerActivated" }, // 2783028232
		{ &Z_Construct_UFunction_ABasPlatform_OnPlatfromEndReached, "OnPlatfromEndReached" }, // 342998673
		{ &Z_Construct_UFunction_ABasPlatform_TickPlatformTimeline, "TickPlatformTimeline" }, // 1001080781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Environment/BasPlatform.h" },
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "Platform movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasPlatform, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformTrigger_MetaData[] = {
		{ "Category", "Platform movement" },
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformTrigger = { "PlatformTrigger", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasPlatform, PlatformTrigger), Z_Construct_UClass_APlatformTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasPlatform_Statics::NewProp_MovementCurve_MetaData[] = {
		{ "Category", "Platform movement" },
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasPlatform_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasPlatform, MovementCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasPlatform_Statics::NewProp_MovementCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasPlatform_Statics::NewProp_MovementCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasPlatform_Statics::NewProp_EndPlatformLocation_MetaData[] = {
		{ "Category", "Platform movement" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasPlatform_Statics::NewProp_EndPlatformLocation = { "EndPlatformLocation", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasPlatform, EndPlatformLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABasPlatform_Statics::NewProp_EndPlatformLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasPlatform_Statics::NewProp_EndPlatformLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasPlatform_Statics::NewProp_ReturnTime_MetaData[] = {
		{ "Category", "Platform movement" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasPlatform_Statics::NewProp_ReturnTime = { "ReturnTime", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasPlatform, ReturnTime), METADATA_PARAMS(Z_Construct_UClass_ABasPlatform_Statics::NewProp_ReturnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasPlatform_Statics::NewProp_ReturnTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformBehavior_MetaData[] = {
		{ "Category", "Platform movement" },
		{ "ModuleRelativePath", "Actors/Environment/BasPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformBehavior = { "PlatformBehavior", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasPlatform, PlatformBehavior), Z_Construct_UEnum_HomeworkProject_EPlatBehavior, METADATA_PARAMS(Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformBehavior_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasPlatform_Statics::NewProp_MovementCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasPlatform_Statics::NewProp_EndPlatformLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasPlatform_Statics::NewProp_ReturnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasPlatform_Statics::NewProp_PlatformBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasPlatform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasPlatform_Statics::ClassParams = {
		&ABasPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasPlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasPlatform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasPlatform, 3267030903);
	template<> HOMEWORKPROJECT_API UClass* StaticClass<ABasPlatform>()
	{
		return ABasPlatform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasPlatform(Z_Construct_UClass_ABasPlatform, &ABasPlatform::StaticClass, TEXT("/Script/HomeworkProject"), TEXT("ABasPlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasPlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
