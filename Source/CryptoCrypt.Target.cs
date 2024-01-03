// Copyright CryptoCrypt

using UnrealBuildTool;
using System.Collections.Generic;

public class CryptoCryptTarget : TargetRules
{
	public CryptoCryptTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "CryptoCrypt" } );
	}
}
