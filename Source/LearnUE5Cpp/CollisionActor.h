// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollisionActor.generated.h"

UCLASS()
class LEARNUE5CPP_API ACollisionActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACollisionActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Collision
	UPROPERTY(EditDefaultsOnly)
	class UBoxComponent* BoxComponent;
	UFUNCTION()
	void BeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                  int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	FORCEINLINE float GetDamage() const { return Damage; }

private:
	UPROPERTY(EditInstanceOnly, meta=(AllowPrivateAccess="true"))
	float Damage;
};
