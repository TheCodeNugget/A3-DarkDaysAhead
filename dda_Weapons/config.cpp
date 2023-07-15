class cfgPatches {
	class dda_Weapons {
		requiredAddons[] = {"A3_Weapons_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			"dda_Handgun_Base",
			"dda_LongRifle_Base"
		};
	};
};

class cfgWeapons {
	
	class hgun_Pistol_heavy_01_F {class WeaponSlotsInfo;};
	class dda_Handgun_Base: hgun_Pistol_heavy_01_F {
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		displayName	= "-";
		recoil = "recoil_pistol_heavy";
		recoilProne = "recoil_prone_pistol_heavy";
		type = 2;
		magazineWell[] = {};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			allowedSlots[] = {701,901};
			mass = 1;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
    };
	
	class srifle_EBR_F {class WeaponSlotsInfo;};
	class dda_LongRifle_Base: srifle_EBR_F {
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		displayName	= "-";
		recoil = "recoil_single_ebr";
		recoilProne = "recoil_single_prone_ebr";
		magazineWell[] = {};
		hiddenSelections[]={};
		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			allowedSlots[] = {701,901};
			mass = 1;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
		
		class GunParticles {
			class Effect_Cloud1 {
				positionName = "Nabojnicestart";
                directionName  = "Nabojniceend";
				effectName = "DDA_FiringCloud_1";
			};
			class Effect_Cloud2 {
				positionName = "usti hlavne";
				directionName = "smoke_dir";
				effectName = "DDA_FiringCloud_2";
			};
		};
    };
};