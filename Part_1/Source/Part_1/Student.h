// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.h" // person 헤더 추가
#include "LessonInterface.h" // 인터페이스 추가
#include "Student.generated.h"

/**
 * 
 */
UCLASS()
class PART_1_API UStudent : public UPerson,public ILessonInterface //UObject에서 UPerson으로 부모 변경 
{
	GENERATED_BODY()

public:
	UStudent();
	
	virtual void DoLesson() override;
private:

};
