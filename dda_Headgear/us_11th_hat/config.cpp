class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_us_11th_hat};
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
		
		class DDA_us_11th_hat: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "11th Hat";
			picture = "";
			model = "\dda_Headgear\us_11th_hat\us_11_hat.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\us_11th_hat\data\us_11th_hat_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\us_11th_hat\us_11_hat.p3d";
			};
		};
};