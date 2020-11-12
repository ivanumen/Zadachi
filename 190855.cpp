#include <iostream>
#include <vector>

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

void starAndSpeceVectorVector(vector <vector <char>>& in, const int number) {
	bool star = true;
	int currentSize = 1;
	in.resize(number);
	for (auto& v : in) {
		v.resize(number);
		for (auto& elem : v) {
			if (star) {
				elem = '*';
				star = false;
				continue;
			}
			else {
				elem = ' ';
				star = true;
			}
		}
		++currentSize;
		if (currentSize % 2 == 0) {
			star = false;
			continue;
		}
		else {
			star = true;
		}
	}
}

int main()
{
	vector <vector <char>> in;
	int number;
	cin >> number;
	starAndSpeceVectorVector(in, number);
	writeVectorVector(in);
	return 0;
}
