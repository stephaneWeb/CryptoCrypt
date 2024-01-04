// Copyright CryptoCrypt


#include "Character/TheBossCharacterBase.h"


ATheBossCharacterBase::ATheBossCharacterBase()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ATheBossCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

