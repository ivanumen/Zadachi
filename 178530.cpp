#include <iostream>
#include <vector>

using namespace std;

template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem << endl;
	}
}

template <class T>
void readVectorVector(vector <vector <T> >& in) {
	int rows;
	cin >> rows;
	in.resize(rows);
	for (auto& v : in) {
		v.resize(rows);
		for (auto& elem : v) {
			cin >> elem;
		}
	}
}

vector <int> sumColsMatrix(vector <vector <int> >& in) {
	vector <int> sum;
	int ans;
	for (auto& v : in) {
		ans = 0;
		for (auto& elem : v) {
			ans += elem;
		}
		sum.push_back(ans);
	}
	return sum;
}

int main()
{
	vector <vector <int> > in;
	readVectorVector(in);
	writeVector(sumColsMatrix(in));
	return 0;
}
