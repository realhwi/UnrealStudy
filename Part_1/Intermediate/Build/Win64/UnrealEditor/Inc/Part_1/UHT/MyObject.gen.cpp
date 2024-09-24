// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Part_1/MyObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PART_1_API UClass* Z_Construct_UClass_UMyObject();
PART_1_API UClass* Z_Construct_UClass_UMyObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Part_1();
// End Cross Module References

// Begin Class UMyObject
void UMyObject::StaticRegisterNativesUMyObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyObject);
UClass* Z_Construct_UClass_UMyObject_NoRegister()
{
	return UMyObject::StaticClass();
}
struct Z_Construct_UClass_UMyObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyObject.h" },
		{ "ModuleRelativePath", "MyObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Part_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyObject_Statics::ClassParams = {
	&UMyObject::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyObject()
{
	if (!Z_Registration_Info_UClass_UMyObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyObject.OuterSingleton, Z_Construct_UClass_UMyObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyObject.OuterSingleton;
}
template<> PART_1_API UClass* StaticClass<UMyObject>()
{
	return UMyObject::StaticClass();
}
UMyObject::UMyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyObject);
UMyObject::~UMyObject() {}
// End Class UMyObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_MyObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyObject, UMyObject::StaticClass, TEXT("UMyObject"), &Z_Registration_Info_UClass_UMyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyObject), 1888044830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_MyObject_h_2423707323(TEXT("/Script/Part_1"),
	Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_MyObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_MyObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
