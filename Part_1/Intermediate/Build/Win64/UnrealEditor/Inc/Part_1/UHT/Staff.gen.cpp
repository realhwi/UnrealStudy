// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Part_1/Staff.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaff() {}

// Begin Cross Module References
PART_1_API UClass* Z_Construct_UClass_UPerson();
PART_1_API UClass* Z_Construct_UClass_UStaff();
PART_1_API UClass* Z_Construct_UClass_UStaff_NoRegister();
UPackage* Z_Construct_UPackage__Script_Part_1();
// End Cross Module References

// Begin Class UStaff
void UStaff::StaticRegisterNativesUStaff()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaff);
UClass* Z_Construct_UClass_UStaff_NoRegister()
{
	return UStaff::StaticClass();
}
struct Z_Construct_UClass_UStaff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Staff.h" },
		{ "ModuleRelativePath", "Staff.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaff>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStaff_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPerson,
	(UObject* (*)())Z_Construct_UPackage__Script_Part_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaff_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaff_Statics::ClassParams = {
	&UStaff::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaff_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaff_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaff()
{
	if (!Z_Registration_Info_UClass_UStaff.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaff.OuterSingleton, Z_Construct_UClass_UStaff_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaff.OuterSingleton;
}
template<> PART_1_API UClass* StaticClass<UStaff>()
{
	return UStaff::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaff);
UStaff::~UStaff() {}
// End Class UStaff

// Begin Registration
struct Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Staff_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaff, UStaff::StaticClass, TEXT("UStaff"), &Z_Registration_Info_UClass_UStaff, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaff), 2326151363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Staff_h_1051804969(TEXT("/Script/Part_1"),
	Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Staff_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Staff_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
