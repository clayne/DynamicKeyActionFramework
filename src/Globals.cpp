#include "Globals.h"

using namespace RE;


PlayerCharacter* Globals::p = nullptr;
PlayerControls* Globals::pc = nullptr;
UI* Globals::ui = nullptr;
ControlMap* Globals::controlMap = nullptr;
UserEvents* Globals::userEvents = nullptr;
BSInputDeviceManager* Globals::inputDeviceManager = nullptr;

void Globals::InitializeGlobalVaribles() {
	p = PlayerCharacter::GetSingleton();
	pc = PlayerControls::GetSingleton();
	ui = UI::GetSingleton();
	controlMap = ControlMap::GetSingleton();
	userEvents = UserEvents::GetSingleton();
	inputDeviceManager = BSInputDeviceManager::GetSingleton();
}
