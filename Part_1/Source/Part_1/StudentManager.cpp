// Fill out your copyright notice in the Description page of Project Settings.


#include "StudentManager.h"
#include "Student.h" 

// 언리얼 가비지 컬렉터에 등록하여 참조를 유지
void FStudentManager::AddReferencedObjects(FReferenceCollector& Collector)
{
	// SafeStudent가 유효한 레벨에서 메모리를 갖고 있는 경우에만 실행 
	if(SafeStudent->IsValidLowLevel())
	{
		Collector.AddReferencedObject(SafeStudent);
	}
}
