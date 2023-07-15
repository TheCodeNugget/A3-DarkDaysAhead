class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_georgia_kepi};
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
		
		class DDA_georgia_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Georgia Kepi";
			picture = "";
			model = "\dda_Headgear\georgia_kepi\georgia_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\georgia_kepi\data\georgia_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\georgia_kepi\georgia_kepi.p3d";
			};
		};
};