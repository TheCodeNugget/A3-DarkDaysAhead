class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_csa_cpt_kepi};
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
		
		class DDA_csa_cpt_kepi: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(CSA) Captain Kepi";
			picture = "";
			model = "\dda_Headgear\csa_cpt_kepi\csa_cpt_kepi.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\csa_cpt_kepi\data\csa_cpt_kepi_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\csa_cpt_kepi\csa_cpt_kepi.p3d";
			};
		};
};