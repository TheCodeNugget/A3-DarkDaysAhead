class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_green_forage};
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
		
		class DDA_green_forage: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Berdan Sharpshooter Forage Cap";
			picture = "";
			model = "\dda_Headgear\green_forage\green_forage.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\green_forage\data\green_forage_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\green_forage\green_forage.p3d";
			};
		};
};