// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Student.h"
#include  "Teacher.h"
#include "UpdateTextureShaders.h"

UMyGameInstance::UMyGameInstance()
{
	SchoolName = TEXT("기본학교"); // 생성자에 학교 이름 초기화 
}

void UMyGameInstance::Init()
{
	Super::Init(); 

	UE_LOG(LogTemp,Log,TEXT("==========="));
	UClass* ClassRuntime = GetClass();
	UClass* ClassCompile = UMyGameInstance::StaticClass();
	check(ClassRuntime==ClassCompile);
	// 두 개가 같은 객체를 가리키는지 체크
	//ensure(ClassRuntime != ClassCompile);
	// 에디터를 끄지 않고 문제점을 체크하는 것
	//ensureMsgf(ClassRuntime != ClassCompile, TEXT("일부러 에러를 발생시킨 코드"));
	// 에러 메세지를 로그에 추가기록할 때 사용 
	
	UE_LOG(LogTemp,Log,TEXT("학교를 담당하는 클래스 이름 : %s"),*ClassRuntime->GetName());

	SchoolName = TEXT("수정 학교"); // 여기서 수정하면 자식 클래스에서 변경됨 
	UE_LOG(LogTemp,Log,TEXT("학교 이름 : %s"), *SchoolName);
	// 기본 값을 출력하고자 할 때 
	UE_LOG(LogTemp,Log,TEXT("학교 이름 기본값 : %s"), *GetClass()->GetDefaultObject<UMyGameInstance>()->SchoolName);

	UE_LOG(LogTemp,Log,TEXT("==========="));

	UStudent* Student = NewObject<UStudent>(); // Ustudent를 참조해 객체를 생성
	UTeacher* Teacher = NewObject<UTeacher>(); // UTeacher를 참조해 객체를 생성
	Student->SetName(TEXT("학생1")); //Name을 입력받은 값으로 변경 
	UE_LOG(LogTemp,Log,TEXT("새로운 학생 이름 %s"),*Student->GetName());
	// GetName 메서드를 호출해 객체 현재 이름을 가져온 후 출력  

	FString CurrentTeacherName; 
	FString NewTeacherName(TEXT("새로운 이름")); // 새로운 선생님 이름을 저장할 변수 
	// Fstring 타입의 변수 선언 (선생님 이름 저장 위한 용도)
	FProperty* NameProp = UTeacher::StaticClass()->FindPropertyByName(TEXT("NAme"));
	// UTeacher의 데이터에서 Name의 속성을 찾아 NameProp에 저장
	
	if(NameProp) // 속성이 존재하는 경우 
	{
		// GetValue_InContainer 이 함수를 사용해 Teacher 객체의 NAme 속성 값을 가져오고,
		// 지정 변수에 저장 
		NameProp->GetValue_InContainer(Teacher, &CurrentTeacherName);
		UE_LOG(LogTemp,Log,TEXT("현재 선생님 이름 %s"),*CurrentTeacherName); // 저장 된 값 출력

		NameProp->SetValue_InContainer(Teacher, &NewTeacherName);
		UE_LOG(LogTemp,Log,TEXT("새로운 선생님 이름 %s"),*Teacher->GetName());// 새로 변경한 값 출력
	}

	UE_LOG(LogTemp,Log,TEXT("==============="));

	Student->DoLesson(); // student 메서드 직접 호출
	UFunction* DoLessonFunc = Teacher->GetClass()->FindFunctionByName(TEXT("DoLesson"));
	// Teacher 객체에서 DoLesson함수를 찾고, 해당 이름을 가진 UFunction을 반환함
	// 동적 호출 방법
	
	if(DoLessonFunc) // 객체가 유효하면 
	{
		Teacher->ProcessEvent(DoLessonFunc,nullptr);
		// processEvent는 리플렉션을 통해 함수를 실행하는 메서드임
	}
	
	UE_LOG(LogTemp,Log,TEXT("==============="));

}
