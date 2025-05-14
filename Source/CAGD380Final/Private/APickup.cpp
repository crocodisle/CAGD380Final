// Fill out your copyright notice in the Description page of Project Settings.


#include "APickup.h"

// Sets default values
APickup::APickup()
{

	PrimaryActorTick.bCanEverTick = false;

	BaseCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BaseBoxComponent"));

	RootComponent = BaseCollisionComponent;

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));

	PickupMesh->SetSimulatePhysics(false);

	PickupMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	PickupMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	BaseCollisionComponent->SetGenerateOverlapEvents(true);
	//BaseCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &APickup::OnOverlapBegin);

	PickupMesh->SetGenerateOverlapEvents(false);
}

//void APickup::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	if (OtherActor == nullptr || OtherActor == this || OtherComp == nullptr)
//		return;
//
//	if (OtherActor == GetWorld()->GetFirstPlayerController())
//	{
//		this->Destroy();
//	}
//}

