#include <iostream>
#include <string.h>

using namespace std;

string twoConditions(const int number) {
	if (number % 3 == 0 && number % 2 == 0 && (number >= 10 && number < 100 || number <= -10 && number > -100)) {
		return "YES";
	}
	return "NO";
}

int main()
{
	int number;
	cin >> number;
	cout << twoConditions(number);
	return 0;
}

