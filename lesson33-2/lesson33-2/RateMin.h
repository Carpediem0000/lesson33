#pragma once
#include "Rate.h"
class RateMin :public Rate
{
    double price_per_min;
public:
    RateMin();
    RateMin(string name, double price);

    void setPrice(double price);
    double getPrice()const;

    double calcCost(int sec)const override;
    void show()const override;
    string type()const override;
};

