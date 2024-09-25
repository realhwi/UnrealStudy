// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Card.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PART_1_Card_generated_h
#error "Card.generated.h already included, missing '#pragma once' in Card.h"
#endif
#define PART_1_Card_generated_h

#define FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCard(); \
	friend struct Z_Construct_UClass_UCard_Statics; \
public: \
	DECLARE_CLASS(UCard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Part_1"), NO_API) \
	DECLARE_SERIALIZER(UCard)


#define FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCard(UCard&&); \
	UCard(const UCard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCard) \
	NO_API virtual ~UCard();


#define FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_20_PROLOG
#define FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_23_INCLASS_NO_PURE_DECLS \
	FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PART_1_API UClass* StaticClass<class UCard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_00_git_update_01_Study_00_Unreal_class_00_Basic_UnrealStudy_part1_Part_1_Source_Part_1_Card_h


#define FOREACH_ENUM_ECARDTYPE(op) \
	op(ECardType::Student) \
	op(ECardType::Teacher) \
	op(ECardType::Staff) \
	op(ECardType::Invalid) 

enum class ECardType : uint8;
template<> struct TIsUEnumClass<ECardType> { enum { Value = true }; };
template<> PART_1_API UEnum* StaticEnum<ECardType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
