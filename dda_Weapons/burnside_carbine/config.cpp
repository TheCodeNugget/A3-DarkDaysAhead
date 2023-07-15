class cfgPatches {
	class dda_Weapons_Burnside_Carbine {
		addonRootClass = "dda_Weapons";
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		author = "Dark Days Ahead Team";
		units[] = {};
		weapons[] = {"dda_Burnside_Carbine"};
	};
};

class cfgWeapons {
	
	class dda_LongRifle_Base;
	class dda_Burnside_Carbine: dda_LongRifle_Base {
		dlc = "DDA";
		author = "Dark Days Ahead Team";	
        scope = 2;
        scopeArsenal = 2;
		baseWeapon = "dda_Burnside_Carbine";
        handAnim[] = {"OFP2_ManSkeleton", "\DDA_Weapons\burnside_carbine\anim\burnside_rifle_Handanim.rtm"};
        model = "\DDA_Weapons\burnside_carbine\burnside_carbine.p3d";
        displayName = "Burnside Carbine";
        descriptionShort = "Carbine";
        magazines[] = {"DDA_burnside_Magazine"};
        magazineWell[] 	= {};
        reloadAction = "GestureReloadMX";
		initspeed = 950;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		discreteDistance[] = {100};
		maxZeroing = 600;
		hiddenSelections[]={"Camo1"};
		hiddenSelectionsTextures[] = {"\DDA_Weapons\burnside_carbine\data\burnside_carbine_co.paa"};
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

class CfgAmmo {
	class B_338_Ball;
	class DDA_Burnside_ball: B_338_Ball {
		tracerScale = 2;
		tracersEvery = 1;
	};
};

class CfgMagazines {
	class 30Rnd_556x45_Stanag;
	class DDA_Burnside_Magazine: 30Rnd_556x45_Stanag {
		displayname							= "13.72mm Burnside Round";
		displaynameshort					= "Burnside Round";
		ammo								= "DDA_Burnside_ball";
		count								= 1;
		initspeed							= 950;
		//picture 							= "";
		descriptionshort					= "Burnside Muzzleload Bullet";
		mass								= 1;
		tracersEvery 						= 1;
	};
};