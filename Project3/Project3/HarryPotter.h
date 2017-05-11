#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include "Creature.h"
class HarryPotter : public Creature
{
public:
	HarryPotter();
	~HarryPotter();
	void attack(int, int, Creature*);
	void defend(int);
	void atkRoll();
	void defRoll();
private:
	int attack1;
	int attack2;
	int defend1;
	int defend2;
	bool hogwarts;
};
#endif

