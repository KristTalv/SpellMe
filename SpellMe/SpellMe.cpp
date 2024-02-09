#include <iostream>
#include <clocale>
#include <string>
#include "Character.h";
#include "Weapon.h";
#include "Config.h";
using namespace std;

int main()
{
	locale::global(locale("fi_FI.UTF-8"));
	bool isOn = true;
	string inPut;
	Character myCharacter;
	Weapon longSword;
	Config config;

	cout << config.managerInfo;
	myCharacter.PrintAll();

	while (isOn)
	{

		cin >> inPut;
		if (inPut == "P" || inPut == "p")
		{
			myCharacter.PrintAll();
		}
		else if (inPut == "HP" || inPut == "hp")
		{
			int damage;
			wcout << " Sy�t� vahinko: \n";
			cin >> damage;
			myCharacter.CalculateHP(damage);
		}
		else if (inPut == "C" || inPut == "c")
		{
			myCharacter.ResetValues();
		}
		else if (inPut == "SL" || inPut == "sl")
		{
			int points;
			wcout << " Montako spelli� k�ytit: \n";
			cin >> points;
			myCharacter.CalculateSpells(points);
		}
		else if (inPut == "HE" || inPut == "he")
		{
			int points;
			wcout << " Paljonko healing pointseja k�ytit: \n";
			cin >> points;
			myCharacter.CalculateHealPoints(points);
		}
		else if (inPut == "A" || inPut == "a")
		{
			int dice;
			wcout << L" D 20 silm�luku: \n";
			cin >> dice;
			longSword.ToHit(dice);
		}
		else if (inPut == "D" || inPut == "d")
		{
			int dice;
			wcout << " D 8 silm�luku: \n";
			cin >> dice;
			longSword.DealDamage(dice);
		}
	}
}

