// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include "UpdateTextureShaders.h"

void UMyGameInstance::Init()
{
	Super::Init(); // override 해줬을때는 super 인자를 꼭 넣어줘야함 

	TCHAR LogCharArray[] = TEXT("Hello Unreal");
	UE_LOG(LogTemp, Log, TEXT("%s"), LogCharArray);
	// TCHAR 배열을 직접 사용. 간단한 상황에서 사용 

	FString LogCharString = LogCharArray;
	UE_LOG(LogTemp,Log,TEXT("%s"), *LogCharString);
	// FString 객체를 통해 문자열 관리, 더 복잡한 문자열 처리할 때 사용 

	// LogCharString에서 관리하는 문자열의 첫 문자에 대한 포인터 얻기 
	const TCHAR* LogCharPtr = *LogCharString;

	// FString의 내부 TCHAR 배열에 대한 포인터를 얻고, GetCharArray()는 TArray<TCHAR>를 반환하고,
	// GetData()는 TArray의 첫 요소의 포인터를 반환함.
	TCHAR* LogCharDataPtr = LogCharString.GetCharArray().GetData();

	// 크기가 100인 TCHAR 문자열 복사를 위한 배열을 선언.
	TCHAR LogCharArrayWithSize[100];

	// FString에서 문자열을 TCHAR 배열에 복사, Strcpy는 안전한 복사를 제공하며,
	// LogCharString.Len()을 사용하여 복사할 문자 수를 지정함.
	FCString::Strcpy(LogCharArrayWithSize, LogCharString.Len(), *LogCharString);

	// LogCharString 내에 "unreal" 문자열이 포함되어 있는지 대소문자를 구분하지 않고 검사함.
	if(LogCharString.Contains(TEXT("unreal"), ESearchCase::IgnoreCase))
	{
		// "unreal" 문자열을 찾고, 그 위치의 인덱스를 반환.
		int32 Index = LogCharString.Find(TEXT("unreal"), ESearchCase::IgnoreCase);

		// 찾은 인덱스부터 문자열의 끝까지를 추출하여 새 FString 객체를 생성. 
		FString EndString = LogCharString.Mid(Index);

		// 추출된 문자열을 로그로 출력. 
		UE_LOG(LogTemp, Log, TEXT("Find Test: %s"), *EndString);
		
	}

	FString Left, Right;

	// FString의 Split 함수를 사용하여 LogCharString을 공백(" ") 기준으로 나눕니다.
	// 성공적으로 나뉘면 True를 반환하고, Left에는 첫 번째 부분, Right에는 나머지 부분이 저장됩니다.
	if (LogCharString.Split(TEXT(" "), &Left, &Right))
	{
		// Split에 성공했을 경우, 나누어진 두 부분을 로그로 출력합니다.
		UE_LOG(LogTemp, Log, TEXT("Split Test: %s와 %s"), *Left, *Right);
	}

	// 정수형과 부동 소수점 변수를 선언합니다.
	int32 IntValue = 32;
	float FloatValue = 3.141592;

	// FString::Printf를 사용하여 정수와 부동 소수점 수를 포함하는 문자열을 생성합니다.
	// 포맷 지정자 %d와 %f는 각각 정수와 부동 소수점 수를 나타냅니다.
	FString FloatIntString = FString::Printf(TEXT("Int:%d Float:%f"), IntValue, FloatValue);

	// 부동 소수점 수를 문자열로 변환하되, 적절한 형식으로 정제하여 반환합니다.
	FString FloatString = FString::SanitizeFloat(FloatValue);

	// 정수 값을 문자열로 변환합니다.
	FString IntString = FString::FromInt(IntValue);

	// 포매팅된 문자열을 로그로 출력합니다.
	UE_LOG(LogTemp, Log, TEXT("%s"), *FloatIntString);

	// 개별적으로 변환된 부동 소수점 수와 정수 값을 문자열로 변환하여 로그로 출력합니다.
	UE_LOG(LogTemp, Log, TEXT("Int:%s Float:%s"), *IntString, *FloatString);

	// FString에서 추출한 문자열을 정수로 변환합니다.
	int32 IntValueFloatString = FCString::Atoi(*IntString);
	// 문자열을 부동 소수점 수로 변환합니다.
	float FloatValueFromString = FCString::Atof(*FloatString);

	// 변환된 정수와 부동 소수점 수를 사용하여 새로운 포맷 문자열을 생성합니다.
	FString FloatIntString2 = FString::Printf(TEXT("Int:%d Float:%f"), IntValueFloatString, FloatValueFromString);

	// 생성된 문자열을 로그로 출력합니다.
	UE_LOG(LogTemp, Log, TEXT("%s"), *FloatIntString2);

	FName key1(TEXT("PELVIS"));
	FName key2(TEXT("pelvis"));
	UE_LOG(LogTemp,Log,TEXT("FName 비교 결과 : %s"), key1 == key2 ? TEXT("같음"):TEXT("다름"));

	for(int i=0; i<1000; i++)
	{
		FName SearchInNamePool = FName(TEXT("pelvis")); // 오버헤드 발생할 수 있음. 
		const static FName StaticOnlyOnce(TEXT("pelvis")); // const로 처리해 한번만 실행하게 하는 방법 
	}
}
