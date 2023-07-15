class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_csa_vol_brown};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};	
};

class cfgWeapons
{
	class ItemCore;
	
		class H_HelmetB: ItemCore
		{
			class ItemInfo;
		};
		
		class DDA_csa_vol_brown: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Brown Slouch hat";
			picture = "";
			model = "\dda_Headgear\csa_vol_brown\csa_vol_brown.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\csa_vol_brown\data\csa_vol_brown_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\csa_vol_brown\csa_vol_brown.p3d";
			};
		};
};