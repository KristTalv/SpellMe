#pragma once
#include <iostream>
#include <string>
#include <clocale>
//#include "Luokat.h";
using namespace std;

class Character
{
public:
	const string _name = "Dorah Den Astoria";
	const int _maxHP = 20;
	int _damage = 0;
	int _currentHP;
	int _level_1_Spelslots = 2;
	int _healPoolPoints = 10;
	int CalculateHP(int damage);
	int CalculateSpells(int points);
	int CalculateHealPoints(int points);
	void PrintAll();
	int ResetValues();

	// konstruktori
	Character() : _currentHP(_maxHP) {}
};
