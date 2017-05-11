#include "stdafx.h"
#include "BlueMen.h"
#include <iostream>

BlueMen::BlueMen()
{
	name = "Blue Men";
	armor = 3;
	strengthPoints = 12;
}


BlueMen::~BlueMen()
{
}

void BlueMen::attack(int atkValue, int defArmor, Creature* enemyCreature)
{
	attackValue = atkValue - defArmor;
	if (attackValue < 0)
	{
		attackValue = 0;
	}
}

void BlueMen::atkRoll()
{
	attack1 = rand() % 10 + 1;
	std::cout << getName() << "'s first attack hit for " << attack1 << "!" << std::endl;
	attack2 = rand() % 10 + 1;
	std::cout << getName() << "'s second attack hit for " << attack2 << "!" << std::endl;
	attackValue = attack1 + attack2;
}

void BlueMen::defRoll()
{
	if (strengthPoints > 8)
	{
		defend1 = rand() % 6 + 1;
		std::cout << getName() << "'s first defense is " << defend1 << std::endl;
		defend2 = rand() % 6 + 1;
		std::cout << getName() << "'s second defense is " << defend2 << std::endl;
		defend3 = rand() % 6 + 1;
		std::cout << getName() << "'s third defense is " << defend3 << std::endl;
		defendValue = defend1 + defend2 + defend3;
		std::cout << getName() << " defended for " << defendValue << std::endl;
	}
	else if (strengthPoints > 4 && strengthPoints < 9)
	{
		defend1 = rand() % 6 + 1;
		std::cout << getName() << "'s first defense is " << defend1 << std::endl;
		defend2 = rand() % 6 + 1;
		std::cout << getName() << "'s second defense is " << defend2 << std::endl;
		defendValue = defend1 + defend2;
		std::cout << getName() << " defended for " << defendValue << std::endl;
	}
	else if (strengthPoints < 5)
	{
		defendValue = rand() % 6 + 1;
		std::cout << getName() << " defended for " << defendValue << std::endl;
	}
}

void BlueMen::defend(int atkDmg)
{
	if (atkDmg < 0)
	{
		atkDmg = 0;
	}
	strengthPoints -= atkDmg;
	std::cout << getName() << " has " << getArmor() << " armor and will reduce damage by a total of " << defendValue + getArmor() << "!" << std::endl;
	std::cout << getName() << " took " << atkDmg << " damage and now has " << strengthPoints << " strength Points" << std::endl;
}

