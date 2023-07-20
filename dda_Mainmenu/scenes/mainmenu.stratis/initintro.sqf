cutText ["", "BLACK FADED", 69];
enableEnvironment false;
showCinemaBorder false;

while {true} do
{
	_video = ["dda_mainmenu\scenes\mainmenu.stratis\Shut-the-hell-up-confederate-scum.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};