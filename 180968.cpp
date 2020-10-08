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
T sumVector(const vector <T>& in) {
	T ans = 0;
	for (const auto elem : in) {
		ans += elem;

	}
	return ans;
}

template <class T>
T maxElemVector(const vector <T>& in) {
	return *max_element(in.begin(), in.end());
}

template <class T>
void descendingSort(vector <T>& in) {
	T elem;
	for (int i = 0; i < in.size(); i++) {
		for (int j = i; j < in.size(); j++) {
			if (in[i] < in[j]) {
				elem = in[i];
				in[i] = in[j];
				in[j] = elem;
			}
		}
	}
}

int discounts(const vector <int>& in, int ans) {
	int count = 0;
	int minElem;
	for (int i = 0; i < in.size(); i++) {
		++count;
		if (count == 3) {
			count = 0;
			minElem = min(min(in[i], in[i - 1]), min(in[i], in[i - 2]));
			ans -= minElem;
		}
	}
	return ans;
}

int main()
{
	vector <int> in;
	readVector(in);
	descendingSort(in);
    cout << discounts(in , sumVector(in));
	return 0;
}


