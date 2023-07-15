class cfgPatches {
	class dda_Backpacks {
		requiredAddons[] = {"A3_Characters_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"dda_Bag_Base"};
	};
};

class cfgVehicles {
	class Bag_Base;
	class dda_Bag_Base: Bag_Base {
		author = "Dark Days Ahead Team";
		scope = 1;
		model = "a3\weapons_f\ammoboxes\bags\backpack_compact.p3d";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelectionsTextures[]={"a3\weapons_f\ammoboxes\bags\data\backpack_compact_digi_co.paa"};
		maximumLoad = 160;
		mass = 20;
	};
};