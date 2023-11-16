// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionActor.h"
#include "LearnUE5CppCharacter.h"
#include "Components/BoxComponent.h"

// Sets default values
ACollisionActor::ACollisionActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxComponent->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ACollisionActor::BeginPlay()
{
	Super::BeginPlay();

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACollisionActor::BeginOverLap);
}

// Called every frame
void ACollisionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACollisionActor::BeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                   UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                                   const FHitResult& SweepResult)
{
	if (!OtherActor) return;

	// ALearnUE5CppCharacter* Player = Cast<ALearnUE5CppCharacter>(OtherActor);
	// if (!Player) return;
	// Player->HandleHealth(-Damage);

	// Destroy();

	IInteractInterface* Interact = Cast<IInteractInterface>(OtherActor);
	if (!Interact) return;
	Interact->Interact();
}
