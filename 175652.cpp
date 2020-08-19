#include <iostream>

using namespace std;

long long numberNext(long long number) {
	return --number;
}

int main()
{
	long long number;
	cin >> number;
	cout << numberNext(number);
	return 0;
}
