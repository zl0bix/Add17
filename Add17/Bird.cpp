#include "Bird.hpp"

Bird::Bird() {

}

void Bird::moveTo(int x, int y) {
	std::cout << "Bird flies to " << (this->x = x) << ':' << (this->y = y) << '\n';
}
