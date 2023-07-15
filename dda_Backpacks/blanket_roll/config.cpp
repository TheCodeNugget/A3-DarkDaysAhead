class CfgPatches {
    class dda_Backpacks_Blanket_Roll {
        author="Dark Days Ahead Team";
        requiredVersion=0.1;
        requiredAddons[]={"A3_Characters_F"};
		addonRootClass = "dda_Backpacks";
		weapons[]={
			"blanket_roll",
			"blanket_roll_1"
			};
    };
};

class cfgVehicles {
	class dda_Bag_Base;
    class blanket_roll: dda_Bag_Base {
		author = "Dark Days Ahead Team";
		scope = 2;
		model = "dda_Backpacks\blanket_roll\blanket_roll.p3d";
		displayName = "Blanket Roll";
		picture = "";
		hiddenSelectionsTextures[]={"dda_Backpacks\blanket_roll\data\blanket_roll_CA.paa"};
		maximumLoad = 160;
		mass = 20;
    };
	
    class blanket_roll_1: blanket_roll {
		model = "dda_Backpacks\blanket_roll\blanket_roll.p3d";
		displayName = "Blanket Roll 1";
		hiddenSelectionsTextures[]={"dda_Backpacks\blanket_roll\data\blanket_roll_1_CA.paa"};
		maximumLoad = 160;
		mass = 20;
    };
};