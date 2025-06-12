// TrampaSimple.cpp
#include "TrampaSimple.h"

ATrampaSimple::ATrampaSimple()
{
    PrimaryActorTick.bCanEverTick = false;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrampaMesh"));
    RootComponent = Mesh;
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
