#include <iostream>

using namespace std;

int numberOfDigits(long int number) {
	int digits = 0;
	if (number == 0) {
		++digits;
	}
	while (number > 0) {
		++digits;
		number /= 10;
	}
	return digits;
}

int main()
{
	long int number;
	cin >> number;
	cout << numberOfDigits(number);
	return 0;
}
