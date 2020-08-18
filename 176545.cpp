#include <iostream>

using namespace std;

int perimeterRectangle(const int sideA, const int sideB) {
	return sideA * sideB;
}

int main()
{
	int sideA, sideB;
	cin >> sideA;
	cin >> sideB;
	cout << perimeterRectangle(sideA, sideB);
}
