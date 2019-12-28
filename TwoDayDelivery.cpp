#include"TwoDayDelivery.h"
TwoDayDelivery::TwoDayDelivery()
{
	flatFee = 0;
}

TwoDayDelivery::TwoDayDelivery(PersonInfo s, PersonInfo r, double w, double c, double ff) :Package::Package(s, r, w, c)
{
	flatFee = ff;
}

double TwoDayDelivery::calculateCost()
{
	return flatFee + Package::calculateCost();
}
