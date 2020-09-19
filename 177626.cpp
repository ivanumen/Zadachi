#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int journey() {
	int countCities, onFoot, teleportation;
	int countFatigue = 0;
	vector <int> cities;
	cin >> countCities >> onFoot >> teleportation;
	cities.resize(countCities);
	for (auto& elem : cities) {
		cin >> elem;
	}
	for (int i = 0; i < countCities - 1; i++) {
		if ((cities[i + 1] - cities[i]) * onFoot < teleportation) {
			countFatigue += (cities[i + 1] - cities[i]) * onFoot;
		}
		else {
			countFatigue += teleportation;
		}
	}
	return countFatigue;
}

int main()
{
    cout << journey();
}

