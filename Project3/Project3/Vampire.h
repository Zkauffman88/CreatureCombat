#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "Creature.h"
class Vampire : public Creature
{
public:
	Vampire();
	~Vampire();
	void attack(int, int, Creature*);
	void defend(int);
	void atkRoll();
	void defRoll();
	
private:
	bool charm;
	int charmRoll;
	int attack1;
	int attack2;
	
};
#endif

