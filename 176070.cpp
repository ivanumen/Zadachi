#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

template <class T>
vector <int> intToVector(T number) {
	vector <T> decomposition;
	int secondNumber;
	while (number > 0) {
		secondNumber = number % 10;
		number /= 10;
		decomposition.push_back(secondNumber);
	}
	reverse(decomposition.begin(), decomposition.end());
	return decomposition;
}

template <class T>
T sumVector(const vector <T>& in) {
	T ans = 0;
	for (const auto elem : in) {
		ans += elem;

	}
	return ans;
}

int luckyTicket(const int number) {
	int sumNumberTicets = 0;
	int ticet = 0;
	for (int i = 0; i < 999; i++) {
		++ticet;
		if (number == sumVector(intToVector(ticet))) {
			++sumNumberTicets;
		}
	}
	return pow(sumNumberTicets, 2);
}

int main()
{
	int number;
	cin >> number;
	cout << luckyTicket(number);
}
