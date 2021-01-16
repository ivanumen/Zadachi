#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point {
	int x;
	int y;
};


void readVectorPointUntilEOF(vector <point>& in) {
	point elem;
	while (cin >> elem.x >> elem.y) {
		in.push_back(elem);
	}
}


void writeVectorPoint(const vector <point>& out) {
	for (const auto& elem : out) {
		cout << elem.x << " " << elem.y << endl;
	}
}

void searchPoint(vector <point>& in) {
	sort(in.begin(), in.end(), [](point& a, point& b) {
		return a.x != b.x ? a.x < b.x : a.y > b.y;
	});
}

int main()
{
	vector <point> in;
	readVectorPointUntilEOF(in);
	searchPoint(in);
	writeVectorPoint(in);
	return 0;
}

