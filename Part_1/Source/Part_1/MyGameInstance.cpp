// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Student.h"
#include "JsonObjectConverter.h"
#include "UObject/SavePackage.h"

const FString UMyGameInstance::PackageName = TEXT("/Game/Student");
const FString UMyGameInstance::AssetName = TEXT("TopStudent");

//학생 정보 출력하는 함수 정의 
void printfStudentInfo(const UStudent* InStudent, const FString& InTag)
{
	// 전달된 UStudent의 객체 이름과 순번을 출력 
	UE_LOG(LogTemp, Log, TEXT("[%s] 이름 %s 순번 %d"), *InTag, *InStudent->GetName(), InStudent->GetOrder());
}

FStudentData::FStudentData(int32 InOrder, const FString& InName)
	: Order(InOrder), Name(InName) // 멤버 변수를 초기화하는 부분을 명시적으로 작성
{
}

UMyGameInstance::UMyGameInstance()
{
	// 패키지 이름과 에셋 이름을 합쳐 완전한 경로 생성 
	const FString TopSoftObjectPath = FString::Printf(TEXT("%s.%s"), *PackageName, *AssetName);
	// UStudent 에셋을 로드하고 오브젝트를 찾음 
	static ConstructorHelpers::FObjectFinder<UStudent> UASSET_TopStudent(*TopSoftObjectPath);
	if(UASSET_TopStudent.Succeeded())
	{
		//에셋이 로드되면 로드된 학생 정보를 출력 
		printfStudentInfo(UASSET_TopStudent.Object, TEXT("Constructor"));
	}
}

void UMyGameInstance::Init()
{
	Super::Init();
	
	// 구조체 불러오기. Order는 16, 이름은 김진휘 
	FStudentData RawDataSrc(16,TEXT("김진휘"));

	// 프로젝트 폴더 경로에 saved 폴더를 찾아 그 경로에 저장 
	const FString SaveDir = FPaths::Combine(FPlatformMisc::ProjectDir(), TEXT("Saved"));
	UE_LOG(LogTemp, Log, TEXT("저장할 파일 폴더 : %s"), *SaveDir);

	{
		// 저장 파일명 정하기
		const FString RawDataFileName(TEXT("RawData.bin"));
		// 파일 경로를 만들기 
		FString RawDataAbsolutePath = FPaths::Combine(*SaveDir, *RawDataFileName);
		UE_LOG(LogTemp, Log, TEXT("저장할 파일 전체 경로 : %s"), *RawDataAbsolutePath);
		// 경로의 형식을 표준화된 형식으로 바꾸기 
		FPaths::MakeStandardFilename(RawDataAbsolutePath);
		UE_LOG(LogTemp, Log, TEXT("변경할 파일 전체 경로 : %s"), *RawDataAbsolutePath);

		// 파일을 쓸 수 있는 객체 생성 
		FArchive* RawFileWriterAr = IFileManager::Get().CreateFileWriter(*RawDataAbsolutePath);
		if (RawFileWriterAr) // 파일을 얻었다면 
		{
			*RawFileWriterAr << RawDataSrc; // 학생 데이터 파일에 저장
			RawFileWriterAr->Close(); // 파일 닫기
			delete RawFileWriterAr; // 메모리 해제 
			RawFileWriterAr = nullptr; // 포인터 초기화 
		}
		
		// 빈 구조체를 만들어서 파일로부터 데이터 읽기 
		FStudentData RawDataDest;
		// 파일을 읽을 수 있는 FArchive 객체 생성 
		FArchive* RawFileReaderAr = IFileManager::Get().CreateFileReader(*RawDataAbsolutePath);
		if (RawFileReaderAr) // 파일을 얻었다면 
		{
			*RawFileReaderAr << RawDataDest; // 파일에서 학생 데이터 읽어오기
			RawFileReaderAr->Close(); // 파일 닫기
			delete RawFileReaderAr; // 메모리 해제
			RawFileReaderAr = nullptr; // 포인터 초기화

			// 읽어온 데이터 이름과 순서 출력 
			UE_LOG(LogTemp, Log, TEXT("[RawData] 이름 %s 순번 %d"), *RawDataDest.Name, RawDataDest.Order);
		}
	}

	// UStudent 객체를 생성하고 이름과 순번을 설정 
	StudentSrc = NewObject<UStudent>();
	StudentSrc->SetName(TEXT("김진휘"));
	StudentSrc->SetOrder(30);

	{
		// 객체를 파일에 저장하기 위한 파일 이름 설정 
		const FString ObjectDataFileName(TEXT("ObjectData.bin"));
		FString ObjectDataAbsolutePath = FPaths::Combine(*SaveDir, *ObjectDataFileName);
		FPaths::MakeStandardFilename(ObjectDataAbsolutePath);
		//메모리 버퍼에 객체를 저장하기 위한 배열 생성 
		TArray<uint8> BufferArray;
		FMemoryWriter MemoryWriterAr(BufferArray);
		StudentSrc->Serialize(MemoryWriterAr);
		// 메모리 버퍼를 파일에 저장하는 과정 
		if(TUniquePtr<FArchive> FileWriterAr = TUniquePtr<FArchive>(IFileManager::Get().CreateFileWriter(*ObjectDataAbsolutePath)))
		{
			*FileWriterAr << BufferArray;
			FileWriterAr->Close();
		}
		//파일에서 데이터를 읽어서 버퍼파일에 저장 
		TArray<uint8> BufferArrayFromFile;
		if(TUniquePtr<FArchive> FileReaderAr = TUniquePtr<FArchive>(IFileManager::Get().CreateFileReader(*ObjectDataAbsolutePath)))
		{
			*FileReaderAr << BufferArrayFromFile;
			FileReaderAr->Close();
		}
		//읽어온 메모리 버퍼를 사용하여 UStudent 객체를 생성하고 데이터를 복원 
		FMemoryReader MemoryReaderAr(BufferArrayFromFile); //데이터 읽기
		UStudent* StudentDest = NewObject<UStudent>();//새로운 객체 생성
		StudentDest->Serialize(MemoryReaderAr); // 메모리에서 읽어온 데이터를 객체에 적용 
		printfStudentInfo(StudentDest,TEXT("ObjectData")); // 읽어온 학생 정보 출력 
	}

	{
		// Json 데이터 파일 이름 설정
		FString JsonDataFileName(TEXT("StudentJsonData.txt"));
		// Saved에 파일명 결함해 파일의 전체 경로 생성
		FString JsonDataAbsolutePath = FPaths::Combine(*SaveDir, *JsonDataFileName);
		// 파일 경로를 표준화 형식으로 바꿔줌 
		FPaths::MakeStandardFilename(JsonDataAbsolutePath);

		// 새로운 객체를 생성후 JsonObjectSrc에 저장하고, 이 객체는 Json형식으로 데이터를 저장하기 위해 사용됨 
		TSharedRef<FJsonObject> JsonObjectSrc = MakeShared<FJsonObject>();
		// 컨버터를 사용해 객체 데이터를 Json 객체로 변환하고 저장 
		FJsonObjectConverter::UStructToJsonObject(StudentSrc->GetClass(), StudentSrc,JsonObjectSrc);

		// Json 데이터를 출력할 문자열 
		FString JsonOutString;
		TSharedRef<TJsonWriter<TCHAR>> JsonWriterAr = TJsonWriterFactory<TCHAR>::Create(&JsonOutString);
		// Json 객체를 문자열로 직렬화 
		if(FJsonSerializer::Serialize(JsonObjectSrc,JsonWriterAr))
		{
			// 문자열을 파일에 저장 
			FFileHelper::SaveStringToFile(JsonOutString,*JsonDataAbsolutePath);
		}

		// 파일에서 읽어올 Json 데이터 문자열
		FString JsonInString;
		FFileHelper::LoadFileToString(JsonInString, *JsonDataAbsolutePath);

		//Json 읽기 객체 생성 
		TSharedRef<TJsonReader<TCHAR>> JsonReaderAr = TJsonReaderFactory<TCHAR>::Create(JsonInString);

		// Json데이터를 저장할 FJsonObject 포인터 
		TSharedPtr<FJsonObject> JsonObjectDest;
		//Json 문자열을 FJsonObject로 역직렬화 
		if(FJsonSerializer::Deserialize(JsonReaderAr, JsonObjectDest))
		{
			// 새로운 스투던트 객체 생성 
			UStudent* JsonStudentDest = NewObject<UStudent>();
			// FJsonObject를 UStudent 구조체로 변환 
			if (FJsonObjectConverter::JsonObjectToUStruct(JsonObjectDest.ToSharedRef(),JsonStudentDest->GetClass(),JsonStudentDest))
			{
				printfStudentInfo(JsonStudentDest, TEXT("JsonData"));	// 변환된 데이터 출력 
			}
		}
	}

	SaveStudentPackage();
	//LoadStudentPackage();
	//LoadStudentObject();

	// 비동기 로딩을 시작하고 로딩이 완료되면 호출되는 콜백을 정의 
	const FString TopSoftObjectPath = FString::Printf(TEXT("%s.%s"), *PackageName, *AssetName);
	Handle = StreamableManager.RequestAsyncLoad(TopSoftObjectPath,
		[&]() // 로딩 완료 시 실행되는 람다 함수 
		{
			// 핸들이 유효하고 로딩이 완료 되었는지 확인
			if(Handle.IsValid() && Handle->HasLoadCompleted())
			{
				// 로드된 에셋을 UStudent 타입으로 캐스팅 
				UStudent* TopStudent = Cast<UStudent>(Handle->GetLoadedAsset());
				if(TopStudent) // 캐스팅이 성공했다면 
				{
					// 로드된 학생 정보를 출력 
					printfStudentInfo(TopStudent, TEXT("AsyncLoad"));

					// 로딩 핸들을 해제하고 초기화 함 
					Handle->ReleaseHandle();
					Handle.Reset();
				}
			}
		}
	);
}

void UMyGameInstance::SaveStudentPackage() const
{
	UPackage* StudentPackage = ::LoadPackage(nullptr,*PackageName,LOAD_None);
	if(StudentPackage)
	{
		StudentPackage->FullyLoad();
	}
	
	StudentPackage = CreatePackage(*PackageName);
	// 오브젝트에 적용할 플래그를 지정 
	EObjectFlags ObjectFlag = RF_Public | RF_Standalone;
	
	// UStudent 클래스의 새로운 객체를 패키지 내에 생성하고, 설정된 이름 플래그를 적용 
	UStudent* TopStudent = NewObject<UStudent>(StudentPackage, UStudent::StaticClass(), *AssetName, ObjectFlag);
	TopStudent->SetName(TEXT("김진휘")); // 객체 이름을 설정
	TopStudent->SetOrder(30); // 객체 순번을 설정 

	// 하위 학생 객체 추가 총 10개 
	const int32 NumofSubs = 10;
	for (int32 ix = 1; ix <= NumofSubs; ++ix)
	{
		// 하위 객체 이름 지정 
		FString SubObjectName = FString::Printf(TEXT("Studnet%d"), ix);
		// 하위 객체로서 새로운 학생 객체 생성 
		UStudent* SubStudent = NewObject<UStudent>(TopStudent, UStudent::StaticClass(), *SubObjectName, ObjectFlag);
		SubStudent->SetName(FString::Printf(TEXT("학생%d"),ix));
		SubStudent->SetOrder(ix);
	}
	// 패키지 파일의 경로 및 이름 얻어옴 
	const FString PackageFileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
	// 패키지 저장을 위한 인자 설정 
	FSavePackageArgs SaveArgs; 
	SaveArgs.TopLevelFlags = ObjectFlag;
	// 패지키 파일로 저장. 성공적으로 저장된 경우 로그 출력 
	if(UPackage::SavePackage(StudentPackage, nullptr, *PackageFileName, SaveArgs))
	{
		UE_LOG(LogTemp,Log,TEXT("패키지가 성공적으로 저장되었습니다."));
	}
}

void UMyGameInstance::LoadStudentPackage() const
{
	// 저장된 패키지 이름을 통해 패키지를 불러옴. 
	UPackage* StudentPackage = ::LoadPackage(nullptr, *PackageName,LOAD_None);
	// 패키지가 없을 경우 함수 종료 
	if(nullptr==StudentPackage)
	{
		UE_LOG(LogTemp,Log,TEXT("패키지를 찾을 수 없습니다."));
		return;
	}
	// 불러온 패키지를 완전히 메모리로 로드함 
	StudentPackage->FullyLoad();
	// 패지키 내에서 저장된 에셋 이름을 가진 UStudent 객체를 찾음 
	UStudent* TopStudent = FindObject<UStudent>(StudentPackage, *AssetName);
	// 찾은 학생 정보를 출력함 
	printfStudentInfo(TopStudent, TEXT("FindObject Asset"));
}

void UMyGameInstance::LoadStudentObject() const
{
	// 패키지 이름과 에셋 이름을 합쳐서 완전한 경로 생성
	const FString TopSoftObjectPath = FString::Printf(TEXT("%s.%s"), *PackageName, *AssetName);
	// 패키지에서 UStudent 타입의 객체를 로드 
	UStudent* TopStudent = LoadObject<UStudent>(nullptr,*TopSoftObjectPath);
	//로드한 객체정보 출력 
	printfStudentInfo(TopStudent, TEXT("LoadObject Asset"));
}
