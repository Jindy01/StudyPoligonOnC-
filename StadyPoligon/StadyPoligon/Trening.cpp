#include <iostream>;

using namespace std;

int stack_of_arr_numbers(int numb) {

	for (int i = 0; i < numb; ++i) {
		
	}

}

void read_arr(int* arr, int size) {

	for (int i = 0; i < size; ++i) {
		if (arr < 6) {
			continue;
		}
		cout << *(arr + i) << " " << endl;

	}

}

int main() {

	int arr[] = { 1, 5, 6, 2, 8 };
	read_arr(arr, sizeof(arr) / sizeof(arr[0]));

	return 0;
}
