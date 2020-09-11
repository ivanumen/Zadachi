#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
vector <int> fromDecimalToBinary(T number) {
	vector <int> binari;
	int binariNumber;
	while (number > 0) {
		binariNumber = number % 2;
		number /= 2;
		binari.push_back(binariNumber);
	}
	reverse(binari.begin(), binari.end());
	return binari;
}


int negativeBus() {
	int number, elem;
	vector <int> in;
	int size = 0;
	cin >> number;
	int count = 0;
	for (int i = 0; i < number; i++) {
		cin >> elem;
		if (elem <= 1) {
			continue;
		}
		in = fromDecimalToBinary(elem);
		size = in.size() - 2;
		if (in[size] == 1) {
			++count;
		}
		in.clear();
	}
	return count;
}

int main()
{
	cout << negativeBus();
	return 0;
}


