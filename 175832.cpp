#include <iostream>

using namespace std;

long long concert(const long long numberA, const long long numberB, const long long numberC) {
	return numberA + numberB - numberC;
}

int main()
{
	long long sang, danced, sangAndDansed;
	cin >> sang;
	cin >> danced;
	cin >> sangAndDansed;
	cout << concert(sang, danced, sangAndDansed);
	return 0;
}
