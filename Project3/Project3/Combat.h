#ifndef COMBAT_HPP
#define COMBAT_HPP
#include "Creature.h"
class Combat
{
public:
	Combat();
	~Combat();
	void fight(Creature*, Creature*);
	void pickCreatures();
	Creature* getCreature1();
	Creature* getCreature2();
private:
	int round;
	int creaturePick;
	int randPick;
	Creature* creature1;
	Creature* creature2;
	
};
#endif
