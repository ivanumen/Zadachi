#include <iostream>

long long areaCube(const long long a, const long long b, const long long c) {
	return 2 * (a * b + b * c + a * c);
}

long long volumeCube(const long long a, const long long b, const long long c) {
	return a * b * c;
}

int main()
{
	long long a, b, c;
	std::cin >> a >> b >> c;
    std::cout << areaCube(a, b, c) << " " << volumeCube(a, b, c);
}

