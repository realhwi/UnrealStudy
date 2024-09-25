// Fill out your copyright notice in the Description page of Project Settings.


#include "Teacher.h"
#include "Card.h"

UTeacher::UTeacher()
{
	Name = TEXT("김선생");
	Card->SetCardType(ECardType::Teacher);
}

void UTeacher::DoLesson()
{
	ILessonInterface::DoLesson(); // 기본 동작 그대로 유지하면서 작업 사용할때 호출 
	UE_LOG(LogTemp,Log,TEXT("%s님은 가르칩니다."),*Name);
}
