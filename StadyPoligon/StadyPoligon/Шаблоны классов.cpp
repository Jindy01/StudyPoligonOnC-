#include <iostream>;
#include <string>;

using namespace std;

template <class T>  
class Arrays {
private:
	int len;
	T* arr;
public:

	Arrays(T* a, int len) {
		this->len = len;
		arr = new T[len];
		for (int i = 0; i < len; i++)
			*(arr + i) = *(a + i);
	}

	void get() {
		for (int i = 0; i < len; i++)
			cout << *(arr + i) << " ";

		cout << endl;
	}

	~Arrays() {
		delete[] arr;
	}
};

int main() {

	int arr[] = { 3, 4, 5 };
	Arrays<int> obj(arr, 3); 
	obj.get();

	float arr2[] = { 3.62f, 4.214f, 5.52f };
	Arrays<float> obj2(arr2, 3);
	obj2.get();
}