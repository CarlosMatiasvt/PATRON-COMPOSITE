// Fill out your copyright notice in the Description page of Project Settings.


#include "TrampaCompuesta.h"

void ATrampaCompuesta::AgregarTrampa(ATrampaComponent* Trampa)
{
    if (Trampa)
    {
        Trampas.Add(Trampa);
	}
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Trampa nula no se puede agregar"));
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
