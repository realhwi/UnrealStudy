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
	UPerson(); // 생성자 코드 
	
	UFUNCTION() // 언리얼 엔진의 리플렉션 시스템에 등록 
	virtual void DoLesson(); 

	const FString& GetName() const;
	// 이렇게 반환 타입을 지정하면 멤버 변수 값을 변경하지 않고, 참조를 통해 호출할 수 있음.
	
	void SetName(const FString& InName);
	// FString 타입 참조를 매개변수로 받음. 

protected:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	int32 Year;

private:
	
	
};
