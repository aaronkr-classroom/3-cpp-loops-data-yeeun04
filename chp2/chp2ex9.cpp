// chp2ex9.cpp
#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;

int main() {
	std::cout << "�ΰ��� ���ڸ� �Է��Ͻÿ�:  ";
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