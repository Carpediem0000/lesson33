#pragma once
#include "Rate.h"
#include "RateSec.h"
#include "RateMin.h"
#include <vector>
#include <algorithm>

class Provider
{
	string name;
	vector<Rate*> rate;
public:
	Provider();
	Provider(string name);
	~Provider();
	const Rate* operator[] (string name);

	void setName(string name);
	string getName()const;
	int getSize()const;

	void addRate(Rate* obj);

	void show()const;
};

