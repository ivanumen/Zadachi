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

int main()
{
	int number, countSearch, searchNumber;
	vector <int> in;
	cin >> number >> countSearch;
	readVector(in, number);
	for (int i = 0; i < countSearch; i++) {
		cin >> searchNumber;
		if (binary_search(in.begin(), in.end(), searchNumber)) {
			cout << "YES" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}
