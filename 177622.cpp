#include <iostream>
#include <string>

using namespace std;

void indexSpaceInLine(const string line) {
	int indexSpaceStart = 0;
	int indexSpaceFinish = 0;
	bool start = true;
	for (int i = 0; i < line.size(); i++) {
		if (line[i] == ' ') {
			if (start) {
				indexSpaceStart = i;
				start = false;
			}
			indexSpaceFinish = i;
		}
	}
	if (indexSpaceFinish == 0) {
		cout << -1;
	}
	else {
		cout << indexSpaceStart << " " << indexSpaceFinish;
	}
}



int main()
{
	string line;
	getline(cin, line);
	indexSpaceInLine(line);
	return 0;
}

