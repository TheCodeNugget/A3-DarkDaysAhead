class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_us_kepi};
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
		
		class DDA_us_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Kepi";
			picture = "";
			model = "\dda_Headgear\us_kepi\us_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\us_kepi\data\us_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\us_kepi\us_kepi.p3d";
			};
		};
};