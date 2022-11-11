modded class ModItemRegisterCallbacks
{
    
	override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.RegisterHeavy( pType, pBehavior );
		pType.AddItemInHandsProfileIK("CM_Kochwerkstatt",  "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
		pType.AddItemInHandsProfileIK("CM_Drill",  "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/tent_party_packed.anm");
		pType.AddItemInHandsProfileIK("CM_Cutting_Saw",  "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/tent_party_packed.anm");
		pType.AddItemInHandsProfileIK("CM_Kochwerkstatt_Kit",  "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
	};
	
	override void RegisterTwoHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.RegisterTwoHanded( pType, pBehavior );
		pType.AddItemInHandsProfileIK("CM_Grinder",  "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/BatteryCar.anm");
	};
};