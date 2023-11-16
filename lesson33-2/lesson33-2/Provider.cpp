#include "Provider.h"

Provider::Provider()
{
    this->name = "Provider";
}

Provider::Provider(string name)
{
    setName(name);
}

Provider::~Provider()
{
    for (Rate* obj: rate)
    {
        delete obj;
    }
    rate.clear();
}

const Rate* Provider::operator[](string name)
{
    for (Rate* obj: rate)
    {
        if (obj->getName() == name)
        {
            return obj;
        }
    }
    return nullptr;
}

void Provider::setName(string name)
{
    this->name = name;
}

string Provider::getName() const
{
    return name;
}

int Provider::getSize() const
{
    return rate.size();
}

void Provider::addRate(Rate* obj)
{
    rate.push_back(obj);
}

void Provider::show() const
{
    cout << "\t" << name << endl;
    for (Rate* obj : rate)
    {
        cout << "----------------------------\n";
        obj->show();
        cout << "----------------------------\n";
    }
}
