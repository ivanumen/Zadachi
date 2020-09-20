#include <iostream>
#include <string>

using namespace std;



string lineNotOdd(const string line) {
	string lineNot = "";
	int digit;
	for (int i = 0; i < line.size(); i++) {
		if (isdigit(line[i])) {
			digit = line[i] - '0';
			if (digit % 2 > 0) {
				continue;
			}
		}
		lineNot += line[i];
	}
	return lineNot;
}

int main()
{
	string line;
	getline(cin, line);
	cout << lineNotOdd(line);
	return 0;
}
