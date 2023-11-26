#include <iostream>;

int main() {
	setlocale(LC_ALL, "RU");

	std::cout << "Работает" << std::endl;

	bool is_has_car = true;
	int num;
	int num2;
	std::cin >> num;
	std::cin >> num2;

	if (num > 5) {
		std::cout << "Число у нас больше " << std::endl;
	}

	else if (num == 4) {
		std::cout << "Число равно 4" << std::endl;
	}

	switch (num2) {
	case 5:
		std::cout << "Число 5" << std::endl;
		break;
	case 10:
		std::cout << "Число 5" << std::endl;
		break;
	case 15:
		std::cout << "Число 5" << std::endl;
		break;
	default:
		std::cout << "Нет подходящих комбинаций" << std::endl;
	}

}