#include <iostream>

int transformation(int number) {
	int count = 0;
	while (number != 1) {
		++count;
		if (number % 2 < 1) {
			number /= 2;
		}
		else {
			++number;
		}
	}
	return count;
}

int main()
{
	int number;
	std::cin >> number;
    std::cout << transformation(number);
}
