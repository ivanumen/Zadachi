#include <iostream>
#include <set>

using namespace std;

int numberOfDigits(string line) {
	set <string> lines;
	string linej;
	int size = 1;
	for (int i = 0; i < line.size(); i++) {
		for (int j = 0; j < line.size(); j++) {
			linej = line.substr(j, size);
			lines.insert(linej);
		}
		size++;
	}
	return lines.size();
}

int main()
{
	string line;
	cin >> line;
	cout << numberOfDigits(line);
	return 0;
}

