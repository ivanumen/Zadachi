#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
T maxElemVector(const vector <T>& in) {
	return *max_element(in.begin(), in.end());
}

int main()
{
	int elem1, elem2, elem3, elem4;
	cin >> elem1 >> elem2 >> elem3 >> elem4;
	vector <int> in = { elem1, elem2, elem3, elem4 };
	cout << maxElemVector(in);
}

