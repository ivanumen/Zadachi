#include <iostream>

using namespace std;

void season(int number) {
	if (number == 1 || number == 2 || number == 12) {
		cout << "Winter";
	}
	if (number >= 3 && number <= 5) {
		cout << "Spring";
	}
	if (number >= 6 && number <= 8) {
		cout << "Summer";
	}
	if (number >= 9 && number <= 11) {
		cout << "Autumn";
	}
}

int main()
{
	int number;
	cin >> number;
	season(number);
	return 0;
}
