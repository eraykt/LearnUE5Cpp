// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class LEARNUE5CPP_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Health 
	void SetHealth(const float Value);
	FORCEINLINE float GetHealth() const { return Health; }
private:
	// Health
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "MyActor", meta = (AllowPrivateAccess = "true")) // serialize field
	float Health;
};
