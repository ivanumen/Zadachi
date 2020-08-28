#include <iostream>
#include <utility>

using namespace std;

template <class T>
const pair<T, T> divisoraQnduotient(const T number1, const T number2) {
	return make_pair(number1 / number2, number1 % number2);
}

template <class T>
void writePair(const pair<T, T>& in) {
	cout << in.first << " " << in.second;
}



int main()
{
	long long number1, number2;
	cin >> number1;
	cin >> number2;
	writePair(divisoraQnduotient(number1, number2));
	return 0;
}

