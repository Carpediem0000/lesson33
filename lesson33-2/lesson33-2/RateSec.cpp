#include "RateSec.h"

RateSec::RateSec()
{
    this->price_per_sec = 0;
}

RateSec::RateSec(string name, double price):Rate(name)
{
    setPrice(price);
}

void RateSec::setPrice(double price)
{
    this->price_per_sec = price;
}

double RateSec::getPrice() const
{
    return price_per_sec;
}

double RateSec::calcCost(int sec) const
{
    if (sec < 0)
        throw new SecondsException(name, sec);
    return price_per_sec * sec;
}

void RateSec::show() const
{
    cout << "\t" << type() << endl;
    cout << "Name: " << name << endl;
    cout << "Price per seconds: " << price_per_sec << "uah\n";
}

string RateSec::type() const
{
    return "RateSec";
}
