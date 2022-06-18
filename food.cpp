#include "food.h"
food::food()
{

}

void food::consume()
{
    this->num--;
}

cabbage::cabbage()
{
    this->num=0;
    this->price=20;
    this->tpyeId=1;
}

wheat::wheat()
{
    this->num=0;
    this->price=30;
    this->tpyeId=2;
}

corn::corn()
{
    this->num=0;
    this->price=50;
    this->tpyeId=3;
}


