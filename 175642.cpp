#include <iostream>

using namespace std;

int divisionWithoutRemainder(const int pupils, const int apples) {
	return (int)(apples % pupils);
}

int main()
{
	int pupils, apples;
	cin >> pupils;
	cin >> apples;
	cout << divisionWithoutRemainder(pupils, apples);
	return 0;
}
