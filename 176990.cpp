#include <iostream>
#include <math.h>

using namespace std;

int maxCount(const int number1, const int number2) {
	if (number1 == number2) {
		return 1;
	}
	return (number1 - number2) + 1;
}

int minCount(const double number1, const double number2) {
	return ceil(number1 / number2);
}

int main()
{
	int canarys, cages;
	std::cin >> canarys >> cages;
    std::cout << minCount(canarys, cages) << " " << maxCount(canarys, cages);
}

