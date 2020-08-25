#include <iostream>

using namespace std;

int friends(int number) {
	if (number == 0) {
		return 0;
	}
	return --number;
}

int main()
{
	int number;
	cin >> number;
	cout << friends(number);
	return 0;
}
