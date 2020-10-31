#include <iostream>
#include <algorithm>

using namespace std;

int texi(const int number1, const  int number2, const int number3) {
	int maximum = max(max(number1, number2), max(number1, number3));
	int minimum = min(min(number1, number2), min(number1, number3));
	int mid = max(min(number1, number2), max(min(number1, number3), min(number2, number3)));
	if ((mid + minimum + maximum) % 3 == 0) {
		if (((mid + minimum + maximum) / 3) < mid && ((mid + minimum + maximum) / 3) < maximum) {
			return (maximum - ((mid + minimum + maximum) / 3)) + (mid - ((mid + minimum + maximum) / 3));
		}
		return  maximum - ((mid + minimum + maximum) / 3);
	}
	return -1;
}

int main()
{
	int number1, number2, number3;
	cin >> number1 >> number2 >> number3;
	if (texi(number1, number2, number3) >= 0) {
		cout << texi(number1, number2, number3);
	}
	else {
		cout << "IMPOSSIBLE";
	}
	return 0;
}

