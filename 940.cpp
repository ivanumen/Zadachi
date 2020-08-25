#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void readVector(vector <int>& in) {
	int number;
	cin >> number;
	for (int i = 0; i < number; i++) {
		int x;
		cin >> x;
		in.push_back(x);
	}
}

int majoringElement() {
	vector <int> in;
	readVector(in);
	unordered_map<int, int> majoringArray;
	for (int i = 0; i < in.size(); i++) {
		majoringArray[in[i]]++;
		if (majoringArray[in[i]] > (in.size() / 2)) {
			return in[i];
		}
	}
	return -1;
}

int main()
{
	cout << majoringElement();
	return 0;
}