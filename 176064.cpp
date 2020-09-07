#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


template <class T>
void createZeroMatrix(vector <vector <T> >& in, const int rows) {
	in.resize(rows);
	for (auto& v : in) {
		v.resize(rows);
		for (auto& elem : v) {
			elem = 0;
		}
	}
}

template <class T>
void readSpiralVectorVector(vector <vector <T> >& in, int rows) {
	int convolution = pow(rows, 2);
	int elem = 0;
	int left = 0;
	int right = rows - 1;
	int i, j;
	i = 0;
	while (elem != convolution) {
		for (j = i; j < rows; j++) {
			++elem;
			in[i][j] = elem;
		}
		--rows;
		for (j = i; j < rows; j++) {
			++i;
			++elem;
			in[i][right] = elem;
		}
		for (j = rows; j > left; j--) {
			++elem;
			in[i][j - 1] = elem;
		}
		--rows;
		for (j = left; j < rows; j++) {
			--i;
			++elem;
			in[i][left] = elem;
		}
		++rows;
		--right;
		++left;
	}
}


template <class T>
void writeVectorVector(const vector <vector <T> >& out) {
	for (const auto& v : out) {
		for (const auto& elem : v) {
			cout << elem << " ";
		}
		cout << endl;
	}
}

template <class T>
T searchElem(const vector <vector <T> >& in) {
	int i, j;
	cin >> i >> j;
	return in[i - 1][j - 1];
}

int main()
{
	vector <vector <int> > in;
	int rows;
	cin >> rows;
	createZeroMatrix(in, rows);
	readSpiralVectorVector(in, rows);
	cout << searchElem(in);
	return 0;
}

