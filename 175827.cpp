#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

string rightTriangle(const int numberA, const int numberB, const int numberC) {
	if (pow(max(max(numberA, numberB), max(numberA, numberC)), 2) == pow(min(max(numberA, numberB), min(max(numberB, numberC), max(numberA, numberC))), 2) + pow(min(min(numberA, numberB), min(numberA, numberC)), 2)) {
		return "YES";
	}
	else {
		return "NO";
	}
}

int main()
{
	int numberA, numberB, numberC;
	cin >> numberA;
	cin >> numberB;
	cin >> numberC;
	cout << rightTriangle(numberA, numberB, numberC);
	return 0;
}
