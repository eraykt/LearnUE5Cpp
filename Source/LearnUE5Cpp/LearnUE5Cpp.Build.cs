// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LearnUE5Cpp : ModuleRules
{
	public LearnUE5Cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
