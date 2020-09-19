#include <iostream>

int main()
{
	long long rad, wiet;
	std::cin >> rad >> wiet;
	int line = rad - (wiet * 2);
	if (line < 0) {
		line = 0;
	}
    std::cout << line;
}
