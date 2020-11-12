#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void readVectorUntilEOF(vector <T>& in) {
	T x;
	while (cin >> x) {
		if (x == 0) {
			break;
		}
		in.push_back(x);
	}
}

template <class T>
T sumPositiveVector(const vector <T>& in) {
	T ans = 0;
	for (const auto elem : in) {
		if (elem > 0) {
			ans += elem;
		}
	}
	return ans;
}

int main()
{
	vector <int> in;
	readVectorUntilEOF(in);
    cout << sumPositiveVector(in);
	return 0;
}

