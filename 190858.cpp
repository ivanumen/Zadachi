#include <iostream>
#include <vector>
#include <algorithm>

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

template <class T>
void writeVectorVector(const vector <vector <T> >& out) {
	for (const auto& v : out) {
		for (const auto& elem : v) {
			cout << elem << " ";
		}
		cout << endl;
	}
}

vector <vector <int> > tranformVectorVector(const vector <vector <int> >& in, const int rows, const int cols) {
	vector <vector <int> > out(cols, vector <int>(rows));
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			out[i][j] = in[j][i];
		}
	}
	return out;
}

int main()
{
	vector <vector <int> > in;
	int rows, cols;
	cin >> rows >> cols;
	readVectorVector(in, rows, cols);
	writeVectorVector(tranformVectorVector(in, rows, cols));
	return 0;
}


