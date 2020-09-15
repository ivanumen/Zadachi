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
	float x, y;
	std::cin >> x >> y;
    printf("%.3f", ((2 * x + y) / (extent(x, 2) - x * y  + 4 * extent(y, 2))) + ((2 * extent(x, 2) - x * y + extent(y, 2)) / (x + 4 * y))) ;
}

