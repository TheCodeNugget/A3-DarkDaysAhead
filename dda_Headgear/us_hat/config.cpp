class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {"DDA_us_hat"};
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
		
		class DDA_us_hat: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Zouave fez";
			picture = "";
			model = "\dda_Headgear\us_hat\us_hat.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\us_hat\data\us_hat_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\us_hat\us_hat.p3d";
			};
		};
};