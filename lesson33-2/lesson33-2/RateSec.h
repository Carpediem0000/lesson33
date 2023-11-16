#pragma once
#include "Rate.h"
class RateSec :public Rate
{
protected:
    double price_per_sec;
public:
    RateSec();
    RateSec(string name, double price);

    void setPrice(double price);
    double getPrice()const;

    double calcCost(int sec)const override;
    void show()const override;
    string type()const override;
};

