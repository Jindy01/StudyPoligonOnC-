#include <iostream>;

int main() {
	setlocale(LC_ALL, "RU");

	unsigned short numShort = 9;
	unsigned int numInt = 5;
	unsigned long numLong = 52;

	std::cout << numShort << numInt << numLong << std::endl;

	float numFloat = 5.24421f;
	double numDouble = 2.422451252f;

	std::cout << numFloat << std::endl;
	std::cout << numDouble << std::endl;

	char oneSumbol = 'W';

	std::cout << oneSumbol << std::endl;

	bool isHappy = false;
	
}