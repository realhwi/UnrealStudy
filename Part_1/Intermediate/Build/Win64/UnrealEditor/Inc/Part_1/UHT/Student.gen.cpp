// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Part_1/Student.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "ModuleRelativePath", "Student.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x95\x99\xec\x83\x9d \xec\x88\x9c\xeb\xb2\x88 \n" },
#endif
		{ "ModuleRelativePath", "Student.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\x99\xec\x83\x9d \xec\x88\x9c\xeb\xb2\x88" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStudent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStudent_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStudent, Order), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStudent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStudent, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStudent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStudent_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStudent_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStudent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Part_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStudent_Statics::ClassParams = {
	&UStudent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStudent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStudent_Statics::PropPointers),
	0,
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
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStudent)
// End Class UStudent

// Begin Registration
struct Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Student_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStudent, UStudent::StaticClass, TEXT("UStudent"), &Z_Registration_Info_UClass_UStudent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStudent), 261668709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Student_h_108404964(TEXT("/Script/Part_1"),
	Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Student_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Student_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
