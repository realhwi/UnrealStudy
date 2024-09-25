// Fill out your copyright notice in the Description page of Project Settings.


#include "CourseInfo.h"

UCourseInfo::UCourseInfo()
{
	// 초기 학사 정보 설정
	Contents = TEXT("기존 학사 정보");
}

void UCourseInfo::ChangedCoureInfo(const FString& InSchoolName, const FString& InNewContents)
{
	// Contents를 새로운 학사 정보 값으로 업데이트 
	Contents = InNewContents;
	
	UE_LOG(LogTemp,Log,TEXT("[CourseInfo] 학사 정보가 변경되어 알림을 발송합니다."));
	// OnCHanged 델리게이트를 통해 변경된 학사 정보(Contents인수)를 다른 바인딩된 수신자들에게 알림 
	OnChanged.Broadcast(InSchoolName,Contents);
}
