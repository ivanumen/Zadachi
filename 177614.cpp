#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
    cout << min(min(a, b), min(a,c)) << " " << min(max(a, b), min(max(a, c), max(b, c))) 
		<< " " << max(max(a, b), max(a, c));
	return 0;
}

