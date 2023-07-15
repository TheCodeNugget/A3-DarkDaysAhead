class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_nj_cav_kepi};
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
		
		class DDA_nj_cav_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Kepi 3";
			picture = "";
			model = "\dda_Headgear\nj_cav_kepi\nj_cav_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\nj_cav_kepi\data\nj_cav_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\nj_cav_kepi\nj_cav_kepi.p3d";
			};
		};
};