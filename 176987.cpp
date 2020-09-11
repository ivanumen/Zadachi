#include <iostream>
#include <vector>

using namespace std;

template <class T>
void readVector(vector <T>& in) {
	int number;
	cin >> number;
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem;
	}
}

template <class T>
pair <int, T> sumAndCountNegativVector(const vector <T>& in) {
	T ans = 0;
	int count = 0;
	for (const auto elem : in) {
		if (elem < 0) {
			ans += elem;
			++count;
		}
	}
	return make_pair(count, ans);
}

void writePair(const pair<int, double>& out) {
	cout << out.first << " ";
	printf("%.2F", out.second);
}

int main()
{
	vector <double> in;
	readVector(in);
	writePair(sumAndCountNegativVector(in));
}