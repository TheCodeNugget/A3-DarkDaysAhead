class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_csa_havelock};
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
		
		class DDA_csa_havelock: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(CSA) Kepi";
			picture = "";
			model = "\dda_Headgear\csa_havelock\csa_havelock.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\csa_havelock\data\csa_havelock_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\csa_havelock\csa_havelock.p3d";
			};
		};
};