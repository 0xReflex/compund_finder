#include <iostream>

int main()
{
	int interest = 0;
	int amount = 0;
	int time = 0;
	int money;

	std::cout << "enter interest percent:";
	std::cin >> interest;
	std::cout << "enter amount:";
	std::cin >> amount;
	std::cout << "enter enter time:";
	std::cin >> time;

	for (int i = 0; i <= time; i++)
	{
		money = interest * amount / 100;
		amount += money;
	}
	std::cout << amount;
}