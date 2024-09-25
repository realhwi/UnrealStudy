// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.generated.h"

/**
 * 
 */
UCLASS()
class PART_1_API UPerson : public UObject
{
	GENERATED_BODY()

public:
	UPerson();

	// FORCEINLINE 매크로는 함수 호출 오버헤드 줄이고 실행 성능을 향상시킴 
	FORCEINLINE const FString& GetName() const {return Name;}

	// 멤버변수 Name을 입력받은 파라미터 InName 값을 전달받아 넣음, 함수 내에선 변경 불가(const)
	FORCEINLINE void SeetName(const FString& InName) {Name=InName;}

	FORCEINLINE class UCard* GetCard() const {return Card;}
	FORCEINLINE void SetCard(class UCard* InCard) {Card = InCard;}

protected:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	TObjectPtr<class UCard> Card; // 이제 포인터 선언 이렇게 함 
	
};
