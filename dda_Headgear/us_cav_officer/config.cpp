class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_us_cav_officer};
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
		
		class DDA_us_cav_officer: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Cavalry Officer";
			picture = "";
			model = "\dda_Headgear\us_cav_officer\us_cav_officer.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\us_cav_officer\data\us_cav_officer_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\us_cav_officer\us_cav_officer.p3d";
			};
		};
};