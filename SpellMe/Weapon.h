#pragma once
#include <iostream>
#include <string>
#include <clocale>
using namespace std;

class Weapon
{
public:
	const string _nameWeapon;
	const int _toHit;
	int _toHitTotal;
	const int _damageAdd;
	int _totalDamage;

	int DealDamage(int dice);
	int ToHit(int dice);

	// Konstruktori
	Weapon() :_nameWeapon("LongSword"), _toHit(5), _damageAdd(5), _totalDamage(0), _toHitTotal(0) {}
};

