#include <iostream>

int sameSigns(const int number1, const int number2) {
	if ((number1 < 0 && number2 < 0) || (number1 > 0 && number2 > 0)) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	int number1, number2;
	std::cin >> number1 >> number2;
    std::cout << sameSigns(number1, number2);
	return 0;
}

