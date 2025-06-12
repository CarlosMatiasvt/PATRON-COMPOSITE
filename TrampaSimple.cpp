// Fill out your copyright notice in the Description page of Project Settings.


#include "TrampaSimple.h"

ATrampaSimple::ATrampaSimple()
{
    PrimaryActorTick.bCanEverTick = false;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrampaMesh"));
    RootComponent = Mesh;
    static ConstructorHelpers::FObjectFinder<UStaticMesh>ObjetoMallaTrampa(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    if (ObjetoMallaTrampa.Succeeded())
    {
        Mesh->SetStaticMesh(ObjetoMallaTrampa.Object);

        Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }
}

void ATrampaSimple::BeginPlay()
{
    Super::BeginPlay();

}

void ATrampaSimple::ActivarTrampa()
{
    UE_LOG(LogTemp, Warning, TEXT("Trampa simple activada en %s"), *GetName());
    // Aquí podrías poner animación o daño

}
