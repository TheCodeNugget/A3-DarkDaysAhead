class CfgPatches {
    class dda_Backpacks_Haversack_Canteen {
        author="Dark Days Ahead Team";
        requiredVersion=0.1;
        requiredAddons[]={"A3_Characters_F"};
		addonRootClass = "dda_Backpacks";
		weapons[]={"haversack_canteen"};
    };
};

class cfgVehicles {
	class dda_Bag_Base;
	class haversack_canteen: dda_Bag_Base {
		author = "Dark Days Ahead Team";
		scope = 2;
		model = "dda_Backpacks\haversack_canteen\haversack_canteen.p3d";
		displayName = "Haversack Canteen";
		picture = "";
		hiddenSelectionsTextures[]={"dda_Backpacks\haversack_canteen\data\haversack_canteen_CA.paa"};
		maximumLoad = 160;
		mass = 20;
    };
};