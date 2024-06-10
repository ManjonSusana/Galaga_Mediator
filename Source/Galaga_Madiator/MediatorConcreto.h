#pragma once

#include "IMediator.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MediatorConcreto.generated.h"

UCLASS()
class GALAGA_MADIATOR_API AMediatorConcreto : public AActor, public IIMediator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMediatorConcreto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//declaracion de variables
	UPROPERTY(VisibleAnywhere, Category = "Mediador Pawn")

	class AGalaga_MadiatorPawn* jugador;

	UPROPERTY(VisibleAnywhere, Category = "Mediador Escuadron")

	class AEscuadron* escuadron;

	UPROPERTY(VisibleAnywhere, Category = "Mediador Torre")

	class ATorre* torre;

public:
	TArray<AActor*> escuadrones;
	TArray<AActor*> escuadronesp;

	void Inicializar(AGalaga_MadiatorPawn* _Jugador, AEscuadron* _Escuadron, ATorre* _Torre);
	void Notificar(AActor* _enviar, const FString& _evento) override;

};
