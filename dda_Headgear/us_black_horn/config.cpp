class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_us_black_horn};
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
		
		class DDA_us_black_horn: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Black Horn";
			picture = "";
			model = "\dda_Headgear\us_black_horn\us_black_horn.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\us_black_horn\data\us_black_horn_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\us_black_horn\us_black_horn.p3d";
			};
		};
};