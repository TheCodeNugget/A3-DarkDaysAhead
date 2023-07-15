class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_farmer_hat};
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
		
		class DDA_farmer_hat: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Brown Farmer Hat";
			picture = "";
			model = "\dda_Headgear\farmer_hat\farmer_hat.p3d";
			hiddenSelectionsTextures[] = {"dda_Headgear\farmer_hat\data\famer_hat_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\farmer_hat\farmer_hat.p3d";
			};
		};
};