#pragma once
#include <iostream>
#include <string>
#include "Rate.h"
using namespace std;

class Caller
{
	string name;
	string phoneNum;
	double account;
	Rate* rate;
public:
	Caller();
	Caller(string name, string phoneNum, double account);
	~Caller() { delete rate; }

	void setName(string name);
	void setPhoneNum(string phoneNum);
	void setAccount(double account);
	void setRate(Rate* rate);

	string getName()const;
	string getPhoneNum()const;
	double getAccount()const;
	Rate* getRate()const;

	void show()const;
};

