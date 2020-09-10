#include <iostream>
#include <math.h>

using namespace std;

int conditionalOperator(const int x) {
	int y = 0;
	if (x < -4) {
		y = x + 5;
	}
	if (x >= -4 && x <= 7) {
		y = pow(x, 2) - (3 * x);
	}
	if (x > 7) {
		y = pow(x, 3) + (2 * x);
	}
	return y;
}

int main()
{
	int x;
	cin >> x;
    cout << conditionalOperator(x);
}

