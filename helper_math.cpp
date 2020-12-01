#include <iostream>
#include <math.h>

using namespace std;

template <class T>
T  extent(const T number, const int rank) {
	T elem = 1;
	for (int i = 0; i < rank; i++) {
		elem *= number;
	}
	return elem;
}

template <class T>
void writePair(const pair<T, T>& out) {
	cout << in.first << " " << in.second;
}

template <class T>
T factorial(T number) {
	if (number == 1) {
		return 1;
	}
	else {
		return number * factorial(number - 1);
	}
}