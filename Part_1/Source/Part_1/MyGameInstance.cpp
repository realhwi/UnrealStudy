// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Algo/Accumulate.h" //알고리즘 라이브러리 추가 

FString MakeRandomName()
{
	// 랜덤한 이름을 생성하여 반환하는 함수
	TCHAR FirstChar[] = TEXT("김이박최");
	TCHAR MiddleChar[] = TEXT("상혜지성");
	TCHAR LastChar[] = TEXT("수은원연");

	TArray<TCHAR> RandArray; // 랜덤으로 선택된 문자를 저장할 TArray 선언 
	RandArray.SetNum(3); // 배열 크기를 3으로 해서 총 3글자 구성 
	RandArray[0] = FirstChar[FMath::RandRange(0,3)]; // 첫번째 요소 저장
	RandArray[1] = MiddleChar[FMath::RandRange(0,3)]; // 두번쨰 요소 저장 
	RandArray[2] = LastChar[FMath::RandRange(0,3)]; // 세번째 요소 저장 

	// 데이터를 FString으로 변환하여 반환 
	return RandArray.GetData();
}

void UMyGameInstance::Init()
{
	Super::Init();
	
	// 배열 크기 지정 
	const int32 ArrayNum = 10;
	// 정수형 TArray 배열 Int32Array 선언 
	TArray<int32> Int32Array;
	// for루프를 통해 1~10까지의 값을 Int32Array에 추가 
	for(int32 ix = 1; ix <= ArrayNum; ++ix)
	{
		// 배열에 값을 추가 Add로 
		Int32Array.Add(ix);
	}
	// 람다식을 사용해 배열에서 짝수인 요소를 모두 제거 
	Int32Array.RemoveAll(
		[](int32 Val)
		{
			return Val % 2 ==0; // 짝수인 경우 true를 반환해 해당 요소 제거 
		}
	);

	// 배열에 2,4,6,8 요소를 추가 
	Int32Array += {2,4,6,8,10};

	// 비교할 또 다른 배열 선언 
	TArray<int32> Int32ArrayCompare;
	//C스타일 배열 선언하고 값을 초기화 
	int32 CArray[] = {1,3,5,7,9,2,4,6,8,10};
	// Int32ArrayCompare의 배열 메모리를 미리 할당하고 초기화하지 않음.
	Int32ArrayCompare.AddUninitialized(ArrayNum);
	//Memcpy를 사용해 cArray의 내용을 위 배열에 복사 
	FMemory::Memcpy(Int32ArrayCompare.GetData(),CArray,sizeof(int32) *ArrayNum);
	// 두 개의 배열이 동일한지 확인 
	ensure(Int32Array == Int32ArrayCompare);

	// 모든 배열 요소의 합계를 저장할 변수 Sum
	int32 Sum = 0;
	for (const int32& Int32Elem : Int32Array) // Int32Array의 모든 요소를 합산해 Sum에 저장 
	{
		Sum += Int32Elem;
	}

	//Sum의 값이 55인지 확인 
	ensure(Sum == 55);
	// 알고리즘 라이브러리를 사용해 배열 요소 합계를 계산하고 SumByAlgo에 저장 
	int32 SumByAlgo = Algo::Accumulate(Int32Array, 0);
	// 두 값이 동일한지 확인 
	ensure(Sum==SumByAlgo);

	// 정수형 Tset 선언 
	TSet<int32> Int32SEt;
	for(int32 ix =1; ix<= ArrayNum; ++ix) // 1부터 ArrayName까지 값을 TSet에 추가 
	{
		Int32SEt.Add(ix); 
	}

	Int32SEt.Remove(2);
	Int32SEt.Remove(4);
	Int32SEt.Remove(6);
	Int32SEt.Remove(8);
	Int32SEt.Remove(10);
	Int32SEt.Add(2);
	Int32SEt.Add(4);
	Int32SEt.Add(6);
	Int32SEt.Add(8);
	Int32SEt.Add(10);
	// 지울때는 인덱스 순서대로, 더할때는 마지막 인덱스부터 거꾸로 채워짐  

	// 총 300명 데이터를 생성 
	const int32 StudnetNum = 300;
	for(int32 ix = 1; ix <= StudnetNum; ++ix)
	{
		//MakeRandomName을 호출해 학생 이름을 생성하고, 구조체에서 학생 이름과 번호를 저장해 배열에 추가 
		StudentData.Emplace(FStudentData(MakeRandomName(),ix));
	}

	// 모든 학생 이름을 저장할 TArray 
	TArray<FString> AllStudentsName;
	// StudentData에 있는 모든 학생의 이름을 AllStudentName에 복사하는 작업 
	Algo::Transform(StudentData, AllStudentsName,
		[](const FStudentData& Val)
		{
			return Val.Name;
		}
	);
	// 모든 학생 이름 개수 출력 
	UE_LOG(LogTemp,Log,TEXT("모든 학생 이름의 수 : %d"),AllStudentsName.Num());

	// 중복 없는 학생 이름 저장할 TSet 선언 
	TSet<FString> AllUniqueNames;
	// 모든 학생 이름 중복 없이 AllUniqueNames에 복사 
	Algo::Transform(StudentData, AllUniqueNames,
		[](const FStudentData& Val)
		{
			return Val.Name;
		}
	);
	// 중복 없는 학생 이름 개수를 출력 
	UE_LOG(LogTemp,Log,TEXT("중복 없는 학생 이름의 수 : %d"),AllUniqueNames.Num());

	// Student를 기반으로 순번을 키로해서 이름을 값으로 하는 TMap으로 생성 
	Algo::Transform(StudentData,StudentsMap,
		[](const FStudentData& Val)
		{
			return TPair<int32,FString>(Val.Order,Val.Name);
		}
	);

	UE_LOG(LogTemp,Log,TEXT("순번에 따른 학생 맵의 레코드 수 : %d"),StudentsMap.Num());

	// 이름을 키로해서 순번을 값으로 하는 TMap을 생성 
	TMap<FString, int32> StudentMapByUniqueName;
	Algo::Transform(StudentData,StudentMapByUniqueName,
	[](const FStudentData& Val)
		{
			return TPair<FString,int32>(Val.Name, Val.Order);
		}
	);

	UE_LOG(LogTemp,Log,TEXT("이름에 따른 학생 맵의 레코드 수 : %d"),StudentMapByUniqueName.Num());

	// 이름을 키로 순번을 값으로 하는 TMultiMap 생성(여러개의 동일한 키를 허용,중복 허용) 
	TMultiMap<FString, int32> StudentMapByName;
	Algo::Transform(StudentData,StudentMapByName,
	[](const FStudentData& Val)
		{
			return TPair<FString,int32>(Val.Name, Val.Order);
		}
	);
	UE_LOG(LogTemp,Log,TEXT("이름에 따른 학생 멀티맵의 레코드 수 : %d"),StudentMapByName.Num());

	// 대상 네임 찾기 
	const FString TargetName(TEXT("이혜은"));
	TArray<int32> AllOrsers;
	// TMultiMap인 StudentByName에서 타겟 이름인 모든 순번을 찾아 AllOrders 배열에 저장 
	StudentMapByName.MultiFind(TargetName,AllOrsers);
	
	UE_LOG(LogTemp,Log,TEXT("이름이 %s인 학생 수 : %d"), *TargetName,AllOrsers.Num());

	TSet<FStudentData> StudentsSet;
	for(int32 ix = 1; ix <= StudnetNum; ++ix)
	{
		//MakeRandomName을 호출해 학생 이름을 생성하고, 구조체에서 학생 이름과 번호를 저장해 배열에 추가 
		StudentsSet.Emplace(FStudentData(MakeRandomName(),ix));
	}
}
