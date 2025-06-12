// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuilderConcretoLaberinto.h"
#include "GameFramework/Actor.h"
#include "PatronFacade.generated.h"




UCLASS()
class BOMBERMAN_012025_API APatronFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APatronFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	ABuilderConcretoLaberinto* BuilderLaberintoPrincipal;
	virtual void Tick(float DeltaTime) override;
	// Llama a todo: laberinto, enemigos, etc.
	UFUNCTION(BlueprintCallable)
	void InicializarNivel(UWorld* World);


private:
	

	// M�todos privados para crear laberinto y enemigos
	void CrearLaberinto(UWorld* World);
	void CrearEnemigos(UWorld* World);

};
