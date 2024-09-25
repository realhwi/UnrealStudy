// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"


USTRUCT()
struct FStudentData
{
	GENERATED_BODY()

	FStudentData()
	{
		Name = TEXT("홍길동");
		Order = -1;
	}

	// 매개변수를 받는 생성자: 구조체를 생성할 때 이름과 순서를 설정할 수 있음.
	FStudentData(FString InName, int32 InOrder) : Name(InName), Order(InOrder) {}

	// 두 FStudentData 구조체가 같은지 비교하는 함수 
	bool operator==(const FStudentData& InOther) const
	{
		// Order와 Name이 모두 같은 경우에만 true를 반환
		return (Order == InOther.Order) && (Name == InOther.Name);
	}

	// friend 키워드를 사용하여 FStudentData 구조체 외부에서 이 함수를 호출할 수 있도록 함
	friend FORCEINLINE uint32 GetTypeHash(const FStudentData& InStudentData)
	{
		// Order와 Name을 모두 포함하여 해시 값을 계산
		return HashCombine(GetTypeHash(InStudentData.Order), GetTypeHash(InStudentData.Name));
	}

	UPROPERTY()
	FString Name;

	UPROPERTY()
	int32 Order;
};

/**
 * 
 */
UCLASS()
class PART_1_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	
	virtual void Init() override;

private:
	TArray<FStudentData> StudentData;

	UPROPERTY()
	TArray<TObjectPtr<class UStudent>> Students;
	// 언리얼 오브젝트를 TArray로 다룰때는 자동으로 메모리를 관리하기 위해 UPROPERTY 꼭 사용하기

	TMap<int32, FString> StudentsMap; //TMap 선언 
};
