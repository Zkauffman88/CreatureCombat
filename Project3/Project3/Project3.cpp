// Project3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include <cstdlib>
#include "Creature.h"
#include "Vampire.h"
#include <iostream>
#include "Barbarian.h"
#include "BlueMen.h"
#include "Combat.h"
#include "Medusa.h"
#include "HarryPotter.h"
int main()
{
	srand(time(NULL));
	Combat* c1 = new Combat;
	Creature* v1 = new Vampire;
	Creature* b1 = new Barbarian;
	Creature* bm1 = new BlueMen;
	Creature* m1 = new Medusa;
	Creature* hp1 = new HarryPotter;
	c1->pickCreatures();
	//c1->fight(c1->getCreature1(), c1->getCreature2());
	c1->fight(v1, b1);
	int z = 0;
	std::cin >> z;
	return 0;
}

