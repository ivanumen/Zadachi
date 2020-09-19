#include <iostream>
#include <string>

using namespace std;

template <class T>
bool vowelLetter(const T line) {
	bool VowelLetter = false;
	if (line == 'a' || line == 'e' || line == 'i' || line == 'o' || line == 'u' || line == 'y' ||
		line == 'A' || line == 'E' || line == 'I' || line == 'O' || line == 'U' || line == 'Y') {
		VowelLetter = true;
	}
	return VowelLetter;
}

string lineNotA(const string line) {
	string lineNot = "";
	for (int i = 0; i < line.size(); i++) {
		if (line[i] == 'a') {
			lineNot += line[i];
		}
		lineNot += line[i];
	}
	return lineNot;
}

int main()
{
	string line;
	getline(cin, line);
	cout << lineNotA(line);
	return 0;
}
