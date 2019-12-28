#include<iostream>
using namespace std;
#include"PersonInfo.h"

#include "CString.h"
PersonInfo::PersonInfo()
{

}


PersonInfo::PersonInfo(CString n, CString a, CString s, CString c,int zip):name(n),adress(a),state(s),city(c),zipCode(zip)
{

}

CString PersonInfo::getName()
{
	return name;
}

CString PersonInfo::getAdress()
{
	return adress;
}

CString PersonInfo::getCity()
{
	return city;
}

CString PersonInfo::getSate()
{
	return state;
}


int PersonInfo::getZipCode()
{
	return zipCode;
}


PersonInfo::PersonInfo(const PersonInfo & ref):name(ref.name),city(ref.city),adress(ref.adress),state(ref.state),zipCode(ref.zipCode)
{

}

PersonInfo PersonInfo::operator=(const PersonInfo & ref)
{
	zipCode = ref.zipCode;
	name = ref.name;
	adress = ref.adress;
	state = ref.state;
	city = ref.city;
	return *this;
}

