// Fill out your copyright notice in the Description page of Project Settings.

#include "MediatorConcreto.h"
#include "Galaga_MadiatorPawn.h"
#include "Escuadron.h"
#include "Torre.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMediatorConcreto::AMediatorConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMediatorConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMediatorConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMediatorConcreto::Inicializar(AGalaga_MadiatorPawn* _Jugador, AEscuadron* _Escuadron, ATorre* _Torre)
{
	jugador = _Jugador;
	escuadron = _Escuadron;
	torre = _Torre;
}

void AMediatorConcreto::Notificar(AActor* _enviar, const FString& _evento)
{
	
		if (_evento.Equals("Atacar"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Pawn atacando")));
			
		}
		else if (_evento.Equals("Pedir Ayuda"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("TORRE pide ayudaaaa")));
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEscuadron::StaticClass(), escuadrones);
			for (AActor* Actor : escuadrones)
			{
				AEscuadron* Escuadron = Cast<AEscuadron>(Actor);
				if (Escuadron)
				{
					Escuadron->MandarRefuerzos();
				}
			}
		}
		else if (_evento.Equals("Defender"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Escuadron dispara")));
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEscuadron::StaticClass(), escuadronesp);
			for (AActor* Actor : escuadronesp)
			{
				AEscuadron* Escuadron = Cast<AEscuadron>(Actor);
				if (Escuadron)
				{
					Escuadron->Disparar();
				}
			}
		}
		
		
}

