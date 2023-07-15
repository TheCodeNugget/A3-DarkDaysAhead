#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a

class CfgPatches {
	class dda_Uniforms_CSA {
		units[]={
			"dda_O_CSA_INF",
			"dda_O_CSA_LCPL",
			"dda_O_CSA_I2LT",
			"dda_O_CSA_CCPL",
			"dda_O_CSA_C2LT",
			"dda_O_CSA_ACPL",
			"dda_O_CSA_A2LT",
			"dda_O_CSA_CAV",
			"dda_O_CSA_ART"
		};
		weapons[]={
			"dda_Uniform_CSA_INF",
			"dda_Uniform_CSA_LCPL",
			"dda_Uniform_CSA_I2LT",
			"dda_Uniform_CSA_CCPL",
			"dda_Uniform_CSA_C2LT",
			"dda_Uniform_CSA_ACPL",
			"dda_Uniform_CSA_A2LT",
			"dda_Uniform_CSA_CAV",
			"dda_Uniform_CSA_ART"
		};
		requiredVersion=0.1;
		addonRootClass = "dda_Uniforms";
		requiredAddons[]={"A3_Characters_F"};
	};
};

class CfgVehicles {								// Character classes are defined under cfgVehicles.
	class O_Soldier_base_F;						// For inheritance to work, the base class has to be defined.
	class dda_O_CSA_INF : O_Soldier_base_F {		// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
		author = "Dark Days Ahead Team";		// The name of the author of the asset, which is displayed in the editor.
		editorCategory = "dda_CSA_EdCat";
		scope = 2;								// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;						// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;						// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};		// Identity Types are explained in the Headgear section of this guide.
		displayName = "CSA Infantry";		// The name of the soldier, which is displayed in the editor.
		cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "dda_Uniforms\CSA\CSAuniform.p3d";			// The path to the model this character uses.
		uniformClass = "dda_Uniform_CSA_INF";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"camo","camo1"};						// List of model selections which can be changed with hiddenSelectionTextures[]
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_INF_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		hiddenSelectionsMaterials[] = {
			"dda_Uniforms\CSA\data\csa_jacket.rvmat",
			"dda_Uniforms\CSA\data\csa_pants.rvmat"
		};
		weapons[] = {"dda_Burnside_Carbine", "Throw", "Put"};				// Which weapons the character has.
		respawnWeapons[] = {"dda_Burnside_Carbine", "Throw", "Put"};		// Which weapons the character respawns with.
		Items[] = {FirstAidKit};											// Which items the character has.
		RespawnItems[] = {FirstAidKit};										// Which items the character respawns with.
		magazines[] = {
			MAG_12("DDA_Burnside_Magazine")
			};	// What ammunition the character has.
		respawnMagazines[] = {
			MAG_12("DDA_Burnside_Magazine")
			};	// What ammunition the character respawns with.
		linkedItems[] = {"dda_Cap_Box", "DDA_us_hat", "ItemMap", "ItemCompass", "ItemWatch"};				// Which items the character has.
		respawnLinkedItems[] = {"dda_Cap_Box", "DDA_us_hat", "ItemMap", "ItemCompass", "ItemWatch"};		// Which items the character respawns with.
	};
	
	class dda_O_CSA_LCPL : dda_O_CSA_INF {
		displayName = "CSA LCPL";
		uniformClass = "dda_Uniform_CSA_LCPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_ICPL_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
	};
	
	class dda_O_CSA_I2LT : dda_O_CSA_INF {
		displayName = "CSA I2LT";
		uniformClass = "dda_Uniform_CSA_I2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_I2LT_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
	};
	
	class dda_O_CSA_CCPL : dda_O_CSA_INF {
		displayName = "CSA CCPL";
		uniformClass = "dda_Uniform_CSA_CCPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_CCPL_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
	};
	
	class dda_O_CSA_C2LT : dda_O_CSA_INF {
		displayName = "CSA C2LT";
		uniformClass = "dda_Uniform_CSA_C2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_C2LT_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
	};
	
	class dda_O_CSA_ACPL : dda_O_CSA_INF {
		displayName = "CSA ACPL";
		uniformClass = "dda_Uniform_CSA_ACPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_ACPL_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
	};
	
	class dda_O_CSA_A2LT : dda_O_CSA_INF {
		displayName = "CSA A2LT";
		uniformClass = "dda_Uniform_CSA_A2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_A2LT_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
	};
	
	class dda_O_CSA_CAV : dda_O_CSA_INF {
		displayName = "CSA CAV";
		uniformClass = "dda_Uniform_CSA_CAV";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_CAV_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
	};
	
	class dda_O_CSA_ART : dda_O_CSA_INF {
		displayName = "CSA ART";
		uniformClass = "dda_Uniform_CSA_ART";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_ART_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
	};
};

class cfgWeapons {
	class UniformItem;
	class Uniform_Base;
	class dda_Uniform_CSA_INF : Uniform_Base {
		author = "Dark Days Ahead Team";
		displayName = "CSA Uniform Infantry";
		scope = 2;
		picture = "";
		model = "dda_Uniforms\CSA\CSAuniform.p3d";
		hiddenSelections[] = {
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_INF_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		hiddenSelectionsMaterials[] = {
			"dda_Uniforms\CSA\data\csa_jacket.rvmat",
			"dda_Uniforms\CSA\data\csa_pants.rvmat"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\CSA\CSAuniform.p3d";
			uniformclass = dda_O_CSA_INF;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_CSA_LCPL : dda_Uniform_CSA_INF {
		displayName = "CSA Uniform Infantry";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_ICPL_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\CSA\CSAuniform.p3d";
			uniformclass = dda_O_CSA_LCPL;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_CSA_I2LT : dda_Uniform_CSA_INF {
		displayName = "CSA Uniform I2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_I2LT_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\CSA\CSAuniform.p3d";
			uniformclass = dda_O_CSA_I2LT;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_CSA_CCPL : dda_Uniform_CSA_INF {
		displayName = "CSA Uniform CCPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_CCPL_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\CSA\CSAuniform.p3d";
			uniformclass = dda_O_CSA_CCPL;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_CSA_C2LT : dda_Uniform_CSA_INF {
		displayName = "CSA Uniform C2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_C2LT_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\CSA\CSAuniform.p3d";
			uniformclass = dda_O_CSA_C2LT;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_CSA_ACPL : dda_Uniform_CSA_INF {
		displayName = "CSA Uniform ACPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_ACPL_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\CSA\CSAuniform.p3d";
			uniformclass = dda_O_CSA_ACPL;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_CSA_A2LT : dda_Uniform_CSA_INF {
		displayName = "CSA Uniform A2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_A2LT_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\CSA\CSAuniform.p3d";
			uniformclass = dda_O_CSA_A2LT;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_CSA_CAV : dda_Uniform_CSA_INF {
		displayName = "CSA Uniform Cavalry";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_CAV_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\CSA\CSAuniform.p3d";
			uniformclass = dda_O_CSA_CAV;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_CSA_ART : dda_Uniform_CSA_INF {
		displayName = "CSA Uniform Artillery";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\CSA\data\CSA_Sackcoat_ART_CA.paa",
			"dda_Uniforms\CSA\data\CSA_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\CSA\CSAuniform.p3d";
			uniformclass = dda_O_CSA_ART;
			containerclass = Supply40;
			mass = 40;
		};
	};
};
