
#include"OverNightPackage.h"
#include"TwoDayDelivery.h"
#include<iostream>
using namespace std;

int main()
{
	PersonInfo sender("name sender", "adress sender", "city sender", "state sender", 1);
	PersonInfo reciever("name recievr", "adress reciever", "city reciever", "state reciever ", 2);
	OverNightPackage onp(sender, reciever, 2, 2, 2);
	cout << onp.calculateCost();

	TwoDayDelivery tdd(sender, reciever, 2, 2, 2);
	cout << tdd.calculateCost();
	system("pause");
	return 0;
}

