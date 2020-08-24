#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

int compositionVector(const vector <int>& in) {
	int ans = 1;
	for (int i = 0; i < in.size(); i++) {
		ans *= in[i];
		if (in[i] == 0) {
			break;
		}
	}
	return ans;
}

int main()
{
	int number;
	cin >> number;
	cout << compositionVector(intToVector(number));
	return 0;
}
