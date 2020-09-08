#include <iostream>
#include <vector>

using namespace std;

int seconds(const int firstSeconds, const int lastSeconds) {
	return lastSeconds - firstSeconds;
}

int minutes(const int firstMinutes, const int lastMinutes) {
	return lastMinutes - firstMinutes;
}

int hours(const int firstHours, const int lastHours) {
	return lastHours - firstHours;
}
void olympics(vector <int>& in, const int firstSeconds, const int lastSeconds, const int firstMinutes, const int lastMinutes, const int firstHours, const int lastHours) {
	int second = seconds(firstSeconds, lastSeconds);
	int minute = minutes(firstMinutes, lastMinutes);
	int hour = hours(firstHours, lastHours);
	if (second < 0) {
		second += 60;
		--minute;
	}
	if (minute < 0) {
		minute += 60;
		--hour;
	}
	in[0] = hour;
	in[1] = minute;
	in[2] = second;
}

template <class T>
void writeVector(const vector <T>& out) {
	for (const auto& elem : out) {
		cout << elem << " ";
	}
}

int main()
{
	int firstSeconds, lastSeconds, firstMinutes, lastMinutes, firstHours, lastHours;
	vector <int> in = { 0, 0 ,0 };
	cin >> firstHours >> firstMinutes >> firstSeconds >> lastHours >> lastMinutes >> lastSeconds;
	olympics(in, firstSeconds, lastSeconds, firstMinutes, lastMinutes, firstHours, lastHours);
	writeVector(in);
	return 0;
}

