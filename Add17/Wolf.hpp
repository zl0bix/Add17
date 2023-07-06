#pragma once
#include"Creature.hpp"
class Wolf : public Creature {
public:
	void moveTo(int x, int y) override;
};

