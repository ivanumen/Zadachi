#include <iostream>
#include "cmath"

using namespace std;

int conditionalOperator(int number) {
	if (number < 5) {
		return pow(number, 2) - (3 * number) + 4;
	}
	if (number >= 5) {
		return number + 7;
	}
}

int main()
{
	int number;
	cin >> number;
	cout << conditionalOperator(number);
	return 0;
}