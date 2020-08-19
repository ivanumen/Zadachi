#include <iostream>

using namespace std;

void parity(long long number) {
	if (number % 2 >= 1) {
		cout << "ODD";
	}
	else {
		cout << "EVEN";
	}
}

int main()
{
	long long number;
	cin >> number;
	parity(number);
	return 0;
}
