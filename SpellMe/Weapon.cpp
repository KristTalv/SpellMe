#include <iostream>
#include <string>
#include <clocale>
#include "Weapon.h";
using namespace std;

int Weapon::DealDamage(int dice)
{
	_totalDamage = _damageAdd + dice;
	wcout << " Damage: " << _totalDamage << " \n";
	return _totalDamage;
}
int Weapon::ToHit(int dice)
{
	_toHitTotal = _toHit + dice;
	wcout << " ToHit: " << _toHitTotal << " \n";
	return _toHitTotal;
}