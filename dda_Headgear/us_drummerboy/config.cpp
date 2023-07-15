class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_us_drummerboy};
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
		
		class DDA_us_drummerboy: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US Kepi 2)";
			picture = "";
			model = "\dda_Headgear\us_drummerboy\us_drummerboy.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\us_drummerboy\data\us_drummerboy_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\us_drummerboy\us_drummerboy.p3d";
			};
		};
};