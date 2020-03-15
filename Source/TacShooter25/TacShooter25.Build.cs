// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TacShooter25 : ModuleRules
{
	public TacShooter25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
