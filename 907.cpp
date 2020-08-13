#include <iostream>
#include <vector>

using namespace std;

int sdvig1(int number) {
	vector <int> element(number);
	vector <int> sdvigElement(number);
	for (int i = 0; i < number; i++) {
		cin >> element[i];
	}
	sdvigElement[0] = element[number - 1];
	cout << sdvigElement[0] << " ";
	for (int i = 1; i < number; i++){
		sdvigElement[i] = element[i - 1];
		cout << sdvigElement[i] << " ";
	}
	return 0;
}

int main()
{
	int number;
	cin >> number;
	sdvig1(number);
	return 0;
}

