// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_MadiatorGameMode.generated.h"

UCLASS(MinimalAPI)
class AGalaga_MadiatorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_MadiatorGameMode();


protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
//DECLARANDO VARIABLES
	class AEscuadron* escuadron;
	class ATorre* torre;

private:
	UPROPERTY(VisibleAnywhere, Category = "GameMode Pawn")

	class AGalaga_MadiatorPawn* Jugador;

	UPROPERTY(VisibleAnywhere, Category = "GameMode Escuadron")

	class AEscuadron* Escuadron;

	UPROPERTY(VisibleAnywhere, Category = "GameMode Torre")

	class ATorre* Torre;

	UPROPERTY(VisibleAnywhere, Category = "GameMode Mediator")
	class AMediatorConcreto* Mediator;
};



