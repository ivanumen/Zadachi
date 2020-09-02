#include <iostream>

int housNumbers(const int numberHous1, const int numberHous2) {
	if ((numberHous1 % 2) == (numberHous2 % 2)) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	int numberHous1, numberHous2;
	std::cin >> numberHous1 >> numberHous2;
	std::cout << housNumbers(numberHous1, numberHous2);
}

