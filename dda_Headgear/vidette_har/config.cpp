class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_vidette_har};
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
		
		class DDA_vidette_har: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Town Hat";
			picture = "";
			model = "\dda_Headgear\vidette_har\vidette_har.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\vidette_har\data\vidette_har_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\vidette_har\vidette_har.p3d";
			};
		};
};