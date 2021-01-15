#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

template <class T1, class T2>
void readVectorPair(vector <pair<T1, T2>>& in, int number = -1) {
	if (number == -1) {
		cin >> number;
	}
	in.resize(number);
	for (auto& elem : in) {
		cin >> elem.first >> elem.second;
	}
}

float lettersInTheRating(const string& letter) {
	map<string, double> rating;
	rating["A"] = 4.00;
	rating["A-"] = 3.70;
	rating["B+"] = 3.30;
	rating["B"] = 3.00;
	rating["B-"] = 2.70;
	rating["C+"] = 2.30;
	rating["C"] = 2.00;
	rating["C-"] = 1.70;
	rating["D"] = 1.30;
	rating["D-"] = 1.00;
	rating["F"] = 0.00;
	rating["P"] = -1;
	rating["N"] = -1;
	return rating[letter];
}

float GPA(const vector <pair<int, string>>& ratings) {
	auto sumLettersAndWeight = 0.;
	auto sumWeight = 0;
	for (const auto& elem : ratings) {
		if (lettersInTheRating(elem.second) == -1) {
			continue;
		}
		auto powLettersAndWeight = (elem.first * lettersInTheRating(elem.second));
		sumLettersAndWeight += powLettersAndWeight;
		sumWeight += elem.first;
	}
	return sumWeight == 0 ? 0.00 : sumLettersAndWeight / sumWeight;
}

int main()
{
	vector <pair<int, string>> ratings;
	int number;
	while (cin >> number) {
		readVectorPair(ratings, number);
		printf("%.2f\n", GPA(ratings));
	}
	return 0;
}
