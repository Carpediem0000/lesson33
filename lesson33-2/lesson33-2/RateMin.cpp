#include "RateMin.h"

RateMin::RateMin()
{
    this->price_per_min = 0;
}

RateMin::RateMin(string name, double price):Rate(name)
{
    setPrice(price);
}

void RateMin::setPrice(double price)
{
    this->price_per_min = price;
}

double RateMin::getPrice() const
{
    return price_per_min;
}

double RateMin::calcCost(int sec) const
{
    if (sec < 0)
        throw new SecondsException(name, sec);
    return price_per_min * sec / 60;
}

void RateMin::show() const
{
    cout << "\t" << type() << endl;
    cout << "Name: " << name << endl;
    cout << "Price per minutes: " << price_per_min << "uah\n";
}

string RateMin::type() const
{
    return "RateMin";
}
