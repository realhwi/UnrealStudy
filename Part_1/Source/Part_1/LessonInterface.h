// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LessonInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class ULessonInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PART_1_API ILessonInterface
{
	GENERATED_BODY()

public:
	// 해당 인터페이스를 상속받는 클래스는 DoLesson함수를 구현해줘야함 
	virtual void DoLesson()
	{
		UE_LOG(LogTemp,Log,TEXT("수업에 입장합니다."));
	}
};

