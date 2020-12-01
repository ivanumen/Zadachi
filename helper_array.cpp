#include <iostream>
#include <vector>

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

void writeVector(vector <int> out) {
	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}
}

vector <int> intToVector(int number) {
	vector <int> decomposition;
	int secondNumber;
	while (number > 0) {
		secondNumber = number % 10;
		number /= 10;
		decomposition.push_back(secondNumber);
	}
	reverse(decomposition.begin(), decomposition.end());
	return decomposition;
}

int sumVector(const vector <int>& in) {
	int ans = 0;
	for (int i = 0; i < in.size(); i++) {
		ans += in[i];
	}
	return ans;
}


