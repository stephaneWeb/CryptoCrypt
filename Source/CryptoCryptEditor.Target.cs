// Copyright CryptoCrypt

using UnrealBuildTool;
using System.Collections.Generic;

public class CryptoCryptEditorTarget : TargetRules
{
	public CryptoCryptEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "CryptoCrypt" } );
	}
}
