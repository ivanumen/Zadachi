#include <iostream>

void writeMinAndMaxFractions(const long long a, const long long b, const long long c, const long long d) {
	if ((a * d) > (c * b)) {
		std::cout << c << "/" << d << " " << a << "/" << b;
	}
	else {
		std::cout << a << "/" << b << " " << c << "/" << d;
	}
}

int main()
{
	long long a, b, c, d;
	char sym;
	std::cin >> a >> sym >> b >> c >> sym >> d;
	writeMinAndMaxFractions(a, b, c, d);
	return 0;
}

