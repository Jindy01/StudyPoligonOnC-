#include <iostream>;
#include <string>;


using namespace std;

class Building {

private:
	int year;
	string type;

public:

	Building(int y, string t) {
		set_data(y, t);
	}
	Building(int y) { // ���������� ��� Building
		year = y;
		cout << "������ �����������" << endl;
	};

	void set_data(int year, string type) {
		this->year = year;
		this->type = type;
	}

	void get_info() {
		cout << "Type: " << this->type << ". Year: " << year << endl;
	}

	~Building() { // ����������
		cout << "������ �����" << endl;
	}
};

int main() {

	setlocale(LC_ALL, "RU");

	Building school(2000, "�����");
	//school.type = "�����";
	//school.year = 2000;
	//school.set_data(2000, "�����");
	school.get_info();

	Building hospital(1990);
	//hospital.set_data(1990, "��������");
	hospital.get_info();

}