#include <iostream>

long long composition(const long long number1, const long long number2) {
	return (number1 * number2);
}


int main()
{
	long long number1, number2;
	std::cin >> number1;
	std::cin >> number2;
    std::cout << composition(number1, number2);
	return 0;
}

