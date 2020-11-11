#include <iostream>

using namespace std;

int prevOddNumber(int number) {
	if ((number % 2) == 0) {
		return --number;
	}
	return number - 2;
}

int main()
{
	int number;
	cin >> number;
    cout << prevOddNumber(number);
	return 0;
}

