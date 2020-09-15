#include <iostream>
#include <vector>

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
	return decomposition;
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
	writeVector(intToVector(number));
	return 0;
}
