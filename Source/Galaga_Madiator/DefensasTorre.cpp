// Fill out your copyright notice in the Description page of Project Settings.


#include "DefensasTorre.h"
#include "MediatorConcreto.h"
#include "Escuadron.h"

// Sets default values
ADefensasTorre::ADefensasTorre()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	verificar = true;
}

// Called when the game starts or when spawned
void ADefensasTorre::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADefensasTorre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADefensasTorre::EstablecerMediator(IIMediator* _Mediator)
{
	Mediator = _Mediator;
}

void ADefensasTorre::GenerarDefensaTorre()
{
	if (verificar) {
		//swpanear escuadrones
		FVector UbicacionInicial = FVector(800.0f, 1000.0f, 250.0f);
		//ROTACION 
		//FRotator RotarEscuadron = FRotator(0.0f, 180.0f, 0.0f);

		UWorld* const World = GetWorld();
		if (World)
		{
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 6; j++) {
					FVector UbicacionActual = FVector(200.0f + i * 200, -900.0f + j * 200, 250.0f);
					//Instanciar el escuadron
					escuadron = World->SpawnActor<AEscuadron>(AEscuadron::StaticClass(), UbicacionActual, FRotator::ZeroRotator);
				}
			}

		}
		verificar = false;
	}
	
	escuadron->EstablecerMediator(Mediator);

	if (Mediator) {
		Mediator->Notificar(this, "Defender");
		//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Torre pide ayuda")));
	}
	
}

