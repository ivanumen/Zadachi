#include <iostream>


template <class T>
int coordinatePlane(const T x, const T y) {
	if (x == 0 || y == 0) {
		return 0;
	}
	if (x > 0 && y > 0) {
		return 1;
	}
	if (x < 0 && y < 0) {
		return 3;
	}
	if (x < 0 && y > 0) {
		return 2;
	}
	else {
		return 4;
	}
}

int main()
{
	double x, y;
	std::cin >> x >> y;
    std::cout << coordinatePlane(x, y);
}

