class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_csa_vol_gray};
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
		
		class DDA_csa_vol_grey: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(CSA) Forage Cap 1";
			picture = "";
			model = "\dda_Headgear\csa_vol_gray\csa_vol_gray.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\csa_vol_gray\data\csa_vol_gray_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\csa_vol_gray\csa_vol_gray.p3d";
			};
		};
};