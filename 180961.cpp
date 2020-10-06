#include <iostream>
#include <set>

using namespace std;

template <class T>
void readSet(set <T>& in) {
	int number, x;
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> x;
		x = abs(x);
		in.emplace(x);
	}
}



int main()
{
	set <int> elements;
	readSet(elements);
    cout << elements.size();
	return 0;
}
