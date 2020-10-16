#include <iostream>
#include <math.h>

using namespace std;

template <class T>
T binPow(T value, int extent) {
	T res = 1;
	while (extent > 0) {
		if (extent % 2 == 1) {
			--extent;
			res *= value;
		}
		else {
			extent /= 2;
			value *= value;
		}
	}
	return res;
}

int main()
{
	int value, extent;
	cin >> value >> extent;
    cout << binPow(value, extent);
	return 0;
}
