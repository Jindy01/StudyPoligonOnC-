#include <iostream>;
#include <string>;


using namespace std;

void print_arr(int* arr) {
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << *(arr + i) << " ";

		cout << endl;
	}

}

int main() {
	
	int arr1[] = { 5, 6, 7, 2, 3, -4 };
	print_arr(arr1);

	return 0;
}