#include "stdafx.h"
#include "Combat.h"
#include "Creature.h"
#include "Vampire.h"
#include "BlueMen.h"
#include "HarryPotter.h"
#include "Medusa.h"
#include "Barbarian.h"
#include <iostream>


Combat::Combat()
{
	round = 0;
}


Combat::~Combat()
{
}


void Combat::fight(Creature *attackingCreature, Creature *defendingCreature)
{
	
	while (attackingCreature->getStrengthPoints() > 0 && defendingCreature->getStrengthPoints() > 0)
	{
		std::cout << "Round " << round + 1 << ":" << std::endl;
		attackingCreature->atkRoll();
		defendingCreature->defRoll();
		attackingCreature->attack(attackingCreature->getAttackValue(), defendingCreature->getArmor(), defendingCreature);
		defendingCreature->defend(attackingCreature->getAttackValue());
		std::cout << std::endl;
		if (defendingCreature->getStrengthPoints() > 0 && attackingCreature->getStrengthPoints() > 0)
		{
			defendingCreature->atkRoll();
			attackingCreature->defRoll();
			defendingCreature->attack(defendingCreature->getAttackValue(), attackingCreature->getArmor(), attackingCreature);
			attackingCreature->defend(defendingCreature->getAttackValue());
			std::cout << std::endl;
			round++;
		}
	}
	
	
}

void Combat::pickCreatures()
{
	std::cout << "What is the first creature that you would like to choose?" << std::endl;
	std::cout << "Enter the number of the Creature you want to choose." << std::endl;
	std::cout << "1 - Vampire" << std::endl;
	std::cout << "2 - Barbarian" << std::endl;
	std::cout << "3 - Blue Men" << std::endl;
	std::cout << "4 - Medusa" << std::endl;
	std::cout << "5 - Harry Potter" << std::endl;

	std::cin >> creaturePick;
	while (std::cin.fail() || (creaturePick < 1 || creaturePick > 5))
	{
		std::cout << "Please enter an number between 1-5." << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> creaturePick;
	}
	
	if (creaturePick == 1)
	{
		creature1 = new Vampire;
	}
	else if (creaturePick == 2)
	{
		creature1 = new Barbarian;
	}
	else if (creaturePick == 3)
	{
		creature1 = new BlueMen;
	}
	else if (creaturePick == 4)
	{
		creature1 = new Medusa;
	}
	else if (creaturePick == 5)
	{
		creature1 = new HarryPotter;
	}

	std::cout << "What is the second creature that you would like to choose?" << std::endl;
	std::cout << "Enter the number of the Creature you want to choose." << std::endl;
	std::cout << "1 - Vampire" << std::endl;
	std::cout << "2 - Barbarian" << std::endl;
	std::cout << "3 - Blue Men" << std::endl;
	std::cout << "4 - Medusa" << std::endl;
	std::cout << "5 - Harry Potter" << std::endl;

	std::cin >> creaturePick;
	while (std::cin.fail() || (creaturePick < 1 || creaturePick > 5))
	{
		std::cout << "Please enter an number between 1-5." << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> creaturePick;
	}

	if (creaturePick == 1)
	{
		creature2 = new Vampire;
	}
	else if (creaturePick == 2)
	{
		creature2 = new Barbarian;
	}
	else if (creaturePick == 3)
	{
		creature2 = new BlueMen;
	}
	else if (creaturePick == 4)
	{
		creature2 = new Medusa;
	}
	else if (creaturePick == 5)
	{
		creature2 = new HarryPotter;
	}

	randPick = rand() % 2 + 1;
	std::cout << randPick << std::endl;
	if (randPick == 1)
	{
		std::cout << creature1->getName() << " will be going first!" << std::endl;
	}
	else if (randPick == 2)
	{
		Creature* temp;
		temp = creature1;
		creature1 = creature2;
		creature2 = temp;
		std::cout << creature1->getName() << " will be going first!" << std::endl;
	}
}

Creature * Combat::getCreature1()
{
	return creature1;
}

Creature * Combat::getCreature2()
{
	return creature2;
}
