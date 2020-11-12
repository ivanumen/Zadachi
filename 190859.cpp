#include <iostream>

long long isoscelesTriangle(const long long sideA, const long long sideB, const long long sideC) {
	return ((sideA + sideB > sideC && sideA + sideC > sideB && sideC + sideB > sideA) && (sideA == sideB || sideA == sideC || sideB == sideC)) ? (sideA + sideB + sideC) : 0;
}

int main()
{
	long long sideA, sideB, sideC;
	std::cin >> sideA >> sideB >> sideC;
	if (isoscelesTriangle(sideA, sideB, sideC) > 0) {
		std::cout << isoscelesTriangle(sideA, sideB, sideC);
	}
	else {
		std::cout << "No";
	}
	return 0;
}


