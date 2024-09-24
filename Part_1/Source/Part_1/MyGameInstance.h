// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PART_1_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance(); // 생성자 코드 추가 
	
	virtual void Init() override;

private:
	UPROPERTY() // 이렇게 매크로를 선언해야 해당 문자열을 언리얼 엔진이 관리할 수 있음.
	FString SchoolName;
	
};
