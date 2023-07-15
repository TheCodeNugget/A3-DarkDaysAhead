class CfgPatches {
	class DDA_Headgear {
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
		weapons[] = {"DDA_9th_forage_officer"};
	};	
};

class cfgWeapons {
	class ItemCore;
	class H_HelmetB: ItemCore {
		class ItemInfo;
	};
	
	class DDA_9th_forage_officer: H_HelmetB {
		author = "Dark Days Ahead Team";
		displayName = "9th Forage Officer";
		picture = "";
		model = "\dda_Headgear\9th_forage_officer\9th_forage_officer.p3d";
		hiddenSelectionsTextures[] = {"\dda_Headgear\9th_forage_officer\data\9th_forage_officer_CA.paa"};
		class ItemInfo: ItemInfo {
			mass = 2;
			uniformModel = "\dda_Headgear\9th_forage_officer\9th_forage_officer.p3d";
		};
	};
};