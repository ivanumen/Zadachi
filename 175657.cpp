#include <iostream>

using namespace std;

long long averageNumber(const long long number1, const long long number2, const long long number3) {
	if ((number1 > number2 && number1 < number3) || (number1 > number3 && number1 < number2)) {
		return number1;
	}
	if ((number2 > number1 && number2 < number3) || (number2 > number3 && number2 < number1)) {
		return number2;
	}
	else {
		return number3;
	}
}

int main()
{
	long long number1, number2, number3;
	cin >> number1;
	cin >> number2;
	cin >> number3;
	cout << averageNumber(number1, number2, number3);
	return 0;
}
