#include "Wolf.hpp"

void Wolf::moveTo(int x, int y) {
	std::cout << "Wolf goes to " << (this->x = x) << ':' << (this->y = y) << '\n';
}
