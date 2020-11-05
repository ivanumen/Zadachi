#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int number, gynka, myska, knopka;
	cin >> number;
	if (number % 2 == 0) {
		myska = 0.3 * number;
		knopka = myska;
	}
	else {
		myska = (0.3 * number) + 1;
		knopka = myska - 1;
	}
	gynka = (myska + knopka) / 1.5;
    cout << gynka  << " " << myska << " " << knopka;
	return 0;
}

