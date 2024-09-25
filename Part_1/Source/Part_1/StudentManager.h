// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class PART_1_API FStudentManager : public  FGCObject //특수 클래스 상속받아서 관리해주기 
{
public:
	FStudentManager(class UStudent* InStudent) : SafeStudent(InStudent){}
	// 생성자 : 일반 C++클래스 접두사 F로 바꿔주기

	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;
	// FGCObject 인터페이스 필수 구현 함수 : GC 시스템에 의해 추적되는 오브젝트를 등록

	// 해당 클래스의 참조자를 식별하는 이름을 반환 
	virtual FString GetReferencerName() const override
	{
		return TEXT("FStudentManager");
	}

	const class UStudent* GetStudent() const {return SafeStudent;}
	// safeStudent 멤버 변ㄴ수에 저장된 객체를 반환하는 함수 
	
private:
	class UStudent* SafeStudent = nullptr;
	// 언리얼 오브젝트이지만 일반 C++로 관리되며 가비지 컬렉션 대상이 아님 
};
