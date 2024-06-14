#include "Escuadron.h"
#include "IMediator.h"
#include "Galaga_MadiatorProjectile.h"

// Sets default values
AEscuadron::AEscuadron()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO1.TwinStickUFO1'"));
	mallaEscuadron = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaEscuadron->SetStaticMesh(ShipMesh.Object);
	mallaEscuadron->SetupAttachment(RootComponent);
	RootComponent = mallaEscuadron;

	velocidadEscuadron = 8.0f;

	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 5.0f;
	bCanFire = true;
}

// Called when the game starts or when spawned
void AEscuadron::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscuadron::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
		//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("ESCUADRON MOVIENDOSEE")));

		SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y - velocidadEscuadron, GetActorLocation().Z));

		if (GetActorLocation().Y < -1000)
		{
			SetActorLocation(FVector(GetActorLocation().X, 1000, GetActorLocation().Z));
		}
	

}
void AEscuadron::EstablecerMediator(IIMediator* _Mediator)
{
		Mediator = _Mediator;
}

void AEscuadron::Disparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Black, FString::Printf(TEXT("Escuadron disparando")));
	const FRotator FireRotation = FRotator(0.0f, 180.0f, 0.0f);
	

	// Spawn projectile at an offset from this pawn
	const FVector SpawnLocation = GetActorLocation() + FVector(-10.0f, 0.0f, 0.0f) + FireRotation.RotateVector(GunOffset);
	
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->SpawnActor<AGalaga_MadiatorProjectile>(SpawnLocation, FireRotation);
	}

	bCanFire = false;
	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEscuadron::ShotTimerExpired, FireRate);
}

void AEscuadron::ShotTimerExpired()
{
	bCanFire = true;
}

