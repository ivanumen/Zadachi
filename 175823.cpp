#include <iostream>

using namespace std;

void divisibility(const int numberA, const int numberB) {
	if (numberA % numberB > 1) {
		cout << numberA / numberB << " " << numberA % numberB;
	}
	else {
		cout << "Divisible";
	}
}

int main()
{
	int numberA, numberB;
	cin >> numberA;
	cin >> numberB;
	divisibility(numberA, numberB);
	return 0;
}
