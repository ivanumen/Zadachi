#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int ceilSum(const double numberA, const double numberB, const double numberC) {
	return ceil(numberA / numberC) + ceil(numberB / numberC);
}

int main()
{
	double boys, girls, rooms;
	cin >> boys;
	cin >> girls;
	cin >> rooms;
	cout << ceilSum(boys, girls, rooms);
	return 0;
}
