#include <iostream>
#include <algorithm>

using namespace std;

int sumMaxMin(const int numberA, const int numberB, const int numberC) {
	return max(max(numberA, numberB), max(numberA, numberC)) + min(min(numberA, numberB), min(numberA, numberC));
}

int main()
{
	int costA, costB, costC;
	cin >> costA;
	cin >> costB;
	cin >> costC;
	cout << sumMaxMin(costA, costB, costC);
	return 0;
}
