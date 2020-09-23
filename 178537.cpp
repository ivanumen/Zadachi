#include <iostream>
#include <vector>

using namespace std;

template <class T>
void readVectorVector(vector <vector <T> >& in, const int rows, const int cols) {
	in.resize(rows);
	for (auto& v : in) {
		v.resize(cols);
		for (auto& elem : v) {
			cin >> elem;
		}
	}
}

int numberOfDiseasedCells(const vector <vector <char> >& in, const int rows, const int cols) {
	int countDiseasedCells = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if ((j < cols - 1) && (in[i][j] == '.' && in[i][j + 1] == '.')) {
				++countDiseasedCells;
			}
			if ((i < rows - 1) && (in[i][j] == '.' && in[i + 1][j] == '.')) {
				++countDiseasedCells;
			}
		}
	}
	return countDiseasedCells;
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

int main()
{
	vector <vector <char> > in;
	int rows, cols;
	cin >> rows >> cols;
	readVectorVector(in, rows, cols);
	cout << numberOfDiseasedCells(in, rows, cols);
	return 0;
}
