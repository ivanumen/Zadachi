#include <iostream>

int countNotEven() {
	int count = 0;
	int number;
	while (std::cin >> number) {
		if (number == 0) {
			break;
		}
		if (number % 2 != 0) {
			++count;
		}
	}
	return count;
}

int main()
{
    std::cout << countNotEven();
	return 0;
}

