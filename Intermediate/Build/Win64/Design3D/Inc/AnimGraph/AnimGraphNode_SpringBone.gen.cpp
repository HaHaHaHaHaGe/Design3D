// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_SpringBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SpringBone() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SpringBone_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SpringBone();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone();
// End Cross Module References
	void UAnimGraphNode_SpringBone::StaticRegisterNativesUAnimGraphNode_SpringBone()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_SpringBone_NoRegister()
	{
		return UAnimGraphNode_SpringBone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_SpringBone.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_SpringBone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_SpringBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_SpringBone, Node), Z_Construct_UScriptStruct_FAnimNode_SpringBone, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_SpringBone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::ClassParams = {
		&UAnimGraphNode_SpringBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_SpringBone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_SpringBone, 2018677488);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_SpringBone>()
	{
		return UAnimGraphNode_SpringBone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_SpringBone(Z_Construct_UClass_UAnimGraphNode_SpringBone, &UAnimGraphNode_SpringBone::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_SpringBone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_SpringBone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif