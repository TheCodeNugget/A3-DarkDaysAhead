class CfgPatches
{
	class DDA_Weapons
	{
		author="DDA Dev Team";
		name="DDA Weapons";
		requiredVersion	= 1.0;
		requiredAddons[] = {"A3_characters_F","A3_Data_F"};
		units[]	= {};
		weapons[] = {};
		magazines[] = {};
	};
};

// ----------------- Base Config Stuff ----------------- //
class Mode_SemiAuto;
class SlotInfo;
class MuzzleSlot;
class ItemCore;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class Rifle_Base_F;
class Pistol_Base_F;
class UGL_F;
class GunParticles;


class cfgWeapons
{
	class Rifle_Base_F;
	class Pistol_Base_F;
	class DDA_Base_Pistol : Pistol_Base_F {
		class WeaponSlotsInfo {
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
// ----------------- Heavy Dragoon Pistol Stuff ----------------- //
	class DDA_ColtDragoon: DDA_Base_Pistol
	{
		scope = 2;
		author = "Flying Gang Studios";
		displayName = "Colt Dragoon";
		descriptionshort = "Colt Dragoon<br/>Caliber: .66";
		picture = "";
		model = "DDA_Weapons\ColtDragoon.p3d";		
		magazines[]	= {"Colt_Dragoon_Cylinder"};
		drySound[] = {};
		reloadMagazineSound[]={"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
		inertia	= 0.2;
		recoil = "recoil_gm6";
		modes[]	= {"Single"};
		reloadAction = "GestureReloadPistolHeavy02";
		hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"DDA_Weapons\ColtDragoon_co.paa"};
		//GestureReloadPistolHeavy02
		magazineReloadSwitchPhase = 0;
		
		class Single: Mode_SemiAuto
 		{
 			sounds[] = {StandardSound, SilencedSound};

 			class BaseSoundModeType;
 			class StandardSound: BaseSoundModeType
 			{
				soundSetShot[]=
                {
                    "P07_Shot_SoundSet",
                    "P07_Tail_SoundSet",
                    "P07_InteriorTail_SoundSet"
                };
 			};

 			class SilencedSound: BaseSoundModeType
 			{
				SoundSetShot[]=
                {
                    "P07_silencerShot_SoundSet",
                    "P07_silencerTail_SoundSet",
                    "P07_silencerInteriorTail_SoundSet"
                };
 			};
			//Only works with mutliple rounds in a mag, we need a reload anim in order to lengthen the reload time
			reloadTime = 1;
			dispersion = 0.00831;
			//AI Stuff
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
 		};
		
		class WeaponSlotsInfo {
			mass = 40;
			allowedSlots[] = {};
			
			class MuzzleSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
			
			class PointerSlot {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
				iconScale = 0.1;
			};
		};
	};
};

// ----------------- Ammo Config Stuff ----------------- //
class CfgAmmo
{
	class B_762x51_Ball;
	class DDA_Ball_44: B_762x51_Ball
	{
		airFriction	= -0.0023;
		hit	= 12;
		indirectHit = 0;
		indirectHitRange = 0;
		caliber	= 1.4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;		
		cartridge = "";
		visibleFire = 5;
		audibleFire = 9;
		visibleFireTime	= 5;
		cost = 4;
		typicalSpeed = 280;
		//soundHitBody1[]	= {"",1,1};
		//soundHit[] = {"",1,1};
		//model = "\1715_weapons\data\ammo\1715_ball_69.p3d";
	};
};

// ----------------- Magazine Config Stuff ----------------- //
class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class Colt_Dragoon_Cylinder: 20Rnd_762x51_Mag
	{
		scope = 2;
		author = "Flying Gang Studios";
		count = 6;
		displayName	= "Colt Dragoon cylinder";
		descriptionShort = "Colt Dragoon stuff";
		picture	= "";
		ammo = "DDA_Ball_44";
		displaynameshort = ".44 Balls";
		mass = 5;
	};
};