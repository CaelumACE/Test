#include "FlyGame.h"
#include "FlyWZHPawnMovement.h"
#include "Classes/Kismet/KismetMathLibrary.h"

//UFlyWZHPawnMovementComponent::UFlyWZHPawnMovementComponent()
//{
//	
//}

UFlyWZHPawnMovementComponent::UFlyWZHPawnMovementComponent(FObjectInitializer const &objInit)
	:Super(objInit)
{

}

void UFlyWZHPawnMovementComponent::SetUpdatedComponent(USceneComponent* NewUpdatedComponent)
{
	Super::SetUpdatedComponent(NewUpdatedComponent);
	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("Go here!!"));
	UKismetMathLibrary::Acos(1.0f);
	
	TSharedRef<FJsonStringReader> reader =   FJsonStringReader::Create(TEXT("{}"));
}


