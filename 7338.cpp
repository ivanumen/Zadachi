#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> intToVector(int number) {
	vector <int> decomposition;
	int secondNumber;
	while(number > 0){
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

int constantSumNumbers() {
	int number, ans, ansNumber;
	int sumNumbers = 0;
	cin >> number;
	for (int i = 10; i < 100; i++) {
		ans = sumVector(intToVector(i));
		ansNumber = sumVector(intToVector(i * number));
		if (ans == ansNumber) {
			++sumNumbers;
		}
	}
	return sumNumbers;
}

int main()
{
	cout << constantSumNumbers();
	return 0;
}