#include <iostream>

int countDividers(const int number) {
	int count = 0;
	for (int i = 2; (i * i) <= number; i++) {
		if ((i * i) == number) {
			++count;
			continue;
		}
		if (number % i == 0) {
			count += 2;
		}
	}
	return count;
}

int main()
{
	int number;
	std::cin >> number;
	std::cout << countDividers(number);
	return 0;
}


