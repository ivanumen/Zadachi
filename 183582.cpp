#include <iostream>
#include <string>

using namespace std;

string replacingCharacters(const string& inLeng) {
	string outLeng = "";
	for (int i = 0; i < inLeng.size(); i++) {
		if (inLeng[i] == 'a' && inLeng[i + 1] == 'b' && i < inLeng.size() - 1) {
			outLeng += "ups";
			++i;
		}
		else {
			outLeng += inLeng[i];
		}
	}
	return outLeng;
}

int main()
{
	string leng;
	getline(cin, leng);
	cout << replacingCharacters(leng);
	return 0;
}

