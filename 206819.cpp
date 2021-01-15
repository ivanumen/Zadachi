#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

template <class T>
void readVector(vector <T>& in, int number = -1) {
	if (number == -1) {
		cin >> number;
	}
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem;
	}
}

template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem << " ";
	}
}

void sortEvenAndOdd(vector <int>& in) {
	sort(in.begin(), in.end(), [](const int a, const int b) {
		if (abs(a % 2) == abs(b % 2)) {
			return a % 2 != 0 ? a < b : a > b;
		}
		else {
			return a % 2 != 0;
		}

		return false;
	});
}

int main()
{
	vector <int> in;
	readVector(in);
	sortEvenAndOdd(in);
	writeVector(in);
	return 0;
}
