#include <iostream>;
#include <string>;


using namespace std;

class Building {
private: 
	int year;
	string type;

public:
	void set_data(int y, string t) {
		year = y;
		type = t;
	}

	void get_info() {
		cout << "Type: " << type << ". Year: " << year << endl;
	}
};

int main() {
	
	setlocale(LC_ALL, "RU");

	Building school;
	//school.type = "�����";
	//school.year = 2000;
	school.set_data(2000, "�����");
	school.get_info();

	Building hospital;
	hospital.set_data(1990, "��������");
	hospital.get_info();
	
}