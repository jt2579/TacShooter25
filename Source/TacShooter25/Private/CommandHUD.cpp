// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandHUD.h"
#include "TacShooter25.h"

void ACommandHUD::DrawHUD()
{
	if (bStartSelecting == true)
	{
		if (FoundActors.Num() > 0)
		{
			for (int32 i = 0; i < FoundActors.Num(); i++)
			{
				FoundActors[i]->SetDeselected();
			}
		}
		FoundActors.Empty();

		CurrentPoint = GetMousePos2D();
		DrawRect(FLinearColor(0, 0, 1, 0.15f), InitialPoint.X, InitialPoint.Y,
			CurrentPoint.X - InitialPoint.X, CurrentPoint.Y - InitialPoint.Y);
		GetActorsInSelectionRectangle<ATacShooter25Character>(InitialPoint, CurrentPoint, FoundActors, false, false);

		if (FoundActors.Num() > 0)
		{
			for (int32 i = 0; i < FoundActors.Num(); i++)
			{
				FoundActors[i]->SetSelected();
			}
		}
	}
}

FVector2D ACommandHUD::GetMousePos2D()
{
	float PosX;
	float PosY;
	GetOwningPlayerController()->GetMousePosition(PosX, PosY);

	return FVector2D(PosX, PosY);
}