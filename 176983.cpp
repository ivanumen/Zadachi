#include <iostream>

int ATM(int money) {
	int countBanknotes = 0;
	int count = money / 500;
	countBanknotes += count;
	money -= count * 500;
	count = money / 200;
	countBanknotes += count;
	money -= count * 200;
	count = money / 100;
	countBanknotes += count;
	money -= count * 100;
	count = money / 50;
	countBanknotes += count;
	money -= count * 50;
	count = money / 20;
	countBanknotes += count;
	money -= count * 20;
	count = money / 10;
	countBanknotes += count;
	money -= count * 10;
	if (money > 0) {
		return -1;
	}
	return countBanknotes;
}

int main()
{	
	int money;
	std::cin >> money;
    std::cout << ATM(money);
}

