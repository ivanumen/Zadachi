#include <iostream>

long long countPair(long long number) {
	long long count = 1;
	long long prevCountPairElem = 0;
	long long countPairElem = 0;
	while (number > 0)
	{
		count *= 10;
		countPairElem = (count  / 2) + (prevCountPairElem - 1);
		prevCountPairElem -= countPairElem;
		--number;
	}
	return countPairElem;
}

int main()
{
	long long number;
	std::cin >> number;
    std::cout << countPair(number);
	return 0;
}

