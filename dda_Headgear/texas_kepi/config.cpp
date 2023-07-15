class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_texas_kepi};
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
		
		class DDA_texas_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Texas Kepi";
			picture = "";
			model = "\dda_Headgear\texas_kepi\texas_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\texas_kepi\data\texas_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\texas_kepi\texas_kepi.p3d";
			};
		};
};