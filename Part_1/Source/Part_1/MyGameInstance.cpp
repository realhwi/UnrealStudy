// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Card.h"
#include "CourseInfo.h"
#include "Staff.h"
#include "Student.h"
#include  "Teacher.h"
#include "UpdateTextureShaders.h"

UMyGameInstance::UMyGameInstance()
{
	SchoolName = TEXT("학교");
}

void UMyGameInstance::Init()
{
	Super::Init();	

	// CourseInfo 객체를 생성하고 초기화 (현재 게임인스턴스를 Outer로 설정)
	CourseInfo = NewObject<UCourseInfo>(this);
	
	UE_LOG(LogTemp,Log,TEXT("=============================================="));
	// 학생 객체 세개를 생성하고 이름을 설정 
	UStudent* Student1 = NewObject<UStudent>();
	Student1->SeetName(TEXT("학생1"));
	UStudent* Student2 = NewObject<UStudent>();
	Student2->SeetName(TEXT("학생2"));
	UStudent* Student3 = NewObject<UStudent>();
	Student3->SeetName(TEXT("학생3"));

	// CourseInfo의 Onchanged 델리게이트에 학생들의 GetNotification 함수를 바인딩해서 학사 정보가 변경될 때 이 함수 호출 (아까 로그찍었던 것)
	CourseInfo->OnChanged.AddUObject(Student1, &UStudent::GetNotification);
	CourseInfo->OnChanged.AddUObject(Student2, &UStudent::GetNotification);
	CourseInfo->OnChanged.AddUObject(Student3, &UStudent::GetNotification);

	// CourseInfo의 학사 정보를 변경하고, 델리게이트를 통해 변경 사항을 알림 
	CourseInfo->ChangedCoureInfo(SchoolName, TEXT("변경된 학사 정보"));

	UE_LOG(LogTemp,Log,TEXT("=============================================="));
	
}
