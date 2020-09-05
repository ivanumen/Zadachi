#include <iostream>
#include <vector>

using namespace std;

vector <char> svap(const int number) {
	vector <char> GCV = {'G', 'C', 'V'};
	for (int i = 0; i < number; i++) {
		swap(GCV[2], GCV[1]);
		swap(GCV[1], GCV[0]);
	}
	return GCV;
}


template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem;
	}
}

int main()
{
	int number, iteration;
	cin >> iteration;
	for (int i = 0; i < iteration; i++) {
		cin >> number;
		writeVector(svap(number));
		cout << endl;
	}
}

