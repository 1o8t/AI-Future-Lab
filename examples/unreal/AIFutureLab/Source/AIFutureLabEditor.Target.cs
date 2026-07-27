using UnrealBuildTool;
using System.Collections.Generic;

public class AIFutureLabEditorTarget : TargetRules
{
    public AIFutureLabEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
        ExtraModuleNames.Add("AIFutureLab");
    }
}
