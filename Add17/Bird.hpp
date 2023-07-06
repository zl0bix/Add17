#pragma once
#include"Creature.hpp"
class Bird : public Creature {
public:
	Bird();
	void moveTo(int x, int y) override;
};

