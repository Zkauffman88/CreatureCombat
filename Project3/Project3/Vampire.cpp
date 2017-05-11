#include "stdafx.h"
#include "Vampire.h"
#include "Creature.h"
#include <iostream>


Vampire::Vampire()
{
	name = "Vampire";
	armor = 1;
	strengthPoints = 18;
}


Vampire::~Vampire()
{
}

void Vampire::atkRoll()
{
		attack1 = rand() % 6 + 1;
		std::cout << getName() << "'s first attack hit for " << attack1 << "!" << std::endl;
		attack2 = rand() % 6 + 1;
		std::cout << getName() << "'s second attack hit for " << attack2 << "!" << std::endl;
		attackValue = attack1 + attack2;
}

void Vampire::defRoll()
{
	defendValue = rand() % 6 + 1;
	std::cout << getName() << " defended for " << defendValue << std::endl;
	std::cout << getName() << " has " << getArmor() << " armor and will reduce damage by a total of " << defendValue + getArmor() << "!" << std::endl;
}

void Vampire::attack(int atkValue, int defArmor, Creature* enemy)
{
			attackValue = atkValue - defArmor;
			if (attackValue < 0)
			{
				attackValue = 0;
			}
}


void Vampire::defend(int atkDmg)
{
	charm = false;
	charmRoll = rand() % 2;
	if (charmRoll == 1)
	{
		charm = true;
		atkDmg = 0;
		std::cout << "Vampire uses charm!******************************************" << std::endl;
	}
	strengthPoints -= atkDmg;
	
	std::cout << getName() << " took " << atkDmg << " damage and now has " << strengthPoints << " strength Points" << std::endl;
}



