#include <iostream>;
#include <algorithm>;


using namespace std;

int stack_of_arr_numbers(int numb) {

	for (int i = 0; i < numb; ++i) {
		break;
	}
	return 0;
}

void read_arr(int* arr, int size) {

	for (int i = 0; i < size; ++i) {

		cout << *(arr + i) << " " << endl;

	}

}

int main() {
	cout << "First arr" << endl;
	int arr[] = { 1, 5, 6, 2, 8 };
	read_arr(arr, sizeof(arr) / sizeof(arr[0]));

	

	sort(begin(arr), end(arr));
	cout << "Second arr" << endl;
	read_arr(arr, sizeof(arr) / sizeof(arr[0]));

	return 0; 

	//	New lesson for WinForm 
}
