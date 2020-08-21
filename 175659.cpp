#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

vector <int> intToVector(int number) {
	vector <int> decomposition;
	int secondNumber;
	while (number > 0) {
		secondNumber = number % 10;
		number /= 10;
		decomposition.push_back(secondNumber);
	}
	reverse(decomposition.begin(), decomposition.end());
	return decomposition;
}

int powSumVector(const vector <int>& in) {
	int ans = 0;
	for (int i = 0; i < in.size(); i++) {
		ans += in[i];
	}
	return pow(ans, 2);
}

int main()
{
	int number;
	cin >> number;
	cout << powSumVector(intToVector(number));
	return 0;
}
