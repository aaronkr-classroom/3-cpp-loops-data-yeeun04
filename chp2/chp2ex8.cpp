// chp2ex8.cpp
#include <iostream>
#include <string>

int main() {
	int result = 1;

	for (int i = 1; i < 10; ++i) {
		result *= i;
	}
	std::cout << " [1, 10) ������ �ִ� ���ڵ��� ��: " << result;

	return 0;
}