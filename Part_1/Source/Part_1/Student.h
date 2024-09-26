// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Student.generated.h"

/**
 * 
 */
UCLASS()
class PART_1_API UStudent : public UObject
{
	GENERATED_BODY()

public:
	UStudent();

	// 학생 순번을 가져오는 함수 (읽기 전용)
	int32 GetOrder() const {return Order;}
	
	//학생 순번을 설정하는 함수 
	void SetOrder(int32 InOrder) {Order = InOrder;}
	
	// 학생 이름을 가져오는 함수 
	const FString& GetName() const { return Name; }
	
	// 학생 이름을 설정하는 함수 
	void SetName(const FString& InName)  {Name = InName;}
	
	// 이 클래스의 데이터를 직렬화 하는 함수, 객체를 저장하고나 불러올 때 호출 됨 
	virtual  void Serialize(FArchive& Ar) override;

private:
	UPROPERTY()
	int32 Order; // 학생 순번 

	UPROPERTY()
	FString Name; // 학생 이름 
};
