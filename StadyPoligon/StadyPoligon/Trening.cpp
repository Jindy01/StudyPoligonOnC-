#include <iostream>;
#include <algorithm>;

using namespace std;

void mainSort(int *arr, int target) {

	int size_arr = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size_arr; i++) {
	
		cout << arr[i] << endl;
		cout << target << endl;

	}



}


int main() {
	
	int arr[] = { 1, 4, 5, 8 };

	mainSort(arr, 2);


}
