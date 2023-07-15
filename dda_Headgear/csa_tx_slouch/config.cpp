class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_csa_tx_slouch};
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
		
		class DDA_csa_tx_slouch: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "(CSA) Texas Slouch";
			picture = "";
			model = "dda_Headgear\csa_tx_slouch\csa_tx_slouch.p3d";
			hiddenSelectionsTextures[] = {"dda_Headgear\csa_tx_slouch\data\csa_tx_slouchhat_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "dda_Headgear\csa_tx_slouch\csa_tx_slouch.p3d";
			};
		};
};