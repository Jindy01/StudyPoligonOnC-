#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	//int nums[5];
	//nums[0] = 12;
	//nums[1] = 24;
	//nums[2] = 48;
	//nums[3] = 48;
	//nums[4] = 48;

	//nums[0] = 14;
 //
	//cout << nums[0] << endl;

	//float nums2[3] = { 4, 6, 8 };

	//for (int i = 0; i < 3; i++) {

	//	cout << "el: " << i << ":" << nums2[i] << endl;
	//}

	//float numbers[5];

	//for (int i = 0; i < 5; i++) {
	//	cout << "Enter number" << i << ": ";
	//	cin >> numbers[i];
	//	}

	/*float summa = 0;
	float min = numbers[0];

	for (int i = 0; i < 5; i++) {
		summa += numbers[i];	
		if (numbers[i] < min)
			min = numbers[i];
	}
	cout << "Summa: " << summa << endl;
	cout << "Min number " << min << endl;*/

	//for (int i = 0; i < 5; i++) {
	//	cout << "el: " << numbers[i] << endl;
	//}

	float arr_numbers[5];
	arr_numbers[0] = 1;
	arr_numbers[1] = 10;
	arr_numbers[2] = 100;
	arr_numbers[3] = 1000;
	arr_numbers[4] = 10000;

	for (int i = 6; i < arr_numbers[i]; ++i) {
		cout << "el: " << arr_numbers[i] << endl;
	}

	//	Matrix 
	int martrix[3][3] = {
		{3, 5, 6},
		{7, 2, 0},
		{1, 0, 2}
	};

	cout << martrix[1][2] << endl; 
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << martrix[i][j];
		}
	}


	return 0;
}