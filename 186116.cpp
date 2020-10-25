#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
vector <int> intToVector(T number) {
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

template <class T>
T maxElemVector(const vector <T>& in) {
	return *max_element(in.begin(), in.end());
}

long long countMaxNumber(const vector <int>& in) {
	long long count = 0;
	for (int i = 0; i < in.size(); i++) {
		if (in[i] == maxElemVector(in)) {
			++count;
		}
	}
	return count;
}

int main()
{
	long long number;
	cin >> number;
	cout << countMaxNumber(intToVector(number));
	return 0;
}

