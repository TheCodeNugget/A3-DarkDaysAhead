class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_usa_havelock};
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
		
		class DDA_usa_havelock: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Kepi 6";
			picture = "";
			model = "\dda_Headgear\usa_havelock\usa_havelock.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\usa_havelock\data\usa_havelock_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\usa_havelock\usa_havelock.p3d";
			};
		};
};