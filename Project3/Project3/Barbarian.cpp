#include "stdafx.h"
#include "Barbarian.h"
#include <iostream>

Barbarian::Barbarian()
{
	name = "Barbarian";
	armor = 0;
	strengthPoints = 12;
}


Barbarian::~Barbarian()
{
}

void Barbarian::attack(int atkValue, int defArmor, Creature* enemyCreature)
{
	attackValue = atkValue - defArmor - enemyCreature->getDefendValue();
	if (attackValue < 0)
	{
		attackValue = 0;
	}
}

void Barbarian::defend(int atkDmg)
{
	strengthPoints -= atkDmg;
	std::cout << getName() << " took " << atkDmg << " damage and now has " << strengthPoints << " strength Points" << std::endl;
}


void Barbarian::atkRoll()
{
	attack1 = rand() % 6 + 1;
	attack2 = rand() % 6 + 1;
	attackValue = attack1 + attack2;
	std::cout << getName() << " rolled a " << attack1 << " and a " << attack2 << " for a total of " << attackValue << " damage!" << std::endl;
}

void Barbarian::defRoll()
{
	defend1 = rand() % 6 + 1;
	defend2 = rand() % 6 + 1;
	defendValue = defend1 + defend2;
	std::cout << getName() << " rolled a " << defend1 << " and a " << defend2 << " for a total of " << defendValue << " defense!" << std::endl;
	std::cout << getName() << " has " << getArmor() << " armor and will reduce damage by a total of " << defendValue + getArmor() << "!" << std::endl;
	
}