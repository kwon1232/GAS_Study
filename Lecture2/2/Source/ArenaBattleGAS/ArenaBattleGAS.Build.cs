// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ArenaBattleGAS : ModuleRules
{
    public ArenaBattleGAS(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[] { "ArenaBattleGAS" });

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "EnhancedInput",
            "UMG",
            "GameplayAbilities",    
            "GameplayTags",         
            "GameplayTasks"         
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "ArenaBattle",
            "GameFeatures",
            "GameplayAbilities",    
            "GameplayTasks",
            "GameplayTags",
            "Slate",
            "SlateCore",
            "OnlineSubsystem"
        });

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
