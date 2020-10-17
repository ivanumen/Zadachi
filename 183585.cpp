#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void readVector(vector <T>& in) {
	int number;
	cin >> number;
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem;
	}
}

template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem << " ";
	}
}

vector <int> initPrevElem(vector <int>& in) {
	vector <int> out;
	out.push_back(in[0]);
	for (int i = 1; i < in.size(); i++) {
		out.push_back(in[i] - in[i - 1]);
	}
	return out;
}

int main()
{
	vector <int> in;
	readVector(in);
	writeVector(initPrevElem(in));
	return 0;
}

