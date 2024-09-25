// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Student.h"
#include "StudentManager.h"

// 언리얼 오브젝트가 유효한지 확인하는 함수 
void CheckUObjectIsValid(const UObject* InObject, const FString& InTag)
{
	if (InObject->IsValidLowLevel())
	{
		UE_LOG(LogTemp,Log,TEXT("[%s] 유효한 언리얼 오브젝트"),*InTag);
	}
	else
	{
		UE_LOG(LogTemp,Log,TEXT("[%s] 유효하지 않은 언리얼 오브젝트"),*InTag);
	}
}

// 언리얼 오브젝트가 널 포인터인지 확인하는 함수 
void CheckUObjectIsNull(const UObject* InObject, const FString& InTag)
{
	if (nullptr==InObject)
	{
		UE_LOG(LogTemp,Log,TEXT("[%s] 널 포인터 언리얼 오브젝트"),*InTag);
	}
	else
	{
		UE_LOG(LogTemp,Log,TEXT("[%s] 널 포인터가 아닌 언리얼 오브젝트"),*InTag);
	}
}

void UMyGameInstance::Init()
{
	Super::Init();

	// NonpropStudent 객체를 동적으로 생성 (일반 오브젝트)
	NonPropStudent = NewObject<UStudent>();
	// PropStudnet 객체를 동적으로 생성 (언리얼 오브젝트)
	PropStudent = NewObject<UStudent>();

	NonPropStudents.Add(NewObject<UStudent>());
	PropStudents.Add(NewObject<UStudent>());
	// 객체를 동적으로 생성하고 전달 
	StudentManager = new FStudentManager(NewObject<UStudent>());
}

void UMyGameInstance::Shutdown()
{
	Super::Shutdown();
	// 매니저가 가리키는 스튜던트 객체를 가져옴 
	const UStudent* StudentInManager = StudentManager->GetStudent();
	// 매니저 객체를 삭제하여 메모리 해제 (수동 삭제) 
	delete StudentManager;
	StudentManager = nullptr;
	
	CheckUObjectIsNull(StudentInManager, TEXT("StudentInManager"));
	CheckUObjectIsValid(StudentInManager, TEXT("StudentInManager"));
	
	// NonPropStudent에 대한 널 포인터와 유효성 검사 
	CheckUObjectIsNull(NonPropStudent, TEXT("NonPropStudent"));
	CheckUObjectIsValid(NonPropStudent, TEXT("NonPropStudent"));
	// PropStudent에 대한 널 포인터와 유효성 검사 
	CheckUObjectIsNull(PropStudent, TEXT("PropStudent"));
	CheckUObjectIsValid(PropStudent, TEXT("PropStudent"));

	// NonPropStudents에 대한 널 포인터와 유효성 검사 
	CheckUObjectIsNull(NonPropStudents[0], TEXT("NonPropStudents"));
	CheckUObjectIsValid(NonPropStudents[0], TEXT("NonPropStudents"));
	// PropStudents에 대한 널 포인터와 유효성 검사 
	CheckUObjectIsNull(PropStudents[0], TEXT("PropStudents"));
	CheckUObjectIsValid(PropStudents[0], TEXT("PropStudents"));

}
