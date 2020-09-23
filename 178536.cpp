#include <iostream>

using namespace std;

void credit(double money, const int percent, const int payment) {
	double prevMoney = 0;
	int countPayment = 0;
	while (money > 0) {
		for (int i = 0; i < 7; i++) {
			money += (money * percent) / 100;
		}
		if (((money * percent) / 100) > payment) {
			cout << -1;
			return;
		}
		prevMoney = money;
		money -= payment;
		++countPayment;
	}
	cout << countPayment << " ";
	printf("%.2f", prevMoney);
}

int main()
{
	int percent, payment;
	double money;
	cin >> money >> percent >> payment;
	credit(money, percent, payment);
}

