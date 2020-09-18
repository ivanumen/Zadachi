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
	return *max_element(in.begin(), in.end());
}

template <class T>
T minElemVector(const vector <T>& in) {
	return *min_element(in.begin(), in.end());
}

template <class T>
T sumVectorNotMinAndMaxElem(const vector <T>& in) {
	T ans = 0;
	for (const auto elem : in) {
		if (elem != minElemVector(in) && elem != maxElemVector(in)) {
			ans += elem;
		}
	}
	return ans;
}

int main()
{
	vector <int> in;
	readVector(in);
    cout << sumVectorNotMinAndMaxElem(in);
	return 0;
}
