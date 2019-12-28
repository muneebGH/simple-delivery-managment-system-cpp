#ifndef Twodaydelivery_H
#define Twodaydelivery_H
#include"Package.h"
class TwoDayDelivery:public Package
{
private:
	double flatFee;
public:
	TwoDayDelivery();
	TwoDayDelivery(PersonInfo s, PersonInfo r, double w, double c,double ff);
	double calculateCost();

};

#endif