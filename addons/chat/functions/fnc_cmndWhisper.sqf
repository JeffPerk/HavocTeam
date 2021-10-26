#include "\z\havoc\addons\chat\script_component.hpp"
/*
 * Name = HAVOC_chat_fnc_cmndWhisper
 * Author = Freddo
 *
 * Syntaxes:
 * #whisper <player> <message> - Sends message in hint to target player
 *
 * Return Value:
 * Void
 *
 * Description:
 * See Syntaxes
 */

IS_CMND_AVAILABLE(GVAR(whisperUsage),"#whisper");

params [["_arg", ""]];

if (_arg isEqualTo "") exitWith {
    systemChat "HAVOC Error: No argument passed. Command usage: #whisper <player> <message>";
};

private _parts = _arg splitString " ";
private _name = _parts select 0;

_parts deleteAt 0;

private _message = _parts joinString " ";
if (_message isEqualTo "") exitWith {
    systemChat "HAVOC Error: No message passed. Command usage: #whisper <player> <message>";
};
private _unit = [_name] call FUNC(findMatch);

if (!isNull _unit) then {
    parseText format ["<t size='1.25'>Whisper from %1</t><br />%2", name player, _message] remoteExecCall ["hint", _unit];
    systemChat format ["HAVOC: Whisper sent to %1", name _unit];
} else {
    systemChat FORMAT_1("HAVOC Error: No unit found containing %1, or more than one found.", str _message);
};
