#include "Creature.hpp"


Creature::Creature():hp(unsigned short(100)),x(0),y(0){}

unsigned short Creature::getHp(){ return hp; }
void Creature::moveTo(int x, int y) {
	std::cout << "Creature goes to " << (this->x = x) << ':' << (this->y = y) << '\n';
}
;

