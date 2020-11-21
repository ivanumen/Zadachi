#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void writeVectorVector(const vector <vector <T> >& out) {
	for (const auto& v : out) {
		for (const auto& elem : v) {
			cout << elem;
		}
		cout << endl;
	}
}

void readRectangle(vector <vector <char>>& in, const int number) {
	in.resize(4);
	for (auto& v : in) {
		v.resize(number);
		for (auto& elem : v) {
			elem = '#';
		}
	}
}

int main()
{
	vector <vector <char>> in;
	int number;
	cin >> number;
	readRectangle(in, number);
	writeVectorVector(in);
	return 0;
}


