#include <iostream>

long long nextNumber() {
	long long number;
	std::cin >> number;
	return ++number;
}

int main()
{
	std::cout << nextNumber();
	return 0;
}
