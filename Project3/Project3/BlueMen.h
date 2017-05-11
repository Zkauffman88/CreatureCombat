#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP
#include "Creature.h"
class BlueMen : public Creature
{
public:
	BlueMen();
	~BlueMen();
	void attack(int, int, Creature*);
	void defend(int);
	
private:
	void atkRoll();
	void defRoll();
	int attack1;
	int attack2;
	int defend1;
	int defend2;
	int defend3;
};
#endif

