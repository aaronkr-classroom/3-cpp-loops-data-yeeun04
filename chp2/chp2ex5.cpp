// chp2ex5.cpp
#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;

	int main() {

		//���簢�� ���
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << "*";
			}
			cout << endl;
		}
		cout << endl;

		//���簢�� ���
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 15; j++) {
				cout << "*";
			}
			cout << endl;
		}
		return 0;
	}
