// Copyright CryptoCrypt

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TheBossCharacterBase.generated.h"

UCLASS(Abstract)
class CRYPTOCRYPT_API ATheBossCharacterBase : public ACharacter
{
	GENERATED_BODY()
	
public:	

	ATheBossCharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};