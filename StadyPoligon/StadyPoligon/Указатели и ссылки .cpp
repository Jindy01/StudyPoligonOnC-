#include <iostream>;
#include <string>;

using namespace std;

void minimal(int* arr, int len) {
	int min = *arr;

	for (int i = 0; i < len; i++) {
		if (min > *(arr + i)) {
			min = *(arr + i);
		}

	}
	cout << "Minimal: "	 << min << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	int arr[] = { 5, 7, 3, -2, 6 };
	minimal(arr, 5);


}

int mainss() {
	setlocale(LC_ALL, "RU");

	// Ccылки 
	int num = 10;
	int& a = num;

	a = 15;

	cout << &num << " - " << num << endl;
	cout << &a << " - " << a << endl;

	//”казатели 

	int val = 14;
	int* ptrval = &val;

	*ptrval = 20;
	ptrval = nullptr;

	cout << &val << " - " << val << endl;
	cout << ptrval << " - " << *ptrval << endl;


	return 0;

}
