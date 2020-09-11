#include <iostream>
#include <string>

using namespace std;

string divisibilityByNumbers(const int number, const int number1, const int number2){
	if (number % number1 < 1 && number % number2 < 1) {
		return "YES";
	}
	else {
		return "NO";
	}
}

int main()
{
	int number, number1, number2;
	cin >> number >> number1 >> number2;
    cout << divisibilityByNumbers(number, number1, number2);
}

