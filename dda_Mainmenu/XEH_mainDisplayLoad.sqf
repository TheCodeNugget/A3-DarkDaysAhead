#include "\a3\Ui_f\hpp\defineResincl.inc"
#include "\a3\Ui_f\hpp\defineResinclDesign.inc"
#include "\a3\Ui_f\hpp\defineDIKCodes.inc"
{
    _x ctrlSetTooltip "Dark days ahead";
    _x ctrlSetText "mainmenu\logo.paa";
} forEach ((allControls _display) select {(ctrlClassName _x) in ["Logo", "LogoApex"]});