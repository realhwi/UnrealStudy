// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Card.h"
#include "Staff.h"
#include "Student.h"
#include  "Teacher.h"
#include "UpdateTextureShaders.h"

UMyGameInstance::UMyGameInstance()
{
}

void UMyGameInstance::Init()
{
	Super::Init();	

	UE_LOG(LogTemp,Log,TEXT("=============================================="));

	// 학생,교사,직원 객체를 생성하고 TArray에 추가함 
	TArray<UPerson*> Persons = { NewObject<UStudent>(),NewObject<UTeacher>(),NewObject<UStaff>() };

	// Persons 배열의 각 요소 반복 
	for (const auto Person : Persons)
	{
		// 현재 Person 소유 카드를 가져옴 
		const UCard* OwnCard = Person->GetCard();
		// OwnCard가 null인지 확인 
		check(OwnCard);
		//카드 타입을 가져옴 
		ECardType CardType = OwnCard->GetCardType();
		//UE_LOG(LogTemp,Log,TEXT("%s님이 소유한 카드 종류 %d"),*Person->GetName(),*CardType);

		// UEnum 클래스 인스턴스를 찾아서 가져옴 (열거형 경로)
		const UEnum* CardEnumType = FindObject<UEnum>(nullptr, TEXT("/Script/Part_1.ECardType")); // 내 모듈 이름 지정해야함!! 

		// 데이터를 찾으면 카드 타입 메타데이터를 가져옴 
		if(CardEnumType)
		{
			// 카드 타입 값에 해당하는 디스플레이네임을 가져와 문자열 변환 
			FString CardMetaData = CardEnumType->GetDisplayNameTextByValue((int64)CardType).ToString();
			// 로그에 출력 
			UE_LOG(LogTemp, Log, TEXT("%s님이 소유한 카드 종류: %s"), *Person->GetName(), *CardMetaData);
		}
	}
	UE_LOG(LogTemp,Log,TEXT("=============================================="));
	
}
