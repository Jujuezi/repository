#include "pig.h"
#include<QDebug>
pig::pig()
{
    name="猪";
    id=0;
    weight=0;
}

void pig::slim()
{
    this->weight-=5;
}

void  pig::feedFd(int i)
{
    switch (i)
    {
    case 1:
    {
        this->starvation+=10;
        if(this->starvation+10>=100)
        this->starvation=100;
        break;
    }
    case 2:
    {
        this->starvation+=20;
        if(this->starvation+20>=100)
        this->starvation=100;
        break;
    }
    case 3:
    {
        this->starvation+=50;
        if(this->starvation+50>=100)
        this->starvation=100;
    }
    default:
        break;
    }
//    qDebug()<<"喂食成功";
}

whitePig::whitePig()
{
    name="白猪";
    id++;
    weight=50;
    starvation=70;
}
void whitePig::growUp()
{
    if(this->starvation>0)
    {
    this->weight+=1;
    this->starvation-=1;
    }
    if(this->weight>=200)
    {
        this->weight=200;
    }
}
blackPig::blackPig()
{
    name="黑猪";
    id++;
    weight=60;
    starvation=60;
}
void blackPig::growUp()
{
    if(this->starvation>0)
    {
    this->weight+=2;
    this->starvation-=1;
    }
    if(this->weight>=300)
    {
        this->weight=300;
    }
}
huaPig::huaPig()
{
    name="花猪";
    id++;
    weight=70;
    starvation=30;
}
void huaPig::growUp()
{
    if(this->starvation>0)
    {
    this->weight+=1;
    this->starvation-=5;
    }
    if(this->weight>=400)
    {
        this->weight=400;
    }
}
pigfarmclass::pigfarmclass()
{
    havePigNum=0;
    comb1rec=0;
    comb2rec=0;
    ifsell1=false;
    ifsell2=false;
}

bool pigfarmclass::exist()
{
    if(this->havePigNum==NULL)
        return false;
    else
        return true;
}
