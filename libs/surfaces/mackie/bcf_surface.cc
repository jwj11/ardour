/*
	Generated by scripts/generate-surface.rb
*/

#include "bcf_surface.h"

#include "controls.h"
#include "mackie_button_handler.h"

using namespace Mackie;

void Mackie::BcfSurface::init_controls()
{
	// intialise groups and strips
	Group * group = 0;
	
	// make sure there are enough strips
	strips.resize( 7 );
	
	group = new Group ( "user" );
	groups["user"] = group;
	
	group = new Group ( "assignment" );
	groups["assignment"] = group;
	
	group = new Group ( "none" );
	groups["none"] = group;
	
	group = new MasterStrip ( "master", 0 );
	groups["master"] = group;
	strips[0] = dynamic_cast<Strip*>( group );
	
	group = new Strip ( "strip_1", 0 );
	groups["strip_1"] = group;
	strips[0] = dynamic_cast<Strip*>( group );
	
	group = new Group ( "cursor" );
	groups["cursor"] = group;
	
	group = new Strip ( "strip_2", 1 );
	groups["strip_2"] = group;
	strips[1] = dynamic_cast<Strip*>( group );
	
	group = new Group ( "functions" );
	groups["functions"] = group;
	
	group = new Group ( "automation" );
	groups["automation"] = group;
	
	group = new Strip ( "strip_3", 2 );
	groups["strip_3"] = group;
	strips[2] = dynamic_cast<Strip*>( group );
	
	group = new Group ( "display" );
	groups["display"] = group;
	
	group = new Strip ( "strip_4", 3 );
	groups["strip_4"] = group;
	strips[3] = dynamic_cast<Strip*>( group );
	
	group = new Strip ( "strip_5", 4 );
	groups["strip_5"] = group;
	strips[4] = dynamic_cast<Strip*>( group );
	
	group = new Strip ( "strip_6", 5 );
	groups["strip_6"] = group;
	strips[5] = dynamic_cast<Strip*>( group );
	
	group = new Group ( "transport" );
	groups["transport"] = group;
	
	group = new Strip ( "strip_7", 6 );
	groups["strip_7"] = group;
	strips[6] = dynamic_cast<Strip*>( group );
	
	group = new Group ( "modifiers" );
	groups["modifiers"] = group;
	
	group = new Group ( "bank" );
	groups["bank"] = group;
	

	// initialise controls
	Fader * fader = 0;
	Pot * pot = 0;
	Button * button = 0;
	Led * led = 0;

	group = groups["strip_1"];
	fader = new Fader ( 0, 1, "gain", *group );
	faders[0x00] = fader;
	controls.push_back( fader );
	group->add( *fader );

	group = groups["strip_2"];
	fader = new Fader ( 1, 2, "gain", *group );
	faders[0x01] = fader;
	controls.push_back( fader );
	group->add( *fader );

	group = groups["strip_3"];
	fader = new Fader ( 2, 3, "gain", *group );
	faders[0x02] = fader;
	controls.push_back( fader );
	group->add( *fader );

	group = groups["strip_4"];
	fader = new Fader ( 3, 4, "gain", *group );
	faders[0x03] = fader;
	controls.push_back( fader );
	group->add( *fader );

	group = groups["strip_5"];
	fader = new Fader ( 4, 5, "gain", *group );
	faders[0x04] = fader;
	controls.push_back( fader );
	group->add( *fader );

	group = groups["strip_6"];
	fader = new Fader ( 5, 6, "gain", *group );
	faders[0x05] = fader;
	controls.push_back( fader );
	group->add( *fader );

	group = groups["strip_7"];
	fader = new Fader ( 6, 7, "gain", *group );
	faders[0x06] = fader;
	controls.push_back( fader );
	group->add( *fader );

	group = groups["master"];
	fader = new Fader ( 7, 1, "gain", *group );
	faders[0x07] = fader;
	controls.push_back( fader );
	group->add( *fader );

	group = groups["strip_1"];
	pot = new Pot ( 16, 1, "vpot", *group );
	pots[0x10] = pot;
	controls.push_back( pot );
	group->add( *pot );

	group = groups["strip_2"];
	pot = new Pot ( 17, 2, "vpot", *group );
	pots[0x11] = pot;
	controls.push_back( pot );
	group->add( *pot );

	group = groups["strip_3"];
	pot = new Pot ( 18, 3, "vpot", *group );
	pots[0x12] = pot;
	controls.push_back( pot );
	group->add( *pot );

	group = groups["strip_4"];
	pot = new Pot ( 19, 4, "vpot", *group );
	pots[0x13] = pot;
	controls.push_back( pot );
	group->add( *pot );

	group = groups["strip_5"];
	pot = new Pot ( 20, 5, "vpot", *group );
	pots[0x14] = pot;
	controls.push_back( pot );
	group->add( *pot );

	group = groups["strip_6"];
	pot = new Pot ( 21, 6, "vpot", *group );
	pots[0x15] = pot;
	controls.push_back( pot );
	group->add( *pot );

	group = groups["strip_7"];
	pot = new Pot ( 22, 7, "vpot", *group );
	pots[0x16] = pot;
	controls.push_back( pot );
	group->add( *pot );

	group = groups["none"];
	pot = new Pot ( 23, 1, "jog", *group );
	pots[0x17] = pot;
	controls.push_back( pot );
	controls_by_name["jog"] = pot;
	group->add( *pot );

	group = groups["none"];
	pot = new Pot ( 46, 1, "external", *group );
	pots[0x2e] = pot;
	controls.push_back( pot );
	controls_by_name["external"] = pot;
	group->add( *pot );

	group = groups["strip_1"];
	button = new Button ( 24, 1, "recenable", *group );
	buttons[0x18] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_2"];
	button = new Button ( 25, 2, "recenable", *group );
	buttons[0x19] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_3"];
	button = new Button ( 26, 3, "recenable", *group );
	buttons[0x1a] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_4"];
	button = new Button ( 27, 4, "recenable", *group );
	buttons[0x1b] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_5"];
	button = new Button ( 28, 5, "recenable", *group );
	buttons[0x1c] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_6"];
	button = new Button ( 29, 6, "recenable", *group );
	buttons[0x1d] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_7"];
	button = new Button ( 30, 7, "recenable", *group );
	buttons[0x1e] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_1"];
	button = new Button ( 32, 1, "solo", *group );
	buttons[0x20] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_2"];
	button = new Button ( 33, 2, "solo", *group );
	buttons[0x21] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_3"];
	button = new Button ( 34, 3, "solo", *group );
	buttons[0x22] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_4"];
	button = new Button ( 35, 4, "solo", *group );
	buttons[0x23] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_5"];
	button = new Button ( 36, 5, "solo", *group );
	buttons[0x24] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_6"];
	button = new Button ( 37, 6, "solo", *group );
	buttons[0x25] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_7"];
	button = new Button ( 38, 7, "solo", *group );
	buttons[0x26] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_1"];
	button = new Button ( 16, 1, "mute", *group );
	buttons[0x10] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_2"];
	button = new Button ( 17, 2, "mute", *group );
	buttons[0x11] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_3"];
	button = new Button ( 18, 3, "mute", *group );
	buttons[0x12] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_4"];
	button = new Button ( 19, 4, "mute", *group );
	buttons[0x13] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_5"];
	button = new Button ( 20, 5, "mute", *group );
	buttons[0x14] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_6"];
	button = new Button ( 21, 6, "mute", *group );
	buttons[0x15] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_7"];
	button = new Button ( 22, 7, "mute", *group );
	buttons[0x16] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_1"];
	button = new Button ( 0, 1, "select", *group );
	buttons[0x00] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_2"];
	button = new Button ( 1, 2, "select", *group );
	buttons[0x01] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_3"];
	button = new Button ( 2, 3, "select", *group );
	buttons[0x02] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_4"];
	button = new Button ( 3, 4, "select", *group );
	buttons[0x03] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_5"];
	button = new Button ( 4, 5, "select", *group );
	buttons[0x04] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_6"];
	button = new Button ( 5, 6, "select", *group );
	buttons[0x05] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_7"];
	button = new Button ( 6, 7, "select", *group );
	buttons[0x06] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_1"];
	button = new Button ( 8, 1, "vselect", *group );
	buttons[0x08] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_2"];
	button = new Button ( 9, 2, "vselect", *group );
	buttons[0x09] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_3"];
	button = new Button ( 10, 3, "vselect", *group );
	buttons[0x0a] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_4"];
	button = new Button ( 11, 4, "vselect", *group );
	buttons[0x0b] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_5"];
	button = new Button ( 12, 5, "vselect", *group );
	buttons[0x0c] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_6"];
	button = new Button ( 13, 6, "vselect", *group );
	buttons[0x0d] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_7"];
	button = new Button ( 14, 7, "vselect", *group );
	buttons[0x0e] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["assignment"];
	button = new Button ( 40, 1, "io", *group );
	buttons[0x28] = button;
	controls.push_back( button );
	controls_by_name["io"] = button;
	group->add( *button );

	group = groups["assignment"];
	button = new Button ( 90, 1, "sends", *group );
	buttons[0x5a] = button;
	controls.push_back( button );
	controls_by_name["sends"] = button;
	group->add( *button );

	group = groups["assignment"];
	button = new Button ( 89, 1, "pan", *group );
	buttons[0x59] = button;
	controls.push_back( button );
	controls_by_name["pan"] = button;
	group->add( *button );

	group = groups["assignment"];
	button = new Button ( 87, 1, "plugin", *group );
	buttons[0x57] = button;
	controls.push_back( button );
	controls_by_name["plugin"] = button;
	group->add( *button );

	group = groups["assignment"];
	button = new Button ( 88, 1, "eq", *group );
	buttons[0x58] = button;
	controls.push_back( button );
	controls_by_name["eq"] = button;
	group->add( *button );

	group = groups["assignment"];
	button = new Button ( 45, 1, "zoom", *group );
	buttons[0x2d] = button;
	controls.push_back( button );
	controls_by_name["zoom"] = button;
	group->add( *button );

	group = groups["bank"];
	button = new Button ( 46, 1, "left", *group );
	buttons[0x2e] = button;
	controls.push_back( button );
	controls_by_name["left"] = button;
	group->add( *button );

	group = groups["bank"];
	button = new Button ( 47, 1, "right", *group );
	buttons[0x2f] = button;
	controls.push_back( button );
	controls_by_name["right"] = button;
	group->add( *button );

	group = groups["bank"];
	button = new Button ( 48, 1, "channel_left", *group );
	buttons[0x30] = button;
	controls.push_back( button );
	controls_by_name["channel_left"] = button;
	group->add( *button );

	group = groups["bank"];
	button = new Button ( 49, 1, "channel_right", *group );
	buttons[0x31] = button;
	controls.push_back( button );
	controls_by_name["channel_right"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 50, 1, "scrub", *group );
	buttons[0x32] = button;
	controls.push_back( button );
	controls_by_name["scrub"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 86, 1, "edit", *group );
	buttons[0x56] = button;
	controls.push_back( button );
	controls_by_name["edit"] = button;
	group->add( *button );

	group = groups["display"];
	button = new Button ( 52, 1, "name_value", *group );
	buttons[0x34] = button;
	controls.push_back( button );
	controls_by_name["name_value"] = button;
	group->add( *button );

	group = groups["display"];
	button = new Button ( 53, 1, "smpte_beats", *group );
	buttons[0x35] = button;
	controls.push_back( button );
	controls_by_name["smpte_beats"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 54, 1, "F1", *group );
	buttons[0x36] = button;
	controls.push_back( button );
	controls_by_name["F1"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 55, 1, "F2", *group );
	buttons[0x37] = button;
	controls.push_back( button );
	controls_by_name["F2"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 56, 1, "F3", *group );
	buttons[0x38] = button;
	controls.push_back( button );
	controls_by_name["F3"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 57, 1, "F4", *group );
	buttons[0x39] = button;
	controls.push_back( button );
	controls_by_name["F4"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 58, 1, "F5", *group );
	buttons[0x3a] = button;
	controls.push_back( button );
	controls_by_name["F5"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 59, 1, "F6", *group );
	buttons[0x3b] = button;
	controls.push_back( button );
	controls_by_name["F6"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 60, 1, "F7", *group );
	buttons[0x3c] = button;
	controls.push_back( button );
	controls_by_name["F7"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 61, 1, "F8", *group );
	buttons[0x3d] = button;
	controls.push_back( button );
	controls_by_name["F8"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 62, 1, "F9", *group );
	buttons[0x3e] = button;
	controls.push_back( button );
	controls_by_name["F9"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 63, 1, "F10", *group );
	buttons[0x3f] = button;
	controls.push_back( button );
	controls_by_name["F10"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 64, 1, "F11", *group );
	buttons[0x40] = button;
	controls.push_back( button );
	controls_by_name["F11"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 65, 1, "F12", *group );
	buttons[0x41] = button;
	controls.push_back( button );
	controls_by_name["F12"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 66, 1, "F13", *group );
	buttons[0x42] = button;
	controls.push_back( button );
	controls_by_name["F13"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 67, 1, "F14", *group );
	buttons[0x43] = button;
	controls.push_back( button );
	controls_by_name["F14"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 68, 1, "F15", *group );
	buttons[0x44] = button;
	controls.push_back( button );
	controls_by_name["F15"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 69, 1, "F16", *group );
	buttons[0x45] = button;
	controls.push_back( button );
	controls_by_name["F16"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 39, 1, "global_solo", *group );
	buttons[0x27] = button;
	controls.push_back( button );
	controls_by_name["global_solo"] = button;
	group->add( *button );

	group = groups["modifiers"];
	button = new Button ( 80, 1, "option", *group );
	buttons[0x50] = button;
	controls.push_back( button );
	controls_by_name["option"] = button;
	group->add( *button );

	group = groups["modifiers"];
	button = new Button ( 73, 1, "cmd_alt", *group );
	buttons[0x49] = button;
	controls.push_back( button );
	controls_by_name["cmd_alt"] = button;
	group->add( *button );

	group = groups["automation"];
	button = new Button ( 74, 1, "on", *group );
	buttons[0x4a] = button;
	controls.push_back( button );
	controls_by_name["on"] = button;
	group->add( *button );

	group = groups["automation"];
	button = new Button ( 75, 1, "rec_ready", *group );
	buttons[0x4b] = button;
	controls.push_back( button );
	controls_by_name["rec_ready"] = button;
	group->add( *button );

	group = groups["functions"];
	button = new Button ( 76, 1, "undo", *group );
	buttons[0x4c] = button;
	controls.push_back( button );
	controls_by_name["undo"] = button;
	group->add( *button );

	group = groups["automation"];
	button = new Button ( 77, 1, "snapshot", *group );
	buttons[0x4d] = button;
	controls.push_back( button );
	controls_by_name["snapshot"] = button;
	group->add( *button );

	group = groups["functions"];
	button = new Button ( 79, 1, "redo", *group );
	buttons[0x4f] = button;
	controls.push_back( button );
	controls_by_name["redo"] = button;
	group->add( *button );

	group = groups["functions"];
	button = new Button ( 71, 1, "marker", *group );
	buttons[0x47] = button;
	controls.push_back( button );
	controls_by_name["marker"] = button;
	group->add( *button );

	group = groups["functions"];
	button = new Button ( 81, 1, "enter", *group );
	buttons[0x51] = button;
	controls.push_back( button );
	controls_by_name["enter"] = button;
	group->add( *button );

	group = groups["functions"];
	button = new Button ( 82, 1, "cancel", *group );
	buttons[0x52] = button;
	controls.push_back( button );
	controls_by_name["cancel"] = button;
	group->add( *button );

	group = groups["functions"];
	button = new Button ( 83, 1, "mixer", *group );
	buttons[0x53] = button;
	controls.push_back( button );
	controls_by_name["mixer"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 91, 1, "frm_left", *group );
	buttons[0x5b] = button;
	controls.push_back( button );
	controls_by_name["frm_left"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 92, 1, "frm_right", *group );
	buttons[0x5c] = button;
	controls.push_back( button );
	controls_by_name["frm_right"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 70, 1, "loop", *group );
	buttons[0x46] = button;
	controls.push_back( button );
	controls_by_name["loop"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 72, 1, "punch_in", *group );
	buttons[0x48] = button;
	controls.push_back( button );
	controls_by_name["punch_in"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 78, 1, "punch_out", *group );
	buttons[0x4e] = button;
	controls.push_back( button );
	controls_by_name["punch_out"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 42, 1, "home", *group );
	buttons[0x2a] = button;
	controls.push_back( button );
	controls_by_name["home"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 41, 1, "end", *group );
	buttons[0x29] = button;
	controls.push_back( button );
	controls_by_name["end"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 44, 1, "rewind", *group );
	buttons[0x2c] = button;
	controls.push_back( button );
	controls_by_name["rewind"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 43, 1, "ffwd", *group );
	buttons[0x2b] = button;
	controls.push_back( button );
	controls_by_name["ffwd"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 93, 1, "stop", *group );
	buttons[0x5d] = button;
	controls.push_back( button );
	controls_by_name["stop"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 94, 1, "play", *group );
	buttons[0x5e] = button;
	controls.push_back( button );
	controls_by_name["play"] = button;
	group->add( *button );

	group = groups["transport"];
	button = new Button ( 31, 1, "record", *group );
	buttons[0x1f] = button;
	controls.push_back( button );
	controls_by_name["record"] = button;
	group->add( *button );

	group = groups["cursor"];
	button = new Button ( 96, 1, "cursor_up", *group );
	buttons[0x60] = button;
	controls.push_back( button );
	controls_by_name["cursor_up"] = button;
	group->add( *button );

	group = groups["cursor"];
	button = new Button ( 97, 1, "cursor_down", *group );
	buttons[0x61] = button;
	controls.push_back( button );
	controls_by_name["cursor_down"] = button;
	group->add( *button );

	group = groups["cursor"];
	button = new Button ( 98, 1, "cursor_left", *group );
	buttons[0x62] = button;
	controls.push_back( button );
	controls_by_name["cursor_left"] = button;
	group->add( *button );

	group = groups["cursor"];
	button = new Button ( 99, 1, "cursor_right", *group );
	buttons[0x63] = button;
	controls.push_back( button );
	controls_by_name["cursor_right"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 100, 1, "dyn", *group );
	buttons[0x64] = button;
	controls.push_back( button );
	controls_by_name["dyn"] = button;
	group->add( *button );

	group = groups["none"];
	button = new Button ( 101, 1, "flip", *group );
	buttons[0x65] = button;
	controls.push_back( button );
	controls_by_name["flip"] = button;
	group->add( *button );

	group = groups["user"];
	button = new Button ( 102, 1, "user_a", *group );
	buttons[0x66] = button;
	controls.push_back( button );
	controls_by_name["user_a"] = button;
	group->add( *button );

	group = groups["user"];
	button = new Button ( 103, 1, "user_b", *group );
	buttons[0x67] = button;
	controls.push_back( button );
	controls_by_name["user_b"] = button;
	group->add( *button );

	group = groups["strip_1"];
	button = new Button ( 104, 1, "fader_touch", *group );
	buttons[0x68] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_2"];
	button = new Button ( 105, 2, "fader_touch", *group );
	buttons[0x69] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_3"];
	button = new Button ( 106, 3, "fader_touch", *group );
	buttons[0x6a] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_4"];
	button = new Button ( 107, 4, "fader_touch", *group );
	buttons[0x6b] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_5"];
	button = new Button ( 108, 5, "fader_touch", *group );
	buttons[0x6c] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_6"];
	button = new Button ( 109, 6, "fader_touch", *group );
	buttons[0x6d] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["strip_7"];
	button = new Button ( 110, 7, "fader_touch", *group );
	buttons[0x6e] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["master"];
	button = new Button ( 111, 1, "fader_touch", *group );
	buttons[0x6f] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["master"];
	button = new Button ( 23, 1, "mute", *group );
	buttons[0x17] = button;
	controls.push_back( button );
	group->add( *button );

	group = groups["none"];
	button = new Button ( 51, 1, "clicking", *group );
	buttons[0x33] = button;
	controls.push_back( button );
	controls_by_name["clicking"] = button;
	group->add( *button );

	group = groups["none"];
	led = new Led ( 113, 1, "smpte", *group );
	leds[0x71] = led;
	controls.push_back( led );
	controls_by_name["smpte"] = led;
	group->add( *led );

	group = groups["none"];
	led = new Led ( 114, 1, "beats", *group );
	leds[0x72] = led;
	controls.push_back( led );
	controls_by_name["beats"] = led;
	group->add( *led );

	group = groups["none"];
	led = new Led ( 115, 1, "solo", *group );
	leds[0x73] = led;
	controls.push_back( led );
	controls_by_name["solo"] = led;
	group->add( *led );

	group = groups["none"];
	led = new Led ( 118, 1, "relay_click", *group );
	leds[0x76] = led;
	controls.push_back( led );
	controls_by_name["relay_click"] = led;
	group->add( *led );

}

void Mackie::BcfSurface::handle_button( MackieButtonHandler & mbh, ButtonState bs, Button & button )
{
	if ( bs != press && bs != release )
	{
		mbh.update_led( button, none );
		return;
	}
	
	LedState ls;
	switch ( button.id() )
	{

		case 0x9028: // io
			switch ( bs ) {
				case press: ls = mbh.io_press( button ); break;
				case release: ls = mbh.io_release( button ); break;
				case neither: break;
			}
			break;

		case 0x905a: // sends
			switch ( bs ) {
				case press: ls = mbh.sends_press( button ); break;
				case release: ls = mbh.sends_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9059: // pan
			switch ( bs ) {
				case press: ls = mbh.pan_press( button ); break;
				case release: ls = mbh.pan_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9057: // plugin
			switch ( bs ) {
				case press: ls = mbh.plugin_press( button ); break;
				case release: ls = mbh.plugin_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9058: // eq
			switch ( bs ) {
				case press: ls = mbh.eq_press( button ); break;
				case release: ls = mbh.eq_release( button ); break;
				case neither: break;
			}
			break;

		case 0x902d: // zoom
			switch ( bs ) {
				case press: ls = mbh.zoom_press( button ); break;
				case release: ls = mbh.zoom_release( button ); break;
				case neither: break;
			}
			break;

		case 0x902e: // left
			switch ( bs ) {
				case press: ls = mbh.left_press( button ); break;
				case release: ls = mbh.left_release( button ); break;
				case neither: break;
			}
			break;

		case 0x902f: // right
			switch ( bs ) {
				case press: ls = mbh.right_press( button ); break;
				case release: ls = mbh.right_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9030: // channel_left
			switch ( bs ) {
				case press: ls = mbh.channel_left_press( button ); break;
				case release: ls = mbh.channel_left_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9031: // channel_right
			switch ( bs ) {
				case press: ls = mbh.channel_right_press( button ); break;
				case release: ls = mbh.channel_right_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9032: // scrub
			switch ( bs ) {
				case press: ls = mbh.scrub_press( button ); break;
				case release: ls = mbh.scrub_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9056: // edit
			switch ( bs ) {
				case press: ls = mbh.edit_press( button ); break;
				case release: ls = mbh.edit_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9034: // name_value
			switch ( bs ) {
				case press: ls = mbh.name_value_press( button ); break;
				case release: ls = mbh.name_value_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9035: // smpte_beats
			switch ( bs ) {
				case press: ls = mbh.smpte_beats_press( button ); break;
				case release: ls = mbh.smpte_beats_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9036: // F1
			switch ( bs ) {
				case press: ls = mbh.F1_press( button ); break;
				case release: ls = mbh.F1_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9037: // F2
			switch ( bs ) {
				case press: ls = mbh.F2_press( button ); break;
				case release: ls = mbh.F2_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9038: // F3
			switch ( bs ) {
				case press: ls = mbh.F3_press( button ); break;
				case release: ls = mbh.F3_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9039: // F4
			switch ( bs ) {
				case press: ls = mbh.F4_press( button ); break;
				case release: ls = mbh.F4_release( button ); break;
				case neither: break;
			}
			break;

		case 0x903a: // F5
			switch ( bs ) {
				case press: ls = mbh.F5_press( button ); break;
				case release: ls = mbh.F5_release( button ); break;
				case neither: break;
			}
			break;

		case 0x903b: // F6
			switch ( bs ) {
				case press: ls = mbh.F6_press( button ); break;
				case release: ls = mbh.F6_release( button ); break;
				case neither: break;
			}
			break;

		case 0x903c: // F7
			switch ( bs ) {
				case press: ls = mbh.F7_press( button ); break;
				case release: ls = mbh.F7_release( button ); break;
				case neither: break;
			}
			break;

		case 0x903d: // F8
			switch ( bs ) {
				case press: ls = mbh.F8_press( button ); break;
				case release: ls = mbh.F8_release( button ); break;
				case neither: break;
			}
			break;

		case 0x903e: // F9
			switch ( bs ) {
				case press: ls = mbh.F9_press( button ); break;
				case release: ls = mbh.F9_release( button ); break;
				case neither: break;
			}
			break;

		case 0x903f: // F10
			switch ( bs ) {
				case press: ls = mbh.F10_press( button ); break;
				case release: ls = mbh.F10_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9040: // F11
			switch ( bs ) {
				case press: ls = mbh.F11_press( button ); break;
				case release: ls = mbh.F11_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9041: // F12
			switch ( bs ) {
				case press: ls = mbh.F12_press( button ); break;
				case release: ls = mbh.F12_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9042: // F13
			switch ( bs ) {
				case press: ls = mbh.F13_press( button ); break;
				case release: ls = mbh.F13_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9043: // F14
			switch ( bs ) {
				case press: ls = mbh.F14_press( button ); break;
				case release: ls = mbh.F14_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9044: // F15
			switch ( bs ) {
				case press: ls = mbh.F15_press( button ); break;
				case release: ls = mbh.F15_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9045: // F16
			switch ( bs ) {
				case press: ls = mbh.F16_press( button ); break;
				case release: ls = mbh.F16_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9027: // global_solo
			switch ( bs ) {
				case press: ls = mbh.global_solo_press( button ); break;
				case release: ls = mbh.global_solo_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9050: // option
			switch ( bs ) {
				case press: ls = mbh.option_press( button ); break;
				case release: ls = mbh.option_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9049: // cmd_alt
			switch ( bs ) {
				case press: ls = mbh.cmd_alt_press( button ); break;
				case release: ls = mbh.cmd_alt_release( button ); break;
				case neither: break;
			}
			break;

		case 0x904a: // on
			switch ( bs ) {
				case press: ls = mbh.on_press( button ); break;
				case release: ls = mbh.on_release( button ); break;
				case neither: break;
			}
			break;

		case 0x904b: // rec_ready
			switch ( bs ) {
				case press: ls = mbh.rec_ready_press( button ); break;
				case release: ls = mbh.rec_ready_release( button ); break;
				case neither: break;
			}
			break;

		case 0x904c: // undo
			switch ( bs ) {
				case press: ls = mbh.undo_press( button ); break;
				case release: ls = mbh.undo_release( button ); break;
				case neither: break;
			}
			break;

		case 0x904d: // snapshot
			switch ( bs ) {
				case press: ls = mbh.snapshot_press( button ); break;
				case release: ls = mbh.snapshot_release( button ); break;
				case neither: break;
			}
			break;

		case 0x904f: // redo
			switch ( bs ) {
				case press: ls = mbh.redo_press( button ); break;
				case release: ls = mbh.redo_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9047: // marker
			switch ( bs ) {
				case press: ls = mbh.marker_press( button ); break;
				case release: ls = mbh.marker_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9051: // enter
			switch ( bs ) {
				case press: ls = mbh.enter_press( button ); break;
				case release: ls = mbh.enter_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9052: // cancel
			switch ( bs ) {
				case press: ls = mbh.cancel_press( button ); break;
				case release: ls = mbh.cancel_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9053: // mixer
			switch ( bs ) {
				case press: ls = mbh.mixer_press( button ); break;
				case release: ls = mbh.mixer_release( button ); break;
				case neither: break;
			}
			break;

		case 0x905b: // frm_left
			switch ( bs ) {
				case press: ls = mbh.frm_left_press( button ); break;
				case release: ls = mbh.frm_left_release( button ); break;
				case neither: break;
			}
			break;

		case 0x905c: // frm_right
			switch ( bs ) {
				case press: ls = mbh.frm_right_press( button ); break;
				case release: ls = mbh.frm_right_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9046: // loop
			switch ( bs ) {
				case press: ls = mbh.loop_press( button ); break;
				case release: ls = mbh.loop_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9048: // punch_in
			switch ( bs ) {
				case press: ls = mbh.punch_in_press( button ); break;
				case release: ls = mbh.punch_in_release( button ); break;
				case neither: break;
			}
			break;

		case 0x904e: // punch_out
			switch ( bs ) {
				case press: ls = mbh.punch_out_press( button ); break;
				case release: ls = mbh.punch_out_release( button ); break;
				case neither: break;
			}
			break;

		case 0x902a: // home
			switch ( bs ) {
				case press: ls = mbh.home_press( button ); break;
				case release: ls = mbh.home_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9029: // end
			switch ( bs ) {
				case press: ls = mbh.end_press( button ); break;
				case release: ls = mbh.end_release( button ); break;
				case neither: break;
			}
			break;

		case 0x902c: // rewind
			switch ( bs ) {
				case press: ls = mbh.rewind_press( button ); break;
				case release: ls = mbh.rewind_release( button ); break;
				case neither: break;
			}
			break;

		case 0x902b: // ffwd
			switch ( bs ) {
				case press: ls = mbh.ffwd_press( button ); break;
				case release: ls = mbh.ffwd_release( button ); break;
				case neither: break;
			}
			break;

		case 0x905d: // stop
			switch ( bs ) {
				case press: ls = mbh.stop_press( button ); break;
				case release: ls = mbh.stop_release( button ); break;
				case neither: break;
			}
			break;

		case 0x905e: // play
			switch ( bs ) {
				case press: ls = mbh.play_press( button ); break;
				case release: ls = mbh.play_release( button ); break;
				case neither: break;
			}
			break;

		case 0x901f: // record
			switch ( bs ) {
				case press: ls = mbh.record_press( button ); break;
				case release: ls = mbh.record_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9060: // cursor_up
			switch ( bs ) {
				case press: ls = mbh.cursor_up_press( button ); break;
				case release: ls = mbh.cursor_up_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9061: // cursor_down
			switch ( bs ) {
				case press: ls = mbh.cursor_down_press( button ); break;
				case release: ls = mbh.cursor_down_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9062: // cursor_left
			switch ( bs ) {
				case press: ls = mbh.cursor_left_press( button ); break;
				case release: ls = mbh.cursor_left_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9063: // cursor_right
			switch ( bs ) {
				case press: ls = mbh.cursor_right_press( button ); break;
				case release: ls = mbh.cursor_right_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9064: // dyn
			switch ( bs ) {
				case press: ls = mbh.dyn_press( button ); break;
				case release: ls = mbh.dyn_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9065: // flip
			switch ( bs ) {
				case press: ls = mbh.flip_press( button ); break;
				case release: ls = mbh.flip_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9066: // user_a
			switch ( bs ) {
				case press: ls = mbh.user_a_press( button ); break;
				case release: ls = mbh.user_a_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9067: // user_b
			switch ( bs ) {
				case press: ls = mbh.user_b_press( button ); break;
				case release: ls = mbh.user_b_release( button ); break;
				case neither: break;
			}
			break;

		case 0x9033: // clicking
			switch ( bs ) {
				case press: ls = mbh.clicking_press( button ); break;
				case release: ls = mbh.clicking_release( button ); break;
				case neither: break;
			}
			break;

	}
	mbh.update_led( button, ls );
}
