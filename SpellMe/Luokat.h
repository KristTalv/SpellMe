#pragma once
#include <iostream>
#include <string>
#include <clocale>
//#include "Luokat.h";
using namespace std;

//class Character
//{
//public:
//	const string _name = "Dorah Den Astoria";
//	const int _maxHP = 20;
//	int _damage = 0;
//	int _currentHP;
//	int _level_1_Spelslots = 2;
//	int _healPoolPoints = 10;
//	int CalculateHP(int damage);
//	int CalculateSpells(int points);
//	int CalculateHealPoints(int points);
//	void PrintAll();
//	int ResetValues();
//
//	// konstruktori
//	Character() : _currentHP(_maxHP) {} 
//};

//class Weapon
//{
//public:
//	const string _nameWeapon;
//	const int _toHit;
//	int _toHitTotal;
//	const int _damageAdd;
//	int _totalDamage;
//
//	int DealDamage(int dice);
//	int ToHit(int dice);
//
//	// Konstruktori
//	Weapon() :_nameWeapon("LongSword"),  _toHit(5), _damageAdd(5), _totalDamage(0), _toHitTotal(0) {}
//
//};
//
//int Weapon::DealDamage(int dice)
//{
//	_totalDamage = _damageAdd + dice;
//	wcout << " Damage: " << _totalDamage << " \n";
//	return _totalDamage;
//}
//int Weapon::ToHit(int dice)
//{
//	_toHitTotal = _toHit + dice;
//	wcout << " ToHit: " << _toHitTotal << " \n";
//	return _toHitTotal;
//}