#include <iostream>;

int main() {
	setlocale(LC_ALL, "RU");

	std::cout << "��������" << std::endl;

	bool is_has_car = true;
	int num;
	int num2;
	std::cin >> num;
	std::cin >> num2;

	if (num > 5) {
		std::cout << "����� � ��� ������ " << std::endl;
	}

	else if (num == 4) {
		std::cout << "����� ����� 4" << std::endl;
	}

	switch (num2) {
	case 5:
		std::cout << "����� 5" << std::endl;
		break;
	case 10:
		std::cout << "����� 5" << std::endl;
		break;
	case 15:
		std::cout << "����� 5" << std::endl;
		break;
	default:
		std::cout << "��� ���������� ����������" << std::endl;
	}

}