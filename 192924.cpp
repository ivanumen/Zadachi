#include <iostream>

int theSmallestOfTheBigOnes(const int number) {
	int bigNumber = number + 1;
	while (true)
	{
		if (bigNumber % 2 == 0 || bigNumber % 3 == 0 || bigNumber % 5 == 0) {
			++bigNumber;
			continue;
		}
		return bigNumber;
	}
}

int main()
{
	int number;
	std::cin >> number;
    std::cout << theSmallestOfTheBigOnes(number);
}
