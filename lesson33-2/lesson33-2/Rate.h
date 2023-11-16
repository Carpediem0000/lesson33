#pragma once
#include <iostream>
#include <string>
#include "MobileException.h"
using namespace std;

class Rate
{
protected:
	string name;
public:
	Rate();
	Rate(string name);

	void setName(string name);
	string getName()const;

	virtual double calcCost(int sec)const = 0;
	virtual void show()const = 0;
	virtual string type()const = 0;
};

