#include "stdafx.h"
#include "Creature.h"


Creature::Creature()
{
}


Creature::~Creature()
{
}

std::string Creature::getName()
{
	return name;
}

int Creature::getArmor()
{
	return armor;
}

int Creature::getStrengthPoints()
{
	return strengthPoints;
}

int Creature::getDefendValue()
{
	return defendValue;
}

int Creature::getAttackValue()
{
	return attackValue;
}

void Creature::setAttackValue(int atkValue, int armrValue)
{
	attackValue = atkValue - armrValue;
}

void Creature::doDamage(int atkValue, int strValue)
{
	if (atkValue < 0)
	{
		atkValue = 0;
	}
	strengthPoints = strValue - atkValue;
}

void Creature::setStrengthPoints(int newStrengthPoint)
{
	strengthPoints = newStrengthPoint;
}
