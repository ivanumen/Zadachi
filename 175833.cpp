#include <iostream>
#include <cmath>

using namespace std;

double operatorValue(const double number) {
	return pow(number, 3) - (5 * pow(number, 2) / 7) + 9 * number - (3 / number) + 1;
}

int main()
{
	double number;
	cin >> number;
	printf("%.3f",operatorValue(number));
	return 0;
}
