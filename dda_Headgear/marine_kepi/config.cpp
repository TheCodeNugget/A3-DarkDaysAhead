class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_marine_kepi};
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
		
		class DDA_marine_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Kepi 4";
			picture = "";
			model = "\dda_Headgear\marine_kepi\marine_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\marine_kepi\data\marine_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\marine_kepi\marine_kepi.p3d";
			};
		};
};