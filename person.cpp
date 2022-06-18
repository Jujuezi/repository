#include "person.h"

Person::Person()
{
    this->strength=100;
}

void Person::rest()
{
    this->strength+=1;
}

void Person::work()
{
    this->strength-=10;
}
