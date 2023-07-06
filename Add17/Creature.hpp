#pragma once
#include <iostream>
class Creature{
protected:
	unsigned short hp;
	unsigned short x;
	unsigned short y;

public:
	Creature();
	unsigned short getHp();
	virtual void moveTo(int x, int y);

};



