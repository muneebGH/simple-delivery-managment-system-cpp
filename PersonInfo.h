
#ifndef PersonInfo_H
#define PersonInfo_H

//class CString;
#include "CString.h"
class PersonInfo
{
private:
	CString name;
	CString adress;
	CString state;
	CString city;
	int zipCode;
public:
	PersonInfo();
	PersonInfo(CString n, CString a, CString s, CString c,int zip);
	PersonInfo(const PersonInfo & ref);
	PersonInfo operator=(const PersonInfo & ref);
	CString getName();
	CString getAdress();
	CString getSate();
	CString getCity();
	int getZipCode();
};
#endif