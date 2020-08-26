#include <iostream>
#include <cmath>

using namespace std;

long long conditionalOperator(const int number) {
	if (number >= 10) {
		return pow(number, 3) + (5 * number);
	}
	else {
		return pow(number, 2) - (2 * number) + 4;
	}
}

int main()
{
	int number;
	cin >> number;
	cout << conditionalOperator(number);
	return 0;
}
