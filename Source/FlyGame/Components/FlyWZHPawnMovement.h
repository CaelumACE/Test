#pragma once

#include "FlyWZHPawnMovement.generated.h"

UCLASS()
class UFlyWZHPawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_UCLASS_BODY()

public:
	//UFlyWZHPawnMovementComponent();
	//UFlyWZHPawnMovementComponent(FObjectInitializer const &objInit);

	//Begin UPawnMovementComponent Interface
	virtual void SetUpdatedComponent(USceneComponent* NewUpdatedComponent) override;
	
	
	
	//End UPawnMovementComponent Interface



};











