// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DrawDebugHelpers.h"
#include "../Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "CommandHUD.h"
#include "CommandController.generated.h"
//Test commit change
/**
 * 
 */
UCLASS()
class TACSHOOTER25_API ACommandController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ACommandController();

	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

	ACommandHUD* HUDPtr;

protected:
	UFUNCTION()
	void SelectionPressed();

	UFUNCTION()
	void SelectionReleased();

	UFUNCTION()
	void MoveReleased();

	UPROPERTY()
	TArray <ATacShooter25Character*> SelectedActors;
};
