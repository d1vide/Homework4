// Вариант 2
#include "Header.h"

int main() {
	setlocale(0, "");
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	double z = functionZ();
	std::cout << "z=" << z << std::endl;
	double t = functionT(z);
	std::cout << "t=" << t << std::endl;
	return 0;
}