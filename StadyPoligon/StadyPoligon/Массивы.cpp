#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int nums[5];
	nums[0] = 12;
	nums[1] = 24;
	nums[2] = 48;
	nums[3] = 48;
	nums[4] = 48;

	nums[0] = 14;
 
	cout << nums[0] << endl;

	float nums2[3] = { 4, 6, 8 };

	for (int i = 0; i < 3; i++) {

		cout << "el: " << i << ":" << nums2[i] << endl;
	}


	return 0;
}