class cfgPatches {
	class dda_Vests {
		weapons[] = {"dda_Cap_Box", "dda_Cap_Box_1"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};	
};

class cfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore {
		class ItemInfo;
	};
	
	class dda_Cap_Box: Vest_Camo_Base {
		author = "Dark Days Ahead Team";
		scope = 2;
		displayName = "Cap Box";
		//picture = "_";
		model = "dda_Vests\capbox\capbox.p3d";
		hiddenSelectionsTextures[] = {"dda_Vests\capbox\data\capbox_CA.paa"};
		class ItemInfo: ItemInfo {
			uniformModel = "dda_Vests\capbox\capbox.p3d";			
			containerClass = Supply80;		
			mass = 15;
			
			class HitpointsProtectionInfo { //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
				class Chest {
						hitPointName = "HitChest";
						armor = 16;
						passThrough = 0.3;
				};
			};
		};
	};
	class dda_Cap_Box_1: dda_Cap_Box {
		displayName = "Cap Box Red";
		hiddenSelectionsTextures[] = {"dda_Vests\capbox\data\Cap_Box_1_CA.paa"};
	};
};
