#include <iostream>


using namespace std;

int daysFromSeconds(const long long seconds) {
	return seconds / 86400;
}

int hoursFromSeconds(const long long seconds) {
	return (seconds % 86400) / 3600;
}

int minetsFromSeconds(const long long seconds) {
	return ((seconds % 86400) % 3600) / 60;
}


int main()
{
	long long seconds;
	cin >> seconds;
	cout << daysFromSeconds(seconds) << " "
		<< hoursFromSeconds(seconds) << " "
		<< minetsFromSeconds(seconds) << " "
		<< ((seconds % 86400) % 3600) % 60;
	return 0;
}

