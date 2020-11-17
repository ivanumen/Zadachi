#include <iostream>

long long get(const long long elem, const long long number) {
	return elem / number;
}

long long divisibilityInTheInterval(const long long start, const long long end, const long long number) {
	return start == 0 ? get(end, number) + 1 : get(end, number) - get((start - 1), number);
}

int main()
{
	long long start, end, number;
	std::cin >> start >> end >> number;
	std::cout << divisibilityInTheInterval(start, end, number);
	return 0;
}


