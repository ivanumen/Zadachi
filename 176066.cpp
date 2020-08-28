#include <iostream>
#include <utility>

using namespace std;


void perimeterAndAreaOfAsquare() {
	int number;
	while (cin >> number) {
		cout << number * 4 << " " << number * number << endl;
	}
}




int main()
{
	perimeterAndAreaOfAsquare();
	return 0;
}

