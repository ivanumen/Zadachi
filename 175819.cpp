#include <iostream>

using namespace std;

void triangle(const int numberA, const int numberB, const int numberC) {
	if (numberA == numberB && numberA == numberC) {
		cout << "1";
	}
	else {
		if (numberA == numberB || numberA == numberC || numberB == numberC) {
			cout << "2";
		}
		else {
			if (numberA != numberB && numberA != numberC && numberB != numberC) {
				cout << "3";
			}
		}
	}

}

int main()
{
	int numberA, numberB, numberC;
	cin >> numberA;
	cin >> numberB;
	cin >> numberC;
	triangle(numberA, numberB, numberC);
	return 0;
}
