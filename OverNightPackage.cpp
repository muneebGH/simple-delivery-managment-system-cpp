#include"OverNightPackage.h"
OverNightPackage::OverNightPackage()
{
	additionalfee = 0.0;
}

OverNightPackage::OverNightPackage(PersonInfo s, PersonInfo r, double w, double c, double af) :Package::Package(s, r, w, c)
{
	additionalfee = af;
}

double OverNightPackage::calculateCost()
{
	return (additionalfee * getWeight()) + Package::calculateCost();

}
