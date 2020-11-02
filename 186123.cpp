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

void writePrimordialVector(vector <int>& in) {
	int max = maxElemVector(in);
	int min = minElemVector(in);
	for (const auto& elem : in) {
		if (elem == 0) {
			cout << elem << " ";
			continue;
		}
		if (elem > 0) {
			cout << elem - (max / 2) << " ";
		}
		else {
			cout << elem - (min / 2) << " ";
		}
	}
}


int main()
{
	vector <int> in;
	readVector(in);
	writePrimordialVector(in);
	return 0;
}

