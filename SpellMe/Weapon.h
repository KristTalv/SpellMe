#pragma once
#include <iostream>
#include <string>
#include <clocale>
using namespace std;

class Weapon
{
private:
	Config config;
	string myWeaponName = config.myWeaponName;
	int toHitt = config.toHit;
	int addDamage = config.addDamage;
public:
	const string _nameWeapon;
	const int _toHit;
	int _toHitTotal;
	const int _damageAdd;
	int _totalDamage;

	int DealDamage(int dice);
	int ToHit(int dice);

	// Konstruktori
	Weapon() :_nameWeapon(myWeaponName), _toHit(toHitt), _damageAdd(addDamage), _totalDamage(0), _toHitTotal(0) {}
};

