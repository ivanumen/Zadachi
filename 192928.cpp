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

int countPair(vector <int>& inB, vector <int>& inG) {
	int count = 0;
	int start = 0;
	sort(inB.begin(), inB.end());
	sort(inG.begin(), inG.end());
	for (int i = 0; i < inB.size(); i++) {
		for (int j = start; j < inG.size(); j++) {
			if (inB[i] >= inG[j]) {
				++count;
				start = j + 1;
				break;
			}
		}
	}
	return count;
}

int main()
{
	vector <int> inB, inG;
	int numberB, numberG;
	cin >> numberB >> numberG;
	readVector(inB, numberB);
	readVector(inG, numberG);
    cout << countPair(inB, inG);
	return 0;
}
