#include <iostream>

using namespace std;

void estimations(int number) {
	if (number >= 1 && number <= 3) {
		cout << "Initial";
	}
	if (number >= 4 && number <= 6) {
		cout << "Average";
	}
	if (number >= 7 && number <= 9) {
		cout << "Sufficient";
	}
	if (number >= 10 && number <= 12) {
		cout << "High";
	}
}

int main()
{
	int number;
	cin >> number;
	estimations(number);
	return 0;
}
