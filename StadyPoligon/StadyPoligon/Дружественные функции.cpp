#include <iostream>;
#include <string>;


using namespace std;

class Person {

private:
	int age;
	string name;
public:
	void info_car(Car &car, Person &person) {
		cout << "������� � ������: " << endl;
	}

};

class Car {

private:
	string name;
public:
	void info_car() {

	}
};

int main() {
	setlocale(LC_ALL, "RU");

	

}