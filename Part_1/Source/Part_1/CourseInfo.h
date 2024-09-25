// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CourseInfo.generated.h"

// 두개의 파라미터를 받는 멀티캐스트 선언 
DECLARE_MULTICAST_DELEGATE_TwoParams(FCourseInfoOnChangedSignature, const FString&, const FString&);
/**
 * 
 */
UCLASS()
class PART_1_API UCourseInfo : public UObject
{
	GENERATED_BODY()
public:
	UCourseInfo();
	
	// 델리게이트 인스턴스 선언 
	FCourseInfoOnChangedSignature OnChanged;
	// ChangedCourseInfo 함수는 OnChanged 델리게이트를 트리거하는 역할을 함
	void ChangedCoureInfo(const FString& InSchoolName, const FString& InNewContents);

private:
	FString Contents;
	
};
