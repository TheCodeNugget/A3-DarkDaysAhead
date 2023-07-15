class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_bucktail_kepi};
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
		
		class DDA_bucktail_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Kepi 5";
			picture = "";
			model = "\dda_Headgear\bucktail_kepi\bucktail_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\bucktail_kepi\data\bucktail_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\bucktail_kepi\bucktail_kepi.p3d";
			};
		};
};