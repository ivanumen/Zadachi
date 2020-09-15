#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
vector <int> intToVector(T number) {
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

vector <int> swapFirstAndSecond(vector <int>& in) {
	int first = in[in.size() - 2];
	int second = in[in.size() - 3];
	in[in.size() - 2] = second;
	in[in.size() - 3] = first;
	return in;
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
    writeVector(swapFirstAndSecond(in));
}
