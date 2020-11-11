#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int number;
	cin >> number;
	if (sqrt(number) == int(sqrt(number))) {
		cout << sqrt(number);
	}
	else {
		cout << "No";
	}
	return 0;
}

