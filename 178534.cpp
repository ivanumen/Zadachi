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
	bool flagMin = true, flagMax = true;
	for (const auto elem : in) {
		if (elem == minElemVector(in) && flagMin) {
			flagMin = false;
			continue;
		}
		if (elem == maxElemVector(in) && flagMax) {
			flagMax = false;
			continue;
		}
		ans += elem;
	}
	return ans;
}

template <class T>

int countMaxElemInVector(const vector <T>& in) {
	int count = 0;
	for (auto& elem : in) {
		if (elem == maxElemVector(in)) {
			++count;
		}
	}
	return count;
}

template <class T>
void writeMinMaxAndSumElemInVector(const vector <T>& out) {
	bool flagMin = true, flagMax = true;
	int count = 0;
	for (const auto& elem : out) {
		if (elem == maxElemVector(out)) {
			++count;
		}
		if (flagMin && elem == minElemVector(out)) {
			flagMin = false;
			cout << "(" << elem << ") ";
			continue;
		}
		if (flagMax && count == countMaxElemInVector(out) && elem == maxElemVector(out)) {
			flagMax = false;
			cout << "(" << elem << ") ";
			continue;
		}
		cout << elem << " ";
	}
	cout << "= " << sumVectorNotMinAndMaxElem(out);
}


int main()
{
	vector <int> in;
	readVector(in);
	writeMinMaxAndSumElemInVector(in);
	return 0;
}

