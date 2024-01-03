// Copyright CryptoCrypt


#include "TheBossCharacterBase.h"

// Sets default values
ATheBossCharacterBase::ATheBossCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATheBossCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATheBossCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATheBossCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

