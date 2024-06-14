// Fill out your copyright notice in the Description page of Project Settings.

#include "MediatorConcreto.h"
#include "Galaga_MadiatorPawn.h"
#include "Escuadron.h"
#include "Torre.h"
#include "DefensasTorre.h"
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

void AMediatorConcreto::Inicializar(AGalaga_MadiatorPawn* _Jugador, AEscuadron* _Escuadron, ATorre* _Torre, ADefensasTorre* _Generador)
{
	jugador = _Jugador;
	escuadron = _Escuadron;
	torre = _Torre;
	generador = _Generador;
}

void AMediatorConcreto::Notificar(AActor* _enviar, const FString& _evento)
{
	
		if (_evento.Equals("Atacar"))
		{
			GEngine -> AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Pawn atacando")));
			if (torre->GetVidaTorre() <= 30) {
				torre->PedirRefuerzos();
				
			}
			//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Pawn atacando")));
			
		}
		else if (_evento.Equals("Pedir Ayuda"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("TORRE pide ayudaaaa")));
			if (generador)
			{
				generador->GenerarDefensaTorre();
				
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

