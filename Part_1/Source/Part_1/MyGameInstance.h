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
	
	virtual void Init() override; // 엔진 시작시 호출 

	virtual void Shutdown() override; // 엔진 종료시 호출

private:

	TObjectPtr<class UStudent> NonPropStudent; // 일반 언리얼 오브젝트 포인터

	UPROPERTY() // 언리얼 오브젝트 포인터, 가비지 컬렉션 시스템에 의해 관리됨 
	TObjectPtr<class UStudent> PropStudent;

	// TArray 컨테이너 사용해서 만들어보기 
	TArray<TObjectPtr<class UStudent>> NonPropStudents;
	
	UPROPERTY() 
	TArray<TObjectPtr<class UStudent>> PropStudents;

	class FStudentManager* StudentManager = nullptr;
	// 일반 C++클래스 스튜던트 매니저 포인터 변수 
	
};
