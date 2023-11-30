#include <iostream>;
#include <string>;

using namespace std;

void divide(float a, float b) {

	if (b == 0) throw 100;
	else cout << (a / b);
}

int main() {


	try {
	divide(5.2f, 0.0f);
	}
	catch (int err) {
		if (err == 100) {
			cout << "You can't divide by zero" << endl;
		}
	}

	return 0;
}