#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void readVector(vector <T>& in, int number) {
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem;
	}
}

int splittingIntoSubarrays(const vector <int>& in, int subarrays, const int number) {
	int sumSubarray = 0;
	for (int i = 0; i < in.size(); i++) {
		sumSubarray += in[i];
		if (sumSubarray > number) {
			sumSubarray = in[i];
			--subarrays;
		}
		if (subarrays <= 0 || in[i] > number) {
			return 0;
		}
	}
	return 1;
}

template <class T>
T sumVector(const vector <T>& in) {
	T ans = 0;
	for (const auto elem : in) {
		ans += elem;
	}
	return ans;
}

int binarySearch(const vector <int>& in, const int subarrays) {
	int ans; 
	int left = 0;
	int right = abs(sumVector(in));
	while (left <= right) {
		int mid = (left + right) / 2;
		if (splittingIntoSubarrays(in, subarrays, mid) == 1) {
			ans = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return ans;
}

int main()
{
	vector <int> in;
	int subarrays, number;
	cin >> number >> subarrays;
	readVector(in, number);
    cout << binarySearch(in, subarrays);
	return 0;
}
