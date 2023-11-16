#pragma once
#include <iostream>
#include <string>
using namespace std;

class MobileException
{
protected:
	string info;
public:
	MobileException(string info) { this->info = info; }

	virtual string showMessage()const = 0;
};

class SecondsException : public MobileException
{
	int sec;
public:
	SecondsException(string info, int sec) :MobileException(info) { this->sec = sec; }
	string showMessage()const {
		return "Seconds Exception: " + info + " = " + to_string(sec);
	}
};

class NameException : public MobileException
{
public:
	NameException(string info) :MobileException(info){}
	string showMessage()const {
		return "Name Exception: " + info + " = is empty";
	}
};
