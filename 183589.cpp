#include <iostream>

long long powTeen(long long number) {
	long long pow = 0;
	while (number > 1) {
		++pow;
		if (number % 10 != 0) {
			return 0;
		}
		number /= 10;
	}
	return pow;
}

int main()
{
	long long number;
	std::cin >> number;
	if (powTeen(number) == 0 && number != 1) {
		std::cout << "No";
	}
	else {
		std::cout << powTeen(number);
	}
	return 0;
}