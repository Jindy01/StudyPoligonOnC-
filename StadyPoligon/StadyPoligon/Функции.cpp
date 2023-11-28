#include <iostream>

using namespace std;

void print(string word);
int  calc(int a, int b);
	
int main() {
	
	setlocale(LC_ALL, "RU");

	print("World");
	string words = "WR";
	print(words);
	
	int result = calc(1, 6);
	int result_2 = calc(15, 61);

	if (result > result_2) {
		cout << result << endl;
	}
	else {
		cout << "Второй результат: " << result_2 << endl;
	}

	cout << result << endl;
}

void print(string word) {

	cout << word << endl;
}

int  calc(int a, int b) {

	return a + b;
}