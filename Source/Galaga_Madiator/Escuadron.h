// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escuadron.generated.h"

UCLASS()
class GALAGA_MADIATOR_API AEscuadron : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEscuadron();

	bool moverse = false;

	float velocidadEscuadron;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Proyectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaEscuadron;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	class IIMediator* Mediator;
public:
	void EstablecerMediator(class IIMediator* _Mediator);
	void Disparar();

public:
	UPROPERTY(Category = GamePlay, EditAnywhere, BlueprintReadWrite)

	FVector GunOffset;
	UPROPERTY(Category = GamePlay, EditAnywhere, BlueprintReadWrite)
	float FireRate;
	/* Handler for the fire timer expiry */
	void ShotTimerExpired();

private:

	/* Flag to control firing  */
	uint32 bCanFire : 1;
	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

};
