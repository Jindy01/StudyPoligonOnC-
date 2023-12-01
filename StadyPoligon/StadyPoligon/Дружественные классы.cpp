#include <iostream>;
#include <string>;


using namespace std; 

void get_info() {

}

class Person;
class Dog {
private:
	int health = 100;
public:
	friend class Person;
};

class Person {
public:
	void Damage(Dog& dog) {
		dog.health -= 20;
		cout << "Health of animal: " << dog.health << endl;
	}

	void Heal(Dog& dog) {
		dog.health += 20;
		cout << "Health of animal: " << dog.health << endl;
	}

	void Kill(Dog& dog) {
		dog.health = 0;
		cout << "Health of animal: " << dog.health << endl;
	}

	void Info(Dog& dog) {
		cout << "Health of animal: " << dog.health << endl;
		if (dog.health > 100) {
			cout << "Max. health 100: " << dog.health << endl;
			dog.health = 100;
		}

	}


};


int main() {

	Dog skuby;
	Person alex;
	alex.Damage(skuby);
	alex.Damage(skuby);
	alex.Heal(skuby);
	alex.Heal(skuby);
	alex.Heal(skuby);
	alex.Info(skuby);
}