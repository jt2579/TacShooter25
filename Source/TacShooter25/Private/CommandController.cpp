// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandController.h"
#include "TacShooter25.h"

ACommandController::ACommandController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ACommandController::BeginPlay()
{
	HUDPtr = Cast<ACommandHUD>(GetHUD());
}

void ACommandController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &ACommandController::SelectionPressed);
	InputComponent->BindAction("LeftMouseClick", IE_Released, this, &ACommandController::SelectionReleased);

	InputComponent->BindAction("RightMouseClick", IE_Released, this, &ACommandController::MoveReleased);
}

void ACommandController::SelectionPressed()
{
	if (HUDPtr != nullptr)
	{
		HUDPtr->InitialPoint = HUDPtr->GetMousePos2D();
		HUDPtr->bStartSelecting = true;
	}
}

void ACommandController::SelectionReleased()
{
	HUDPtr->bStartSelecting = false;
	SelectedActors = HUDPtr->FoundActors;
}

void ACommandController::MoveReleased()
{
	if (SelectedActors.Num() > 0)
	{
		for (int32 i = 0; i < SelectedActors.Num(); i++)
		{
			FHitResult Hit;
			GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, Hit);
			FVector MoveLocation = Hit.Location + FVector(i / 2 * 100, i % 2 * 100, 0);
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(SelectedActors[i]->GetController(), MoveLocation);	//Complex use behavior tree
			DrawDebugSphere(GetWorld(), MoveLocation, 25, 10, FColor::Red, false, 3);
		}
	}
}