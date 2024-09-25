// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Part_1/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCard() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PART_1_API UClass* Z_Construct_UClass_UCard();
PART_1_API UClass* Z_Construct_UClass_UCard_NoRegister();
PART_1_API UEnum* Z_Construct_UEnum_Part_1_ECardType();
UPackage* Z_Construct_UPackage__Script_Part_1();
// End Cross Module References

// Begin Enum ECardType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECardType;
static UEnum* ECardType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECardType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECardType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Part_1_ECardType, (UObject*)Z_Construct_UPackage__Script_Part_1(), TEXT("ECardType"));
	}
	return Z_Registration_Info_UEnum_ECardType.OuterSingleton;
}
template<> PART_1_API UEnum* StaticEnum<ECardType>()
{
	return ECardType_StaticEnum();
}
struct Z_Construct_UEnum_Part_1_ECardType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Invalid.Name", "ECardType::Invalid" },
		{ "ModuleRelativePath", "Card.h" },
		{ "Staff.DisplayName", "For Staff" },
		{ "Staff.Name", "ECardType::Staff" },
		{ "Student.DisplayName", "For Student" },
		{ "Student.Name", "ECardType::Student" },
		{ "Teacher.DisplayName", "For Teacher" },
		{ "Teacher.Name", "ECardType::Teacher" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECardType::Student", (int64)ECardType::Student },
		{ "ECardType::Teacher", (int64)ECardType::Teacher },
		{ "ECardType::Staff", (int64)ECardType::Staff },
		{ "ECardType::Invalid", (int64)ECardType::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Part_1_ECardType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Part_1,
	nullptr,
	"ECardType",
	"ECardType",
	Z_Construct_UEnum_Part_1_ECardType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Part_1_ECardType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Part_1_ECardType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Part_1_ECardType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Part_1_ECardType()
{
	if (!Z_Registration_Info_UEnum_ECardType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECardType.InnerSingleton, Z_Construct_UEnum_Part_1_ECardType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECardType.InnerSingleton;
}
// End Enum ECardType

// Begin Class UCard
void UCard::StaticRegisterNativesUCard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCard);
UClass* Z_Construct_UClass_UCard_NoRegister()
{
	return UCard::StaticClass();
}
struct Z_Construct_UClass_UCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Card.h" },
		{ "ModuleRelativePath", "Card.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardType_MetaData[] = {
		{ "ModuleRelativePath", "Card.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Card.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CardType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CardType;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCard_Statics::NewProp_CardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_CardType = { "CardType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCard, CardType), Z_Construct_UEnum_Part_1_ECardType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardType_MetaData), NewProp_CardType_MetaData) }; // 3387002912
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCard, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_CardType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_CardType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Part_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCard_Statics::ClassParams = {
	&UCard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::Class_MetaDataParams), Z_Construct_UClass_UCard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCard()
{
	if (!Z_Registration_Info_UClass_UCard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCard.OuterSingleton, Z_Construct_UClass_UCard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCard.OuterSingleton;
}
template<> PART_1_API UClass* StaticClass<UCard>()
{
	return UCard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCard);
UCard::~UCard() {}
// End Class UCard

// Begin Registration
struct Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECardType_StaticEnum, TEXT("ECardType"), &Z_Registration_Info_UEnum_ECardType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3387002912U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCard, UCard::StaticClass, TEXT("UCard"), &Z_Registration_Info_UClass_UCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCard), 3087812756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_2861675542(TEXT("/Script/Part_1"),
	Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
