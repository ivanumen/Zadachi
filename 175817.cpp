#include <iostream>
#include <vector>
#include <algorithm>

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

void comparisonFirstAndEnd(const vector <int>& in) {
	int end = in.size() - 1;
	if (in[0] == in[end]) {
		cout << "=";
	}
	if (in[0] > in[end]) {
		cout << in[0];
	}
	if(in[0] < in[end]) {
		cout << in[end];
	}
}

int main()
{
	int number;
	cin >> number;
	comparisonFirstAndEnd(intToVector(number));
	return 0;
}
