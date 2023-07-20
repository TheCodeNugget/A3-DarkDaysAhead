class CfgPatches {
	class dda_mainmenu {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {
			"A3_Map_Altis",
			"A3_Map_Stratis",
			"A3_Map_Stratis_Scenes",
			"A3_Map_Altis_Scenes",
			"A3_Map_Enoch"
		};
	};
};

class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMain
	{
		mac_intro="call compileScript ['dda_mainmenu\XEH_mainDisplayLoad.sqf', true]";
	};
};

class CfgWorlds {
	class CAWorld;	
	class Altis : CAWorld {
		cutscenes[] = {"dda_cutscene_mainmenu"};
	};
	
	class Stratis : CAWorld {
		cutscenes[] = {"dda_cutscene_mainmenu"};
	};

	class Enoch : CAWorld {
		cutscenes[] = {"dda_cutscene_mainmenu"};
	};

	class VR : CAWorld {
		cutscenes[] = {"dda_cutscene_mainmenu"};
	};

	initWorld = "Stratis";
	demoWorld = "Stratis";
};

class CfgMissions
{
	class Cutscenes
	{
		class dda_cutscene_mainmenu 
		{
			directory = "dda_mainmenu\scenes\mainmenu.stratis"; 
		};
	};
};

class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay {
	enableDisplay = 0;
	delete Spotlight;
	class controls {
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
	};
};