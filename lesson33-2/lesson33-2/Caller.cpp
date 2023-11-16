#include "Caller.h"

Caller::Caller()
{
    this->name = "Unknown";
    this->phoneNum = "380*********";
    this->account = 0;
    this->rate = nullptr;
}

Caller::Caller(string name, string phoneNum, double account)
{
    setName(name);
    setPhoneNum(phoneNum);
    setAccount(account);
    this->rate = nullptr;
}

void Caller::setName(string name)
{
    this->name = name;
}

void Caller::setPhoneNum(string phoneNum)
{
    this->phoneNum = phoneNum;
}

void Caller::setAccount(double account)
{
    this->account = account;
}

void Caller::setRate(Rate* rate)
{
    this->rate = rate;
}

string Caller::getName() const
{
    return name;
}

string Caller::getPhoneNum() const
{
    return phoneNum;
}

double Caller::getAccount() const
{
    return account;
}

Rate* Caller::getRate() const
{
    return rate;
}

void Caller::show() const
{
    cout << "Name: " << name << endl;
    cout << "Phone number: " << phoneNum << endl;
    cout << "Account: " << account << "uah" << endl;
    rate->show();
}
