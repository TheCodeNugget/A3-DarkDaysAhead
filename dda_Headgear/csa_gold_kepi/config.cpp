class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_csa_gold_kepi};
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
		
		class DDA_csa_gold_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(CSA) Kepi 2";
			picture = "";
			model = "\dda_Headgear\csa_gold_kepi\csa_gold_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\csa_gold_kepi\data\csa_gold_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\csa_gold_kepi\csa_gold_kepi.p3d";
			};
		};
};