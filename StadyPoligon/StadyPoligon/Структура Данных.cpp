#include <iostream>;
#include <string>;

using namespace std;


struct Point {
	int x, y;
};

struct Tree {
	string name;
	int age;
	bool is_alive;
	float height;
	Point place;

	void get_info() {
		cout << "Name: " << name 
			<< ". Age: " 
			<< age << endl;
	}
};

int main() {

	setlocale(LC_ALL, "RU");

	Tree dub;
	dub.name = "ƒуб";
	dub.age = 24;
	dub.place.x = 100;
	dub.place.y = 10;


	Tree yelka;
	yelka.name = "®лка";
	yelka.age = 5;
	yelka.place.x = 40;
	yelka.place.y = 60;

	cout << dub.name << " - " << yelka.name << endl;

	dub.get_info();
	yelka.get_info();

	return 0;
}