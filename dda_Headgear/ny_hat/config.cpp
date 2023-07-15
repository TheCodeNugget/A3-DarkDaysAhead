class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_ny_hat};
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
		
		class DDA_ny_hat: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Lincoln Highlanders Cap";
			picture = "";
			model = "\dda_Headgear\ny_hat\ny_hat.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\ny_hat\data\ny_hat_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\ny_hat\ny_hat.p3d";
			};
		};
};