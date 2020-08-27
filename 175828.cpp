#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void readVector(vector <T>& in) {
	int number;
	cin >> number;
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem;
	}
}

template <class T>
T maxElemVector(const vector <T>& in) {
	T maxElem = in[0];
	for (const auto elem : in) {
		maxElem = max(maxElem, elem);
	}
	return maxElem;
}

template <class T>
T sumVectorNoMaxElem(const vector <T>& in) {
	T ans = 0;
	for (const auto elem : in) {
		if (elem != maxElemVector(in)) {
			ans += elem;
		}
	}
	return ans;
}

int main()
{
	vector <int> in;
	readVector(in);
	cout << sumVectorNoMaxElem(in);
}
