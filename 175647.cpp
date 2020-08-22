#include <iostream>

using namespace std;

void price(int gvn, int cop, int number) {
	gvn *= number;
	cop *= number;
	if (cop >= 100) {
		gvn += (cop / 100);
		cop %= 100;
	}
	cout << gvn << " " << cop;
}

int main()
{
	int number, gvn, cop;
	cin >> gvn;
	cin >> cop;
	cin >> number;
	price(gvn, cop, number);
	return 0;
}
