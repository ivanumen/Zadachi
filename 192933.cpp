#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void readVectorVector(vector <vector <T> >& in) {
	int rows, cols;
	cin >> rows >> cols;
	in.resize(rows);
	for (auto& v : in) {
		v.resize(cols);
		for (auto& elem : v) {
			cin >> elem;
		}
	}
}

int countWinningDestinations(const vector <vector <int> >& in) {
	int count = 0;
	bool lessValueLeft, lessValueRight, lessValueBottom, lessValueTop;
	for (int i = 0; i < in.size(); i++) {
		for (int j = 0; j < in[i].size(); j++) {
			lessValueBottom = true;
			lessValueLeft = true;
			lessValueRight = true;
			lessValueTop = true;
			for (int m = 0; m < in[i].size(); m++) {
				if (m < j && in[i][j] <= in[i][m]) {
					lessValueLeft = false;
				}
				if (m > j && in[i][j] <= in[i][m]) {
					lessValueRight = false;
				}
			}
			for (int m = 0; m < in.size(); m++) {
				if (m < i && in[i][j] <= in[m][j]) {
					lessValueTop = false;
				}
				if (m > i && in[i][j] <= in[m][j]) {
					lessValueBottom = false;
				}
			}
			if (lessValueBottom) {
				++count;
			}
			if (lessValueLeft) {
				++count;
			}
			if (lessValueRight) {
				++count;
			}
			if (lessValueTop) {
				++count;
			}
		}
	}
	return count;
}

int main()
{
	vector <vector <int>> in;
	readVectorVector(in);
	cout << countWinningDestinations(in);
	return 0;
}

