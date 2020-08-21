#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void readVector(vector <float>& in) {
	int number;
	cin >> number;
	for (int i = 0; i < number; i++) {
		float x;
		cin >> x;
		in.push_back(x);
	}
}

float sumElement() {
	float sum = 0;
	vector <float> in;
	readVector(in);
	for (int i = 0; i < in.size(); i++) {
		sum += in[i];
	}
	return sum;
}

int main()
{
	printf("%.1f", sumElement());
	return 0;
}
