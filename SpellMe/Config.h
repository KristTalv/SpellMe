#pragma once
#include <iostream>
#include <string>
#include <clocale>
using namespace std;

class Config
{	
public:

	string _managerInfo = "\n----------------- Info--------------------- \n\n P printtaa kaiken. \n C palauta arvot. \n HP Laske hela. \n SL kirjaa SpelSlotit. \n HE kirjaa Healing Pointit. \n\n----------------- Taistelu--------------------- \n\n A laske To Hit \n D laske Damagen \n";
	string _taulukko[1] = { _managerInfo };

//-------- Character info---------
	string _characterName = "Dorah Den Astoria";
	int _hP = 28;
	int healingPoolPoints = 15;
	int numOfSpellSlots = 3;
//-------Weapon info-------------
	string myWeaponName = "LongSword";
	int toHit = 5;
	int addDamage = 5;
};
