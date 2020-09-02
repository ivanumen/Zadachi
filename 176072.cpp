#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

template <class T>
void readVectorUntilEOF(vector <T>& in) {
	T x;
	while (cin >> x) {
		in.push_back(x);
	}
}

template <class T>
T maxElemVector(const vector <T>& in) {
	T maxElem = in[0];
	for (const auto elem : in) {
		maxElem = max(maxElem, elem);
	}
	return maxElem;
}

int main()
{
	vector <double> in;
	readVectorUntilEOF(in);
	printf("%.2f", maxElemVector(in));
}
