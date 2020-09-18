#include <iostream>

long long prevNumberEven(long long number) {
	if ((number % 2) == 0) {
		return number - 2;
	}
	else {
		return --number;
	}
}

int main()
{
	long long number;
	std::cin >> number;
    std::cout << prevNumberEven(number);
	return 0;
}
