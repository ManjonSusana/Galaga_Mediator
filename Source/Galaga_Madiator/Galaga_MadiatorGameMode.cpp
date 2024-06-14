// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_MadiatorGameMode.h"
#include "Escuadron.h"
#include "Torre.h"
#include "Galaga_MadiatorPawn.h"
#include "MediatorConcreto.h"
#include "DefensasTorre.h"
#include "Kismet/GameplayStatics.h"

AGalaga_MadiatorGameMode::AGalaga_MadiatorGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_MadiatorPawn::StaticClass();
}

void AGalaga_MadiatorGameMode::BeginPlay()
{
	Super::BeginPlay();
	//FVector UbicacionInicial = FVector(800.0f, 1000.0f, 250.0f);
	////ROTACION 
	////FRotator RotarEscuadron = FRotator(0.0f, 180.0f, 0.0f);

	UWorld* const World = GetWorld();
	//if (World)
	//{
	//	for (int i = 0; i < 2; i++) {
	//		for (int j = 0; j < 6; j++) {
	//			FVector UbicacionActual = FVector(200.0f + i * 200, -900.0f + j * 200, 250.0f);
	//			//Instanciar el escuadron
	//			escuadron = World->SpawnActor<AEscuadron>(AEscuadron::StaticClass(), UbicacionActual, FRotator::ZeroRotator);
	//		}
	//	}

	//}

	FVector UbicacionTorre = FVector(800.0f, 1000.0f, 200.0f);
	//Instanciar la torre
	torre = World->SpawnActor<ATorre>(ATorre::StaticClass(), UbicacionTorre, FRotator::ZeroRotator);
	//Instanciar el mediador
	Mediator = GetWorld()->SpawnActor<AMediatorConcreto>(AMediatorConcreto::StaticClass());
	//Instanciar el jugador
	Jugador = Cast<AGalaga_MadiatorPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	//Instanciar el generador
	Generador = World->SpawnActor<ADefensasTorre>(ADefensasTorre::StaticClass());
	//Inicializar el mediador
	Mediator->Inicializar(Jugador, escuadron, torre, Generador);

	//Establecer el mediador
	torre->EstablecerMediator(Mediator);
	Jugador->EstablecerMediator(Mediator);
	//escuadron->EstablecerMediator(Mediator);
	Generador->EstablecerMediator(Mediator);

	

	/*if (Jugador) {
		Jugador->Atacar();
	}*/
	
	
}

void AGalaga_MadiatorGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	/*if (torre->GetVidaTorre() <= 10) {
		if (Torre) {
			Torre->Mover();
		}
		if (Escuadron) {
			Escuadron->MandarRefuerzos();
			
		}
	}*/
}

