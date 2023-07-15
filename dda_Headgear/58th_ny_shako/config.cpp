class CfgPatches
{
	class DDA_Headgear
	{
		weapon[] = {DDA_58th_ny_shako};
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
		
		class DDA_58th_ny_shako: H_HelmetB
		{
			author = "Dark Days Ahead Team";
			displayName = "58th NY Shako";
			picture = "";
			model = "\dda_Headgear\58th_ny_shako\58th_ny_shako.p3d";
			hiddenSelectionsTextures[] = {"\dda_Headgear\58th_ny_shako\data\58th_ny_shako_CA.paa"};
			class ItemInfo: ItemInfo
			{
				mass = 2;
				uniformModel = "\dda_Headgear\58th_ny_shako\58th_ny_shako.p3d";
			};
		};
};