// chp2ex9.cpp
#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;

int main() {
	std::cout << "두개의 숫자를 입력하시오:  ";
	double number1, number2;
	cin >> number1 >> number2;
	
	if (number1 > number2) {
		cout << number1;
	}
	else {
		cout << number2;
	}
	return 0;
}