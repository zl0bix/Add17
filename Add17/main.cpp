#include<iostream>
#include"Wolf.hpp"
#include"Bird.hpp"
class Calculator {
	static double previusResult;
public:
	static double sum(double num1, double num2) {
		return previusResult = (num1 + num2);
	}
	
	static double diff(double num1, double num2) {
		return previusResult = (num1 - num2);
	}
	static double mult(double num1, double num2) {
		return previusResult = (num1 * num2);
	}
	static double div(double num1, double num2) {
		return previusResult = (num1 / num2);
	}
	inline static double getPreviosResult() {return previusResult;}
};
double Calculator::previusResult = 0.0;

int main() {

	/*std::cout << Calculator::div(12, 2) << '\n';
	std::cout << Calculator::getPreviosResult() << '\n';*/
	Creature c1;
	c1.moveTo(22,1);
	Wolf w1;
	std::cout << w1.getHp() << std::endl;
	
	w1.moveTo(5, 7);

	Bird b1;
	b1.moveTo(1, 11);
	//Creature* pcrt = &c1;
	//pcrt->moveTo(11111, 1);
	Creature* pcrt = new Bird();
	pcrt->moveTo(7, 7);

	return {};
}