#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
void starsMatrix(vector <vector <T> >& in, const int rows) {
	in.resize(rows);
	for (auto& v : in) {
		v.resize(rows);
		for (auto& elem : v) {
			elem = "*";
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


int main()
{
	vector <vector <string> > in;
	int rows;
	cin >> rows;
	starsMatrix(in, rows);
	writeVectorVector(in);
	return 0;
}

