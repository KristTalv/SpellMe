#pragma once
#include <iostream>
#include <string>
#include <clocale>
#include "Config.h";
using namespace std;

class Character
{
private:
	Config config;
	int healPoints = config.healingPoolPoints;
	int numOfSpellSlots = config.numOfSpellSlots;
	int myHP = config._hP;
	string myCharaName = config._characterName;
public:
	const string _name;
	const int _maxHP;
	int _damage;
	int _currentHP;
	int _level_1_Spelslots;
	int _healPoolPoints;

	int CalculateHP(int damage);
	int CalculateSpells(int points);
	int CalculateHealPoints(int points);
	void PrintAll();
	int ResetValues();

	// konstruktori
	Character() : _maxHP(myHP), _name(myCharaName), _currentHP(_maxHP), _healPoolPoints(healPoints),
		_damage(0), _level_1_Spelslots(numOfSpellSlots) {}
};
