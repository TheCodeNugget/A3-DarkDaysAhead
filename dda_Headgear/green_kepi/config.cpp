class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_green_kepi};
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
		
		class DDA_green_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Berdan Sharpshooter Kepi";
			picture = "";
			model = "\dda_Headgear\green_kepi\green_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\green_kepi\data\green_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\green_kepi\green_kepi.p3d";
			};
		};
};