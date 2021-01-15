#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

template <class T1, class T2>
void readVectorPair(vector <pair<T1, T2>>& in, int number = -1) {
	if (number == -1) {
		cin >> number;
	}
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem.first >> elem.second;
	}
}

bool checkMatching(const vector <pair<int, int>>& in) {
	auto reversed = [](const pair<int, int>& in) {
		return pair<int, int>(in.second, in.first);
	};
	multiset<pair<int, int>> people(in.begin(), in.end());
	for (const auto& elem : in) {
		auto it = people.find(reversed(elem));
		if (it == people.end()) {
			return false;
		}
		people.erase(it);
	}
	return true;
}

int main()
{
	int tests, number;
	vector <pair<int, int>> in;
	cin >> tests;
	for (int test = 0; test < tests; test++) {
		readVectorPair(in);
		cout << (checkMatching(in) ? "YES" : "NO") << endl;
	}
    return 0;
}
