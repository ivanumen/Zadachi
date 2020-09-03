#include <iostream>

int gardener(const int number) {
	int foliage = 1;
	for (int i = 1; i <= number; i++) {
		foliage += i * 2;
	}
	return foliage;
}

int main()
{
	int number;
	std::cin >> number;
    std::cout << gardener(number);
}

