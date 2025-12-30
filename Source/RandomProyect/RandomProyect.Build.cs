// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RandomProyect : ModuleRules
{
	public RandomProyect(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"RandomProyect",
			"RandomProyect/Variant_Platforming",
			"RandomProyect/Variant_Platforming/Animation",
			"RandomProyect/Variant_Combat",
			"RandomProyect/Variant_Combat/AI",
			"RandomProyect/Variant_Combat/Animation",
			"RandomProyect/Variant_Combat/Gameplay",
			"RandomProyect/Variant_Combat/Interfaces",
			"RandomProyect/Variant_Combat/UI",
			"RandomProyect/Variant_SideScrolling",
			"RandomProyect/Variant_SideScrolling/AI",
			"RandomProyect/Variant_SideScrolling/Gameplay",
			"RandomProyect/Variant_SideScrolling/Interfaces",
			"RandomProyect/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
