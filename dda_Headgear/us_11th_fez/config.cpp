class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_us_11th_fez};
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
		
		class DDA_us_11th_fez: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "11th Fez";
			picture = "";
			model = "dda_Headgear\us_11th_fez\us_11_fez.p3d";
			hiddenSelectionsTextures[] = {"dda_Headgear\us_11th_fez\data\us_11th_fez_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "dda_Headgear\us_11th_fez\us_11_fez.p3d";
			};
		};
};