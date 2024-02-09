#pragma once
#include <iostream>
#include <string>
#include <clocale>
using namespace std;

class Config
{	
public:

	string managerInfo = "\n----------------- Info--------------------- \n\n P printtaa kaiken. \n C palauta arvot. \n HP Laske hela. \n SL kirjaa SpelSlotit. \n HE kirjaa Healing Pointit. \n\n----------------- Taistelu--------------------- \n\n A laske To Hit \n D laske Damagen \n";
	string taulukko[1] = { managerInfo };
};
