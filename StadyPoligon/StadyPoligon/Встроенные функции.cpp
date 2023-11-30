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

	str1.pop_back(); // Удаляет символ строки сзади
	str1.push_back('!'); // Добавляет вводимый символ сзади строки
	str1.resize(x); // Сокращает строку до x символов


	cout << str1 << " - " << str1.length() << endl;

	cout << pow(2, 3) << endl; // Возводит в степерь (x, y);
	cout << abs(-3) << endl;	// Фун. по модулю - получение +
	cout << sin(3) << endl; 
	cout << cos(8) << endl;
	cout << sqrt(16) << endl; // Выводит квадратный	 корень 
	cout << ceil(1.78f) << endl; // Округляет к большему	
	cout << floor(1.99f) << endl; // Округляет к меньшему 
	cout << round(1.35) << endl; // Округляет к ближайшему

}