#ifndef Package_H
#define Package_H

#include<iostream>
using namespace std;


#include"PersonInfo.h"

class Package
{
private:
	PersonInfo sender;
	PersonInfo reciever;
	double weight;
	double cost;
public:
	Package();
	Package(PersonInfo s,PersonInfo r, double w,double c);
	void setWeight(double w);
	void setCost(double c);
	double calculateCost();
	double getWeight();

};


#endif