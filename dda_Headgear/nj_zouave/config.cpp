class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_nj_zouave};
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
		
		class DDA_nj_zouave: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Zouave Kepi";
			picture = "";
			model = "\dda_Headgear\nj_zouave\nj_zouave.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\nj_zouave\data\nj_zouave_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\nj_zouave\nj_zouave.p3d";
			};
		};
};