class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_butter_hat};
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
		
		class DDA_butter_hat: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(CSA) Kepi 4";
			picture = "";
			model = "dda_Headgear\butter_hat\butter_hat.p3d";
			hiddenSelectionsTextures[] = {"dda_Headgear\butter_hat\data\butter_hat_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "dda_Headgear\butter_hat\butter_hat.p3d";
			};
		};
};