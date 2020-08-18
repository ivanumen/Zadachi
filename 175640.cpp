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

void writeVector(vector <int> out) {
	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}
}

int main()
{
	int number; 
	cin >> number;
	writeVector(intToVector(number));
}

