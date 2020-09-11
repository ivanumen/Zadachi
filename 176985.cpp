#include <iostream>
#include <math.h>

long long areaCube(const long long edge) {
	return 6 * pow(edge, 2);
}

long long volumeCube(const long long edge) {
	return pow(edge, 3);
}


int main()
{
	long long edge;
	std::cin >> edge;
    std::cout << areaCube(edge) << " " << volumeCube(edge);
}

