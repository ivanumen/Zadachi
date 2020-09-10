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
T countMaxElemVector(const vector <T>& in) {
	int count = 0;
	T maxElem = in[1];
	for (auto& elem : in) {
		if (elem > maxElem) {
			count = 0;
		}
		maxElem = max(maxElem, elem);
		if (maxElem == elem) {
			++count;
		}
	}
	return count;
}

int main()
{
	vector <int> in;
	readVector(in);
    cout << countMaxElemVector(in);
}

