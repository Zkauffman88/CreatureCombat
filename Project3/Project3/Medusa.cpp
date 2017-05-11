#include "stdafx.h"
#include "Medusa.h"
#include <iostream>


Medusa::Medusa()
{
	name = "Medusa";
	armor = 3;
	strengthPoints = 8;
	gazeCount = 0;
}


Medusa::~Medusa()
{
}

void Medusa::atkRoll()
{
	attack1 = rand() % 6 + 1;
	attack2 = rand() % 6 + 1;
	attackValue = attack1 + attack2;
	std::cout << getName() << "'s first hit was " << attack1 << " and second hit was " << attack2 <<" for a total of " << attackValue << "!" << std::endl;
}

void Medusa::defRoll()
{
	defendValue = rand() % 6 + 1;
	//std::cout << getName() << " defended for " << defendValue << std::endl;
}

int Medusa::getGazeCount()
{
	return gazeCount;
}

void Medusa::attack(int atkValue, int defArmor, Creature* enemy)
{
	if (atkValue == 12)
	{
		gazeCount++;
		std::cout << getName() << " used Gaze!************************" << std::endl;
		attackValue = enemy->getStrengthPoints() + enemy->getArmor() + enemy->getDefendValue();
		std::cout << "ATTACK VALUE GAZE IS " << attackValue << std::endl;
 	}
	else 
	{
		attackValue = atkValue - defArmor;
		std::cout << enemy->getName() << " mitigated " << enemy->getArmor() << " damage with armor, and " << enemy->getDefendValue() << " damage with defense" << std::endl;
		std::cout << enemy->getName() << " took " << attackValue << " damage and was left with " << enemy->getStrengthPoints() << " strength points." << std::endl;
		if (attackValue < 0)
		{
			attackValue = 0;
		}
	}
}

void Medusa::defend(int atkDmg)
{
	strengthPoints -= atkDmg;
	std::cout << getName() << " has " << getArmor() << " armor and will reduce damage by a total of " << defendValue + getArmor() << "!" << std::endl;
	std::cout << getName() << " took " << atkDmg << " damage and now has " << strengthPoints << " strength Points" << std::endl;
}
