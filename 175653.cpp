#include <iostream>

using namespace std;

long long numberEnd(long long number) {
	return number % 10;
}

int main()
{
	long long number;
	cin >> number;
	cout << numberEnd(number);
	return 0;
}
