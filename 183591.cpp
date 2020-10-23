#include <iostream>

using namespace std;

pair <int, int> sumPointAndNumber(const int pointA, const int pointB, const int pointC, const int pointD, const int number) {
	return make_pair(pointA + pointC + number, pointB + pointD + number);
}

template <class T>
void writePair(const pair<T, T>& in) {
	cout << in.first << " " << in.second;
}

int main()
{
	int pointA, pointB, pointC, pointD, number;
	cin >> pointA >> pointB >> pointC >> pointD >> number;
	writePair(sumPointAndNumber(pointA, pointB, pointC, pointD, number));
	return 0;
}


