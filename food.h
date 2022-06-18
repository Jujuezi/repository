#ifndef FOOD_H
#define FOOD_H
using namespace std;
class food
{
public:
    food();
    int num=0;
    int tpyeId=0;
    int price=0;
    void consume();
};

class cabbage:public food
{
public:
    cabbage();

};

class wheat:public food
{
public:
    wheat();

};

class corn:public food
{
public:
    corn();

};

#endif // FOOD_H
