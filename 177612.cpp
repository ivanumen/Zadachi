#include <iostream>
#include <vector>

using  namespace std;

vector <int> marathon(const int prevNumber, const int nextNumber) {
	vector <int> in;
	for (int i = nextNumber; i >= prevNumber; i--) {
		in.push_back(i);
	}
	return in;
}


template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem << " ";
	}
}

int main()
{
	int prevNumber, nextNumber;
	cin >> prevNumber >> nextNumber;
	writeVector(marathon(prevNumber, nextNumber));
	return 0;
}

