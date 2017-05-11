#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "Creature.h"
class Barbarian : public Creature
{
public:
	Barbarian();
	~Barbarian();
	void attack(int, int, Creature*);
	void defend(int);

private:
	void atkRoll();
	void defRoll();
	int attack1;
	int attack2;
	int defend1;
	int defend2;
};
#endif
