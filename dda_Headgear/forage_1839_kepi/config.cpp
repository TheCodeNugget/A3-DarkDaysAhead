class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_forage_1839_kepi};
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
		
		class DDA_forage_1839_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "1839 Forage";
			picture = "";
			model = "\dda_Headgear\forage_1839_kepi\forage_1839_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\forage_1839_kepi\data\forage_1839_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\forage_1839_kepi\forage_1839_kepi.p3d";
			};
		};
};