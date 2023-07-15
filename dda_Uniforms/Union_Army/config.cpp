#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a

class CfgPatches {
	class dda_Uniforms_union {
		units[]={
			"dda_B_Union_INF",
			"dda_B_Union_LCPL",
			"dda_B_Union_I2LT",
			"dda_B_Union_CCPL",
			"dda_B_Union_C2LT",
			"dda_B_Union_ACPL",
			"dda_B_Union_A2LT",
			"dda_B_Union_CAV",
			"dda_B_Union_ART"
		};
		weapons[]={
			"dda_Uniform_Union_INF",
			"dda_Uniform_Union_LCPL",
			"dda_Uniform_Union_I2LT",
			"dda_Uniform_Union_CCPL",
			"dda_Uniform_Union_C2LT",
			"dda_Uniform_Union_ACPL",
			"dda_Uniform_Union_A2LT",
			"dda_Uniform_Union_CAV",
			"dda_Uniform_Union_ART"
		};
		requiredVersion=0.1;
		addonRootClass = "dda_Uniforms";
		requiredAddons[]={"A3_Characters_F"};
	};
};

class CfgVehicles {								// Character classes are defined under cfgVehicles.
	class B_Soldier_base_F;						// For inheritance to work, the base class has to be defined.
	class dda_B_Union_INF : B_Soldier_base_F {		// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
		author = "Dark Days Ahead Team";		// The name of the author of the asset, which is displayed in the editor.
		editorCategory = "dda_UA_EdCat";
		scope = 2;								// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 2;						// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;						// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};		// Identity Types are explained in the Headgear section of this guide.
		displayName = "Union Infantry";		// The name of the soldier, which is displayed in the editor.
		cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = {1, 1, 0.8};				// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "dda_Uniforms\union_army\unionuniform.p3d";			// The path to the model this character uses.
		uniformClass = "dda_Uniform_Union_INF";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"camo","camo1"};						// List of model selections which can be changed with hiddenSelectionTextures[]
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_INF_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		hiddenSelectionsMaterials[] = {
			"dda_Uniforms\union_army\data\union_jacket.rvmat",
			"dda_Uniforms\union_army\data\union_pants.rvmat"
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
	
	class dda_B_Union_LCPL : dda_B_Union_INF {
		displayName = "Union LCPL";
		uniformClass = "dda_Uniform_Union_LCPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_ICPL_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
	};
	
	class dda_B_Union_I2LT : dda_B_Union_INF {
		displayName = "Union I2LT";
		uniformClass = "dda_Uniform_Union_I2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_I2LT_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
	};
	
	class dda_B_Union_CCPL : dda_B_Union_INF {
		displayName = "Union CCPL";
		uniformClass = "dda_Uniform_Union_CCPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_CCPL_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
	};
	
	class dda_B_Union_C2LT : dda_B_Union_INF {
		displayName = "Union C2LT";
		uniformClass = "dda_Uniform_Union_C2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_C2LT_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
	};
	
	class dda_B_Union_ACPL : dda_B_Union_INF {
		displayName = "Union ACPL";
		uniformClass = "dda_Uniform_Union_ACPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_ACPL_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
	};
	
	class dda_B_Union_A2LT : dda_B_Union_INF {
		displayName = "Union A2LT";
		uniformClass = "dda_Uniform_Union_A2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_A2LT_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
	};
	
	class dda_B_Union_CAV : dda_B_Union_INF {
		displayName = "Union CAV";
		uniformClass = "dda_Uniform_Union_CAV";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_CAV_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
	};
	
	class dda_B_Union_ART : dda_B_Union_INF {
		displayName = "Union ART";
		uniformClass = "dda_Uniform_Union_ART";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_ART_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
	};
};

class cfgWeapons {
	class UniformItem;
	class Uniform_Base;
	class dda_Uniform_Union_INF : Uniform_Base {
		author = "Dark Days Ahead Team";
		displayName = "Union Uniform Infantry";
		scope = 2;
		picture = "";
		model = "dda_Uniforms\union_army\unionuniform.p3d";
		hiddenSelections[] = {
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_INF_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		hiddenSelectionsMaterials[] = {
			"dda_Uniforms\union_army\data\union_jacket.rvmat",
			"dda_Uniforms\union_army\data\union_pants.rvmat"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\union_army\unionuniform.p3d";
			uniformclass = dda_B_Union_INF;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_Union_LCPL : dda_Uniform_Union_INF {
		displayName = "Union Uniform Infantry";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_ICPL_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\union_army\unionuniform.p3d";
			uniformclass = dda_B_Union_LCPL;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_Union_I2LT : dda_Uniform_Union_INF {
		displayName = "Union Uniform I2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_I2LT_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\union_army\unionuniform.p3d";
			uniformclass = dda_B_Union_I2LT;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_Union_CCPL : dda_Uniform_Union_INF {
		displayName = "Union Uniform CCPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_CCPL_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\union_army\unionuniform.p3d";
			uniformclass = dda_B_Union_CCPL;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_Union_C2LT : dda_Uniform_Union_INF {
		displayName = "Union Uniform C2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_C2LT_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\union_army\unionuniform.p3d";
			uniformclass = dda_B_Union_C2LT;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_Union_ACPL : dda_Uniform_Union_INF {
		displayName = "Union Uniform ACPL";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_ACPL_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\union_army\unionuniform.p3d";
			uniformclass = dda_B_Union_ACPL;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_Union_A2LT : dda_Uniform_Union_INF {
		displayName = "Union Uniform A2LT";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_A2LT_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\union_army\unionuniform.p3d";
			uniformclass = dda_B_Union_A2LT;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_Union_CAV : dda_Uniform_Union_INF {
		displayName = "Union Uniform Cavalry";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_CAV_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\union_army\unionuniform.p3d";
			uniformclass = dda_B_Union_CAV;
			containerclass = Supply40;
			mass = 40;
		};
	};
	
	class dda_Uniform_Union_ART : dda_Uniform_Union_INF {
		displayName = "Union Uniform Artillery";
		hiddenSelectionsTextures[] = {
			"dda_Uniforms\union_army\data\Union_Sackcoat_ART_CA.paa",
			"dda_Uniforms\union_army\data\jack_union_trousers_CA.paa"
		};
		
		class ItemInfo: UniformItem {
			uniformModel = "dda_Uniforms\union_army\unionuniform.p3d";
			uniformclass = dda_B_Union_ART;
			containerclass = Supply40;
			mass = 40;
		};
	};
};
