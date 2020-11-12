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
T maxElemVector(const vector <T>& in) {
	return *max_element(in.begin(), in.end());
}

template <class T>
T minElemVector(const vector <T>& in) {
	return *min_element(in.begin(), in.end());
}

vector <int> readPrimordialVector(const vector <int>& in) {
	int max = maxElemVector(in);
	int min = minElemVector(in);
	vector <int> out;
	for (int i = 0; i < in.size(); i++) {
		out.push_back(in[i] + min - max);
	}
	return out;
}

template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem << " ";
	}
}

int main()
{
	vector <int> in;
	readVector(in);
	writeVector(readPrimordialVector(in));
	return 0;
}


