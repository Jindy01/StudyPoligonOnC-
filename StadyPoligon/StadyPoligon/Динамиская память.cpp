#include <iostream>;
#include <string>;

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");
	
	int *nums = new int[3];

	nums[0] = 45;
	cout << nums[0] << endl;
	delete[] nums;

	cout << "Работает" << endl;

	string words = "Hello, World !";
	cout << "\n" << words << endl;

	cin >> words;
	cout << words;

				
	return 0;
}