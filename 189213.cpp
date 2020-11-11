#include <iostream>
#include <algorithm>


int main()
{
	int number1, number2, number3;
	std::cin >> number1 >> number2 >> number3;
    std::cout << std::min(std::min(number1, number2), std::min(number1, number3));
	return 0;
}

