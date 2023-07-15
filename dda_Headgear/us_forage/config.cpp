class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_us_forage};
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
		
		class DDA_us_forage: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Forage Cap Brown";
			picture = "";
			model = "\dda_Headgear\us_forage\us_forage.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\us_forage\data\us_forage_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\us_forage\us_forage.p3d";
			};
		};
};