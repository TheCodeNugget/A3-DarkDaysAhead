class CfgPatches {
	class dda_Weapons_Springfield_1861 {
		addonRootClass = "dda_Weapons";
		requiredAddons[] = {"A3_Weapons_F", "dda_Weapons"};
		requiredVersion = 0.1;
		author = "Dark Days Ahead Team";
		units[] = {};
		weapons[] = {"dda_Springfield_1861"};
	};
};

class cfgWeapons {
	
	class dda_LongRifle_Base;
	class dda_Springfield_1861: dda_LongRifle_Base {
		dlc = "DDA";
		author = "Dark Days Ahead Team";	
        scope = 2;
        scopeArsenal = 2;
		baseWeapon = "dda_Springfield_1861";
        handAnim[] = {"OFP2_ManSkeleton", "\DDA_Weapons\springfield_1861\anim\springfield_1861_Handanim.rtm"};
        model = "\DDA_Weapons\springfield_1861\springfield_1861.p3d";
        displayName = "Springfield 1855";
        descriptionShort = "Musket";
        magazines[] = {"DDA_springfield_1861_Magazine"};
        magazineWell[] 	= {};
        reloadAction = "GestureReloadMX";
		initspeed = 410;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		discreteDistance[] = {100};
		maxZeroing = 600;
		hiddenSelections[]={"Camo1"};
		hiddenSelectionsTextures[] = {"\DDA_Weapons\springfield_1861\data\springfield_1861_CA.paa"};
		picture = "";
        modes[] = {"Single"};
		
		class BaseSoundModeType {
			weaponSoundEffect="DefaultRifle";
			closure1[]= {
				"DDA_Weapons\springfield_1861\sounds\Musket_shot.wss",
				0.5,
				20,
				10
			};
			closure2[]= {
				"DDA_Weapons\springfield_1861\sounds\Musket_shot.wss",
				0.25,
				120,
				10
			};
			soundClosure[]= {
				"closure1",
				0.5,
				"closure2",
				0.5
			};
		};
		
		class StandardSound: BaseSoundModeType {
			begin1[]= {
				"DDA_Weapons\springfield_1861\sounds\Musket_shot.wss",
				1,
				1,
				1300
			};
			begin2[]= {
				"DDA_Weapons\springfield_1861\sounds\Musket_shot.wss",
				1,
				1,
				1300
			};
			begin3[]= {
				"DDA_Weapons\springfield_1861\sounds\Musket_shot.wss",
				1,
				1,
				1300
			};
			soundBegin[]= {
				"begin1",
				0.33000001,
				"begin2",
				0.33000001,
				"begin3",
				0.34
			};
		};
		reloadTime = 0.35; //0.6
		dispersion = 0.00015;
		recoil = "recoil_single_gm6";
		recoilProne = "recoil_single_gm6";
		minRange = 2;
		minRangeProbab = 0.25;
		midRange = 800;
		midRangeProbab = 0.75;
		maxRange = 2000;
		maxRangeProbab = 0.25;
		aiDispersionCoefY = 0.1;
		aiDispersionCoefX = 0.1;
        class WeaponSlotsInfo {
			mass = 70;
        };
    };
};

class CfgMagazines {
	class 30Rnd_556x45_Stanag;
	class DDA_springfield_1861_Magazine: 30Rnd_556x45_Stanag {
		displayname							= "Round Ball";
		displaynameshort					= "Round Ball";
		ammo								= "DDA_Springfield_Ball";
		count								= 1;
		initspeed							= 410;
		//picture 							= "";
		descriptionshort					= "Standard ammunition for the Springfield";
		mass								= 1;
		tracersEvery 						= 0;
	};
};

class CfgAmmo {
	class B_338_Ball;
	class DDA_Springfield_Ball: B_338_Ball {
		tracerScale = 2;
		tracersEvery = 1;
	};
};