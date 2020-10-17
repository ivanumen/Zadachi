#include <iostream>
#include <vector>

using namespace std;

template <class T>
void writeVectorVector(const vector <vector <T> >& out) {
	for (const auto& v : out) {
		for (const auto& elem : v) {
			cout << elem;
		}
		cout << endl;
	}
}

void createArrayStars(vector <vector <char> >& in) {
	int size;
	cin >> size;
	int countStar = size;
	in.resize(size);
	for (auto& v : in) {
		v.resize(countStar);
		for (auto& elem : v) {
			elem = '*';
		}
		--countStar;
	}
}

int main()
{
	vector <vector <char> > in;
	createArrayStars(in);
	writeVectorVector(in);
	return 0;
}
