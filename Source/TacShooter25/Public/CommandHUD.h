// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TacShooter25Character.h"
#include "CommandHUD.generated.h"

/**
 * 
 */
UCLASS()
class TACSHOOTER25_API ACommandHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	virtual void DrawHUD() override; //same as tick

	FVector2D InitialPoint; //Position of mouse on screen when pressed
	FVector2D CurrentPoint; //Position of mouse on screen when holding

	FVector2D GetMousePos2D();

	UPROPERTY()
	bool bStartSelecting = false;

	UPROPERTY()
	TArray <ATacShooter25Character*> FoundActors;
};
