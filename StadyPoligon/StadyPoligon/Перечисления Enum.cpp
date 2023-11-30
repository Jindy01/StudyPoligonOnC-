#include <iostream>;
#include <string>;

using namespace std;

enum Options {
	open,
	close,
	wait,
	del,
};

struct File {
	int weight;
	string name;
	Options options;
};
 

int main() {

	File my_file;
	my_file.weight = 1.5f;
	my_file.name = "text.txt";
	my_file.options = Options::close;


	//cout << my_file.options;

	if (my_file.options == Options::close) {
		cout << "File is close" << endl;
	}

	return 0;
}

