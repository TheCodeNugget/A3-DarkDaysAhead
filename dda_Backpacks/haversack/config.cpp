class CfgPatches {
    class dda_Backpacks_Haversack {
        author="Dark Days Ahead Team";
        requiredVersion=0.1;
        requiredAddons[]={"A3_Characters_F"};
		addonRootClass = "dda_Backpacks";
		weapons[]={"haversack"};
    };
};

class cfgVehicles {
	class dda_Bag_Base;
    class haversack: dda_Bag_Base {
		author = "Dark Days Ahead Team";
		scope = 2;
		model = "dda_Backpacks\haversack\haversack.p3d";
		displayName = "Haversack";
		picture = "";
		hiddenSelectionsTextures[]={"dda_Backpacks\haversack\data\haversack_CA.paa"};
		maximumLoad = 160;
		mass = 20;
    };
};