#include <iostream>;

int arr[] = { 1, 2, 3, 4, 5 };


void check_arr(int arr[], int size) {

    for (int i = 0; i < size ; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

    int main() {
        check_arr(arr, sizeof(arr) / sizeof(arr[0]));

        return 0;
    }

