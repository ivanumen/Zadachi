#include <iostream>

long long numbersHotel(const long long floors, const long long rooms) {
	return (floors - 1) * rooms * 3;
}

int main()
{
	long long floors, rooms;
	std::cin >> floors >> rooms;
    std::cout << numbersHotel(floors, rooms);
}
