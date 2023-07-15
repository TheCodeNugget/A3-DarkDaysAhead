class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_bucktail_hat};
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
		
		class DDA_bucktail_hat: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(US) Bucktail Hat";
			picture = "";
			model = "dda_Headgear\bucktail_hat\bucktail_hat.p3d";
			hiddenSelectionsTextures[] = {"dda_Headgear\bucktail_hat\data\bucktail_hat_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "dda_Headgear\bucktail_hat\bucktail_hat.p3d";
			};
		};
};