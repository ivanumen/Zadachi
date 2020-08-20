#include <iostream>

using namespace std;

long long sumChildren(long long boys, long long girls) {
	return boys + girls;
}

int main()
{
	long long boys, girls;
	cin >> boys;
	cin >> girls;
	cout << sumChildren(boys, girls);
	return 0;
}
