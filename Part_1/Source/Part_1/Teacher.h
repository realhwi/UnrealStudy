// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Person.h" // Person 추가
#include "Teacher.generated.h"

/**
 * 
 */
UCLASS()
class PART_1_API UTeacher : public UPerson
{
	GENERATED_BODY()

public:
	UTeacher();

	virtual void DoLesson() override;
	
private:
	UPROPERTY()
	int32 Id;
	
	
};
