#include <iostream>

long long sumNumber() {
	long long number1, number2;
	std::cin >> number1;
	std::cin >> number2;
	return number1 + number2;
}

int main()
{
	std::cout << sumNumber();
	return 0;
}
