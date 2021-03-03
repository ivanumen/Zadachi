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

bool binarySearch(vector <int>& in, const int number) {
	int left = 0;
	int right = in.size() - 1;
	bool flag = false;
	while (left <= right && !flag) {
		int mid = (right + left) / 2;
		if(in[mid] <= number){
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
		if (in[mid] == number) {
			flag = true;
		}
	}
	return flag;
}

int main()
{
	vector <int> in, out;
	int number, count, elem;
	cin >> number >> count;
	readVector(in, number);
	readVector(out, count);
	for (int i = 0; i < count; i++) {
		if (binarySearch(in, out[i])) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}


