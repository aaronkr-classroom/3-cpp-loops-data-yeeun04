// chp2ex5triangle.cpp

#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;

int main() {
	cout << "What size triangle? ";

	int size;
	cin >> size; //10

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}