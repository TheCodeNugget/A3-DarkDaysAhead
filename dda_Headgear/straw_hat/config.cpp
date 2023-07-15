class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_straw_hat};
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
		
		class DDA_straw_hat: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Straw Hat";
			picture = "";
			model = "dda_Headgear\straw_hat\straw_hat.p3d";
			hiddenSelectionsTextures[] = {"dda_Headgear\straw_hat\data\straw_hat_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "dda_Headgear\straw_hat\straw_hat.p3d";
			};
		};
};