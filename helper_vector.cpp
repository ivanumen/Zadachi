#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

template <class T>
void readVector(vector <T>& in) {
	int number;
	cin >> number;
	in.resize(number);
	for (int i = 0; i < number; i++){
		cin >> in[i];
	}
}

template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem) {
		cout << elem << " ";
	}
}

template <class T>
vector <T> intToVector(T number) {
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
	for (const auto elem: in) {
		ans += in[i];

	}
	return ans;
}

template <class T>
T compositionVector(const vector <T>& in) {
	T ans = 1;
	for (const auto elem : in) {
		ans *= in[i];
		if (in[i] == 0) {
			break;
		}
	}
	return ans;
}

