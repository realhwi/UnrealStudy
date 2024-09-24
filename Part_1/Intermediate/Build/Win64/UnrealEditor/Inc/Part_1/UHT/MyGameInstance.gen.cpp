// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Part_1/MyGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PART_1_API UClass* Z_Construct_UClass_UMyGameInstance();
PART_1_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Part_1();
// End Cross Module References

// Begin Class UMyGameInstance
void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstance);
UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
{
	return UMyGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SchoolName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4\xeb\xa0\x87\xea\xb2\x8c \xeb\xa7\xa4\xed\x81\xac\xeb\xa1\x9c\xeb\xa5\xbc \xec\x84\xa0\xec\x96\xb8\xed\x95\xb4\xec\x95\xbc \xed\x95\xb4\xeb\x8b\xb9 \xeb\xac\xb8\xec\x9e\x90\xec\x97\xb4\xec\x9d\x84 \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x97\x94\xec\xa7\x84\xec\x9d\xb4 \xea\xb4\x80\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c.\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\xa0\x87\xea\xb2\x8c \xeb\xa7\xa4\xed\x81\xac\xeb\xa1\x9c\xeb\xa5\xbc \xec\x84\xa0\xec\x96\xb8\xed\x95\xb4\xec\x95\xbc \xed\x95\xb4\xeb\x8b\xb9 \xeb\xac\xb8\xec\x9e\x90\xec\x97\xb4\xec\x9d\x84 \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x97\x94\xec\xa7\x84\xec\x9d\xb4 \xea\xb4\x80\xeb\xa6\xac\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SchoolName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_SchoolName = { "SchoolName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, SchoolName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SchoolName_MetaData), NewProp_SchoolName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_SchoolName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Part_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
	&UMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
}
template<> PART_1_API UClass* StaticClass<UMyGameInstance>()
{
	return UMyGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
UMyGameInstance::~UMyGameInstance() {}
// End Class UMyGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_MyGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 2490941486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_MyGameInstance_h_3316418719(TEXT("/Script/Part_1"),
	Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_MyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_MyGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
