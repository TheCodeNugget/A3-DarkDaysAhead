class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_gray_pioneer};
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
		
		class DDA_gray_pioneer: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "Gray Pioneer";
			picture = "";
			model = "\dda_Headgear\gray_pioneer\gray_pioneer.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\gray_pioneer\data\gray_pioneer_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\gray_pioneer\gray_pioneer.p3d";
			};
		};
};