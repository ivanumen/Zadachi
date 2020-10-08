#include <iostream>

using namespace std;

int middleElement(const long long number1, const long long number2, const long long number3) {
	if (number1 == number2 || number1 == number3 || number2 == number3) {
		return 0;
	}
	if ((number1 > number2 && number1 < number3) || (number1 < number2 && number1 > number3)) {
		return 1;
	}
	if ((number2 > number1 && number2 < number3) || (number2 < number1 && number2 > number3)) {
		return 2;
	}
	return 3;
}

int main()
{
	long long number1, number2, number3;
	cin >> number1 >> number2 >> number3;
	cout << middleElement(number1, number2, number3);
	return 0;
}


