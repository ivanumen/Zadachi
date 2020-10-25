#include <iostream>

using namespace std;

void oddNumber(const int numberFirst, const int numberEnd) {
	for (int i = numberFirst; i <= numberEnd; i++) {
		if ((i / 1000) % 2 == 0) {
			i -= (i % 1000);
			i += 1000;
		}
		if (((i / 100) % 10) % 2 == 0) {
			i -= (i % 100);
			i += 100;
		}
		if (((i / 10) % 10) % 2 == 0) {
			i -= (i % 10);
			i += 10;
		}
		if ((i % 10) % 2 == 0) {
			i += 1;
		}
		if (i <= numberEnd) {
			cout << i << " ";
		}
	}
}

int main()
{
	int numberFirst, numberEnd;
	cin >> numberFirst >> numberEnd;
	oddNumber(numberFirst, numberEnd);
	return 0;
}
