// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Torre.generated.h"

UCLASS()
class GALAGA_MADIATOR_API ATorre : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATorre();

	int vidaTorre;
	bool moverse = false;
	float velocidadTorre;
	float Direccion; // 1 para derecha, -1 para izquierda
	float LimiteDerecha;
	float LimiteIzquierda;
	int i;
	FORCEINLINE int GetVidaTorre() const { return vidaTorre; }
	FORCEINLINE void SetVidaTorre(int _vidaTorre) { vidaTorre = _vidaTorre; }

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Proyectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaTorre;


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
	void PedirRefuerzos();

	void Mover();
	void RestarVidaTorre(int danio);

	

};
