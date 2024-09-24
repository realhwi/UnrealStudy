// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "Staff.h"
#include "Student.h"
#include  "Teacher.h"
#include "UpdateTextureShaders.h"

UMyGameInstance::UMyGameInstance()
{
}

void UMyGameInstance::Init()
{
	Super::Init();	

	UE_LOG(LogTemp,Log,TEXT("=============================================="));
	// TArray를 사용해 UPerson 타입의 동적 배열 생성. 
	TArray<UPerson*> person = {NewObject<UStudent>(),NewObject<UTeacher>(),NewObject<UStaff>()};
	// 각 요소를 순회하며 이름을 로그에 출력
	for(const auto Person : person) //for (변수 선언 : 컬렉션)
	{
		UE_LOG(LogTemp,Log,TEXT("구성원 이름 : %s"),*Person->GetName());
	}
	UE_LOG(LogTemp,Log,TEXT("=============================================="));

	for(const auto Person : person)
	{
		// 현재 Person 객체를 ILesonInterface 타입으로 형변환 시도 
		ILessonInterface* LessonInterface = Cast<ILessonInterface>(Person);
		// 만약 성공한다면 (Person이 ILessonInterface를 구현하고 있다면) 
		if(LessonInterface)
		{
			UE_LOG(LogTemp,Log,TEXT("%s님은 수업에 참여할 수 있습니다."), *Person->GetName());
			LessonInterface->DoLesson();
		}
		else
		{
			UE_LOG(LogTemp,Log,TEXT("%s님은 수업에 참여할 수 없습니다."),*Person->GetName());
		}
	}
	UE_LOG(LogTemp,Log,TEXT("=============================================="));
}
