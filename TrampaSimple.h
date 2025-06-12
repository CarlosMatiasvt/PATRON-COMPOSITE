// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "TrampaComponent.h"
#include "TrampaSimple.generated.h"

UCLASS()
class BOMBERMAN_012025_API ATrampaSimple : public ATrampaComponent
{
    GENERATED_BODY()

public:
    ATrampaSimple();

protected:
    virtual void BeginPlay() override;

public:
    virtual void ActivarTrampa() override;

private:
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;
};