#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "Creature.h"
class Medusa : public Creature
{
public:
	Medusa();
	~Medusa();
	void attack(int, int, Creature*);
	void defend(int);
	int getGazeCount();

private:
	int attack1;
	int attack2;
	int gazeCount;
	void atkRoll();
	void defRoll();
};
#endif

