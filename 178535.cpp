#include <iostream>

long long sumIndexNumber(const long long number) {
	long long sumIndex = 0;
	for (long long i = 0; i <= number; i++) {
		sumIndex += i;
	}
	return sumIndex;
}

int main()
{
	long long number;
	std::cin >> number;
    std::cout << sumIndexNumber(number) + number - 1;
	return 0;
}

