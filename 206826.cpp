#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

template <class T>
void readVector(vector <T>& in, int number = -1) {
	if (number == -1) {
		cin >> number;
	}
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem;
	}
}


bool checkDistance(const vector<int>& in, int cows, const int distance) {
	int lastCow = in[0];
	cows--;
	for (int i = 1; i < in.size(); i++) {
		if (in[i] - lastCow >= distance) {
			--cows;
			lastCow = in[i];
		}
	}
	return cows <= 0;
}

int binSearchMaxDistants(const vector<int>& in, const int cows) {
	int left = 0;
	int right = in[in.size() - 1];
	int ans = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (checkDistance(in, cows, mid)) {
			left = mid + 1;
			ans = mid;
		}
		else {
			right = mid - 1;
		}
	}
	return ans;
}

int main()
{
	int stalls, cows;
	vector<int> in;
	cin >> stalls >> cows;
	readVector(in, stalls);
	cout << binSearchMaxDistants(in, cows);
	return 0;
}