#include <iostream>

int divisibility(const int number1, const int number2) {
	return number1 % number2 == 0 ? 1 : 0;
}

int main()
{
	int number1, number2;
	std::cin >> number1 >> number2;
    std::cout << divisibility(number1, number2);
	return 0;
}


