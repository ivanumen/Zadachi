#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
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

template<class T>
void toUnorderedMap(unordered_map <T, size_t>& m, const vector <T>& in) {
	for (const auto& elem : in) {
		m[elem]++;
	}
}


int main()
{
	vector <int> in;
	unordered_map <int , size_t> m;
	int number, difference;
	cin >> number >> difference;
	readVector(in, number);
	toUnorderedMap(m, in);
	size_t count = 0;
	for (const auto& elem : in) {
		count += m[elem + difference];
	}
	cout << count << endl;
    return 0;
}