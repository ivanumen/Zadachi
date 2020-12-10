#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const vector <int>& in, const int number) {
    int left = 0;
    int right = in.size() - 1;
	bool flag = false;
	int left1 = 0;
	int right1 = in.size() - 1;
	bool flag1 = false;
	int ansFirst = -1;
	int ansFinish = -1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (in[mid] >= number) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
		if (in[mid] == number) {
			flag = true;
			ansFirst = mid;
		}
		
	}
	while (left1 <= right1) {
		int mid = (left1 + right1) / 2;
		if (in[mid] <= number) {
			left1 = mid + 1;
		}
		else {
			right1 = mid - 1;
		}
		if (in[mid] == number) {
			flag1 = true;
			ansFinish = mid;
		}

	}
	
	return ansFinish == -1 ? 0 : (ansFinish - ansFirst) + 1;
}


template <class T>
void readVector(vector <T>& in, int number) {
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem;
	}
}


int main()
{
	int number, count;
	cin >> number >> count;
	vector <int> in, out;
	readVector(in, number);
	readVector(out, count);
	for (int i = 0; i < count; i++) {
		cout << binarySearch(in, out[i]) << endl;
	}
	return 0;
}


