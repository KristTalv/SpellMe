#include <iostream>
#include <string>
#include <clocale>
#include "Character.h";
using namespace std;

int Character::CalculateHP(int damage)
{
	_currentHP = _currentHP - damage;
	if (_currentHP <= 0)
	{
		wcout << "HP: 0, Muistisko Relentless Enduransen? \n";
	}
	else
	{
		wcout << "HP: " << _currentHP << "\n";
	}
	return _currentHP;
}
int Character::CalculateSpells(int points)
{

	_level_1_Spelslots = _level_1_Spelslots - points;
	wcout << "SpelSlottia jäljellä: " << _level_1_Spelslots << "\n";
	return _level_1_Spelslots;
}
int Character::CalculateHealPoints(int points)
{
	_healPoolPoints = _healPoolPoints - points;
	wcout << "Healing Points: " << _healPoolPoints << "\n";
	return _healPoolPoints;
}
void Character::PrintAll()
{
	wcout << "\n\n " << " --------------Hahmo info: ------------- \n";
	cout << "\n " << _name << "\n";
	wcout << " HP: " << _currentHP << "\n";
	wcout << " Level_1 SpellSlots: " << _level_1_Spelslots << "\n";
	wcout << " Healing Points: " << _healPoolPoints << "\n";
}
int Character::ResetValues()
{
	_level_1_Spelslots = 2;
	_healPoolPoints = 10;
	_currentHP = _maxHP;
	PrintAll();
	return _level_1_Spelslots, _healPoolPoints, _currentHP;
}
