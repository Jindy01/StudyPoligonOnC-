#include <iostream>

using namespace std;

int main() {
	
	srand(time(NULL));
	setlocale(LC_ALL, "RU");

	////////for (int i = 100; i >= 10 ; i--) {
	////////	if (i % 2 == 0) {
	////////		continue;
	////////	}
	////////	cout << "1 - el: " << i << endl;
	////////}

	////////float j = 100;
	////////while (j > 1) {
	////////	cout << "2 - el: " << j << endl;
	////////	j /= 1.5f;
	////////}

	////////int k = 100;
	////////do {
	////////	cout << "3 - el: " << k << endl;
	////////	k -= 10;
	////////} while (k < 10);

	//	Мини игра для ПК

	int rand_num = 1 + rand() % 15;
	bool stop = false;
	int user_input;
	
	do {
		cout << "Enter number: ";
		cin >> user_input;

		if (user_input != rand_num) 
			cout << "You guessed wrong" << endl;
		if (user_input > rand_num) {
			cout << "Try reducing it" << endl;
		}
		else  (user_input < rand_num) {
			cout << "Try more" << endl;
		}
		else
			stop = true;
	} while (!stop);

	cout << "You guessed" << endl;

	return 0;
}