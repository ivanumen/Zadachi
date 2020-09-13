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

template <class T>
T multNoZeroVector(const vector <T>& in) {
	T ans = 1;
	for (const auto elem : in) {
		if (elem != 0) {
			ans *= elem;
		}
	}
	return ans;
}

int main()
{
	int number;
	cin >> number;
    cout << multNoZeroVector(intToVector(number));
	return 0;
}

