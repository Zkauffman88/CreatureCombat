#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>

class Creature
{
public:
	Creature();
	~Creature();
	std::string getName();
	int getArmor();
	int getStrengthPoints();
	int getDefendValue();
	virtual void atkRoll() = 0;
	virtual void defRoll() = 0;
	virtual void attack(int, int, Creature*)=0;
	virtual void defend(int)=0;
	int getAttackValue();
	void setAttackValue(int, int);
	virtual void doDamage(int, int);
	virtual void setStrengthPoints(int);
protected:
	std::string name;
	int armor;
	int strengthPoints;
	int attackValue;
	int defendValue;
	int damage;
	
private:

};
#endif
