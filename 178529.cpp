#include <iostream>
#include <math.h>

using namespace std;

namespace NMath{
	template <class T>
	T  Pow(const T number, const int rank) {
		T elem = 1;
		for (int i = 0; i < rank; i++) {
			elem *= number;
		}
		return elem;
	}

	template <class T>
	T factorial(const T number) {
		int elem = 1;
		for (int i = 1; i <= number; i++) {
			elem *= i;
		}
		return elem;
	}
}

template <class T1, class T2>
void writePair(const pair<T1, T2>& in) {
	cout << in.first << fixed << " " << in.second << endl;
}

pair <long long, double> Square(const long long a) {
	return make_pair(a * 4, double(NMath::Pow(a, 2)));
}

pair <long long, double> Rectangle(const long long a, const long long b) {
	return make_pair((a + b) * 2, double(a * b));
}

pair <long long, double> Triangle(const long long a, const long long b, const long long c) {
	double halfMeter = (a + b + c) / 2.0;
	return make_pair(halfMeter * 2, double(sqrt(halfMeter * ((halfMeter - a) * (halfMeter - b) * (halfMeter - c)))));
}

int main()
{
	long long a, b, c;
	string figure;
	while(cin >> figure){
		if (figure == "Square"){
			cin >> a;
			writePair(Square(a));
		}
		if (figure == "Rectangle") {
			cin >> a >> b;
			writePair(Rectangle(a, b));
		}
		if (figure == "Triangle") {
			cin >> a >> b >> c;
			writePair(Triangle(a, b, c));
		}
	}
	return 0;
}

