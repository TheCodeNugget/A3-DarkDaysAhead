class CfgPatches {
	class mainmenu {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Map_Altis","A3_Map_Stratis","A3_Map_Stratis_Scenes", "A3_Map_Altis_Scenes", "A3_Map_Enoch"};
	
	};
};
class Extended_DisplayLoad_EventHandlers
{
	class RscDisplayMain
	{
		mac_intro="call compileScript ['mainmenu\XEH_mainDisplayLoad.sqf', true]";
	};
};

class CfgWorlds {
	class CAWorld;	
	class Altis : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};
	
	class Stratis : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	class Enoch : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	class VR : CAWorld {
		cutscenes[] = {"mymainmenu"};
	};

	initWorld = "Stratis";
	demoWorld = "Stratis";
};

class CfgMissions
{
	class Cutscenes
	{
		class mymainmenu 
		{
			directory = "mainmenu\scenes\mainmenu.stratis"; 
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