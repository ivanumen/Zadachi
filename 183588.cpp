#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void readVectorUntilEOF(vector <T>& in) {
	T x;
	while (cin >> x) {
		in.push_back(x);
	}
}

int countPair(vector <int>& in) {
	vector <int> elem = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int count = 0;
	for (int i = 0; i < in.size(); i++) {
		++elem[in[i]];
	}
	for (int i = 0; i < elem.size(); i++) {
		count += elem[i] / 2;
	}
	return count;
}

int main()
{
	vector <int> in;
	readVectorUntilEOF(in);
    cout << countPair(in);
	return 0;
}

