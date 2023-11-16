#include "Rate.h"

Rate::Rate()
{
    this->name = "Undefined";
}

Rate::Rate(string name)
{
    setName(name);
}

void Rate::setName(string name)
{
    if (name.length() < 3)
    {
        throw new NameException(name);
    }
    this->name = name;
}

string Rate::getName() const
{
    return name;
}
