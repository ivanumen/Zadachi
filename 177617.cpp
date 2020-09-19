#include <iostream>
#include <string>

using namespace std;

string lineNotA(const string line) {
	string lineNot = "";
	for (int i = 0; i < line.size(); i++) {
		if (line[i] != 'a') {
			lineNot += line[i];
		}
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

