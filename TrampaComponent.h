// TrampaComponent.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrampaComponent.generated.h"

UCLASS(Abstract)
class BOMBERMAN_012025_API ATrampaComponent : public AActor
{
    GENERATED_BODY()
    
public:
    virtual void ActivarTrampa() PURE_VIRTUAL(ATrampaComponent::ActivarTrampa, );
};
