#include"Package.h"
Package::Package()
{
	weight = 0;
	cost = 0;
}


Package::Package(PersonInfo s, PersonInfo r,double w,double c) :sender(s), reciever(r)
{
	setWeight(w);
	setCost(c);
}


void Package::setWeight(double w)
{
	weight = w >= 0 ? w : 0;
}

void Package::setCost(double c)
{
	cost = c >= 0 ? c : 0;
}

double Package::calculateCost()
{
	
	return cost * weight;
}


double Package::getWeight()
{
	return weight;
}
