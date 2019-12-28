#include<iostream>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date();
	Date(int d, int m, int y);
	void setYears(int y);
	void setMonths(int m);
	void setDay(int d);
	void setDate(int y, int m, int d);
	int getYears();
	int getMonths();
	int getDay();
	void printDate();
	void incYear(int = 1);
	void incMonth(int = 1);
	void incDay(int = 1);
	bool isLeapYear();
	int getMonthDays(int m);
};