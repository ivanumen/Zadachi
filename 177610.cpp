#include <iostream>

template <class T>
T  extent(const T number, const int rank) {
	T elem = 1;
	for (int i = 0; i < rank; i++) {
		elem *= number;
	}
	return elem;
}

int main()
{
	float x;
	std::cin >> x;
	printf("%.3f", ((extent(x, 2) + 3 * x - 4) / (2 * x - 3)) -
		((x + 2) / (extent(x, 2) - 5 * x + 7)));
	return 0;
}

