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


int main()
{
	vector <int> in;
	readVector(in);
	cout << maxElemVector(in) + minElemVector(in);
}

