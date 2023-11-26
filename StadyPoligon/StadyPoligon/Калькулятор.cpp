#include <iostream>
#include <time.h>

using namespace std;

int main() {

	srand(time(NULL));

	int rand_result = 1 + rand() % 20;
	cout << rand_result << endl;
	
	float first_num, second_num;
	cout << "Enter first number: ";
	cin >> first_num;

	cout << "Enter second number: ";
	cin >> second_num;

	char math;
	cout << "Enter math sumbol: ";
	cin >> math;

	switch (math) {
	case '+':
		cout << first_num + second_num;
		break;
	case '-':
		cout << first_num - second_num;
		break;
	case '*':
		cout << first_num * second_num;
		break;
	case '/':
		cout << first_num / second_num;
		break;
	default:cout << "Muth sumbol Error" << endl;
	}

	// Сокращение операций :
	
	int a;


	return 0;
}