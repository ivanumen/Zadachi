#include <iostream>

using namespace std;

void determinant(int number) {
	if (number > 0) {
		cout << "Positive";
	}
	if (number == 0) {
		cout << "Zero";
	}
	if (number < 0) {
		cout << "Negative";
	}
}


int main()
{
	int number;
	cin >> number;
	determinant(number);
	return 0;
}
