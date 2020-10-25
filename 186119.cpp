#include <iostream>

void notMultiplesOfTwoThreeOrFive(int number) {
	int count = 0;
	while (number != 0) {
		++count;
		if (count % 2 != 0 && count % 3 != 0 && count % 5 != 0) {
			--number;
			std::cout << count << " ";
		}
	}
}

int main()
{
	int number;
	std::cin >> number;
	notMultiplesOfTwoThreeOrFive(number);
	return 0;
}

