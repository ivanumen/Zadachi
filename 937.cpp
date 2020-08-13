#include <iostream>
#include <vector>

using namespace std;

int composiveMassiv(int number) {
	vector <int> in(number);
	vector <int> out(number);
	long long int comNumber = 1;
	int moreZero = 0;
	bool noEqvalZero = true;
	for (int i = 0; i < number; i++) {
		cin >> in[i];
		if (in[i] != 0) {
			comNumber *= in[i];
		}
		else {
			noEqvalZero = false;
			++moreZero;
		}
	}
	for (int i = 0; i < number; i++) {
		if (noEqvalZero) {
			out[i] = comNumber / in[i];
		}
		if (!noEqvalZero && in[i] == 0) {
			out[i] = comNumber;
		}
		if((!noEqvalZero && in[i] != 0) || (moreZero > 1)) {
			out[i] = 0;
		}
		cout << out[i] << " ";
	}
	return 0;
}

int main()
{
	int number;
	cin >> number;
	composiveMassiv(number);
	return 0;
}
