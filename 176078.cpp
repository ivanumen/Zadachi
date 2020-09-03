#include <iostream>

int equalToTheDivisor(const int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		if (number % i == number / i) {
			++count;
		}
	}
	return count;
}

int main()
{
	int number;
	std::cin >> number;
    std::cout << equalToTheDivisor(number);
}

