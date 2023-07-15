class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_white_kepi};
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
		
		class DDA_white_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(CSA) White Kepi";
			picture = "";
			model = "\dda_Headgear\white_kepi\white_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\white_kepi\data\white_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\white_kepi\white_kepi.p3d";
			};
		};
};