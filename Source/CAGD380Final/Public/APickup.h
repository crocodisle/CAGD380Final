// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "APickup.generated.h"

UENUM(BlueprintType)
enum class PickupType : uint8
{
	Food,
	Treasure,
	MagDmg,
	ShotDmg,
	ShotSpd,
	MoveSpd,
	AtkDmg,
	Invisibility
};

UCLASS()
class CAGD380FINAL_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Pickup)
	UBoxComponent* BaseCollisionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Pickup)
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pickup)
	PickupType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pickup)
	float value = 0;

private:
	//UFUNCTION()
	//virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};


