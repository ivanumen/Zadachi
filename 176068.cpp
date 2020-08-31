#include <iostream>

using namespace std;

template <class T>
int zeroInFactorial(T number) {
	number /= 5;
	int count = number;
	while (count / 5 >= 1) {
		count /= 5;
		number += count;
	}
	return number;
}

int main()
{
	long long number;
	cin >> number;
	cout << zeroInFactorial(number);
	return 0;
}