#include <iostream>
#include <vector>
#include <string>

using namespace std;

int phoneKeys(const char in) {
	if (in == 'A') {
		return 2;
	}
	if (in == 'B') {
		return 22;
	}
	if (in == 'C') {
		return 222;
	}
	if (in == 'D') {
		return 3;
	}
	if (in == 'E') {
		return 33;
	}
	if (in == 'F') {
		return 333;
	}
	if (in == 'G') {
		return 4;
	}
	if (in == 'H') {
		return 44;
	}
	if (in == 'I') {
		return 444;
	}
	if (in == 'J') {
		return 5;
	}
	if (in == 'K') {
		return 55;
	}
	if (in == 'L') {
		return 555;
	}
	if (in == 'M') {
		return 6;
	}
	if (in == 'N') {
		return 66;
	}
	if (in == 'O') {
		return 666;
	}
	if (in == 'P') {
		return 7;
	}
	if (in == 'Q') {
		return 77;
	}
	if (in == 'R') {
		return 777;
	}
	if (in == 'S') {
		return 7777;
	}
	if (in == 'T') {
		return 8;
	}
	if (in == 'U') {
		return 88;
	}
	if (in == 'V') {
		return 888;
	}
	if (in == 'W') {
		return 9;
	}
	if (in == 'X') {
		return 99;
	}
	if (in == 'Y') {
		return 999;
	}
	if (in == 'Z') {
		return 9999;
	}
	if (in == ' ') {
		return 0;
	}
}

template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem << " ";
	}
}

vector <int> inputDigits(const string& in) {
	vector <int> out;
	for (int i = 0; i < in.size(); i++) {
		out.push_back(phoneKeys(in[i]));
	}
	return out;
}


int main()
{
	string in;
	getline(cin, in);
	writeVector(inputDigits(in));
	return 0;
}


