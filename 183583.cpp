#include <iostream>
#include <vector>

using namespace std;

template <class T>
void createZeroMatrix(vector <vector <T> >& in, const int rows) {
	in.resize(rows);
	for (auto& v : in) {
		v.resize(rows);
		for (auto& elem : v) {
			elem = ' ';
		}
	}
}

template <class T>
void writeVectorVector(const vector <vector <T> >& out) {
	for (const auto& v : out) {
		for (const auto& elem : v) {
			cout << elem;
		}
		cout << endl;
	}
}

void starRhombusArray(vector <vector <char> >& in, const int rows) {
	int centerSize1 = (rows / 2);
	int centerSize2 = (rows / 2) + 1;
	int size = rows;
	for (int i = 0; i < rows; i++) {
		for (int j = centerSize1; j < centerSize2; j++) {
			in[i][j] = '*';
		}
		if (size > (rows / 2) + 1) {
			--size;
			--centerSize1;
			++centerSize2;
		}
		else {
			++centerSize1;
			--centerSize2;
		}
	}
}

int main()
{
	vector <vector <char> > in; 
	int rows;
	cin >> rows;
	createZeroMatrix(in, rows);
	starRhombusArray(in, rows);
	writeVectorVector(in);
	return 0;
}
