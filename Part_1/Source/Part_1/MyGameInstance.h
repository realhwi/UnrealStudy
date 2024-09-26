// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/StreamableManager.h" // 비동기 추가 
#include "MyGameInstance.generated.h"

// 학생 정보를 담는 구조체 
struct FStudentData
{
	FStudentData() {} // 기본 생성자 
	FStudentData(int32 InOrder, const FString& InName); // Order,Name을 받아오는 생성자 

	// 직렬화 연산자 오버로딩, 구조체를 파일에 저장하거나 불러올 때 사용 
	friend FArchive& operator<<(FArchive& Ar, FStudentData& InStudentData)
	{
		Ar << InStudentData.Order; // Order 값을 파일에 저장 또는 불러옴
		Ar << InStudentData.Name; // Name 값을 파일에 저장 또는 불러옴 
		return  Ar;
	}
	int32 Order = -1;	// 학생 순서 저장 변수
	FString Name = TEXT("홍길동"); // 학생 이름 저장 변수 
};

/**
 * 
 */
UCLASS()
class PART_1_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UMyGameInstance();
	
	virtual void Init() override; 

	void SaveStudentPackage() const; //패키지 전용 함수 선언
	void LoadStudentPackage() const;
	void LoadStudentObject() const;
	
private:
	static const FString PackageName; // 패키지 이름 저장하는 상수 문자열
	static const FString AssetName; // 에셋 이름 저장하는 상수 문자열 
	
	UPROPERTY()
	TObjectPtr<class UStudent> StudentSrc;
	//UStudent 객체 포인터.
	
	// 비동기 로딩을 관리하는 객체, 에셋 로딩을 요청하고 제어함 
	FStreamableManager StreamableManager; 
	// 현재 비동기 로딩 요청의 상태를 추적하는 핸들을 저장하는 스마트 포인터
	TSharedPtr<FStreamableHandle> Handle; 
};
