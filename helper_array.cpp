#include <iostream>
#include <vector>

using namespace std;

void readVector(vector <int>& in) {
	int number;
	cin >> number;
	for (int i = 0; i < number; i++) {
		int x;
		cin >> x;
		in.push_back(x);
	}
}

void writeVector(vector <int> out) {
	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}
}



int main()
{
	vector <int> in;
	readVector(in);
	writeVector(in);
	return 0;
}