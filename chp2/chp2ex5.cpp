// chp2ex5.cpp
#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;

	int main() {

		//정사각형 출력
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << "*";
			}
			cout << endl;
		}
		cout << endl;

		//직사각형 출력
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 15; j++) {
				cout << "*";
			}
			cout << endl;
		}
		return 0;
	}
