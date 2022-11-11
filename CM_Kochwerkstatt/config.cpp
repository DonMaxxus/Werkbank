class CfgMods
{
	class CM_Kochwerkstatt
	{
		dir="CM_Kochwerkstatt";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="CM_Kochwerkstatt";
		credits="MrFreezeGamesPC";
		author="DerPate";
		authorID="0";
		version=0.1;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"\CM_Tools_Werkbank/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"CM_Kochwerkstatt/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"CM_Kochwerkstatt/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgPatches
{
	class CM_Kochwerkstatt
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
	class Inventory_Base;
	class Container_Base;
	class Bottle_Base;
	class PortableGasLamp: Inventory_Base
	{
		inventorySlot[]=
		{
			"PortableGasLamp"
		};
	};
	class CanisterGasoline: Container_Base
	{
		inventorySlot="CanisterGasoline";
	};
	class CM_Kochwerkstatt: Container_Base
	{
		scope=2;
		displayName="Kochwerkstatt";
		descriptionShort="Kochwerkstatt zum zubereiten leckerer Gerichte.";
		model="CM_Kochwerkstatt\workbench.p3d";
		overrideDrawArea=8;
		useEntityHierarchy="true";
		attachments[]=
		{
			"CM_Drill",
			"CM_Cutting_Saw",
			"CM_Grinder"
		};
		carveNavmesh=0;
		canBeDigged=0;
		heavyItem=1;
		weight=20000;
		itemSize[]={12,12};
		itemBehaviour=0;
		repairKitType=5;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CM_Kochwerkstatt\data\workbanch_co_test.paa",
			"CM_Kochwerkstatt\data\workbanch_co_test.paa",
			"CM_Kochwerkstatt\data\workbanch_co_test.paa"
		};
		hologramMaterial="workbench";
		hologramMaterialPath="CM_Kochwerkstatt\data";
		class Cargo
		{
			itemsCargoSize[]={10,70};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Tools
			{
				name="Tools";
				description="";
				attachmentSlots[]=
				{
					"CM_Drill",
					"CM_Cutting_Saw",
					"CM_Grinder"
				};
				icon="cat_common_cargo";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					healthLevels[]=
					{
						
						{
							1.01,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.0099999998,
							{}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};
	class CM_Drill: Inventory_Base
	{
		scope=2;
		displayName="Bohrmaschine";
		descriptionShort="Eine Bohrmaschine, die an einer Werkbank befestigt werden kann.";
		model="CM_Kochwerkstatt\drill.p3d";
		inventorySlot[]=
		{
			"CM_Drill"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={8,8};
		itemBehaviour=0;
		physLayer="item_large";
		lootTag[]=
		{
			"Work"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.01,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.0099999998,
							{}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};
	class CM_Cutting_Saw: Inventory_Base
	{
		scope=2;
		displayName="Metall Kappsäge";
		descriptionShort="Eine Metall Kappsäge, die an einer Werkbank befestigt werden kann.";
		model="CM_Kochwerkstatt\metal_cutting_saw.p3d";
		inventorySlot[]=
		{
			"CM_Cutting_Saw"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={8,8};
		itemBehaviour=0;
		physLayer="item_large";
		lootTag[]=
		{
			"Work"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.01,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.0099999998,
							{}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};
	class CM_Grinder: Inventory_Base
	{
		scope=2;
		displayName="Schleifer";
		descriptionShort="Ein Schleifer, der an einer Werkbank befestigt werden kann.";
		model="CM_Kochwerkstatt\grinder.p3d";
		inventorySlot[]=
		{
			"CM_Grinder"
		};
		heavyItem=1;
		weight=10000;
		itemSize[]={8,8};
		itemBehaviour=0;
		physLayer="item_large";
		lootTag[]=
		{
			"Work"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.01,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.0099999998,
							{}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_CM_Drill
	{
		name="CM_Drill";
		displayName="Bohrmaschine";
		selection="CM_Drill";
		ghostIcon="cat_vehicle_engine";
	};
	class Slot_CM_Cutting_Saw
	{
		name="CM_Cutting_Saw";
		displayName="Metall Kappsäge";
		selection="CM_Cutting_Saw";
		ghostIcon="cat_vehicle_engine";
	};
	class Slot_CM_Grinder
	{
		name="CM_Grinder";
		displayName="Schleifer";
		selection="CM_Grinder";
		ghostIcon="cat_vehicle_engine";
	};
	class Slot_CanisterGasoline
	{
		name="CanisterGasoline";
		displayName="CanisterGasoline";
		selection="CanisterGasoline";
		ghostIcon="gascanister";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyCM_Cutting_Saw: ProxyAttachment
	{
		model="\CM_Kochwerkstatt\metal_cutting_saw.p3d";
		inventorySlot="CM_Cutting_Saw";
	};
	class ProxyCM_Drill: ProxyAttachment
	{
		model="\CM_Kochwerkstatt\drill.p3d";
		inventorySlot="CM_Drill";
	};
	class ProxyCM_Grinder: ProxyAttachment
	{
		model="\CM_Kochwerkstatt\grinder.p3d";
		inventorySlot="CM_Grinder";
	};
	class ProxyJerryCan: ProxyAttachment
	{
		model="\dz\vehicles\parts\JerryCan.p3d";
		inventorySlot="CanisterGasoline";
	};
};
class CfgSoundShaders
{
	class craft_SoundShaders
	{
		samples[]=
		{
			
			{
				"CM_Kochwerkstatt\sounds\inv_repair_kit_use_fast",
				1
			}
		};
		range=5;
		volume=4.1999998;
	};
};
class CfgSoundSets
{
	class Craft_SoundSet
	{
		soundShaders[]=
		{
			"craft_SoundShaders"
		};
	};
};
