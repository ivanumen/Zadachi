#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> intToVector(int number) {
	vector <int> decomposition;
	int secondNumber;
	if (number < 0) {
		number *= -1;
	}
	while (number > 0) {
		secondNumber = number % 10;
		number /= 10;
		decomposition.push_back(secondNumber);
	}
	reverse(decomposition.begin(), decomposition.end());
	return decomposition;
}

void writeVector(const vector <int>& out) {
	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << endl;
	}
}

int main()
{
	int number;
	cin >> number;
	writeVector(intToVector(number));
	return 0;
}

