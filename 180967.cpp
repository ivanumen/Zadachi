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

int sumSubarray(const vector <vector <int> >& in, const int leftRow, const int leftcol, const int rightRow, const int rightCol) {
	int ans = 0;
	for (int i = leftRow; i <= rightRow; i++) {
		for (int j = leftcol; j <= rightCol; j++) {
			ans += in[i][j];
		}
	}
	return ans;
}

int main()
{
	vector <vector <int> > in;
	int leftRow, leftcol, rightRow, rightCol;
	readVectorVector(in);
	cin >> leftRow >> leftcol >> rightRow >> rightCol;
    cout << sumSubarray(in, leftRow - 1, leftcol - 1, rightRow - 1, rightCol - 1);
	return 0;
}

