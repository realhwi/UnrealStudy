// Fill out your copyright notice in the Description page of Project Settings.


#include "Student.h"

UStudent::UStudent()
{
	Order = -1;
	Name = TEXT("홍길동");
}

void UStudent::Serialize(FArchive& Ar)
{
	UObject::Serialize(Ar); 
	
	// 학생 정보의 순번과 이름을 아카이브에 저장하거나 불러옴 
	Ar << Order; // 순번 저장 또는 불러오기
	Ar << Name;  // 이름 저장 또는 불러오기
}
