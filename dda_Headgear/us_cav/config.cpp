class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_us_cav};
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
		
		class DDA_us_cav: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "US Cavalry";
			picture = "";
			model = "\dda_Headgear\us_cav\us_cav.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\us_cav\data\us_cav_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\us_cav\us_cav.p3d";
			};
		};
};