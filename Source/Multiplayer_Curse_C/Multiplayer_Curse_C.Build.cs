// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Multiplayer_Curse_C : ModuleRules
{
	public Multiplayer_Curse_C(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
