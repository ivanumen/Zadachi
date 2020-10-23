#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void readVector(vector <T>& in, int number) {
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

int countMushroom(vector <int>& in, const int number) {
	int count = 0;
	while (1) {
		++count;
		if (count > minElemVector(in)) {
			return -1;
		}
		if ((count * number) > (maxElemVector(in) - count)) {
			return count;
		}

	}
}

int main()
{
	vector <int> in;
	int number;
	cin >> number;
	readVector(in, number - 1);
	cout << countMushroom(in, number - 1);
	return 0;
}

