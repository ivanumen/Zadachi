#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
vector <int> intToVector(T number) {
	vector <T> decomposition;
	int secondNumber;
	while (number > 0) {
		secondNumber = number % 10;
		number /= 10;
		decomposition.push_back(secondNumber);
	}
	reverse(decomposition.begin(), decomposition.end());
	return decomposition;
}

void increaseTheEvenNumbers(vector <int>& in) {
	for (int i = 0; i < in.size(); i++) {
		if (in[i] % 2 == 0) {
			++in[i];
		}
	}
}

template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem;
	}
}

int main()
{
	int number;
	cin >> number;
	vector <int> in = intToVector(number);
	increaseTheEvenNumbers(in);
	writeVector(in);
	return 0;
}

