#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void readVector(vector <T>& in, const int number) {
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem;
	}
}

long long minSumMultiVector(vector <int>& in1, vector <int>& in2) {
	long long sum = 0;
	sort(in1.begin(), in1.end());
	sort(in2.begin(), in2.end(), greater<int>());
	for (int i = 0; i < in1.size(); i++) {
		sum += (long long)(in1[i]) * (long long)(in2[i]);
	}
	return sum;

}

int main()
{
	int number;
	vector <int> in1, in2;
	cin >> number;
	readVector(in1, number);
	readVector(in2, number);
	cout << minSumMultiVector(in1, in2);
	return 0;
}
