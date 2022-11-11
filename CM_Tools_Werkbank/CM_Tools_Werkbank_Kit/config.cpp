class CfgPatches
{
	class CM_Tools_Werkbank_Kit
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class WoodenCrate;
	class CM_Tools_Werkbank_Kit: WoodenCrate
	{
		scope=2;
		displayName="Tools Werkbank Kit";
		descriptionShort="Tools Werkbank Kit";
		model="\DZ\gear\camping\wooden_case.p3d";
		itemSize[]={10,5};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		SingleUseActions[]={527};
		ContinuousActions[]={231};
		rotationFlags=2;
		InteractActions[]={};
		weight=28000;
		itemBehaviour=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CM_Tools_Werkbank\CM_Tools_Werkbank_Kit\data\wooden_case_co.paa"
		};
		class Cargo
		{
		};
	};
};
