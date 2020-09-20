#include <iostream>
#include <vector>


using namespace std;

vector <int> numericalDensity(const string& number) {
	vector <int> density = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int index;
	for (int i = 0; i < number.size(); i++) {
		index = number[i] - '0';
		++density[index];
	}
	return density;
}

template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem << " ";
	}
}

int main()
{
	string number;
	cin >> number;
	writeVector(numericalDensity(number));
	return 0;
}

