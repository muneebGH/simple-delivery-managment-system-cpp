#include"Date.h"
int main()
{
	Date a{3,3,2015};
	a.printDate();
	a.incDay(-1);
	a.incDay(-1);
	a.printDate();
	
	system("pause");
	return 0;
	
}