// TrampaCompuesta.cpp
#include "TrampaCompuesta.h"

void ATrampaCompuesta::AgregarTrampa(ATrampaComponent* Trampa)
{
    if (Trampa)
    {
        Trampas.Add(Trampa);
    }
}

void ATrampaCompuesta::ActivarTrampa()
{
    UE_LOG(LogTemp, Warning, TEXT("Activando trampa compuesta: %s"), *GetName());
    for (ATrampaComponent* Trampa : Trampas)
    {
        if (Trampa)
        {
            Trampa->ActivarTrampa();
        }
    }
}
