// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Algo/Accumulate.h" //알고리즘 라이브러리 추가 

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


}
