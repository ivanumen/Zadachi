#include <iostream>

using namespace std;

void alphabetArray(int number) {
	int numberAlphabet;
	int numberOfSpaces = number - 1;
	for (int i = 0; i < number; i++) {
		numberAlphabet = 0;
		cout << "a";
		for (int j = 0; j < number; j++) {
			if (numberOfSpaces <= j) {
				cout << (char)('a' + numberAlphabet);
				++numberAlphabet;
			}
			else {
				cout << " ";
			}
		}
		--numberOfSpaces;
		cout << endl;
	}
}

int main()
{
	int number;
	cin >> number;
	alphabetArray(number);
}
