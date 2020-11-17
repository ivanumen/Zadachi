#include <iostream>
#include <string>

using namespace std;

bool arifmaticalOperation(const char in) {
	return in == '+' || in == '-' || in == '/' || in == '*' || in == '%' ? true : false;
}

int countArifmaticalOperation(const string& in) {
	int count = 0;
	for (int i = 0; i < in.size(); i++) {
		if (arifmaticalOperation(in[i])) {
			++count;
			++i;
		}
	}
	return count;
}

int main()
{
	string in;
	cin >> in;
	cout << countArifmaticalOperation(in);
	return 0;
}


