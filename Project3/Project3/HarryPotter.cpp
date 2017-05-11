#include "stdafx.h"
#include "HarryPotter.h"
#include <iostream>


HarryPotter::HarryPotter()
{
	name = "Harry Potter";
	armor = 0;
	strengthPoints = 10;
	hogwarts = false;
}


HarryPotter::~HarryPotter()
{
}

void HarryPotter::attack(int atkValue, int defArmor, Creature* enemyCreature)
{
	attackValue = atkValue - defArmor - enemyCreature->getDefendValue();
	if (attackValue < 0)
	{
		attackValue = 0;
	}
}

void HarryPotter::defend(int atkDmg)
{
	if (atkDmg < 0)
	{
		atkDmg = 0;
	}
	strengthPoints -= atkDmg;
	if (strengthPoints < 1 && !hogwarts )
	{
		std::cout << "Harry Potter goes to hogwarts and returns stronger" << std::endl;
		hogwarts = true;
		strengthPoints = 20;
	}
	std::cout << getName() << " took " << atkDmg << " damage and now has " << strengthPoints << " strength Points" << std::endl;
}

void HarryPotter::atkRoll()
{
	attack1 = rand() % 6 + 1;
	attack2 = rand() % 6 + 1;
	attackValue = attack1 + attack2;
	std::cout << getName() << " rolled a " << attack1 << " and a " << attack2 << " for a total of " << attackValue << " damage!" << std::endl;
}

void HarryPotter::defRoll()
{
	defend1 = rand() % 6 + 1;
	defend2 = rand() % 6 + 1;
	defendValue = defend1 + defend2;
	std::cout << getName() << " rolled a " << defend1 << " and a " << defend2 << " for a total of " << defendValue << " defense!" << std::endl;
	std::cout << getName() << " has " << getArmor() << " armor and will reduce damage by a total of " << defendValue + getArmor() << "!" << std::endl;
}
