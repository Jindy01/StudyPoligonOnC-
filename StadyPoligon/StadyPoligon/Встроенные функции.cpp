#include <iostream>;
#include <string>;
#include <cstring>;
#include <cmath>

using namespace std;

int main() {

	string str1 = "Hello";
	string str2 = "World";

	str1.append(str2);

	short x = 5;

	str1.pop_back(); // ������� ������ ������ �����
	str1.push_back('!'); // ��������� �������� ������ ����� ������
	str1.resize(x); // ��������� ������ �� x ��������


	cout << str1 << " - " << str1.length() << endl;

	cout << pow(2, 3) << endl; // �������� � ������� (x, y);
	cout << abs(-3) << endl;	// ���. �� ������ - ��������� +
	cout << sin(3) << endl; 
	cout << cos(8) << endl;
	cout << sqrt(16) << endl; // ������� ����������	 ������ 
	cout << ceil(1.78f) << endl; // ��������� � ��������	
	cout << floor(1.99f) << endl; // ��������� � �������� 
	cout << round(1.35) << endl; // ��������� � ����������

}