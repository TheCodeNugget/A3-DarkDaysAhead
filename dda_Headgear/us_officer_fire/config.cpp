class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_us_officer_fire};
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
		
		class DDA_us_officer_fire: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Lieutenant Artillery Kepi 1";
			picture = "";
			model = "\dda_Headgear\us_officer_fire\us_officer_fire.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\us_officer_fire\data\us_officer_fire_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\us_officer_fire\us_officer_fire.p3d";
			};
		};
};