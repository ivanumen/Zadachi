#include <iostream>
#include <vector>

using namespace std;

int delenie6(int number) {
	vector <int> positiveNumber(number);
	int sumpositiveNumber = 0;
	int kolpositiveNumber = 0;
	for (int i = 0; i < number; i++) {
		cin >> positiveNumber[i];
		if (positiveNumber[i] > 0 && positiveNumber[i] % 6 == 0) {
			sumpositiveNumber = sumpositiveNumber + positiveNumber[i];
			++kolpositiveNumber;
		}
	}
	cout << kolpositiveNumber << " " << sumpositiveNumber;
	return 0;
}

int main()
{
	int number;
	cin >> number;
	delenie6(number);
	return 0;
}

