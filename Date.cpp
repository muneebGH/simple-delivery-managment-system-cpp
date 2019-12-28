#include"date.h"
void Date::setYears(int y)
{
	if (y >= 0)
	{
		year = y;
	}
	else
	{
		exit(0);
	}
}


void Date::setMonths(int m)
{
	if (m >0 && m <= 12)
	{
		month = m;
	}
	else
	{
		exit(0);
	}
}

void Date::setDay(int d)
{
	int pass;
	if (month == 0)
	{
		pass = 0;
	}
	else
	{
		pass = month - 1;
	}
	int maxDays = getMonthDays(pass);
	if (d > maxDays || d < maxDays)
	{
		return;
	}
	day = d;

}

void Date::setDate(int y, int m, int d)
{
	setYears(y);
	setMonths(m);
	setDay(d);
}

int Date::getYears()
{
	return year;
}

int Date::getMonths()
{
	return month;
}

int Date::getDay()
{
	return day;
}

void Date::printDate()
{
	cout << day << " : " << month << " : " << year << endl;
}


void Date::incDay(int d)
{
	int maxdays = getMonthDays(month);
	int temp;
	temp = day + d;
	if (temp <= maxdays)
	{
		day = temp;
	}
	else
	{
		
		if (temp > 356)
		{
			while (temp > 365)
			{
				if (isLeapYear())
					temp = temp - 366;
				else
					temp = temp - 365;

				incYear();
				
			}
		}
		int counter = 0;
		maxdays = getMonthDays(month);
		while (temp > maxdays)
		{
			temp = temp - getMonthDays(month);
			incMonth();
			maxdays = getMonthDays(month);
			
		}
		day = temp;
		
	}
}

void Date::incMonth(int m)
{
	int temp = month + m;
	if (temp <= 12)
	{
		month = temp;
	}
	else
	{
		int remainder = 0;
		remainder = temp % 12;
		if (remainder == 0)
		{
			remainder = 1;
		}
		month = remainder;
		int incYearCount = temp / 12;
		incYear(incYearCount);
	}
}


void Date::incYear(int y)
{
	year = year + y;
}


Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}


Date::Date(int d, int m, int y)
{
	year=y;
	month = m;
	day= d;
}


int Date::getMonthDays(int m)
{
	int days = 0;

	

	if (m == 1)
	{
		days = 31;
		return days;
	}


	if (m == 2 && isLeapYear())
	{
		days = 29;
		return days;
	}
	else if (m == 2 && !isLeapYear())
	{
		days = 28;
		return days;
	}
	int forEven;
	int forOdd;

	if (m <= 7)
	{
		forEven = 30;
		forOdd = 31;
	}
	else
	{
		forEven = 31;
		forOdd = 30;
	}

	if (m % 2 == 0)
	{
		return forEven;
	}
	else
	{
		return forOdd;
	}
	
}

bool Date::isLeapYear()
{
	float ans;
	bool A=false, B=false, C=false;
	ans = year % 4;
	if (ans == 0.0)
	{
		A = true;
	}

	ans = year % 100;
	if (ans == 0.0)
	{
		B = true;
	}

	if (B)
	{
		ans = year % 400;
		if (ans == 0.0)
		{
			C = true;
		}

	}

	if (A == true && B == false)
	{
		return true;
	}
	else if (A == true && B == true)
	{
		if (C)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}