#include <iostream>
#include <vector>

using namespace std;

template <class T>
void createWhitespaceMatrix(vector <vector <T> >& in, const int rows) {
	in.resize(rows);
	for (auto& v : in) {
		v.resize(rows);
		for (auto& elem : v) {
			elem = ' ';
		}
	}
}

template <class T>
void createStarsVectorVector(vector <vector <T> >& in, const int rows) {
	int size = rows - 1;
	for (int i = 0; i < rows; i++) {
		in[i][i] = '*';
		in[size][i] = '*';
		size--;
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

int main()
{
	vector <vector <char> > in;
	int rows;
	cin >> rows;
	createWhitespaceMatrix(in, rows);
	createStarsVectorVector(in, rows);
	writeVectorVector(in);
	return 0;
}

