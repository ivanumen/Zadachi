#include <iostream>
#include <string>

using namespace std;

string threeDigitNumber(const int number) {
	if ((number < 1000 && number > 99) || (-number < 1000 && -number > 99)) {
		return "Ok";
	}
	else {
		return "No";
	}
}

int main()
{
	int number;
	cin >> number;
    cout << threeDigitNumber(number);
	return 0;
}
