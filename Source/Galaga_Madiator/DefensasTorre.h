// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DefensasTorre.generated.h"

UCLASS()
class GALAGA_MADIATOR_API ADefensasTorre : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefensasTorre();

	bool verificar;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class AEscuadron* escuadron;

	class IIMediator* Mediator;

public:

	void EstablecerMediator(class IIMediator* _Mediator);
	void GenerarDefensaTorre();
	
};
