// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Part_1/Student.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudent() {}

// Begin Cross Module References
PART_1_API UClass* Z_Construct_UClass_ULessonInterface_NoRegister();
PART_1_API UClass* Z_Construct_UClass_UPerson();
PART_1_API UClass* Z_Construct_UClass_UStudent();
PART_1_API UClass* Z_Construct_UClass_UStudent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Part_1();
// End Cross Module References

// Begin Class UStudent
void UStudent::StaticRegisterNativesUStudent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStudent);
UClass* Z_Construct_UClass_UStudent_NoRegister()
{
	return UStudent::StaticClass();
}
struct Z_Construct_UClass_UStudent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Student.h" },
		{ "ModuleRelativePath", "Student.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStudent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStudent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPerson,
	(UObject* (*)())Z_Construct_UPackage__Script_Part_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStudent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULessonInterface_NoRegister, (int32)VTABLE_OFFSET(UStudent, ILessonInterface), false },  // 4000020805
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStudent_Statics::ClassParams = {
	&UStudent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStudent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStudent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStudent()
{
	if (!Z_Registration_Info_UClass_UStudent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStudent.OuterSingleton, Z_Construct_UClass_UStudent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStudent.OuterSingleton;
}
template<> PART_1_API UClass* StaticClass<UStudent>()
{
	return UStudent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStudent);
UStudent::~UStudent() {}
// End Class UStudent

// Begin Registration
struct Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Student_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStudent, UStudent::StaticClass, TEXT("UStudent"), &Z_Registration_Info_UClass_UStudent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStudent), 382624707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Student_h_165793052(TEXT("/Script/Part_1"),
	Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Student_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Student_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
