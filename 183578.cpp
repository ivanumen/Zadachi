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

int main()
{
	int number;
	cin >> number;
	vector <int> in = intToVector(number);
	cout << in[in.size() - 3];
	return 0;
}

