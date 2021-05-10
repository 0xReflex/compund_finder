#include <iostream>

int main()
{
	float interest;
	int amount;
	int time;
	int money ;
	int Money_You_Add = 0;

	std::cout << "enter interest percent:";
	std::cin >> interest;
	std::cout << "enter amount:";
	std::cin >> amount;
	std::cout << "enter time:";
	std::cin >> time;
	std::cout << "enter money you add per month:";
	std::cin >> Money_You_Add;
	Money_You_Add = Money_You_Add * 12;
	
	for (int i = 1; i <= time; i++)
	{
		money = (interest/100) * (amount + Money_You_Add);
		amount += money + Money_You_Add;
	}
	std::cout << amount;
	std::cin.get();
}