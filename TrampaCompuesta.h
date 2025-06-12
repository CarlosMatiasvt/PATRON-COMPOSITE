// Fill out your copyright notice in the Description page of Project Settings.
// TrampaCompuesta.h
#pragma once

#include "CoreMinimal.h"
#include "TrampaComponent.h"
#include "TrampaCompuesta.generated.h"

UCLASS()
class BOMBERMAN_012025_API ATrampaCompuesta : public ATrampaComponent
{
    GENERATED_BODY()

public:
    void AgregarTrampa(ATrampaComponent* Trampa);

    virtual void ActivarTrampa() override;

private:
    UPROPERTY()
    TArray<ATrampaComponent*> Trampas;
};
