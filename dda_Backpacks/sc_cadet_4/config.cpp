class CfgPatches {
    class dda_Backpacks_SC_Cadet_4 {
        author="Dark Days Ahead Team";
        requiredVersion=0.1;
        requiredAddons[]={"A3_Characters_F"};
		addonRootClass = "dda_Backpacks";
		weapons[]={"sc_cadet_4"};
    };
};

class cfgVehicles {
	class dda_Bag_Base;
    class sc_cadet_4: dda_Bag_Base {
		author = "Dark Days Ahead Team";
		scope = 2;
		model = "dda_Backpacks\sc_cadet_4\box_bag.p3d";
		displayName = "SC Cadet";
		picture = "";
		hiddenSelectionsTextures[]={"dda_Backpacks\sc_cadet_4\data\sc_cadet_4_CA.paa"};
		maximumLoad = 160;
		mass = 20;
    };
};