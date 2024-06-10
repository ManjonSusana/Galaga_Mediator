#include "Torre.h"
#include "Galaga_MadiatorProjectile.h"
#include "IMediator.h"


// Sets default values
ATorre::ATorre()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder1.Shape_Cylinder1'"));
	mallaTorre = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaTorre->SetStaticMesh(ShipMesh.Object);
	mallaTorre->SetupAttachment(RootComponent);
	RootComponent = mallaTorre;

	GetActorRelativeScale3D();
	SetActorScale3D(FVector(1.5f, 1.0f, 1.7f));


	vidaTorre = 50;
	// Inicializar variables de movimiento
	velocidadTorre = 10;
	Direccion = 1.0f; // Comienza moviéndose hacia la derecha
	LimiteDerecha = 1600.0f;
	LimiteIzquierda = 100.0f;
}

// Called when the game starts or when spawned
void ATorre::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATorre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Mover(DeltaTime);
	if (moverse) {
		//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("TORREEEEE")));

		SetActorLocation(FVector(GetActorLocation().X , GetActorLocation().Y - velocidadTorre, GetActorLocation().Z));

		if (GetActorLocation().Y < -1000)
		{
			SetActorLocation(FVector(GetActorLocation().X, 1000, GetActorLocation().Z));
		}
	}

	if (GetVidaTorre() <= 20) {
		
		Mover();
		PedirRefuerzos();	
		if (GetVidaTorre() <= 10) {
			moverse = false;
		}
	}
	
	
}

void ATorre::EstablecerMediator(IIMediator* _Mediator)
{
	Mediator = _Mediator;
}

void ATorre::Mover()
{
	moverse = true;
	
}

void ATorre::PedirRefuerzos()
{
	if (Mediator) {
		Mediator->Notificar(this, "Pedir Ayuda");
		//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Torre pide ayuda")));
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("No hay mediador")));
	
	}
	
	
}

void ATorre::RestarVidaTorre(int danio)
{
		vidaTorre -=danio;
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, FString::Printf(TEXT("DANOOOO: %d"), vidaTorre));
		
		if (vidaTorre <= 1) {
			Destroy();
		}
	
	

}

