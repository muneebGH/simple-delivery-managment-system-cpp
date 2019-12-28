#ifndef OverNightPackage_H
#define OverNightPackage_H

#include"Package.h"
class OverNightPackage:public Package
{
private:
	double additionalfee;
public:

	OverNightPackage();
	OverNightPackage(PersonInfo s, PersonInfo r, double w, double c, double additionalFee);
	double calculateCost();
};

#endif